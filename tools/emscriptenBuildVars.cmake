cmake_minimum_required(VERSION 3.5)

# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_EMCMAKE_OPTS  "" CACHE STRING "emcmake arguments")

set(EXTRA_EMMAKE_OPTS  "-j" "6" CACHE STRING "emmake arguments")

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
