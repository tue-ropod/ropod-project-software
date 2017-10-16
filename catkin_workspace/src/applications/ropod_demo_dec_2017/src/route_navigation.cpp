#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <move_base_msgs/MoveBaseActionFeedback.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Pose.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

enum{ NAV_HOLD = 0,
  NAV_IDLE,
  NAV_BUSY,
  NAV_GETPOINT,
  NAV_WAYPOINT_DONE,
  NAV_DONE};
  
  
  
  class Route_navigation
  {
    
  public:
    
    nav_msgs::Path planned_route;
    bool route_busy;
    int  waypoint_cnt;
    move_base_msgs::MoveBaseActionFeedback::ConstPtr base_position_;	
    
    
    Route_navigation(){
      base_position_.reset();
      route_busy = false;
      waypoint_cnt = 0;
    };
    
    ~Route_navigation(){
      base_position_.reset();};
      
      
      void start_route_navigation(const nav_msgs::Path::ConstPtr& Pathmsg){
	route_busy = true;
	waypoint_cnt = 0;
	planned_route = *Pathmsg;
	ROS_INFO("Route received: size: %d waypoints",(int)planned_route.poses.size());      
	return;		
      }
      
      void stop_route_navigation(){
	base_position_.reset();
	route_busy = false;
	waypoint_cnt = 0;
      }	
      int is_position_valid(){
	if(base_position_)
	  return 1;
	else
	  return 0;
      }
      int is_waypoint_achieved(actionlib::SimpleClientGoalState ac_state){
	if (waypoint_cnt < (int)planned_route.poses.size()){ // Check succced only by looking at distance to waypoint			
	  if (  pow(base_position_->feedback.base_position.pose.position.x - planned_route.poses[waypoint_cnt-1].pose.position.x,2) + pow(base_position_->feedback.base_position.pose.position.y - planned_route.poses[waypoint_cnt-1].pose.position.y,2) < pow(0.5,2) ){
	    ROS_INFO("Hooray, Intermediate waypoint passed");
	    return 1;	  
	  }
	}else if (ac_state == actionlib::SimpleClientGoalState::SUCCEEDED)
	  return 1;
	else
	  return 0;					  
      }    
      
      int is_last_waypoint(){
	if (waypoint_cnt >= (int)planned_route.poses.size())
	  return 1;
	else  
	  return 0;
      }
      
      
      
      geometry_msgs::Pose get_next_point(void){
	if (waypoint_cnt < (int)planned_route.poses.size()){
	  waypoint_cnt = waypoint_cnt +1;
	}
	return planned_route.poses[waypoint_cnt-1].pose;			
      }
      
      
      
  private:
    
    
    
    
  };
  
  
  /*-------------------------------------------------------------------*/
  
  Route_navigation route_navigation;
  
  void move_base_fbCallback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
  {
    route_navigation.base_position_ = msg;
    
  }
  
  
  void routetopicCallback(const nav_msgs::Path::ConstPtr& Pathmsg)
  {
    route_navigation.start_route_navigation(Pathmsg);
    
    
  }
  
  int main(int argc, char** argv){
    ros::init(argc, argv, "route_navigation");  
    ros::NodeHandle n;
    ros::Rate rate(10.0);
    
    ros::Subscriber sub 		= 	n.subscribe<nav_msgs::Path>("/planned_route", 1, routetopicCallback);
    ros::Subscriber submvfb = 	n.subscribe<move_base_msgs::MoveBaseActionFeedback>("/move_base/feedback", 1, move_base_fbCallback);
    
    
    
    
    
    
    //tell the action client that we want to spin a thread by default
    MoveBaseClient ac("move_base", true);
    move_base_msgs::MoveBaseGoal goal;
    int nav_state = NAV_IDLE;
    int nav_next_state = NAV_IDLE;
    
    //wait for the action server to come up
    while(!ac.waitForServer(ros::Duration(5.0))){
      ROS_INFO("Waiting for the move_base action server to come up");
    }
    
    // Wait fo route to be published
    ROS_INFO("Wait for route");
    while(n.ok()){
      
      switch(nav_state){
	case NAV_IDLE: // No waypoints received yet.
	  if (route_navigation.route_busy == true) 
	    nav_next_state = NAV_GETPOINT;
	  break;
	  
	case NAV_GETPOINT: 	//we'll send the the next goal to the robot	      
	  goal.target_pose.header.frame_id = "map";
	  goal.target_pose.header.stamp = ros::Time::now();
	  
	  goal.target_pose.pose = route_navigation.get_next_point();
	  ROS_INFO("Sending goal");
	  ac.sendGoal(goal);
	  nav_next_state = NAV_BUSY;
	  break;	      
	case NAV_BUSY: //
	  if (!route_navigation.is_position_valid()){
	    nav_next_state = NAV_HOLD;
	    break;	    
	  }
	  if (route_navigation.is_waypoint_achieved(ac.getState()))
	    nav_next_state = NAV_WAYPOINT_DONE;
	  
	  break;
	case NAV_WAYPOINT_DONE: //
	  if (route_navigation.is_last_waypoint())
	    nav_next_state = NAV_DONE;
	  else  
	    nav_next_state = NAV_GETPOINT;
	  
	  break;	      	      
	case NAV_DONE: //
	  ROS_INFO("Navigation done");
	  route_navigation.stop_route_navigation();
	  nav_next_state = NAV_IDLE;
	  break;	      	      
	case NAV_HOLD: //
	  ROS_INFO("Navigation on hold to receive feedback");
	  if (route_navigation.is_position_valid()) // check we have a valid position
	    nav_next_state = NAV_BUSY;
	  break;	      
	  
	  
	default:
	  nav_next_state = NAV_IDLE;
      }
      
      nav_state = nav_next_state;
      
      
      ros::spinOnce(); 
      rate.sleep();      
    }   
    
    
    
    return 0;
  }
  