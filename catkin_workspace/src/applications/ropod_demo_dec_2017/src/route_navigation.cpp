#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <move_base_msgs/MoveBaseActionFeedback.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Pose.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

enum{ NAV_HOLD = 0,
      NAV_BUSY,
      NAV_WAYPOINT_DONE,
      NAV_DONE,
      NAV_NOTSTARTED,
      NAV_IDLE};
      
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
		
		geometry_msgs::Pose get_next_point(void){
			if (waypoint_cnt < (int)planned_route.poses.size()){
				waypoint_cnt = waypoint_cnt +1;
			}
			return planned_route.poses[waypoint_cnt-1].pose;			
		}
		
		int check_nav_status(actionlib::SimpleClientGoalState ac_state){
			if (waypoint_cnt ==0)
				return NAV_NOTSTARTED;
			
			if (waypoint_cnt < (int)planned_route.poses.size()){ // Check succced only by looking at distance to waypoint
				if (base_position_){ // check we have a valid position
					if (  pow(base_position_->feedback.base_position.pose.position.x - planned_route.poses[waypoint_cnt-1].pose.position.x,2) + pow(base_position_->feedback.base_position.pose.position.y - planned_route.poses[waypoint_cnt-1].pose.position.y,2) < pow(0.5,2) ){
						ROS_INFO("Hooray, Intermediate waypoint passed");
						return NAV_WAYPOINT_DONE;
				}else{
					return NAV_HOLD;
				}
			}
			
			}else{      
				if(ac_state == actionlib::SimpleClientGoalState::SUCCEEDED){
					ROS_INFO("Hooray, Last way point achieved");
					route_busy = false;
					return NAV_DONE;
				}
			} 
			if (waypoint_cnt > (int)planned_route.poses.size()){
				route_busy = false;
				return NAV_DONE;
			}

			return NAV_BUSY;
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
  int nav_status;

  //wait for the action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }
  
  // Wait fo route to be published
  ROS_INFO("Wait for route");
  while(n.ok()){
			
	
	if (route_navigation.route_busy == true) {
      
      nav_status = route_navigation.check_nav_status(ac.getState());
      
      if( nav_status == NAV_WAYPOINT_DONE || nav_status == NAV_NOTSTARTED){      		  
	      //we'll send the the next goal to the robot
	      goal.target_pose.header.frame_id = "map";
	      goal.target_pose.header.stamp = ros::Time::now();
	      
	      goal.target_pose.pose = route_navigation.get_next_point();
	      
	      ROS_INFO("Sending goal");
	      ac.sendGoal(goal);
	  }
  
	}
	
	ros::spinOnce(); 
	rate.sleep();      
  }   
      

  
  return 0;
}
