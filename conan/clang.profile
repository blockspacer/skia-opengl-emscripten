[settings]
# Tested in Ubuntu Linux
os_build=Linux
os=Linux
arch_build=x86_64
arch=x86_64
# Must match CMAKE_BUILD_TYPE
build_type=Debug

compiler=clang
compiler.version=6.0
compiler.libcxx=libstdc++11

[options]
*:enable_cobalt=True
*:enable_web_pthreads=True

[build_requires]
#ninja_installer/1.8.2@bincrafters/stable
cmake_installer/3.15.5@conan/stable

[env]
CC=/usr/bin/clang
CXX=/usr/bin/clang++
#CONAN_CACERT_PATH=...
#CXXFLAGS="-DNOMINMAX=1"
#CFLAGS=""
