#include "elevator.h"


namespace wm
{
    Elevator::Elevator(){
      
    };
    void Elevator:: init( ){
      point_wm p1;
      p1.x = 0.0;
      p1.y = 0.0;
      point_wm p2;
      p2.x = 0.0;
      p2.y = 0.0;
      point_wm p3;
      p3.x = 0.0;
      p3.y = 0.0;
      point_wm p4;
      p4.x = 0.0;
      p4.y = 0.0;
      convex_area_elev.push_back(p1);
      convex_area_elev.push_back(p2);
      convex_area_elev.push_back(p3);
      convex_area_elev.push_back(p4);
      
      p1.x = -8.5;
      p1.y = 3.3;
      p2.x = -8.5;
      p2.y = 2.35;
      line_door.push_back(p1);
      line_door.push_back(p2);
      
      wayp_elevator.position.x = -7.116;
      wayp_elevator.position.y = -2.986;
      wayp_elevator.position.z = 0.0;
      wayp_elevator.orientation.x = 0.0;
      wayp_elevator.orientation.y = 0.0;
      wayp_elevator.orientation.z = 0.9999;
      wayp_elevator.orientation.w = 0.012;

      
      wayp_wait.position.x = 10.9;
      wayp_wait.position.y = -2.708;
      wayp_wait.position.z = 0.0;
      wayp_wait.orientation.x = 0.0;
      wayp_wait.orientation.y = 0.0;
      wayp_wait.orientation.z = 0.001452;
      wayp_wait.orientation.w = 0.999999;      
      
   
   
      wayp_entrance.position.x = -9.6206;
      wayp_entrance.position.y = -3.785478;
      wayp_entrance.position.z = 0.0;
      wayp_entrance.orientation.x = 0.0;
      wayp_entrance.orientation.y = 0.0;
      wayp_entrance.orientation.z = -0.7;
      wayp_entrance.orientation.w = 0.713;        
      
 
    };
    
    Elevator::~Elevator(){};
      
      
      
    bool Elevator:: is_entrance_detectable(){
      return true; // for now we assume the robot is facing the door
      
    };
    bool Elevator:: is_entrance_accesible(){
      return true; // for now we assume the door is open, once the laser data is integrated this will be checked
    };
    void Elevator:: go_into(){};
    void Elevator:: go_out(){};      

}
  
  
