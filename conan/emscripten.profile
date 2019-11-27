include(default)
[settings]
# Tested in Ubuntu Linux
os=Emscripten
arch=wasm
compiler=clang
compiler.version=6.0
compiler.libcxx=libc++
[options]
[build_requires]
emsdk_installer/1.38.29@bincrafters/stable
ninja_installer/1.8.2@bincrafters/stable
[env]
#CONAN_CACERT_PATH=...
