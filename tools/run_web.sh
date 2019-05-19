#!/usr/bin/env bash

# https://explainshell.com/explain?cmd=set+-e
# set -e # -e breaks emscripten toolchain for some reason

build_dir='build-emscripten'

# mkdir build
cmake -E make_directory ${build_dir}

cd ${build_dir}

# see http://webassemblycode.com/using-browsers-debug-webassembly/
# source-map-base sets port number
# also see --no_browser
# see https://github.com/emscripten-core/emscripten/issues/6534
emrun --port 9090 --serve_root / .
