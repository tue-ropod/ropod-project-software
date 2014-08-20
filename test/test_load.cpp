#include <ed/models/loader.h>

int main(int argc, char **argv) {

    ed::models::Loader loader;
    geo::ShapePtr shape = loader.loadShape("rwc2014.walls");

    if (!shape)
    {
        std::cout << "Model could not be loaded." << std::endl;
    }

    return 0;
}
