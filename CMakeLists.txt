cmake_minimum_required(VERSION 3.5)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "skemgl")
project(${PROJECT_NAME} CXX)

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
  message(FATAL_ERROR "You must set your binary directory different from your source")
endif()

# this sets the paths that cmake will use to locate libs (via the FindXXX.cmake or XXConfig.cmake scripts)
LIST(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/SDL2 )
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)

#include(FindPkgMacros)

message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
IF( NOT CMAKE_BUILD_TYPE )
   SET( CMAKE_BUILD_TYPE Debug ... FORCE )
ENDIF()

# build mode. separated from CMAKE_BUILD_TYPE to provide custom debug level
# for example, you may want build optimized wasm with debug stack trace support
# NOTE: measure performace on RELEASE builds!
#set(RELEASE_BUILD TRUE)
#set(RELEASE_BUILD FALSE)
option(RELEASE_BUILD "RELEASE_BUILD" OFF)
message(STATUS "RELEASE_BUILD = ${RELEASE_BUILD}")

# Mandatory dependencies
find_program(PYTHON_FOUND python)
if(NOT PYTHON_FOUND)
  message(FATAL_ERROR "\"python\" is required, please install it !")
else()
  message(STATUS "\"python\" found...")
endif(NOT PYTHON_FOUND)

option(ENABLE_HARFBUZZ "ENABLE_HARFBUZZ" OFF)

message("CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")
if(EMSCRIPTEN)
  message("DETECTED EMSCRIPTEN")
  if ("${EMSCRIPTEN_VERSION}" VERSION_GREATER 1.38.20)
    message(STATUS "Emscripten version is ${EMSCRIPTEN_VERSION}")
  else()
    message(FATAL_ERROR "EMSCRIPTEN_VERSION is not present, or is older than 1.38.6: '${EMSCRIPTEN_VERSION}'")
  endif()
endif(EMSCRIPTEN)

# WebAssembly
set(ENABLE_WASM TRUE)
#set(ENABLE_WASM FALSE)

# SIMD
#set(ENABLE_SIMD TRUE)
set(ENABLE_SIMD FALSE)

# PTHREADS
#set(ENABLE_WEB_PTHREADS TRUE)
set(ENABLE_WEB_PTHREADS FALSE)

if(NOT ENABLE_WASM)
  message(FATAL_ERROR "only WASM build supported for now")
endif(NOT ENABLE_WASM)

if(RELEASE_BUILD)
  if(NOT CMAKE_BUILD_TYPE MATCHES Release)
    if(EMSCRIPTEN)
      message(WARNING "build with -DCMAKE_BUILD_TYPE=Release")
    else(EMSCRIPTEN)
      message(FATAL_ERROR "build with -DCMAKE_BUILD_TYPE=Release")
    endif(EMSCRIPTEN)
  endif(NOT CMAKE_BUILD_TYPE MATCHES Release)
else()
  if(NOT CMAKE_BUILD_TYPE MATCHES Debug)
    if(EMSCRIPTEN)
      message(WARNING "build with -DCMAKE_BUILD_TYPE=Debug")
    else(EMSCRIPTEN)
      message(FATAL_ERROR "build with -DCMAKE_BUILD_TYPE=Debug")
    endif(EMSCRIPTEN)
  endif(NOT CMAKE_BUILD_TYPE MATCHES Debug)
endif(RELEASE_BUILD)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR})

# -fno-exceptions
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17") # use target options

# https://stackoverflow.com/a/4184877/10904212
set(COMMON_FLAGS "${COMMON_FLAGS} -frtti")

# custom debug logger for wasm
set(PORT_OWN_DLOG TRUE)
if (PORT_OWN_DLOG)
  if (EMSCRIPTEN)
    set(EMCC_COMMON "${EMCC_COMMON} -DPORT_OWN_DLOG=1")
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set(COMMON_FLAGS "${COMMON_FLAGS} -DPORT_OWN_DLOG=1")
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif(PORT_OWN_DLOG)

# https://github.com/emscripten-core/emscripten/issues/4932
# https://github.com/kosh04/newlisp/blob/master/newlisp.h#L164
# TODO
set(COMMON_FLAGS "${COMMON_FLAGS} -D_FILE_OFFSET_BITS=64")
set(COMMON_FLAGS "${COMMON_FLAGS} -D_LARGEFILE_SOURCE=1")
if(EMSCRIPTEN)
  # todo
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_LARGEFILE64_SOURCE=1")
  set(COMMON_FLAGS "${COMMON_FLAGS} -DHAVE_PTHREAD=1")
  # Annotations useful when implementing condition variables such as CondVar,
  # using conditional critical sections (Await/LockWhen) and when constructing
  # user-defined synchronization mechanisms.
  set(COMMON_FLAGS "${COMMON_FLAGS} -DDYNAMIC_ANNOTATIONS_ENABLED=1")
else()
  message(FATAL_ERROR "platform not supported")
endif()

# NVALGRIND used in tcmalloc and third_party/valgrind.h
set(COMMON_FLAGS "${COMMON_FLAGS} -DNVALGRIND=1")

set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SUPPORT_GPU=1") # skia_enable_gpu
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SUPPORT_GPU") # skia_enable_gpu
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DISABLE_READBUFFER=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DLIBANGLE_IMPLEMENTATION=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DLIBGLESV2_IMPLEMENTATION=1")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DLIBEGL_IMPLEMENTATION=1")
# see modules/skottie/utils/SkottieUtils.cpp
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_INCLUDE_MANAGED_SKOTTIE=1")

#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_ESSL=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_GLSL=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_HLSL=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DANGLE_ENABLE_OPENGL=1")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DEGL_EGLEXT_PROTOTYPES=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DGL_GLEXT_PROTOTYPES=1")
# https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skottie/BUILD.gn#L14
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ENABLE_SKOTTIE=1")

# TODO https://github.com/mbbill/JSC.js
# # http://userguide.icu-project.org/howtouseicu
# set(ICU_DEFINES "${ICU_DEFINES} -DU_STATIC_IMPLEMENTATION=1")
# set(ICU_DEFINES "${ICU_DEFINES} -DU_COMMON_IMPLEMENTATION=1")
# set(ICU_DEFINES "${ICU_DEFINES} -DU_I18N_IMPLEMENTATION=1")
# set(ICU_DEFINES "${ICU_DEFINES} -DU_ENABLE_DYLOAD=0")
# set(ICU_DEFINES "${ICU_DEFINES} -DHAVE_DLFCN_H=0")
# set(ICU_DEFINES "${ICU_DEFINES} -DHAVE_DLOPEN=0")
# if(EMSCRIPTEN)
#   # Tell ICU that we are a 32 bit platform, otherwise,
#   # double-conversion-utils.h doesn't know how to operate.
#   set(ICU_DEFINES "${ICU_DEFINES} -D__i386__=1")
# endif()
# set(ICU_DEFINES "${ICU_DEFINES} -DU_NO_DEFAULT_INCLUDE_UTF_HEADERS=0")
# # undefines U_ATTRIBUTE_DEPRECATED
# set(ICU_DEFINES "${ICU_DEFINES} -UU_ATTRIBUTE_DEPRECATED")
# # undefines U_NO_DEFAULT_INCLUDE_UTF_HEADERS
# #set(ICU_DEFINES "${ICU_DEFINES} -UU_NO_DEFAULT_INCLUDE_UTF_HEADERS")

if(EMSCRIPTEN)
  # https://github.com/emscripten-core/emscripten/pull/7977
  # https://github.com/emscripten-ports/SDL2/pull/75
  # (new since 1.38.27) — leads to minor code size savings
  # NOTE: will drop support for DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=0 at 1.39
  # https://github.com/emscripten-core/emscripten/issues/8047
  # set(EMCC_COMMON "${EMCC_COMMON} -s DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=1")
  if ("${EMSCRIPTEN_VERSION}" VERSION_GREATER 1.38.27)
    # see https://github.com/emscripten-core/emscripten/blob/incoming/ChangeLog.md#v13827-02102019
    set(EMCC_COMMON "${EMCC_COMMON} -s DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=0")
  endif()

  set(EMCC_COMMON "${EMCC_COMMON} -DTARGET_EMSCRIPTEN")
  #
  if(ENABLE_WASM)
    #
    set(EMCC_COMMON "${EMCC_COMMON} -s WASM=1")
    #
    # Whether we should use binaryen's wasm2js to convert our wasm to JS. Set when
    # wasm backend is in use with WASM=0 (to enable non-wasm output, we compile to
    # wasm normally, then compile that to JS).
    # set(EMCC_COMMON "${EMCC_COMMON} -s WASM2JS=1")
    #
  endif(ENABLE_WASM)
  #
  #set(EMCC_COMMON "${EMCC_COMMON} -DEMSCRIPTEN_HAS_UNBOUND_TYPE_NAMES=0")
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_FREETYPE=1")
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_LIBPNG=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -D__EMSCRIPTEN__=1")

  # see https://github.com/endlessm/chromium-browser/blob/master/third_party/skia/third_party/skcms/skcms.cc#L1813
  #set(EMCC_COMMON "${EMCC_COMMON} -DSKCMS_PORTABLE=1")
  # NOTE: SKCMS_PORTABLE <=> __EMSCRIPTEN_major__

  # Tell ICU that we are a 32 bit platform, otherwise,
  # double-conversion-utils.h doesn't know how to operate.
  # set(EMCC_COMMON "${EMCC_COMMON} -D__i386__=1")

  # NOTE: This can add significant runtime overhead
  # Function pointers must be called with the correct type: it is undefined behavior
  # in C and C++ to cast a function pointer to another type and call it that way.
  # This does work in most native platforms, however, despite it being UB,
  # but in asm.js and in wasm it can fail
  # (Invalid function pointer called / implicit declaration of function)
  # see https://emscripten.org/docs/porting/guidelines/function_pointer_issues.html
  # TODO https://groups.google.com/forum/?nomobile=true#!topic/emscripten-discuss/slgrOM-BnCk
  #set(EMCC_COMMON "${EMCC_COMMON} -s EMULATE_FUNCTION_POINTER_CASTS=1")
  #
  # TODO bug: https://github.com/emscripten-core/emscripten/pull/8065
  # the problem comes when we use WASM and EMULATED_FUNCTION_POINTERS together,
  # i.e. dynamic linking. it generates the mftCall_X call but does not translate
  # it to an actual table call in the later passes.
  # -s EMULATED_FUNCTION_POINTERS=2.
  #set(EMCC_COMMON "${EMCC_COMMON} -s EMULATED_FUNCTION_POINTERS=1")

  #set(EMCC_COMMON "${EMCC_COMMON} -s SIDE_MODULE=1")

  if(RELEASE_BUILD)
    # remove duplicate functions, which C++ templates often create.
    # NOTE: done by default for wasm, in -O1 and above
    # set(EMCC_COMMON "${EMCC_COMMON} -s ELIMINATE_DUPLICATE_FUNCTIONS=1")
    #
    # EVAL_CTORS evaluates global data initializer constructors at link time,
    # which would improve startup time and reduce code size of these ctors.
    set(EMCC_COMMON "${EMCC_COMMON} -s EVAL_CTORS=1")
  endif(RELEASE_BUILD)

set(HAS_EMTERPRETIFY FALSE)
set(HAS_ASYNCIFY FALSE)

if (ENABLE_WEB_PTHREADS)
  #custom defines
  set(EMCC_COMMON "${EMCC_COMMON} -DHAVE_PTHREAD=1")
  #
  # PTHREADS
  #
  # pthread_join() on the main browser thread is not going to work!
  # or use PROXY_TO_PTHREAD
  # see https://github.com/emscripten-core/emscripten/pull/8286
  #
  # avoid having main thread synchronously block on a pthread
  # (the ".. sync blocking on main thread is bad.." mantra),
  # so dropping the pthread_join()
  # (and ensuring NO_EXIT_RUNTIME so runtime stays alive)
  # should also avoid the hang
  # https://github.com/emscripten-core/emscripten/issues/7535
  #
  # see https://developers.google.com/web/updates/2018/10/wasm-threads
  # see https://github.com/emscripten-core/emscripten/blob/incoming/tests/gl_only_in_pthread.cpp
  #
  # Embind doesn't work on pthreads
  # https://github.com/emscripten-core/emscripten/issues/8299
  #
  # At runtime, you can use the emscripten_has_threading_support()
  # function to test whether the currently executing code
  # was compiled with pthreads support enabled.
  # If this function returns true, then the currently executing code
  # was compiled with -s USE_PTHREADS=1
  # (and the current browser supports multithreading).
  #
  # Pthreads do not work in non-browser environments yet
  # (need Web Workers, or an alternative to them)
  #
  # DOM operations can only be done on the main thread
  # That includes things like printing to the console (!!!),
  # and even things like XMLHttpRequests!
  #
  # fopen(), fread(), printf(), fprintf() etc. are not multithreaded
  #
  # For backwards compatibility, two separate builds must be done,
  # one with -s USE_PTHREADS=1 and the other with -s USE_PTHREADS=0.
  #
  # see https://github.com/emscripten-core/emscripten/wiki/Pthreads-with-WebAssembly
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_PTHREADS=1")
  # see https://github.com/emscripten-core/emscripten/issues/8503
  set(EMCC_COMMON "${EMCC_COMMON} -pthread")
  #set(EMCC_COMMON "${EMCC_COMMON} -Wl,--shared-memory") # unsupported on wasm
  #
  # When the linker flag -s PTHREAD_POOL_SIZE=<integer> is not specified
  # and pthread_create() is called, the new thread will not actually start
  # to run immediately, but the main JS thread must yield execution back
  # to browser first. This behavior is a result of #1049079.
  # https://github.com/emscripten-core/emscripten/issues/3636
  # NOTE: For web security purposes, there exists a fixed limit
  # (by default 20) of threads that can be spawned
  #set(EMCC_COMMON "${EMCC_COMMON} -s PTHREAD_POOL_SIZE=16")
  #set(EMCC_COMMON "${EMCC_COMMON} -s PTHREAD_POOL_SIZE=19")
  set(EMCC_COMMON "${EMCC_COMMON} -s PTHREAD_POOL_SIZE=8")
  #set(EMCC_COMMON "${EMCC_COMMON} -s PTHREAD_POOL_SIZE=1")
  #
  # see emscripten_num_logical_cores
  # https://github.com/hongkk/urho/blob/master/Source/Urho3D/Core/ProcessUtils.cpp#L449
  #set(EMCC_COMMON "${EMCC_COMMON} -s PTHREAD_HINT_NUM_CORES=8")
  #
  # Use the option -s PROXY_TO_PTHREAD=1 if you want to run
  # the main thread of a multithreaded application in a web worker.
  # if PROXY_TO_PTHREAD see emscripten_pthread_attr_settransferredcanvases
  # also see emscripten_current_thread_process_queued_calls
  # see https://github.com/emscripten-ports/SDL2/pull/77
  # see https://github.com/emscripten-core/emscripten/issues/8325
  # see https://github.com/emscripten-core/emscripten/issues/6009
  # see https://github.com/emscripten-core/emscripten/blob/incoming/tests/canvas_animate_resize.cpp
  # NOTE: USE_SDL and USE_PTHREAD/PROXY_TO_PTHREAD seem to be incompatible.
  # https://github.com/emscripten-core/emscripten/issues/6009
  # https://github.com/emscripten-core/emscripten/pull/8282
  # NOTE In that mode, you can drop the -s PTHREAD_POOL_SIZE
  # https://github.com/emscripten-core/emscripten/issues/8117
  #set(EMCC_COMMON "${EMCC_COMMON} -s PROXY_TO_PTHREAD=1")
  #
  # see https://github.com/emscripten-core/emscripten/pull/7672
  # PROXY_POSIX_SOCKETS
  #
  # PTHREADS_PROFILING
  #
  # debug traces for diagnosing pthreads related issues.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L1117
  if(NOT RELEASE_BUILD)
    # set(EMCC_COMMON "${EMCC_COMMON} -s PTHREADS_DEBUG=1")
  endif(NOT RELEASE_BUILD)
  #
  # dlmalloc is necessary for multithreading, split memory, e.t.c.
  # default: dlmalloc
  # set(EMCC_COMMON "${EMCC_COMMON} -s MALLOC=dlmalloc")
  #
  # PTHREAD_WORKER_FILE
else(ENABLE_WEB_PTHREADS)
  # custom defines
  set(EMCC_COMMON "${EMCC_COMMON} -DDISABLE_PTHREADS=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DUSE_FAKE_THREAD_LS=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DDISABLE_LOCKS=1")
  #
  # deprecated, switching our backend from fastcomp to the upstream LLVM backend.
  # Both Asyncify and the Emterpreter can't work with that backend,
  # see https://github.com/emscripten-core/emscripten/issues/8561
  # ASYNCIFY has a bad worst-case of large code size:
  # If it needs to modify many methods, it can grow code size very significantly (even 10x more was seen)
  # Asyncify can make performance much slower, if it ends up splitting a function which you need to be fast.
  # setjmp/longjmp and C++ exception are not working!
  # emscripten_sleep requires ASYNCIFY!
  # see https://emscripten.org/docs/porting/asyncify.html
  #
  #set(EMCC_COMMON "${EMCC_COMMON} -s ASYNCIFY=1")
  #set(HAS_ASYNCIFY TRUE)
  #
  #
  # ASYNCIFY_WHITELIST=["qsort", "trinkle", "__toread", "__uflow", "__fwritex", "MUSL_vfprintf"]
  #
  # see https://emscripten.org/docs/porting/emterpreter.html
  #
  #set(EMCC_COMMON "${EMCC_COMMON} -s EMTERPRETIFY=1")
  #set(HAS_EMTERPRETIFY TRUE)
  #
  # see https://emscripten.org/docs/porting/emterpreter.html#emterpreter-async-run-synchronous-code
  #set(EMCC_COMMON "${EMCC_COMMON} -s EMTERPRETIFY_ASYNC=1")
  #
  # run parts of your codebase in an interpreter!
  # you can use -s EMTERPRETIFY_WHITELIST=@../empterpreter_whitelist.json
  # see ConditionVariable::Wait, ConditionVariable::TimedWait
  # see https://github.com/caiiiycuk/js-dos/blob/6.22/CMakeLists.txt
  # see https://github.com/caiiiycuk/js-dos/blob/6.22/js-dos-cpp/emterpretify.txt
  #set(EMCC_COMMON "${EMCC_COMMON} -s EMTERPRETIFY_WHITELIST=@${CMAKE_CURRENT_SOURCE_DIR}/assets/emterpretify_whitelist.txt")
  #set(EMCC_COMMON "${EMCC_COMMON} -s EMTERPRETIFY_WHITELIST=["qsort", "trinkle", "__toread", "__uflow", "__fwritex", "MUSL_vfprintf", "__Wait", "__TimedWait"]")
  #
  # ORIGINAL_EXPORTED_FUNCTIONS
  #
  # EXPORT_FUNCTION_TABLES
  #
  # EXPORTED_RUNTIME_METHODS=["FS_createFolder",
  #
  # DEFAULT_LIBRARY_FUNCS_TO_INCLUDE=["memcpy", "memset", "malloc", "free"]'
  # https://stackoverflow.com/a/55933880
  #set(EMCC_COMMON "${EMCC_COMMON} -s EXTRA_EXPORTED_RUNTIME_METHODS=["ccall", "cwrap"]")
  #
  # see https://stackoverflow.com/a/21220605
  # see https://stackoverflow.com/a/16725147
  # Create an "extern c" block.
  # Inside this block define the functions you want to expose to javascript.
  # These functions should be prefixed with an underscore.
  # Inside one of these functions you can instantiate your C++ class.
  # NOTE: EMSCRIPTEN_KEEPALIVE also exports the function, as if it were on EXPORTED_FUNCTIONS.
  # see https://emscripten.org/docs/getting_started/FAQ.html#why-do-functions-in-my-c-c-source-code-vanish-when-i-compile-to-javascript-and-or-i-get-no-functions-to-process
  #set(EMCC_COMMON "${EMCC_COMMON} -s EXPORTED_FUNCTIONS=["_main", "qsort", "trinkle", "__toread", "__uflow", "__fwritex", "MUSL_vfprintf", "__Wait", "__TimedWait"]")
  #set(EMCC_COMMON "${EMCC_COMMON} -s EXPORTED_FUNCTIONS=["_main", "qsort", "trinkle", "__toread", "__uflow", "__fwritex", "MUSL_vfprintf", "_Wait", "_TimedWait"]")
  #
  # You can optionally use -s 'EMTERPRETIFY_FILE="data.binary"' to store the emterpreter bytecode in a file
  #
endif(ENABLE_WEB_PTHREADS)

if (HAS_ASYNCIFY OR HAS_EMTERPRETIFY)
  #custom defines
  message(FATAL_ERROR "TODO: SUPPORT HAS_ASYNC")
  set(EMCC_COMMON "${EMCC_COMMON} -DHAS_ASYNC=1")
endif(HAS_ASYNCIFY OR HAS_EMTERPRETIFY)

  set(EMCC_COMMON "${EMCC_COMMON} -s USE_ZLIB=1")
  if(ENABLE_HARFBUZZ)
    # harfbuzz
    set(EMCC_COMMON "${EMCC_COMMON} -s USE_HARFBUZZ=1")
    # custom flags
    set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_HARFBUZZ=1")
    # https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skshaper/BUILD.gn#L11
    # SK_SHAPER_HARFBUZZ_AVAILABLE # < TODO if skia_use_icu
  endif(ENABLE_HARFBUZZ)
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_ICU=1")
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_LIBPNG=1")
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_SDL=2")
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_SDL_IMAGE=2")
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_SDL_TTF=2")

set(ENABLE_WEBGL2 TRUE)
#set(ENABLE_WEBGL2 FALSE)

set(ENABLE_WEBGL1 TRUE)
#set(ENABLE_WEBGL1 FALSE)

set(ENABLE_WEBGL_DEBUG_CHECKS TRUE)
#set(ENABLE_WEBGL_DEBUG_CHECKS FALSE)
if(RELEASE_BUILD)
  set(ENABLE_WEBGL_DEBUG_CHECKS FALSE)
endif(RELEASE_BUILD)

if (ENABLE_WEBGL2 OR ENABLE_WEBGL1)
  #
  # WEBGL (see also OFFSCREEN_CAVAS settings)
  #
  # see https://bugs.chromium.org/p/skia/issues/detail?id=9052&q=&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L369
  # see https://www.khronos.org/registry/webgl/specs/2.0/#4.1.2
  # TODO: check freezes with threads
  if (ENABLE_WEBGL2)
    set(EMCC_COMMON "${EMCC_COMMON} -s USE_WEBGL2=1")
    # custom defines
    set(EMCC_COMMON "${EMCC_COMMON} -DWEBGL2_SUPPORT=1")
    #
    # emulates some WebGL 1 features on WebGL 2 contexts
    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L394
    # performs a string search-replace based automatic migration of #version 100 shaders to #version 300 es
    set(EMCC_COMMON "${EMCC_COMMON} -s WEBGL2_BACKWARDS_COMPATIBILITY_EMULATION=1")
  endif(ENABLE_WEBGL2)
  # ES3/ES2
  if (ENABLE_WEBGL2)
    # Forces support for all GLES3 features, not just the WebGL2-friendly subset.
    set(EMCC_COMMON "${EMCC_COMMON} -s FULL_ES3=1")
  elseif (ENABLE_WEBGL1)
    # // Forces support for all GLES2 features, not just the WebGL-friendly subset.
    # set(EMCC_COMMON "${EMCC_COMMON} -s FULL_ES2=1")
  endif(ENABLE_WEBGL2)
  if (ENABLE_WEBGL_DEBUG_CHECKS)
    #
    # see https://emscripten.org/docs/porting/multimedia_and_graphics/OpenGL-support.html?highlight=use_webgl2#emulation-of-older-desktop-opengl-api-features
    # Incomplete but useful
    # cannot emulate both ES2/ES3 and legacy GL
    # set(EMCC_COMMON "${EMCC_COMMON} -s LEGACY_GL_EMULATION=1")

    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L369
    # debug printing of WebGL related operations
    # set(EMCC_COMMON "${EMCC_COMMON} -s GL_DEBUG=1")
    #
    #set(EMCC_COMMON "${EMCC_COMMON} -s TRACE_WEBGL_CALLS=1")
    #
    # Adds extra checks for error situations in the GL library.
    # Can impact performance.
    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L362
    set(EMCC_COMMON "${EMCC_COMMON} -s GL_ASSERTIONS=1")
    #
    #set(EMCC_COMMON "${EMCC_COMMON} -s GL_UNSAFE_OPTS=0")
  endif(ENABLE_WEBGL_DEBUG_CHECKS)
endif(ENABLE_WEBGL2 OR ENABLE_WEBGL1)

# BUG: causes functions count of 1344484 exceeds internal limit of 1000000
if(NOT RELEASE_BUILD)
  # NOTE: Catching C++ exceptions is turned off by default in -O1 (and above)
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L456
  # DISABLE_EXCEPTION_CATCHING = 0 - generate code to actually catch exceptions
  # DISABLE_EXCEPTION_CATCHING = 1 - disable exception catching at all
  # DISABLE_EXCEPTION_CATCHING = 2 - disable exception catching, but enables
  #                                  catching in whitelist
  #set(EMCC_COMMON "${EMCC_COMMON} -s DISABLE_EXCEPTION_CATCHING=0")
  # Enables catching exception in the listed functions only,
  # if DISABLE_EXCEPTION_CATCHING = 2 is set
  #set(EMCC_COMMON "${EMCC_COMMON} -s EXCEPTION_CATCHING_WHITELIST=[]")
endif(NOT RELEASE_BUILD)

  # https://github.com/emscripten-core/emscripten/issues/3773
  # requires merge of https://github.com/luser/emscripten/commits/webrtc-sockets
  # should be complete and running on master.
  # -s SOCKET_WEBRTC=1

if(NOT RELEASE_BUILD)
  # -s DEMANGLE_SUPPORT to choose whether to compile the
  # application with libcxxabi-provided demangling support ___cxa_demangle().
  # If 1, build in libcxxabi's full c++ demangling code, to allow stackTrace()
  #                        // to emit fully proper demangled c++ names
  # see https://emscripten.org/docs/api_reference/emscripten.h.html?highlight=demangle#c.EM_LOG_DEMANGLE
  # see https://github.com/emscripten-core/emscripten/blob/incoming/src/settings.js#L288
  set(EMCC_COMMON "${EMCC_COMMON} -s DEMANGLE_SUPPORT=1")
endif(NOT RELEASE_BUILD)

  # rtti required by skia
  set(EMCC_COMMON "${EMCC_COMMON} -frtti") # force enable rtti on wasm!
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_RELEASE")

  # https://github.com/google/skia/blob/master/BUILD.gn#L502
  # set(EMCC_COMMON "${EMCC_COMMON} -DSKSL_STANDALONE") # if (skia_compile_processors)
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_LEGACY_SHADERCONTEXT=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_LOWP_RASTER_PIPELINE=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_FORCE_RASTER_PIPELINE_BLITTER=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_ASSUME_WEBGL=1") # see skia_gl_standard
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_ASSUME_GL_ES=1") # see skia_gl_standard
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_ASSUME_GL=1") # see skia_gl_standard
  set(EMCC_COMMON "${EMCC_COMMON} -DIS_WEBGL=1")
  # see https://github.com/xzwang2005/Prelude/blob/master/third_party/skia/src/pathops/SkPathOpsTypes.cpp#L106
  #set(EMCC_COMMON "${EMCC_COMMON} -DSKOTTIE_HACK")
  # https://github.com/qinjidong/qt5.13/blob/master/src/qtwebengine/src/3rdparty/chromium/third_party/skia/experimental/canvaskit/compile.sh
  if(NOT ENABLE_SIMD)
    set(EMCC_COMMON "${EMCC_COMMON} -DSKNX_NO_SIMD") # see "-s SIMD=1" and -msimd128
  endif(NOT ENABLE_SIMD)
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_AAA")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_EFFECT_DESERIALIZATION")
  set(EMCC_COMMON "${EMCC_COMMON} -DWEB_ASSEMBLY=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_BUILD_FOR_PATHKIT=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_SUPPORT_OPENCL=0")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_SAMPLES_FOR_X=1") # always set for linux, even if there's no X used
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_HAS_PNG_LIBRARY=1") # skia_use_libpng

  # CLANG_ATOMICS for ICU lib
  # see https://github.com/emscripten-core/emscripten/commit/9c4dfa12feb2b3d68bc2a44ad42b95f3b647728d
  # see https://github.com/h-s-c/libKD/blob/master/source/kd_atomic_ops.c#L202
  # set(EMCC_COMMON "${EMCC_COMMON} -DU_HAVE_CLANG_ATOMICS=0")

  # https://github.com/Rusino/skia/blob/master/BUILD.gn#L1688
  # NOTE: on wasm  by default skia don`t use harfbuzz skshaper
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_USING_SKSHAPER=1") # skia_enable_skshaper
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_HAS_WUFFS_LIBRARY=1") # skia_use_wuffs
  # SK_HAS_WEBP_LIBRARY # skia_use_libwebp
  # SK_XML # skia_use_expat
  # https://github.com/Rusino/skia/blob/master/BUILD.gn#L191
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_ALLOW_STATIC_GLOBAL_INITIALIZERS=0") # don`t redefine

  # Check each write to the heap, for example, this will give a clear error
  # on what would be segfaults in a native build (like dereferencing 0)
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L262
  # see https://emscripten.org/docs/porting/Debugging.html#memory-alignment-issues
  if(NOT RELEASE_BUILD)
    set(EMCC_COMMON "${EMCC_COMMON} -s SAFE_HEAP=1")
    #
    # Build with SAFE_HEAP=1 and function pointer aliasing disabled.
    # This should make it impossible for a function pointer to
    # be called with the wrong type without raising an error
    # ALIASING_FUNCTION_POINTERS=0 is also useful because it ensures
    # that calls to function pointer addresses in the wrong table result
    # in clear errors. Without this setting such calls just execute
    # whatever function is at the address, which can be much harder to debug.
    set(EMCC_COMMON "${EMCC_COMMON} -s ALIASING_FUNCTION_POINTERS=0")
  endif(NOT RELEASE_BUILD)

  # EMTERPRETIFY is not compatible with source maps
  # (maps are not useful in emterpreted code,
  # and splitting out non-emterpreted source maps is not yet implemented)
  if (HAS_EMTERPRETIFY)
    message(FATAL_ERROR "TODO: REMOVE EMTERPRETIFY FLAGS")
  else(HAS_EMTERPRETIFY)
    # see http://webassemblycode.com/using-browsers-debug-webassembly/
    set(EMCC_COMMON "${EMCC_COMMON} --source-map-base http://localhost:9090/")
  endif(HAS_EMTERPRETIFY)

  if(NOT RELEASE_BUILD)
    # -g4: Preserve LLVM debug information. This is the highest level of debuggability
    # see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    # NOTE: -01 and higher by default discard LLVM debug information
    set(EMCC_COMMON "${EMCC_COMMON} -g4")
  endif(NOT RELEASE_BUILD)

  # TODO EMCC_LINKER_FLAGS

  # see https://doc.magnum.graphics/magnum/platforms-html5.html#platforms-html5-code-size
  # see https://emscripten.org/docs/tools_reference/emcc.html#emcc-oz
  # NOTE: compile with -O1 or -O0 to see crash message/assert
  if(RELEASE_BUILD)
    #set(EMCC_COMMON "${EMCC_COMMON} -O1")
    # best performance. This is a good setting for a release build (!!!)
    set(EMCC_COMMON "${EMCC_COMMON} -O3")
    # reduces code size at the expense of performance (!!!)
    #set(EMCC_COMMON "${EMCC_COMMON} -Os")
    # Oz reduces code size even further at the expense of performance (!!!)
    # see https://github.com/emscripten-core/emscripten/issues/362
    #set(EMCC_COMMON "${EMCC_COMMON} -Oz")
  else(RELEASE_BUILD)
    # set(EMCC_COMMON "${EMCC_COMMON} -O0")
    # NOTE Catching C++ exceptions is turned off by default in -O1 (and above).
    set(EMCC_COMMON "${EMCC_COMMON} -O1")
    #set(EMCC_COMMON "${EMCC_COMMON} -O2")
    #
    # see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    #set(EMCC_COMMON "${EMCC_COMMON} --profiling")
    #
    ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    #set(EMCC_COMMON "${EMCC_COMMON} --profiling-funcs")
    #
    ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    #set(EMCC_COMMON "${EMCC_COMMON} --tracing")
    #
    ## allows you, for example, to reconstruct meaningful stack traces.
    ## see https://habr.com/ru/post/343784/
    set(EMCC_COMMON "${EMCC_COMMON} --emit-symbol-map")
    #
    ## Enables warnings about the use of absolute paths in -I and -L command line directives.
    ## set(EMCC_COMMON "${EMCC_COMMON} -Wwarn-absolute-paths")
    ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    #
    set(EMCC_COMMON "${EMCC_COMMON} --memoryprofiler")
    ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    #
    if (ENABLE_WEB_PTHREADS)
      set(EMCC_COMMON "${EMCC_COMMON} --threadprofiler")
    endif(ENABLE_WEB_PTHREADS)
    #
    set(EMCC_COMMON "${EMCC_COMMON} -DPATHKIT_TESTING")
  endif(RELEASE_BUILD)
  #
  # TODO: remove some DEAD FUNCTIONS to improve skia webassembly size
  # -s DEAD_FUNCTIONS
  #
  # With --use-preload-plugins, files can be automatically decoded based on their extension.
  # see https://emscripten.org/docs/porting/files/packaging_files.html
  #set(EMCC_COMMON "${EMCC_COMMON} --preload-file resources --use-preload-plugins")
  # https://emscripten.org/docs/getting_started/FAQ.html#why-does-my-code-break-and-gives-odd-errors-when-using-o2-closure-1
  #set(EMCC_COMMON "${EMCC_COMMON} --closure 1") # UNSAFE optimization
  # Enables LLVM link-time optimizations (LTO)
  #set(EMCC_COMMON "${EMCC_COMMON} --llvm-lto 1") # UNSAFE optimization
  # set(EMCC_COMMON "${EMCC_COMMON} --llvm-lto 3") # UNSAFE optimization
  if(ENABLE_SIMD)
    if(ENABLE_WASM)
      # TODO: test if it may increase performance
      # To enable WASM SIMD, pass the -msimd128 flag at compile time
      # see Limitations and behavioral differences (!!!) from
      # https://github.com/emscripten-core/emscripten/pull/8582/commits/1ab1600024823d430ce08bddd4e000e822d75c7d
      # TODO: check simd test suite
      # cd "$(dirname "$(which emsdk)" )"
      # EMCC_DEBUG=1 python tests/runner.py simd2
      # NOTE: run brower with --js-flags="--experimental-wasm-simd"
      set(EMCC_COMMON "${EMCC_COMMON} -msimd128")
    else(ENABLE_WASM)
      # NOTE: Emscripten's SIMD.js support should be considered deprecated and may be removed
      # see https://github.com/emscripten-core/emscripten/pull/8582/commits/1ab1600024823d430ce08bddd4e000e822d75c7d
      # set(EMCC_COMMON "${EMCC_COMMON} -s SIMD=1")
      message(FATAL_ERROR "SIMD can be enabled only on WASM, for now")
    endif(ENABLE_WASM)
  endif(ENABLE_SIMD)


  set(EMCC_COMMON "${EMCC_COMMON} -s ERROR_ON_MISSING_LIBRARIES=1")
  set(EMCC_COMMON "${EMCC_COMMON} -s ERROR_ON_UNDEFINED_SYMBOLS=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -s SDL2_IMAGE_FORMATS='[\"png\"]'")

  #
  # FILESYSTEM
  #
  # if your C code uses no files, but you include
  # some JS that does, you might need this.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L549
  #set(EMCC_COMMON "${EMCC_COMMON} -s FORCE_FILESYSTEM=1")
  #
  #set(EMCC_COMMON "${EMCC_COMMON} -s NO_FILESYSTEM=1")
  #
  # If set to 1, uses the multithreaded filesystem that is implemented within the
  # asm.js module, using emscripten_fetch.
  # Implies -s FETCH=1 (!!!)
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L1214
  #set(EMCC_COMMON "${EMCC_COMMON} -s ASMFS=1")
  # enables emscripten_fetch API.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L1214
  #set(EMCC_COMMON "${EMCC_COMMON} -s FETCH=1")
  # FETCH_DEBUG
  #
  # Log all FS operations.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L524
  # set(EMCC_COMMON "${EMCC_COMMON} -s FS_LOG=1")
  #
  #set(EMCC_COMMON "${EMCC_COMMON} -s CASE_INSENSITIVE_FS=1")

  #set(EMCC_COMMON "${EMCC_COMMON} -s MODULARIZE=1")

  # also enables STACK_OVERFLOW_CHECK
  # see https://emscripten.org/docs/porting/Debugging.html
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L41
  if(NOT RELEASE_BUILD)
    #set(EMCC_COMMON "${EMCC_COMMON} -s ASSERTIONS=1")
    # ASSERTIONS == 2 gives even more runtime checks
    set(EMCC_COMMON "${EMCC_COMMON} -s ASSERTIONS=2")
  endif(NOT RELEASE_BUILD)

  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L443
  #set(EMCC_COMMON "${EMCC_COMMON} -s LZ4=1")

  # In theory there should be no limit, but in practice,
  # 2GB is a practical limit because many (all?)
  # browsers apply that limit, in particular I know Chrome and Firefox do.
  # https://github.com/emscripten-core/emscripten/issues/6566
  # Memory growth is not yet supported with pthreads!
  #set(EMCC_COMMON "${EMCC_COMMON} -s ALLOW_MEMORY_GROWTH=1")
  # TOTAL_MEMORY: multiple of 16MB
  #set(EMCC_COMMON "${EMCC_COMMON} -s TOTAL_MEMORY=512MB")
  set(EMCC_COMMON "${EMCC_COMMON} -s TOTAL_MEMORY=1024MB")
  #set(EMCC_COMMON "${EMCC_COMMON} -s TOTAL_MEMORY=512MB")

  # Also remember to pass -s NO_EXIT_RUNTIME=1 if you want pthreads to stay alive
  # when main() exits on the main thread, otherwise they will be terminated
  # as the C runtime closes at the end of main().
  set(EMCC_COMMON "${EMCC_COMMON} -s NO_EXIT_RUNTIME=1")

  # Warn at compile time about instructions that LLVM tells us are not fully
  # aligned.  This is useful to find places in your code where you might refactor
  # to ensure proper alignment.
  # see https://github.com/emscripten-core/emscripten/blob/incoming/src/settings.js#L161
  if(NOT RELEASE_BUILD)
    # This is currently only supported in asm.js, not  wasm (!!!)
    #set(EMCC_COMMON "${EMCC_COMMON} -s WARN_UNALIGNED=1")
  endif(NOT RELEASE_BUILD)

  # if GL context must be used in web workers - enable SWAP_CONTROL
  #set(HAVE_SWAP_CONTROL TRUE)
  set(HAVE_SWAP_CONTROL FALSE)
  if(HAVE_SWAP_CONTROL)
    # custom defines
    set(EMCC_COMMON "${EMCC_COMMON} -DHAVE_SWAP_CONTROL=1")
    #
    # offscreen canvas
    #
    # emscripten_webgl_commit_frame requires offscreen canvas support
    # see https://github.com/emscripten-core/emscripten/issues/5437
    # see explicitSwapControl
    #
    set(EMCC_COMMON "${EMCC_COMMON} -s OFFSCREENCANVAS_SUPPORT=1")
    #
    # When building simultaneously with both -s OFFSCREEN_FRAMEBUFFER=1
    # and -s OFFSCREENCANVAS_SUPPORT=1 linker flags enabled,
    # offscreen backbuffer can be used as a polyfill-like compatibility
    # fallback to enable rendering WebGL from a pthread when the browser
    # does not support the OffscreenCanvas API.
    # see https://github.com/emscripten-core/emscripten/pull/4412
    set(EMCC_COMMON "${EMCC_COMMON} -s OFFSCREEN_FRAMEBUFFER=1")
  endif(HAVE_SWAP_CONTROL)

else(EMSCRIPTEN)

  set(COMMON_FLAGS "${COMMON_FLAGS} -DSK_ASSUME_GL=1")

  # set -DCMAKE_BUILD_TYPE=Debug
  # see https://stackoverflow.com/a/25199377/10904212
  if(NOT RELEASE_BUILD)
    # Debugging CFLAGS. Turn optimizations off; turn debugging symbols on.
    # see https://github.com/mmatyas/supermariowar/blob/master/CMakeLists.txt#L165
    # see http://www.brendangregg.com/blog/2016-08-09/gdb-example-ncurses.html
    add_definitions(-DDEBUG -D_DEBUG)
    set(COMMON_FLAGS "${COMMON_FLAGS} -g")
    set(COMMON_FLAGS "${COMMON_FLAGS} -O0")
  else()
    set(COMMON_FLAGS "${COMMON_FLAGS} -O3")
  endif(NOT RELEASE_BUILD)

  ### Find Libraries
  set(USE_OPENGL_LIB FALSE)
  find_package(OpenGL REQUIRED)
  if(OPENGL_FOUND)
    message("OPENGL_LIBRARIES = ${OPENGL_LIBRARIES} ")
    message("OPENGL_INCLUDE_DIR = ${OPENGL_INCLUDE_DIR} ")
    set(USE_OPENGL_LIB TRUE)
  endif()

  #set(USE_OPENGLES2_LIB FALSE)
  #find_package(OpenGLES2 REQUIRED)
  #if(OPENGLES2_FOUND)
  #  message("OPENGLES2_LIBRARIES = ${OPENGLES2_LIBRARIES} ")
  #  message("OPENGLES2_INCLUDE_DIR = ${OPENGLES2_INCLUDE_DIR} ")
  #  set(USE_OPENGLES2_LIB TRUE)
  #endif()

  find_package(SDL2 REQUIRED)
  if(SDL2_FOUND)
    message("Found SDL2 libraries")
    message("SDL2_INCLUDE_DIR = ${SDL2_INCLUDE_DIR} ")
    message("SDL2_LIBRARY = ${SDL2_LIBRARY} ")
    add_definitions(-DUSE_SDL2_LIB)
  endif ()

  #find_package(SDL2_net REQUIRED)
  #if(SDL2_net_FOUND)
  #  message("Found SDL2_net libraries")
  #  message("SDL2_net_INCLUDE_DIR = ${SDL2_net_INCLUDE_DIR} ")
  #  message("SDL2_net_LIBRARY = ${SDL2_net_LIBRARY} ")
  #  add_definitions(-DUSE_SDL2_net_LIB)
  #endif ()

  #include(sdl2/FindSDL2_ttf.cmake)
  find_package(SDL2_ttf REQUIRED)
  if(SDL2_ttf_FOUND)
    message("Found SDL2_ttf libraries")
    message("SDL2_TTF_INCLUDE_DIR = ${SDL2_TTF_INCLUDE_DIR} ")
    message("SDL2_TTF_LIBRARY = ${SDL2_TTF_LIBRARY} ")
    add_definitions(-DUSE_SDL2_ttf_LIB)
  endif ()

  set(USE_GLEW_LIB FALSE)
  find_package(GLEW REQUIRED) # First try to find using the find_package method (works with vcpkg)
  if(GLEW_FOUND) # Works with some other methods
    message(STATUS "GLEW_INCLUDE_PATH=${GLEW_INCLUDE_PATH}")
    message(STATUS "GLEW_LIBRARY=${GLEW_LIBRARY}")
    set(USE_GLEW_LIB TRUE)
  endif()

  find_package(ZLIB)

  find_package(Freetype)

  if(ENABLE_HARFBUZZ)
    # harfbuzz
    set(USE_SHARED_HARFBUZZ "true")
    if(USE_SHARED_HARFBUZZ)
      find_package(HarfBuzz REQUIRED)
    else()
      set(HARFBUZZ_LIBRARIES harfbuzz)
      set(HARFBUZZ_INCLUDE_DIRS ${HARFBUZZ_DIR}/src)
    endif()
    message(STATUS "HARFBUZZ_LIBRARIES=${HARFBUZZ_LIBRARIES}")
    message(STATUS "HARFBUZZ_INCLUDE_DIRS=${HARFBUZZ_INCLUDE_DIRS}")
    # custom flags
    set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_HARFBUZZ=1")
  endif(ENABLE_HARFBUZZ)

endif(EMSCRIPTEN)

set(ENABLE_WTF TRUE)
#set(ENABLE_WTF FALSE)
# custom flags
if(ENABLE_WTF)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BASE=1")
  # NOTE: WTF requires BASE
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_WTF=1")
endif(ENABLE_WTF)

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
#
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ICU_DEFINES}")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${ICU_DEFINES}")
#
if(EMSCRIPTEN)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EMCC_COMMON}")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EMCC_COMMON}")
endif(EMSCRIPTEN)

include(ExternalProject)

#
# WTF
#
if(ENABLE_WTF)
  add_subdirectory(src/chromium)
  set(WTF_LIBRARY_NAME wtf)
  #message(FATAL_ERROR ${WTF_LIBRARY_NAME})
  set(WTF_LIBS
    ${WTF_LIBRARY_NAME}
    base
    libevent
    icu
  )
endif(ENABLE_WTF)

include(skia.cmake)

set(PROJECT_SRC
  src/main.cpp
  # skottie
  # https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skottie/BUILD.gn#L45
  thirdparty/skia/modules/skottie/utils/SkottieUtils.cpp
)

# TODO
if (EMSCRIPTEN)
  list(APPEND PROJECT_SRC
    # skia effects
    #thirdparty/skia/src/c/sk_effects.cpp
    #thirdparty/skia/src/effects/Sk1DPathEffect.cpp
    #thirdparty/skia/src/effects/Sk2DPathEffect.cpp
    #thirdparty/skia/src/effects/SkColorMatrix.cpp
    #thirdparty/skia/src/effects/SkColorMatrixFilter.cpp
    #thirdparty/skia/src/effects/SkCornerPathEffect.cpp
    #thirdparty/skia/src/effects/SkDashPathEffect.cpp
    #thirdparty/skia/src/effects/SkDiscretePathEffect.cpp
    #thirdparty/skia/src/effects/SkEmbossMask.cpp
    #thirdparty/skia/src/effects/SkEmbossMaskFilter.cpp
    #thirdparty/skia/src/effects/SkHighContrastFilter.cpp
    #thirdparty/skia/src/effects/SkLayerDrawLooper.cpp
    #thirdparty/skia/src/effects/SkLumaColorFilter.cpp
    #thirdparty/skia/src/effects/SkOpPathEffect.cpp
    #thirdparty/skia/src/effects/SkOverdrawColorFilter.cpp
    #thirdparty/skia/src/effects/SkPackBits.cpp
    #thirdparty/skia/src/effects/SkShaderMaskFilter.cpp
    #thirdparty/skia/src/effects/SkTableColorFilter.cpp
    #thirdparty/skia/src/effects/SkTableMaskFilter.cpp
    #thirdparty/skia/src/effects/SkTrimPathEffect.cpp
    #thirdparty/skia/src/shaders/SkPerlinNoiseShader.cpp
    #thirdparty/skia/src/shaders/gradients/Sk4fGradientBase.cpp
    #thirdparty/skia/src/shaders/gradients/Sk4fLinearGradient.cpp
    #thirdparty/skia/src/shaders/gradients/SkGradientShader.cpp
    #thirdparty/skia/src/shaders/gradients/SkLinearGradient.cpp
    #thirdparty/skia/src/shaders/gradients/SkRadialGradient.cpp
    #thirdparty/skia/src/shaders/gradients/SkTwoPointConicalGradient.cpp
    #thirdparty/skia/src/shaders/gradients/SkSweepGradient.cpp
    # skia utils (utils.gni)
    thirdparty/skia/src/utils/Sk3D.cpp
    thirdparty/skia/src/utils/SkBase64.cpp
    thirdparty/skia/src/utils/SkFrontBufferedStream.cpp
    thirdparty/skia/src/utils/SkCamera.cpp
    thirdparty/skia/src/utils/SkCanvasStack.cpp
    thirdparty/skia/src/utils/SkCanvasStateUtils.cpp
    thirdparty/skia/src/utils/SkDashPath.cpp
    thirdparty/skia/src/utils/SkEventTracer.cpp
    thirdparty/skia/src/utils/SkFloatToDecimal.cpp
    thirdparty/skia/src/utils/SkInterpolator.cpp
    thirdparty/skia/src/utils/SkJSON.cpp
    thirdparty/skia/src/utils/SkJSONWriter.cpp
    thirdparty/skia/src/utils/SkMatrix22.cpp
    thirdparty/skia/src/utils/SkMultiPictureDocument.cpp
    thirdparty/skia/src/utils/SkNWayCanvas.cpp
    thirdparty/skia/src/utils/SkNullCanvas.cpp
    thirdparty/skia/src/utils/SkOSPath.cpp
    thirdparty/skia/src/utils/SkPaintFilterCanvas.cpp
    thirdparty/skia/src/utils/SkParse.cpp
    thirdparty/skia/src/utils/SkParseColor.cpp
    thirdparty/skia/src/utils/SkParsePath.cpp
    thirdparty/skia/src/utils/SkPatchUtils.cpp
    thirdparty/skia/src/utils/SkPolyUtils.cpp
    thirdparty/skia/src/utils/SkShadowTessellator.cpp
    thirdparty/skia/src/utils/SkShadowUtils.cpp
    thirdparty/skia/src/utils/SkThreadUtils_pthread.cpp
    thirdparty/skia/src/utils/SkThreadUtils_win.cpp
    thirdparty/skia/src/utils/SkWhitelistTypefaces.cpp
    #mac
    #"$_src/utils/mac/SkCreateCGImageRef.cpp",
    #windows
    #"$_src/utils/win/SkAutoCoInitialize.h",
    #"$_src/utils/win/SkAutoCoInitialize.cpp",
    #"$_src/utils/win/SkDWrite.h",
    #"$_src/utils/win/SkDWrite.cpp",
    #"$_src/utils/win/SkDWriteFontFileStream.cpp",
    #"$_src/utils/win/SkDWriteFontFileStream.h",
    #"$_src/utils/win/SkDWriteGeometrySink.cpp",
    #"$_src/utils/win/SkDWriteGeometrySink.h",
    #"$_src/utils/win/SkDWriteNTDDI_VERSION.h",
    #"$_src/utils/win/SkHRESULT.h",
    #"$_src/utils/win/SkHRESULT.cpp",
    #"$_src/utils/win/SkIStream.h",
    #"$_src/utils/win/SkIStream.cpp",
    #"$_src/utils/win/SkTScopedComPtr.h",
    #"$_src/utils/win/SkWGL.h",
    #"$_src/utils/win/SkWGL_win.cpp",
    # effects_imagefilters (effects_imagefilters.gni)
    # https://chromium.googlesource.com/skia/+/master/gn/effects_imagefilters.gni
    #thirdparty/skia/src/effects/imagefilters/SkAlphaThresholdFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkArithmeticImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkBlurImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkColorFilterImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkComposeImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkDisplacementMapEffect.cpp
    #thirdparty/skia/src/effects/imagefilters/SkDropShadowImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkImageSource.cpp
    #thirdparty/skia/src/effects/imagefilters/SkLightingImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkMagnifierImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkMatrixConvolutionImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkMergeImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkMorphologyImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkOffsetImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkPaintImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkPictureImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkTileImageFilter.cpp
    #thirdparty/skia/src/effects/imagefilters/SkXfermodeImageFilter.cpp
  )
endif(EMSCRIPTEN)

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

add_dependencies(${PROJECT_NAME}
  wuffs
  jpeg
  pathkit
  SKIA
  sksg
  skshaper
  particles
  skottie
)

# https://www.mail-archive.com/emscripten-discuss@googlegroups.com/msg07864.html
#set_target_properties(
#  ${PROJECT_NAME}
#  PROPERTIES LINK_FLAGS "-s MAIN_MODULE=1")

# see LINK_OPTIONS
#set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS
#  "-s MAIN_MODULE=1"
#  "-s FORCE_FILESYSTEM=1"
#)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

if(EMSCRIPTEN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --emrun")
  # https://emscripten.org/docs/getting_started/Tutorial.html#generating-html
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -o hello.html")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources/fonts/FreeSans.ttf")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources")
endif() # EMSCRIPTEN

set(SKIA_INCLUDES
    thirdparty
    thirdparty/skia
    thirdparty/skia/include
    thirdparty/skia/include/c
    thirdparty/skia/include/core
    thirdparty/skia/third_party
    thirdparty/skia/third_party/skcms
)

if(EMSCRIPTEN)
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
    # "-s ENVIRONMENT=\"'web'\""
    "-s ENVIRONMENT='web'"
    #
  )

  set(HTML_TEMPLATE "${CMAKE_CURRENT_SOURCE_DIR}/assets/index.html")

  #message("using template " ${HTML_TEMPLATE})

  #set(TEMPLATE_OPTION "--shell-file ${HTML_TEMPLATE}")

  set(EM_TARGET_JS ${PROJECT_NAME}.js)
  configure_file(${HTML_TEMPLATE} index.html @ONLY)
  target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
    ${SKIA_INCLUDES}
  )
  # link order is top down:
  # Top is the executable, followed by directly used libraries.
  # see https://floooh.github.io/2016/01/12/cmake-dependency-juggling.html
  target_link_libraries(${PROJECT_NAME} PUBLIC
    ${WTF_LIBS}
    BORINGSSL
    GCRYPTO
    GURL
    GFX_GEOMETRY
    # tcmalloc only for posix/linux/e.t.c.
    #tcmalloc
    #
    SKIA
    skottie
    sksg
    skshaper
    particles
    pathkit
    wuffs
    jpeg
    #
    ${LINK_OPTIONS}
  )
else()
  target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE
    ${SKIA_INCLUDES}
    ${GLEW_INCLUDE_PATH}
    ${OPENGL_INCLUDE_DIR}
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_TTF_INCLUDE_DIR}
    ${HARFBUZZ_INCLUDE_DIRS}
    #${OPENGLES2_INCLUDE_DIR}
  )
  # link order is top down:
  # Top is the executable, followed by directly used libraries.
  # see https://floooh.github.io/2016/01/12/cmake-dependency-juggling.html
  target_link_libraries(${PROJECT_NAME} PUBLIC
    ${WTF_LIBS}
    BORINGSSL
    GCRYPTO
    GURL
    GFX_GEOMETRY
    # tcmalloc only for posix/linux/e.t.c.
    tcmalloc
    #
    SKIA
    skottie
    sksg
    skshaper
    particles
    pathkit
    wuffs
    jpeg
    #
    #
    ${SDL2_TTF_INCLUDE_DIR}
    ${HARFBUZZ_LIBRARIES}
    ${OPENGL_LIBRARIES}
    #${OPENGLES2_LIBRARIES}
    ${GLEW_LIBRARY}
    SDL2::Main
    #SDL2:Net
    #SDL2:tff # see ${SDL2_TTF_LIBRARY}
    ${SDL2_TTF_LIBRARY}
    #
    ${LINK_OPTIONS}
  )
  target_compile_definitions(${PROJECT_NAME} PRIVATE
    GLEW_NO_GLU
    STATICALLY_LINKED_WITH_WTF=1 # NOTE: meaningful only if USE(EXPORT_MACROS)
    # NOTE: prefer #ifndef NDEBUG, see https://stackoverflow.com/a/8594122
    "$<$<CONFIG:DEBUG>:DEBUG>"
  )
endif() # EMSCRIPTEN

target_compile_options(${PROJECT_NAME} PRIVATE
  -Wno-error)

add_custom_target(copy-runtime-files ALL
  COMMAND cmake -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/resources ${CMAKE_CURRENT_BINARY_DIR}/resources
  #DEPENDS ${PROJECT_NAME}
)
add_dependencies(${PROJECT_NAME} copy-runtime-files)
