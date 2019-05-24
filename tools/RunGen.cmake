#
# portable build script based on "cmake -P"
#
# example (Debug build without run)
# cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildWeb.cmake
#
# example (full Release rebuild & run, -j9 for 9 threads):
# cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;9" -DBUILD_TYPE="Release" -DCLEAN_BUILD=ON  -P tools/buildWeb.cmake
#
# example (run only):
# cmake -DCHROMIUM_SRC_DIR=chromium/src -DBUILD_APP=OFF -P tools/buildWeb.cmake
#
# You can also pass own options like:
# ... -DEXTRA_EMCMAKE_OPTS="-DOPTIMIZE_LEVEL=-O0;-DDEBUG_LEVEL=-g4" ...
#
# run that file with cmake -DVAR=VALUE -DFOO=BAR -P <script-file> <arg5> <arg6> ...

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)

set(CHROMIUM_SRC_DIR "" CACHE STRING "that dir must contain CHROMIUM sources")

if (NOT CHROMIUM_SRC_DIR)
  message(FATAL_ERROR "you must set CHROMIUM_SRC_DIR. current CHROMIUM_SRC_DIR=${CHROMIUM_SRC_DIR}...")
else()
  message(INFO "running gen from CHROMIUM_SRC_DIR=${CHROMIUM_SRC_DIR}...")
endif()
