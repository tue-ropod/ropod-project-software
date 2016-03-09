ED Tutorials
======

## [Tutorial 1) Running ED with a configuration file](tutorial1)
Basics of ED, how it works, what environment variables it needs etc.





### Specifying a more complex world

So far, we have created a configuration file which tells ED to create a world consisting of two blocks, and running a plugin which helps visualizing this world in RViz. That's nice, but not very useful. We need to create a model of the world the robot is living in, and that will be a bit more work than just adding a couple of boxes. Fortunately, ED allows you to use quite some powerful expressions to create the shapes you need. On of those is particularly useful if you already have a 2D map of the robots' environment: the height map. If you have used some sort of SLAM method (e.g., http://wiki.ros.org/gmapping) to create a 2D occupancy map of the environment, then you can almost directly use this map to specify the shape of an entity in ED.

We assume you have created a 2D occupancy map using [ROS' GMapping](http://wiki.ros.org/gmapping) and used the map saver from [ROS map server](http://wiki.ros.org/map_server) to store the map. This will leave you with two files: a PGM image file containing the occupancy grid and a YAML-file with the meta-data. The image file has white pixels for all non-occupied cells, and black pixels for occupied cells. The meta-data contains the origin of the map, and the resolution.

In some simple steps, these two files can be converted to an ED world specification:

1. Copy or move the PGM-file to the same directory in which you stored the 'my-ed-config.yaml' configuration file, and call it 'my-walls.pgm'.
2. Open the map with your favorite image editor (e.g., Gimp). Make sure all gray pixels (which are 'unknowns' in the map) are changed into white. You should only have black and white pixels.
3. Take a look at the map's YAML file. Remember the 'resolution' and 'origin' fields
4. Change 'my-ed-config.yaml' to the following:

<pre>
    world:
    - id: walls
      shape:
        heightmap:
          image: $(file my-walls.pgm)
          height: 2
          resolution: 0.025
          pose: { x: -10.0, y: -10.0, z: 0 }

    plugins:
      - name: gui_server
        lib: libed_gui_server_plugin.so
</pre>

**Note that you have to put the correct values in the 'resolution' and 'pose' field (as found in the map YAML file in step 3).**

That's it! This config file tells ED that it should load the heightmap from the specified 'my-walls.pgm' image. The 'height' field specifies how high the walls have to be.

Now, it is important to know that:

1. You do not necessarily need GMapping to do this. You can use any other SLAM-method, or simply draw the heightmap yourself! Often, we (the authors of this tutorial) start with a SLAM-created map, but clean it up and reduce it until only the walls are left.
2. This is more than a 2D occupancy grid. We only used black and white pixels in the example above, but any gray value can be used. The 'blackness' of a pixel defines it's height: black is the highest, white is floor-level, but you can specify anything in between.

To visualize the world model specified in the config file above, simply run ED and the ed_rviz_publisher again, and use RViz.

    rosrun ed ed <path/to/my-ed-config.yaml>
    rosrun ed_gui_server ed_rviz_publisher
    
You can also use the rviz plugin: Start rviz and add the ed_rviz_plugins/WorldModel display. Configure the service for querying the meshes and the ED entities topic, e.g. /ed/gui/entities and /ed/gui/query_meshes

### Creating re-usable models

Imagine you just took some time describing the shape of a certain table, but the robots' environment contains multiple instances of that table. It would be nice to create a model, and simply re-use that model multiple times within your environment description, or maybe even in other environment descriptions you have.

Well, you can! Before we start, let's create a directory which will hold these models:

    mkdir ~/my-model-dir

You have to let ED know where it will be able to find the models. You can do this by setting the ED_MODEL_PATH variable.

    export ED_MODEL_PATH=~/my-model-dir

You can specify multiple paths by separating them with colons (':').

Let's say we want to create an object model called 'table'. Create a directory with this name inside the model directory

    cd ~/my-model-dir
    mkdir table

A model specification should always contain at least a file called 'model.yaml'. This will contain the description of the model. Of course you are free to add any other files that have something to do with the model, ''e.g.'', heightmap images, mesh binaries, etc. Inside the 'model.yaml' you can specify the shape of the model and some other properties such as color. So, inside the table directory create a file called 'model.yaml' with the following content:

    shape:
      group:
      - box:
          pose: {x: 0,    y: 0,      z: 0.75}
          size: {x: 1.20, y: 0.80,   z: 0.02}
      - box:
          pose: {x: -0.55, y: -0.35, z: 0.37}
          size: {x: 0.05,  y: 0.05,  z: 0.74}
      - box:
          pose: {x: 0.55,  y: -0.35, z: 0.37}
          size: {x: 0.05,  y: 0.05,  z: 0.74}
      - box:
          pose: {x: -0.55, y: 0.35,  z: 0.37}
          size: {x: 0.05,  y: 0.05,  z: 0.74}
      - box:
          pose: {x: 0.55,  y: 0.35,  z: 0.37}
          size: {x: 0.05,  y: 0.05,  z: 0.74}

So, what does this say? Note that this format looks *a lot* like the world description we specified above in the configuration file. And you know what? It has the exact same syntax! This simply states that the shape of the table is a collection of boxes (5 to be precise: 1 table top and 4 legs). In itself, this model is pretty useless. But we can instantiate it (multiple times if we want!) in you world specification. For example, try the following ED configuration:

    world:
    - id: table1
      type: table
      pose: { x: 2, y: 0, z: 0 }
    - id: table2
      type: table
      pose: { x: 3, y: 2, z: 0, Z: 1.54 }

    plugins:
      - name: gui_server
        lib: libed_gui_server_plugin.so

**Make sure the ED_MODEL_PATH environment variable is set!**

The 'type' field specifies we should instantiate an entity of the given model, 'table' in our case. What will happen under the hood is that ED starts looking for a directory called 'table' inside the model directories, and if it finds it, inspects the 'model.yaml' file. Then the entities 'table1' and 'table2' *inherit* all properties that are specified in the 'model.yaml'.

When you run visualization (you know how) you should see two tables. Neat!

### Models in models in ...

We can even go one step further. Imagine I have a set of entities that always show up together, or, in other words, a model that **consists** of other models. A practical example is the model specification of a certain environment, *e.g.* your robot lab. Such a robot lab consists of walls, tables, etc. We can use **composition** to include models inside models.

An example. Assume we want to create a model called robot-lab. And let's say this robot lab contains walls and two tables of which we've specified the model above. Then we can create a directory called 'robot-lab' and put the following in its 'model.yaml':

    composition:
    - id: table1
      type: table
      pose: { x: 2, y: 0, z: 0 }
    - id: table2
      type: table
      pose: { x: 3, y: 2, z: 0, Z: 1.54 }
    - id: walls
      shape:
        heightmap:
          image: $(file my-walls.pgm)
          height: 2
          resolution: 0.025
          pose: { x: -10.0, y: -10.0, z: 0 }

Don't forget to put the 'my-walls.pgm' in the 'robot-lab' model directory! Now we have specified a model which includes other models. Our configuration file can be as simple as:

    world:
    - type: robot-lab
      pose: { x: 0, y: 0, z: 0 }

    plugins:
      - name: gui_server
        lib: libed_gui_server_plugin.so

Run ED and visualize the world model. You should see two tables and some walls, as specified by your heightmap.

### Visualizing models

We already know that we can visualize the world model by adding a certain plugin to the configuration file, running ED, running some proxy program and starting RViz. But it takes a lot of time starting and restarting these programs if we are working on a model. Fortunately, there is a faster way to visualize models. Try:

    rosrun ed ed_view_model --model table

(Again, remember that you should have set ED_MODEL_PATH). You should now see the table model visualized in a separate window. Now try:

    rosrun ed ed_view_model --model robot-lab

That also works! And even better, you don't have to restart the viewer if you've made a change. Simply press 'r' and the model and visualization will reload. Now if you need to create or edit a model, all you have to do is fire up your favorite editor and run the model viewer, and you can instantly see your changes!

### ED Localization

So far we've created a world model using heightmaps, primitives and other models, and we were able to visualize it. However, a world model on its own is not very useful. Let's start using it to make a robot behave autonomously! The package [ed_localization](https://github.com/tue-robotics/ed_localization) allows your robot to localize itself in the ED world model, using the robot's odometry and 2D Range Finder. Before we can do so, make sure you:

* installed ED and ED Localization (see above)
* have a 2D Range Finder (http://wiki.ros.org/Sensors) on the robot which scans in a plane parallel to the floor
* have a [TF tree](wiki.ros.org/tf) containing transforms from the robots' odometry frame to the 2D Range Finder frame
* have basic knowledge about TF and robot localization. Have a look at the [AMCL wiki page](http://wiki.ros.org/amcl) if not.

The ED localization is largely based on ROS' [AMCL-module](http://wiki.ros.org/amcl), which in turn uses several algorithms from the book 'Probabilistic Robotics' by Thrun, Burgard, and Fox. It is a particle filter implementation which uses the robot's odometry for the *prediction* step, and the 2D Range Finder scan for the *update*. The main difference with AMCL is that ED localization does not operate on an occupancy grid given by the user, but on the 3D world model contained in ED. And by using a technique based on GPU rasterization methods instead of ray casting the sensor data for each particle, the ED localization module is quite a bit more efficient than AMCL! But let's not get too technical. How do we use it?!

As stated above, we assume that you have a 2D Range Finder (we will sometimes use the word **laser**) available and that a transform from the robot odometry frame to the Range Finder frame can be calculated. The latter means that the odometry of your wheels is expressed in a TF frame from a virtual 'odometry frame' to your robot. If the wheels of your robot turn, the odometry frame should be updated. This is used by the localization algorithm to calculate how much the robot has moved since the last update.

The ED localization module is in fact just an ED plugin. So, as you may have guessed, we need to specify it in our ED configuration file. Add the localization plugin and it's parameters to the list of plugins in your configuration file. It will then look like this:

<pre>
world:
- type: robot-lab
  pose: { x: 0, y: 0, z: 0 }

plugins:
  - name: gui_server
    lib: libed_gui_server_plugin.so     
  - name: localization
    lib: libed_localization_plugin.so
    parameters:
      robot_name: robot    # the robot will also be in the world model. This is the
                           # id the robot entity will get in ED
      initial_pose_topic: [INITIAL_POSE_TOPIC]
      num_particles: 500   # maximum number of particles to use
      initial_pose:        # where does the robot start (in map frame)?
        x: 0
        y: 0
        rz: 0              # rotation
      laser_model:
        topic: [LASER_TOPIC]   # Laser topic
        num_beams: 100         # Max number of beams used per particle (evenly spread)
        z_hit: 0.95            # \
        sigma_hit: 0.2         # |
        z_short: 0.1           # |-- These are all parameters of the probabilistic laser
        z_max: 0.05            # |    model. See 'Probabilistic Robotics' for more info.
        z_rand: 0.05           # |
        lambda_short: 0.1      # /
        range_max: 10
        min_particle_distance: 0.01            # Particles that are too close together will
        min_particle_rotation_distance: 0.02   # be combined (resulting in less particles)
      odom_model:
        map_frame: map
        odom_frame: [ODOM_TF_FRAME]
        base_link_frame: [BASE_TF_FRAME]
        alpha1: 0.2   # rot -> trans + strafe    # \
        alpha2: 0.2    # trans -> rot            # |-- These are all parameters of the
        alpha3: 0.2    # trans -> trans          # |   probabilistic odom model. See
        alpha4: 0.2    # rot -> rot              # |   'Probabilistic Robotics' for more info
        alpha5: 0.2    # trans -> strafe         # /
</pre>

Woah, that's a lot of parameters! Fortunately, it will probably work quite well with the parameters above. The most important thing is to fill in the values represented as [...], i.e., the initial pose topic, laser topic, odometry tf frame, and base tf frame. If you want to know more about the model parameters, have a look at the [AMCL wiki page](http://wiki.ros.org/amcl).

Now run ED with this configuration file, and visualize the whole thing in RViz. You should be able to select the 'map' frame as global frame, and see a transform from the map frame to your robot. You might notice that the robot is badly localized at first. That is because you need to tell the localization plugin the **initial pose** of the robot. You can either specify this in the configuration file, or your can use the initial pose topic to set it (you can do this in RViz if you correctly set the initial pose topic). Now drive around your robot. You should notice how the robot keeps itself localized with respect to the environment.

If the above doesn't work, make sure that:

* The Range Finder is indeed broadcasting scan messages (e.g., use 'rostopic echo' to find out)
* The laser topic is correctly specified in the configuration file
* The frame_id specified in the Range Finder messages are correct (i.e., there is a valid transformation from the odometry frame to this frame)
* The TF frames in the configuration file are correct

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
