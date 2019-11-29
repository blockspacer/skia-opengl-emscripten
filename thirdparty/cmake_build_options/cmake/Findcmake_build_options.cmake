# cmake utils

#
# USAGE:
#  setup_cmake_build_options(DEBUG RELEASE)
#
macro(setup_cmake_build_options)
  # user-provided: supported build types
  set(options RELEASE DEBUG PROFILE RELWITHDEBINFO COVERAGE DOCS TEST CHECK)
  cmake_parse_arguments(ARGUMENTS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  # guard against bad build-type strings
  if(NOT CMAKE_BUILD_TYPE)
    message(WARNING "No build type selected, default to Debug")
    set(CMAKE_BUILD_TYPE "Debug")
  endif()

  string(TOLOWER "${CMAKE_BUILD_TYPE}" cmake_build_type_tolower)

  # build mode. separated from CMAKE_BUILD_TYPE to provide custom debug level
  # for example, you may want build optimized wasm with debug stack trace support
  # NOTE: measure performace on RELEASE builds!
  set(UNKNOWN_BUILD FALSE)
  set(RELEASE_BUILD FALSE)
  set(DEBUG_BUILD FALSE)
  set(PROFILE_BUILD FALSE)
  set(RELWITHDEBINFO_BUILD FALSE)
  set(COVERAGE_BUILD FALSE)
  set(DOCS_BUILD FALSE)
  set(TEST_BUILD FALSE)
  if(ARGUMENTS_RELEASE AND cmake_build_type_tolower STREQUAL "release")
    set(RELEASE_BUILD TRUE)
  elseif(ARGUMENTS_DEBUG AND cmake_build_type_tolower STREQUAL "debug")
    set(DEBUG_BUILD TRUE)
  elseif(ARGUMENTS_PROFILE AND cmake_build_type_tolower STREQUAL "profile")
    set(PROFILE_BUILD TRUE)
  elseif(ARGUMENTS_RELWITHDEBINFO AND cmake_build_type_tolower STREQUAL "relwithdebinfo")
    set(RELWITHDEBINFO_BUILD TRUE)
  elseif(ARGUMENTS_COVERAGE AND cmake_build_type_tolower STREQUAL "coverage")
    set(COVERAGE_BUILD TRUE)
  elseif(ARGUMENTS_DOCS AND cmake_build_type_tolower STREQUAL "docs")
    set(DOCS_BUILD TRUE)
  elseif(ARGUMENTS_TEST AND cmake_build_type_tolower STREQUAL "test")
    set(TEST_BUILD TRUE)
  elseif(ARGUMENTS_CHECK AND cmake_build_type_tolower STREQUAL "check")
    set(CHECK_BUILD TRUE)
  else()
    set(UNKNOWN_BUILD TRUE)
    message(FATAL_ERROR "unknown build type, CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE} ; (lower=${cmake_build_type_tolower})")
  endif()
endmacro(setup_cmake_build_options)
