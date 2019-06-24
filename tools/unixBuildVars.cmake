cmake_minimum_required(VERSION 3.5)

# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_CMAKE_OPTS  "" CACHE STRING "emcmake arguments")

set(EXTRA_MAKE_OPTS  "-j" "6" CACHE STRING "emmake arguments")

set(ENABLE_CMAKE_CLEAN_FIRST FALSE CACHE BOOL "ENABLE_CMAKE_CLEAN_FIRST")

if (ENABLE_CMAKE_CLEAN_FIRST)
  set(CMAKE_CLEAN_FIRST "--clean-first")
endif (ENABLE_CMAKE_CLEAN_FIRST)

find_program_required(MAKE_COMMAND "make" "make not found, search for clang-6 & gcc")
