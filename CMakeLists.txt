cmake_minimum_required(VERSION 2.8.3)
project(ed_gui_server)

find_package(catkin REQUIRED COMPONENTS
    ed
    message_generation
)

# find_package(Boost REQUIRED COMPONENTS system program_options)
# find_package(PCL REQUIRED)
# find_package(OpenCV REQUIRED)

# ------------------------------------------------------------------------------------------------
#                                     ROS MESSAGES AND SERVICES
# ------------------------------------------------------------------------------------------------

# Add messages
add_message_files(
    FILES
    Mesh.msg
    EntityInfo.msg
    EntityInfos.msg
)

# Add services
add_service_files(
   FILES
    QueryEntities.srv
    QueryMeshes.srv
)

# Generate added messages and services with any dependencies listed here
generate_messages(
   DEPENDENCIES
   geometry_msgs
)

# ------------------------------------------------------------------------------------------------
#                                          CATKIN EXPORT
# ------------------------------------------------------------------------------------------------

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES bla
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

# ------------------------------------------------------------------------------------------------
#                                              BUILD
# ------------------------------------------------------------------------------------------------

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)

add_library(ed_gui_server_plugin
    src/gui_server_plugin.cpp
)
target_link_libraries(ed_gui_server_plugin ${catkin_LIBRARIES})
add_dependencies(ed_gui_server_plugin ${PROJECT_NAME}_generate_messages_cpp)

# add_executable(exec_name
#     src/source_file1.cpp
#     ...
# )
# target_link_libraries(exec_name ${catkin_LIBRARIES})


