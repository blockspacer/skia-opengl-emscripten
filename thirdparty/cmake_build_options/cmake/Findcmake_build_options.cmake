# cmake utils

#
# USAGE:
#  setup_cmake_build_options()
#
macro(setup_cmake_build_options)
  # build mode. separated from CMAKE_BUILD_TYPE to provide custom debug level
  # for example, you may want build optimized wasm with debug stack trace support
  # NOTE: measure performace on RELEASE builds!
  if(CMAKE_BUILD_TYPE MATCHES Release)
    set(RELEASE_BUILD TRUE)
    set(DEBUG_BUILD FALSE)
  elseif(NOT CMAKE_BUILD_TYPE MATCHES Debug)
    set(RELEASE_BUILD FALSE)
    set(DEBUG_BUILD TRUE)
  else()
    set(BUILD_TYPE_UNKNOWN TRUE)
    message(FATAL_ERROR "unknown build type, CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}")
  endif()
endmacro(setup_cmake_build_options)
