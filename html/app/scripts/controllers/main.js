'use strict';

angular.module('EdGuiApp')
	.controller('MainCtrl', function ($scope, robot) {

    $scope.select = function () {
      console.log(arguments);
    }

    // function getEntityFromSceneObjectId(id) {
    // var e;
    // robot.ed.entities.forEach(function(v, k) {
    //   if (v.userdata && v.userdata.id == id)
    //     e = v;
    // });
    // return e;
    // }

    // $scope.$watch('selectedSceneObjectId', function(newValue, oldValue) {
    // if (newValue)
    // {
    //   var entity = getEntityFromSceneObjectId(newValue);
    //   console.log(entity);
    // }
    // }, true);

  	console.log("querying ed");
  	robot.ed.query();
  });
