#include "polypartition/src/polypartition.h"

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <geolib/Mesh.h>
#include <geolib/Shape.h>
#include <geolib/serialization.h>

#include <iostream>

int main(int argc, char **argv)
{
    if (argc <= 1)
        return 0;

    std::string image_filename = argv[1];
    std::cout << "Loading " << image_filename << std::endl;

    cv::Mat image = cv::imread(image_filename, CV_LOAD_IMAGE_GRAYSCALE);   // Read the file

    cv::Mat viz(image.rows, image.cols, CV_8UC3, cv::Scalar(0, 0, 0));
    for(int y = 0; y < image.rows; ++y)
    {
        for(int x = 0; x < image.cols; ++x)
        {
            unsigned char v = image.at<unsigned char>(y, x);
            viz.at<cv::Vec3b>(y, x) = cv::Vec3b(v, v, v);
        }
    }

    if (image.data)
    {
        std::cout << "Successfully loaded" << std::endl;

        cv::Mat vertex_index_map(image.rows, image.cols, CV_32SC1, -1);

        int dx[4] = {1,  0, -1,  0 };
        int dy[4] = {0,  1,  0, -1 };

        for(int y = 0; y < image.rows; ++y)
        {
            for(int x = 0; x < image.cols; ++x)
            {
                unsigned char v = image.at<unsigned char>(y, x);

                if (v == 0)
                {
                    int d_current = 0;
                    int x2 = x;
                    int y2 = y;

                    std::vector<int> xs;
                    std::vector<int> ys;

                    xs.push_back(x);
                    ys.push_back(y);

                    int n_uninterrupted = 0;
                    int segment_length = 0;
                    int x_uninterrupted = x;
                    int y_uninterrupted = y;

                    while (true)
                    {
                        bool found = false;
                        int d = (d_current + 3) % 4; // check going left first

                        for(int i = 0; i < 4; ++i)
                        {
                            if (image.at<unsigned char>(y2 + dy[d], x2 + dx[d]) == 0)
                            {
                                found = true;
                                break;
                            }

                            d = (d + 1) % 4;
                        }

                        if (!found)
                            break;

                        if (d_current != d)
                        {
                            if (n_uninterrupted > 10)
                            {
                                if (x_uninterrupted != xs.back() && y_uninterrupted != ys.back())
                                {
                                    xs.push_back(x_uninterrupted);
                                    ys.push_back(y_uninterrupted);
                                }

                                xs.push_back(x2);
                                ys.push_back(y2);
                                segment_length = 0;
                            }
                            else if (segment_length > 10)
                            {
                                xs.push_back(x2);
                                ys.push_back(y2);
                                segment_length = 0;
                            }

                            x_uninterrupted = x2;
                            y_uninterrupted = y2;
                            n_uninterrupted = 0;
                        }
                        else
                        {
                            ++n_uninterrupted;
                        }

                        ++segment_length;

                        x2 = x2 + dx[d];
                        y2 = y2 + dy[d];

                        if (x2 == x && y2 == y)
                            break;

                        d_current = d;
                    }

                    for(unsigned int i = 0; i < xs.size(); ++i)
                    {
                        int k = (i + 1) % xs.size();
                        cv::line(viz, cv::Point(xs[i], ys[i]), cv::Point(xs[k], ys[k]), cv::Scalar(0, 0, 255));
                    }

                    std::cout << std::endl << "Total polygon size: " << xs.size() << std::endl;

                    int num_points = xs.size();

                    TPPLPoly poly;
                    poly.Init(num_points);

                    geo::Mesh mesh;

                    double min_z = 0;
                    double max_z = 0;

                    for(unsigned int i = 0; i < num_points; ++i)
                    {
                        poly[i].x = xs[i];
                        poly[i].y = ys[i];

                        // Convert to world coordinates
                        double wx = xs[i];
                        double wy = ys[i];

                        vertex_index_map.at<int>(ys[i], xs[i]) = i;

                        mesh.addPoint(geo::Vector3(wx, wy, min_z));
                        mesh.addPoint(geo::Vector3(wx, wy, max_z));
                    }

                    // Calculate side triangles
                    for(int i = 0; i < num_points; ++i)
                    {
                        int j = (i + 1) % num_points;
                        mesh.addTriangle(i * 2, j * 2, i * 2 + 1);
                        mesh.addTriangle(i * 2 + 1, j * 2, j * 2 + 1);
                    }

                    TPPLPartition pp;
                    std::list<TPPLPoly> testpolys, result;
                    testpolys.push_back(poly);

                    if (!pp.Triangulate_EC(&poly, &result))
                    {
                        std::cout << "Error" << std::endl;
                        return 1;
                    }

                    std::cout << "Number of triangles: " << result.size() << std::endl << std::endl;

                    for(std::list<TPPLPoly>::iterator it = result.begin(); it != result.end(); ++it)
                    {
                        TPPLPoly& cp = *it;

                        int i1 = vertex_index_map.at<int>(cp[0].y, cp[0].x) + 1;
                        int i2 = vertex_index_map.at<int>(cp[1].y, cp[1].x) + 1;
                        int i3 = vertex_index_map.at<int>(cp[2].y, cp[2].x) + 1;

                        mesh.addTriangle(i1, i2, i3);

                        // visualize
                        for(unsigned j = 0; j < cp.GetNumPoints(); ++j)
                        {
                            int k = (j + 1) % cp.GetNumPoints();
                            cv::line(viz, cv::Point(cp[j].x, cp[j].y), cv::Point(cp[k].x, cp[k].y), cv::Scalar(0, 0, 255));
                        }
                    }

                    cv::floodFill(image, cv::Point(x, y), 255);

                    geo::Shape shape;
                    shape.setMesh(mesh);
                    geo::serialization::toFile(shape, "shape.geo");
                }
            }
        }        

        cv::imshow("image", viz);
        cv::waitKey();
    }
    else
    {
        std::cout << "ed::models::getHeightMapShape() : ERROR loading heightmap at '" << image_filename << "'. Image constains invalid data." << std::endl;
    }
}
