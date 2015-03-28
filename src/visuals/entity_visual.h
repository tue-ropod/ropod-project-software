#ifndef ENTITY_VISUAL_H
#define ENTITY_VISUAL_H

#include <rviz/ogre_helpers/mesh_shape.h>
#include <rviz/ogre_helpers/billboard_line.h>
#include <rviz/ogre_helpers/movable_text.h>

#include <ed_gui_server/Mesh.h>
#include <ed_gui_server/Polygon.h>

namespace Ogre
{
class Vector3;
class Quaternion;
class ColorValue;
}

namespace rviz_plugins
{

class EntityVisual
{
public:
    // Constructor.  Creates the visual stuff and puts it into the scene, but in an unconfigured state.
    EntityVisual( Ogre::SceneManager* scene_manager, Ogre::SceneNode* parent_node );

    // Destructor.  Removes the visual stuff from the scene.
    virtual ~EntityVisual();

    // Configure the visual to show the data in the message.
    void setMesh(const ed_gui_server::Mesh& mesh );
    void setConvexHull ( const ed_gui_server::Polygon& polygon );
    void setLabel (const std::string& label );

    void setColor ( const Ogre::ColourValue& c );

    // Set the pose of the coordinate frame the message refers to.
    void setFramePosition( const Ogre::Vector3& position );
    void setFrameOrientation( const Ogre::Quaternion& orientation );

    // Get mesh revision
    unsigned int getMeshRevision() const { return mesh_revision_; }

private:
    // The actual scene objects
    boost::shared_ptr<rviz::MeshShape> mesh_;
    unsigned int mesh_revision_;

    boost::shared_ptr<rviz::BillboardLine> convex_hull_;

    boost::shared_ptr<rviz::MovableText> label_;

    Ogre::ColourValue color_;    

    Ogre::SceneNode* frame_node_;

    Ogre::SceneManager* scene_manager_;
};

}

#endif // ENTITY_VISUAL_H
