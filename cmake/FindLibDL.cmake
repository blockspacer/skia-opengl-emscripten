#.rst:
# FindLibDl
# --------
#
# Find the native realtime includes and library.
#
# IMPORTED Targets
# ^^^^^^^^^^^^^^^^
#
# This module defines :prop_tgt:`IMPORTED` target ``LIBDL::LIBDL``, if
# LIBDL has been found.
#
# Result Variables
# ^^^^^^^^^^^^^^^^
#
# This module defines the following variables:
#
# ::
#
#   LIBDL_INCLUDE_DIRS  - where to find dlfcn.h, etc.
#   LIBDL_LIBRARIES     - List of libraries when using libdl.
#   LIBDL_FOUND         - True if dynamic linking library found.
#
# Hints
# ^^^^^
#
# A user may set ``LIBDL_ROOT`` to a library installation root to tell this
# module where to look.

find_path(LIBDL_INCLUDE_DIRS
  NAMES dlfcn.h
  PATHS ${LIBDL_ROOT}/include/
)

find_library(LIBDL_LIBRARIES
  NAMES dl
)

include(FindPackageHandleStandardArgs)

find_package_handle_standard_args(LibDl DEFAULT_MSG
  LIBDL_LIBRARIES
  LIBDL_INCLUDE_DIRS
)

SET(CMAKE_REQUIRED_LIBRARIES dl)
INCLUDE(CheckCSourceRuns)
CHECK_C_SOURCE_RUNS("#include <dlfcn.h>
#include <stdlib.h>
void testfunc() {}
int main() {
  testfunc();
  if (dlsym(0, \"_testfunc\") != (void*)0) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}" LIBDL_NEEDS_UNDERSCORE)

mark_as_advanced(LIBDL_INCLUDE_DIRS LIBDL_LIBRARIES LIBDL_NEEDS_UNDERSCORE)

if(LIBDL_FOUND)
    if(NOT TARGET LIBDL::LIBDL)
      add_library(LIBDL::LIBDL UNKNOWN IMPORTED)
      set_target_properties(LIBDL::LIBDL PROPERTIES
        IMPORTED_LOCATION "${LIBDL_LIBRARIES}"
        INTERFACE_INCLUDE_DIRECTORIES "${LIBDL_INCLUDE_DIRS}")
    endif()
endif()
