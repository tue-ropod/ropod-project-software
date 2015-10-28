'use strict';

angular.module('EdGuiApp')
  .directive('ngWebgl', function (robot) {
    /*globals EdRenderer*/
    return {
      restrict: 'E',
      template: '<canvas></canvas>',
      scope: {
        'entitySelection': '&onEntitySelection'
      },
      controllerAs: 'vm',
      controller: function ($scope) {
        console.log('scope:', $scope);
      },

      link: function postLink(scope, element) {
        console.log('linking', scope);

        element.on('$destroy', function () {
          console.log('ngWebgl: element is destroyed')
        });

        scope.$on('$destroy', function () {
          console.log('ngWebgl: scope is destroyed')
        });

        var canvas = element.children();
        var parent = element.parent();

        var renderer = new EdRenderer({
          canvas: canvas.get(0),
          robot: robot
        });

        renderer.init();

        resizeCanvas();
        window.addEventListener('resize', resizeCanvas, false);

        renderer.start();

        element.on('click', function (e) {
          e.preventDefault();

          var x = (e.clientX / canvas.innerWidth()) * 2 - 1;
          var y = - (e.clientY / canvas.innerHeight()) * 2 + 1;
          var obj = renderer.pickingRay(x, y);
          console.log('pickingRay(', x, ',', y,'):', obj);
          if (obj) {
            scope.entitySelection({entity: obj, event: e});
          }
        });

        function resizeCanvas() {
          renderer.setSize(parent.innerWidth(), parent.innerHeight());
        }
      }
    };
  });
