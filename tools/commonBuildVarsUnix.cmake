# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_CMAKE_OPTS  "" CACHE STRING "emcmake arguments")

set(EXTRA_MAKE_OPTS  "-j" "8" CACHE STRING "emmake arguments")

find_program(MAKE_COMMAND "make")
if(NOT MAKE_COMMAND)
  colored_fatal("make not found, search for clang-6 & gcc" --red --bold)
endif(NOT MAKE_COMMAND)
