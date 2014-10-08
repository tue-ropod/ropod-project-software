#include "robot.h"

#include <urdf/model.h>

#include <tf/transform_datatypes.h>

#include <ros/package.h>

#include <geolib/Importer.h>

namespace gui
{

// ----------------------------------------------------------------------------------------------------

Robot::Robot() : tf_listener_(0)
{
}

// ----------------------------------------------------------------------------------------------------

Robot::~Robot()
{
}

// ----------------------------------------------------------------------------------------------------

void Robot::initialize(const std::string& name)
{
    name_ = name;

    // Initialize TF listener
    tf_listener_ = new tf::TransformListener();

    // Load URDF model from parameter server
    urdf::Model robot_model;

    std::string urdf_xml;


    ros::NodeHandle nh;
    if (!nh.getParam("/" + name + "/robot_description", urdf_xml))
    {
        std::cout << "ROS parameter not set: '/" << name << "/robot_description" << "'." << std::endl;
        return;
    }

    if (!robot_model.initString(urdf_xml))
    {
        std::cout << "Could not load robot model for '" << name << "." << std::endl;
        return;
    }

    std::cout << robot_model.getRoot()->visual->group_name << std::endl;
    std::cout << robot_model.getRoot()->visual->material_name << std::endl;
    std::cout << robot_model.getRoot()->visual->origin.position.x << std::endl;

    for(std::vector<boost::shared_ptr<urdf::Link> >::const_iterator it = robot_model.getRoot()->child_links.begin();
        it != robot_model.getRoot()->child_links.end(); ++it)
    {
        boost::shared_ptr<urdf::Link> link = *it;
        std::cout << link->name << std::endl;
        if (link->visual && link->visual->geometry->type == urdf::Geometry::MESH)
        {
            urdf::Mesh* mesh = static_cast<urdf::Mesh*>(link->visual->geometry.get());
            std::cout << mesh->filename << std::endl;
            std::cout << mesh->scale.x << std::endl;

            std::string pkg_prefix = "package://";
            if (mesh->filename.substr(0, pkg_prefix.size()) == pkg_prefix)
            {
                std::string str = mesh->filename.substr(pkg_prefix.size());
                size_t i_slash = str.find("/");
                std::string pkg = str.substr(0, i_slash);
                std::cout << pkg << std::endl;

                std::string rel_filename = str.substr(i_slash + 1);
                std::cout << rel_filename << std::endl;

                std::string pkg_path = ros::package::getPath(pkg);

                std::string abs_filename = pkg_path + "/" + rel_filename;

                std::cout << abs_filename << std::endl;

                geo::Importer importer;
                shape_ = importer.readMeshFile(abs_filename, mesh->scale.x * 2.54);
                if (shape_)
                {
                    std::cout << shape_->getMesh().getTriangleIs().size() << " triangles" << std::endl;
                }
                else
                {
                    std::cout << "Could not load shape" << std::endl;
                }
            }
        }
    }
}

// ----------------------------------------------------------------------------------------------------

void Robot::getEntities(std::vector<ed_gui_server::EntityInfo>& entities)
{
    ed_gui_server::EntityInfo e;
    e.id = name();

    try
    {
        tf::StampedTransform t;
        tf_listener_->lookupTransform("/map", "/" + name() + "/base_link", ros::Time(0), t);
        tf::poseTFToMsg(t, e.pose);
    }
    catch (tf::TransformException& e)
    {
        std::cout << "No transform" << std::endl;
        return;
    }

    entities.push_back(e);
}

} // end namespace gui

