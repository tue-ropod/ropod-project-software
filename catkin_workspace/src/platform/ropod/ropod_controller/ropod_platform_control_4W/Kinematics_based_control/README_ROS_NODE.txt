ROS node Kinematic control for ropod with smart-wheels.


* Important! 

To communicate with the smartwheels EtehrCAT is used. The used EtherCAT library requires access to raw data of the Ethernet port. Therefore, when copying the node the first time to a new computer, you need to change the access permissions as follows:

sudo setcap CAP_NET_RAW+ep "catkin_workspace"/devel/lib/ropod_test_ros_ec/ropod_test_ros_ec_node 

where "catkin_workspace" is the directory of your catkin workspace.


* ROS parameters
The parameters are divided in three groups:

** Smart wheel configuration
- /smart_wheels/enable [boolean][-]: "true" to enable the smart wheels or "false" to disable them.
- /smart_wheels/max_vel [double][rad/s]: Maximum allowed velocity in [rad/s] for each wheel of the smartwheel.
- /smart_wheels/max_current [double][A]: Maximum allowed current in [A] for each motor of the smartwheel.

** ropod base configuration
- /base_conf/max_vel_xy [double][m/s]: Maximum allowed translational velocity in [m/s] for the ropod base.
- /base_conf/max_vel_theta [double][rad/s]: Maximum allowed rotational velocity in [rad/s] for the ropod base.
- /base_conf/max_acc_xy [double][m/s^2]: Maximum translational acceleration in [m/s^2] for the ropod base.
- /base_conf/max_acc_theta [double][rad/s^2]: Maximum rotational acceleration in [rad/s^2] for the ropod base.

** Ropod kinematic parameters
- /base_kin_model/r_w"LR"_"SWi" [double][m]: Radius for each wheel of the smartwheels in [m]. 
	"wLR" can be either wL for left wheel or wR for right wheel
	"SWi" indicates the Smart-Wheel number.
	Example: radius of right wheel, smart weel 3, /base_kin_model/r_wR_SW3
- /base_kin_model/s_w [double][m]: Caster wheel offset of smarts wheels in [m]
- /base_kin_model/d_w [double][m]: Wheel separation between wheels in a smarts wheel in [m]
- /base_kin_model/"xy"pos_"SWi" [double][m]: x or y position of the Smart-wheel i with respect to the gemetric center of the ropod base.
	Example: x position of smartwheel 2, /base_kin_model/xpos_SW2
	Example: y position of smartwheel 2, /base_kin_model/ypos_SW2
