string id
string type
bool has_pose
geometry_msgs/Pose pose

# Number indicating the revision of the mesh. If this number
# has changed, the mesh has changed (and should be queried
# again).
# Special case: mesh_revision == 0 means no mesh available.
uint32 mesh_revision

Color color

Polygon polygon
