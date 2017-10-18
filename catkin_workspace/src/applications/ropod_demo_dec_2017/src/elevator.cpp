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
      
      p1.x = 0.0;
      p1.y = 0.0;
      p2.x = 0.0;
      p2.y = 0.0;
      line_door.push_back(p1);
      line_door.push_back(p2);
      
      wayp_elevator.x = 0.0;
      wayp_elevator.y = 0.0;
      
      wayp_wait.x = 0.0;
      wayp_wait.y = 0.0;
      
      wayp_entrance.x = 0.0;
      wayp_entrance.y = 0.0;
      
  
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
  
  
