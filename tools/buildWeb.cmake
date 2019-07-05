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
# cmake -DRUN_APP=ON -DBUILD_APP=OFF -P tools/buildWeb.cmake
#
# example (custom build dir, note full path and ending "/"):
# cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Release" -DCLEAN_BUILD=OFF -DENABLE_CMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=/home/username_here/skia-opengl-emscripten/build-wasm-st-rel/ -P tools/buildWeb.cmake
#
# You can also pass own options like:
# ... -DEXTRA_EMCMAKE_OPTS="-DOPTIMIZE_LEVEL=-O0;-DDEBUG_LEVEL=-g4" ...
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
include(${CURRENT_SCRIPT_DIR}/emscriptenBuildVars.cmake)

# --- vars ---
set(BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build-emscripten/" CACHE STRING "output directory")

if (BUILD_APP)
  message(STATUS "building for web from ${CMAKE_CURRENT_SOURCE_DIR} into ${BUILD_DIR} ...")

  # --- set CMAKE_OPTS, MAKE_OPTS, e.t.c. ---
  common_build_vars_step()

  # --- prepare build dirs ---
  mkdir_with_rm_condition(${CLEAN_BUILD} ${BUILD_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

  # --- some info before build ---
  colored_notify("Building with CMAKE_OPTS=${CMAKE_OPTS} and EXTRA_EMCMAKE_OPTS=${EXTRA_EMCMAKE_OPTS}")
  colored_notify("Building with MAKE_OPTS=${MAKE_OPTS} and EXTRA_EMMAKE_OPTS=${EXTRA_EMMAKE_OPTS}")

  # --- configure ---
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${EMSCRIPTEN_CMAKE} "cmake" ".." ${CMAKE_OPTS} ${EXTRA_EMCMAKE_OPTS}
    WORKING_DIRECTORY ${BUILD_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()

  # force file repackaging
  conditional_remove(TRUE ${BUILD_DIR}resources ${BUILD_DIR})
  conditional_remove(TRUE ${BUILD_DIR}skemgl.data ${BUILD_DIR})
  conditional_remove(TRUE ${BUILD_DIR}skemgl.js ${BUILD_DIR})
  conditional_remove(TRUE ${BUILD_DIR}skemgl.mem ${BUILD_DIR})

  # --- build ---
  execute_process(
    COMMAND
    ${COLORED_OUTPUT_ENABLER}
      ${EMSCRIPTEN_MAKE} "make" ${MAKE_OPTS} ${EXTRA_EMMAKE_OPTS}
    WORKING_DIRECTORY ${BUILD_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()

  #execute_process(
  #  COMMAND
  #  ${COLORED_OUTPUT_ENABLER}
  #    python "${EMSCRIPTEN_PACKAGER_SCRIPT}" "skemgl.data" "--preload" "${PACKAGER_DATA_DIR}" "--no-heap-copy" "--js-output=skemgl.js" ${COMPRESSION_LEVEL}
  #  WORKING_DIRECTORY ${BUILD_DIR}
  #  RESULT_VARIABLE retcode
  #  ERROR_VARIABLE _ERROR_VARIABLE
  #)
  #if(NOT "${retcode}" STREQUAL "0")
  #  message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  #endif()

  # --- check resulting files ---
  if (NOT EXISTS ${BUILD_DIR}/${WASM_FILE_PATH})
    colored_fatal("invalid BUILD_DIR/WASM_FILE_PATH=${BUILD_DIR}/${WASM_FILE_PATH}" --red --bold)
  endif(NOT EXISTS ${BUILD_DIR}/${WASM_FILE_PATH})

  # --- show resulting stats/metrics ---
  if(ENABLE_WASM_OPT)
    wasm_opt_metrics(${WASM_FILE_PATH} ${BUILD_DIR})
  endif(ENABLE_WASM_OPT)

  if(ENABLE_WASM_GZIP)
    colored_notify("running gzip=${GZIP} on ${WASM_FILE_PATH}..." --green --bold)
    execute_process(
      COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${GZIP} "--best" "--keep" "--force" "--suffix=.gz" "${WASM_FILE_PATH}"
      WORKING_DIRECTORY ${BUILD_DIR}
      RESULT_VARIABLE retcode
      ERROR_VARIABLE _ERROR_VARIABLE
    )
    if(NOT "${retcode}" STREQUAL "0")
      message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
    endif()
  endif(ENABLE_WASM_GZIP)

  if(ENABLE_WASM_BROTLI)
    colored_notify("running brotli=${BROTLI} on ${WASM_FILE_PATH}..." --green --bold)
    execute_process(
      COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${BROTLI} "--best" "--keep" "--force" "--lgwin=24" "--suffix=.br" "${WASM_FILE_PATH}"
      WORKING_DIRECTORY ${BUILD_DIR}
      RESULT_VARIABLE retcode
      ERROR_VARIABLE _ERROR_VARIABLE
    )
    if(NOT "${retcode}" STREQUAL "0")
      message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
    endif()
  endif(ENABLE_WASM_BROTLI)

endif(BUILD_APP)

# --- run ---
# see http://webassemblycode.com/using-browsers-debug-webassembly/
# source-map-base sets port number
# also see --no_browser
# see https://github.com/emscripten-core/emscripten/issues/6534
if(RUN_APP)
  # checks BUILD_DIR
  if (NOT EXISTS ${BUILD_DIR})
    colored_fatal("invalid app directory ${BUILD_DIR}" --red --bold)
  endif(NOT EXISTS ${BUILD_DIR})

  # --- show resulting stats/metrics ---
  if(ENABLE_WASM_OPT)
    wasm_opt_metrics(${WASM_FILE_PATH})
  endif(ENABLE_WASM_OPT)

  message(STATUS "starting app from ${BUILD_DIR} ...")
  execute_process(
    COMMAND "emrun" "--port" "9090" "--serve_root" "/" "."
    WORKING_DIRECTORY ${BUILD_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
endif(RUN_APP)
