#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <move_base_msgs/MoveBaseActionFeedback.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Pose.h>
#include <actionlib/client/simple_action_client.h>
#include <tf/transform_datatypes.h>
#include <string>

#include "simplified_world_model.h"

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

#define WAYP_REACHED_DIST 0.5
#define GOAL_REACHED_DIST 0.1
#define GOAL_REACHED_ANG  20.0*3.141592/180.0



      
      
  
  class Route_navigation
  {

    enum{ NAV_HOLD = 0,
      NAV_IDLE,
      NAV_PAUSED,
      NAV_BUSY,
      NAV_GETPOINT,
      NAV_GOTOPOINT,
      NAV_WAYPOINT_DONE,
      NAV_DONE}; 

  public:
    

  
    nav_msgs::Path planned_route;
    bool route_busy;
    bool nav_paused_req;
    int  waypoint_cnt;
    int nav_state;
    int nav_next_state;   
    int nav_state_bpause; 
    move_base_msgs::MoveBaseActionFeedback::ConstPtr base_position_;	
    tf::Transform base_position_tf_;
    tf::Transform waypoint_tf_;
    actionlib_msgs::GoalID emptyGoalID;
    move_base_msgs::MoveBaseGoal goal;
        

    

    
    Route_navigation(){
     
      
      reset_navigation();    
    };
    
    ~Route_navigation(){
      base_position_.reset();};
      
      
      void start_route_navigation(const nav_msgs::Path::ConstPtr& Pathmsg){
	  reset_navigation();
	  route_busy = true;
	  planned_route = *Pathmsg;
	  ROS_INFO("Route received: size: %d waypoints",(int)planned_route.poses.size());      	  		  	  

	return;
      }
      
      void pause_route_navigation(){	 
	  nav_paused_req = true;
	  nav_state_bpause = nav_state;
	  nav_next_state = NAV_PAUSED;
	  ROS_INFO("Navigation paused");
	  return;
      };
      
      void resume_route_navigation(){
	  nav_paused_req = false;
	  if(nav_state_bpause == NAV_BUSY)
	    nav_next_state = NAV_GOTOPOINT;
	  else
	    nav_next_state = nav_state_bpause;
	  ROS_INFO("Navigation resumed");	
	  return;
      }
      
      
      void reset_navigation(){
	base_position_.reset();
	route_busy = false;
	nav_paused_req = false;
	waypoint_cnt = 0;
	nav_state = NAV_IDLE;
	nav_next_state = NAV_IDLE;   
	nav_state_bpause = NAV_IDLE; 
      }
      
      void stop_route_navigation(){
	base_position_.reset();
	route_busy = false;
	waypoint_cnt = 0;
      }	
      bool is_position_valid(){
	if(base_position_)
	  return true;
	else
	  return false;
      }
      bool is_waypoint_achieved(){
	tf::Quaternion qtemp = tf::Quaternion(base_position_->feedback.base_position.pose.orientation.x, base_position_->feedback.base_position.pose.orientation.y,
					      base_position_->feedback.base_position.pose.orientation.z,base_position_->feedback.base_position.pose.orientation.w);
	tf::Vector3 v3temp = tf::Vector3(base_position_->feedback.base_position.pose.position.x,base_position_->feedback.base_position.pose.position.y, 0.0);	 
	base_position_tf_ = tf::Transform( qtemp, v3temp);
	qtemp = tf::Quaternion(goal.target_pose.pose.orientation.x, goal.target_pose.pose.orientation.y,
					      goal.target_pose.pose.orientation.z,goal.target_pose.pose.orientation.w);
	v3temp = tf::Vector3(goal.target_pose.pose.position.x,goal.target_pose.pose.position.y, 0.0);	
	waypoint_tf_ = tf::Transform( qtemp, v3temp);
	
	tf::Transform diff_tf = base_position_tf_.inverseTimes(waypoint_tf_);
	v3temp = diff_tf.getOrigin();
	qtemp = diff_tf.getRotation();
	
	if (waypoint_cnt < (int)planned_route.poses.size()){ // Check succced only by looking at distance to waypoint			
	  if(pow( v3temp.x(),2) + pow(v3temp.y(),2) < pow(WAYP_REACHED_DIST,2) ){
	    ROS_INFO("Hooray, Intermediate waypoint passed");
	    return true;	  
	  }
	}else if (pow( v3temp.x(),2) + pow(v3temp.y(),2) < pow(GOAL_REACHED_DIST,2) 
		&& fabs(qtemp.getAngle()) < GOAL_REACHED_ANG){	  	  
		//(ac_state == actionlib::SimpleClientGoalState::SUCCEEDED)
	  
	  return true;
	}else
	  return false;					  
      }    
      
      bool is_last_waypoint(){
	if (waypoint_cnt >= (int)planned_route.poses.size())
	  return true;
	else  
	  return false;
      }
            
      
      
      geometry_msgs::Pose get_next_point(void){
	if (waypoint_cnt < (int)planned_route.poses.size()){
	  waypoint_cnt = waypoint_cnt +1;
	}
	return planned_route.poses[waypoint_cnt-1].pose;			
      }
      
      
      void navigation_state_machine(ros::Publisher movbase_cancel_pub, move_base_msgs::MoveBaseGoal* goal_ptr, bool& sendgoal){
	sendgoal = false;
	
	switch(nav_state){
	    case NAV_IDLE: // No waypoints received yet.
	      if (route_busy == true) 
		nav_next_state = NAV_GETPOINT;
	      break;
	      
	    case NAV_GETPOINT: 	//we'll send the the next goal to the robot	      
	      goal.target_pose.pose = get_next_point();	 	  
	      nav_next_state = NAV_GOTOPOINT;
	      break;
	    case NAV_GOTOPOINT:
	      goal.target_pose.header.frame_id = "map";
	      goal.target_pose.header.stamp = ros::Time::now();
	      ROS_INFO("Sending goal");
	      sendgoal = true;
	      nav_next_state = NAV_BUSY;
	      break;
	    case NAV_BUSY: //
	      if (!is_position_valid()){
		nav_next_state = NAV_HOLD;
		break;	    
	      }
	      if (is_waypoint_achieved())
		nav_next_state = NAV_WAYPOINT_DONE;
	      
	      break;
	    case NAV_WAYPOINT_DONE: //
	      if (is_last_waypoint())
		nav_next_state = NAV_DONE;
	      else  
		nav_next_state = NAV_GETPOINT;
	      
	      break;	      	      
	    case NAV_DONE: //
	      ROS_INFO("Navigation done");
	      stop_route_navigation();
	      movbase_cancel_pub.publish(emptyGoalID);
	      nav_next_state = NAV_IDLE;
	      break;	      	      
	    case NAV_HOLD: //
	      ROS_INFO("Navigation on hold to receive feedback");
	      if (is_position_valid()) // check we have a valid position
		nav_next_state = NAV_BUSY;
	      break;	      
	    case NAV_PAUSED: // this state is reached via a callback
	      if(nav_paused_req){
		movbase_cancel_pub.publish(emptyGoalID);
		nav_paused_req = false;
	      }
	      break;
	      
	    default:
	      nav_next_state = NAV_IDLE;
	  }
	  
	  nav_state = nav_next_state;	
	  
	  *goal_ptr = goal;
	
      }
      
      
  private:
    
    
    
    
  };
  
  
    
  class Elevator_navigation
  {
    
    enum{ NAV_HOLD = 0,
      NAV_IDLE,
      NAV_PAUSED,
      NAV_BUSY,
      NAV_CHECKDOOR_IN,
      NAV_CHECKDOOR_OUT,
      NAV_WAIT_FLOOR_CHANGE,      
      NAV_GOTOPOINT,
      NAV_WAYPOINT_DONE,
      NAV_DONE};     
    
  public:
    
    nav_msgs::Path planned_route;
    bool route_busy;
    bool nav_paused_req;
    int  waypoint_cnt;
    int nav_state;
    int nav_next_state;   
    int nav_state_bpause; 
    int nav_next_state_wp; 
    move_base_msgs::MoveBaseActionFeedback::ConstPtr base_position_;	
    tf::Transform base_position_tf_;
    tf::Transform waypoint_tf_;
    actionlib_msgs::GoalID emptyGoalID;
    move_base_msgs::MoveBaseGoal goal;
    ros::Time stamp_start;
    ros::Duration stamp_wait;

    
    Elevator_navigation(){
 
    };
    
    ~Elevator_navigation(){
      base_position_.reset();};
      
      void start_route_navigation(){
	  reset_navigation();
	  route_busy = true;
	  ROS_INFO("start navigation trough elevator");  

	return;
      }
      
      void pause_route_navigation(){	 
	  nav_paused_req = true;
	  nav_state_bpause = nav_state;
	  nav_next_state = NAV_PAUSED;
	  ROS_INFO("Navigation paused");
	  return;
      };
      
      void resume_route_navigation(){
	  nav_paused_req = false;
	  if(nav_state_bpause == NAV_BUSY)
	    nav_next_state = NAV_GOTOPOINT;
	  else
	    nav_next_state = nav_state_bpause;
	  ROS_INFO("Navigation resumed");	
	  return;
      }      
      
      void reset_navigation(){
	base_position_.reset();
	route_busy = false;
	nav_paused_req = false;
	waypoint_cnt = 0;
	nav_state = NAV_IDLE;
	nav_next_state = NAV_IDLE;   
	nav_state_bpause = NAV_IDLE; 
	nav_next_state_wp = NAV_IDLE;
      }   
      
      void stop_route_navigation(){
	base_position_.reset();
	route_busy = false;
	waypoint_cnt = 0;
      }	
      bool is_position_valid(){
	if(base_position_)
	  return true;
	else
	  return false;
      }      
      
      
      bool is_waypoint_achieved(){
	tf::Quaternion qtemp = tf::Quaternion(base_position_->feedback.base_position.pose.orientation.x, base_position_->feedback.base_position.pose.orientation.y,
					      base_position_->feedback.base_position.pose.orientation.z,base_position_->feedback.base_position.pose.orientation.w);
	tf::Vector3 v3temp = tf::Vector3(base_position_->feedback.base_position.pose.position.x,base_position_->feedback.base_position.pose.position.y, 0.0);	 
	base_position_tf_ = tf::Transform( qtemp, v3temp);
	qtemp = tf::Quaternion(goal.target_pose.pose.orientation.x, goal.target_pose.pose.orientation.y,
					      goal.target_pose.pose.orientation.z,goal.target_pose.pose.orientation.w);
	v3temp = tf::Vector3(goal.target_pose.pose.position.x,goal.target_pose.pose.position.y, 0.0);	
	waypoint_tf_ = tf::Transform( qtemp, v3temp);
	
	tf::Transform diff_tf = base_position_tf_.inverseTimes(waypoint_tf_);
	v3temp = diff_tf.getOrigin();
	qtemp = diff_tf.getRotation();
	
	if (pow( v3temp.x(),2) + pow(v3temp.y(),2) < pow(GOAL_REACHED_DIST,2) 
		&& fabs(qtemp.getAngle()) < GOAL_REACHED_ANG)  	  
	  return true;
	else
	  return false;					  
	}         
      
      bool check_door(){ // for now we assume the door will be open
	return true;
      }
      
      void navigation_state_machine(wm::Elevator elevator,ros::Publisher movbase_cancel_pub, move_base_msgs::MoveBaseGoal* goal_ptr, bool& sendgoal){
	sendgoal = false;
	
	switch(nav_state){
	    case NAV_IDLE: // No waypoints received yet.
	      if (route_busy == true) 
		nav_next_state = NAV_CHECKDOOR_IN;
	      break;
	      
	    case NAV_CHECKDOOR_IN: 	//we'll send the the next goal to the robot	 
	      if(check_door()){
		goal.target_pose.pose.position.x=elevator.wayp_elevator.position.x;
		goal.target_pose.pose.position.y=elevator.wayp_elevator.position.y;
		goal.target_pose.pose.position.z=elevator.wayp_elevator.position.z;
		goal.target_pose.pose.orientation.x=elevator.wayp_elevator.orientation.x;
		goal.target_pose.pose.orientation.y=elevator.wayp_elevator.orientation.y;
		goal.target_pose.pose.orientation.z=elevator.wayp_elevator.orientation.z;
		goal.target_pose.pose.orientation.w=elevator.wayp_elevator.orientation.w;
		//goal.target_pose.pose = 	
		nav_next_state_wp = NAV_WAIT_FLOOR_CHANGE;
		stamp_start = ros::Time::now();
		stamp_wait = ros::Duration(10.0); // wait five seconds from the moment you want to enter to checl way out. This will be replaced by communication with elevator system 
		nav_next_state = NAV_GOTOPOINT;
	      }
	      break;
	    case NAV_GOTOPOINT:
	      goal.target_pose.header.frame_id = "map";
	      goal.target_pose.header.stamp = ros::Time::now();
	      ROS_INFO("Sending goal");
	      sendgoal = true;
	      nav_next_state = NAV_BUSY;
	      break;
	    case NAV_BUSY: //
	      if (!is_position_valid()){
		nav_next_state = NAV_HOLD;
		break;	    
	      }
	      if (is_waypoint_achieved())
		nav_next_state = NAV_WAYPOINT_DONE;
	      
	      break;
	    case NAV_WAIT_FLOOR_CHANGE: //
	      // wait for signal that we have arrived to the floor. For now just time based
	      if( ros::Time::now() - stamp_start > stamp_wait){

		  nav_next_state = NAV_CHECKDOOR_OUT;
		
	      }
	      break;
	      
	    case NAV_CHECKDOOR_OUT: //  
		if(check_door()){
		  goal.target_pose.pose.position.x=elevator.wayp_entrance.position.x;
		  goal.target_pose.pose.position.y=elevator.wayp_entrance.position.y;
		  goal.target_pose.pose.position.z=elevator.wayp_entrance.position.z;
		  goal.target_pose.pose.orientation.x=elevator.wayp_entrance.orientation.x;
		  goal.target_pose.pose.orientation.y=elevator.wayp_entrance.orientation.y;
		  goal.target_pose.pose.orientation.z=elevator.wayp_entrance.orientation.z;
		  goal.target_pose.pose.orientation.w=elevator.wayp_entrance.orientation.w;
	
		  nav_next_state_wp = NAV_DONE;
		  nav_next_state = NAV_GOTOPOINT;
	      }	      
	      break;
	    case NAV_WAYPOINT_DONE: //
	        nav_next_state = nav_next_state_wp;		
	     
	      
	      break;	      	      
	    case NAV_DONE: //
	      ROS_INFO("Navigation done");
	      stop_route_navigation();
	      movbase_cancel_pub.publish(emptyGoalID);
	      nav_next_state = NAV_IDLE;
	      break;	      	      
	    case NAV_HOLD: //
	      ROS_INFO("Navigation on hold to receive feedback");
	      if (is_position_valid()) // check we have a valid position
		nav_next_state = NAV_BUSY;
	      break;	      
	    case NAV_PAUSED: // this state is reached via a callback
	      if(nav_paused_req){
		movbase_cancel_pub.publish(emptyGoalID);
		nav_paused_req = false;
	      }
	      break;
	      
	    default:
	      nav_next_state = NAV_IDLE;
	  }
	  
	  nav_state = nav_next_state;	
	  
	  *goal_ptr = goal;
      }
      
  };
  
  /*-------------------------------------------------------------------*/
  wm::Simplified_WorldModel simple_wm;
  
  Route_navigation route_navigation;
  Elevator_navigation elevator_navigation;
  
  
    enum{
    NAV_CORRIDOR = 0,
    NAV_ELEVATOR,
    NAV_NONE
  };
  
  int active_nav = NAV_NONE;
  
  void move_base_fbCallback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
  {
    route_navigation.base_position_ = msg;
    elevator_navigation.base_position_ = msg;    
  }
  
  
  void routetopicCallback(const nav_msgs::Path::ConstPtr& Pathmsg)
  {
    
    
    
    
      if(Pathmsg->header.frame_id == "PAUSE"){	
	  route_navigation.pause_route_navigation();
	  elevator_navigation.pause_route_navigation();
      }else if(Pathmsg->header.frame_id == "RESUME"){
	  route_navigation.resume_route_navigation();
	  elevator_navigation.resume_route_navigation();	
      }else if(Pathmsg->header.frame_id == "ELEVATOR"){
	  elevator_navigation.start_route_navigation();
	  active_nav = NAV_ELEVATOR;
      }else{
	  route_navigation.start_route_navigation(Pathmsg);
	  active_nav = NAV_CORRIDOR;
      }
  
    
  }
  
  
  int main(int argc, char** argv){
    ros::init(argc, argv, "route_navigation");  
    ros::NodeHandle n;
    ros::Rate rate(5.0);
    
    ros::Subscriber sub 		= 	n.subscribe<nav_msgs::Path>("/planned_route", 1, routetopicCallback);
    ros::Subscriber submvfb = 	n.subscribe<move_base_msgs::MoveBaseActionFeedback>("/move_base/feedback", 1, move_base_fbCallback);
    
    ros::Publisher movbase_cancel_pub = n.advertise<actionlib_msgs::GoalID>("move_base/cancel", 1);
   
    
    
      
      //tell the action client that we want to spin a thread by default
      MoveBaseClient ac("move_base", true);
      //wait for the action server to come up
      while(!ac.waitForServer(ros::Duration(5.0))){
	
	ROS_INFO("Waiting for the move_base action server to come up");
      }    
    
  
    move_base_msgs::MoveBaseGoal goal;
    bool sendgoal = false;
    // Wait fo route to be published
    ROS_INFO("Wait for route");
    while(n.ok()){
      
      switch(active_nav){
	case NAV_CORRIDOR:
	  route_navigation.navigation_state_machine(movbase_cancel_pub, &goal, sendgoal);
	  break;
	case NAV_ELEVATOR:
	  elevator_navigation.navigation_state_machine(simple_wm.elevator1,movbase_cancel_pub, &goal, sendgoal);
	  break;
	default:	  
	  break;
      }  
      
      if (sendgoal)
	ac.sendGoal(goal);
 
      
      
      ros::spinOnce(); 
      rate.sleep();      
    }   
    
    
    
    return 0;
  }
  