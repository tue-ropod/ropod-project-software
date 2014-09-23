#include "ed/models/models.h"

#include <tue/filesystem/path.h>
#include <ros/package.h>

#include "shape_loader.h"

namespace ed
{

namespace models
{

NewEntityPtr load(const UUID& id)
{
    NewEntityPtr e;

    tue::filesystem::Path cfg_path(ros::package::getPath("ed_object_models") + "/instances/" + id + "/instance.yaml");

    if (cfg_path.exists())
    {
        tue::Configuration cfg;

        if (cfg.loadFromYAMLFile(cfg_path.string()))
        {
            TYPE type;
            if (cfg.value("type", type))
                e = create(type, cfg, id);
            else
                e = NewEntityPtr(new NewEntity(id));

            if (cfg.readArray("composition"))
            {
                while (cfg.nextArrayItem())
                {
                    std::string id, type;
                    if (cfg.value("type", type))
                        if (cfg.value("id", id))
                            e->children.push_back(create(type, cfg.limitScope(), id));
                        else
                            e->children.push_back(create(type, cfg.limitScope()));
                    else if (cfg.value("id", id))
                        e->children.push_back(load(id));
                }

                cfg.endArray();
            }
            else
            {
                std::cout << "ed::models::load() : ERROR loading instance '" << id << "'; '" << cfg_path.string() << "' no type or composition specified." << std::endl;
            }
        }
        else
        {
            std::cout << "ed::models::load() : ERROR loading instance '" << id << "'; '" << cfg_path.string() << "' failed to parse yaml file." << std::endl;
        }
    }
    else
    {
        std::cout << "ed::models::load() : ERROR loading instance '" << id << "'; '" << cfg_path.string() << "' does not exist." << std::endl;
    }

    return e;
}

NewEntityPtr create(const TYPE& type, tue::Configuration cfg, const UUID& id)
{    
    NewEntityPtr e;

    tue::filesystem::Path model_path(ros::package::getPath("ed_object_models") + "/models/" + type);

    if (model_path.exists())
    {        
        tue::filesystem::Path cfg_path(model_path.string() + "/model.yaml");

        if (cfg_path.exists()) //! TODO: Look again at this, verify that model inheritance works!
        {
            tue::Configuration model_cfg;
            if (model_cfg.loadFromYAMLFile(cfg_path.string()))
            {
                std::string parent_type;
                if (model_cfg.value("type", parent_type, tue::OPTIONAL))
                    e = create(parent_type, model_cfg, id);
                else
                    e = NewEntityPtr(new NewEntity(id, type));

                if (model_cfg.readGroup("shape"))
                {
                    geo::ShapePtr shape = loadShape(type, model_cfg.limitScope());
                    if (shape)
                        e->shape = shape;

                    model_cfg.endGroup();
                }

                if (model_cfg.add(cfg))
                    e->config = model_cfg;
                else
                    std::cout << "ed::models::create() : ERROR failed to setup configuration for model '" << type << std::endl;

                // Now that we have the combined configs, setup the pose and shape
                if (e->config.readGroup("pose"))
                {
                    if (!e->config.value("x", e->pose.t.x) || !e->config.value("y", e->pose.t.y) || !e->config.value("z", e->pose.t.z))
                        std::cout << "ed::models::create() : ERROR loading pose; pose is malformed." << std::cout;

                    e->config.endGroup();
                }
            }
            else
            {
                std::cout << "ed::models::create() : ERROR loading configuration for model '" << type << "'; '" << cfg_path.string() << "' failed to parse yaml file." << std::endl;
            }
        }
        else
        {
            std::cout << "ed::models::create() : ERROR loading configuration for model '" << type << "'; '" << cfg_path.string() << "' file does not exist." << std::endl;
        }
    }
    else
    {
        std::cout << "ed::models::create() : ERROR loading model '" << type << "'; '" << model_path.string() << "' does not exist." << std::endl;
    }

    return e;
}

}

}
