cmake_minimum_required(VERSION 2.8.3)
project(test_probability_library)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  wire_msgs
  problib
  tf
  geometry_msgs
  visualization_msgs
)

# Declare a catkin package                                                                                                                                
catkin_package(
  INCLUDE_DIRS
    include
  CATKIN_DEPENDS
    roscpp
    wire_msgs
    problib
    tf
    geometry_msgs
    visualization_msgs
)

include_directories(include ${catkin_INCLUDE_DIRS})

## Build

set(CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS}") # C++ 11
set(CMAKE_CXX_FLAGS "-Wreturn-type ${CMAKE_CXX_FLAGS}") # Return type checking

add_library(test_probability_library
    src/Visualizer.cpp
)

target_link_libraries(test_probability_library ${catkin_LIBRARIES})

# ROS nodes
add_executable(visualization src/visualization.cpp) 
target_link_libraries(visualization test_probability_library)

add_executable(get_world_state src/get_world_state.cpp) 
target_link_libraries(get_world_state ${catkin_LIBRARIES})

add_executable(generate_evidence src/generate_evidence.cpp) 
target_link_libraries(generate_evidence ${catkin_LIBRARIES})
