## Performance tracing with chromium

TODO: measure performance

## Memory usage

TODO: measure memory usage

## Community

TODO: Setup Slack notifications

## Docs

TODO: Create docs

## Tutorials

TODO: Create tutorials

## UI Dev-tools

TODO

## UI hot-reload and UI state serialisation

TODO

## Samples

TODO: see src/main.cpp, src/extended_html/input_box/HTMLInputElement.cc and src/skia_ui_demo.cc

## SDK installer

TODO

## Project management tool

TODO: tool to configure cmake flags and ICU languages

## Linking to the pre-built Library

TODO: setup CI to release pre-built Library

TODO: Linking on MSVC with `Linker ? General ? Additional Library Directories`

TODO: Linking on UNIX with `LDFLAGS`

TODO: Linking on macOS with `General ? Linked Frameworks and Libraries`

TODO: Using with CMake

TODO: Using with Godot/UE4/Unity

# build IWYU

```
sudo apt-get install zlib1g-dev
# NOTE: change IWYU_LLVM_ROOT_PATH in build_iwyu_submodule.sh
bash tools/build_iwyu_submodule.sh
# check IWYU version
submodules/build-iwyu/include-what-you-use -v
```

IWYU usage:
```
# build with -DENABLE_IWYU=1 in CMake options, replace CC and CXX below:
CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0" \
  cmake -DRUN_APP=OFF -DBUILD_APP=ON \
    -DEXTRA_EMMAKE_OPTS="-j;6" \
    -DBUILD_TYPE="Debug" \
    -DCLEAN_BUILD=OFF \
    -DENABLE_CMAKE_CLEAN_FIRST=OFF \
    -DBUILD_DIR=$(pwd)/build-linux-deb/ \
    -DEXTRA_CMAKE_OPTS="-DENABLE_IWYU=1;-DUSE_ICU=FALSE;-DENABLE_GLIBXML=FALSE;-DENABLE_HARFBUZZ=FALSE;-DFORCE_DISABLE_SK_GPU=FALSE;-DENABLE_LIBWEBP=FALSE;-DENABLE_BLINK=FALSE;-DENABLE_COBALT=FALSE;-DENABLE_WTF=FALSE;-DDISABLE_FORMATTING=TRUE;-DENABLE_SKIA=FALSE;-DENABLE_SKSG=FALSE;-DENABLE_SKSHAPER=FALSE;-DENABLE_SKIA_UTILS=FALSE;-DENABLE_SKOTTIE=FALSE;-DFORCE_DISABLE_SK_GPU=FALSE" \
    -P tools/buildUnix.cmake
```

NOTE: For Clang on Windows read https://metricpanda.com/rival-fortress-update-27-compiling-with-clang-on-windows

NOTE: Don't use "bits/" or "/details/*" includes, add them to IWYU mappings file (.imp)

Read:
 - https://llvm.org/devmtg/2010-11/Silverstein-IncludeWhatYouUse.pdf
 - https://github.com/include-what-you-use/include-what-you-use/tree/master/docs
 - https://github.com/hdclark/Ygor/blob/master/artifacts/20180225_include-what-you-use/iwyu_how-to.txt

## IWYU (requires clang and built IWYU!)

```bash
rm -rf ~/job/beast-example/build
mkdir ~/job/beast-example/build
cd ~/job/beast-example/build
cmake.sdk .. -Udebug -DENABLE_IWYU=ON -DIWYU_LLVM_ROOT_PATH=/usr/lib/llvm-6.0 -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
# -DCMAKE_C_COMPILER_WORKS=1 -DCMAKE_CXX_COMPILER_WORKS=1 -DCMAKE_C_COMPILER=clang-6.0 -DCMAKE_CXX_COMPILER=clang++-6.0
CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0" cmake --build . --clean-first
```

## clang 6
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

# must print 6 version:
clang --version
clang++ --version
/usr/bin/ld.lld-6.0 --version

# OPTIONAL:
# Hack if you want to replace the default linker
# cp /usr/bin/ld /usr/bin/ld.backup
# sudo ln -sf /usr/bin/ld.lld-6.0 /usr/bin/ld
# /usr/bin/ld --version

# LLD 6.0.1 (compatible with GNU linkers)

# OPTIONAL update-alternatives:
sudo -E update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-6.0 1000
sudo -E update-alternatives --install /usr/bin/clang clang /usr/bin/clang-6.0 1000
sudo -E update-alternatives --config clang
sudo -E update-alternatives --config clang++

## TODO: aura

```bash
native_theme_base.h - void PaintCheckbox(cc::PaintCanvas* canvas

ui::NativeTheme::GetInstanceForNativeUi()

void NativeWidgetAura::OnPaint(const ui::PaintContext& context) {
  delegate_->OnNativeWidgetPaint(context);

#if defined(USE_AURA)
  using DesktopWindowTreeHostFactory =
}
```

# NOTE/NEED

todos
- https://cobalt.googlesource.com/cobalt
- license If this is based off of Chromium it may be required to be Open-Source. Unless the LGPL parts are dynamically linked, you must share the statically linked source just like with the GPL.
- support godot, android, win e.t.c.
- https://www.chromium.org/developers/design-documents/chromeviews
  https://github.com/chromium/chromium/blob/master/ui/views/examples/scroll_view_example.cc

needs
- https://bugs.chromium.org/p/skia/issues/detail?id=9052&q=&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
- https://bugs.chromium.org/p/skia/issues/detail?id=8505&q=thread&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
- skia & pthreads support on wasm platform: bugged traces, skOnce, SetDefaultTrivialExecutor, e.t.c.
- FreeType thread safety https://bugs.chromium.org/p/skia/issues/detail?id=8997&q=thread&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
- delayed tasks without pthread support & wait on condition variable
- use CMakeLists for skia build
  https://github.com/skui-org/skia/blob/m74/CMakeLists.txt
  https://github.com/Tarnyko/chromium-lite/blob/master/05b-skia/CMakeLists.txt

notes
- if you want good performance - set RELEASE_BUILD to TRUE in CMakeLists.txt and set -DCMAKE_BUILD_TYPE=Release. Or even better - use scripts from tools directory with right arguments.
- no embedded js engine, prefer C++/wasm
- May break compatibility to the web (move beyond the web). Web pays enormous penalties for compatibility with 30-year-old web pages. See https://softwareengineeringdaily.com/wp-content/uploads/2018/06/SED625-Flutter.pdf
- Don't load files from ptreads: may cause deadlock on wasm! See https://github.com/emscripten-core/emscripten/issues/3495


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
- https://github.com/HumbleNet/HumbleNet/blob/master/src/humblenet/src/libwebrtc_asmjs.cpp

RasterCache
https://github.com/flutter/engine/blob/master/flow/raster_cache.cc

## PATCHES

TODO
- https://nithinbekal.com/posts/git-patch/
- https://reactnative-tricks.com/how-to-create-and-apply-patches-in-git-using-diff-and-apply-command/
- https://github.com/search?q=git+%22patch%22+%22apply%22+%22execute_process%22+language%3ACMake&type=Code

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

## TODO

- port base/debug folder to wasm and remove some "if !defined(OS_EMSCRIPTEN)"

- Test linux & windows support

- Shrink skia size
see https://github.com/skui-org/skia/blob/m74/CMakeLists.txt
https://github.com/google/skia/blob/master/BUILD.gn#L1085
https://github.com/google/skia/blob/master/gn/core.gni#L100

only skia without gpu & skottie & icu & harfbuzz & jpeg & wuffs: 1.9M

- New renderer (blink)
https://zhuanlan.zhihu.com/p/63318397
http://www.html5dw.com/post/4518
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/box_painter.cc#L109
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/box_border_painter.cc#L831
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/block_painter.cc#L230
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/inline_box_painter_base.cc#L16
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/core/paint/box_painter_base.cc#L156
https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/graphics/graphics_context.cc
https://github.com/chromium/chromium/blob/master/cc/paint/skia_paint_canvas.cc

- Webkit
https://github.com/keishi/webkit/blob/master/Source/WebCore/platform/graphics/skia/PlatformContextSkia.h#L68

