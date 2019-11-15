&nbsp;
<p align="center">
  <a href="https://github.com/blockspacer/skia-opengl-emscripten">
    <img src="logo/logo.svg" width="100px" alt="skg" />
  </a>
</p>
<h3 align="center">SKIA based C++ HTML/CSS UI</h3>
<p align="center">A fully open source, powerful solution for HTML/CSS UI. C++ HTML/CSS UI. Supports subset of HTML/CSS. Based on chromium/cobalt.foo without JavaScript overhead. Uses SKIA 2D graphics library. Can be used to build UI for cross-platform app or game. Can support browser as HTML5 web framework or WebGL UI renderer.</p>
<hr />

![](docs/img/demo1.gif)

## Features

- CSS animations from cobalt.foo
- CSS Flexbox from cobalt.foo
- Lottie animation format (skottie/Bodymovin animation) see https://skia.org/user/modules/skottie
- Modified cobalt.foo to support mouse events propagation with ScrollTop/ScrollLeft
- skia compiled to browser (emscripten WASM)
- made optional: video/audio support from cobalt.foo. You can use custom libs to add video/audio support.
- JS (V8) disabled. Use C++ for better speed and app size.
- cobalt.foo (chromium`s fork) ported to browser (WebGL2, emscripten, WASM).
  - updated cobalt.foo to new SKIA version
  - updated cobalt.foo to new chromium`s base version (removed `base` folder duplication)
  - added custom tags / controls (similar to React.js/Vue.js)
- (needs more testing) cobalt.foo ported to HTML5 tags (maps tags from cobalt to HTML5 tags). You can use that project to create websites or web frameworks.
- (needs more testing) renderer from cobalt.foo ported to Windows 10 x64
- chromium ui/views (widget based UI framework) from Blink ported to WASM (and other OS)
  - window & widgets code modified to use custom code for window creation.
  - see docs: https://chromium.googlesource.com/chromium/src/+/master/docs/ui/views/overview.md
  - see docs: https://www.chromium.org/developers/design-documents/chromeviews
- chromium `base` (libchrome) from Blink ported to WASM (and other OS)
  - supports threaded (MT) browser (emscripten WASM)
  - supports single-threaded (ST) browser (emscripten WASM)
  - see docs: https://emscripten.org/docs/porting/pthreads.html
  - see docs: https://www.chromium.org/chromium-os/packages/libchrome
- WTF (Web Template Framework) from Blink ported to WASM (and other OS)
  - see docs: https://github.com/endlessm/chromium-browser/tree/master/third_party/blink/renderer
- custom fonts
- unicode fonts and harfbuzz
- uses SDL2 to create window on Unix
- uses `emscripten.h` to handle window on browser (emscripten WASM)
- uses CMake (replaced chromium`s GN with CMake)
- supports WebGL 2 / GLSL 300 es as there really isn`t a reason to support WebGL 1 at this point
- supports WASM as there really isn`t a reason to support ASM.js at this point
  - see docs: https://emscripten.org/docs/compiling/WebAssembly.html?highlight=wasm
- Most features from cobalt.foo/chromium can be turned on/off via CMake options. Useful for platforms what require small resulting app size (browser WASM, mobile, etc.)

## Project status

In development

<img src="./docs/img/skull.png" width="400" height="400"/>

TODO: move .md file from [./docs/TODO.md](./docs/TODO.md)

# FAQ

- What is it?

Lightweight HTML/CSS rendering engine for apps, games and single-page web application (SPA)

Because SKIA is cross-platform, project can support wide range of platforms, including Linux, Windows, MacOS, Android, iOS, browser (WASM) and many more.

Tested platforms:
- Linux
- Browser with threading support (WASM MT). Prefer WASM MT because it is more stable.
- Browser without threading support (WASM ST)
- (needs more testing) Windows
- (needs more testing) Native HTML5/JS web framework (without SKIA / OpenGL / WebGL2)

IN-DEV / planned platforms:
- (planned) Android
- (planned) Renderer backend (without SKIA): OpenGL / WebGL2 / imgui / nanoVG
- (planned) Widgets/controls integration: imgui
- (planned) Widgets/controls integration: QT

It can be integrated into games or game engines using render-to-texture or SKIA `GrBackendRenderTarget`, real-time 3D applications, fullscreen applications, embedded applications and many more.

Contributions are welcome.

- WHY?

Inspired by:

- chromium
- WebAssembly
- hwui (see https://github.com/aosp-mirror/platform_frameworks_base/blob/master/libs/hwui/SkiaCanvas.cpp)
- https://github.com/google/flatui
- emscripten
- web workers
- ionic
- CoherentGT
- NoesisGUI
- WEBGL2
- flutter (see https://github.com/flutter/engine/blob/master/lib/ui/painting/canvas.cc)
- hummingbird
- Nidium
- Ultralight
- Awesomium
- libRocket
- servo
- sciter
- cobalt.foo
- EAWebKit
- QML (Qt)
- CEF
- HTML5 & CSS3
- VUE.js & REACT.js & ANGULAR.js
- electron
- livecode https://github.com/livecode/livecode/blob/develop/libgraphics/src/context.cpp
- chromium-lite
- Pesto https://github.com/marcj/Pesto
- aardvark https://github.com/sunflowerdeath/aardvark
- LCUI https://github.com/lc-soft/LCUI
- blink
- (more) https://news.ycombinator.com/item?id=17733515

Let`s combine best of them all together.

- How It Works?

Started over with cobalt.foo, stripped it to the bare-minimum. Added support for web components, scrolling, ui/views widget framework from chromium.

- Can't build?

Check readme & issues. Don't forget to replace files based on `patches`.

- Project name? SKG? SKEMGL?

  * skia - Skia is an open source 2D graphics library
  * opengl - cross-language, cross-platform application programming interface (API) for rendering 2D and 3D vector graphics
  * emscripten - Emscripten is a toolchain for compiling to asm.js and WebAssembly, built using LLVM, that lets you run C and C++ on the web at near-native speed

- C++?

C++ can be bound to many languages. Feel free to add any third-party bindings.

- C++ on Web?

Modern C++ can use sanitizers and lifetime checkers to prevent memory and threading issues ( see lifetime branch of https://github.com/mgehre/llvm-project )

For hot-code reload (edit running app without recompile) in C++ you can use Cling ( see https://github.com/derofim/cling-cmake )

Use code generators to reduce the amount of boilerplate code in your C++ projects, for example https://github.com/blockspacer/CXXCTP

Use customizable template engine to generate CSS/HTML, for example https://github.com/blockspacer/CXTPL

SKIA uses WASM and canvas/WebGL to draw on web. In theory, it is possible to add https://github.com/mbasso/asm-dom support or houdini bindings (CSS Paint API).

- Alternatives?

See https://github.com/blockspacer/skia-opengl-emscripten/issues/6

- Limitations

  * Some HTML tags not supported. For example, use `<div>` instead of `<p>`.
  * Prefer CSS flexbox for layout. No `float:right`.
  * No support for layout-changing CSS animations.
    Example: Can`t animate width/height, but can animate scaleX/scaleY/scale.
    Renderer runs in a different thread from the Layout Engine, and can interpolate animations that do not require re-layout.
    You can see the most popular CSS properties that, when changed, trigger layout at https://reading.supply/@jim/performance-when-animating-styles-C8MySv or https://csstriggers.com/ or https://www.html5rocks.com/en/tutorials/speed/high-performance-animations/
    Note what you can add custom animations, it is opensource project.
  * Scrolling in HTML is experimental.
  * It is opensource project: you can participate to add more features and fix issues.

- LICENSE?

Need to review opensource `LICENSE`-s used by thirdparty libs. Any help wanted. See issues: https://github.com/blockspacer/skia-opengl-emscripten/issues/4

## Project goals

Create GUI framework that is

- Free
- Opensource
- Lightweight
- Customizable
- Can use animations
- Fast, performance matters for web games
- Can support multiple surfaces in 3D (like multiple PC screens in WEB VR game world)
- Can support browser, mobile, native, etc. without a lot of code changes
- Small enough to be used in browser
- With ability to turn on/off features and modify source code
- Can support UTF8 fonts, font rendering and i18n matters
- Can support vector graphics, shape drawing, curves. Vector graphics can be scaled larger or smaller and still look perfect for all resolutions
- Can be used without a lot of boilerplate code (supports reactivity, custom widgets, etc.)
- Can support animation formats like lottie (SKOTTIE)
- Can render both on CPU and GPU
- Can be integrated with existing apps or game engines (integrates with existing window creation, threads management, etc.)
- Can control low-level platform functionality (such as file system, rendering, clipboard, etc.).
- Maintaining a solid framerate: It is not so important to make frames render faster as it is having them rendering constantly and without janks.
- Ability to re-use existion low-level application layer: change file or thread creation code etc.
- No build-in scripting language or virtual machine. Probably app needs to be run on platform with limited resources or already have a scripting solution.
- Can support dynamic UI, with lots of animation per frame, worst-case scenarios (performance cliffs). Be prepared to paint every pixel on every frame.
- Allow static linking with all libraries to eliminate dead code and use compilation techniques like `Whole Program Optimization`.
- Uses reflection and data binding to provide a simple and powerful way to auto-update data between the model and the user interface.
- Use declarative formats, like HTML, because thay are more compact than the equivalent procedural code. They also establish a clear separation between the markup that defines the UI and the code that makes the application do something. For example, a designer on your team could design a UI and then hand off the declarative format to the developer to add the procedural code.
- Extendable with custom widgets, controls. Provide UI frameworks as separate projects. Elements like Button, CheckBox, Label, ListBox, ComboBox, Menu, TreeView, ToolBar, ProgressBar, Slider, TextBox, or PasswordBox.
- Provides theming mechanisms
- Focused on highly-optimized code. All aspects need to be kept under control: precise control on memory allocations, never create threads under the hood, it should always provide a renderer-agnostic API, and it should never communicate directly with the GPU
- Focused on UI. Goal is to keep project small, but with ability to integrate third-party libraries

## Lightweight

- WASM with SKIA renderer: ~8.0MiB uncompressed (~4MiB compressed), size depends on enabled features and languages (i18n).
- UNIX: ~22.0MiB uncompressed, size depends on enabled features and languages (i18n).
- WASM without SKIA renderer (HTML5 native tags): ~3.0MiB
- low memory usage

## Can`t clone with git?

```bash
# see https://stackoverflow.com/a/21423542
git config --global url."https://".insteadOf git://
```

## Clone with --recursive

```bash
sudo -E apt-get update
sudo -E apt-get install git build-essential wget
sudo apt-get install libgles2-mesa-dev libegl1-mesa-dev
sudo -E apt-get install build-essential --reinstall
git clone --recursive {repourl_here}
```

## How to build on UNIX

See [./docs/BUILD_ON_UNIX.md](./docs/BUILD_ON_UNIX.md)

## How to build on Windows

See [./docs/BUILD_ON_WINDOWS.md](./docs/BUILD_ON_WINDOWS.md)

TODO: move .md file from https://github.com/blockspacer/skia-opengl-emscripten/blob/cc6/docs/BUILD_ON_WINDOWS.md.txt

## How to build for emscripten/WASM/HTML5

emscripten SDK tested on Ubuntu. Many operating systems can run Ubuntu container or Ubuntu VM.

See [./docs/BUILD_ON_UNIX.md](./docs/BUILD_ON_UNIX.md)

TODO: contribute docs about emscripten SDK usage on Windows.

## How to apply patches

Just copy and replace files based on `patches` folder. See build instructions.

TODO: contribute `git`-based patches.

## How to run in browser (enable emscripten support)

See [./docs/USAGE_WITH_EMSCRIPTEN.md](./docs/USAGE_WITH_EMSCRIPTEN.md)

## How to add custom language (i18n, icu, fonts)

- modify languages in filters.json, see below.
- add font file with support of your language

## How to make icu data files smaller (ICU 64-2)

modify languages in filters.json (see ICU_DATA_FILTER_FILE below), more languages = bigger bundle size

See examples:

- thirdparty/icu_wrapper/third_party/scripts/filters.json
- https://github.com/cjbd/icu/tree/9f0f47b1e410b137762f2e3699359f0dbfcdbc05/filters

verify filters.json using jsonschemavalidator.net and (remove comments) https://github.com/unicode-org/icu/blob/release-64-2/icu4c/source/data/buildtool/filtration_schema.json

```bash
PROJ_ROOT=${PWD}
ls -artl ${PROJ_ROOT}
pip3 install --user hjson jsonschema
ICUROOT=${PROJ_ROOT}/thirdparty/icu_wrapper/third_party/icu
ls -artl ${ICUROOT}
cd ${ICUROOT}
mkdir build
cd build
ICU_DATA_FILTER_FILE="${ICUROOT}/../scripts/filters.json" \
  "${ICUROOT}/source/runConfigureICU" \
    Linux/gcc --disable-tests --with-data-packaging=archive \
    --enable-samples=no --enable-dyload=no \
    --enable-static --disable-shared
make clean
rm -rf build
make -j8
ls data/out
rm ${PROJ_ROOT}/resources/icu/icudtl.dat
cp ${ICUROOT}/build/data/out/icudt64l.dat ${PROJ_ROOT}/resources/icu/icudtl.dat
ls ${PROJ_ROOT}/resources/icu
```

see:
 - https://www.suninf.net/tags/chromium.html

see:
 - https://gclxry.com/custom-chromium-icu-library/
 - https://github.com/unicode-org/icu/blob/master/docs/userguide/icu_data/buildtool.md#filtering-by-language-only
 - http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
 - http://userguide.icu-project.org/icudata
 - http://cldr.unicode.org/development/development-process/design-proposals/specifying-text-break-variants-in-locale-ids
 - https://github.com/unicode-org/icu/tree/release-64-2
 - https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/third_party/icu/README.chromium#L26
 - https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/third_party/icu/scripts/accept_lang.list
 - http://userguide.icu-project.org/icufaq#TOC-How-can-I-reduce-the-size-of-the-ICU-data-library-
 - https://github.com/sillsdev/icu-dotnet/wiki/Making-a-minimal-build-for-ICU58-or-later
 - https://www.oipapio.com/question-4138842
 - https://qiita.com/shimacpyon/items/82d275c2f5f508cbd7f4

## How to make ICU smaller?

Define `UCONFIG_NO_COLLATION` or `UCONFIG_ONLY_COLLATION`, `UCONFIG_NO_LEGACY_CONVERSION`, `UCONFIG_ONLY_HTML_CONVERSION`, `UCONFIG_NO_IDNA`, etc.

see:
- https://github.com/sillsdev/icu-dotnet/wiki/Making-a-minimal-build-for-ICU58-or-later
- http://userguide.icu-project.org/howtouseicu
- http://transit.iut2.upmf-grenoble.fr/doc/icu-doc/html/uconfig_8h.html

# How to enable skottie/lottie support

Build with flags

```bash
-DENABLE_SKSG=TRUE;
-DENABLE_SKSHAPER=TRUE;
-DENABLE_SKOTTIE=TRUE;
-DENABLE_SKIA_UTILS=TRUE;
-DFORCE_DISABLE_SK_GPU=FALSE;
```
