#include <OGRE/OgreVector3.h>
#include <OGRE/OgreSceneNode.h>
#include <OGRE/OgreSceneManager.h>

#include "entity_visual.h"

namespace rviz_plugins
{

EntityVisual::EntityVisual( Ogre::SceneManager* scene_manager, Ogre::SceneNode* parent_node )
{
    mesh_revision_ = 0;

    scene_manager_ = scene_manager;

    frame_node_ = parent_node->createChildSceneNode();

    mesh_.reset(new rviz::MeshShape( scene_manager_, frame_node_ ));
}

EntityVisual::~EntityVisual()
{
    // Destroy the frame node since we don't need it anymore.
    scene_manager_->destroySceneNode( frame_node_ );
}

void EntityVisual::setMesh(const ed_gui_server::Mesh& mesh)
{
    mesh_.reset(new rviz::MeshShape( scene_manager_, frame_node_ ));

    // Set mesh revision
    mesh_revision_ = mesh.revision;

    mesh_->estimateVertexCount(mesh.vertices.size() / 3);
    mesh_->beginTriangles();

    // Set vertices
    for(unsigned int i = 0; i < mesh.vertices.size() / 3 / 3; ++i )
    {
        unsigned int i9 = 9 * i;
        unsigned int i3 = 3 * i;

        Ogre::Vector3 v1, v2, v3, n;

        v1.x = mesh.vertices[i9 + 0];
        v1.y = mesh.vertices[i9 + 1];
        v1.z = mesh.vertices[i9 + 2];

        v2.x = mesh.vertices[i9 + 3];
        v2.y = mesh.vertices[i9 + 4];
        v2.z = mesh.vertices[i9 + 5];


        v3.x = mesh.vertices[i9 + 6];
        v3.y = mesh.vertices[i9 + 7];
        v3.z = mesh.vertices[i9 + 8];

        n = (v1-v3).crossProduct(v2-v3).normalisedCopy();

        mesh_->addVertex(v1, n);
        mesh_->addVertex(v2, n);
        mesh_->addVertex(v3, n);
    }

    mesh_->endTriangles();

    mesh_->setColor(color_);
}

void EntityVisual::setColor(const Ogre::ColourValue &c)
{
    color_  = c;
}

void EntityVisual::setConvexHull ( const ed_gui_server::Polygon& polygon )
{    
    convex_hull_.reset(new rviz::BillboardLine( scene_manager_, frame_node_ ));
    convex_hull_->setMaxPointsPerLine(2);
    convex_hull_->setNumLines(polygon.xs.size() * 3);
    convex_hull_->setLineWidth(0.01);

    for(unsigned int i = 0; i < polygon.xs.size(); ++i)
    {        
        int j = (i + 1) % polygon.xs.size();

        float x1 = polygon.xs[i];
        float x2 = polygon.xs[j];

        float y1 = polygon.ys[i];
        float y2 = polygon.ys[j];

        // Low line
        if (i != 0)
            convex_hull_->newLine();
        convex_hull_->addPoint(Ogre::Vector3(x1, y1, polygon.z_min));
        convex_hull_->addPoint(Ogre::Vector3(x2, y2, polygon.z_min));

        // High line
        convex_hull_->newLine();
        convex_hull_->addPoint(Ogre::Vector3(x1, y1, polygon.z_max));
        convex_hull_->addPoint(Ogre::Vector3(x2, y2, polygon.z_max));

        // Vertical line
        convex_hull_->newLine();
        convex_hull_->addPoint(Ogre::Vector3(x1, y1, polygon.z_min));
        convex_hull_->addPoint(Ogre::Vector3(x1, y1, polygon.z_max));
    }

    convex_hull_->setColor(color_.r, color_.g, color_.b, color_.a);
}

void EntityVisual::setLabel (const std::string& label )
{
    label_.reset(new rviz::MovableText( label ));

    frame_node_->attachObject( label_.get() );

    label_->setTextAlignment(rviz::MovableText::H_CENTER, rviz::MovableText::V_CENTER);
    label_->setCharacterHeight(0.05);

    label_->setCaption(label);
    label_->setColor( color_ );
}

// Position and orientation are passed through to the SceneNode.
void EntityVisual::setFramePosition( const Ogre::Vector3& position )
{
    frame_node_->setPosition( position );
}

void EntityVisual::setFrameOrientation( const Ogre::Quaternion& orientation )
{
    frame_node_->setOrientation( orientation );
}

} // end namespace rviz_plugins

