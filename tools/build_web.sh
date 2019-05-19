#!/usr/bin/env bash

# https://explainshell.com/explain?cmd=set+-e
set -e

# defaults if args not passed
#
# -c: remove old build artifacts
clean='OFF'
# -b: build type
build_type='Debug'

print_usage() {
  printf "Usage: bash {COMMAND_HERE} -c -b Debug"
}

# @see stackoverflow.com/a/21128172/10904212
# @see wiki.bash-hackers.org/howto/getopts_tutorial
# @note: the colon after in 'b:' denotes that -b takes an additional argument
while getopts 'cb:' flag; do
  case "${flag}" in
    # set values if args passed
    c) clean='ON' ;;
    b) build_type="${OPTARG}" ;;
    *) print_usage
       exit 1 ;;
  esac
done

build_dir='build-emscripten'

if [[ "${clean}" == "ON" ]]; then
  echo "cleaning build dirs..."

  # rm -rf build
  cmake -E remove_directory ${build_dir}
else
  echo "clean = false"
fi

extra_args=''
if [[ "${build_type}" == "Debug" ]]; then
  extra_args='-DRELEASE_BUILD=TRUE'
else
  extra_args='-DRELEASE_BUILD=FALSE'
fi

# mkdir build
cmake -E make_directory ${build_dir}

cd ${build_dir}

emcmake cmake -E time cmake .. \
  -DCMAKE_BUILD_TYPE=${build_type} \
  ${extra_args}

#emmake clean # --clean-first
#make clean
# For windows make command use http://www.mingw.org/wiki/mingw !!!You must add C:\MinGW\bin; to your user PATH environment variable manually!!!
emmake make -j8

# index.html generates from configure_file - see shell.html from CMakeLists.txt
# emrun index.html
