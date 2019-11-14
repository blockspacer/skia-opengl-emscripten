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


## How to generate files based on *.mojo

- read https://github.com/chromium/chromium/blob/master/third_party/blink/public/mojom/BUILD.gn#L15
- get depot_tools (see above)
- go to original chromium repo
- sudo apt-get install file
- see https://chromium.googlesource.com/chromium/src/+/master/build/install-build-deps.sh#147
- sudo -E build/install-build-deps.sh --no-arm
- Follow "Get the code" https://chromium.googlesource.com/chromium/src/+/master/docs/linux_build_instructions.md#get-the-code
- gn gen out/Default
- get mojo cpp targets:

```bash
gn ls out/Default | grep mojo | grep cpp
```

- read

* https://chromium.googlesource.com/chromium/src/+/master/mojo/public/tools/bindings/README.md
* https://chromium.googlesource.com/chromium/src.git/+/51.0.2704.48/docs/mojo_in_chromium.md
* https://chromium.googlesource.com/chromium/src/+/master/mojo/public/cpp/bindings/README.md
* https://chromium.googlesource.com/chromium/src/+/HEAD/docs/mojo_ipc_conversion.md
* https://www.chromium.org/developers/design-documents/inter-process-communication

- Build mojom based on desired dir:

```bash
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
```

- see out/Default/gen/services/network/public/mojom

## NOTE

- webassembly compiling can be greatly sped up in chrome by enabling the #enable-webassembly-baseline setting from chrome:flags
- Streaming Instantiation: Combining Download and Instantiation https://pspdfkit.com/blog/2018/optimize-webassembly-startup-performance/
- Prefer WebIDL as bindings toolchain to embind https://github.com/emscripten-core/emscripten/issues/8476

## How to update `Chromium`

1 parent 9178b0a commit 2d57e5b8afc6d01b344a8d95d3470d46b35845c5 deskop-pwa: Try to reinstall placeholders on startup
Tue Apr 16 07:10:46 2019

```bash
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

- https://github.com/chromium/chromium/blob/master/docs/linux_cast_build_instructions.md
- https://chromium.googlesource.com/chromium/src/+/master/docs/linux_build_instructions.md

```bash
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

## NOTE: Use latest skia

```bash
Commit: Update SKP version

Automatic commit by the RecreateSKPs bot.

TBR=rmistry@google.com
NO_MERGE_BUILDS

Change-Id: Ic0a9fe4225fca395f1b72f450f3efd18199094b5
Reviewed-on: https://skia-review.googlesource.com/c/skia/+/213360
Reviewed-by: <skia-recreate-skps@skia-swarming-bots.iam.gserviceaccount.com>
Commit-Queue: <skia-recreate-skps@skia-swarming-bots.iam.gserviceaccount.com>
```

## How to update `Cobalt`

see https://cobalt.foo/development/setup-linux.html

```bash
git clone https://cobalt.googlesource.com/cobalt
# (used cab7770533804d582eaa66c713a1582f361182d3)
```

## (choose from 'debug', 'devel', 'qa', 'gold')

```bash
sudo apt-get install bison build-essential coreutils git gperf \
       libasound2-dev libavformat-dev libavresample-dev \
       libdirectfb-dev libdirectfb-extra libpulse-dev \
       libgl1-mesa-dev libgles2-mesa-dev libvpx-dev libx11-dev \
       libxcomposite-dev libxcomposite1 libxrender-dev libxrender1 \
       libxpm-dev m4 python ruby tar xserver-xephyr xz-utils yasm
sudo apt-get install libstdc++-4.8-dev
export PATH=${PATH}:/path/to/depot_tools
cobalt/build/gyp_cobalt -C devel linux-x64x11
autoninja -C out/linux-x64x11_devel cobalt
see folder out/linux-x64x11_devel/gen/
```

Don`t forget to replace generated files.

## FOUND CHROMIUM BUGS

```bash
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
```

MISC

- https://www.ekioh.com/devblog/gpu-filling-vector-paths/
- wasm instantiation failed! CompileError: WebAssembly.compile(): functions count of 1144080 exceeds internal limit of 1000000 @+20832
  CompileError: wasm validation error: at offset 21646: too many functions
  http://qtandeverything.blogspot.com/2017/11/qt-for-webassembly-update.html
  https://github.com/AvaloniaUI/Avalonia/issues/1387#issuecomment-389758464
  WebAssembly.instantiateStreaming https://hacks.mozilla.org/2018/01/making-webassembly-even-faster-firefoxs-new-streaming-and-tiering-compiler/
- https://github.com/v8/v8/blob/master/src/wasm/wasm-limits.h
- bin/gn gen out/config --ide=json --json-ide-script=../../gn/gn_to_cmake.py
- WASM tests https://chromium.googlesource.com/external/github.com/WebAssembly/waterfall/

TODO

- Fix WASM ST animations
NOTE: we can use WASM MT only when all browsers enable Shared Array Buffer https://caniuse.com/#search=worker
see: https://blog.qt.io/blog/2019/06/26/qt-webassembly-multithreading/
- Chrome only:
Init WTF ...
RangeError: Array buffer allocation failed

Array buffer allocation failed usually happens due to memory exhausted. https://github.com/webtorrent/webtorrent/issues/895
https://answers.unity.com/questions/1203559/memory-settings-for-webgl-content-array-buffer-all.html
https://www.reddit.com/r/Unity3D/comments/4ochm9/memory_settings_for_webgl_content_array_buffer/

- upload_unicode_char_to_texture
  https://github.com/juj/tiny_chess/blob/master/src/library_unicode.js

- emscripten_async_wget2
  https://github.com/openframeworks/openFrameworks/blob/master/addons/ofxEmscripten/src/ofxEmscriptenURLFileLoader.cpp#L41

- MCLocaleBreakIteratorCreate
https://github.com/livecode/livecode/blob/a6591613dd3d7704ae1d0ff479584d7d1b7d4349/engine/src/paragraf.cpp

# TODO: WASM: Switch to latest-upstream, not latest (check issues below)
llvm backend = latest-upstream
fastcomp = latest
```
emsdk install latest-upstream
```
- https://github.com/emscripten-core/emscripten/issues/8929#issuecomment-509594670
- https://github.com/emscripten-core/emscripten/issues/8789

# TODO: support offscreencanvas
- https://github.com/emscripten-core/emscripten/issues/8903
- https://github.com/emscripten-core/emscripten/issues/8852

# TODO: can use SKIA only from one thread on WASM MT
NOTE: disabled rasterizer thread (!!!) due to deadlocks on WASM MT
(to reproduce bug - move mouse frequently over objects that are animated on hover)
NOTE: related to locks in SkScalerContext_FreeType::generateImage
see 'TODO' file in commit 0e4faf to reproduce
ENABLE_RASTERIZER_THREAD=1
