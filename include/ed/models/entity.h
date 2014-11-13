#ifndef new_entity_h_
#define new_entity_h_

#include <geolib/datatypes.h>
#include <tue/config/configuration.h>
#include <boost/make_shared.hpp>

namespace ed
{

namespace models
{

typedef std::string UUID;
typedef std::string TYPE;

class NewEntity;
typedef boost::shared_ptr<NewEntity> NewEntityPtr;
typedef boost::shared_ptr<const NewEntity> NewEntityConstPtr;

class NewEntity
{

public:
    NewEntity(const UUID& new_id = generateID(), const TYPE& new_type = "") : id(new_id), type(new_type), pose(geo::Pose3D::identity())

    {
        config.data = boost::make_shared<tue::config::Data>();
    }
    ~NewEntity() {}

    static UUID generateID()
    {
        static const char alphanum[] =
            "0123456789"
            "abcdef";

        UUID ID;
        for (int i = 0; i < 32; ++i) {
            int n = rand() / (RAND_MAX / (sizeof(alphanum) - 1) + 1);
            ID += alphanum[n];
        }

        return ID;
    }

    UUID id;
    TYPE type;

    geo::ShapePtr shape;
    geo::Pose3D pose;

    tue::config::DataPointer config;

    std::vector<NewEntityPtr> children;

};

}

}

#endif
