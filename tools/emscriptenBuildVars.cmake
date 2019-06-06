cmake_minimum_required(VERSION 3.5)

# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_EMCMAKE_OPTS  "" CACHE STRING "emcmake arguments")

set(EXTRA_EMMAKE_OPTS  "-j" "6" CACHE STRING "emmake arguments")

find_program_required(EMSCRIPTEN_CMAKE "emcmake" "emcmake not found, search for EMSCRIPTEN`s emsdk_env.sh")

find_program_required(EMSCRIPTEN_MAKE "emmake" "emmake not found, search for EMSCRIPTEN`s emsdk_env.sh")
