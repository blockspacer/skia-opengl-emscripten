# FAQ

> WHY? - Inspired by chromium, WebAssembly, emscripten, web workers, CoherentGT, NoesisGUI, WEBGL2, flutter, hummingbird, Ultralight, Awesomium, libRocket, servo, sciter, cobalt.foo, EAWebKit, QML (Qt), CEF, HTML5 & CSS3, VUE.js & REACT.js & ANGULAR.js, electron, https://github.com/livecode/livecode/blob/develop/libgraphics/src/context.cpp, chromium-lite, blink. Let`s combine best of them all together.
also see https://news.ycombinator.com/item?id=17733515
> Can`t build? - Check readme & issues.

# NOTE/NEED

todos
> https://cobalt.googlesource.com/cobalt
> license If this is based off of Chromium it may be required to be Open-Source. Unless the LGPL parts are dynamically linked, you must share the statically linked source just like with the GPL.
> support godot, android, win e.t.c.
> https://www.chromium.org/developers/design-documents/chromeviews
  https://github.com/chromium/chromium/blob/master/ui/views/examples/scroll_view_example.cc

needs
> https://bugs.chromium.org/p/skia/issues/detail?id=9052&q=&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
> https://bugs.chromium.org/p/skia/issues/detail?id=8505&q=thread&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
> skia & pthreads support on wasm platform: bugged traces, skOnce, SetDefaultTrivialExecutor, e.t.c.
> FreeType thread safety https://bugs.chromium.org/p/skia/issues/detail?id=8997&q=thread&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
> delayed tasks without pthread support & wait on condition variable
> use CMakeLists for skia build
  https://github.com/skui-org/skia/blob/m74/CMakeLists.txt
  https://github.com/Tarnyko/chromium-lite/blob/master/05b-skia/CMakeLists.txt

notes
> if you want good performance - set RELEASE_BUILD to TRUE in CMakeLists.txt and set -DCMAKE_BUILD_TYPE=Release. Or even better - use scripts from tools directory with right arguments.
> no embedded js engine, prefer C++/wasm
> May break compatibility to the web (move beyond the web). Web pays enormous penalties for compatibility with 30-year-old web pages. See https://softwareengineeringdaily.com/wp-content/uploads/2018/06/SED625-Flutter.pdf
> don`t load files from ptreads: may cause deadlock on wasm! See https://github.com/emscripten-core/emscripten/issues/3495

# Features

> skia compiled to wasm (emscripten)
> skottie (Bodymovin animation / lottie), see https://skia.org/user/modules/skottie
> custom fonts
> unicode fonts & harfbuzz
> uses SDL2 to create window
> uses CMake
> supports WASM with/without threads
> supports WebGL 2 / GLSL 300 es as there really isn`t a reason to support WebGL 1 at this point
> supports WASM as there really isn`t a reason to support ASM.js at this point
> supports cobalt.foo HTML/CSS parser

## TODO
https://github.com/emscripten-core/emscripten/issues/5033

emscripten_get_font_by_name
https://github.com/livecode/livecode/blob/d780d79e800afd65897631f840296075ff6573e9/engine/src/em-fontlist.cpp#L256

boost to wasm:
b2 --with-system --with-filesystem toolset=emscripten link=static

wasm to asm.js fallback

emscripten_logging_sink
https://github.com/google/xrtl/blob/master/xrtl/port/emscripten/base/emscripten_logging_sink.cc
https://webassemblycode.com/how-to-debug-webassemly/

libwebrtc.js
https://github.com/HumbleNet/HumbleNet/blob/master/src/humblenet/src/libwebrtc_asmjs.cppbrtc_asmjs.cpp

RasterCache
https://github.com/flutter/engine/blob/master/flow/raster_cache.cc

## PATCHES

TODO
> https://nithinbekal.com/posts/git-patch/
> https://reactnative-tricks.com/how-to-create-and-apply-patches-in-git-using-diff-and-apply-command/
> https://github.com/search?q=git+%22patch%22+%22apply%22+%22execute_process%22+language%3ACMake&type=Code

1
#define FRIEND_TEST

2
https://github.com/invokr/protobuf-emscripten/blob/master/patches/3.1/0001-stubs.patch
https://groups.google.com/forum/#!msg/emscripten-discuss/97HYhPgd6Ag/5gDrTcyCAAAJ

#if defined(EMSCRIPTEN) || defined(__EMSCRIPTEN__)
typedef Atomic32 AtomicWord;
#else
typedef intptr_t AtomicWord;
#endif


#if defined(EMSCRIPTEN) || defined(__EMSCRIPTEN__)
typedef subtle::Atomic32 AtomicType;
typedef subtle::Atomic32 UAtomicType;
#else
typedef intptr_t AtomicType;
typedef uintptr_t UAtomicType;
#endif
3
https://github.com/TunSafe/TunSafe/blob/master/build_config.h


#elif defined(EMSCRIPTEN)
#define OS_EMSCRIPTEN 1

#elif defined(EMSCRIPTEN) || defined(__EMSCRIPTEN__)
#define OS_EMSCRIPTEN 1



#elif defined(EMSCRIPTEN)
#define ARCH_CPU_JS 1
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1

4
see https://github.com/cliqz-oss/ceba.js/blob/master/patches/tor/0002-emscripten-main-loop.patch#L7

    #ifdef __EMSCRIPTEN__
    const int flags_ONCE = EVLOOP_ONCE | EVLOOP_NONBLOCK;
    #else
    const int flags_ONCE = EVLOOP_ONCE;
    #endif

5
patched libevent, added 'emscripten' subfolder

6
#elif defined(OS_LINUX) || defined(OS_BSD) || defined(OS_EMSCRIPTEN)
using MessagePumpForUI = MessagePumpLibevent;

7
search for OS_EMSCRIPTEN, __EMSCRIPTEN__, __TODO__, ENABLE_TRACING_SERVICE (all occurrences)

#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
    defined(OS_ANDROID) || defined(OS_AIX) || defined(OS_FUCHSIA) || defined(OS_EMSCRIPTEN)

8 skTraceEvent. h && SkTraceEventCommon.h

#ifdef __EMSCRIPTEN__

/// \note trace events may cause freeze on WASM with pthreads support

#define INTERNAL_TRACE_EVENT_UID3(a,b) \
    (void)(0);
#define INTERNAL_TRACE_EVENT_UID2(a,b) \
    (void)(0);
#define INTERNAL_TRACE_EVENT_UID(name_prefix) \
    (void)(0);

// Implementation detail: internal macro to create static category.
// No barriers are needed, because this code is designed to operate safely
// even when the unsigned char* points to garbage data (which may be the case
// on processors without cache coherency).
#define INTERNAL_TRACE_EVENT_GET_CATEGORY_INFO_CUSTOM_VARIABLES( \
    category_group, atomic, category_group_enabled) \
    (void)(0);

#define INTERNAL_TRACE_EVENT_GET_CATEGORY_INFO(category_group) \
    (void)(0);

// Implementation detail: internal macro to create static category and add
// event if the category is enabled.
#define INTERNAL_TRACE_EVENT_ADD(phase, category_group, name, flags, ...) \
    (void)(0);

// Implementation detail: internal macro to create static category and add
// event if the category is enabled.
#define INTERNAL_TRACE_EVENT_ADD_WITH_ID(phase, category_group, name, id, \
                                         flags, ...) \
    (void)(0);

// Implementation detail: internal macro to create static category and add begin
// event if the category is enabled. Also adds the end event when the scope
// ends.
#define INTERNAL_TRACE_EVENT_ADD_SCOPED(category_group, name, ...) \
    (void)(0);

...

9 SkExecutor.cpp

num_cores


10

// TODO: check wasm threads
#if defined(OS_EMSCRIPTEN) || defined(__EMSCRIPTEN__)
DEFINE_int(gpuThreads,
             0,
             "Create this many extra threads to assist with GPU work, "
             "including software path rendering. Defaults to two.");
#else
DEFINE_int(gpuThreads,
             2,
             "Create this many extra threads to assist with GPU work, "
             "including software path rendering. Defaults to two.");
#endif

static DEFINE_bool(cachePathMasks, true,
                   "Allows path mask textures to be cached in GPU configs.");

#if defined(OS_EMSCRIPTEN) || defined(__EMSCRIPTEN__)
static DEFINE_bool(noGS, true, "Disables support for geometry shaders.");
#else
static DEFINE_bool(noGS, false, "Disables support for geometry shaders.");
#endif

11

#ifdef __EMSCRIPTEN__
    // See https://github.com/kripken/emscripten/issues/4929
    // use std::chrono::system_clock::now(), not std::chrono::steady_clock::now()
    #warning "TODO: test steady_clock on wasm/emcc (safary browser)";
#endif

12 copy src/chromium/skia/ext dir to src/chromium/third_party/skia/
add || defined(__EMSCRIPTEN__) to
CreatePlatformCanvasWithPixels
remove SK_CRASH

13 remove skia debugcanvas lib

## Experimental features

> chromium base (libchrome) from Blink ported to WASM
https://www.chromium.org/chromium-os/packages/libchrome
> WTF (Web Template Framework) from Blink ported to WASM
https://github.com/endlessm/chromium-browser/tree/master/third_party/blink/renderer
> WTF (Web Template Framework) from WebKit ported to WASM
https://chromium.googlesource.com/chromium/src.git/+/62.0.3178.1/third_party/WebKit/Source/platform/wtf/README.md

## TODO

> port base/debug folder to wasm and remove some "if !defined(OS_EMSCRIPTEN)"

> Test linux & windows support

> Shrink skia size
see https://github.com/skui-org/skia/blob/m74/CMakeLists.txt
https://github.com/google/skia/blob/master/BUILD.gn#L1085
https://github.com/google/skia/blob/master/gn/core.gni#L100

with wtf & skia: 3.0M

only skia without gpu & skottie & icu & harfbuzz & jpeg & wuffs: 1.9M

> New renderer (blink)
https://zhuanlan.zhihu.com/p/63318397
http://www.html5dw.com/post/4518
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/box_painter.cc#L109
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/box_border_painter.cc#L831
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/block_painter.cc#L230
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/inline_box_painter_base.cc#L16
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/box_painter_base.cc#L156
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/graphics/graphics_context.cc
https://github.com/chromium/chromium/blob/master/cc/paint/skia_paint_canvas.cc

> Webkit
https://github.com/keishi/webkit/blob/master/Source/WebCore/platform/graphics/skia/PlatformContextSkia.h#L68

### Clone with --recursive

```
sudo -E apt-get update
sudo -E apt-get install git build-essential wget
sudo apt-get install libgles2-mesa-dev libegl1-mesa-dev
sudo -E apt-get install build-essential --reinstall
git clone --recursive {repourl_here}
```

### Ubuntu - Build and install CMake manually (recommended)
Uninstall any previous version (if needed):
```
sudo apt remove cmake
sudo apt purge --auto-remove cmake
```

Download, build and install the desired version from the terminal (you can check for the available versions at [the official CMake webpage](https://cmake.org/download/)).
You should set the CMAKE_VERSION and CMAKE_BUILD variables as needed:
```
export CMAKE_VERSION=3.11
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

```
git submodule update --init --recursive
```

```
# see http://commondatastorage.googleapis.com/chrome-infra-docs/flat/depot_tools/docs/html/depot_tools_tutorial.html#_setting_up
ls ${PWD}/thirdparty/depot_tools
export PATH="${PWD}/thirdparty/depot_tools:${PATH}"
```

Used deps:

> https://github.com/nigels-com/glew.git
```
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
> libUUID
```
sudo apt-get install uuid-dev uuid-dev uuid-runtime
```
> https://github.com/spurious/SDL-mirror.git
```
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
> https://github.com/davidsiaw/SDL2_ttf
```
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
> https://github.com/SDL-mirror/SDL_net.git
```
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
> https://github.com/aminosbh/sdl2-cmake-modules
```
# see https://stackoverflow.com/a/55075667
```
> https://skia.googlesource.com/skia.git
```
## clang
```
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
## skia
# see https://github.com/google/skia/blob/master/site/user/build.md
# see https://github.com/google/skia/blob/master/modules/pathkit/README.md
ls ${PWD}/thirdparty/depot_tools
export PATH="${PWD}/thirdparty/depot_tools:${PATH}"
cd src/chromium/third_party/skia
tools/git-sync-deps
# If some header files are missing, install the corresponding dependencies
tools/install_dependencies.sh
# see https://github.com/google/skia/blob/master/src/sksl/README#L77
bin/fetch-clang-format
```
> pip
```
sudo -E pip2 install ply Jinja2 --index-url=https://pypi.python.org/simple/ --trusted-host pypi.org --trusted-host pypi.python.org
# OR manual download & install (usefull under proxy):
# wget https://files.pythonhosted.org/packages/a3/58/35da89ee790598a0700ea49b2a66594140f44dec458c07e8e3d4979137fc/ply-3.11-py2.py3-none-any.whl
# # ... wget https://pypi.magicstack.net/packages/urllib3/download/79187/urllib3-1.22-py2.py3-none-any.whl
# pip2 install *.whl
```
> libpng12-0
```
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

### Compile example on Linux

```
cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildUnix.cmake
```

### Compile example on HTML5 platform / browser / WASM

```
cmake -DBUILD_TYPE="Debug" -DCLEAN_BUILD=OFF -P tools/buildWeb.cmake
```

### Run example on HTML5 platform / browser / WASM (needs '--emrun' cxx flag)

```
cmake -DRUN_APP=ON -DBUILD_APP=OFF -P tools/buildWeb.cmake
```

> see http://webassemblycode.com/using-browsers-debug-webassembly/

To run your applications, while not strictly necessary, it's recommended to host on a server that can serve files with the <a href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types">mime type</a> <code>application/wasm</code>

## NOTE: Use latest chromium!

1 parent 9178b0a commit 2d57e5b8afc6d01b344a8d95d3470d46b35845c5 deskop-pwa: Try to reinstall placeholders on startup
Tue Apr 16 07:10:46 2019

```
TODO
from commit 07bf855b4db90ee18e4cf3452bcbc0b4f80256e5
05/13/2019 12:28 PM
Worker: Clear ResourceTimingNotifier on WorkerFetchContext::Detach()
Bug: 959508, 960626
Change-Id: I2663e5acddec0d9f88a78842c093c594fb57acb8
Reviewed-on: https://chromium-review.googlesource.com/c/chromium/src/+/1609024
Commit-Queue: Hiroki Nakagawa <nhiroki@chromium.org>
Reviewed-by: Kenichi Ishibashi <bashi@chromium.org>
Reviewed-by: Yutaka Hirano <yhirano@chromium.org>
Cr-Commit-Position: refs/heads/master@{#658989}
```

READ
> https://github.com/chromium/chromium/blob/master/docs/linux_cast_build_instructions.md
> https://chromium.googlesource.com/chromium/src/+/master/docs/linux_build_instructions.md

```
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
# clone OR
# mkdir depot_tools ; cd depot_tools
# curl -O https://storage.googleapis.com/chrome-infra/depot_tools.zip
# cmake -E tar xf "depot_tools.zip" --format=zip
# rm depot_tools.zip
# cd ..
export PATH=$PATH:`pwd`/depot_tools
mkdir ~/chromium
cd ~/chromium
#git fetch chromium
git clone https://chromium.googlesource.com/chromium/src.git
#fetch chromium
# You can find the latest and stable version info of Chromium from this page: https://www.chromium.org/developers/calendar
#git fetch +refs/tags/74.0.3729.169:chromium_74.0.3729.169
gclient sync --with_branch_heads --with_tags --jobs 12
git fetch --tags
# known versions can be seen with 'git show-ref --tags'
#git checkout -b branch_$BRANCH branch-heads/$BRANCH
git checkout -b tags/74.0.3729.169
gclient sync --with_branch_heads --with_tags
#fetch --nohooks --no-history chromium
#gclient sync -R --nohooks --with_branch_heads --jobs 16
#gclient sync -r 2d57e5b8afc6d01b344a8d95d3470d46b35845c5
cd src
build/install-build-deps.sh
gclient runhooks
```

## NOTE: Use latest skia!

Commit: Update SKP version

Automatic commit by the RecreateSKPs bot.

TBR=rmistry@google.com
NO_MERGE_BUILDS

Change-Id: Ic0a9fe4225fca395f1b72f450f3efd18199094b5
Reviewed-on: https://skia-review.googlesource.com/c/skia/+/213360
Reviewed-by: <skia-recreate-skps@skia-swarming-bots.iam.gserviceaccount.com>
Commit-Queue: <skia-recreate-skps@skia-swarming-bots.iam.gserviceaccount.com>

## NOTE: need emcc version > 1.38.21

> see https://emscripten.org/docs/getting_started/downloads.html#updating-the-sdk

```
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
## NOTE (If need support of pthreads in wasm)
enable use of OffscreenCanvas with pthreads.

Calling emscripten_transfer_canvas() will make the next created pthread receive the canvas from the main browser thread, and this new thread will be able to issue GL commands directly.

Canvas has to be transferred after the worker is created, but before it started running C++ code (because then it can no longer receive regular JS worker messages), and so the transfer is done in _spawn_thread function.

## NOTE: If for some reason you must absolutely store your content on another server, you&#39;ll need to ensure that that server is set up to accept CORS requests

## NOTE: Web Workers
Web workers can essentially be thought of as the threads of the web. That being said though there are some limitations to what you can do in a Web Worker.
You cannot pass complex types to a thread, only standard Javascript types. When it comes to C++, you can only pass a <code>char*</code> and a <code>void*</code></li><li>You will not have access to the DOM.

enable SharedArrayBuffer and WebWorkers/threads in browser flags, see https://caniuse.com/#search=SharedArrayBuffer

May need Cross-Origin header browser.tabs.remote.useCrossOriginPolicy to allow SharedArrayBuffer to work, see https://developer.mozilla.org/en-US/docs/Mozilla/Firefox/Experimental_features

see chrome://flags/#enable-webassembly-threads "WebAssembly threads support" and chrome://flags/#shared-array-buffer "Experimental enabled SharedArrayBuffer support in JavaScript."
see Firefox about:config "javascript.options.shared_memory"
see https://github.com/hostilefork/replpad-js/wiki/Enable-WASM-Threads

also see PTHREAD_POOL_SIZE

## NOTE: Offscreen canvas (WEBGL2)
https://developers.google.com/web/updates/2018/08/offscreen-canvas
you can render your graphics off the main thread with OffscreenCanvas!

Chrome: OffscreenCanvas is available without a flag in Chrome 69. see chrome:flags
Firefox: Firefox 44. see gfx.offscreencanvas.enabled in about:config.

In order to be able to set explicitSwapControl==true, support for it must explicitly be enabled either 1) via adding the -s OFFSCREEN_FRAMEBUFFER=1 Emscripten linker flag, and enabling renderViaOffscreenBackBuffer==1, or 2) via adding the the linker flag -s OFFSCREENCANVAS_SUPPORT=1, and running in a browser that supports OffscreenCanvas. see https://emscripten.org/docs/api_reference/html5.h.html?highlight=emscripten_webgl_create_context#c.EmscriptenWebGLContextAttributes

If rendering is performed on an offscreen thread, pass the ID of the canvas to emscripten_pthread_attr_settransferredcanvases()

see https://github.com/emscripten-core/emscripten/issues/5437

## How to generate files based on *.mojo
> read https://github.com/chromium/chromium/blob/master/third_party/blink/public/mojom/BUILD.gn#L15
> get depot_tools (see above)
> go to original chromium repo
> sudo apt-get install file
> see https://chromium.googlesource.com/chromium/src/+/master/build/install-build-deps.sh#147
> sudo -E build/install-build-deps.sh --no-arm
> Follow "Get the code" https://chromium.googlesource.com/chromium/src/+/master/docs/linux_build_instructions.md#get-the-code
> gn gen out/Default
> get mojo cpp targets:
gn ls out/Default | grep mojo | grep cpp
> read
* https://chromium.googlesource.com/chromium/src/+/master/mojo/public/tools/bindings/README.md
* https://chromium.googlesource.com/chromium/src.git/+/51.0.2704.48/docs/mojo_in_chromium.md
* https://chromium.googlesource.com/chromium/src/+/master/mojo/public/cpp/bindings/README.md
* https://chromium.googlesource.com/chromium/src/+/HEAD/docs/mojo_ipc_conversion.md
* https://www.chromium.org/developers/design-documents/inter-process-communication
> Build mojom based on desired dir:
autoninja -C out/Default/ services/network/public/mojom services/network/public/mojom:websocket_mojom services/network/public/mojom:mutable_network_traffic_annotation_interface services/network/public/mojom:mojom_shared services/network/public/mojom:mojom_ip_address services/network/public/mojom:mojom_headers services/network/public/mojom:mojom_blink services/network/public/mojom:data_pipe_interfaces
...
services/network/public/cpp
services/network/public/mojom
services/network/public/mojom:websocket_mojom
services/network/public/mojom:mutable_network_traffic_annotation_interface
services/network/public/mojom:mojom_shared
services/network/public/mojom:mojom_ip_address
services/network/public/mojom:mojom_headers
services/network/public/mojom:mojom_blink
services/network/public/mojom:data_pipe_interfaces
mojo/public/interfaces/bindings
mojo/public/cpp/base
mojo/public/cpp/bindings
mojo/public/cpp/platform
mojo/public/cpp/system
mojo/public/mojom/base
mojo/public:sdk
mojo/public:public
ui/base/accelerators
ui/base
ui/display
ui/events
ui/gfx/geometry
ui/gfx/image
ui/gfx/mojo
ui/gfx/range/mojo
ui/latency
services/viz/public
third_party/blink/public:all_blink
third_party/blink/public:blink
third_party/blink/public:blink_devtools_frontend_resources
third_party/blink/public:blink_devtools_frontend_resources_files
third_party/blink/public:blink_generate_devtools_grd
third_party/blink/public:blink_headers
third_party/blink/public:buildflags
third_party/blink/public:image_resources
third_party/blink/public:image_resources_grit
third_party/blink/public:resources
third_party/blink/public:resources_grit
third_party/blink/public:scaled_resources
third_party/blink/public:scaled_resources_100_percent
third_party/blink/public:scaled_resources_200_percent
third_party/blink/public/common:common
third_party/blink/public/common:headers
third_party/blink/public/mojom:embedded_frame_sink_mojo_bindings
third_party/blink/public/mojom:mojom_broadcastchannel_bindings
third_party/blink/public/mojom:mojom_core
third_party/blink/public/mojom:mojom_mhtml_load_result
third_party/blink/public/mojom:mojom_modules
third_party/blink/public/mojom:mojom_platform
third_party/blink/public/mojom:web_client_hints_types_mojo_bindings
third_party/blink/public/mojom:web_feature_mojo_bindings
chrome/browser/media
components/metrics
components/content_settings/core/common:mojo_bindings
services/metrics
services/tracing
url/mojom
...
> see out/Default/gen/services/network/public/mojom

## NOTE:
� webassembly compiling can be greatly sped up in chrome by enabling the #enable-webassembly-baseline setting from chrome:flags
� Streaming Instantiation: Combining Download and Instantiation https://pspdfkit.com/blog/2018/optimize-webassembly-startup-performance/
� Prefer WebIDL as bindings toolchain to embind https://github.com/emscripten-core/emscripten/issues/8476

## Cobalt

commit: aaf5d17afa24e6fba020b52139ab9cd80aeceea8

see https://cobalt.foo/development/setup-linux.html

git clone https://cobalt.googlesource.com/cobalt

# (choose from 'debug', 'devel', 'qa', 'gold')
cobalt/build/gyp_cobalt -C devel linux-x64x11
autoninja -C out/linux-x64x11_devel cobalt

## FOUND CHROMIUM BUGS

### Wrong memory alignment at WTF::ThreadSpecific<blink::ThreadState*>

1
Built with SAFE_HEAP=1. SAFE_HEAP=1 adds additional memory access checks, and will give clear errors for problems like dereferencing 0 and memory alignment issues.

NOTE: Generally it is best to avoid unaligned reads and writes

NOTE: Use emscripten_align* if not bug

See https://emscripten.org/docs/porting/Debugging.html#memory-alignment-issues

2 UnacceleratedStaticBitmapImage::Create 1
(index):1237 2 UnacceleratedStaticBitmapImage::Create 2
(index):1237 segmentation fault
(index):1246 segmentation fault
printErr @ (index):1246
skemgl.js:5924 Uncaught abort("segmentation fault") at Error
    at jsStackTrace (http://localhost:9090/home/avakimov_am/skia-opengl-emscripten/build-emscripten/skemgl.js:1275:13)
    at stackTrace (http://localhost:9090/home/avakimov_am/skia-opengl-emscripten/build-emscripten/skemgl.js:1292:12)
    at abort (http://localhost:9090/home/avakimov_am/skia-opengl-emscripten/build-emscripten/skemgl.js:16460:44)
    at segfault (http://localhost:9090/home/avakimov_am/skia-opengl-emscripten/build-emscripten/skemgl.js:600:3)
    at SAFE_HEAP_STORE_i32_4_4 (wasm-function[779174]:29)
    at WTF::ThreadSpecific<blink::ThreadState*>::operator blink::ThreadState**() [__ZN3WTF14ThreadSpecificIPN5blink11ThreadStateEEcvPS3_Ev] (wasm-function[3389]:134)
    at WTF::ThreadSpecific<blink::ThreadState*>::operator*() [__ZN3WTF14ThreadSpecificIPN5blink11ThreadStateEEdeEv] (wasm-function[3388]:3)
    at blink::ThreadState::Current() [__ZN5blink11ThreadState7CurrentEv] (wasm-function[3387]:11)
    at blink::PersistentBase<blink::ImageObserver, (blink::WeaknessPersistentConfiguration)1, (blink::CrossThreadnessPersistentConfiguration)0>::SaveCreationThreadHeap() [__ZN5blink14PersistentBaseINS_13ImageObserverELNS_31WeaknessPersistentConfigurationE1ELNS_38CrossThreadnessPersistentConfigurationE0EE22SaveCreationThreadHeapEv] (wasm-function[3396]:48)
    at blink::PersistentBase<blink::ImageObserver, (blink::WeaknessPersistentConfiguration)1, (blink::CrossThreadnessPersistentConfiguration)0>::PersistentBase(blink::ImageObserver*) [__ZN5blink14PersistentBaseINS_13ImageObserverELNS_31WeaknessPersistentConfigurationE1ELNS_38CrossThreadnessPersistentConfigurationE0EEC2EPS1_] (wasm-function[3395]:21)

3
Thread 1 "skemgl" received signal SIGSEGV, Segmentation fault.
0x00000000008a5783 in GLES2Disable (cap=2929)
    at /home/denis/workspace/skia-opengl-emscripten/src/chromium/gpu/command_buffer/client/gles2_c_lib_autogen.h:287
287       gles2::GetGLContext()->Disable(cap);
(gdb) bt
#0  0x00000000008a5783 in GLES2Disable (cap=2929)
    at /home/denis/workspace/skia-opengl-emscripten/src/chromium/gpu/command_buffer/client/gles2_c_lib_autogen.h:287
#1  0x000000000041924e in main (argc=1, argv=0x7fffffffd3a8) at /home/denis/workspace/skia-opengl-emscripten/src/main.cpp:2415
(gdb)

4
 shared:WARNING: loading from archive wait_set.cc.o, which has duplicate
  entries (files with identical base names).  this is dangerous as only the
  last will be taken into account, and you may see surprising undefined
  symbols later.  you should rename source files to avoid this problem (or
  avoid .a archives, and just link bitcode together to form libraries for
  later linking)

  shared:WARNING: duplicate: buffer.cc.o


MISC
> https://www.ekioh.com/devblog/gpu-filling-vector-paths/
> wasm instantiation failed! CompileError: WebAssembly.compile(): functions count of 1144080 exceeds internal limit of 1000000 @+20832
  CompileError: wasm validation error: at offset 21646: too many functions
  http://qtandeverything.blogspot.com/2017/11/qt-for-webassembly-update.html
  https://github.com/AvaloniaUI/Avalonia/issues/1387#issuecomment-389758464
  WebAssembly.instantiateStreaming https://hacks.mozilla.org/2018/01/making-webassembly-even-faster-firefoxs-new-streaming-and-tiering-compiler/
> https://github.com/v8/v8/blob/master/src/wasm/wasm-limits.h
> bin/gn gen out/config --ide=json --json-ide-script=../../gn/gn_to_cmake.py
> WASM tests https://chromium.googlesource.com/external/github.com/WebAssembly/waterfall/

TODO
> Chrome only:
Init WTF ...
RangeError: Array buffer allocation failed

Array buffer allocation failed usually happens due to memory exhausted. https://github.com/webtorrent/webtorrent/issues/895
https://answers.unity.com/questions/1203559/memory-settings-for-webgl-content-array-buffer-all.html
https://www.reddit.com/r/Unity3D/comments/4ochm9/memory_settings_for_webgl_content_array_buffer/

> upload_unicode_char_to_texture
  https://github.com/juj/tiny_chess/blob/master/src/library_unicode.js

> emscripten_async_wget2
  https://github.com/openframeworks/openFrameworks/blob/master/addons/ofxEmscripten/src/ofxEmscriptenURLFileLoader.cpp#L41

> smaller icu data file
Filtering by Language Only
see https://github.com/unicode-org/icu/blob/master/docs/userguide/icu_data/buildtool.md#filtering-by-language-only
see http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
see http://userguide.icu-project.org/icudata
see https://qiita.com/shimacpyon/items/82d275c2f5f508cbd7f4

> MCLocaleBreakIteratorCreate
https://github.com/livecode/livecode/blob/a6591613dd3d7704ae1d0ff479584d7d1b7d4349/engine/src/paragraf.cpp


## How to compress .wasm files

Install https://github.com/WebAssembly/wabt#cloning

```
sudo -E apt update
cd ~/
# OPTIONAL: install deps sudo -E apt install -y cmake make clang git python
GIT_SSL_NO_VERIFY=true git clone https://github.com/WebAssembly/wabt.git
# OR same as git clone
# wget --no-check-certificate https://github.com/WebAssembly/wabt/archive/master.zip
# unzip -x master.zip -d ~/wabt
# rm master.zip ; cd ~/wabt/wabt-master/
cd ~/wabt
git submodule update --init --recursive
mkdir build
cd build
cmake .. -DBUILD_TESTS=OFF
cmake --build . -- -j2
# test/run-tests.py
export PATH=$PWD:$PATH
```

```
cp ./bin/*.wasm ./bin/*.wasm.bak
wasm-strip bin/*.wasm
```

Install https://github.com/WebAssembly/binaryen#tools

```
sudo -E apt update
cd ~/
# OPTIONAL: install deps sudo -E apt install -y cmake make clang git python
GIT_SSL_NO_VERIFY=true git clone https://github.com/WebAssembly/wabt.git
# OR same as git clone
# wget --no-check-certificate https://github.com/WebAssembly/binaryen/archive/master.zip
# unzip -x master.zip -d ~/binaryen
# rm master.zip ; cd ~/binaryen/binaryen-master/
cd ~/binaryen
git submodule update --init --recursive
mkdir build
cd build
cmake ..
cmake --build . -- -j2
export PATH=$PWD/bin:$PATH
```

```
# wasm-opt from the Binaryen project, to optimise the binary
# NOTE: -O3 = best performance. -Oz = best size.
wasm-opt -O3 -o bin/*.wasm bin/*.wasm
```

# Compress.

If you serve large .wasm files, the webserver will consume CPU compressing them on the fly at each request. Instead you can pre-compress them to .wasm.gz and use content negotiation https://emscripten.org/docs/compiling/WebAssembly.html#web-server-setup

```
# sudo apt install gzip
gzip --best --stdout bin/*.wasm > bin/*.wasm.gz
# OR  Brotli, it is implemented by most browsers https://caniuse.com/#search=brotli
# about Brotli https://hacks.mozilla.org/2015/11/better-than-gzip-compression-with-brotli/
# sudo apt install brotli
brotli --best --stdout --lgwin=24 bin/*.wasm > bin/*.wasm.br
```

# Run server.
Need server with gzip support `Accept-Encoding: gz` or brotli support `Accept-Encoding: br`, see https://hacks.mozilla.org/2015/11/better-than-gzip-compression-with-brotli/

```
npm config set strict-ssl false
npm config set registry="http://registry.npmjs.org/"
git config --global url."https://".insteadOf git://
echo 'NODE_TLS_REJECT_UNAUTHORIZED=0' >> ~/.bashrc
echo "strict-ssl=false" >> ~/.npmrc
echo "registry=http://registry.npmjs.org/" > ~/.npmrc
# SET PROXY! CHANGE URL TO YOURS!
# npm config set proxy http://127.0.0.1:8088
# npm config set https-proxy http://127.0.0.1:8088
npm config get proxy
npm install
```

```
# optional
mv bin/*.wasm bin/*.wasm.old
# NOTE: express will send .wasm.gz instead of not-existing .wasm
```

```
npm run-script run
open localhost:3000/*.html
```
