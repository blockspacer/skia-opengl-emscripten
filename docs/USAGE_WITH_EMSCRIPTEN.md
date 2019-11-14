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
