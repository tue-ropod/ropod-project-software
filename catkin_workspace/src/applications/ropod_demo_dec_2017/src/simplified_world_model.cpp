#include <ros/ros.h>
#include "simplified_world_model.h"
 
  
namespace wm
{
  
    Simplified_WorldModel::Simplified_WorldModel(){
      double l1C1[] = {4.22, -1.22, 3.57, -6.44};
      double wpl1C1[] = {4.5, -1.53, 3.92, -6.6};
      double l2C1[] = {5.4, -1.5, 5.04, -6.64};
      double wpl2C1[] = {5.05, -1.56, 4.63, -6.64};
      corridor1.init(l1C1,l2C1, wpl1C1, wpl2C1);
      elevator1.init();
      
     
      

    };
    
    Simplified_WorldModel::~Simplified_WorldModel(){
     };
  
  
} 

int main(int argc, char** argv){
      return 0;
}
 
  