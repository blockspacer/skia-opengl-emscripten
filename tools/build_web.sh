mkdir build-emscripten

cd build-emscripten

emcmake cmake ..

#emmake clean # --clean-first
#make clean
# For windows make command use http://www.mingw.org/wiki/mingw !!!You must add C:\MinGW\bin; to your user PATH environment variable manually!!!
emmake make -j8

# index.html generates from configure_file - see shell.html from CMakeLists.txt
# emrun index.html
