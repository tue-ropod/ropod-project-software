%% Smart wheel command specification
SW_COM1_ENABLE1         =  hex2dec('0001');             % 0x0001
SW_COM1_ENABLE2         =  hex2dec('0002');             % 0x0002
SW_COM1_MODE_TORQUE	    =  bitshift(hex2dec('0000'),2); % (0x0 << 2)
SW_COM1_MODE_DTORQUE	=  bitshift(hex2dec('0001'),2); % (0x1 << 2)
SW_COM1_MODE_VELOCITY	=  bitshift(hex2dec('0002'),2); % (0x2 << 2)
SW_COM1_MODE_DVELOCITY	=  bitshift(hex2dec('0003'),2); % (0x3 << 2)
SW_COM1_EMERGENCY1		=  hex2dec('0010');             %  0x0010	
SW_COM1_EMERGENCY2		=  hex2dec('0020');             %  0x0020
SW_COM1_USE_TS			=  hex2dec('8000');             %  0x8000


%% smart wheels limits and offset
sw_ini_enable = 0.0;
max_sw_current  =  10; % [A]
pivot_offs_sws  = [1.0998 0.2956 3.507 0.3641]; % Vector with pivot offsets in rad

%% Ropod max limits
max_ropod_vel_xy     =  1.5; % [m/s]
max_ropod_acc_xy     =  1.0; % [m/s^2]
max_ropod_vel_theta  =  pi/4; % [rad/s]
max_ropod_acc_theta  =  pi/16; % [rad/s^2]


% data = xml2struct('param.xml');
% max_ropod_vel_xy =  str2double(data.configuration.max_ropod_vel_xy.Text);

%% Initialze kinemtic model parameters
Nwheels = 4; % Do not change this parameter. The simulink model would need to change as well
set_ropod_KinModparams;

Ts = 0.001; % Controller 
Tsp = 1;
Ts_rost = 0.01;

