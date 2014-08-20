#include "ed/models/loader.h"

#include <tue/filesystem/path.h>
#include <ros/package.h>

#include <geolib/serialization.h>

#include <geolib/Importer.h>

#include "xml_shape_parser.h"

namespace ed
{
namespace models
{

// ----------------------------------------------------------------------------------------------------

Loader::Loader()
{

}

// ----------------------------------------------------------------------------------------------------

Loader::~Loader()
{
}

// ----------------------------------------------------------------------------------------------------

geo::ShapePtr Loader::loadShape(const std::string& type)
{
    std::map<std::string, geo::ShapePtr>::iterator it_shape = shape_cache_.find(type);
    if (it_shape != shape_cache_.end())
        return it_shape->second;

    std::string object_models_path = ros::package::getPath("ed_object_models");

    geo::ShapePtr shape;

    tue::filesystem::Path shape_path_geo(object_models_path + "/models/" + type + "/shape/shape.geo");
    tue::filesystem::Path shape_path_3ds(object_models_path + "/models/" + type + "/shape/shape.3ds");
    tue::filesystem::Path shape_path_xml(object_models_path + "/models/" + type + "/shape/shape.xml");

    if (!shape && shape_path_geo.exists())
    {
        geo::serialization::registerDeserializer<geo::Shape>();
        shape = geo::serialization::fromFile(shape_path_geo.string());
    }
    if (!shape && shape_path_3ds.exists())
    {
        shape = geo::Importer::readMeshFile(shape_path_3ds.string());
    }
    if (!shape && shape_path_xml.exists())
    {
        std::string error;
        shape = parseXMLShape(shape_path_xml.string(), error);
    }

    if (!shape)
        std::cout << "ed::models::Loader: error while loading model '" << type  << " @ " << shape_path_geo.string() << std::endl;
    else
        shape_cache_[type] = shape;

    return shape;
}

}
}
