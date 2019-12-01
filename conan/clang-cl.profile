[settings]
# Tested in Windows 10
os=Windows
os_target=Windows
os_build=Windows
arch_build=x86_64
arch=x86_64
compiler=clang
compiler.version=9
# Must match CMAKE_BUILD_TYPE
build_type=Debug
compiler.libcxx=libstdc++11

[options]
*:enable_cobalt=True
*:enable_web_pthreads=True

[build_requires]
#ninja_installer/1.8.2@bincrafters/stable

[env]
CONAN_CMAKE_GENERATOR=Ninja
# NOTE: change path to clang-cl.exe
CC=C:\PROGRA~1\LLVM\bin\clang-cl.exe
CXX=C:\PROGRA~1\LLVM\bin\clang-cl.exe
# NOTE: -m64 for 64 bit
CXXFLAGS="-m64 -DNOMINMAX=1 -D_UNICODE=1 -DUNICODE=1 -DNO_TCMALLOC=1 /utf-8 /Gy /FS /bigobj /Zc:__cplusplus /Zc:sizedDealloc- -D__STD_C -D_CRT_RAND_S -D_WINDOWS -DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS -DPSAPI_VERSION=2 -DWIN32 -D_SECURE_ATL -D_USING_V110_SDK71_ -D_CRT_NONSTDC_NO_WARNINGS=1 -D_WINSOCKAPI_=1 /EHsc- -DWINVER=0x0A00 -D_WIN32_WINNT=0x0A00 -DNTDDI_VERSION=NTDDI_WIN10_RS2 -D_CONSOLE=1 -DWIN32_LEAN_AND_MEAN /sdl- /GS- /GT /Zc:strictStrings- -DCOMPILER_MSVC=1"
#CFLAGS=""
#CONAN_CACERT_PATH=...
