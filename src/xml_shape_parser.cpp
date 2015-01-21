#include "xml_shape_parser.h"

#include <vector>
#include <string>

#include <geolib/datatypes.h>
#include <geolib/CompositeShape.h>

#include <tinyxml.h>

// ----------------------------------------------------------------------------------------------------

std::vector<double> parseArray(const TiXmlElement* xml_elem)
{
    std::string txt = xml_elem->GetText();

    std::vector<double> v;

    std::string word;
    std::stringstream stream(txt);
//    while( getline(stream, word, ' ') ) {
//        v.push_back(atof(word.c_str()));
//    }

    double d;
    while(stream >> d)
        v.push_back(d);

    return v;
}

// ----------------------------------------------------------------------------------------------------

geo::ShapePtr polygonToMesh(const std::vector<double>& points, double height, const std::vector<double>& size)
{
    geo::Mesh mesh;

    int num_points = points.size() / 2;

    double size_x = 1;
    double size_y = 1;

    if (size.size() == 3)
    {
        height *= size[2];
        size_x = size[0];
        size_y = size[0];
    }

    // Calculate vertices
    for(unsigned int i = 0; i < points.size(); i += 2)
    {
        double x = size_x * points[i];
        double y = size_y * points[i + 1];

        mesh.addPoint(x, y, -height / 2);
        mesh.addPoint(x, y, height / 2);
    }

    // Calculate side triangles
    for(int i = 1; i < num_points - 1; ++i)
    {
        int i2 = 2 * i;
        mesh.addTriangle(0, i2, i2 + 2);
        mesh.addTriangle(1, i2 + 1, i2 + 3);
    }

    // Calculate top and bottom triangles
    for(int i = 0; i < num_points; ++i)
    {
        int j = (i + 1) % num_points;
        mesh.addTriangle(i * 2, j * 2, i * 2 + 1);
        mesh.addTriangle(i * 2 + 1, j * 2, j * 2 + 1);
    }

    geo::ShapePtr shape(new geo::Shape);
    shape->setMesh(mesh);

    return shape;
}

// ----------------------------------------------------------------------------------------------------

geo::ShapePtr parseXMLShape(const std::string& filename, std::string& error)
{
    std::stringstream s_error;

    TiXmlDocument doc(filename);
    doc.LoadFile();

    if (doc.Error())
    {
        s_error << "While parsing '" << filename << "': " << std::endl << std::endl
                << doc.ErrorDesc() << " at line " << doc.ErrorRow() << ", col " << doc.ErrorCol() << std::endl;
        error = s_error.str();
        return geo::ShapePtr();
    }

    const TiXmlElement* model_xml = doc.FirstChildElement("model");
    if (!model_xml)
    {
        s_error << "Could not find 'model' element" << std::endl;
        return geo::ShapePtr();
    }

    boost::shared_ptr<geo::CompositeShape> shape(new geo::CompositeShape);

    const TiXmlElement* shape_xml = model_xml->FirstChildElement();
    while (shape_xml)
    {
        geo::Pose3D pose = geo::Pose3D::identity();

        // parse properties valid for all shapes
        const TiXmlElement* xyz_xml = shape_xml->FirstChildElement("xyz");
        if (xyz_xml)
        {
            std::vector<double> xyz = parseArray(xyz_xml);
            pose.setOrigin(geo::Vector3(xyz[0], xyz[1], xyz[2]));
        }

        const TiXmlElement* rpy_xml = shape_xml->FirstChildElement("rpy");
        if (rpy_xml)
        {
            std::vector<double> rpy = parseArray(rpy_xml);
            if (fabs(rpy[0]) > 0.0001 || fabs(rpy[1]) > 0.0001 || fabs(rpy[2]) > 0.0001)
            {
                geo::Matrix3 rot;
                rot.setRPY(rpy[0], rpy[1], rpy[2]);
                pose.setBasis(rot);
            }
        }

        std::vector<double> size;
        const TiXmlElement* size_xml = shape_xml->FirstChildElement("size");
        if (size_xml)
            size = parseArray(size_xml);

        std::string shape_type = shape_xml->Value();
        if (shape_type == "box")
        {
            if (!size.empty()) {
                geo::Vector3 v_size(size[0], size[1], size[2]);
                shape->addShape(geo::Box(-v_size / 2, v_size / 2), pose);
            } else {
                s_error << "In definition '" << filename << "': shape '" << shape_type << "' has no size property" << std::endl;
            }
        }
        else if (shape_type == "polygon")
        {
            std::cout << "Polygon" << std::endl;

            const TiXmlElement* height_xml = shape_xml->FirstChildElement("height");
            double height = (height_xml) ? atof(height_xml->GetText()) : 1;

            const TiXmlElement* points_xml = shape_xml->FirstChildElement("points");
            if (points_xml)
            {
                std::vector<double> points = parseArray(points_xml);
                geo::ShapePtr polygon = polygonToMesh(points, height, size);
                shape->addShape(*polygon, pose);
            }
            else
            {
                s_error << "In definition '" << filename << "': Polygon shape needs field 'points'." << std::endl;
            }
        }
        else
        {
            s_error << "In definition '" << filename << "': Unknown shape type: '" << shape_type << "'" << std::endl;
        }

        shape_xml = shape_xml->NextSiblingElement();
    }

    error = s_error.str();
    if (error.empty())
        return shape;

    return geo::ShapePtr();
}
