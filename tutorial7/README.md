### Navigation: ED and [ROS' Move Base](http://wiki.ros.org/move_base)

... Under Construction ...

ED can be used in combination with ROS' Move Base. The [ED navigation plugin](https://github.com/tue-robotics/ed_navigation) projects all world model entities down to an occupancy grid which is published and can be used to fill a costmap in Move Base. This can then in turn be used to navigate the robot.

Requirements:
* Installed ED and ED Navigation
* Have Move Base up and running

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
