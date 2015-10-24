'use strict';

angular.module('EdGuiApp')
	.controller('MainCtrl', function ($scope, robot) {

	$scope.scene = null;
	$scope.camera = null;
    $scope.selectedEntity = null;
    
	console.log("querying ed");
	robot.ed.query();
  });