#ifndef TUE_CONFIG_LOADERS_RESOLVE_FUNCTIONS_H_
#define TUE_CONFIG_LOADERS_RESOLVE_FUNCTIONS_H_

#include <string>
#include <sstream>

namespace tue
{

namespace config
{

bool resolve(const std::string& str, const std::string& source, std::string& result, std::stringstream& error);

}

}

#endif
