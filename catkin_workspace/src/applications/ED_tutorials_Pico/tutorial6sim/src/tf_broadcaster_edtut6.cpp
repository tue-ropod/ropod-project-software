#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>
#include <ros/console.h>
#include <geometry_msgs/PoseArray.h>


nav_msgs::Odometry odommsg;
void poseCallback(const nav_msgs::Odometry::ConstPtr& msg){	
  odommsg.pose.pose.position.x = msg->pose.pose.position.x;
  odommsg.pose.pose.position.y = msg->pose.pose.position.y;
  odommsg.pose.pose.orientation.x = msg->pose.pose.orientation.x;
  odommsg.pose.pose.orientation.y = msg->pose.pose.orientation.y;
  odommsg.pose.pose.orientation.z = msg->pose.pose.orientation.z;
  odommsg.pose.pose.orientation.w = msg->pose.pose.orientation.w;
}

/* 
void poseCallback(const geometry_msgs::PoseArray::ConstPtr& msg){	
  odommsg.pose.pose.position.x = msg->poses[0].position.x;
  odommsg.pose.pose.position.y = msg->poses[0].position.y;
  odommsg.pose.pose.orientation.x = msg->poses[0].orientation.x;
  odommsg.pose.pose.orientation.y = msg->poses[0].orientation.y;
  odommsg.pose.pose.orientation.z = msg->poses[0].orientation.z;
  odommsg.pose.pose.orientation.w = msg->poses[0].orientation.w;  

}*/
int main(int argc, char** argv){
  ros::init(argc, argv, "robot_tf_publisher");
  ros::NodeHandle n;
  
  odommsg.pose.pose.position.x = 0;
  odommsg.pose.pose.position.y = 0;
  odommsg.pose.pose.orientation.x = 0;
  odommsg.pose.pose.orientation.y = 0;
  odommsg.pose.pose.orientation.z = 0;
  odommsg.pose.pose.orientation.w = 0;

  ros::Rate r(30);

  tf::TransformBroadcaster broadcaster;

  
  tf::Quaternion q;
  q.setRPY(0, 0, 0);
  
  tf::Quaternion q2;
  q2.setRPY(0, 0, 3.141592/2);
  
  tf::Quaternion q3;
  q3.setRPY(0, 0, 0);  
  
  
   ros::Subscriber sub = n.subscribe<nav_msgs::Odometry>("/pico/odom", 1, poseCallback);
  //ros::Subscriber sub = n.subscribe<geometry_msgs::PoseArray>("/ed/localization/particles", 1, poseCallback);
  
  while(n.ok()){
	  // q2 = (tf::Quaternion) odommsg.pose.pose.orientation;
	 q3 = tf::Quaternion(odommsg.pose.pose.orientation.x, odommsg.pose.pose.orientation.y, odommsg.pose.pose.orientation.z, odommsg.pose.pose.orientation.w); 
    broadcaster.sendTransform(
      tf::StampedTransform(
        tf::Transform(q, tf::Vector3(0.0, 0.0, 0.3)),
        ros::Time::now(),"/pico/base_link", "/pico/laser/scan"));
   /*broadcaster.sendTransform(
      tf::StampedTransform(
        tf::Transform(q2, tf::Vector3(0.0, 0.0, 0.0)),
        ros::Time::now(),"map", "/pico/odom"));*/
	broadcaster.sendTransform(
      tf::StampedTransform(
        tf::Transform(q3, tf::Vector3(odommsg.pose.pose.position.x, odommsg.pose.pose.position.y, 0.0)),        
        //tf::Transform(q, tf::Vector3(0.0, 0.0, 0.3)),
        ros::Time::now(),"/pico/odom","/pico/base_link"));      
    
     
    ros::spinOnce();           
    r.sleep();
  }
}
