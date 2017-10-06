#!/bin/bash

alias pico-wireless="export ROS_MASTER_URI=http://192.168.44.81:11311;
                     export ROS_IP=192.168.44.81;
                     export WIRED_CONNECTION=false;"

echo "pico-wireless"

alias pico-wired="export ROS_MASTER_URI=http://10.0.0.2:11311;
                  export ROS_IP=10.0.0.2;
                  export WIRED_CONNECTION=true"
