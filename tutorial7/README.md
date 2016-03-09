# Tutorial 7) Navigation: ED and [ROS' Move Base](http://wiki.ros.org/move_base)

## Prerequisites

- https://github.com/tue-robotics/ed.git
- https://github.com/tue-robotics/ed_gui_server.git
- https://github.com/tue-robotics/ed_rviz_plugins.git
- https://github.com/tue-robotics/ed_navigation.git

- Up and running move base configured for a static map on topic /map

## Tutorial

ED can be used in combination with ROS' Move Base or another base navigation framework that accepts a `nav_msgs/OccupancyGrid`. The [ED navigation plugin](https://github.com/tue-robotics/ed_navigation) projects all world model entities down to an occupancy grid which is published. In Move Base, the `static map layer` can be used to integrate this occupancy grid in the costmap.. This can then in turn be used to navigate the robot.

**Add** the following to the **list of plugins** in your configuration file:

<pre>
- name: navigation
  lib: libed_navigation_plugin.so
  parameters:
    occupancy_grid_publisher:
      resolution: 0.05       # Grid cell size in meters
      frame_id: /map         # Frame id of the occupancy grid
      min_z: 0.025           # All entities below min_z and above max_z are not
      max_z: 1.8             # Projected onto the occupancy grid
      default_offset: 0.7    # <-- not used for ROS' Move Base, but needs
                             # to be specified
</pre>
