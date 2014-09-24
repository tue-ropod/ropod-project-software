#ifndef models_h_
#define models_h_

#include "entity.h"
#include <tue/config/configuration.h>

namespace ed
{

namespace models
{

NewEntityPtr create(const TYPE& type, tue::Configuration cfg = tue::Configuration(), const UUID& id = NewEntity::generateID());

}

}

#endif
