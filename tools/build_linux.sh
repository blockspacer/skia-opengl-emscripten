mkdir build-linux

cd build-linux

cmake ..

# For windows make command use http://www.mingw.org/wiki/mingw !!!You must add C:\MinGW\bin; to your user PATH environment variable manually!!!
cmake --build .
