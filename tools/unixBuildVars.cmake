﻿cmake_minimum_required(VERSION 3.5)

# NOTE: used ONLY by EMSCRIPTEN toolchain
set(EXTRA_CMAKE_OPTS  "" CACHE STRING "emcmake arguments")

set(EXTRA_MAKE_OPTS  "-j" "8" CACHE STRING "emmake arguments")

find_program_required(MAKE_COMMAND "make" "make not found, search for clang-6 & gcc")