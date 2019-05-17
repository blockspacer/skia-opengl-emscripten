mkdir build-emscripten

cd build-emscripten

# see http://webassemblycode.com/using-browsers-debug-webassembly/
# source-map-base sets port number
# also see --no_browser
# see https://github.com/emscripten-core/emscripten/issues/6534
emrun --port 9090 --serve_root / .
