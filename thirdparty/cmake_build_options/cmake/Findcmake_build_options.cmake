# cmake utils

#
# USAGE:
#  setup_default_build_type(RELEASE)
#
macro(setup_default_build_type)
  # user-provided: supported build types
  set(options RELEASE DEBUG PROFILE MINSIZEREL RELWITHDEBINFO COVERAGE DOCS TEST CHECK)
  cmake_parse_arguments(ARGUMENTS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    # Set the possible values of build type for cmake-gui
    set_property(CACHE CMAKE_BUILD_TYPE
        PROPERTY STRINGS
        "Debug"
        "Release"
        "MinSizeRel"
        "RelWithDebInfo"
        "Profile"
        "Coverage"
        "Docs"
        "Test"
        "Check")
  endif(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)

  if(ARGUMENTS_RELEASE)
    set(build_type "Release")
  elseif(ARGUMENTS_DEBUG)
    set(build_type "Debug")
  elseif(ARGUMENTS_PROFILE)
    set(build_type "Profile")
  elseif(ARGUMENTS_MINSIZEREL)
    set(build_type "MinSizeRel")
  elseif(ARGUMENTS_RELWITHDEBINFO)
    set(build_type "RelWithDebInfo")
  elseif(ARGUMENTS_COVERAGE)
    set(build_type "Coverage")
  elseif(ARGUMENTS_DOCS)
    set(build_type "Docs")
  elseif(ARGUMENTS_TEST)
    set(build_type "Test")
  elseif(ARGUMENTS_CHECK)
    set(build_type "Check")
  else()
    message(FATAL_ERROR "(setup_default_build_type)
      unknown build type")
  endif()

  if(CMAKE_BUILD_TYPE)
    message(WARNING "(setup_default_build_type)
      changed build type from CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
      to ${build_type}")
  endif(CMAKE_BUILD_TYPE)

  set(CMAKE_BUILD_TYPE
      "${build_type}"
      CACHE STRING "Choose the type of build." FORCE)
endmacro(setup_default_build_type)

#
# Sets helpful cmake vars based on current CMAKE_BUILD_TYPE
# Validates CMAKE_BUILD_TYPE based on provided arguments
#
# USAGE:
#  setup_cmake_build_options(DEBUG RELEASE)
#
macro(setup_cmake_build_options)
  # user-provided: supported build types
  set(options RELEASE DEBUG PROFILE MINSIZEREL RELWITHDEBINFO COVERAGE DOCS TEST CHECK)
  cmake_parse_arguments(ARGUMENTS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  # guard against bad build-type strings
  if(NOT CMAKE_BUILD_TYPE)
    message(FATAL_ERROR "(setup_cmake_build_options)
      No build type selected, use setup_default_build_type")
  endif()

  string(TOLOWER "${CMAKE_BUILD_TYPE}" cmake_build_type_tolower)

  # build mode. separated from CMAKE_BUILD_TYPE to provide custom debug level
  # for example, you may want build optimized wasm with debug stack trace support
  # NOTE: measure performace on RELEASE builds!
  set(UNKNOWN_BUILD FALSE)
  set(RELEASE_BUILD FALSE)
  set(DEBUG_BUILD FALSE)
  set(PROFILE_BUILD FALSE)
  set(MINSIZEREL_BUILD FALSE)
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
  elseif(ARGUMENTS_MINSIZEREL AND cmake_build_type_tolower STREQUAL "minsizerel")
    set(MINSIZEREL_BUILD TRUE)
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
    message(FATAL_ERROR "(setup_cmake_build_options)
      unknown build type, CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
      ; (lower=${cmake_build_type_tolower})")
  endif()
endmacro(setup_cmake_build_options)
