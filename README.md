To start the gui server, first run ED:

    rosrun ed ed_server

Then launch the gui server plugin:

    rosrun ed_gui_server launch_plugin

Now two ROS services are available:

    /ed/gui_server/get_entities
    /ed/gui_server/get_meshes

The first service can be used to query for entities in a specific region. For example, the following service call returns the info of entities (their id and pose) in the 20 x 20 x 20 m area around (0, 0, 0):

    rosservice call /ed/gui_server/get_entities "{ area_min: {x: -10, y: -10, z: -10}, area_max: {x: 10, y: 10, z: 10} }"

Once you've received the entity ids, these can be used to query for their meshes. For example, to get the mesh of entitiy 'floor':

    rosservice call /ed/gui_server/get_meshses '{ entity_ids: [ "floor" ] }'

Per entity, You'll receive a list of vertices and a list of triangles referring to the vertices. For more info on the exact format, please see the Mesh.msg file in the /msg folder.
