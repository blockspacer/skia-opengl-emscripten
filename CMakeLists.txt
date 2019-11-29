cmake_minimum_required(VERSION 3.5)

set(BASE_STANDALONE FALSE) # TODO

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "skemgl")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

# --------------------------- conan configuration ------------------------------

if(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
  list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR}/)
  include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  include(${CMAKE_BINARY_DIR}/conan_paths.cmake OPTIONAL)
  conan_basic_setup(
    # prevent conan_basic_setup from resetting cmake variables
    TARGETS
    KEEP_RPATHS
    # see https://github.com/conan-io/conan/issues/6012
    NO_OUTPUT_DIRS)
else()
  message (FATAL_ERROR "must use conan")
endif()

find_package(cmake_platform_detection REQUIRED)
run_cmake_platform_detection()

find_package(cmake_build_options REQUIRED)
setup_cmake_build_options(RELEASE DEBUG)

find_package(cobalt_glm REQUIRED)

# this sets the paths that cmake will use to locate libs (via the FindXXX.cmake or XXConfig.cmake scripts)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/SDL2)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/utils)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/utils/checks)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/utils/options)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/utils/options/chromium)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)

# ------------------------- External CMake includes ----------------------------

# CMake-provided scripts
include(ExternalProject)
include(CheckCXXCompilerFlag)
include(CheckSymbolExists)
include(TestBigEndian)
include(CheckIncludeFile)
include(CheckLibraryExists)
include(CMakePackageConfigHelpers)
include(GNUInstallDirs)
# Helper module for selecting option based on multiple values. Module help:
# https://cmake.org/cmake/help/v3.10/module/CMakeDependentOption.html
include(CMakeDependentOption)

# ------------------------------- Options --------------------------------------

include(ConfigSafeGuards)

include(ForceLatinPaths)

include(PlatformChecks)

include(BuildOptions)

include(CommonOptions)

if(TARGET_EMSCRIPTEN)
  include(EmscriptenOptions)
endif(TARGET_EMSCRIPTEN)

include(ChromiumOptions)

include(GLEW_Options)

include(Threads_Options)

include(LibDL_Options)

include(GLES2_Options)

include(GL_Options)

include(SDL2_Options)

include(ZLIB_Options)

include(CXTPLOptions)

include(freetype_Options)

include(harfbuzz_Options)

if(RELEASE_BUILD AND NOT TARGET_EMSCRIPTEN)
  include(StripDebugSymbols)
endif(RELEASE_BUILD AND NOT TARGET_EMSCRIPTEN)

include(SetOptimizeFlags)

# --------------------------------- Utils --------------------------------------

include(Utils)

# ------------------------------ Project files ---------------------------------

include(ProjectFiles)

# --------------------------- CMake configuration ------------------------------

# set_cmake_module_paths from Utils.cmake
set_cmake_module_paths( ${PROJECT_NAME}
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake;${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules" )
list(APPEND CMAKE_MODULE_PATH
  "${CMAKE_CURRENT_SOURCE_DIR}/submodules/CXTPL/cmake/exports")
# prevent_in_source_builds from Utils.cmake
prevent_in_source_builds()
# check_supported_os from Utils.cmake
check_supported_os()
if(NOT EMSCRIPTEN)
  option(USE_LD_GOLD "Use GNU gold linker" ON)
  # add_gold_linker from Utils.cmake
  add_gold_linker()
  option(USE_CCACHE "Use CCACHE" ON)
  # add_ccache from Utils.cmake
  add_ccache()
endif(NOT EMSCRIPTEN)

find_threads()

# ------------------------- print_cmake_system_info ----------------------------

# print_cmake_system_info from Utils.cmake
print_cmake_system_info()

# ------------------------------- definitions ----------------------------------

if(NOT RELEASE_BUILD)
  if(TARGET_WINDOWS)
    set(COMMON_FLAGS "${COMMON_FLAGS} /D_DEBUG") #
  endif(TARGET_WINDOWS)
  #
  set(COMMON_FLAGS "${COMMON_FLAGS} -DD_DEBUG") #
endif(NOT RELEASE_BUILD)

if(NOT TARGET_WINDOWS)
  # always return on non-void functions to prevent UB
  set(COMMON_FLAGS "${COMMON_FLAGS} -Wreturn-type")
  # https://gist.github.com/morido/8637535
  set(COMMON_FLAGS "${COMMON_FLAGS} -Werror=return-type")
endif(NOT TARGET_WINDOWS)

if(RELEASE_BUILD)
  list(APPEND APP_DEFINITIONS RELEASE_BUILD=1)
endif(RELEASE_BUILD)

list(APPEND APP_DEFINITIONS SDL_MAIN_HANDLED=1)
list(APPEND APP_DEFINITIONS ENABLE_OPENGL=1)
list(APPEND APP_DEFINITIONS ENABLE_CUSTOM_FONTS=1)
list(APPEND APP_DEFINITIONS HARFBUZZ_UNICODE=1)
list(APPEND APP_DEFINITIONS ENABLE_SK_EFFECTS=1)

if(NOT ENABLE_NATIVE_HTML)
  list(APPEND APP_DEFINITIONS ENABLE_EMSCRIPTEN_INPUT=1)
endif(NOT ENABLE_NATIVE_HTML)

if(ENABLE_SKIA)
  list(APPEND APP_DEFINITIONS ENABLE_SK_UI=1)
  list(APPEND APP_DEFINITIONS ENABLE_IMAGES=1)
endif(ENABLE_SKIA)

if(ENABLE_MAIN)
  list(APPEND APP_DEFINITIONS ENABLE_MAIN=1)
endif(ENABLE_MAIN)

include_directories( # TODO: use target_include_directories
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
)

# # TODO
# #set(COMMON_CXX_FLAGS "-DNEED_SHORT_EXTERNAL_NAMES=1")

# -fno-exceptions
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
## set(CMAKE_CXX_STANDARD 17)
## set(CMAKE_CXX_STANDARD_REQUIRED ON)
## set(CMAKE_CXX_EXTENSIONS OFF) # -std=c++11 instead of -std=gnu++11

if(TARGET_WINDOWS)
  # see http://clang.llvm.org/docs/UsersManual.html#clang-cl
  set(COMMON_CXX_FLAGS "${COMMON_CXX_FLAGS} /std:c++17")
else()
  set(COMMON_CXX_FLAGS "${COMMON_CXX_FLAGS} -std=c++17") # use target options
endif()

# see https://github.com/chromium/chromium/blob/master/build/config/compiler/BUILD.gn#L683
#set(COMMON_CXX_FLAGS "${COMMON_CXX_FLAGS} -ftime-trace")
# see https://aras-p.info/blog/2019/01/12/Investigating-compile-times-and-Clang-ftime-report/
#set(COMMON_CXX_FLAGS "${COMMON_CXX_FLAGS} -ftime-report")

# TODO
set(COMMON_CXX_FLAGS "${COMMON_CXX_FLAGS} -DCODEC_IMPLEMENTATION=1")

# TODO:
# https://github.com/ambiesoft/gsrc/blob/199d762d322087c67cec2e9f1aaa7bfd5e0eb4c4/info/20180715-builderror-220332.txt#L76
# https://groups.google.com/a/chromium.org/forum/#!topic/gn-dev/-PraKAwRlV8
# https://developercommunity.visualstudio.com/content/problem/339089/arm64-conversion-issue-error-c2440-initializing-1.html

MATH(EXPR SIZEOF_VOID_P_BITS "${CMAKE_SIZEOF_VOID_P}*8")
set(COMMON_FLAGS "${COMMON_FLAGS} -DSIZEOF_VOID_P=${SIZEOF_VOID_P_BITS}")
message(STATUS "DSIZEOF_VOID_P=${SIZEOF_VOID_P_BITS}")

set(COMMON_FLAGS "${COMMON_FLAGS} -DUI_VIEWS_PORT=1")

if(MSVC) # TODO
    # see https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version?view=vs-2019

    #set(COMMON_FLAGS "${COMMON_FLAGS} -DWCHAR_T_IS_UTF16=1") # TODO: narrowing

    #set(COMMON_FLAGS "${COMMON_FLAGS} /wd2397") # TODO: narrowing
    #set(COMMON_FLAGS "${COMMON_FLAGS} /wd2398") # TODO: narrowing
    #set(COMMON_FLAGS "${COMMON_FLAGS} /wd2440") # TODO: narrowing
    #set(COMMON_FLAGS "${COMMON_FLAGS} /wd2712") # TODO: Cannot use __try in functions that require object unwinding

    # https://docs.microsoft.com/en-us/cpp/build/reference/gf-eliminate-duplicate-strings?view=vs-2019
    #set(COMMON_FLAGS "${COMMON_FLAGS} /GF")

    # https://docs.microsoft.com/en-us/cpp/build/reference/z7-zi-zi-debug-information-format?view=vs-2019
    #set(COMMON_FLAGS "${COMMON_FLAGS} /Zi")

    # https://docs.microsoft.com/en-us/cpp/build/reference/tc-tp-tc-tp-specify-source-file-type?view=vs-2019
    #set(COMMON_FLAGS "${COMMON_FLAGS} /TP")

    # TODO: https://stackoverflow.com/a/34630892

    # https://docs.microsoft.com/en-us/cpp/build/reference/za-ze-disable-language-extensions?view=vs-2019
    # set(COMMON_FLAGS "${COMMON_FLAGS} /Za")

    # unknown option
    #set(COMMON_FLAGS "${COMMON_FLAGS} /permissive")

    set(COMMON_FLAGS "${COMMON_FLAGS} -DCOMPILER_MSVC=1")

    # https://docs.microsoft.com/en-us/cpp/build/reference/zc-strictstrings-disable-string-literal-type-conversion?view=vs-2019
    set(COMMON_FLAGS "${COMMON_FLAGS} /Zc:strictStrings-")

    # https://docs.microsoft.com/en-us/cpp/build/reference/gd-gr-gv-gz-calling-convention?view=vs-2019
    #set(COMMON_FLAGS "${COMMON_FLAGS} /Gv")

    # https://docs.microsoft.com/en-us/cpp/build/reference/gt-support-fiber-safe-thread-local-storage?view=vs-2019
    set(COMMON_FLAGS "${COMMON_FLAGS} /GT")

    # https://docs.microsoft.com/en-us/cpp/build/reference/gs-buffer-security-check?view=vs-2019
    set(COMMON_FLAGS "${COMMON_FLAGS} /GS-")

    set(COMMON_FLAGS "${COMMON_FLAGS} -D_CRT_SECURE_NO_WARNINGS=1")

    # https://docs.microsoft.com/en-us/cpp/build/reference/sdl-enable-additional-security-checks?view=vs-2019
    set(COMMON_FLAGS "${COMMON_FLAGS} /sdl-")

    #set(COMMON_FLAGS "${COMMON_FLAGS} /D__DATE__=")

    #set(COMMON_FLAGS "${COMMON_FLAGS} /D__TIME__=")

    #set(COMMON_FLAGS "${COMMON_FLAGS} /D__TIMESTAMP__=")

    #set(COMMON_FLAGS "${COMMON_FLAGS} /d2FastFail")

    # https://docs.microsoft.com/en-us/cpp/build/reference/wx-treat-linker-warnings-as-errors?view=vs-2019
    #set(COMMON_FLAGS "${COMMON_FLAGS} /WX")

    set(COMMON_FLAGS "${COMMON_FLAGS} -DWIN32_LEAN_AND_MEAN")

    # LDFLAGS https://git.m4xw.net/Switch/RetroArch/beetle-pce-fast-libretro/commit/48a734c9dc36905fa6779303fb1c80003bce4853?w=1
    #set(COMMON_FLAGS "${COMMON_FLAGS} -SUBSYSTEM:CONSOLE")
    #set(COMMON_FLAGS "${COMMON_FLAGS} /SUBSYSTEM:CONSOLE")
    #set(COMMON_FLAGS "${COMMON_FLAGS} /SUBSYSTEM:WINDOWS")

    set(COMMON_FLAGS "${COMMON_FLAGS} -D_CONSOLE=1")

    #set(COMMON_FLAGS "${COMMON_FLAGS} -DWINAPI_FAMILY=WINAPI_FAMILY_DESKTOP_APP")

    # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L276
    set(COMMON_FLAGS "${COMMON_FLAGS} -DNTDDI_VERSION=NTDDI_WIN10_RS2")
    set(COMMON_FLAGS "${COMMON_FLAGS} -D_WIN32_WINNT=0x0A00")
    set(COMMON_FLAGS "${COMMON_FLAGS} -DWINVER=0x0A00")

    # Exceptions in allocator shim are not supported!
    # see https://github.com/chromium/chromium/blob/5514bb10d8770fea460152d278f105895067aa38/build/config/compiler/BUILD.gn#L1775
    # TODO: /EHsc- # Disabling Exceptions for MSVC
    set(COMMON_FLAGS "${COMMON_FLAGS} /EHsc-")

    # https://stackoverflow.com/questions/1372480/c-redefinition-header-files-winsock2-h
    set(COMMON_FLAGS "${COMMON_FLAGS} -D_WINSOCKAPI_=1")

    set(COMMON_FLAGS "${COMMON_FLAGS} -D_HAS_EXCEPTIONS=0")

    # see https://github.com/jarro2783/cxxopts/issues/49
    # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L601
    set(COMMON_FLAGS "${COMMON_FLAGS} -DNOMINMAX=1")

    set(COMMON_FLAGS "${COMMON_FLAGS} -DHB_NO_MT=1") # TODO

    set(COMMON_FLAGS "${COMMON_FLAGS} -D_WIN32=1") # TODO

    # https://github.com/blockspacer/skia-opengl-emscripten/blob/8390245e4aadd160d99e297968594bb6ad86caaa/src/chromium/third_party/ced/BUILD.gn#L57
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4005") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4006") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4018") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4309") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4310") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4267") # TODO

    set(COMMON_FLAGS "${COMMON_FLAGS} -D_CRT_NONSTDC_NO_WARNINGS=1") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} -D_CRT_NONSTDC_NO_DEPRECATE=1") # TODO

    # see https://github.com/chromium/chromium/blob/5514bb10d8770fea460152d278f105895067aa38/build/config/compiler/BUILD.gn#L1093
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4117") # TODO

    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4800") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4267") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4996") # TODO

    # see https://github.com/chromium/chromium/blob/5514bb10d8770fea460152d278f105895067aa38/build/config/compiler/BUILD.gn#L1093
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4091") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4127") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4251") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4275") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4312") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4324") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4351") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4355") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4589") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4611") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4100") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4121") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4244") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4505") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4510") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4512") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4610") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4838") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4995") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4996") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4456") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4457") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4458") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4459") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4200") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4201") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4204") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4221") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4245") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4267") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4305") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4389") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4702") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4701") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4703") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4661") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4706") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4715") # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /wd4577") # TODO
endif(MSVC)

if(RELEASE_BUILD)
  if(MSVC) # TODO
    set(COMMON_FLAGS "${COMMON_FLAGS} /GR-")
    #set(COMMON_FLAGS "${COMMON_FLAGS} -fno-exceptions")
    set(COMMON_FLAGS "${COMMON_FLAGS} -DNDEBUG=1")
    #
    # see https://docs.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=vs-2019
    set(COMMON_FLAGS "${COMMON_FLAGS} /MD")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} /MD")
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} /MD")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")
  else()
    if(ENABLE_EMBIND)
      # see https://github.com/emscripten-core/emscripten/issues/7001
      # see https://github.com/emscripten-core/emscripten/issues/9122
      # set(COMMON_FLAGS "${COMMON_FLAGS} -frtti")
      set(COMMON_FLAGS "${COMMON_FLAGS} -DEMSCRIPTEN_HAS_UNBOUND_TYPE_NAMES=0")
      set(COMMON_FLAGS "${COMMON_FLAGS} -fno-rtti")
    else()
      set(COMMON_FLAGS "${COMMON_FLAGS} -fno-rtti")
    endif(ENABLE_EMBIND)
    set(COMMON_FLAGS "${COMMON_FLAGS} -fno-exceptions")
    set(COMMON_FLAGS "${COMMON_FLAGS} -DNDEBUG=1")
  endif()
else()
  if(MSVC) # TODO
    # https://stackoverflow.com/a/4184877/10904212
    # see DCHECK in base::polymorphic_downcast, dynamic_cast
    set(COMMON_FLAGS "${COMMON_FLAGS} /GR")

    # see https://docs.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=vs-2019
    set(COMMON_FLAGS "${COMMON_FLAGS} /MDd")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} /MDd")
    set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} /MDd")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")

    # TODO
    # see https://stackoverflow.com/questions/7668200/error-lnk2038-mismatch-detected-for-iterator-debug-level-value-0-doesnt
    # see https://docs.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-2013/hh697468(v=vs.120)?redirectedfrom=MSDN
    set(COMMON_FLAGS "${COMMON_FLAGS} -D_HAS_ITERATOR_DEBUGGING=0")
    set(COMMON_FLAGS "${COMMON_FLAGS} -D_ITERATOR_DEBUG_LEVEL=0")

    set(COMMON_FLAGS "${COMMON_FLAGS} -D_DEBUG=1") #
  else()
    # https://stackoverflow.com/a/4184877/10904212
    # see DCHECK in base::polymorphic_downcast, dynamic_cast
    set(COMMON_FLAGS "${COMMON_FLAGS} -frtti")
    set(COMMON_FLAGS "${COMMON_FLAGS} -D_DEBUG=1") #
  endif()
endif(RELEASE_BUILD)

if(MSVC) # TODO
  #
  set(COMMON_FLAGS "${COMMON_FLAGS} -ferror-limit=500") # for clang-cl
  #set(COMMON_FLAGS "${COMMON_FLAGS} /errorlimit:0")

  # see https://medium.com/@alasher/colored-c-compiler-output-with-ninja-clang-gcc-10bfe7f2b949
  set(COMMON_FLAGS "${COMMON_FLAGS} -fcolor-diagnostics") # for clang-cl

  # see https://software.intel.com/en-us/forums/intel-c-compiler/topic/733662
  # see https://unicode-org.atlassian.net/browse/ICU-13251?page=com.atlassian.jira.plugin.system.issuetabpanels%3Aall-tabpanel
  set(COMMON_FLAGS "${COMMON_FLAGS} /utf-8")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} /Gy")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} /FS")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} /bigobj")

  # see https://docs.microsoft.com/en-us/cpp/build/reference/zc-cplusplus?view=vs-2019
  set(COMMON_FLAGS "${COMMON_FLAGS} /Zc:__cplusplus")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} /Zc:sizedDealloc-")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -D__STD_C")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_CRT_RAND_S")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  #set(COMMON_FLAGS "${COMMON_FLAGS} -D_CRT_SECURE_NO_DEPRECATE")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  #set(COMMON_FLAGS "${COMMON_FLAGS} -D_SCL_SECURE_NO_DEPRECATE")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  #set(COMMON_FLAGS "${COMMON_FLAGS} -D_ATL_NO_OPENGL")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_WINDOWS")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -DCERT_CHAIN_PARA_HAS_EXTRA_FIELDS")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -DPSAPI_VERSION=2")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -DWIN32")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_SECURE_ATL")

  # see https://github.com/chromium/chromium/blob/8e82c6ab1bc2223fa25f1a127b65071d2d58ae36/build/config/win/BUILD.gn#L60
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_USING_V110_SDK71_")
endif()

if(ENABLE_COBALT AND NOT RELEASE_BUILD)
  list(APPEND COBALT_COMMON_DEFINES COBALT_BUILD_TYPE_DEBUG=1)
  list(APPEND COBALT_COMMON_DEFINES COBALT_BUILD_TYPE_DEVEL=1)
  # TODO # ENABLE_DEBUGGER
  # TODO # COBALT_BUILD_TYPE_QA
  # TODO # COBALT_ENABLE_JAVASCRIPT_ERROR_LOGGING
  # TODO # COBALT_SECURITY_SCREEN_CLEAR_TO_UGLY_COLOR
  # TODO # ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  # TODO # ENABLE_DEBUG_C_VAL
  # TODO # ENABLE_DEBUG_CONSOLE
  # TODO # ENABLE_IGNORE_CERTIFICATE_ERRORS
  # TODO # ENABLE_PARTIAL_LAYOUT_CONTROL
  # TODO # ENABLE_TEST_DATA
  # TODO # ENABLE_TEST_RUNNER
  # TODO # COBALT_BOX_DUMP_ENABLED
  # TODO # COBALT_FORCE_CSP
  # TODO # COBALT_FORCE_HTTPS
  # TODO # COBALT_BUILD_TYPE_GOLD
endif()

if(EMSCRIPTEN)
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_X11=0")
  # custom define
  set(COMMON_FLAGS "${COMMON_FLAGS} -DNO_CHROMIUM_WINDOW=1")
elseif(TARGET_LINUX)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_X11=1")
  # custom define
  set(COMMON_FLAGS "${COMMON_FLAGS} -DNO_CHROMIUM_WINDOW=1")
elseif(TARGET_WINDOWS)
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_X11=1") # TODO <<<
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_UNICODE=1") # TODO <<<
  set(COMMON_FLAGS "${COMMON_FLAGS} -DUNICODE=1") # TODO <<<
  set(COMMON_FLAGS "${COMMON_FLAGS} -DNO_TCMALLOC=1") # TODO <<<
  # custom define
  set(COMMON_FLAGS "${COMMON_FLAGS} -DNO_CHROMIUM_WINDOW=1")
else()
  message(FATAL_ERROR "platform not supported")
endif()

# https://github.com/emscripten-core/emscripten/issues/4932
# https://github.com/kosh04/newlisp/blob/master/newlisp.h#L164
# TODO
if(TARGET_EMSCRIPTEN OR TARGET_LINUX)
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_FILE_OFFSET_BITS=64")
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_LARGEFILE_SOURCE=1")
endif()

if(TARGET_EMSCRIPTEN)
  # TODO: -mnontrapping-fptoint
elseif(TARGET_LINUX)
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_LARGEFILE64_SOURCE=1")
  set(COMMON_FLAGS "${COMMON_FLAGS} -DHAVE_PTHREAD=1")
elseif(TARGET_WINDOWS)
  #set(COMMON_FLAGS "${COMMON_FLAGS} -D_LARGEFILE64_SOURCE=1")
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DHAVE_PTHREAD=1")
else()
  message(FATAL_ERROR "platform not supported")
endif()

# NVALGRIND used in tcmalloc and third_party/valgrind.h
set(COMMON_FLAGS "${COMMON_FLAGS} -DNVALGRIND=1")

if(USE_SK_GPU)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SUPPORT_GPU=1") # skia_enable_gpu
  #set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SUPPORT_GPU") # skia_enable_gpu
else()
 set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SUPPORT_GPU=0") # skia_enable_gpu
endif(USE_SK_GPU)

# see https://github.com/zenoalbisser/chromium/blob/e71f21b9b4b9b839f5093301974a45545dad2691/skia/BUILD.gn#L164
# see https://github.com/google/skia/blob/a6dc5c54e6f854c5d73d46d0ad2edbde9701e6d9/public.bzl#L596
if(TARGET_LINUX)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_BUILD_FOR_UNIX=1") # note: NOT from BUILD.gn
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_EXPONENT=1.2")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_CONTRAST=0.2")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DEFAULT_FONT_CACHE_LIMIT=20971520")
elseif(TARGET_EMSCRIPTEN)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DPNG_SKIP_SETJMP_CHECK=1")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_EXPONENT=1.2")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_CONTRAST=0.2")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DEFAULT_FONT_CACHE_LIMIT=20971520")
elseif(TARGET_WINDOWS)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_BUILD_FOR_WIN=1") # note: NOT from BUILD.gn
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_SRGB=1")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_CONTRAST=0.5")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DEFAULT_FONT_CACHE_LIMIT=20971520")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DEFAULT_FONT_CACHE_COUNT_LIMIT=256")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DGR_GL_FUNCTION_TYPE=__stdcall")
elseif(TARGET_ANDROID)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_BUILD_FOR_ANDROID=1") # note: from BUILD.gn
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_BUILD_FOR_ANDROID=1") # note: from BUILD.gn
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DUSE_CHROMIUM_SKIA=1")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_APPLY_TO_A8=1")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_EXPONENT=1.4")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_CONTRAST=0.0")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DEFAULT_FONT_CACHE_LIMIT=1048576")
elseif(TARGET_MAC)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_BUILD_FOR_MAC=1") # note: from BUILD.gn
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_METAL=1")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_SRGB=1")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_GAMMA_CONTRAST=0.0")
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DEFAULT_FONT_CACHE_LIMIT=20971520")
else()
  message(FATAL_ERROR "platform not supported")
endif()

set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DISABLE_READBUFFER=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DLIBANGLE_IMPLEMENTATION=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DLIBGLESV2_IMPLEMENTATION=1")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DLIBEGL_IMPLEMENTATION=1")
# see modules/skottie/utils/SkottieUtils.cpp
if(ENABLE_SKOTTIE)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_INCLUDE_MANAGED_SKOTTIE=1")
endif(ENABLE_SKOTTIE)

#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_ESSL=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_GLSL=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_HLSL=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_OPENGL=1")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DEGL_EGLEXT_PROTOTYPES=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DGL_GLEXT_PROTOTYPES=1")
# https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skottie/BUILD.gn#L14
if(ENABLE_SKOTTIE)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ENABLE_SKOTTIE=1")
endif(ENABLE_SKOTTIE)

find_glew()

find_LibDL()

find_GLES2()

find_GL()

find_SDL2()
# TODO: move to SDL2 from conan
if(TARGET_WINDOWS)
 if(DEFINED SDL2_INCLUDE_DIRS AND SDL2_INCLUDE_DIRS)
   list(APPEND SDL2_INCLUDE_DIRS ${SDL2_INCLUDE_DIRS}/..) # TODO: hack to include SDL2/SDL.h on windows
 endif(DEFINED SDL2_INCLUDE_DIRS AND SDL2_INCLUDE_DIRS)
 if(DEFINED SDL2_INCLUDE_DIR AND SDL2_INCLUDE_DIR)
   list(APPEND SDL2_INCLUDE_DIR ${SDL2_INCLUDE_DIR}/..) # TODO: hack to include SDL2/SDL.h on windows
 endif(DEFINED SDL2_INCLUDE_DIR AND SDL2_INCLUDE_DIR)
endif(TARGET_WINDOWS)

if(NOT TARGET_EMSCRIPTEN AND USE_SYSTEM_ZLIB)
  message(FATAL_ERROR "USE_SYSTEM_ZLIB supported only on EMSCRIPTEN platform")
endif(NOT TARGET_EMSCRIPTEN AND USE_SYSTEM_ZLIB)

if(ENABLE_ZLIB AND USE_SYSTEM_ZLIB)
  find_ZLIB()
endif(ENABLE_ZLIB AND USE_SYSTEM_ZLIB)

find_freetype()

if(ENABLE_HARFBUZZ AND NOT USE_CUSTOM_HARFBUZZ)
  message(FATAL_ERROR "TODO: support for find_harfbuzz()")
  find_harfbuzz()
endif(ENABLE_HARFBUZZ AND NOT USE_CUSTOM_HARFBUZZ)

set_optimize_flags()

if(NOT TARGET_EMSCRIPTEN)
  if(USE_SK_GPU)
    set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ASSUME_GL=1")
  endif(USE_SK_GPU)
endif(NOT TARGET_EMSCRIPTEN)

if(ENABLE_BASE)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BASE=1")
  #list(APPEND APP_DEFINITIONS ENABLE_BASE_PREALLOC=1)
elseif(EMSCRIPTEN)
  # NOTE: OS_EMSCRIPTEN defined by BASE otherwise
  list(APPEND APP_DEFINITIONS OS_EMSCRIPTEN=1) # useful if base disabled
endif(ENABLE_BASE)

#
if(ENABLE_WTF)
  # NOTE: WTF requires BASE
  list(APPEND APP_DEFINITIONS ENABLE_WTF=1)
endif()

# NOTE: header from SKIA_EXT
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_USER_CONFIG_HEADER=\\\"${SKIA_EXT_DIR}config/SkUserConfig.h\\\"")
# NOTE: modified SkUserConfig.h
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_REF_CNT_MIXIN_INCLUDE=\\\"${SKIA_EXT_DIR}config/sk_ref_cnt_ext_release.h\\\"")

#
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ICU_DEFINES}")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${ICU_DEFINES}")
#
if(TARGET_EMSCRIPTEN)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EMCC_COMMON}")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EMCC_COMMON}")
endif(TARGET_EMSCRIPTEN)

find_package(chromium_build_util REQUIRED)
if(TARGET chromium_build_util::chromium_build_util-static)
  set(build_util_LIB chromium_build_util::chromium_build_util-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_build_util library")
endif()

if(ENABLE_COBALT)
  find_package(cobalt_starboard_headers_only REQUIRED)
  if(TARGET cobalt_starboard_headers_only::cobalt_starboard_headers_only-static)
    set(cobalt_starboard_headers_only_LIB cobalt_starboard_headers_only::cobalt_starboard_headers_only-static)
  else()
    message(FATAL_ERROR "not supported: using system provided cobalt_starboard_headers_only library")
  endif()

  find_package(cobalt_starboard REQUIRED)
  if(TARGET cobalt_starboard::cobalt_starboard-static)
    set(cobalt_starboard_LIB cobalt_starboard::cobalt_starboard-static)
  else()
    message(FATAL_ERROR "not supported: using system provided cobalt_starboard library")
  endif()

  find_package(cobalt_nanobase REQUIRED)
  if(TARGET cobalt_nanobase::cobalt_nanobase-static)
    set(cobalt_nanobase_LIB cobalt_nanobase::cobalt_nanobase-static)
  else()
    message(FATAL_ERROR "not supported: using system provided cobalt_nanobase library")
  endif()

  find_package(cobalt_base REQUIRED)
  if(TARGET cobalt_base::cobalt_base-static)
    set(cobalt_base_LIB cobalt_base::cobalt_base-static)
  else()
    message(FATAL_ERROR "not supported: using system provided cobalt_base library")
  endif()
endif(ENABLE_COBALT)

find_package(chromium_base REQUIRED)
if(TARGET chromium_base::chromium_base-static)
  set(base_LIB chromium_base::chromium_base-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_base library")
endif()

find_package(chromium_url REQUIRED)
if(TARGET chromium_url::chromium_url-static)
  set(url_LIB chromium_url::chromium_url-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_url library")
endif()

#
# ICU
#
if(USE_ICU)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DHAS_ICU=1")
  if(NOT DEFINED USE_CUSTOM_ICU)
    message(FATAL_ERROR "need to define USE_CUSTOM_ICU")
  endif(NOT DEFINED USE_CUSTOM_ICU)
  if(USE_CUSTOM_ICU)
    # chromium_icu
    if(TARGET_LINUX OR TARGET_EMSCRIPTEN)
      find_package(chromium_icu REQUIRED)
      if(NOT TARGET chromium_icu::chromium_icu-static)
        message(FATAL_ERROR "not supported: using system provided chromium_icu library")
      endif()
    elseif(TARGET_WINDOWS)
      # skip
    else()
      message(FATAL_ERROR "chromium_icu not found")
    endif()
    #
    set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_CUSTOM_ICU=1")
    set(CUSTOM_ICU_LIB chromium_icu::chromium_icu-static) # see icu.cmake
  else()
    set(CUSTOM_ICU_LIB icu) # platform specific
    message(FATAL_ERROR "TODO: supports not only USE_CUSTOM_ICU")
  endif(USE_CUSTOM_ICU)
endif(USE_ICU)
#
if(NOT DEFINED CUSTOM_ICU_LIB)
  message(FATAL_ERROR "CUSTOM_ICU_LIB must be defined")
endif(NOT DEFINED CUSTOM_ICU_LIB)

# TODO: move to base
# ${dynamic_annotations_LIB}
if(TARGET_LINUX)
  # ENABLE_DYNAMIC_ANNOTATIONS option defines DYNAMIC_ANNOTATIONS_ENABLED=1
  # NOTE: we always need to link with dynamic_annotations
  set(ENABLE_DYNAMIC_ANNOTATIONS TRUE) # required by tcmalloc
elseif(TARGET_EMSCRIPTEN OR TARGET_WINDOWS)
  set(ENABLE_DYNAMIC_ANNOTATIONS FALSE)
else()
  message(FATAL_ERROR "unknown platform")
endif()
if(NOT DEFINED ENABLE_DYNAMIC_ANNOTATIONS)
  message(FATAL_ERROR "ENABLE_DYNAMIC_ANNOTATIONS must be defined")
endif(NOT DEFINED ENABLE_DYNAMIC_ANNOTATIONS)

find_package(chromium_dynamic_annotations REQUIRED)
if(TARGET chromium_dynamic_annotations::chromium_dynamic_annotations-static)
  set(dynamic_annotations_LIB chromium_dynamic_annotations::chromium_dynamic_annotations-static)
else()
  message(FATAL_ERROR "not supported: using system provided dynamic_annotations library")
endif()

if(TARGET_LINUX)
  find_package(chromium_tcmalloc REQUIRED)
  if(TARGET chromium_tcmalloc::chromium_tcmalloc-static)
    set(tcmalloc_LIB chromium_tcmalloc::chromium_tcmalloc-static)
  else()
    message(FATAL_ERROR "not supported: using system provided chromium_tcmalloc library")
  endif()
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

#if(TARGET_LINUX)
#  # xdg_mime
#  include(xdg_mime.cmake)
#  # xdg_user_dirs
#  include(xdg_user_dirs.cmake)
#elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
#  # skip
#else()
#  message(FATAL_ERROR "platform not supported")
#endif()

# xdg_user_dirs
if(TARGET_LINUX)
  find_package(chromium_xdg_user_dirs REQUIRED)
  if(TARGET chromium_xdg_user_dirs::chromium_xdg_user_dirs-static)
    set(xdg_user_dirs_LIB chromium_xdg_user_dirs::chromium_xdg_user_dirs-static)
  else()
    message(FATAL_ERROR "not supported: using system provided xdg_user_dirs library")
  endif()
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform no supported")
endif()

# xdg_mime
if(TARGET_LINUX)
  find_package(chromium_xdg_mime REQUIRED)
  if(TARGET chromium_xdg_mime::chromium_xdg_mime-static)
    set(xdg_mime_LIB chromium_xdg_mime::chromium_xdg_mime-static)
  else()
    message(FATAL_ERROR "not supported: using system provided xdg_mime library")
  endif()
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform no supported")
endif()

# libevent
if(TARGET_LINUX)
  find_package(chromium_libevent REQUIRED)
  if(TARGET chromium_libevent::chromium_libevent-static)
    set(libevent_LIB chromium_libevent::chromium_libevent-static)
  else()
    message(FATAL_ERROR "not supported: using system provided libevent library")
  endif()
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform no supported")
endif()

# modp_b64
find_package(chromium_modp_b64 REQUIRED)
if(TARGET chromium_modp_b64::chromium_modp_b64-static)
  set(modp_b64_LIB chromium_modp_b64::chromium_modp_b64-static)
else()
  message(FATAL_ERROR "not supported: using system provided modp_b64 library")
endif()

# chromium_zlib
if(NOT USE_SYSTEM_ZLIB)
  find_package(chromium_zlib REQUIRED)
  if(TARGET chromium_zlib::chromium_zlib-static)
    if(DEFINED zlib_LIB)
      message(FATAL_ERROR "REDEFINITION: zlib_LIB")
    endif(DEFINED zlib_LIB)
    set(zlib_LIB chromium_zlib::chromium_zlib-static)
  else()
    message(FATAL_ERROR "not supported: using system provided chromium_zlib library")
  endif()
endif(NOT USE_SYSTEM_ZLIB)

# chromium_libxml
find_package(chromium_libxml REQUIRED)
if(TARGET chromium_libxml::chromium_libxml-static)
  set(libxml_LIB chromium_libxml::chromium_libxml-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_libxml library")
endif()

# compact_enc_det
set(ENABLE_COMPACT_ENC_DET TRUE)
if(NOT ENABLE_COMPACT_ENC_DET)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DDISABLE_COMPACT_ENC_DET=1")
endif(NOT ENABLE_COMPACT_ENC_DET)
if(ENABLE_COMPACT_ENC_DET)
  find_package(chromium_compact_enc_det REQUIRED)
  if(TARGET chromium_compact_enc_det::chromium_compact_enc_det-static)
    set(ced_LIB chromium_compact_enc_det::chromium_compact_enc_det-static)
  else()
    message(FATAL_ERROR "not supported: using system provided compact_enc_det library")
  endif()
endif(ENABLE_COMPACT_ENC_DET)

#
# HARFBUZZ
#
if(TARGET_EMSCRIPTEN OR TARGET_LINUX OR TARGET_WINDOWS)
  if(USE_CUSTOM_HARFBUZZ)
    # NOTE: harfbuzz from skia on WINDOWS
    if(NOT HARFBUZZ_FROM_SKIA)
      include(harfbuzz.cmake)
    endif(NOT HARFBUZZ_FROM_SKIA)
  endif(USE_CUSTOM_HARFBUZZ)
else()
  message(FATAL_ERROR "platform not supported")
endif()

#
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_C_FLAGS}")
#
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_CXX_FLAGS}")
#
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAGS}")

#
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${SK_COMMON_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${SK_COMMON_FLAGS}")

if(ENABLE_SKIA)
  #
  # skia
  #
  include(skia.cmake)
  # NOTE: HarfBuzz from skia on WINDOWS
  if(HARFBUZZ_FROM_SKIA)
    set(HARFBUZZ_LIBRARIES SKIA)
    list(APPEND HARFBUZZ_INCLUDE_DIRS ${SKIA_CMAKE_ONLY_HEADERS})
    include_directories(${HARFBUZZ_INCLUDE_DIRS})
    #list(APPEND HARFBUZZ_EXTRA_DEFINES ${SKIA_DEFINES}) # TODO
  endif()
endif()

message(STATUS "HARFBUZZ_LIBRARIES=${HARFBUZZ_LIBRARIES}")
message(STATUS "HARFBUZZ_INCLUDE_DIRS=${HARFBUZZ_INCLUDE_DIRS}")

if(ENABLE_GRE2)
  include(${CHROMIUM_DIR}GRE2.cmake)
endif(ENABLE_GRE2)#

#if(ENABLE_GLIBXML)
#  include(${CHROMIUM_DIR}GLIBXML.cmake)
#endif(ENABLE_GLIBXML)

if (USE_LIBPNG AND USE_CUSTOM_LIBPNG)
  # GLIBPNG
  include(${CHROMIUM_DIR}GLIBPNG.cmake)
endif()

if(USE_LIBJPEG AND USE_CUSTOM_LIBJPEG)
  message(FATAL_ERROR "GLIBJPEG not supported yet")
  # libjpeg: requires LIBXML
  include(${CHROMIUM_DIR}GLIBJPEG.cmake)
endif(USE_LIBJPEG AND USE_CUSTOM_LIBJPEG)

if(USE_LIBJPEG_TURBO AND USE_CUSTOM_LIBJPEG_TURBO)
  # GLIBJPEG_TURBO: requires LIBJPEG
  include(${CHROMIUM_DIR}GLIBJPEG_TURBO.cmake)
endif(USE_LIBJPEG_TURBO AND USE_CUSTOM_LIBJPEG_TURBO)

if(ENABLE_LIBYUV)
  include(${CHROMIUM_DIR}libyuv.cmake)
endif(ENABLE_LIBYUV)

if(ENABLE_ICCJPEG)
  include(${CHROMIUM_DIR}iccjpeg.cmake)
endif(ENABLE_ICCJPEG)

if(ENABLE_LIBWEBP)
  include(${CHROMIUM_DIR}libwebp.cmake)
endif(ENABLE_LIBWEBP)

#
# WTF
#
if(ENABLE_WTF OR ENABLE_BLINK OR ENABLE_COBALT OR ENABLE_BASE)
  # base: General-purpose toolkit
  # Depends on : libevent, libicui18n
  #
  # NOTE: remove fork of libicui
  # as in https://github.com/Tarnyko/chromium-lite/blob/master/README#L76
  #
  #add_subdirectory(thirdparty/chromium_base)

  # chromium
  add_subdirectory(src/chromium) # requires skia above
endif()
if(ENABLE_WTF)
  set(WTF_LIBRARY_NAME wtf)
  #message(FATAL_ERROR ${WTF_LIBRARY_NAME})
  set(WTF_LIBS
    ${WTF_LIBRARY_NAME}
    ${base_LIB}
    #${libevent_LIB}
    #${CUSTOM_ICU_LIB}
  )
endif(ENABLE_WTF)

#
# COBALT
#
if(ENABLE_COBALT)
  add_subdirectory(src/cobalt) # requires skia above
  #
  #message(FATAL_ERROR ${WTF_LIBRARY_NAME})
  #set(WTF_LIBS
  #  ${WTF_LIBRARY_NAME}
  #  #base
  #  #${libevent_LIB}
  #  #${CUSTOM_ICU_LIB}
  #)
endif(ENABLE_COBALT)

if(ENABLE_SKIA)
  set(SKIA_INCLUDES
      ${SKIA_HEADERS}
      ${SKIA_EXT_DIR}
      ${SKIA_EXT_PARENT_DIR}
      ${SKIA_PARENT_DIR}
      ${SKIA_DIR}
      ${SKIA_DIR}/include
      ${SKIA_DIR}/include/c
      ${SKIA_DIR}/include/core
      ${SKIA_DIR}/third_party
      ${SKIA_DIR}/third_party/skcms
  )
endif(ENABLE_SKIA)

if (ENABLE_SKIA)
  if (ENABLE_BLINK)
    add_dependencies(SKIA_EXT SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(UI_GFX SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    if(ENABLE_CHROMIUM_CC)
      add_dependencies(${CC_LIB} SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    endif(ENABLE_CHROMIUM_CC)
    if(ENABLE_CHROMIUM_ANIMATION_CC)
      add_dependencies(${ANIMATION_CC_LIB} SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    endif(ENABLE_CHROMIUM_ANIMATION_CC)
    add_dependencies(PAINT_CC SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(DEBUG_CC SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(BASE_CC SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GPU_COMMAND_BUFFER SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GFX_CODEC SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GFX_GEOMETRY SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GFX_GEOMETRY_SKIA SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GFX_COLOR_SPACE SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GFX_SWITCHES SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
    add_dependencies(GFX_RANGE SKIA_build ${sksg_LIB} SKIA ${skshaper_LIB})
  endif(ENABLE_BLINK)
endif(ENABLE_SKIA)

# NOTE: -s LINKABLE=1 is not supported with -s USE_PTHREADS>0
# https://www.mail-archive.com/emscripten-discuss@googlegroups.com/msg07864.html
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s SIDE_MODULE=0")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s MAIN_MODULE=1")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s MAIN_MODULE=2")

#  -s NO_DYNAMIC_EXECUTION=1 and -s RELOCATABLE=1 build modes are mutually exclusive.

# -s NO_DYNAMIC_EXECUTION=2 which demotes eval() errors
# to warnings at runtime, useful for iterating fixes in a codebase for multiple
# eval()s

add_executable(${PROJECT_NAME}
  ${PROJECT_SRC}
  #DEPENDS SKIA
)

# TODO
#if(RELEASE_BUILD AND NOT TARGET_EMSCRIPTEN)
#  strip_debug_symbols(${PROJECT_NAME} ${PROJECT_NAME})
#endif(RELEASE_BUILD AND NOT TARGET_EMSCRIPTEN)

if(ENABLE_SKIA)
  add_dependencies(${PROJECT_NAME}
    ${SKIA_LIBS}
  )
endif(ENABLE_SKIA)

# https://www.mail-archive.com/emscripten-discuss@googlegroups.com/msg07864.html
#set_target_properties(
#  ${PROJECT_NAME}
#  PROPERTIES LINK_FLAGS "-s MAIN_MODULE=1")

# see LINK_OPTIONS
#set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS
#  "-s MAIN_MODULE=1"
#  "-s FORCE_FILESYSTEM=1"
#)

#message(FATAL_ERROR "{CMAKE_BINARY_DIR}=${CMAKE_BINARY_DIR}")

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

if(TARGET_EMSCRIPTEN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__STDC_NO_ATOMICS__=1")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --emrun")
  # https://emscripten.org/docs/getting_started/Tutorial.html#generating-html
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -o hello.html")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources/fonts/FreeSans.ttf")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources")
endif() # EMSCRIPTEN

if(TARGET_EMSCRIPTEN)
  if(EMCC_SUPPORTS_ENVIRONMENT)
    if(ENABLE_WEB_PTHREADS)
      # When building with multithreading enabled
      # and a "-s ENVIRONMENT=" directive is specified,
      # it must include "worker" as a target!
      # (Try e.g. -s ENVIRONMENT=web,worker)';
      set(EMCC_ENVIRONMENT "-s ENVIRONMENT='web,worker'")
      #set(EMCC_ENVIRONMENT "web")
    else()
      set(EMCC_ENVIRONMENT "-s ENVIRONMENT='web'")
    endif(ENABLE_WEB_PTHREADS)
  endif(EMCC_SUPPORTS_ENVIRONMENT)
  #
  # It is recommended to use target_link_libraries() for linker flags,
  # not set_target_properties (!!!)
  # see https://stackoverflow.com/a/45905060/10904212
  set (LINK_OPTIONS
    # NOTE: -s LINKABLE=1 is not supported with -s USE_PTHREADS>0
    #"-s MAIN_MODULE=1"
    #
    # if your C code uses no files, but you include
    # some JS that does, you might need this.
    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L549
    # make the compiler include file system support even though it doesn’t see it being used.
    "-s FORCE_FILESYSTEM=1"
    #
    # The ENVIRONMENT flag lets you specify that the output will
    # only run on the web, or only run in node.js, etc.
    # This prevents the compiler from emitting code to
    # support all possible runtime environments, saving ~2KB.
    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L441
    # see https://github.com/emscripten-core/emscripten/issues/6717
    # NOTE: notice the single quoted 'web'
    # TODO # "-s ENVIRONMENT=\"'web'\""
    # TODO #
    "${EMCC_ENVIRONMENT}"
    #
  )

  set(HTML_TEMPLATE "${CMAKE_CURRENT_SOURCE_DIR}/assets/index.html")

  #message(STATUS "using template " ${HTML_TEMPLATE})

  #set(TEMPLATE_OPTION "--shell-file ${HTML_TEMPLATE}")

  set(EM_TARGET_NAME ${PROJECT_NAME})
  set(EM_TARGET_JS ${PROJECT_NAME}.js)
  set(EM_TARGET_WASM ${PROJECT_NAME}.wasm)
  configure_file(${HTML_TEMPLATE} index.html @ONLY)
  target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
    ${SKIA_INCLUDES}
  )
  target_include_directories(${PROJECT_NAME} PRIVATE
    ${GEN_COMBINED_DIR}
    ${COBALT_COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
  )

  if(NOT DEFINED ENABLE_COBALT)
    message(FATAL_ERROR "NOT DEFINED: ENABLE_COBALT")
  endif(NOT DEFINED ENABLE_COBALT)
  if(ENABLE_COBALT)
    if(NOT DEFINED cobalt_starboard_LIB)
      message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
    endif(NOT DEFINED cobalt_starboard_LIB)

    target_link_libraries(${PROJECT_NAME} PUBLIC
      ${cobalt_starboard_LIB}
      ${cobalt_starboard_headers_only_LIB}
    )
  endif(ENABLE_COBALT)

  if(NOT USE_SYSTEM_ZLIB)
    if(NOT DEFINED zlib_LIB)
      message(FATAL_ERROR "zlib_LIB must be defined")
    endif(NOT DEFINED zlib_LIB)
  endif(NOT USE_SYSTEM_ZLIB)

  # link order is top down:
  # Top is the executable, followed by directly used libraries.
  # see https://floooh.github.io/2016/01/12/cmake-dependency-juggling.html
  target_link_libraries(${PROJECT_NAME} PRIVATE
    ${base_LIB}
    #
    ${COBALT_LIBRARY_NAME}
    ${COBALT_LIBS}
    #
    ${HARFBUZZ_LIBRARIES}
    ${CUSTOM_ICU_LIB}
    ${zlib_LIB}
    #
    #base # TODO
    #modp_b64
    #${COBALT_LIBRARY_NAME}
    #cobalt_base
    #cobalt_nanobase
    #${COBALT_CSP_LIB_NAME}
    #cobalt_script
    #v8_stub
    #cobalt_dom_exception
    #cobalt_ui_navigation
    #cobalt_math
    #cobalt_media
    #cobalt_loader
    #cobalt_page_visibility
    #cobalt_cssom
    #cobalt_web_animations
    ##cobalt_dom
    #starboard_icu_init
    #starboard_eztime  # requires starboard_icu_init
    ##starboard_stub
    #starboard_platform # requires starboard_stub
    #starboard_common
    #starboard_core
    #
    #modp_b64
    #base # TODO
    #BLINK_RENDERER_CORE
    #${SERVICES_NETWORK_PUBLIC_CPP_LIB}
    #COMPONENTS_VIZ_CLIENT
    #BLINK_RENDERER_PLATFORM
    #${WTF_LIBRARY_NAME}
    #
    ${SKIA_LIBS}
    #
    #${skottie_LIB}
    #${sksg_LIB}
    #${skshaper_LIB}
    #particles
    #pathkit
    #${WUFFS_LIB_NAME}
    #jpeg
    #
    ${WTF_LIBS}
    # tcmalloc only for posix/linux/e.t.c.
    #${tcmalloc_LIB}
    #
    #UI_GFX
    #CC
    #ANIMATION_CC
    #PAINT_CC
    #DEBUG_CC
    #BASE_CC
    #GPU_COMMAND_BUFFER
    #GFX_CODEC
    #GFX_GEOMETRY
    #GFX_GEOMETRY_SKIA
    #GFX_COLOR_SPACE
    #GFX_SWITCHES
    #GFX_RANGE
    ${BLINK_LIBS}
    #
    ${LINK_OPTIONS}
  )
  #
  target_compile_definitions(${PROJECT_NAME} PRIVATE
    ${APP_DEFINITIONS}
    #GLEW_NO_GLU
    STATICALLY_LINKED_WITH_WTF=1 # NOTE: meaningful only if USE(EXPORT_MACROS)
    #${OPENGLES2_DEFINITIONS}
    # NOTE: prefer #ifndef NDEBUG, see https://stackoverflow.com/a/8594122
    #"$<$<CONFIG:DEBUG>:DEBUG>"
    ${COBALT_COMMON_DEFINES}
  )
else()
  target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
   ${SKIA_INCLUDES}
   ${GLEW_INCLUDE_PATH}
   ${FOUND_OPENGL_INCLUDE_DIR}
   ${SDL2_INCLUDE_DIR}
   ${SDL2_INCLUDE_DIRS}
   ${HARFBUZZ_INCLUDE_DIRS}
   ${OPENGLES2_INCLUDE_DIRS}
  )
  target_include_directories(${PROJECT_NAME} PRIVATE
    ${GEN_COMBINED_DIR}
    ${COBALT_COMMON_INCLUDES}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
  )

  if(NOT DEFINED ENABLE_COBALT)
    message(FATAL_ERROR "NOT DEFINED: ENABLE_COBALT")
  endif(NOT DEFINED ENABLE_COBALT)
  if(ENABLE_COBALT)
    if(NOT DEFINED cobalt_starboard_LIB)
      message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
    endif(NOT DEFINED cobalt_starboard_LIB)

    target_link_libraries(${PROJECT_NAME} PUBLIC
      ${cobalt_starboard_LIB}
      ${cobalt_starboard_headers_only_LIB}
    )
  endif(ENABLE_COBALT)

  # link order is top down:
  # Top is the executable, followed by directly used libraries.
  # see https://floooh.github.io/2016/01/12/cmake-dependency-juggling.html
  target_link_libraries(${PROJECT_NAME} PRIVATE
    ${base_LIB}
    #
    ${COBALT_LIBRARY_NAME}
    ${COBALT_LIBS}
    #cobalt_
    #cobalt_web_animations
    #${COBALT_LIBRARY_NAME}
    ${WTF_LIBS}
    #BORINGSSL
    ${GNET_LIBS}
    #
    ${SKIA_LIBS}
    #SKIA
    #${libpng_LIB}
    #${skottie_LIB}
    #${sksg_LIB}
    #${skshaper_LIB}
    #particles
    #pathkit
    #${WUFFS_LIB_NAME}
    #jpeg
    #
    ${zlib_LIB}
    #
    ${HARFBUZZ_LIBRARIES}
    ${FOUND_OPENGL_LIBRARIES}
    # see https://stackoverflow.com/questions/16390078/build-error-when-trying-to-run-an-opengl-example-in-vc
    # see https://stackoverflow.com/questions/1236670/how-to-make-opengl-apps-in-64-bit-windows
    #${OPENGL_gl_LIBRARY}
    ${FOUND_OPENGL_LIBRARIES}
    ${GLEW_LIBRARY}
    # see https://stackoverflow.com/questions/39110217/linker-errors-from-sdl2-in-my-project
    # SDL2main goes before SDL2. Linking order matters.
    #SDL2::Main
    #SDL2::SDL2main
    ${SDL2_LIBRARY} # NOTE: no SDL2::Main on Windows
    #${SDL2_LIBRARIES} # NOTE: no SDL2::Main on Windows
    #SDL2::SDL2
    #SDL2::SDL2-static
    #
    ${LINK_OPTIONS}
    #
    #${libpng_LIB}
    #GLIBPNG
    # services/service_manager
    # services/ws/public/cpp/gpu
    #BLINK_WTF
    ${WTF_LIBRARY_NAME}
    # media
    # "//services/ws/public/cpp/gpu",
    #SKIA
    #skcms
    # "//third_party:freetype_harfbuzz",
    #  "//third_party/blink/public/common",
    #${MOJO_LIB}
    # emoji-segmenter
    ${HARFBUZZ_LIBRARIES}
    ${CUSTOM_ICU_LIB}
    ${zlib_LIB}
    # webrtc
    #public_deps = [
    #  ":bindings_buildflags",
    #  ":make_platform_generated",
    #  "//base",
    #  "//cc",
    #  "//cc/animation",
    #  "//cc/paint",
    #  "//gpu/command_buffer/client:client",
    #  "//gpu/command_buffer/client:gles2_interface",
    #  "//gpu/command_buffer/common:common",
    #  "//net",
    #  "//services/device/public/mojom:generic_sensor_blink",
    #  "//services/device/public/mojom:mojom_blink",
    #  "//services/network/public/cpp:cpp",
    #  "//services/network/public/mojom",
    #  "//services/network/public/mojom:mojom_blink",
    #  "//services/resource_coordinator/public/cpp:resource_coordinator_cpp_features",
    #  "//services/resource_coordinator/public/mojom:mojom_blink",
    #  "//services/service_manager/public/mojom:mojom_blink",
    #  "//skia",
    #  "//third_party:jpeg",
    #  "//third_party/blink/public:blink_headers",
    #  "//third_party/blink/public/common",
    #  "//third_party/blink/public/mojom:mojom_platform_blink",
    #  "//third_party/blink/public/mojom:web_bluetooth_mojo_bindings_blink",
    #  "//third_party/blink/renderer/platform/heap:blink_heap_buildflags",
    #  "//third_party/blink/renderer/platform/network:make_generated",
    #  "//third_party/blink/renderer/platform/wtf",
    #  "//third_party/boringssl",
    #  "//third_party/iccjpeg",
    #  "//third_party/libpng",
    #  "//third_party/libwebp",
    #  "//third_party/ots",
    #  "//url",
    #  "//v8",
    #]
    ${BLINK_LIBS}
    ##BLINK_RENDERER_CORE
    #BLINK_RENDERER_PLATFORM
    #COMPONENTS_VIZ_CLIENT
    #CC
    #BASE_CC
    #DEBUG_CC
    #PAINT_CC
    #ANIMATION_CC
    #GPU_COMMAND_BUFFER
    #GFX_CODEC
    #GFX_GEOMETRY
    #GFX_GEOMETRY_SKIA
    #GFX_COLOR_SPACE
    #GFX_SWITCHES
    #GFX_RANGE
    #SKIA_EXT
    #UI_GFX
    #${BLINK_PUBLIC_COMMON_LIB}
    #COMPONENTS_VIZ_CLIENT
    #COMPONENTS_VIZ_COMMON
    #CC
    ##G_GPU
    #UI_GFX
    #GFX_GEOMETRY
    #ANIMATION_CC
    #BASE_CC
    #PAINT_CC
    #CC
    #${SERVICES_NETWORK_PUBLIC_CPP_LIB}
    #libwebp # requires libpng
    #${libjpeg_LIB}
    #${libjpeg_TURBO_LIB}
    #${libpng_LIB}
    ${libDL_LIB}
    #${iccjpeg_LIB}
    #
    # khronos
    #${khronos_LIB}
    #LIB_V8_INTERFACE
    #COMPONENTS_SCHEDULING_METRICS
    ${HARFBUZZ_LIBRARIES}
    #${OPENGLES2_LIBRARIES}
    ${GLESv2_LIB}
    #OpenGL::OpenGL
    #OpenGL::EGL
  )
  target_compile_definitions(${PROJECT_NAME} PRIVATE
    ${APP_DEFINITIONS}
    GLEW_NO_GLU
    STATICALLY_LINKED_WITH_WTF=1 # NOTE: meaningful only if USE(EXPORT_MACROS)
    ${OPENGLES2_DEFINITIONS}
    # NOTE: prefer #ifndef NDEBUG, see https://stackoverflow.com/a/8594122
    "$<$<CONFIG:DEBUG>:DEBUG>"
    ${COBALT_COMMON_DEFINES}
  )
endif() # EMSCRIPTEN

if(ENABLE_CMAKE_COMPILE_WARNINGS)
  if(NOT MSVC OR IS_CLANG_CL)
    list(APPEND ENABLED_WARNINGS
      #-Wno-error
      # always return on non-void functions to prevent UB
      -Wreturn-type
      # https://gist.github.com/morido/8637535
      -Werror=return-type
      -Wall
      -Wextra
      -Weverything # clang
      -Wno-builtin-macro-redefined
      -Wno-unused-command-line-argument
      -Wno-unused-variable
    )
  endif(NOT MSVC OR IS_CLANG_CL)
  if(NOT MSVC OR IS_CLANG_CL)
    list(APPEND ENABLED_WARNINGS
      -Wno-error
    )
  else()
    list(APPEND ENABLED_WARNINGS "/W0") # TODO
  endif()
else(ENABLE_CMAKE_COMPILE_WARNINGS)
  if(NOT MSVC OR IS_CLANG_CL)
    list(APPEND ENABLED_WARNINGS
      -Wno-builtin-macro-redefined
      -Wno-unused-command-line-argument
      -Wno-unused-variable
    )
  endif(NOT MSVC OR IS_CLANG_CL)
  if(NOT MSVC OR IS_CLANG_CL)
    list(APPEND ENABLED_WARNINGS
      -Wno-error # clang
    )
  else()
    list(APPEND ENABLED_WARNINGS "/W0") # TODO
  endif()
endif(ENABLE_CMAKE_COMPILE_WARNINGS)

if(NOT MSVC OR IS_CLANG_CL)
  set(DISABLED_WARNINGS
    #
    -Wno-everything # TODO
    #
    -Wno-undef
    -Wno-switch
    #-pedantic-errors
    -Wno-pedantic
    -Wno-duplicate-enum
    -Wno-newline-eof
    -Wno-disabled-macro-expansion
    -Wno-c++98-compat-pedantic
    -Wno-c++98-compat-local-type-template-args
    -Wno-c++98-compat
    -Wno-weak-vtables
    -Wno-missing-prototypes
    #-Wno-shadow # TODO
    #-Wnocast-align # TODO
    -Wno-extra-semi
    -Wno-extra-semi-stmt
    #-Wno-thread-safety-negative # TODO
    -Wno-documentation
    #-Wno-double-promotion # TODO
    #-Wno-float-equal # TODO
    -Wno-missing-noreturn
    -Wno-exit-time-destructors
    -Wno-inconsistent-missing-destructor-override
    -Wno-global-constructors
    -Wno-documentation-unknown-command
    -Wno-zero-as-null-pointer-constant
    -Wno-shadow-field-in-constructor
    -Wno-padded
    -Wno-old-style-cast
    -Wno-nested-anon-types
    -Wno-deprecated-declarations
    -Wno-deprecated
    -Wno-expansion-to-defined
    -Wno-gnu-zero-variadic-macro-arguments
    -Wno-double-promotion
    -Wno-unused-value
    -Wno-unused-template
    -Wno-unused-parameter
    -Wno-unused-variable
    -Wno-unused-function
    -Wno-unused-member-function
    -Wno-unused-lambda-capture
    -Wno-reserved-id-macro
    -Wno-macro-redefined
    -Wno-implicit-function-declaration
    -Wno-c++11-narrowing
    -Wno-macro-redefined
    -Wno-builtin-macro-redefined
    -Wno-unused-command-line-argument
    -Wno-unused-variable
    #-Wno-undef
    #-Wno-unknown-pragmas
    #-Wno-nonportable-include-path
    #-Wno-unknown-argument
    # Warn for implicit type conversions that may change a value.
    #-Wconversion
    -Wno-c++11-compat
    # This complains about "override", which we use heavily.
    -Wno-c++11-extensions
    # Warns on switches on enums that cover all enum values but
    # also contain a default: branch. Chrome is full of that.
    -Wno-covered-switch-default
    # protobuf uses hash_map.
    -Wno-deprecated
    # Don't warn about the "struct foo f = {0};" initialization pattern.
    -Wno-missing-field-initializers
    # Do not warn for implicit sign conversions.
    -Wno-sign-conversion
    -Wno-unnamed-type-template-args
    # Triggered by the COMPILE_ASSERT macro.
    -Wno-unused-local-typedef
    # Do not warn if a function or variable cannot be implicitly
    # instantiated.
    -Wno-undefined-var-template
    # Do not warn about an implicit exception spec mismatch.
    -Wno-implicit-exception-spec-mismatch
  )
else()
  # TODO
  #message(FATAL_ERROR "platform not supported")
endif()

target_compile_options(${PROJECT_NAME} PRIVATE
  ${ENABLED_WARNINGS}
  ${DISABLED_WARNINGS}
)

#message(FATAL_ERROR ${PROJECT_NAME})

set(DEBUG_LIBRARY_SUFFIX "-d")
set_target_properties(${PROJECT_NAME} PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /bin
  #OUTPUT_NAME "${PROJECT_NAME}$<$<CONFIG:Debug>:${DEBUG_LIBRARY_SUFFIX}>"
)

if(TARGET_WINDOWS)
  #target_link_options(${PROJECT_NAME} PUBLIC -Wl,--subsystem,console)
  #target_link_options(${PROJECT_NAME} PUBLIC "/SUBSYSTEM:CONSOLE,10")
  set_target_properties(${PROJECT_NAME} PROPERTIES
    LINK_FLAGS
    "/SUBSYSTEM:CONSOLE"
    #"/SUBSYSTEM:CONSOLE /ENTRY:\"main\""
  )
endif(TARGET_WINDOWS)

add_custom_target(copy-runtime-files ALL
  COMMAND cmake -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/resources ${CMAKE_CURRENT_BINARY_DIR}/resources
  #DEPENDS ${PROJECT_NAME}
)
add_dependencies(${PROJECT_NAME} copy-runtime-files)

if(ENABLE_CXTPL)
  find_package(CXTPL_tool REQUIRED)

  set(cxtpl_in_dir "${CMAKE_CURRENT_SOURCE_DIR}/codegen/resources")
  set(cxtpl_out_dir "${CMAKE_CURRENT_SOURCE_DIR}/generated/resources")

  list(APPEND cxtpl_inputs "${cxtpl_in_dir}/css/index.css.cxtpl")
  list(APPEND cxtpl_outputs "${cxtpl_out_dir}/css/index.css")

  list(APPEND cxtpl_inputs "${cxtpl_in_dir}/html/index.html.cxtpl")
  list(APPEND cxtpl_outputs "${cxtpl_out_dir}/html/index.html")

  # create new codegen files
  target_add_cxtpl_tool(TARGET ${PROJECT_NAME}
                        GUID "codegen_cxtpl_1"
                        INPUTS_DIR "${cxtpl_in_dir}"
                        OUTPUTS_DIR "${cxtpl_out_dir}"
                        INPUTS "${cxtpl_inputs}"
                        OUTPUTS "${cxtpl_outputs}"
                        GENERATOR_PATH "${CMAKE_CURRENT_SOURCE_DIR}/codegen/cxtpl_generators/text_generator/text_generator.cpp"
                        LOG_CONFIG ".:=DBG1:default:console\\ default=file:path=CXTPL_tool_for_${PROJECT_NAME}.log,async=true,sync_level=DBG9\\ console=stream:stream=stderr"
                        EXTRA_ARGS ${CXTPL_EXTRA_ARGS})

  add_custom_target(copy-generated-runtime-files ALL
    COMMAND cmake -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/generated/resources ${CMAKE_CURRENT_BINARY_DIR}/resources
    #DEPENDS ${PROJECT_NAME}
  )
  add_dependencies(${PROJECT_NAME} copy-generated-runtime-files)
endif(ENABLE_CXTPL)

# IWYU detects superfluous includes and when the include can be replaced with a forward declaration.
# It can be obtained using "apt-get install iwyu" or from "github.com/include-what-you-use".
# make sure it can find Clang built-in headers (stdarg.h and friends.)
# see https://stackoverflow.com/a/30951493/10904212
option(ENABLE_IWYU "ENABLE IWYU" OFF)
if (ENABLE_IWYU)
  set(IWYU_IMP "${CMAKE_SOURCE_DIR}/cmake/iwyu/iwyu.imp")
  findPackageCrossPlatform(PythonInterp) # Required by iwyu
  add_iwyu( ${PROJECT_NAME} ) # from Utils.cmake
else()
  message(WARNING "iwyu turned off")
endif()

if(TARGET_LINUX)
  # target_ccache_summary from Utils.cmake
  target_ccache_summary(${PROJECT_NAME})
elseif(TARGET_EMSCRIPTEN OR TARGET_WINDOWS)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

#set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY LINK_FLAGS " -L\"C:/Program Files (x86)/SDL2/lib\" -lSDL2 -lSDL2Main")
#set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY LINK_FLAGS " /LIBPATH:\"C:/Program Files (x86)/SDL2/lib\" SDL2Main.lib SDL2.lib")
