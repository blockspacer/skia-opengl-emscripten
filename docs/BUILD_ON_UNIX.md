# About

Build instructions tested on:

``` bash
lsb_release -a
# Distributor ID: Ubuntu
# Description:    Ubuntu 18.04.2 LTS
# Release:        18.04
# Codename:       bionic
```

## Build and install CMake manually (recommended)

Uninstall any previous version (if needed):

```bash
sudo apt remove cmake
sudo apt purge --auto-remove cmake
```

Download, build and install the desired version from the terminal (you can check for the available versions at [the official CMake webpage](https://cmake.org/download/)).
You should set the CMAKE_VERSION and CMAKE_BUILD variables as needed:

```bash
# see https://github.com/blockspacer/CXXCTP/blob/master/scripts/install_cmake.sh
export CMAKE_VERSION=3.15
export CMAKE_BUILD=3
mkdir -p ~/3rdparty
cd ~/3rdparty
wget https://cmake.org/files/v$CMAKE_VERSION/cmake-$CMAKE_VERSION.$CMAKE_BUILD.tar.gz
tar -xvzf cmake-$CMAKE_VERSION.$CMAKE_BUILD.tar.gz
rm cmake-$CMAKE_VERSION.$CMAKE_BUILD.tar.gz
cd cmake-$CMAKE_VERSION.$CMAKE_BUILD
./bootstrap
# build
make -j4
# install
sudo make install
```

### WASM

Download, install & configure emscripten as per your environment requires:

http://kripken.github.io/emscripten-site/docs/getting_started/downloads.html

### Build & clone deps with --init --recursive

```bash
# git submodule deinit --all -f
git submodule sync --recursive
git fetch --recurse-submodules
git submodule update --init --recursive --depth 5
# or
git submodule update --force --recursive --init --remote
```

```bash
# see http://commondatastorage.googleapis.com/chrome-infra-docs/flat/depot_tools/docs/html/depot_tools_tutorial.html#_setting_up
ls ${PWD}/thirdparty/depot_tools
export PATH="${PWD}/thirdparty/depot_tools:${PATH}"
```

Clone SKIA using depot_tools as in `skia` section.

Used deps:

- https://github.com/nigels-com/glew.git

```bash
# see https://github.com/nigels-com/glew#linux-and-mac
sudo -E apt-get install build-essential libxmu-dev libxi-dev libgl-dev --reinstall
sudo -E apt install libegl1-mesa-dev --reinstall
cd thirdparty/glew
cd auto
# build
make
cd ../build
cmake ./cmake
cmake --build . -- -j4
# install
sudo make install
- libUUID
```bash
sudo apt-get install uuid-dev uuid-dev uuid-runtime
```

- https://github.com/spurious/SDL-mirror.git

```bash
# see https://wiki.libsdl.org/Installation
cd thirdparty/SDL2
mkdir build
cd build
cmake ..
# build
cmake --build . -- -j4
# install
sudo make install
# NOTE You can even specify a custom path to find the SDL2, SDL2_net, ...
# see https://stackoverflow.com/a/55075667
```

- https://github.com/davidsiaw/SDL2_ttf

```bash
# see https://www.libsdl.org/projects/SDL_ttf/
# see https://www.libsdl.org/projects/SDL_ttf/docs/SDL_ttf_2.html
sudo apt-get install automake build-essential xorg-dev libudev-dev libts-dev libgl1-mesa-dev libglu1-mesa-dev libasound2-dev libpulse-dev libopenal-dev libogg-dev libvorbis-dev libaudiofile-dev libpng-dev libfreetype6-dev libusb-dev libdbus-1-dev zlib1g-dev libdirectfb-dev
cd thirdparty/SDL2_ttf
sh autogen.sh
chmod +x configure
./configure
# build
make
# install
sudo make install
export SDL2DIR=/usr/local/include
```

- https://github.com/SDL-mirror/SDL_net.git

```bash
# see https://www.libsdl.org/projects/SDL_net/
# see https://www.libsdl.org/projects/SDL_net/docs/SDL_net.html
sudo apt-get install automake build-essential xorg-dev libudev-dev libts-dev libgl1-mesa-dev libglu1-mesa-dev libasound2-dev libpulse-dev libopenal-dev libogg-dev libvorbis-dev libaudiofile-dev libpng-dev libfreetype6-dev libusb-dev libdbus-1-dev zlib1g-dev libdirectfb-dev
cd thirdparty/SDL_net
sh autogen.sh
chmod +x configure
./configure
# build
make
# install
sudo make install
export SDL2NETDIR=/usr/local/include
```

- https://github.com/aminosbh/sdl2-cmake-modules

```bash
# see https://stackoverflow.com/a/55075667
```

- https://skia.googlesource.com/skia.git

## clang

```bash
wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key --no-check-certificate | sudo apt-key add -
sudo apt-add-repository "deb http://apt.llvm.org/xenial/ llvm-toolchain-xenial-5.0 main"
sudo apt-add-repository "deb http://apt.llvm.org/xenial/ llvm-toolchain-xenial-6.0 main"
sudo apt-add-repository "deb http://apt.llvm.org/bionic/ llvm-toolchain-bionic-7 main"
sudo apt-add-repository "deb http://apt.llvm.org/bionic/ llvm-toolchain-bionic-8 main"
sudo -E apt-get update
sudo -E apt-get install build-essential
sudo -E apt-get install clang-6.0 python-lldb-6.0 lldb-6.0 lld-6.0 llvm-6.0-dev
sudo -E apt-get install clang-tools-6.0
sudo -E apt-get install libclang-common-6.0-dev libclang1-6.0 libclang-6.0-dev
sudo -E apt-get install libc++abi-dev libc++-dev
sudo apt-get install ninja-build libfreetype6-dev
sudo -E apt-get install libicu-dev libjpeg-dev libwebp-dev -y
# install icu https://stackoverflow.com/a/41314630
# see archive.ubuntu.com/ubuntu/pool/main/i/icu/
# NOTE: install same version as libicu-dev
wget http://archive.ubuntu.com/ubuntu/pool/main/i/icu/libicu60_60.2-3ubuntu3_amd64.deb
sudo dpkg -i libicu60_60.2-3ubuntu3_amd64.deb
rm libicu60_60.2-3ubuntu3_amd64.deb
sudo apt-get -f install
export ICU_ROOT=/usr/include
# harfbuzz
sudo apt-get install autoconf automake libtool pkg-config ragel gtk-doc-tools
git clone https://github.com/harfbuzz/harfbuzz.git
cd harfbuzz
./autogen.sh
./configure
# build
make
# install
sudo make install
# You can also set HARFBUZZ_DIR,
# see https://github.com/SFTtech/openage/blob/master/buildsystem/modules/FindHarfBuzz.cmake#L30
``

## skia

``bash
# see https://github.com/google/skia/blob/master/site/user/build.md
# see https://github.com/google/skia/blob/master/modules/pathkit/README.md
ls ${PWD}/thirdparty/depot_tools
export PATH="${PWD}/thirdparty/depot_tools:${PATH}"
cd src/chromium/third_party/skia
# from https://chromium.googlesource.com/chromium/src.git/+/589d8ec2fcaab6f5e48af84d703a1eb430ee9716/DEPS#136
git checkout f5ca01a69ab6f427c515bb3b4a9748047f04cb13
tools/git-sync-deps
# If some header files are missing, install the corresponding dependencies
tools/install_dependencies.sh
# see https://github.com/google/skia/blob/master/src/sksl/README#L77
bin/fetch-clang-format
```

(optional) validate skia deps:

```bash
# from https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/third_party/skia/DEPS
# cd src/chromium/third_party/skia/third_party/externals/harfbuzz/
# git checkout 4f37ab63de9705d7bf74ee75364747e41b7c06a1
```

- pip

```bash
sudo -E pip2 install ply Jinja2 --index-url=https://pypi.python.org/simple/ --trusted-host pypi.org --trusted-host pypi.python.org
# OR manual download & install (usefull under proxy):
# wget https://files.pythonhosted.org/packages/a3/58/35da89ee790598a0700ea49b2a66594140f44dec458c07e8e3d4979137fc/ply-3.11-py2.py3-none-any.whl
# # ... wget https://pypi.magicstack.net/packages/urllib3/download/79187/urllib3-1.22-py2.py3-none-any.whl
# pip2 install *.whl
```
- libpng12-0

```bash
# see https://askubuntu.com/a/840268
# NOTE: intel or amd!
# see https://packages.ubuntu.com/xenial/amd64/libpng12-dev/download
# see https://packages.ubuntu.com/xenial/amd64/libpng12-0/download
wget http://security.ubuntu.com/ubuntu/pool/main/libp/libpng/libpng12-0_1.2.54-1ubuntu1.1_amd64.deb
sudo dpkg -i libpng12-0_1.2.54-1ubuntu1.1_amd64.deb
sudo apt-get -f install
wget http://security.ubuntu.com/ubuntu/pool/main/libp/libpng/libpng12-dev_1.2.54-1ubuntu1.1_amd64.deb
sudo dpkg -i libpng12-dev_1.2.54-1ubuntu1.1_amd64.deb
sudo apt-get -f install
```

### Apply patches

```bash
# see https://chromium.googlesource.com/chromium/src.git/+/589d8ec2fcaab6f5e48af84d703a1eb430ee9716/skia/ext/SkDiscardableMemory_chrome.cc?autodive=0%2F%2F%2F%2F%2F%2F

# The -a option is an improved recursive option, that preserve all file attributes, and also preserve symlinks.
# The . at end of the source path is a specific cp syntax that allow to copy all files and folders, included hidden ones.
cp -a "patches/skia_to_copy/." src/chromium/third_party/skia/
cp -a "patches/skia/." src/chromium/third_party/skia/
cp -a "patches/skia/." src/chromium/third_party/skia/

cp -a "patches/libjpeg_turbo/." src/chromium/third_party/libjpeg_turbo/

# OR
# cp -a "patches/libjpeg_turbo/." src/chromium/third_party/libjpeg/
```

### Compile example on Linux

NOTE: We use `cmake -P` to run helper `.cmake` script that performs configure and build steps.

```bash
cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildUnix.cmake

# OR
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -DENABLE_CMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-linux-deb/ -DEXTRA_CMAKE_OPTS="-DENABLE_WEB_PTHREADS=TRUE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKOTTIE=TRUE;-DFORCE_DISABLE_SK_GPU=FALSE;-DENABLE_BLINK=TRUE;-DENABLE_BLINK_UI_VIEWS=TRUE;-DENABLE_BLINK_UI_NATIVE_THEME=TRUE" -P tools/buildUnix.cmake
```

### Run example on Unix

```bash
# (RUN_APP=ON, BUILD_APP=OFF)
cmake -DRUN_APP=ON -DBUILD_APP=OFF -DBUILD_DIR=$(pwd)/build-linux-deb/ -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildUnix.cmake
```

### Run example on gdb (Unix)

```bash
clear && clear ; cd build-linux-deb ; gdb skemgl -ex "run" -ex "set pagination off" -ex "bt" -ex "set confirm off" -ex "quit"
```

### Compile example on HTML5 platform / browser / WASM

```bash
cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildWeb.cmake

# OR
cmake -DRUN_APP=OFF -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-wasm-mt-deb/ -DEXTRA_EMCMAKE_OPTS="-DENABLE_NATIVE_HTML=FALSE;-DENABLE_WEB_PTHREADS=TRUE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=TRUE;-DENABLE_SKSG=TRUE;-DENABLE_SKIA_UTILS=TRUE;-DENABLE_SKOTTIE=TRUE;-DENABLE_SKSHAPER=TRUE;-DFORCE_DISABLE_SK_GPU=FALSE;-DENABLE_BLINK=TRUE;-DENABLE_BLINK_UI_VIEWS=TRUE;-DENABLE_BLINK_UI_NATIVE_THEME=TRUE;-DENABLE_MAIN=TRUE" -P tools/buildWeb.cmake

# OR
# NOTE: MT build in release mode if you want good performance in browser
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Release" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-wasm-mt-rel/ -DEXTRA_EMCMAKE_OPTS="-DENABLE_NATIVE_HTML=FALSE;-DENABLE_WEB_PTHREADS=TRUE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=TRUE;-DENABLE_SKSG=TRUE;-DENABLE_SKIA_UTILS=TRUE;-DENABLE_SKOTTIE=TRUE;-DENABLE_SKSHAPER=TRUE;-DFORCE_DISABLE_SK_GPU=FALSE;-DENABLE_BLINK=TRUE;-DENABLE_BLINK_UI_VIEWS=TRUE;-DENABLE_BLINK_UI_NATIVE_THEME=TRUE;-DENABLE_MAIN=TRUE" -P tools/buildWeb.cmake

# OR
# NOTE: ST build in debug mode
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-wasm-st-deb/ -DEXTRA_EMCMAKE_OPTS="-DENABLE_NATIVE_HTML=FALSE;-DENABLE_WEB_PTHREADS=FALSE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=TRUE;-DENABLE_SKSG=TRUE;-DENABLE_SKIA_UTILS=TRUE;-DENABLE_SKOTTIE=TRUE;-DENABLE_SKSHAPER=TRUE;-DFORCE_DISABLE_SK_GPU=FALSE;-DENABLE_BLINK=TRUE;-DENABLE_BLINK_UI_VIEWS=TRUE;-DENABLE_BLINK_UI_NATIVE_THEME=TRUE;-DENABLE_MAIN=TRUE" -P tools/buildWeb.cmake

# OR
# NOTE: ST build in release mode if you want good performance in browser
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Release" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-wasm-st-rel/ -DEXTRA_EMCMAKE_OPTS="-DENABLE_NATIVE_HTML=FALSE;-DENABLE_WEB_PTHREADS=FALSE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=TRUE;-DENABLE_SKSG=TRUE;-DENABLE_SKIA_UTILS=TRUE;-DENABLE_SKOTTIE=TRUE;-DENABLE_SKSHAPER=TRUE;-DFORCE_DISABLE_SK_GPU=FALSE;-DENABLE_BLINK=TRUE;-DENABLE_BLINK_UI_VIEWS=TRUE;-DENABLE_BLINK_UI_NATIVE_THEME=TRUE;-DENABLE_MAIN=TRUE" -P tools/buildWeb.cmake

# OR
# Debug WASM build for native HTML5 without skia/blink
# NOTE: change website url in `-DWEBSITE_ROOT_URL=`. WEBSITE_ROOT_URL may point to domain name or url containing website resources (style, images, etc.)
# TODO: -DUSE_ICU=FALSE;-DENABLE_HARFBUZZ=FALSE;-DENABLE_GLIBXML=FALSE;
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-html5-st-deb/ -DEXTRA_EMCMAKE_OPTS="-DENABLE_NATIVE_HTML=TRUE;-DWEBSITE_ROOT_URL="http://localhost:9090$(pwd)/build-html5-st-deb/";-DENABLE_WEB_PTHREADS=FALSE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=FALSE;-DENABLE_SKSG=FALSE;-DENABLE_SKIA_UTILS=FALSE;-DENABLE_SKOTTIE=FALSE;-DENABLE_SKSHAPER=FALSE;-DFORCE_DISABLE_SK_GPU=TRUE;-DENABLE_BLINK=FALSE;-DENABLE_BLINK_UI_VIEWS=FALSE;-DENABLE_BLINK_UI_NATIVE_THEME=FALSE;-DENABLE_MAIN=TRUE" -P tools/buildWeb.cmake

# OR
# Release WASM build for native HTML5 without skia/blink
# NOTE: change website url in `-DWEBSITE_ROOT_URL=`. WEBSITE_ROOT_URL may point to domain name or url containing website resources (style, images, etc.)
# TODO: -DUSE_ICU=FALSE;-DENABLE_HARFBUZZ=FALSE;-DENABLE_GLIBXML=FALSE;
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Release" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-html5-st-rel/ -DEXTRA_EMCMAKE_OPTS="-DENABLE_NATIVE_HTML=TRUE;-DWEBSITE_ROOT_URL="http://localhost:9090$(pwd)/build-html5-st-deb/";-DENABLE_WEB_PTHREADS=FALSE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=FALSE;-DENABLE_SKSG=FALSE;-DENABLE_SKIA_UTILS=FALSE;-DENABLE_SKOTTIE=FALSE;-DENABLE_SKSHAPER=FALSE;-DFORCE_DISABLE_SK_GPU=TRUE;-DENABLE_BLINK=FALSE;-DENABLE_BLINK_UI_VIEWS=FALSE;-DENABLE_BLINK_UI_NATIVE_THEME=FALSE;-DENABLE_MAIN=TRUE" -P tools/buildWeb.cmake

# OR
# Debug Linux build for native Linux without skia/blink
# TODO: -DUSE_ICU=FALSE;-DENABLE_HARFBUZZ=FALSE;-DENABLE_GLIBXML=FALSE;
cmake -DRUN_APP=ON -DBUILD_APP=ON -DEXTRA_EMMAKE_OPTS="-j;6" -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -DENABLE_EMCMAKE_CLEAN_FIRST=OFF -DBUILD_DIR=$(pwd)/build-linux-minimal-st-deb/ -DEXTRA_CMAKE_OPTS="-DENABLE_NATIVE_HTML=TRUE;-DWEBSITE_ROOT_URL="file:///";-DENABLE_GLIBXML=TRUE;-DENABLE_WEB_PTHREADS=FALSE;-DENABLE_LIBWEBP=FALSE;-DENABLE_COBALT=TRUE;-DENABLE_BASE=TRUE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=FALSE;-DENABLE_SKSG=FALSE;-DENABLE_SKIA_UTILS=FALSE;-DENABLE_SKOTTIE=FALSE;-DENABLE_SKSHAPER=FALSE;-DFORCE_DISABLE_SK_GPU=TRUE;-DENABLE_BLINK=FALSE;-DENABLE_BLINK_UI_VIEWS=FALSE;-DENABLE_BLINK_UI_NATIVE_THEME=FALSE;-DENABLE_MAIN=TRUE" -P tools/buildUnix.cmake
clear && clear ; cd build-linux-minimal-st-deb ; gdb skemgl -ex "run" -ex "set pagination off" -ex "bt" -ex "set confirm off" -ex "quit"
```

### Run example on HTML5 platform / browser / WASM (needs '--emrun' cxx flag)

Start browser as root with `--no-sandbox` and NetworkService enabled, see https://stackoverflow.com/a/56485360

```bash
sudo -E /usr/bin/google-chrome-stable --enable-features=NetworkService --enable-features=NetworkServiceWindowsSandbox --no-sandbox
```

```bash
# (RUN_APP=ON, BUILD_APP=OFF)
cmake -DRUN_APP=ON -DBUILD_APP=OFF -DBUILD_DIR=$(pwd)/build-wasm-mt-deb/ -P tools/buildWeb.cmake
```

- see http://webassemblycode.com/using-browsers-debug-webassembly/

To run your applications, while not strictly necessary, it's recommended to host on a server that can serve files with the <a href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types">mime type</a- <code>application/wasm</code>

## NOTE: need emcc version - 1.38.21

- see https://emscripten.org/docs/getting_started/downloads.html#updating-the-sdk

```bash
# go to dir containing emsdk
cd "$(dirname "$(which emsdk)" )"

# Fetch the latest registry of available tools.
git pull
./emsdk update
./emsdk update-tags

# Download and install the latest SDK tools.
./emsdk install latest

# Set up the compiler configuration to point to the "latest" SDK.
./emsdk activate latest

# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh

# check emcc version
which emcc

# https://emscripten.org/docs/tools_reference/emcc.html
emcc --clear-cache
emcc --clear-ports
emcc --show-ports

# test emcc on small app
cd /tmp
# create small app
cat <<EOF >>hello.cpp
#include <GLES3/gl3.h>
#include <GLES2/gl2ext.h>

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <emscripten.h>
#include <emscripten/html5.h>

EMSCRIPTEN_WEBGL_CONTEXT_HANDLE context;

int main()
{
  EmscriptenWebGLContextAttributes attrs;
  emscripten_webgl_init_context_attributes(&attrs);
  attrs.majorVersion = 2;
  attrs.minorVersion = 0;

  int result = 0;

  EMSCRIPTEN_WEBGL_CONTEXT_HANDLE context = emscripten_webgl_create_context(nullptr, &attrs);
  assert(context);
  EMSCRIPTEN_RESULT res = emscripten_webgl_make_context_current(context);
  assert(res == EMSCRIPTEN_RESULT_SUCCESS);
  assert(emscripten_webgl_get_current_context() == context);
  GLuint tex;
  glGenTextures(1, &tex);
  glBindTexture(GL_TEXTURE_2D, tex);
  glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 16, 16, 0, GL_RGBA, GL_HALF_FLOAT_OES, 0);
  assert(glGetError() == 0);
  emscripten_webgl_destroy_context(context);

  return 0;
}
EOF
em++ -s WASM=1 -s USE_PTHREADS=1 -s PTHREAD_POOL_SIZE=8 -s USE_WEBGL2=1 -s WEBGL2_BACKWARDS_COMPATIBILITY_EMULATION=1 -s GL_ASSERTIONS=1 -s FULL_ES3=1 -s DEMANGLE_SUPPORT=1 -frtti -s SAFE_HEAP=1 -s ALIASING_FUNCTION_POINTERS=0 -s ERROR_ON_MISSING_LIBRARIES=1 -s ERROR_ON_UNDEFINED_SYMBOLS=1 -s ASSERTIONS=2 -s TOTAL_MEMORY=1024MB -s NO_EXIT_RUNTIME=1 -s OFFSCREENCANVAS_SUPPORT=0 -s OFFSCREEN_FRAMEBUFFER=0 -Wall -s USE_SDL=2 -std=c++17 -O1 --emrun -g4 --source-map-base http://localhost:9090/ -s DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=0 hello.cpp -o hello.html
# TODO: remove deprecated DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR in emcc >= 1.39
# run, & check console for crashes (also check enabled browser flags & browser version)
emrun --port 9090 --serve_root / hello.html
# delete old builds
# cd to project dir
rm -rf build-*
```
