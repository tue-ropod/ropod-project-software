# - Try to find czmq
# Once done, this will define
#
#  CZMQ_FOUND - system has czmq
#  CZMQ_INCLUDE_DIRS - the czmq include directories
#  CZMQ_LIBRARIES - link these to use czmq

if (NOT MSVC)
    include(FindPkgConfig)
    pkg_check_modules(PC_CZMQ "libczmq")
    if (NOT PC_CZMQ_FOUND)
        pkg_check_modules(PC_CZMQ "libczmq")
    endif (NOT PC_CZMQ_FOUND)
    if (PC_CZMQ_FOUND)
        # some libraries install the headers is a subdirectory of the include dir
        # returned by pkg-config, so use a wildcard match to improve chances of finding
        # headers and SOs.
        set(PC_CZMQ_INCLUDE_HINTS ${PC_CZMQ_INCLUDE_DIRS} ${PC_CZMQ_INCLUDE_DIRS}/*)
        set(PC_CZMQ_LIBRARY_HINTS ${PC_CZMQ_LIBRARY_DIRS} ${PC_CZMQ_LIBRARY_DIRS}/*)
    endif(PC_CZMQ_FOUND)
endif (NOT MSVC)

find_path (
    CZMQ_INCLUDE_DIRS
    NAMES czmq.h
    HINTS ${PC_CZMQ_INCLUDE_HINTS}
)

find_library (
    CZMQ_LIBRARIES
    NAMES czmq
    HINTS ${PC_CZMQ_LIBRARY_HINTS}
)

include(FindPackageHandleStandardArgs)

find_package_handle_standard_args(
    CZMQ
    REQUIRED_VARS CZMQ_LIBRARIES CZMQ_INCLUDE_DIRS
)

#message ("CZMQ Path: ${CZMQ_LIBRARIES}")

mark_as_advanced(
    CZMQ_FOUND
    CZMQ_LIBRARIES CZMQ_INCLUDE_DIRS
)
