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

build_dir='build-linux'

if [[ "${clean}" == "ON" ]]; then
  echo "cleaning build dirs..."

  # rm -rf build
  cmake -E remove_directory ${build_dir}
else
  echo "clean = false"
fi

extra_args=''
if [[ "${build_type}" == "Debug" ]]; then
  extra_args=-DRELEASE_BUILD=OFF
else
  extra_args=-DRELEASE_BUILD=ON
fi

# mkdir build
cmake -E make_directory ${build_dir}

cd ${build_dir}

CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0" \
  cmake -E chdir ${build_dir} cmake -E time cmake .. \
  -DCMAKE_BUILD_TYPE=${build_type} \
  -DCMAKE_C_COMPILER="/usr/bin/clang-6.0" \
  -DCMAKE_CXX_COMPILER="/usr/bin/clang++-6.0" \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  ${extra_args}

CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0" \
  cmake --build . --clean-first --config Debug  -- -j 8
