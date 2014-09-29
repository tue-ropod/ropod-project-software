#include "gui_server_plugin.h"

#include <ros/node_handle.h>
#include <ros/advertise_service_options.h>

#include <ed/world_model.h>
#include <ed/entity.h>

#include <geolib/Shape.h>
#include <geolib/ros/msg_conversions.h>

#include <tue/config/configuration.h>
#include <tue/config/loaders/yaml.h>

#include <ed_gui_server/EntityInfos.h>

void entityToMsg(const ed::EntityConstPtr& e, ed_gui_server::EntityInfo& msg)
{
    msg.id = e->id();
    msg.mesh_revision = e->shapeRevision();
    geo::convert(e->pose(), msg.pose);

    if (!e->convexHull().chull.empty())
    {
        const ed::ConvexHull2D& ch = e->convexHull();

        msg.polygon.z_min = ch.min_z;
        msg.polygon.z_max = ch.max_z;

        unsigned int size = ch.chull.size();
        msg.polygon.xs.resize(size);
        msg.polygon.ys.resize(size);

        for(unsigned int i = 0; i < size; ++i)
        {
            msg.polygon.xs[i] = ch.chull[i].x + ch.center_point.x - msg.pose.position.x;
            msg.polygon.xs[i] = ch.chull[i].y + ch.center_point.y - msg.pose.position.y;
        }
    }
}

// ----------------------------------------------------------------------------------------------------

GUIServerPlugin::GUIServerPlugin()
{
}

// ----------------------------------------------------------------------------------------------------

GUIServerPlugin::~GUIServerPlugin()
{
}

// ----------------------------------------------------------------------------------------------------

void GUIServerPlugin::configure(tue::Configuration config)
{

}

// ----------------------------------------------------------------------------------------------------

void GUIServerPlugin::initialize()
{
    ros::NodeHandle nh;

    ros::AdvertiseServiceOptions opt_srv_entities =
            ros::AdvertiseServiceOptions::create<ed_gui_server::QueryEntities>(
                "/ed/gui/query_entities", boost::bind(&GUIServerPlugin::srvQueryEntities, this, _1, _2),
                ros::VoidPtr(), &cb_queue_);

    srv_query_entities_ = nh.advertiseService(opt_srv_entities);


    ros::AdvertiseServiceOptions opt_srv_meshes =
            ros::AdvertiseServiceOptions::create<ed_gui_server::QueryMeshes>(
                "/ed/gui/query_meshes", boost::bind(&GUIServerPlugin::srvQueryMeshes, this, _1, _2),
                ros::VoidPtr(), &cb_queue_);

    srv_query_meshes_ = nh.advertiseService(opt_srv_meshes);

    ros::AdvertiseServiceOptions opt_srv_interact =
            ros::AdvertiseServiceOptions::create<ed_gui_server::Interact>(
                "/ed/gui/interact", boost::bind(&GUIServerPlugin::srvInteract, this, _1, _2),
                ros::VoidPtr(), &cb_queue_);

    srv_interact_ = nh.advertiseService(opt_srv_interact);

    pub_entities_ = nh.advertise<ed_gui_server::EntityInfos>("/ed/gui/entities", 1);
}

// ----------------------------------------------------------------------------------------------------

void GUIServerPlugin::process(const ed::WorldModel& world, ed::UpdateRequest& req)
{
    world_model_ = &world;
    cb_queue_.callAvailable();

    ed_gui_server::EntityInfos entities_msg;
    entities_msg.entities.resize(world_model_->numEntities());

    unsigned int i = 0;
    for(ed::WorldModel::const_iterator it = world_model_->begin(); it != world_model_->end(); ++it)
        entityToMsg(it->second, entities_msg.entities[i++]);

    // Test - - - - -

    ed::EntityPtr e(new ed::Entity("Test"));

    ed::ConvexHull2D convex_hull;

    convex_hull.min_z = 0.3;
    convex_hull.max_z = 1.0;
    convex_hull.chull.push_back(pcl::PointXYZ(-0.5, -0.5, 0));
    convex_hull.chull.push_back(pcl::PointXYZ( 0.5, -0.5, 0));
    convex_hull.chull.push_back(pcl::PointXYZ( 0.5,  0.5, 0));
    convex_hull.chull.push_back(pcl::PointXYZ(-0.5,  0.5, 0));
    convex_hull.center_point.x = 0;
    convex_hull.center_point.y = 0;

    e->setConvexHull(convex_hull);
    e->setPose(geo::Pose3D::identity());

    ed_gui_server::EntityInfo msg;
    entityToMsg(e, msg);

    entities_msg.entities.push_back(msg);

    // - - - - - - -

    pub_entities_.publish(entities_msg);
}

// ----------------------------------------------------------------------------------------------------

bool GUIServerPlugin::srvQueryEntities(const ed_gui_server::QueryEntities::Request& ros_req,
                                       ed_gui_server::QueryEntities::Response& ros_res)
{
    for(ed::WorldModel::const_iterator it = world_model_->begin(); it != world_model_->end(); ++it)
    {
        const ed::EntityConstPtr& e = it->second;
        float pos_x = e->pose().t.x;
        float pos_y = e->pose().t.y;
        if (ros_req.area_min.x < pos_x && pos_x < ros_req.area_max.x
                && ros_req.area_min.y < pos_y && pos_y < ros_req.area_max.y)
        {
            ros_res.entities.push_back(ed_gui_server::EntityInfo());
            ed_gui_server::EntityInfo& info = ros_res.entities.back();

            info.id = e->id();
            info.mesh_revision = e->shapeRevision();
            geo::convert(e->pose(), info.pose);
        }
    }

    return true;
}

// ----------------------------------------------------------------------------------------------------

bool GUIServerPlugin::srvQueryMeshes(const ed_gui_server::QueryMeshes::Request& ros_req,
                                      ed_gui_server::QueryMeshes::Response& ros_res)
{
    for(unsigned int i = 0; i < ros_req.entity_ids.size(); ++i)
    {
        const std::string& id = ros_req.entity_ids[i];
        ed::EntityConstPtr e = world_model_->getEntity(id);
        if (e)
        {
            if (e->shape())
            {
                ros_res.entity_ids.push_back(id);

                ros_res.meshes.push_back(ed_gui_server::Mesh());
                ed_gui_server::Mesh& mesh_msg = ros_res.meshes.back();

                // Mesh revision
                mesh_msg.revision = e->shapeRevision();

                const std::vector<geo::Vector3>& vertices = e->shape()->getMesh().getPoints();

                // Triangles
                const std::vector<geo::TriangleI>& triangles = e->shape()->getMesh().getTriangleIs();
                mesh_msg.vertices.resize(triangles.size() * 9);
                for(unsigned int i = 0; i < triangles.size(); ++i)
                {
                    const geo::TriangleI& t = triangles[i];
                    const geo::Vector3& v1 = vertices[t.i1_];
                    const geo::Vector3& v2 = vertices[t.i2_];
                    const geo::Vector3& v3 = vertices[t.i3_];

                    unsigned int i9 = i * 9;

                    mesh_msg.vertices[i9] = v1.x;
                    mesh_msg.vertices[i9 + 1] = v1.y;
                    mesh_msg.vertices[i9 + 2] = v1.z;
                    mesh_msg.vertices[i9 + 3] = v2.x;
                    mesh_msg.vertices[i9 + 4] = v2.y;
                    mesh_msg.vertices[i9 + 5] = v2.z;
                    mesh_msg.vertices[i9 + 6] = v3.x;
                    mesh_msg.vertices[i9 + 7] = v3.y;
                    mesh_msg.vertices[i9 + 8] = v3.z;
                }


//                // Vertices
//                const std::vector<geo::Vector3>& vertices = e->shape()->getMesh().getPoints();
//                mesh_msg.vertices.resize(vertices.size() * 3);
//                for(unsigned int i = 0; i < vertices.size(); ++i)
//                {
//                    mesh_msg.vertices[i * 3] = vertices[i].x;
//                    mesh_msg.vertices[i * 3 + 1] = vertices[i].y;
//                    mesh_msg.vertices[i * 3 + 2] = vertices[i].z;
//                }

//                // Triangles
//                const std::vector<geo::TriangleI>& triangles = e->shape()->getMesh().getTriangleIs();
//                mesh_msg.triangles.resize(triangles.size() * 3);
//                for(unsigned int i = 0; i < triangles.size(); ++i)
//                {
//                    const geo::TriangleI& t = triangles[i];
//                    mesh_msg.triangles[i * 3] = t.i1_;
//                    mesh_msg.triangles[i * 3 + 1] = t.i2_;
//                    mesh_msg.triangles[i * 3 + 2] = t.i3_;
//                }
            }
        }
        else
        {
            ros_res.error_msg += "Unknown entity: '" + id + "'.\n";
        }
    }

    return true;
}

// ----------------------------------------------------------------------------------------------------

bool GUIServerPlugin::srvInteract(const ed_gui_server::Interact::Request& ros_req,
                                ed_gui_server::Interact::Response& ros_res)
{
    tue::Configuration params;
    if (tue::config::loadFromYAMLString(ros_req.command_yaml, params))
    {
        std::cout << params << std::endl;
    }
    else
    {
        ros_res.result_json = "{ error: \"" + params.error() + "\" }";
    }


}

ED_REGISTER_PLUGIN(GUIServerPlugin)
