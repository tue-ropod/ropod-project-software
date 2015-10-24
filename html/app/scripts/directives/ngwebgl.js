'use strict';

angular.module('EdGuiApp')
  .directive('ngWebgl', function () {
    return {
      controller: function ($scope, robot) {
        var COLORS = [0x999999, 0x999966, 0x999933,
                        0x996699, 0x996666, 0x996633,
                        0x993399, 0x993366, 0x993333,
                        0x669999, 0x669966, 0x669933,
                        0x666699, 0x666666, 0x666633,
                        0x663399, 0x663366, 0x663333,
                        0x339999, 0x339966, 0x339933,
                        0x336699, 0x336666, 0x336633,
                        0x333399, 0x333366, 0x333333];

        var stringToColor = function (str) {
          for (var i = 0, hash = 5381; i < str.length; hash = ((hash << 5) + hash) + str.charCodeAt(i++)) ;

          if (hash < 0)
            hash = -hash;

          i = hash % COLORS.length;
          return COLORS[i];
        }

        function convertVertices(vertices, threeVertices) {
          for (var i = 0; i < vertices.length; i++) {
            threeVertices.push(
              (new THREE.Vector3()).fromArray(vertices[i])
            );
          }
        }

        function convertFaces(faces, threeFaces) {
          for (var j = 0; j < faces.length; j++) {
            var face = faces[j];
            threeFaces.push(new THREE.Face3(face[0], face[1], face[2]));
          }
        }

        function getEntityFromSceneObjectId(id) {
          var e;
          robot.ed.entities.forEach(function(v, k) {
            if (v.userdata && v.userdata.id == id)
              e = v;
          });
          return e;
        }

        $scope.$watch('selectedSceneObjectId', function(newValue, oldValue) {
          if (newValue)
          {
            var entity = getEntityFromSceneObjectId(newValue);
            console.log(entity);
          }
        }, true);

        robot.ed.watch({
          add: function (obj) {
            //console.log('add', obj);
            var geometry = new THREE.Geometry();

            convertVertices(obj.vertices, geometry.vertices);
            convertFaces(obj.faces, geometry.faces);

            geometry.computeFaceNormals();
            geometry.computeVertexNormals(true);

            var material = new THREE.MeshLambertMaterial({
              color: stringToColor(obj.id)
            });

            var mesh = new THREE.Mesh(geometry, material);

            mesh.position.fromArray(obj.position);
            mesh.quaternion.fromArray(obj.quaternion);

            $scope.scene.add(mesh);
            obj.userdata = mesh;
          },
          update: function (newObj, oldObj) {
            var mesh = newObj.userdata = oldObj.userdata;
            var geometry = mesh.geometry;

            var vupdate = newObj.vertices !== oldObj.vertices;
            var fupdate = newObj.faces !== oldObj.faces

            if (vupdate) {
              console.log('update vertices', newObj, oldObj);
              geometry.vertices = [];
              convertVertices(newObj.vertices, geometry.vertices);
            }
            if (fupdate) {
              console.log('update faces', newObj, oldObj);
              geometry.faces = [];
              convertFaces(newObj.faces, geometry.faces);
            }

            if (vupdate || fupdate) {
              geometry.computeFaceNormals(); // modifies .faces
              geometry.computeVertexNormals(true); // modifies .normals

              geometry.verticesNeedUpdate = true;
              geometry.elementsNeedUpdate = true;
              geometry.normalsNeedUpdate = true;
            }
          },
          remove: function (obj) {
            console.log('remove', obj);
            var mesh = obj.userdata;
            $scope.scene.remove(mesh);
          }
        });
      },
      scope: {
        'selectedSceneObjectId': '='
      },
      link: function postLink(scope, element, attrs) {

        var cameraControls, raycaster, renderer, light, mouse,
          contW = element[0].offsetWidth,
          contH = element[0].offsetHeight;

        scope.init = function () {

           // Camera
          scope.camera = new THREE.PerspectiveCamera(75, contW / contH, 0.1, 1000);

          // For interaction via click
          raycaster = new THREE.Raycaster();
          mouse = new THREE.Vector2();

          scope.camera.position.x = 0;
          scope.camera.position.y = -3;
          scope.camera.position.z = 3;

          scope.camera.up = new THREE.Vector3(0, 0, 1);

          // Scene
          scope.scene = new THREE.Scene();

          // Lights
          scope.scene.add(new THREE.AmbientLight(0x404040));
          light = new THREE.DirectionalLight(0xffffff);
          light.position.set(3, 12, 8);
          scope.scene.add(light);

          function webglAvailable() {
            try {
              var canvas = document.createElement( 'canvas' );
              return !!( window.WebGLRenderingContext && (
                canvas.getContext( 'webgl' ) ||
                canvas.getContext( 'experimental-webgl' ) )
              );
            } catch ( e ) {
              return false;
            }
          }

          if (webglAvailable()) {
            renderer = new THREE.WebGLRenderer();
          } else {
            renderer = new THREE.CanvasRenderer();
          }

          renderer = new THREE.WebGLRenderer( { antialias: true } );
          renderer.setClearColor( 0xf0f0f0 );
          renderer.setSize( contW, contH );

          cameraControls = new THREE.OrbitControls(scope.camera, renderer.domElement);
          //cameraControls.addEventListener( 'change', render ); // add this only if there is no animation loop (requestAnimationFrame)
          cameraControls.enableDamping = true;
          cameraControls.dampingFactor = 0.25;
          cameraControls.enableZoom = true;
          cameraControls.rotateSpeed = 0.1;

          // element is provided by the angular directive
          element[0].appendChild( renderer.domElement );

          window.addEventListener( 'resize', scope.onWindowResize, false );

          window.addEventListener( 'mousedown', scope.onMouseDown, false );

        };

        // -----------------------------------
        // Event listeners
        // -----------------------------------
        scope.onWindowResize = function () {

          scope.resizeCanvas();

        };

        scope.onMouseDown = function (e) {

          e.preventDefault();

          mouse.x = ( e.clientX / renderer.domElement.clientWidth ) * 2 - 1;
          mouse.y = - ( e.clientY / renderer.domElement.clientHeight ) * 2 + 1;

          raycaster.setFromCamera( mouse, scope.camera );

          var intersects = raycaster.intersectObjects( scope.scene.children );

          if ( intersects.length > 0 ) {

            scope.$apply(function(){
              if (scope.selectedSceneObjectId != intersects[0].object.id) {
                scope.selectedSceneObjectId = intersects[0].object.id;
              } else {
                scope.selectedSceneObjectId = null;
              }
            });
  
          }

        };

        // -----------------------------------
        // Updates
        // -----------------------------------
        scope.resizeCanvas = function () {

          console.log("resizing canvas");

          contW = element[0].offsetWidth;
          contH = element[0].offsetHeight;

          scope.camera.aspect = contW / contH;
          scope.camera.updateProjectionMatrix();

          renderer.setSize( contW, contH );

        };

        // -----------------------------------
        // Draw and Animate
        // -----------------------------------
        scope.animate = function () {

          requestAnimationFrame( scope.animate );

          scope.render();

        };

        scope.render = function () {

          renderer.render( scope.scene, scope.camera );

        };

        // -----------------------------------
        // Watches scope
        // -----------------------------------

        scope.$watch('selectedSceneObjectId', function(newValue, oldValue) {
            // Highlight the entity in the scene
            if (newValue != oldValue && newValue)
            {
              if (oldValue) {
                var oldObj = scope.scene.getObjectById(oldValue);

                // Restore the default material
                oldObj.material = oldObj.default_material;
              }
              var newObj = scope.scene.getObjectById(newValue);

              // Store the default color
              newObj.default_material = new THREE.MeshLambertMaterial({color: newObj.material.color});

              // Set the color
              newObj.material.color.setRGB(1, 0, 0);
            } else if (newValue === null) {
              var oldObj = scope.scene.getObjectById(oldValue);

              // Restore the default material
              oldObj.material = oldObj.default_material;
            }
        }, true);

        // Begin
        scope.init();
        scope.animate();

      }
    };
  });
