#!/bin/bash

alias pico-wireless="export ROS_MASTER_URI=http://$PICO_IP:11311;
                     export ROS_IP=$PICO_IP;
                     export WIRED_CONNECTION=false;
                     unset ROS_HOSTNAME;"

pico-wireless

alias pico-wired="export ROS_MASTER_URI=http://$PICO_IP_WIRED:11311;
                  export ROS_IP=$PICO_IP_WIRED;
                  export WIRED_CONNECTION=true;
                  unset ROS_HOSTNAME"
