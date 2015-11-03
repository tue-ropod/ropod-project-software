'use strict';

angular.module('EdGuiApp')
  .controller('MainCtrl', function($scope, robot) {

    // Super hacky implementation ;; don't know how to properly interact with these modules, do you know Ramon?
    $scope.entitySelection = function(action) {
      $scope.selectedEntityAction = action;
      $scope.$digest();
    }

    robot.ed.query();
  });
