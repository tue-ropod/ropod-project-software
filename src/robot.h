#ifndef ED_GUI_SERVER_ROBOT_H_
#define ED_GUI_SERVER_ROBOT_H_

#include <tf/transform_listener.h>

#include <ed_gui_server/EntityInfo.h>

#include <geolib/datatypes.h>

namespace gui
{

class Robot
{

public:

    Robot();

    virtual ~Robot();

    void initialize(const std::string& name);

    inline const std::string& name() const { return name_; }

    inline geo::ShapeConstPtr shape() const { return shape_; }

    void getEntities(std::vector<ed_gui_server::EntityInfo>& entities);

private:

    std::string name_;

    tf::TransformListener* tf_listener_;

    geo::ShapePtr shape_;

private:

};

} // end namespace gui

#endif
