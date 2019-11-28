[settings]
# Tested in Ubuntu Linux
os_build=Linux
os=Linux
arch_build=x86_64
arch=x86_64

compiler=clang
compiler.version=6.0
compiler.libcxx=libstdc++11

[build_requires]
ninja_installer/1.8.2@bincrafters/stable

[env]
CC=/usr/bin/clang
CXX=/usr/bin/clang++
#CONAN_CACERT_PATH=...
