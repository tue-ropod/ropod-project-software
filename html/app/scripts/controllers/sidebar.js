'use strict';

angular.module('EdGuiApp')
  .controller('SidebarCtrl', function ($scope, $interval, robot) {

    // query ed with 1 sec interval
    $interval(function() {
      robot.head.getImage(230, function(rgb_image_url, depth_image_url) {
        $scope.kinect_image = rgb_image_url;
      });
    }, 1000);   

  });
