The ed_gui_server already runs out-of-the-box. When you've started ED you should be able to listen to

    /amigo/ed/gui/entities

Notice that 'rostopic pub /amigo/ed/gui/entities' will give you a constant stream of info of all entities, including their id. To get the image of a certain entity, use the service

    /amigo/ed/gui/get_entity_info

The service is defined here:

    roscd ed_gui_server
    vim srv/GetEntityInfo.srv

To store entity info (measurements needed for training perception) on the computer which runs ED, you'll have to use the service:

    /amigo/ed/gui/interact

The service is defnied here:

    roscd ed_gui_server
    vim srv/Interact.srv

And put the following in the `command_yaml` field: `{action: store, id: <PUT-ENTITY-ID-HERE>, type: <PUT-ENTITY-TYPE-HERE>}`

There are also services to query for entities in a specific region. For example, the following service call returns the info of entities (their id and pose) in the 20 x 20 x 20 m area around (0, 0, 0):

    rosservice call /amigo/ed/gui/query_entities "{ area_min: {x: -10, y: -10, z: -10}, area_max: {x: 10, y: 10, z: 10} }"

Once you've received the entity ids, these can be used to query for their meshes. For example, to get the mesh of entitiy 'floor':

    rosservice call /amigo/ed/gui/query_meshes '{ entity_ids: [ "floor" ] }'

Per entity, You'll receive a list of vertices and a list of triangles referring to the vertices. For more info on the exact format, please see the Mesh.msg file in the /msg folder.
