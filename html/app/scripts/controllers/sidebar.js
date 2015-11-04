'use strict';

angular.module('EdGuiApp')
  .controller('SidebarCtrl', function ($scope, $timeout, robot) {

    // query ed with 1 sec interval
    function updateImage() {
      $timeout(function () {
        robot.head.getImage(230, function(rgb_image_url, depth_image_url) {
          $scope.kinect_image = rgb_image_url;
          updateImage();
        });
      }, 1000)
    }
    updateImage();
  });
