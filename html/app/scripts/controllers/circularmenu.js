'use strict';

angular.module('EdGuiApp')
  .controller('CircularmenuCtrl', function ($scope, robot) {

    $scope.actionList = ['inspect','grab','look_at'];

    $scope.options = { items: [] };

    $scope.$watch('selectedEntityEvent', function (entityEvent) {

      console.log(entityEvent);
      
      $scope.options.isOpen = true;

      var menuElement = document.getElementById('action-menu');

      // At deselection, hide the menu
      if (!entityEvent.entity) {
         $scope.options.isOpen = false;
         menuElement.style.opacity = 0.0;
         menuElement.style.zIndex = -1;
         return;
      }
      
      menuElement.style.left = entityEvent.event.pageX + 'px';
      menuElement.style.top = entityEvent.event.pageY + 'px';
      menuElement.style.opacity = 1.0;
      menuElement.style.zIndex = 1;

      $scope.options.content = entityEvent.entity.id;

      $scope.options.items = _.map($scope.actionList, function(action) {
        return {
          content: action,
          onclick: function(event) {
            robot.actionServer.doAction(action, entityEvent.entity.id);
            $scope.entitySelection({event: event, entity: null});
          }
        }; 
      });
    });

    

  });
