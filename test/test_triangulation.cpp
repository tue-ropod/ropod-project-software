#include "polypartition/src/polypartition.h"

#include <opencv2/highgui/highgui.hpp>

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

        int dx[4] = {1,  0, -1,  0 };
        int dy[4] = {0,  1,  0, -1 };

        for(int y = 0; y < image.rows; ++y)
        {
            for(int x = 0; x < image.cols; ++x)
            {
                unsigned char v = image.at<unsigned char>(y, x);

                viz.at<cv::Vec3b>(y, x) = cv::Vec3b(v, v, v);

                if (v == 0)
                {
                    int d_current = 0;
                    int x2 = x;
                    int y2 = y;

                    std::vector<int> xs;
                    std::vector<int> ys;

                    xs.push_back(x);
                    ys.push_back(y);

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
                            xs.push_back(x2);
                            ys.push_back(y2);
                        }

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

                    cv::imshow("image", viz);
                    cv::waitKey();

                    TPPLPoly poly;
                    poly.Init(xs.size());

                    for(unsigned int i = 0; i < xs.size(); ++i)
                    {
                        poly[i].x = xs[i];
                        poly[i].y = ys[i];
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
                        TPPLPoly& convex_poly = *it;
                        for(unsigned j = 0; j < convex_poly.GetNumPoints(); ++j)
                        {
                            int k = (j + 1) % convex_poly.GetNumPoints();
                            cv::line(viz, cv::Point(convex_poly[j].x, convex_poly[j].y), cv::Point(convex_poly[k].x, convex_poly[k].y), cv::Scalar(0, 0, 255));
                        }
                    }

                    cv::imshow("image", viz);
                    cv::waitKey();
                    return 0;
                }
            }
        }
    }
    else
    {
        std::cout << "ed::models::getHeightMapShape() : ERROR loading heightmap at '" << image_filename << "'. Image constains invalid data." << std::endl;
    }
}
