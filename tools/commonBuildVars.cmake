cmake_minimum_required(VERSION 3.5)

# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})

include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)

# NOTE: modified by build scripts
set(CMAKE_OPTS "")

# NOTE: modified by build scripts
set(MAKE_OPTS "")

option(CLEAN_BUILD "remove old build dir" ON)

option(RUN_APP "run resulting app" OFF)

option(BUILD_APP "build app (you can also run it)" ON)

set(BUILD_TYPE "Debug" CACHE STRING "Debug, RelWithDebInfo or Release")

# DEBINFO = lower performance, better stacktrace
set(HAVE_DEBINFO FALSE)

macro(common_build_vars_step)
  # TOUPPER for ignore-case checks
  STRING(TOUPPER "${BUILD_TYPE}" BUILD_TYPE_UPPER)
  if (BUILD_TYPE_UPPER MATCHES "DEBUG")
    colored_notify("detected DEBUG build, use RELEASE in production" --yellow --bold)
    set(HAVE_DEBINFO TRUE)
    set(TO_CMAKE_BUILD_TYPE "Debug")
  elseif (BUILD_TYPE_UPPER MATCHES "RELWITHDEBINFO")
    colored_notify("detected RELWITHDEBINFO build, use RELEASE in production" --yellow --bold)
    set(HAVE_DEBINFO TRUE)
    set(TO_CMAKE_BUILD_TYPE "RelWithDebInfo")
  elseif (BUILD_TYPE_UPPER MATCHES "RELEASE")
    colored_notify("detected RELEASE build, use it in production" --green --bold)
    set(TO_CMAKE_BUILD_TYPE "Release")
    set(HAVE_DEBINFO FALSE)
  else()
    colored_fatal("invalid BUILD_TYPE ${BUILD_TYPE}" --red --bold)
  endif()

  if(HAVE_DEBINFO)
    set(CMAKE_OPTS "${CMAKE_OPTS};-DRELEASE_BUILD=OFF")
    colored_notify("DEBINFO ENABLED, disable it in production" --yellow --bold)
  else(HAVE_DEBINFO)
    set(CMAKE_OPTS "${CMAKE_OPTS};-DRELEASE_BUILD=ON")
    colored_print("DEBINFO DISABLED")
  endif(HAVE_DEBINFO)

  set(CMAKE_OPTS "${CMAKE_OPTS};-DCMAKE_BUILD_TYPE=${TO_CMAKE_BUILD_TYPE}")

  set(CMAKE_OPTS "${CMAKE_OPTS};-DCMAKE_EXPORT_COMPILE_COMMANDS=ON")
endmacro(common_build_vars_step)
