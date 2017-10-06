cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(roscpp REQUIRED)
find_package(std_msgs REQUIRED)
include_directories(${roscpp_INCLUDE_DIRS})
include_directories(${std_msgs_INCLUDE_DIRS})
find_package(catkin REQUIRED COMPONENTS
    geolib2
    code_profiler
    roslib    
)

# Find Gazebo
find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")

# Build our plugin
include_directories(
    include
    3rdparty
    ${catkin_INCLUDE_DIRS}
)


add_library(Odometry_Plugin SHARED src/Odometry_Plugin.cc)
target_link_libraries(Odometry_Plugin ${GAZEBO_libraries} ${roscpp_LIBRARIES})



