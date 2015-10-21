/*global THREE, API */

var cameraControls;

var COLORS = [0x999999, 0x999966, 0x999933,
              0x996699, 0x996666, 0x996633,
              0x993399, 0x993366, 0x993333,
              0x669999, 0x669966, 0x669933,
              0x666699, 0x666666, 0x666633,
              0x663399, 0x663366, 0x663333,
              0x339999, 0x339966, 0x339933,
              0x336699, 0x336666, 0x336633,
              0x333399, 0x333366, 0x333333];

// --------

var stringToColor = function (str) {
  for (var i = 0, hash = 5381; i < str.length; hash = ((hash << 5) + hash) + str.charCodeAt(i++)) ;

  if (hash < 0)
    hash = -hash;

  i = hash % COLORS.length;
  return COLORS[i];
}

// --------

var scene = new THREE.Scene();
var camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
var clock = new THREE.Clock();

var canvas = document.getElementById("viewer-canvas")

var width = canvas.offsetWidth;
var height = canvas.offsetHeight;

// Set the correct canvas width
canvas.width = width;
canvas.height = height;

var renderer = new THREE.WebGLRenderer({ canvas: canvas });
renderer.setSize(width, height);

renderer.setClearColor( 0xf0f0f0 );

// Lights
scene.add(new THREE.AmbientLight(0x404040));
var light = new THREE.DirectionalLight(0xffffff);
light.position.set(3, 12, 8);
scene.add(light);

camera.position.x = 0;
camera.position.y = -3;
camera.position.z = 3;

camera.up = new THREE.Vector3(0, 0, 1);

// cameraControls = new THREE.TrackballControls(camera, renderer.domElement);
// cameraControls.target.set(0, 0, 0);
// cameraControls.rotateSpeed = 1.0;
// cameraControls.zoomSpeed = 1.2;
// cameraControls.panSpeed = 0.8;

// cameraControls.noZoom = false;
// cameraControls.noPan = false;

// cameraControls.staticMoving = true;
// cameraControls.dynamicDampingFactor = 0.3;

// cameraControls.keys = [ 65, 83, 68 ];

// cameraControls.addEventListener( 'change', render );

cameraControls = new THREE.OrbitControls(camera, renderer.domElement);
//cameraControls.addEventListener( 'change', render ); // add this only if there is no animation loop (requestAnimationFrame)
cameraControls.enableDamping = true;
cameraControls.dampingFactor = 0.25;
cameraControls.enableZoom = true;
cameraControls.rotateSpeed = 0.1;


var render = function () {
  var delta = clock.getDelta();

  requestAnimationFrame(render);

  cameraControls.update(delta);

  renderer.render(scene, camera);
  // stats.update();
};

// ---------

var r = new API.Robot();
r.connect();

r.ed.watch({
  add: function (obj) {
    // console.log('add', obj);
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

    scene.add(mesh);
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
    scene.remove(mesh);
  }
});

queryEdOnce();

render();
function queryEdOnce(callback) {
  r.ed.query(callback);
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
