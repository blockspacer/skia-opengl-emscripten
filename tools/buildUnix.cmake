#
# portable build script based on "cmake -P"
#
# requirements: CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0"
#
# example (Debug build without run)
# cmake -P tools/buildUnix.cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF
#
# example (full Release rebuild & run, -j9 for 9 threads):
# cmake -P tools/buildUnix.cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_MAKE_OPTS="-j;9" -DBUILD_TYPE="Release" -DCLEAN_BUILD=ON
#
# example (run only):
# cmake -P tools/buildUnix.cmake -DRUN_APP=ON
#
# run that file with cmake -DVAR=VALUE -DFOO=BAR -P <script-file> <arg5> <arg6> ...

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)
# set BUILD_TYPE, CLEAN_BUILD, e.t.c.
include(${CURRENT_SCRIPT_DIR}/commonBuildVars.cmake)
include(${CURRENT_SCRIPT_DIR}/commonBuildVarsUnix.cmake)
include(${CURRENT_SCRIPT_DIR}/commonBuildMacros.cmake)

set(BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build-linux/" CACHE STRING "output directory")

set(C_COMPILER "/usr/bin/clang-6.0" CACHE STRING "C COMPILER, must be full path to clang > 4")

set(CXX_COMPILER "/usr/bin/clang++-6.0" CACHE STRING "C++ COMPILER, must be full path to clang > 4")

if (BUILD_APP)
  message("building for Unix from ${CMAKE_CURRENT_SOURCE_DIR} into ${BUILD_DIR}...")

  # --- set CMAKE_OPTS, MAKE_OPTS, e.t.c. ---
  build_vars_step()

  # --- prepare build dirs ---
  build_dir_step(${BUILD_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

  # --- some info before build ---
  colored_notify("Building with CMAKE_OPTS=${CMAKE_OPTS} and EXTRA_CMAKE_OPTS=${EXTRA_CMAKE_OPTS}")
  colored_notify("Building with MAKE_OPTS=${MAKE_OPTS} and EXTRA_MAKE_OPTS=${EXTRA_MAKE_OPTS}")

  set(CMAKE_OPTS "${CMAKE_OPTS};-DCMAKE_C_COMPILER=${C_COMPILER}")
  set(CMAKE_OPTS "${CMAKE_OPTS};-DCMAKE_CXX_COMPILER=${CXX_COMPILER}")

  # --- configure ---
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "cmake" ".." ${CMAKE_OPTS} ${EXTRA_CMAKE_OPTS}
    WORKING_DIRECTORY ${BUILD_DIR}
  )

  # --- build ---
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "--build" "." "--clean-first" "--" ${MAKE_OPTS} ${EXTRA_MAKE_OPTS}
    WORKING_DIRECTORY ${BUILD_DIR}
  )
endif(BUILD_APP)

# --- run ---
if(RUN_APP)
  # checks BUILD_DIR
  if (NOT EXISTS ${BUILD_DIR})
    colored_fatal("invalid app directory ${BUILD_DIR}" --red --bold)
  endif(NOT EXISTS ${BUILD_DIR})
  message("starting app from ${BUILD_DIR}...")
  execute_process(
    COMMAND "${BUILD_DIR}/skemgl"
    WORKING_DIRECTORY ${BUILD_DIR}
  )
endif(RUN_APP)
