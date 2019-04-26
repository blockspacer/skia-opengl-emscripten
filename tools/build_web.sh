mkdir build-emscripten

cd build-emscripten

emcmake cmake ..

# For windows make command use http://www.mingw.org/wiki/mingw !!!You must add C:\MinGW\bin; to your user PATH environment variable manually!!!
emmake make

# index.html generates from configure_file - see shell.html from CMakeLists.txt
emrun index.html
