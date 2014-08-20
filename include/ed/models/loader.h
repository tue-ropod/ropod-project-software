#ifndef WIRE_VOLUME_MODEL_DB_LOADER_H_
#define WIRE_VOLUME_MODEL_DB_LOADER_H_

#include <geolib/datatypes.h>

namespace ed
{
namespace models
{

class Loader
{

public:

    Loader();

    virtual ~Loader();

    geo::ShapePtr loadShape(const std::string& type);

protected:

    std::string models_root_path_;

    std::map<std::string, geo::ShapePtr> shape_cache_;

};

} // end models namespace
} // end ed namespace

#endif
