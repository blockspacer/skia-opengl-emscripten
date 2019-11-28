[settings]
# Tested in Ubuntu Linux
os_build=Linux
os=Emscripten
arch=wasm
compiler=clang
compiler.version=6.0
compiler.libcxx=libc++
arch_build=x86_64
[options]
*:enable_web_pthreads=True
[build_requires]
emsdk_installer/1.38.29@bincrafters/stable
ninja_installer/1.8.2@bincrafters/stable
[env]
CXXFLAGS="-DHAVE_PTHREAD=1 -DEMSCRIPTEN_SUPPORTS_ASYNC_RUN=1 -s PTHREAD_POOL_SIZE=8 -pthread -s USE_PTHREADS=1"
LDFLAGS="-s PTHREAD_POOL_SIZE=8 -pthread -s USE_PTHREADS=1"
#CONAN_CACERT_PATH=...
