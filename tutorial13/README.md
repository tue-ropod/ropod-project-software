# Tutorial 13) Grasping objects

## Prerequisites

- Tutorial 6, 7  9, 12

## Tutorial

Combining all previous tutorials allows us to manipulate objects with use of the world model. A motion planner for manipulation, e.g. MoveIt! can create a `trajectory_msgs/JointTrajectory` messages that can be used by the low level to realize a trajectory. These motion planners take an initial configuration, a robot description and an end configuration as input to create their trajectories. The initial configuration and robot description should follow from your robot description parameter and the robot state publisher. The end configuration can be queried from the world model or it can be requested with use of a TFListener when the TFPublisher ED Plugin is used.

The following video shows a grasp where the end configuration is determined with use of the query interface of the world model. The trajectory is calculated with MoveIt! and setpoints to the controller are passed with use of a reference generator that takes kinematic and dynamic constraints into account.

[![Video](http://img.youtube.com/vi/Zn9XJ5GRmpU/hqdefault.jpg)](https://youtu.be/Zn9XJ5GRmpU)
