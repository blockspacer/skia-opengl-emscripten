# About

Guide: how to build on Windows.

Tested on
Win 10 x64
MS VS 2017

```cmd
python --version
Python 2.7.2
```

```cmd
clang-cl --version
clang version 9.0.0 (tags/RELEASE_900/final)
Target: x86_64-pc-windows-msvc
Thread model: posix
InstalledDir: C:/Program Files/LLVM/bin
```

```cmd
# cmake https://github.com/Kitware/CMake/releases/download/v3.16.0-rc3/cmake-3.16.0-rc3-win64-x64.msi
```

```cmd
glew-2.1.0/lib/Release/x64/glew32s.lib
```

## Before build

See hot to get depot_tools from [BUILD_ON_UNIX.md](BUILD_ON_UNIX.md)

Check that you have `depot_tools` in `PATH`

Check that all git submodules initialized

Check that you applied all patches

## Windows specific

Prefer file paths with lowercase english characters without spaces

Use Visual Studio with `English Language pack`

## Install mingw-w64 with treads:win32, architecture:x86_64

Follow https://perso.uclouvain.be/allan.barrea/opencv/building_tools.html#mingw

Download from https://sourceforge.net/projects/mingw-w64/files/latest/download

# Add to PATH `\MinGW\include`, `\MinGW\include\sys` and `\MinGW\lib\gcc\mingw32\4.6.2\include\ssp`

NOTE: place MinGW install dir at path start, such as `C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\x86_64-w64-mingw32`

See https://stackoverflow.com/a/15893895

## SKIA on Windows

Skia can build on Windows with Visual Studio 2017 or 2019.

If GN is unable to locate either of those, it will print an error message.

In that case, you can pass your VC path to GN via win_vc.

See https:\\skia.org\user\build

## Install python2 from https:\\www.python.org\downloads\release\python-2716\

Go to https:\\www.python.org\ftp\python\2.7.16\python-2.7.16.amd64.msi

Switch to python2 as default Python version

```cmd
# see https:\\stackoverflow.com\questions\5087831\how-should-i-set-the-default-python-version-in-windows
# see https:\\docs.python.org\3\using\windows.html?highlight=python%20launcher#python-launcher-for-windows
py -2
```

OR create file C:\Windows\py.ini

```cmd
[defaults]
python=2
```

OR run under `Git bash`

```bash
export PATH=\c\Python27\:\c\Python27\Scripts:$PATH
```

## Install Git Bash

Go to https:\\git-scm.com\download\win

## Install `Build Tools for Visual Studio` with `English Language pack`

Tested with VS 2017, you can find it here https:\\visualstudio.microsoft.com\ru\vs\older-downloads\

Go to https:\\visualstudio.microsoft.com\ru\downloads\

Download "Build Tools for Visual Studio"

Run "Build Tools for Visual Studio", choise "Language packs" and add "English".

You can select language in (running Visual Studio) Tools -> Options -> International Settings in Environment

## Install latest cmake from https:\\cmake.org\download\

See https:\\cmake.org\download\

## Install https:\\github.com\Microsoft\vcpkg\

See https:\\devblogs.microsoft.com\cppblog\vcpkg-a-tool-to-acquire-and-build-c-open-source-libraries-on-windows\

```cmd
D:
mkdir D:\src
cd D:\src
git clone --recursive https:\\github.com\Microsoft\vcpkg
cd vcpkg
.\bootstrap-vcpkg.bat
```

## Install cmder from https:\\cmder.net\  as Admin

See https:\\medium.com\@alikingravi\installing-cmder-as-an-alternative-windows-command-line-tool-202b866115d9

NOTE: If you want to work with UTF-8 encoding you have to select UTF-8 as active console codepage. Just run `chcp 65001`

## Install https:\\chocolatey.org\ from PowerShell v3+ as Admin

```cmd
Set-ExecutionPolicy Bypass -Scope Process -Force; iwr https:\\chocolatey.org\install.ps1 -UseBasicParsing | iex
```

## Build zlib

Get sources from https:\\www.zlib.net\ or https:\\www.zlib.net\zlib1211.zip

```cmd
cmake -E remove_directory build
cmake -E make_directory build
cd build
cmake -A x64 -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config Release --parallel 8
cmake --build . --config Release --target install
```

Note what you may want to copy `.dll` files from ` C:\Program Files (x86)\zlib\bin\zlib.dll` to your app folder.

## Build libpng (requires zlib)

Get sources from http:\\www.libpng.org\pub\png\libpng.html or http:\\prdownloads.sourceforge.net\libpng\lpng1637.zip?download

NOTE: Download for x64

```cmd
cmake -E remove_directory build
cmake -E make_directory build
cd build
# NOTE: -DPNG_STATIC=ON
cmake -A x64 -DCMAKE_BUILD_TYPE=Release -DPNG_STATIC=ON ..
cmake --build . --config Release --parallel 8
cmake --build . --config Release --target install
```

Note that you must append install path to DCMAKE_PREFIX_PATH, like so: "-DCMAKE_PREFIX_PATH=C:\Program Files (x86)\;C:\Program Files (x86)\libpng\"

Note what you may want to copy `.dll` files from `C:\Program Files (x86)\libpng\bin\libpng16.dll` to your app folder.

See https:\\gitlab.kitware.com\cmake\cmake\issues\19270

## Build SDL2 from https:\\www.libsdl.org\download-2.0.php

Download https:\\www.libsdl.org\release\SDL2-2.0.10.zip

NOTE: Download for x64

```cmd
cmake -E remove_directory build
cmake -E make_directory build
cd build
cmake -A x64 -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config Release --parallel 8
cmake --build . --config Release --target install
```

Note that you must append install path to DCMAKE_PREFIX_PATH, like so: "-DCMAKE_PREFIX_PATH=C:\Program Files (x86)\;C:\Program Files (x86)\SDL2\"

Note what you may want to copy `.dll` files from `C:\Program Files (x86)\SDL2\bin\SDL2.dll` to your app folder.

## Build BZip2 from https:\\github.com\philr\bzip2-windows\releases

optional step

## Build Freetype2 from https:\\www.freetype.org\download.html

Download https:\\download.savannah.gnu.org\releases\freetype\freetype-2.10.0.tar.bz2

```cmd
cmake -E remove_directory build
cmake -E make_directory build
cd build
# NOTE: you can use -DFT_WITH_HARFBUZZ=OFF -DFT_WITH_PNG=OFF
cmake -A x64 -DCMAKE_BUILD_TYPE=Release -DFT_WITH_HARFBUZZ=OFF -DCMAKE_DISABLE_FIND_PACKAGE_HarfBuzz=TRUE -DFT_WITH_PNG=OFF -DCMAKE_DISABLE_FIND_PACKAGE_PNG=TRUE  -DFT_WITH_ZLIB=OFF -DCMAKE_DISABLE_FIND_PACKAGE_ZLIB=TRUE -DFT_WITH_BZIP2=OFF -DCMAKE_DISABLE_FIND_PACKAGE_BZip2=TRUE "-DCMAKE_PREFIX_PATH=C:\Program Files (x86);C:\Program Files (x86)\libpng;C:\Program Files (x86)\harfbuzz" ..
cmake --build . --config Release --parallel 8
cmake --build . --config Release --target install
```

## opengl

optional step

```cmd
vcpkg install opengl
```

## Build ICU

Option 1:

```cmd
# TODO: --triplet x64-windows-static or x86-windows-static
.\vcpkg install icu --triplet x86-windows
```

Option 2:

Download https:\\github.com\unicode-org\icu\releases\download\release-65-1\icu4c-65_1-Win64-MSVC2017.zip from https:\\github.com\unicode-org\icu\releases\tag\release-65-1

## Build gzip

optional step

## Build harfbuzz with `-DHB_HAVE_FREETYPE=ON` and `HB_HAVE_ICU=ON`

```cmd
git clone --recursive https:\\github.com\harfbuzz\harfbuzz.git
cd harfbuzz
cmake -E remove_directory build
cmake -E make_directory build
cd build
# NOTE: change CMAKE_TOOLCHAIN_FILE for ICU path from vcpkg
cmake -A x64 -DCMAKE_TOOLCHAIN_FILE=D:\den\coding\vcpkg\scripts\buildsystems\vcpkg.cmake -DCMAKE_BUILD_TYPE=Release -DHB_HAVE_GLIB=OFF -DHB_HAVE_ICU=ON -DHB_HAVE_FREETYPE=ON "-DCMAKE_PREFIX_PATH=D:\den\coding\vcpkg\packages\icu_x86-windows;C:\Program Files (x86);C:\Program Files (x86)\libpng;C:\Program Files (x86)\freetype2;C:\Program Files (x86)\freetype\include\freetype2;C:\Program Files (x86)\freetype\lib;C:\Program Files (x86)\freetype\lib\cmake" ..
cmake --build . --config Release --parallel 8
cmake --build . --config Release --target install
```

## Re-build Freetype2 again with harfbuzz and libpng

optional step

Use
- `-DFT_WITH_HARFBUZZ=ON` and `-DCMAKE_DISABLE_FIND_PACKAGE_HarfBuzz=FALSE`
- `-DFT_WITH_PNG=OFF` and `-DCMAKE_DISABLE_FIND_PACKAGE_PNG=FALSE`
- proper `-DCMAKE_PREFIX_PATH`

## Build expat

```cmd
.\vcpkg install expat --triplet x64-windows
```

## Build fontconfig

```cmd
.\vcpkg install fontconfig --triplet x64-windows

# The package fontconfig:x64-windows provides CMake targets:
#
#     find_package(unofficial-fontconfig CONFIG REQUIRED)
#     target_link_libraries(main PRIVATE unofficial::fontconfig::fontconfig)
```

## Create VS solution

optional step

```cmd
cmake -E remove_directory build
cmake -E make_directory build
cd build
# NOTE: Win64
cmake -A x64 -G "Visual Studio 15 2017 Win64" -DCMAKE_C_COMPILER_ID="Clang" -DCMAKE_CXX_COMPILER_ID="Clang" "-DCMAKE_PREFIX_PATH=D:\den\coding\vcpkg\packages\libuuid_x86-windows\;D:\den\coding\vcpkg\packages\fontconfig_x86-windows\;D:\den\coding\vcpkg\packages\icu_x86-windows\;D:\den\coding\vcpkg\packages\expat_x86-windows\;C:\Program Files (x86)\harfbuzz\;C:\Program Files (x86)\;C:\Program Files (x86)\;C:\Program Files (x86)\libpng\;C:\Program Files (x86)\SDL2\;C:\Program Files (x86)\freetype2\;C:\Program Files (x86)\freetype\include\freetype2\;C:\Program Files (x86)\freetype\lib\;C:\Program Files (x86)\freetype\lib\cmake\" ..
cmake --build . --parallel 8
```

NOTE: `-T v141_clang_c2` is subdir found from command:

```cmd
find "C:\Program Files (x86)\Microsoft Visual Studio" -name "PlatformToolsets"
```

## Build

```cmd
cmake -E remove_directory build
cmake -E make_directory build
cd build
# export PATH=..\..\depot_tools:$PATH
# export PATH=\c\Python27\:\c\Python27\Scripts:$PATH
export PATH=\c\Program\ Files\CMake\bin\:$PATH
export PATH=\c\Program\ Files\ \(x86\)\freetype\:\c\Program\ Files\ \(x86\)\freetype\include\:\c\Program\ Files\ \(x86\)\freetype\include\freetype2:\c\Program\ Files\ \(x86\)\freetype\include\freetype2\freetype:$PATH
export PATH=\c\Program\ Files\LLVM:\c\Program\ Files\LLVM\bin:$PATH
export LDFLAGS="-fuse-ld=lld-link"
# cmake -E env LDFLAGS="-fuse-ld=lld-link" PATH="$PATH" cmake -G Ninja -DENABLE_COBALT=FALSE -DCMAKE_BUILD_TYPE="Debug" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON "-DCMAKE_PREFIX_PATH=D:\den\coding\vcpkg\packages\libuuid_x86-windows\;D:\den\coding\vcpkg\packages\fontconfig_x86-windows\;D:\den\coding\vcpkg\packages\icu_x86-windows\;D:\den\coding\vcpkg\packages\expat_x86-windows\;C:\Program Files (x86)\harfbuzz\;C:\Program Files (x86)\;C:\Program Files (x86)\;C:\Program Files (x86)\libpng\;C:\Program Files (x86)\SDL2\;C:\Program Files (x86)\freetype2\;C:\Program Files (x86)\freetype\include\freetype2\;C:\Program Files (x86)\freetype\lib\;C:\Program Files (x86)\freetype\lib\cmake\"  -DCMAKE_C_COMPILER:PATH="C:\Program Files\LLVM\bin\clang.exe" -DCMAKE_CXX_COMPILER:PATH="C:\Program Files\LLVM\bin\clang.exe" -DCMAKE_C_COMPILER_ID="Clang" -DCMAKE_CXX_COMPILER_ID="Clang" -DCMAKE_SYSTEM_NAME="Generic" -DWIN32=1 ..
# clear && clear
# cmake --build . --config Debug --parallel 8
```

Run from cmder, use `"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" x64`

Note that you must use cmder for unix-like commands (`ls`, `pwd`, etc.)

# "Visual Studio 2017 Tools Command Prompt for targeting x86 with x64-hosted tools" or "Visual Studio Command Prompt" as Admin:
```
chcp 65001
#
# RUN ONCE: setx path "C:/Program Files/LLVM/;C:/Program Files/LLVM/bin/;%PATH%"
#
# RUN ONCE: setx path "C:/Python27/;C:/Python27/Scripts;%PATH%"
#
refreshenv # from https:\\chocolatey.org\docs\helpers-update-session-environment
#
# use vcvarsall.bat
# OR Must run from "Visual Studio 2017 Tools Command Prompt for targeting x86 with x64-hosted tools"
"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
#
# see https://stackoverflow.com/questions/43847542/rc-exe-no-longer-found-in-vs-2015-command-prompt
set PATH=C:/Program Files (x86)/Windows Kits/10/bin/x64;%PATH%
#
# OR
# %comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsamd64_x86.bat"
#
# set PATH=C:\Program Files\CMake\bin;%PATH%
#
set PATH=C:\Program Files (x86)\SDL2\include;C:\Program Files (x86)\SDL2\lib;%PATH%
#
set PATH=C:\Python27;C:\Python27\Scripts;%PATH%
#
set PATH=C:\Program Files\LLVM;C:\Program Files\LLVM\bin;D:\den\coding\vcpkg\packages\libuuid_x86-windows;D:\den\coding\vcpkg\packages\fontconfig_x86-windows;D:\den\coding\vcpkg\packages\icu_x86-windows;D:\den\coding\vcpkg\packages\expat_x86-windows;C:\Program Files (x86)\harfbuzz;C:\Program Files (x86);C:\Program Files (x86);C:\Program Files (x86)\libpng;C:\Program Files (x86)\SDL2;C:\Program Files (x86)\freetype2;C:\Program Files (x86)\freetype\include\freetype2;C:\Program Files (x86)\freetype\lib;C:\Program Files (x86)\freetype\lib\cmake;%PATH%
#
# D:\den\coding\vcpkg\packages\opengl_x86-windows;D:\den\coding\vcpkg\packages\opengl_x86-windows\include;
#
set PATH=D:\den\coding\vcpkg\packages\libuuid_x86-windows;D:\den\coding\vcpkg\packages\fontconfig_x86-windows;D:\den\coding\vcpkg\packages\icu_x86-windows;D:\den\coding\vcpkg\packages\expat_x86-windows;C:\Program Files (x86)\harfbuzz;C:\Program Files (x86);C:\Program Files (x86);C:\Program Files (x86)\libpng;C:\Program Files (x86)\SDL2;C:\Program Files (x86)\freetype2;C:\Program Files (x86)\freetype\include\freetype2;C:\Program Files (x86)\freetype\lib;C:\Program Files (x86)\freetype\lib\cmake;%PATH%
#
# cmake -E env LDFLAGS="-fuse-ld=lld-link" PATH="%PATH%" cmake -H.. -B. -G Ninja -DENABLE_COBALT=FALSE -DCMAKE_BUILD_TYPE="Debug" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON "-DCMAKE_PREFIX_PATH=D:/den/coding/vcpkg/packages/libuuid_x86-windows/;D:/den/coding/vcpkg/packages/fontconfig_x86-windows/;D:/den/coding/vcpkg/packages/icu_x86-windows/;D:/den/coding/vcpkg/packages/expat_x86-windows/;C:/Program Files (x86)/harfbuzz/;C:/Program Files (x86)/;C:/Program Files (x86)/;C:/Program Files (x86)/libpng/;D:/den/coding/SDL2-2.0.10/;C:/Program Files (x86)/freetype2/;C:/Program Files (x86)/freetype/include/freetype2/;C:/Program Files (x86)/freetype/lib/;C:/Program Files (x86)/freetype/lib/cmake/"  -DCMAKE_C_COMPILER:PATH="C:/Program Files/LLVM/bin/clang.exe" -DCMAKE_CXX_COMPILER:PATH="C:/Program Files/LLVM/bin/clang.exe" -DCMAKE_C_COMPILER_ID="Clang" -DCMAKE_CXX_COMPILER_ID="Clang" -DCMAKE_SYSTEM_NAME="Generic" -DWIN32=1
#
set PATH=C:\Program Files\CMake\bin;%PATH%
#
set PATH=C:\Program Files (x86)\SDL2\include;C:\Program Files (x86)\SDL2\lib;%PATH%
#
set PATH=D:\den\coding\glew\glew-2.1.0;%PATH%
set PATH=D:\den\coding\glew\glew-2.1.0\include;%PATH%
set PATH=D:\den\coding\glew\glew-2.1.0\lib\Release;%PATH%
set PATH=D:\den\coding\glew\glew-2.1.0\lib\Release\x64;%PATH%
#
# https://stackoverflow.com/questions/1236670/how-to-make-opengl-apps-in-64-bit-windows
# path to x64 opengl32.lib
set PATH=C:/Program Files (x86)/Windows Kits/10/Lib/10.0.14393.0/um/x64;%PATH%
#
# cmake -E env LDFLAGS="-fuse-ld=lld-link" PATH="%PATH%" cmake -H.. -B. -G Ninja -DENABLE_COBALT=FALSE -DCMAKE_BUILD_TYPE="Debug" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON "-DCMAKE_PREFIX_PATH=D:\den\coding\vcpkg\packages\libuuid_x86-windows\;D:\den\coding\vcpkg\packages\fontconfig_x86-windows\;D:\den\coding\vcpkg\packages\icu_x86-windows\;D:\den\coding\vcpkg\packages\expat_x86-windows\;C:\Program Files (x86)\harfbuzz\;C:\Program Files (x86)\;C:\Program Files (x86)\;C:\Program Files (x86)\libpng\;C:\Program Files (x86)\SDL2\;C:\Program Files (x86)\freetype2\;C:\Program Files (x86)\freetype\include\freetype2\;C:\Program Files (x86)\freetype\lib\;C:\Program Files (x86)\freetype\lib\cmake\"  -DCMAKE_C_COMPILER:PATH="C:\Program Files\LLVM\bin\clang-cl.exe" -DCMAKE_CXX_COMPILER:PATH="C:\Program Files\LLVM\bin\clang-cl.exe" -DCMAKE_C_COMPILER_ID="Clang" -DCMAKE_CXX_COMPILER_ID="Clang" -DCMAKE_SYSTEM_NAME="Generic" -DWIN32=1
#
# dir "%CD%\..\depot_tools"
#
#set PATH=%CD%\..\depot_tools;%PATH%
#
# find ".../MinGW/" -name "unistd.h"
# dir /s ".../MinGW/" "unistd.h"
# where unistd.h
# NOTE: mingw x64!
# set PATH=C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\x86_64-w64-mingw32\include;%PATH%
#
set CC=C:/Program Files/LLVM/bin/clang-cl.exe
set CXX=C:/Program Files/LLVM/bin/clang-cl.exe
# set CFLAGS=-m64
# set CXXFLAGS=-m64
# set LDFLAGS="-fuse-ld=lld-link"
echo %PATH%
python --version
clang-cl --version
"%CXX%" --version
cmake --version
cmake -E remove_directory build
cmake -E make_directory build
cd build
# NOTE: Win64
# -G "Visual Studio 15 2017 Win64"
# -A x64
#
# -DCMAKE_C_FLAGS:STRING="-m64" -DCMAKE_CXX_FLAGS:STRING="-m64"
# "-DCMAKE_LINKER=C:/Program Files/LLVM/bin/lld-link.exe" -DCMAKE_C_FLAGS_DEBUG:INTERNAL="/MDd"
# "-DCMAKE_LINKER=C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\link.exe"
# -UCMAKE_LINKER -UCMAKE_C_FLAGS_DEBUG
cmake -G Ninja -DENABLE_COBALT=TRUE -DEXT_SKIA_ALWAYS_BUILD=ON "-DCMAKE_LINKER=C:/Program Files/LLVM/bin/lld-link.exe" -DCMAKE_SYSTEM_NAME="Windows" -DIS_CLANG_CL=TRUE -DCMAKE_BUILD_TYPE="Debug" "-DCMAKE_C_COMPILER=C:/Program Files/LLVM/bin/clang-cl.exe" "-DCMAKE_CXX_COMPILER=C:/Program Files/LLVM/bin/clang-cl.exe" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
#
# cmake -G "Visual Studio 15 2017 Win64" ..
# cmake --build . --parallel 8
# cmake -G "Visual Studio 15 2017 Win64" -DCMAKE_SYSTEM_NAME="Windows" -DENABLE_COBALT=FALSE -DCMAKE_C_FLAGS_DEBUG:INTERNAL="/MDd" -DCMAKE_BUILD_TYPE="Debug" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
#
# cmake "-DCMAKE_LINKER=C:/Program Files/LLVM/bin/lld-link.exe" "-DCMAKE_C_COMPILER=C:/Program Files/LLVM/bin/clang-cl.exe" "-DCMAKE_CXX_COMPILER=C:/Program Files/LLVM/bin/clang-cl.exe" -DENABLE_COBALT=FALSE -DCMAKE_BUILD_TYPE="Debug" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
#
#  -DCMAKE_PREFIX_PATH="C:/Program Files/LLVM/;C:/Program Files/LLVM/bin/;D:/den/coding/vcpkg/packages/libuuid_x86-windows/;D:/den/coding/vcpkg/packages/fontconfig_x86-windows/;D:/den/coding/vcpkg/packages/icu_x86-windows/;D:/den/coding/vcpkg/packages/expat_x86-windows/;C:/Program Files (x86)/harfbuzz/;C:/Program Files (x86)/;C:/Program Files (x86)/;C:/Program Files (x86)/libpng/;D:/den/coding/SDL2-2.0.10/;C:/Program Files (x86)/freetype2/;C:/Program Files (x86)/freetype/include/freetype2/;C:/Program Files (x86)/freetype/lib/;C:/Program Files (x86)/freetype/lib/cmake/"
#
# cmake "-DCMAKE_LINKER=C:/Program Files/LLVM/bin/lld-link.exe" "-DCMAKE_C_COMPILER=C:/Program Files/LLVM/bin/clang-cl.exe" "-DCMAKE_CXX_COMPILER=C:/Program Files/LLVM/bin/clang-cl.exe" -DENABLE_COBALT=FALSE -DCMAKE_BUILD_TYPE="Debug" -DRELEASE_BUILD=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
#
# NOTE: ninja can't handle target dependencies with external libs, so use `--target` before build:
cmake --build . --config Debug --parallel 8 --target SKIA_build_alwaysbuild
#
# must exist
file skia/skia.lib
#
# to clear terminal screen
cls
#
cmake --build . --config Debug --parallel 8 --target all
```

## FAQ

- I got `d:\den\coding\skia-opengl-emscripten\src\chromium\base\bind.h(229): error C2440: 'initializing': cannot convert`
  Use "x64_x86 Cross Tools Command Prompt for VS 2017" or "Open Visual Studio 2017 Tools Command Prompt for targeting x86 with x64-hosted tools"
  See https://stackoverflow.com/a/34630892

## TODO

- -D_CRT_RAND_S=
  https://wiki.documentfoundation.org/Development/clang-cl

  C:\Python27\;C:\Python27\Scripts;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\VC\VCPackages;C:\Program Files (x86)\Microsoft SDKs\TypeScript\3.1;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\TestWindow;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\TeamFoundation\Team Explorer;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\MSBuild\15.0\bin\Roslyn;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Team Tools\Performance Tools;C:\Program Files (x86)\Microsoft Visual Studio\Shared\Common\VSPerfCollectionTools\;C:\Program Files (x86)\Microsoft SDKs\Windows\v10.0A\bin\NETFX 4.6.1 Tools\;C:\Program Files (x86)\Windows Kits\10\bin\10.0.17763.0\x86;C:\Program Files (x86)\Windows Kits\10\bin\x86;C:\Program Files (x86)\Microsoft Visual Studio\2017\Communit
