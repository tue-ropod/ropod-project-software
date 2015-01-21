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

    if (image.data)
    {
        std::cout << "Successfully loaded" << std::endl;

        int dx[8] = {1, 1, 0, -1, -1, -1,  0,  1 };
        int dy[8] = {0, 1, 1,  1,  0, -1, -1, -1 };

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

                    while (true)
                    {
                        bool found = false;
                        int d = (d_current + 6) % 8; // check going left first

                        for(int i = 0; i < 8; ++i)
                        {
                            if (image.at<unsigned char>(y2 + dy[d], x2 + dx[d]) == 0)
                            {
                                found = true;
                                break;
                            }

                            d = (d + 1) % 8;
                        }

                        if (!found)
                            break;

                        if (d_current != d)
                        {
                            xs.push_back(x2);
                            ys.push_back(y2);
                            image.at<unsigned char>(y2, x2) = 128;

                        }

                        x2 = x2 + dx[d];
                        y2 = y2 + dy[d];

                        if (x2 == x && y2 == y)
                            break;

                        d_current = d;

//                        std::cout << x2 << ", " << y2 << std::endl;

//                        image.at<unsigned char>(y2, x2) = 128;
                    }

                    cv::imshow("image", image);
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

                    if (!pp.Triangulate_EC(&testpolys, &result))
                    {
                        std::cout << "Error" << std::endl;
                        return 1;
                    }

                    std::cout << "Number of triangles: " << result.size() << std::endl << std::endl;

                    int i = 0;
                    for(std::list<TPPLPoly>::iterator it = result.begin(); it != result.end(); ++it)
                    {
                        std::cout << "Triangle " << i << std::endl;
                        TPPLPoly& triangle = *it;

                        cv::line(image, cv::Point(triangle[0].x, triangle[0].y), cv::Point(triangle[1].x, triangle[1].y), 128);
                        cv::line(image, cv::Point(triangle[1].x, triangle[1].y), cv::Point(triangle[2].x, triangle[2].y), 128);
                        cv::line(image, cv::Point(triangle[2].x, triangle[2].y), cv::Point(triangle[0].x, triangle[0].y), 128);

                        for(unsigned int j = 0; j < triangle.GetNumPoints(); ++j)
                        {
                            std::cout << "    " << triangle[j].x << ", " << triangle[j].y << std::endl;
                        }

                        std::cout << std::endl;

                        ++i;
                    }

                    cv::imshow("image", image);
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
