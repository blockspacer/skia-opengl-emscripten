# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_EMCMAKE_OPTS  "" CACHE STRING "emcmake arguments")

set(EXTRA_EMMAKE_OPTS  "-j" "8" CACHE STRING "emmake arguments")

find_program(EMSCRIPTEN_CMAKE "emcmake")
if(NOT EMSCRIPTEN_CMAKE)
  colored_fatal("emcmake not found, search for EMSCRIPTEN`s emsdk_env.sh" --red --bold)
endif(NOT EMSCRIPTEN_CMAKE)

find_program(EMSCRIPTEN_MAKE "emmake")
if(NOT EMSCRIPTEN_MAKE)
  colored_fatal("emmake not found, search for EMSCRIPTEN`s emsdk_env.sh" --red --bold)
endif(NOT EMSCRIPTEN_MAKE)
