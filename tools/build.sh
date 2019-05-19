#!/bin/sh
rm -rf build*
mkdir buildemscripten
cd buildemscripten
emcmake cmake ..
emmake make -j8
