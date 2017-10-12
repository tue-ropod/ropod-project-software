#!/bin/bash

export ROS_IP=`hostname -I`

alias sshpico="ssh ropod@$PICO_IP"
alias sshpico-wired="ssh ropod@$PICO_IP_WIRED"
alias pico-core="export ROS_MASTER_URI=http://$PICO_IP:11311"
alias pico-core-wired="export ROS_MASTER_URI=http://$PICO_IP_WIRED:11311"

export ROBOT_REAL=false
