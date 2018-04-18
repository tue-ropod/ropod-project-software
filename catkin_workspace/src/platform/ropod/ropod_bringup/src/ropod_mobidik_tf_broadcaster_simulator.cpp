#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>
#include <ros/console.h>
#include <geometry_msgs/PoseArray.h>




nav_msgs::Odometry odommsg;
nav_msgs::Odometry loadodommsg;

ros::Publisher pub_robcmdvel;
ros::Publisher pub_loadodom;
tf::Transform base2loadTF;

// /* 
void poseCallback(const nav_msgs::Odometry::ConstPtr& msg){	
  odommsg.pose.pose.position.x = msg->pose.pose.position.x;
  odommsg.pose.pose.position.y = msg->pose.pose.position.y;
  odommsg.pose.pose.orientation.x = msg->pose.pose.orientation.x;
  odommsg.pose.pose.orientation.y = msg->pose.pose.orientation.y;
  odommsg.pose.pose.orientation.z = msg->pose.pose.orientation.z;
  odommsg.pose.pose.orientation.w = msg->pose.pose.orientation.w;
  
  tf::Vector3 loadShift = base2loadTF.getOrigin();
  loadodommsg.twist.twist.linear.x = msg->twist.twist.linear.x;
  loadodommsg.twist.twist.linear.y = msg->twist.twist.linear.y -  msg->twist.twist.angular.z*(-loadShift.x());
  loadodommsg.twist.twist.linear.z = msg->twist.twist.linear.z;
  loadodommsg.twist.twist.angular.x = msg->twist.twist.angular.x;
  loadodommsg.twist.twist.angular.y = msg->twist.twist.angular.y;
  loadodommsg.twist.twist.angular.z = msg->twist.twist.angular.z;
  pub_loadodom.publish(loadodommsg);      
  
}
/* 
*/
/*
void poseCallback(const geometry_msgs::PoseArray::ConstPtr& msg){	
  odommsg.pose.pose.position.x = msg->poses[0].position.x;
  odommsg.pose.pose.position.y = msg->poses[0].position.y;
  odommsg.pose.pose.orientation.x = msg->poses[0].orientation.x;
  odommsg.pose.pose.orientation.y = msg->poses[0].orientation.y;
  odommsg.pose.pose.orientation.z = msg->poses[0].orientation.z;
  odommsg.pose.pose.orientation.w = msg->poses[0].orientation.w;  
  q3 = tf::Quaternion(odommsg.pose.pose.orientation.x, odommsg.pose.pose.orientation.y, odommsg.pose.pose.orientation.z, odommsg.pose.pose.orientation.w); 
  ROS_INFO("Hello %s", "callback");
}
* */


void loadvelcmdCallback(const geometry_msgs::Twist::ConstPtr& msg){	
  // Transform velocity command from load to ropod. We assume that the load is shifted only in x.
  // Upgrade to any pattern of oad shift. The estimation should be done right after load is attached.
  tf::Vector3 loadShift = base2loadTF.getOrigin();
  geometry_msgs::Twist ropod_cmd_vel;
  ropod_cmd_vel.linear.x  =  msg->linear.x;
  ropod_cmd_vel.linear.y  =  0.0 + msg->angular.z*(-loadShift.x()); // Notice that pure translation is not allowed. That's why msg->linear.y is ignored
  ropod_cmd_vel.linear.z  =  msg->linear.z;
  ropod_cmd_vel.angular.x =  msg->angular.x;
  ropod_cmd_vel.angular.y =  msg->angular.y;
  ropod_cmd_vel.angular.z =  msg->angular.z;
    
  pub_robcmdvel.publish(ropod_cmd_vel);
}

int main(int argc, char** argv){
  ros::init(argc, argv, "robot_tf_publisher");
  ros::NodeHandle n;
  
  odommsg.pose.pose.position.x = 0.0;
  odommsg.pose.pose.position.y = 0.0;
  odommsg.pose.pose.orientation.x = 0.0;
  odommsg.pose.pose.orientation.y = 0.0;
  odommsg.pose.pose.orientation.z = 0.0;
  odommsg.pose.pose.orientation.w = 0.0;

  ros::Rate r(30);

  tf::TransformBroadcaster broadcaster;
  

  
  tf::Quaternion q;
  q.setRPY(0, 0, 0);
  
  base2loadTF = tf::Transform(q, tf::Vector3(-1.045, 0.0, 0.0));
  


  
   pub_robcmdvel = n.advertise<geometry_msgs::Twist>("/ropod/cmd_vel", 1);
   pub_loadodom = n.advertise<nav_msgs::Odometry>("/load/odom", 1);
   ros::Subscriber sub_odom = n.subscribe<nav_msgs::Odometry>("/ropod/odom", 1, poseCallback);
   ros::Subscriber sub_loadcmdvel = n.subscribe<geometry_msgs::Twist>("/load/cmd_vel", 1, loadvelcmdCallback);
   
  //ros::Subscriber sub = n.subscribe<geometry_msgs::PoseArray>("/ed/localization/particles", 1, poseCallback);
  
  while(n.ok()){
	  // q2 = (tf::Quaternion) odommsg.pose.pose.orientation;
    broadcaster.sendTransform(
      tf::StampedTransform(
        tf::Transform(q, tf::Vector3(0.25, 0.0, 0.15)),
        ros::Time::now(),"/ropod/base_link", "/ropod/laser/scan"));
    
    /* In the future  this transformation needs to be adjusted based on an estimation of the real kinematics constraints*/
    
   broadcaster.sendTransform(
      tf::StampedTransform(base2loadTF, ros::Time::now(),"/ropod/base_link", "/load/base_link"));
   
        
    
    broadcaster.sendTransform(
      tf::StampedTransform(
        tf::Transform(tf::Quaternion(odommsg.pose.pose.orientation.x, odommsg.pose.pose.orientation.y, odommsg.pose.pose.orientation.z, odommsg.pose.pose.orientation.w), 
		      tf::Vector3(odommsg.pose.pose.position.x, odommsg.pose.pose.position.y, 0.0)),
        ros::Time::now(),"/ropod/odom","/ropod/base_link"));      
    
    
    /* Send transform for "ideal" localization in simulation*/
//     broadcaster.sendTransform(
//       tf::StampedTransform(
//         tf::Transform(q, tf::Vector3(8.2, 5.6, 0.0)),
//         ros::Time::now(),"/map", "/ropod/odom"));
    
    
    
     
    ros::spinOnce();           
    r.sleep();
  }
}
