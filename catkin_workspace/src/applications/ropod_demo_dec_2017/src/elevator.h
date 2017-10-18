

#ifndef ELEVATOR_WM_HH
#define ELEVATOR_WM_HH

#include <vector>
#include "datatypes_wm.h"

#define ELEV_WAIT_DIST_TH 0.5

namespace wm
{
  class Elevator
  {
    
    public: Elevator();		      

    public: ~Elevator();

    public: bool is_entrance_detectable();
    public: bool is_entrance_accesible();
    public: void go_into();
    public: void go_out();
    
    public: void init( );
    private: std::vector<point_wm> convex_area_elev;
    private: std::vector<point_wm> line_door;
    private: point_wm wayp_elevator;
    private: point_wm wayp_wait;
    private: point_wm wayp_entrance;   



  };
  
}
#endif
