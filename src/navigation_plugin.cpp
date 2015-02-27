#include "ed_navigation/navigation_plugin.h"

#include <ed/entity.h>
#include <tue/config/reader.h>

// ----------------------------------------------------------------------------------------------------

void NavigationPlugin::configure(tue::Configuration config)
{
    ros::NodeHandle nh("~/navigation");

    ros::AdvertiseServiceOptions opt_srv_get_goal_constraint =
            ros::AdvertiseServiceOptions::create<ed_navigation::GetGoalConstraint>(
                "get_constraint", boost::bind(&NavigationPlugin::srvGetGoalConstraint, this, _1, _2),
                ros::VoidPtr(), &cb_queue_);

    srv_get_goal_constraint_ = nh.advertiseService(opt_srv_get_goal_constraint);

    // Configure the occupancy grid publisher
    if (config.readGroup("occupancy_grid_publisher"))
    {
        double res;
        std::string frame_id;
        config.value("frame_id", frame_id);
        config.value("resolution", res);
        occupancy_grid_publisher_.configure(nh, res, frame_id);

        config.endGroup();
    }
}

// ----------------------------------------------------------------------------------------------------

void NavigationPlugin::initialize()
{

}

// ----------------------------------------------------------------------------------------------------

void NavigationPlugin::process(const ed::WorldModel& world, ed::UpdateRequest& req)
{
    // Check for services
    world_ = &world;
    cb_queue_.callAvailable();

    // Publish the occupancy grid
    if (occupancy_grid_publisher_.configured())
        occupancy_grid_publisher_.publish(world);
}

// ----------------------------------------------------------------------------------------------------

bool NavigationPlugin::srvGetGoalConstraint(const ed_navigation::GetGoalConstraint::Request& req, ed_navigation::GetGoalConstraint::Response& res)
{
    ed::EntityConstPtr e = world_->getEntity(req.entity_id);

    if (!e)
    {
        res.error_msg = "No such entity: '" + req.entity_id + "'.";
        return true;
    }

    const tue::config::DataConstPointer& data = e->data();
    if (data.empty())
    {
        res.error_msg = "Entity '" + e->id().str() + "': does not have an 'areas' property.";
        return true;
    }

    tue::config::Reader r(data);
    if (!r.readArray("areas"))
    {
        res.error_msg = "Entity '" + e->id().str() + "': does not have an 'areas' property.";
        return true;
    }

    while(r.nextArrayItem())
    {
        std::string name;
        if (r.value("name", name) && name == req.area_name)
        {
            if (!r.readArray("shape", tue::config::REQUIRED))
            {
                res.error_msg = "Entity '" + e->id().str() + "': area '" + req.area_name + "' does not have 'shape' property.";
                return true;
            }

            // Construct position constraint from shape
            std::string& pc = res.position_constraint;

            while(r.nextArrayItem())
            {
                if (r.readGroup("box"))
                {
                    geo::Vector3 min, max;

                    if (r.readGroup("min"))
                    {
                        r.value("x", min.x);
                        r.value("y", min.y);
                        r.value("z", min.z);
                        r.endGroup();
                    }

                    if (r.readGroup("max"))
                    {
                        r.value("x", max.x);
                        r.value("y", max.y);
                        r.value("z", max.z);
                        r.endGroup();
                    }

                    std::stringstream constraint;
                    constraint << "x > " << min.x << " and "
                               << "x < " << max.x << " and "
                               << "y > " << min.y << " and "
                               << "y < " << max.y;

                    res.position_constraint = constraint.str();
                    res.frame_id = e->id().str();

                    r.endGroup();
                }
            }

            r.endArray();

            return true;
        }
    }

    r.endArray();

    res.error_msg = "Entity '" + e->id().str() + "': area '" + req.area_name + "' does not exist";
    return true;
}

ED_REGISTER_PLUGIN(NavigationPlugin)



