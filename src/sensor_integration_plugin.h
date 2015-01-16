#ifndef ED_SENSOR_INTEGRATION_PLUGIN_H_
#define ED_SENSOR_INTEGRATION_PLUGIN_H_

#include <ed/plugin.h>

#include <ros/callback_queue.h>
#include <ros/subscriber.h>

#include <rgbd/Client.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/JointState.h>

class SensorIntegrationPlugin : public ed::Plugin
{

public:

    SensorIntegrationPlugin();

    virtual ~SensorIntegrationPlugin();

    void configure(tue::Configuration config);

    void process(const ed::WorldModel& world, ed::UpdateRequest& req);

private:

    std::vector<ros::Subscriber> joint_subs_;

    std::vector<rgbd::Client*> rgbd_clients_;

    ed::UpdateRequest* update_req_;

    ros::CallbackQueue cb_queue_;

    void jointCallback(const sensor_msgs::JointState::ConstPtr& msg);

};

#endif
