cmake_minimum_required(VERSION 2.8.3)
project(ed_object_models)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  geolib2
  roslib
  tue_filesystem
)

###################################
## catkin specific configuration ##
###################################
catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ed_object_models
  CATKIN_DEPENDS geolib2 roslib tue_filesystem
)

###########
## Build ##
###########

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

file(GLOB_RECURSE HEADER_FILES include/*.h)

# Declare a cpp library
add_library(ed_object_models
   src/loader.cpp
   src/xml_shape_parser.cpp
   ${HEADER_FILES}
)

# Specify libraries to link a library or executable target against
target_link_libraries(ed_object_models
   ${catkin_LIBRARIES}
)

# Declare a cpp executable
add_executable(ed_object_models_test_loader test/test_load.cpp)
add_executable(ed_object_models_view        tools/view.cpp)
target_link_libraries(ed_object_models_test_loader ed_object_models)
target_link_libraries(ed_object_models_view ed_object_models)

