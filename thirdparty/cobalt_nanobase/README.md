# About

Modified `cobalt` library from cobalt.foo

## EXTRA FEATURES

- ported to CMake
- supports Conan
- added CMake options to disable some features
- supports starboard from cobalt.foo
- ported to WASM (emscripten) with threading support
- ported to WASM (emscripten) without threading support

## DOCS

cobalt.foo

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

## Used cobalt version

```bash
cab7770533804d582eaa66c713a1582f361182d3
```
