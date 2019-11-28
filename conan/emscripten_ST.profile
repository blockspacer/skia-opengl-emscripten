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
*:enable_web_pthreads=False
[build_requires]
emsdk_installer/1.38.29@bincrafters/stable
ninja_installer/1.8.2@bincrafters/stable
[env]
CXXFLAGS="-UHAVE_PTHREAD -UEMSCRIPTEN_SUPPORTS_ASYNC_RUN -DDISABLE_PTHREADS=1 -DDISABLE_LOCKS=1 -DUSE_FAKE_THREAD_LS=1"
LDFLAGS=""
#CONAN_CACERT_PATH=...
