#include "robot.h"

#include <urdf/model.h>

#include <tf/transform_datatypes.h>

#include <ros/package.h>

#include <geolib/Importer.h>
#include <geolib/ros/tf_conversions.h>
#include <geolib/ros/msg_conversions.h>
#include <geolib/Box.h>

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

    std::vector<boost::shared_ptr<urdf::Link> > links;
    robot_model.getLinks(links);

    for(std::vector<boost::shared_ptr<urdf::Link> >::const_iterator it = links.begin(); it != links.end(); ++it)
    {
        const boost::shared_ptr<urdf::Link>& link = *it;
        if (link->visual && link->visual->geometry)
        {
            geo::ShapePtr shape;

            geo::Pose3D offset;
            const urdf::Pose o = link->visual->origin;
            offset.t = geo::Vector3(o.position.x, o.position.y, o.position.z);
            offset.R.setRotation(geo::Quaternion(o.rotation.x, o.rotation.y, o.rotation.z, o.rotation.w));

//            std::cout << link->name << ": " << offset << std::endl;
//            std::cout << "    " << o.rotation.x << ", " << o.rotation.y<< ", " << o.rotation.z<< ", " << o.rotation.w << std::endl;

            if (link->visual->geometry->type == urdf::Geometry::MESH)
            {
                urdf::Mesh* mesh = static_cast<urdf::Mesh*>(link->visual->geometry.get());
                if (mesh)
                {
                    std::string pkg_prefix = "package://";
                    if (mesh->filename.substr(0, pkg_prefix.size()) == pkg_prefix)
                    {
                        std::string str = mesh->filename.substr(pkg_prefix.size());
                        size_t i_slash = str.find("/");

                        std::string pkg = str.substr(0, i_slash);
                        std::string rel_filename = str.substr(i_slash + 1);
                        std::string pkg_path = ros::package::getPath(pkg);
                        std::string abs_filename = pkg_path + "/" + rel_filename;

                        geo::Importer importer;
                        shape = importer.readMeshFile(abs_filename, mesh->scale.x);
                        if (!shape)
                            std::cout << "Could not load shape" << std::endl;
                    }
                }
            }
            else if (link->visual->geometry->type == urdf::Geometry::BOX)
            {
                urdf::Box* box = static_cast<urdf::Box*>(link->visual->geometry.get());
                if (box)
                {
                    double hx = box->dim.x / 2;
                    double hy = box->dim.y / 2;
                    double hz = box->dim.z / 2;

                    shape.reset(new geo::Box(geo::Vector3(-hx, -hy, -hz), geo::Vector3(hx, hy, hz)));
                }
            }

            if (shape)
            {
                std::string full_link_name = "/" + name_ + "/" + link->name;
                shapes_[full_link_name] = std::pair<geo::Pose3D, geo::ShapeConstPtr>(offset, shape);
            }

        }
    }

}

// ----------------------------------------------------------------------------------------------------

geo::ShapeConstPtr Robot::getShape(const std::string& id) const
{
    ShapeMap::const_iterator it = shapes_.find(id);
    if (it != shapes_.end())
        return it->second.second;
    return geo::ShapeConstPtr();
}

// ----------------------------------------------------------------------------------------------------

void Robot::getEntities(std::vector<ed_gui_server::EntityInfo>& entities) const
{
    for(ShapeMap::const_iterator it = shapes_.begin(); it != shapes_.end(); ++it)
    {
        ed_gui_server::EntityInfo e;
        e.id = it->first;

        try
        {
            tf::StampedTransform t;
            tf_listener_->lookupTransform("/map", e.id, ros::Time(0), t);

            geo::Pose3D pose;
            geo::convert(t, pose);

            // correct for mesh offset
            pose = pose * it->second.first;

            geo::convert(pose, e.pose);
            entities.push_back(e);
        }
        catch (tf::TransformException& ex)
        {
            std::cout << "[ed_gui_server] No transform from '/map' to '" << e.id << "'." << std::endl;
        }
    }
}

} // end namespace gui

