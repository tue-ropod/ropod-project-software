#include "image_crawler.h"

#include <tue/filesystem/crawler.h>
#include <ed/update_request.h>
#include <ed/kinect/updater.h>

// ----------------------------------------------------------------------------------------------------

ImageCrawler::ImageCrawler()
{
}

// ----------------------------------------------------------------------------------------------------

ImageCrawler::~ImageCrawler()
{
}

// ----------------------------------------------------------------------------------------------------

bool ImageCrawler::setPath(const std::string& path_str)
{
    tue::filesystem::Path path(path_str);
    if (!path.exists())
    {
        std::cerr << "Path '" << path << "' does not exist." << std::endl;
        return false;
    }

    filenames_.clear();
    i_current_ = -1;

    tue::filesystem::Crawler crawler;

    if (!path.isDirectory())
    {
        filenames_.push_back(path_str);
        return true;
    }

    crawler.setRootPath(path);

    tue::filesystem::Path filename;
    while (crawler.nextPath(filename))
    {
        if (filename.extension() == ".json")
            filenames_.push_back(filename.string());
    }
}

// ----------------------------------------------------------------------------------------------------

bool ImageCrawler::previous(AnnotatedImage& image, bool do_segment)
{
    if (filenames_.empty())
        return false;

    if (i_current_ <= 0)
        return false;

    --i_current_;
    return reload(image, do_segment);
}

// ----------------------------------------------------------------------------------------------------

bool ImageCrawler::next(AnnotatedImage& image, bool do_segment)
{
    if (filenames_.empty())
        return false;

    if (i_current_ + 1 == filenames_.size())
        return false;

    ++i_current_;
    return reload(image, do_segment);
}

// ----------------------------------------------------------------------------------------------------

bool ImageCrawler::reload(AnnotatedImage& image, bool do_segment)
{
    if (i_current_ < 0)
        return false;

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Read image + meta-data

    fromFile(filenames_[i_current_], image);

    if (!do_segment)
        return true;

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Segment

    ed::UpdateRequest update_req;
    UpdateResult res(update_req);

    Updater updater;
    updater.update(image.world_model, image.image, image.sensor_pose, image.area_description, res);

    image.world_model.update(update_req);

    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Add entities

    for(ed::WorldModel::const_iterator it = image.world_model.begin(); it != image.world_model.end(); ++it)
    {
        const ed::EntityConstPtr& e = *it;
        image.entities.push_back(e);
    }

//    entity_updates_ = res.entity_updates;

    return true;
}

// ----------------------------------------------------------------------------------------------------
