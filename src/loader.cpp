#include "ed/models/loader.h"

#include <tue/filesystem/path.h>
#include <ros/package.h>
#include <fstream>

#include <geolib/serialization.h>
#include <geolib/HeightMap.h>
#include <geolib/Shape.h>

#include <yaml-cpp/yaml.h>

#include <opencv2/highgui/highgui.hpp>

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

geo::ShapePtr getHeightMapShape(const tue::filesystem::Path& path)
{
    geo::ShapePtr shape;

    if (path.exists())
    {
        std::ifstream fin(path.string().c_str());

        YAML::Parser parser(fin);
        YAML::Node doc;
        parser.GetNextDocument(doc);

        double res, origin_x, origin_y, origin_z, blockheight;
        std::string mapfname = "";

        try
        {
            doc["resolution"] >> res;
            doc["origin"][0] >> origin_x;
            doc["origin"][1] >> origin_y;
            doc["origin"][2] >> origin_z;
            doc["image"] >> mapfname;
            doc["blockheight"] >> blockheight;

            tue::filesystem::Path img_path(path.string().substr(0, path.string().size()-14) + mapfname);

            if (img_path.exists())
            {
                cv::Mat image = cv::imread(img_path.string(), CV_LOAD_IMAGE_GRAYSCALE);   // Read the file

                std::vector<std::vector<double> > map;

                if (image.data)
                {
                    map.resize(image.cols);
                    for(int x = 0; x < image.cols; ++x) {
                        map[x].resize(image.rows);
                        for(int y = 0; y < image.rows; ++y) {
                            map[x][image.rows - y - 1] = blockheight - (double)image.at<unsigned char>(y, x) / 255 * blockheight;
                        }
                    }
                    geo::HeightMap hmap = geo::HeightMap::fromGrid(map, res);
                    geo::Mesh mesh = hmap.getMesh().getTransformed(geo::Transform(origin_x, origin_y, origin_z));
                    shape = geo::ShapePtr(new geo::Shape());
                    shape->setMesh(mesh);
                }
                else
                {
                    std::cout << "ed::models::Loader: heightmap.pgm contains invalid data." << std::endl;
                }
            }
            else
            {
                std::cout << "ed::models::Loader: Image specified in heightmap.yaml file does not exist " << img_path.string() << std::endl;
            }
        }
        catch (YAML::InvalidScalar& e)
        {
            std::cout << "ed::models::Loader: Failed to parse heightmap.yaml file " << e.what() << std::endl;
        }
    }
    else
    {
        std::cout << "ed::models::Loader: heightmap.yaml does not exist" << std::endl;
    }

    return shape;
}

// ----------------------------------------------------------------------------------------------------

geo::ShapePtr Loader::loadShape(const std::string& type)
{
    std::map<std::string, geo::ShapePtr>::iterator it_shape = shape_cache_.find(type);
    if (it_shape != shape_cache_.end())
        return it_shape->second;

    std::string object_models_path = ros::package::getPath("ed_object_models");

    geo::ShapePtr shape;

    tue::filesystem::Path heightmap_path(object_models_path + "/models/" + type + "/shape/heightmap.yaml");
    tue::filesystem::Path shape_path_geo(object_models_path + "/models/" + type + "/shape/shape.geo");
    tue::filesystem::Path shape_path_3ds(object_models_path + "/models/" + type + "/shape/shape.3ds");
    tue::filesystem::Path shape_path_xml(object_models_path + "/models/" + type + "/shape/shape.xml");

    if (!shape && heightmap_path.exists())
    {
        shape = getHeightMapShape(heightmap_path);
    }
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
