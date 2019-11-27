# About

Modified `modp_b64` library from chromium https://github.com/chromium/chromium/tree/master/base

## EXTRA FEATURES

- ported to CMake
- supports Conan
- added CMake options to disable some features
- supports starboard from cobalt.foo
- ported to WASM (emscripten) with threading support
- ported to WASM (emscripten) without threading support

## DOCS

The Chromium Projects https://www.chromium.org/developers

Chromium docs https://chromium.googlesource.com/chromium/src/+/master/docs

## HOW TO BUILD FROM SOURCE

Create conan profile, see https://github.com/blockspacer/CXXCTP#install-conan---a-crossplatform-dependency-manager-for-c

Build with created conan profile:

```
conan create . conan/stable --profile clang
```

## HOW TO INSTALL FROM CONAN

```
conan install --build=missing --profile clang -o enable_tests=False ..
```

## USAGE EXAMPLES

TODO

## LICENSE

TODO

## PORT ISSUES

- Some flags from `declare_args` may be not supported.
- Some platforms may be not supported.

## Used chromium version

```bash
from commit 07bf855b4db90ee18e4cf3452bcbc0b4f80256e5
05/13/2019 12:28 PM
Worker: Clear ResourceTimingNotifier on WorkerFetchContext::Detach()
Bug: 959508, 960626
Change-Id: I2663e5acddec0d9f88a78842c093c594fb57acb8
Reviewed-on: https://chromium-review.googlesource.com/c/chromium/src/+/1609024
```
