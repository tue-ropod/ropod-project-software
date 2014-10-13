#ifndef ED_GUI_SERVER_ROBOT_H_
#define ED_GUI_SERVER_ROBOT_H_

#include <tf/transform_listener.h>

#include <ed_gui_server/EntityInfo.h>

#include <geolib/datatypes.h>

namespace gui
{

typedef std::map<std::string, std::pair<geo::Pose3D, geo::ShapeConstPtr> > ShapeMap;

class Robot
{

public:

    Robot();

    virtual ~Robot();

    void initialize(const std::string& name);

    inline const std::string& name() const { return name_; }

    geo::ShapeConstPtr getShape(const std::string& id) const;

    void getEntities(std::vector<ed_gui_server::EntityInfo>& entities) const;

private:

    std::string name_;

    tf::TransformListener* tf_listener_;

    ShapeMap shapes_;

private:

};

} // end namespace gui

#endif
