'use strict';

angular.module('EdGuiApp')
  .controller('MainCtrl', function($scope, $interval, robot) {

    $scope.entitySelection = function(entityEvent) {
      $scope.selectedEntityEvent = entityEvent;
      $scope.$digest();
    }

    // query ed with 1 sec interval
    $interval(function() {
      robot.ed.query();
    }, 1000);

  });
