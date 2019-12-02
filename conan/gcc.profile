[settings]
# Tested in Ubuntu Linux
os_build=Linux
os=Linux
arch_build=x86_64
arch=x86_64
# Must match CMAKE_BUILD_TYPE
build_type=Debug

compiler=gcc
compiler.version=7
compiler.libcxx=libstdc++11

[build_requires]
#ninja_installer/1.8.2@bincrafters/stable
cmake_installer/3.15.5@conan/stable

[env]
CC=/usr/bin/gcc
CXX=/usr/bin/g++
#CONAN_CACERT_PATH=...
#CXXFLAGS=""
#CFLAGS=""
