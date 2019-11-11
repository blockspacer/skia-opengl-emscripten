# About

That guide supposes that you already built your app for browser.

## NOTE (If need support of pthreads in wasm)

enable use of OffscreenCanvas with pthreads.

Calling emscripten_transfer_canvas() will make the next created pthread receive the canvas from the main browser thread, and this new thread will be able to issue GL commands directly.

Canvas has to be transferred after the worker is created, but before it started running C++ code (because then it can no longer receive regular JS worker messages), and so the transfer is done in _spawn_thread function.

## NOTE: If for some reason you must absolutely store your content on another server, you&#39;ll need to ensure that that server is set up to accept CORS requests

## NOTE: Web Workers

Web workers can essentially be thought of as the threads of the web. That being said though there are some limitations to what you can do in a Web Worker.

You cannot pass complex types to a thread, only standard Javascript types. When it comes to C++, you can only pass a <code>char*</code- and a <code>void*</code></li><li>You will not have access to the DOM.

enable SharedArrayBuffer and WebWorkers/threads in browser flags, see https://caniuse.com/#search=SharedArrayBuffer

May need Cross-Origin header browser.tabs.remote.useCrossOriginPolicy to allow SharedArrayBuffer to work, see https://developer.mozilla.org/en-US/docs/Mozilla/Firefox/Experimental_features

- see chrome://flags/#enable-webassembly-threads "WebAssembly threads support" and chrome://flags/#shared-array-buffer "Experimental enabled SharedArrayBuffer support in JavaScript."
- see Firefox about:config "javascript.options.shared_memory"
- see https://github.com/hostilefork/replpad-js/wiki/Enable-WASM-Threads
- also see PTHREAD_POOL_SIZE

## NOTE: Offscreen canvas (WEBGL2)

https://developers.google.com/web/updates/2018/08/offscreen-canvas

you can render your graphics off the main thread with OffscreenCanvas!

Chrome: OffscreenCanvas is available without a flag in Chrome 69. see chrome:flags

Firefox: Firefox 44. see gfx.offscreencanvas.enabled in about:config.

In order to be able to set explicitSwapControl==true, support for it must explicitly be enabled either 1) via adding the -s OFFSCREEN_FRAMEBUFFER=1 Emscripten linker flag, and enabling renderViaOffscreenBackBuffer==1, or 2) via adding the the linker flag -s OFFSCREENCANVAS_SUPPORT=1, and running in a browser that supports OffscreenCanvas. see https://emscripten.org/docs/api_reference/html5.h.html?highlight=emscripten_webgl_create_context#c.EmscriptenWebGLContextAttributes

If rendering is performed on an offscreen thread, pass the ID of the canvas to emscripten_pthread_attr_settransferredcanvases()

see https://github.com/emscripten-core/emscripten/issues/5437

## How to compress .wasm files

Install https://github.com/WebAssembly/wabt#cloning

```bash
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

```bash
cp ./bin/*.wasm ./bin/*.wasm.bak
wasm-strip bin/*.wasm
```

Install https://github.com/WebAssembly/binaryen#tools

```bash
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

```bash
# wasm-opt from the Binaryen project, to optimise the binary
# NOTE: -O3 = best performance. -Oz = best size.
wasm-opt -O3 -o bin/*.wasm bin/*.wasm
```

## Compress

If you serve large .wasm files, the webserver will consume CPU compressing them on the fly at each request. Instead you can pre-compress them to .wasm.gz and use content negotiation https://emscripten.org/docs/compiling/WebAssembly.html#web-server-setup

```bash
# sudo apt install gzip
gzip --best --stdout bin/*.wasm - bin/*.wasm.gz
# OR  Brotli, it is implemented by most browsers https://caniuse.com/#search=brotli
# about Brotli https://hacks.mozilla.org/2015/11/better-than-gzip-compression-with-brotli/
# sudo apt install brotli
brotli --best --stdout --lgwin=24 bin/*.wasm - bin/*.wasm.br
```

## Run server

Need server with gzip support `Accept-Encoding: gz` or brotli support `Accept-Encoding: br`, see https://hacks.mozilla.org/2015/11/better-than-gzip-compression-with-brotli/

```bash
npm config set strict-ssl false
npm config set registry="http://registry.npmjs.org/"
git config --global url."https://".insteadOf git://
echo 'NODE_TLS_REJECT_UNAUTHORIZED=0' >- ~/.bashrc
echo "strict-ssl=false" >- ~/.npmrc
echo "registry=http://registry.npmjs.org/" - ~/.npmrc
# SET PROXY! CHANGE URL TO YOURS!
# npm config set proxy http://127.0.0.1:8088
# npm config set https-proxy http://127.0.0.1:8088
npm config get proxy
npm install
```

```bash
# optional
mv bin/*.wasm bin/*.wasm.old
# NOTE: express will send .wasm.gz instead of not-existing .wasm
```

```bash
npm run-script run
open localhost:3000/*.html
```

## How to profile code size

nm -CSr --size-sort "build-linux-rel/skemgl" | head -50

- Bloaty McBloatface: a size profiler for ELF/Mach-O binaries
https://github.com/google/bloaty
- Sizer: Win32/64 executable size report utility
https://github.com/aras-p/sizer
- SymbolSort: measuring C++ code bloat in Windows binaries
https://github.com/adrianstone55/SymbolSort
- twiggy: call graph analyzer (wasm only, no ELF/Mach-O/PE/COFF yet)
https://github.com/rustwasm/twiggy
- nm - Unix tool to inspect the symbol table of binaries
nm --print-size --size-sort --demangle --radix=d YOUR_BINARY
- dumpbin: Microsoft COFF Binary File Dumper
- common culprit: templates (because length of names matters!!!)
demangling: undname.exe / c++filt / https://demangler.com

## Can web worker be killed off by browser silently

Yes, see

- https://stackoverflow.com/a/38976243

## Can web worker be garbage collected or drop queued messages

Yes, see

- https://stackoverflow.com/q/37099465

## Can web worker performance sharply decline

Yes, see

- https://stackoverflow.com/questions/24708649/why-does-web-worker-performance-sharply-decline-after-30-seconds#comment78838143_24717408

## Cobalt has no support for CSS `float`, use flexbox or `display: inline-block` with vertical-align

NOTE: for "float: right" effect apply "text-align: right" to parent div.

see about `flexbox`:
- https://www.freecodecamp.org/news/the-ultimate-guide-to-flexbox-learning-through-examples-8c90248d4676/

see about `display: inline-block`:
- https://iamsteve.me/blog/entry/inline_block
- https://alligator.io/css/display-inline-vs-inline-block/
- https://stackoverflow.com/a/15177860
- https://stackoverflow.com/a/48244299

## Use Bloaty: a size profiler for binaries (Supports WASM!)

```bash
sudo apt install protobuf-compiler
cd ~
git clone https://github.com/google/bloaty.git
cd bloaty/
git submodule update --init --recursive
mkdir build
cd build
cmake ..
cmake --build -- -j6
# -d symbols gives you a sorted list of the biggest size funcs
./bloaty -d sections,segments,symbols build-emscripten/*.wasm
```

## Use twiggy: code size profiler that supports WebAssembly as input

see https://rustwasm.github.io/book/reference/code-size.html#the-twiggy-code-size-profiler

```bash
sudo -E apt-get update
sudo -E apt install rustc cargo
# under proxy: see https://www.reddit.com/r/rust/comments/58o7yc/psa_having_trouble_updating_crates_from_the/
# To test installation:
# cargo --version
# cargo new hello --bin
# echo "fn main(){println!(\"Hello World\");}" - hello/src/main.rs
# cd hello
# cargo build
# cargo run
cargo install twiggy --verbose
twiggy --help
# see https://rustwasm.github.io/twiggy/usage/command-line-interface/top.html
twiggy top build-emscripten/*.wasm
```

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
