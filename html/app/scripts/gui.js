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

var renderer;
if (webglAvailable()) {
  renderer = new THREE.WebGLRenderer();
} else {
  renderer = new THREE.CanvasRenderer();
}

renderer.setClearColor( 0xf0f0f0 );
renderer.setSize(window.innerWidth, window.innerHeight);
document.body.appendChild(renderer.domElement);

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
queryEdOnce();

function queryEdOnce(callback) {
  r.ed.query(function (entities) {
    console.time('ed.update.geometries');
    entities.forEach(function (entity, id) {

      if (!entity.vertices) {
        return;
      }

      // create the geometry
      var geometry = new THREE.BufferGeometry();

      var vertices = Float32Array.from(entity.vertices);
      geometry.addAttribute('position', new THREE.BufferAttribute(vertices, 3));

      var indices = Uint32Array.from(entity.faces);
      geometry.setIndex( new THREE.BufferAttribute(indices, 3));

      geometry.computeVertexNormals();

      // create the material
      var material = new THREE.MeshLambertMaterial({
        color: stringToColor(id)
      });

      var obj = new THREE.Mesh(geometry, material);

      if (entity.position) {
        obj.position.fromArray(entity.position);
      }
      if (entity.quaternion) {
        obj.quaternion.fromArray(entity.quaternion);
      }

      scene.add(obj);
    });
    console.timeEnd('ed.update.geometries');

    render();
  });
}
