#!/bin/bash

alias pico-wireless="export ROS_MASTER_URI=http://$PICO_IP:11311;
                     export ROS_IP=$PICO_IP;
                     export WIRED_CONNECTION=false;"

echo "pico-wireless"

alias pico-wired="export ROS_MASTER_URI=http://$PICO_IP_WIRED:11311;
                  export ROS_IP=$PICO_IP_WIRED;
                  export WIRED_CONNECTION=true"
