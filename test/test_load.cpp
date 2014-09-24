#include "ed/models/models.h"

void printEntityWithChildren(ed::models::NewEntityConstPtr e, unsigned int depth = 0)
{
    depth+=1;
    std::string prefix = "";
    for (unsigned int i = 0; i < depth; ++i)
        prefix += "-";

    std::cout << prefix << " Entity ID: " << e->id << std::endl;
    std::cout << prefix << " Configuration: " << e->config << std::endl;
    for (std::vector<ed::models::NewEntityPtr>::const_iterator it = e->children.begin(); it != e->children.end(); ++it)
    {
        printEntityWithChildren(*it);
    }
}

int main(int argc, char **argv)
{
    ed::models::NewEntityConstPtr e = ed::models::create("robotics_testlab", tue::Configuration());

    if (!e)
    {
        std::cout << "Instance could not be loaded." << std::endl;
        return 1;
    }

    std::cout << "Loaded entity configuration:" << std::endl;

    printEntityWithChildren(e);

    return 0;
}
