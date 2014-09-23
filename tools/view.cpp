#include <ed/models/models.h>

#include <geolib/sensors/DepthCamera.h>
#include <geolib/Shape.h>

#include <opencv2/highgui/highgui.hpp>

double CANVAS_WIDTH = 640;
double CANVAS_HEIGHT = 480;

void getShapesWithPosesInEntityFrame(ed::models::NewEntityPtr e, std::map<geo::ShapePtr, geo::Pose3D>& shapes_with_poses, geo::Pose3D parent_pose = geo::Pose3D::identity())
{
    if (e->shape)
    {
        shapes_with_poses[e->shape] = parent_pose * e->pose;
    }
    for (std::vector<ed::models::NewEntityPtr>::const_iterator it = e->children.begin(); it != e->children.end(); ++it)
    {
        getShapesWithPosesInEntityFrame(*it, shapes_with_poses, e->pose);
    }
}

int main(int argc, char **argv) {

    if (argc != 2)
    {
        std::cout << "Please specify an instance name" << std::endl;
        return 1;
    }

    std::string model_name = argv[1];

    ed::models::NewEntityPtr e = ed::models::load(model_name);

    if (!e)
    {
        std::cout << "Model could not be loaded." << std::endl;
        return 1;
    }

    geo::DepthCamera cam;
    cam.setFocalLengths(554.2559327880068 * CANVAS_WIDTH / 640, 554.2559327880068 * CANVAS_HEIGHT / 480);
    cam.setOpticalCenter(320.5 * CANVAS_WIDTH / 640, 240.5 * CANVAS_HEIGHT / 480);
    cam.setOpticalTranslation(0, 0);

    double r = 10;

    double dist = r * 3;

    double angle = 0;

    while (true) {
        // * * * * * * DEPTH CAMERA * * * * * *

        cv::Mat depth_image = cv::Mat(CANVAS_HEIGHT, CANVAS_WIDTH, CV_32FC1, 0.0);

        std::map<geo::ShapePtr, geo::Pose3D> shapes_with_poses;
        getShapesWithPosesInEntityFrame(e, shapes_with_poses);
        std::cout << "Num shapes with poses: " << shapes_with_poses.size() << std::endl;
        for (std::map<geo::ShapePtr, geo::Pose3D>::const_iterator it = shapes_with_poses.begin(); it != shapes_with_poses.end(); ++it)
        {
            cam.rasterize(*it->first, geo::Pose3D(0, 0, 0, 1.57, 0, -1.57), it->second, depth_image);
        }

        for(int y = 0; y < depth_image.rows; ++y) {
            for(int x = 0; x < depth_image.cols; ++x) {
                float d = depth_image.at<float>(y, x);
                if (d > 0) {
                    depth_image.at<float>(y, x) = (d - dist + r) / (2 * r);
                }
            }
        }

        cv::imshow("visualization", depth_image);
        cv::waitKey(10);

        angle += 0.07;
    }

   return 0;}
