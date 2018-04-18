
run /home/cesar/Documents/ROPOD_LINUX/Matlabdocs/Global_Libraries/ropod_parameters/ropod_parameters

ropod_kinmodel_param.r_w    = 0.5*wheel_physical_parameters.diameter.value*ones(2,Nwheels);
ropod_kinmodel_param.r_w    = ropod_kinmodel_param.r_w(:).';
ropod_kinmodel_param.s_w    = wheel_physical_parameters.caster_offset.value; % 
ropod_kinmodel_param.d_w    = wheel_physical_parameters.separation.value;
ropod_kinmodel_param.C_SW   = ropod_physical_parameters.wheel_distribution_4SW.value(:).';

ropod_kinmodel_pv = struct2array(ropod_kinmodel_param);


