#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <move_base_msgs/MoveBaseActionFeedback.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

nav_msgs::Path planned_route;
bool route_received = false;
bool route_busy = false;
bool waypoint_busy = false;
int  waypoint_cnt = false;
move_base_msgs::MoveBaseActionFeedback::ConstPtr base_position_;



void move_base_fbCallback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
{
  base_position_ = msg;
  
}


void routetopicCallback(const nav_msgs::Path::ConstPtr& Pathmsg)
{
  route_received = true;  
  waypoint_cnt = 0;
  planned_route = *Pathmsg;
  
}

int main(int argc, char** argv){
  ros::init(argc, argv, "route_navigation");  
  ros::NodeHandle n;
  ros::Rate rate(10.0);
  
  ros::Subscriber sub 		= 	n.subscribe<nav_msgs::Path>("/planned_route", 1, routetopicCallback);
  ros::Subscriber submvfb = 	n.subscribe<move_base_msgs::MoveBaseActionFeedback>("/move_base/feedback", 1, move_base_fbCallback);
  base_position_.reset();
  

  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);
  move_base_msgs::MoveBaseGoal goal;

  //wait for the action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }
  
  // Wait fo route to be published
  ROS_INFO("Wait for route");
  while(n.ok()){

    if (route_received == true) {
		route_received = false;
		route_busy = true;
		waypoint_busy = false;
		waypoint_cnt = 1;
		ROS_INFO("Route received: size: %d waypoints",(int)planned_route.poses.size());      
	}	
	
	if (route_busy == true) {
      
      
      if(waypoint_busy == false){      		  
	      //we'll send the the next goal to the robot
	      goal.target_pose.header.frame_id = "map";
	      goal.target_pose.header.stamp = ros::Time::now();
	      
	      goal.target_pose.pose = planned_route.poses[waypoint_cnt-1].pose;
	      
	      ROS_INFO("Sending goal");
	      ac.sendGoal(goal);
	      waypoint_busy = true;
	  }
      
     // ac.waitForResult();
           
      if (waypoint_cnt < (int)planned_route.poses.size()){ // Check succed only by looking at distance to waypoint
				if (base_position_){
				if (  pow(base_position_->feedback.base_position.pose.position.x - goal.target_pose.pose.position.x,2) + pow(base_position_->feedback.base_position.pose.position.y - goal.target_pose.pose.position.y,2) < pow(0.5,2) ){
					ROS_INFO("Hooray, Intermediate waypoint passed");
					waypoint_cnt = waypoint_cnt+1;
					waypoint_busy = false;
				}
			}
				
			}else{      
				if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
					ROS_INFO("Hooray, Last way point achieved");
					waypoint_cnt = waypoint_cnt+1;
					waypoint_busy = false;
				}
		  } 
      if (waypoint_cnt > (int)planned_route.poses.size())
				route_busy = false;
	  
	}
	
	ros::spinOnce(); 
	rate.sleep();      
  }   
      

  
  return 0;
}
