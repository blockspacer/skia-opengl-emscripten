#
# portable build script based on "cmake -P"
#
# requirements: CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0"
#
# example (Debug build without run)
# cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildUnix.cmake
#
# example (Debug build with run)
# cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -DENABLE_CMAKE_CLEAN_FIRST=ON -P tools/buildUnix.cmake
#
# example (full Release rebuild & run, -j9 for 9 threads):
# cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_MAKE_OPTS="-j;9" -DBUILD_TYPE="Release" -DCLEAN_BUILD=ON -P tools/buildUnix.cmake
#
# example (clean & custom build dir, note full path and ending "/"):
# cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Release" -DCLEAN_BUILD=ON -DENABLE_CMAKE_CLEAN_FIRST=ON -DBUILD_DIR=$(pwd)/build-linux-rel/ -P tools/buildUnix.cmake
#
# example (run only):
# cmake -DRUN_APP=ON -P tools/buildUnix.cmake
#
# You can also pass own options like:
# ... -DEXTRA_CMAKE_OPTS="-DOPTIMIZE_LEVEL=-O0;-DDEBUG_LEVEL=-g4" ...
#
# run that file with cmake -DVAR=VALUE -DFOO=BAR -P <script-file> <arg5> <arg6> ...

cmake_minimum_required(VERSION 3.5)

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)
include(${CURRENT_SCRIPT_DIR}/commonBuildMacros.cmake)
# set BUILD_TYPE, CLEAN_BUILD, e.t.c.
include(${CURRENT_SCRIPT_DIR}/commonBuildVars.cmake)
include(${CURRENT_SCRIPT_DIR}/unixBuildVars.cmake)

if(EXTRA_EMCMAKE_OPTS)
  message(FATAL_ERROR "Use EXTRA_CMAKE_OPTS, not EXTRA_EMCMAKE_OPTS in web builds")
endif(EXTRA_EMCMAKE_OPTS)

# --- vars ---
set(BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build-linux/" CACHE STRING "output directory")

set(C_COMPILER "/usr/bin/clang-6.0" CACHE STRING "C COMPILER, must be full path to clang > 4")

set(CXX_COMPILER "/usr/bin/clang++-6.0" CACHE STRING "C++ COMPILER, must be full path to clang > 4")

if (BUILD_APP)
  message(STATUS "building for Unix from ${CMAKE_CURRENT_SOURCE_DIR} into ${BUILD_DIR} ...")

  # --- set CMAKE_OPTS, MAKE_OPTS, e.t.c. ---
  common_build_vars_step()

  # --- prepare build dirs ---
  mkdir_with_rm_condition(${CLEAN_BUILD} ${BUILD_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

  # --- some info before build ---
  colored_notify("Building with CMAKE_OPTS=${CMAKE_OPTS} and EXTRA_CMAKE_OPTS=${EXTRA_CMAKE_OPTS}")
  colored_notify("Building with MAKE_OPTS=${MAKE_OPTS} and EXTRA_MAKE_OPTS=${EXTRA_MAKE_OPTS}")

  set(CMAKE_OPTS "${CMAKE_OPTS};-DCMAKE_C_COMPILER=${C_COMPILER}")
  set(CMAKE_OPTS "${CMAKE_OPTS};-DCMAKE_CXX_COMPILER=${CXX_COMPILER}")

  # --- configure ---
  # TODO: "-DCMAKE_TOOLCHAIN_FILE=conan_paths.cmake"
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "cmake" ".." "-DCMAKE_EXPORT_COMPILE_COMMANDS=ON" ${CMAKE_OPTS} ${EXTRA_CMAKE_OPTS}
    WORKING_DIRECTORY ${BUILD_DIR}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()

  # --- build ---
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "cmake" "--build" "." ${CMAKE_BUILD_TARGET} ${CMAKE_CLEAN_FIRST} "--" ${MAKE_OPTS} ${EXTRA_MAKE_OPTS}
    WORKING_DIRECTORY ${BUILD_DIR}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
endif(BUILD_APP)

# --- run ---
if(RUN_APP)
  # checks BUILD_DIR
  if (NOT EXISTS ${BUILD_DIR})
    colored_fatal("invalid app directory ${BUILD_DIR}" --red --bold)
  endif(NOT EXISTS ${BUILD_DIR})
  message(STATUS "starting app from ${BUILD_DIR} ...")
  execute_process(
    COMMAND "${BUILD_DIR}/skemgl"
    WORKING_DIRECTORY ${BUILD_DIR}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( WARNING "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
endif(RUN_APP)
