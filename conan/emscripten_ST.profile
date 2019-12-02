[settings]
# Tested in Ubuntu Linux
os_build=Linux
os=Emscripten
arch=wasm
compiler=clang
compiler.version=6.0
compiler.libcxx=libc++
arch_build=x86_64
# Must match CMAKE_BUILD_TYPE
build_type=Debug
[options]
*:enable_cobalt=True
*:enable_web_pthreads=False
[build_requires]
# NOTE: Use latest emscripten from official website, not emsdk_installer! provide CC and CXX in env
emsdk_installer/1.38.31@bincrafters/stable
#ninja_installer/1.8.2@bincrafters/stable
cmake_installer/3.15.5@conan/stable
[env]
# NOTE: -g4: Preserve LLVM debug information. This is the highest level of debuggability
CXXFLAGS="-g4 -UHAVE_PTHREAD -UEMSCRIPTEN_SUPPORTS_ASYNC_RUN -DDISABLE_PTHREADS=1 -DDISABLE_LOCKS=1 -UUSE_FAKE_THREAD_LS -DWEB_ASSEMBLY=1 -DENABLE_EMBIND=1 -DWEBGL2_SUPPORT=1 -DIS_WEBGL=1 -DEMSCRIPTEN_SUPPORTS_ASYNC_RUN=1 -fno-exceptions"
LDFLAGS="--bind -s WASM=1 -s USE_WEBGL2=1 -s FULL_ES3=1 -s USE_SDL=2 -s USE_FREETYPE=1 -s USE_ZLIB=1 -s ERROR_ON_MISSING_LIBRARIES=1 -s ERROR_ON_UNDEFINED_SYMBOLS=1 -s NO_EXIT_RUNTIME=1 -s TOTAL_MEMORY=1024MB"
#CFLAGS=""
#CC="emcc"
#CXX="em++"
#CONAN_CACERT_PATH=...
