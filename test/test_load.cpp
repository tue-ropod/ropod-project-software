#include "ed/models/models.h"

int main(int argc, char **argv)
{
    ed::models::NewEntityConstPtr e = ed::models::load("robotics_testlab_B");

    if (!e)
    {
        std::cout << "Instance could not be loaded." << std::endl;
    }

    return 0;
}
