cmake_minimum_required(VERSION 2.8.3)
project(pico_bringup)

find_package(catkin REQUIRED COMPONENTS
    message_generation
    geometry_msgs
    nav_msgs
    roscpp
    tf
)


# find_package(Boost REQUIRED COMPONENTS system program_options)
# find_package(PCL REQUIRED)
# find_package(OpenCV REQUIRED)

# ------------------------------------------------------------------------------------------------
#                                     ROS MESSAGES AND SERVICES
# ------------------------------------------------------------------------------------------------

# Generate messages
# add_message_files(
#    FILES
#    message1.msg
#    ...
# )

# Generate services
# add_service_files(
#    FILES
#    service1.srv
#    ...
# )

# Generate added messages and services with any dependencies listed here
# generate_messages(
#    DEPENDENCIES
#    geometry_msgs
#    ...
# )

# ------------------------------------------------------------------------------------------------
#                                          CATKIN EXPORT
# ------------------------------------------------------------------------------------------------

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES pico_bringup
#  CATKIN_DEPENDS geometry_msgs roscpp tf
#  DEPENDS system_lib
)

# ------------------------------------------------------------------------------------------------
#                                              BUILD
# ------------------------------------------------------------------------------------------------

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)

# add_library(library_name
#     src/lib_source_file1.cpp
#     ...
# )
# target_link_libraries(library_name ${catkin_LIBRARIES})

# add_executable(exec_name
#     src/source_file1.cpp
#     ...
# )
# target_link_libraries(exec_name ${catkin_LIBRARIES})

add_executable(tf_broadcaster_simulator src/tf_broadcaster_simulator.cpp)
target_link_libraries(tf_broadcaster_simulator ${catkin_LIBRARIES})
