#include "tue/config/reader.h"
#include "tue/config/node.h"
#include "tue/config/data.h"

namespace tue
{
namespace config
{

// ----------------------------------------------------------------------------------------------------

Reader::Reader(const DataConstPointer& ptr) : idx_(ptr.idx), cfg_(ptr.data)
{
}

// ----------------------------------------------------------------------------------------------------

Reader::~Reader()
{
}

// ----------------------------------------------------------------------------------------------------

bool Reader::read(const std::string& name)
{
    Label label;
    if (cfg_->getLabel(name, label) && cfg_->nodes[idx_]->readGroup(label, idx_))
        return true;
    return false;
}

// ----------------------------------------------------------------------------------------------------

bool Reader::end()
{   
    NodeIdx parent = cfg_->getParent(idx_);
    if (parent == -1)
        return false;

    idx_ = parent;

    // If the parent is an array, go up one more
    if (cfg_->nodes[idx_]->type() == ARRAY)
        idx_ = cfg_->getParent(idx_);

    return true;
}

// ----------------------------------------------------------------------------------------------------

bool Reader::next()
{
    if (cfg_->nodes[idx_]->type() == ARRAY)
        return cfg_->nodes[idx_]->firstChild(idx_);

    NodeIdx right_sibling = cfg_->getRightSibling(idx_);
    if (right_sibling == -1)
        return false;

    idx_ = right_sibling;
    return true;
}

} // end namespace config

} // end namespace tue

