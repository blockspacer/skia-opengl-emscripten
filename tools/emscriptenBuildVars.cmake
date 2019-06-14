cmake_minimum_required(VERSION 3.5)

# see https://github.com/emscripten-core/emscripten/blob/master/tools/file_packager.py#L50
# TODO: "--lz4"
set(COMPRESSION_LEVEL "" CACHE STRING "compresses the data using LZ4. NOTE: you ALSO must build the main program with that flag")

# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_EMCMAKE_OPTS  "-DCOMPRESSION_LEVEL=${COMPRESSION_LEVEL}" CACHE STRING "emcmake arguments")

set(EXTRA_EMMAKE_OPTS  "-j" "6" CACHE STRING "emmake arguments")

set(PACKAGER_DATA_DIR "${CURRENT_SCRIPT_DIR}/../resources")

# NOTE: WASM_OPT can`t work with with WASM PTHREADS/ATOMICS
option(ENABLE_WASM_OPT OFF)
if(ENABLE_WASM_OPT)
  set(WASM_FILE_PATH "skemgl.wasm")
endif(ENABLE_WASM_OPT)

find_program_required(EMSCRIPTEN_CMAKE "emcmake" "emcmake not found, search for EMSCRIPTEN`s emsdk_env.sh")

find_program_required(EMSCRIPTEN_MAKE "emmake" "emmake not found, search for EMSCRIPTEN`s emsdk_env.sh")

if(ENABLE_WASM_OPT)
  find_program_required(EMSCRIPTEN_WASM_OPT "wasm-opt" "wasm-opt not found, add it in your path")
endif(ENABLE_WASM_OPT)

# If not found by above search, locate using the EMSCRIPTEN environment variable.
#if ("${EMSCRIPTEN_ROOT_PATH}" STREQUAL "")
#  set(EMSCRIPTEN_ROOT_PATH "$ENV{EMSCRIPTEN}")
#endif()
#if ("${EMSCRIPTEN_ROOT_PATH}" STREQUAL "")
#  set(EMSCRIPTEN_ROOT_PATH "$ENV{EMSCRIPTEN_ROOT}")
#endif()
#if ("${EMSCRIPTEN_ROOT_PATH}" STREQUAL "")
#  message( FATAL_ERROR "EMSCRIPTEN_ROOT_PATH not defined. EMSCRIPTEN_ROOT_PATH=${EMSCRIPTEN_ROOT_PATH}. Must contain tools/file_packager.py")
#endif()
#
#find_program_required(EMSCRIPTEN_PACKAGER_SCRIPT "${EMSCRIPTEN_ROOT_PATH}/tools/file_packager.py" "file_packager.py not found, search for EMSCRIPTEN`s file_packager.py")
