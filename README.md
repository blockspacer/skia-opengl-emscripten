# NOTE

needs
> https://bugs.chromium.org/p/skia/issues/detail?id=9052&q=&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
> https://bugs.chromium.org/p/skia/issues/detail?id=8505&q=thread&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
> skia & pthreads support on wasm platform: bugged traces, skOnce, SetDefaultTrivialExecutor, e.t.c.
> FreeType thread safety https://bugs.chromium.org/p/skia/issues/detail?id=8997&q=thread&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified

# Features

> skia compiled to wasm (emscripten)
> skottie (Bodymovin animation / lottie)
> custom fonts
> uses SDL2 to create window
> uses CMake
> supports WebGL 2 / GLSL 300 es as there really isn`t a reason to support WebGL 1 at this point

## TODO
https://github.com/emscripten-core/emscripten/issues/5033

boost to wasm:
b2 --with-system --with-filesystem toolset=emscripten link=static

wasm to asm.js fallback

## PATCHES

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
search for OS_EMSCRIPTEN and __EMSCRIPTEN__ (all occurrences)

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
# see https://github.com/google/skia/blob/master/site/user/build.md
# see https://github.com/google/skia/blob/master/modules/pathkit/README.md
ls ${PWD}/thirdparty/depot_tools
export PATH="${PWD}/thirdparty/depot_tools:${PATH}"
cd thirdparty/skia
tools/git-sync-deps
# see https://github.com/google/skia/blob/master/src/sksl/README#L77
bin/fetch-clang-format
```

### Compile example on Linux

```
chmod a+x tools/build_linux.sh
sh tools/build_linux.sh
```

### Compile example on HTML5 platform / browser / WASM

```
chmod a+x tools/build_web.sh
sh tools/build_web.sh
```

### Run example on HTML5 platform / browser / WASM (needs '--emrun' cxx flag)

```
emrun build-emscripten/index.html
```

To run your applications, while not strictly necessary, it's recommended to host on a server that can serve files with the <a href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types">mime type</a> <code>application/wasm</code>

## NOTE: Use latest chromium!

1 parent 9178b0a commit 2d57e5b8afc6d01b344a8d95d3470d46b35845c5 deskop-pwa: Try to reinstall placeholders on startup

AVOID OUTDATED REPO https://chromium.googlesource.com/chromium/

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
fetch --nohooks --no-history chromium
gclient sync
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

see chrome://flags "WebAssembly threads support"

also see PTHREAD_POOL_SIZE

## NOTE: Offscreen canvas
https://developers.google.com/web/updates/2018/08/offscreen-canvas
you can render your graphics off the main thread with OffscreenCanvas!

Chrome: OffscreenCanvas is available without a flag in Chrome 69. see chrome:flags
Firefox: Firefox 44. see gfx.offscreencanvas.enabled in about:config.

In order to be able to set explicitSwapControl==true, support for it must explicitly be enabled either 1) via adding the -s OFFSCREEN_FRAMEBUFFER=1 Emscripten linker flag, and enabling renderViaOffscreenBackBuffer==1, or 2) via adding the the linker flag -s OFFSCREENCANVAS_SUPPORT=1, and running in a browser that supports OffscreenCanvas. see https://emscripten.org/docs/api_reference/html5.h.html?highlight=emscripten_webgl_create_context#c.EmscriptenWebGLContextAttributes

If rendering is performed on an offscreen thread, pass the ID of the canvas to emscripten_pthread_attr_settransferredcanvases()

see https://github.com/emscripten-core/emscripten/issues/5437

## NOTE:
› webassembly compiling can be greatly sped up in chrome by enabling the #enable-webassembly-baseline setting from chrome:flags
› Streaming Instantiation: Combining Download and Instantiation https://pspdfkit.com/blog/2018/optimize-webassembly-startup-performance/
› Prefer WebIDL as bindings toolchain to embind https://github.com/emscripten-core/emscripten/issues/8476

