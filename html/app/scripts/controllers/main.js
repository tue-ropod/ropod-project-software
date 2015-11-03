'use strict';

angular.module('EdGuiApp')
  .controller('MainCtrl', function($scope, robot) {

    // Super hacky implementation ;; don't know how to properly interact with these modules, do you know Ramon?
    $scope.entitySelection = function(action) {
      var menu = document.getElementById('action-menu');
      menu.style.opacity = 1.0;

      menu.style.left = action.event.offsetX + 'px';
      menu.style.top = action.event.offsetY + 'px';

      menu.children[0].innerHTML = action.entity.id;
    }

    // Options for the circular menu
    $scope.options = {
      content: 'Menu',
      isOpen: false,
      toggleOnClick: true,
      items: [
        {
          content: 'Inspect',
          onclick: function () {
            console.log('Inspecting ....');

            var elm = document.getElementById('action-menu');

            robot.actionServer.doAction('inspect', elm.children[0].innerHTML);

            elm.style.opacity = 0;
          }
        }, {
          content: 'Grab',
          onclick: function () {
            console.log('Grabbing ....');

            var elm = document.getElementById('action-menu');

            robot.actionServer.doAction('grab', elm.children[0].innerHTML);

            elm.style.opacity = 0;
          }
        }, {
          content: 'Look at',
          onclick: function () {
            console.log('Looking at.. ....');

            var elm = document.getElementById('action-menu');

            robot.actionServer.doAction('look_at', elm.children[0].innerHTML);

            elm.style.opacity = 0;
          }
        }
      ]
    };

    robot.ed.query();
  });
