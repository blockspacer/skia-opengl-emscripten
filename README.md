### Clone with --recursive

```
sudo -E apt-get update
sudo -E apt-get install git build-essential wget
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
make -j4
sudo make install
```

### WASM

Download, install & configure emscripten as per your environment requires:

http://kripken.github.io/emscripten-site/docs/getting_started/downloads.html

### Build & clone deps with --init --recursive

```
git submodule update --init --recursive
```

Used deps:

> https://github.com/nigels-com/glew.git
```
# see https://github.com/nigels-com/glew#linux-and-mac
sudo -E apt-get install build-essential libxmu-dev libxi-dev libgl-dev
sudo -E apt install libegl1-mesa-dev
cd thirdparty/glew/
cd auto
make

cd ../build
cmake ./cmake
cmake --build . -- -j4

sudo make install
```
> https://github.com/spurious/SDL-mirror.git
```
# see https://wiki.libsdl.org/Installation
cd thirdparty/SDL2/
mkdir build
cd build
cmake ..
cmake --build . -- -j4
sudo make install
# NOTE You can even specify a custom path to find the SDL2, SDL2_net, ...
# see https://stackoverflow.com/a/55075667
```
> https://github.com/aminosbh/sdl2-cmake-modules
# see https://stackoverflow.com/a/55075667

### Compile example on Linux

```
sh tools/build.sh
```
