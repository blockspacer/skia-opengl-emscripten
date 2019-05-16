cmake_minimum_required(VERSION 3.5)

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
  message(FATAL_ERROR "You must set your binary directory different from your source")
endif()

# this sets the paths that cmake will use to locate libs (via the FindXXX.cmake or XXConfig.cmake scripts)
LIST(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/SDL2 )
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)

#include(FindPkgMacros)

set (PROJECT_NAME "skemgl")

project(${PROJECT_NAME} CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR})

# -fno-exceptions
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++17")

# https://stackoverflow.com/a/4184877/10904212
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -frtti")

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

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${SK_COMMON_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${SK_COMMON_FLAGS}")


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
#
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ICU_DEFINES}")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${ICU_DEFINES}")

if(EMSCRIPTEN)
  #set(EMCC_COMMON "${EMCC_COMMON} -DSTATICALLY_LINKED_WITH_WTF")
  set(EMCC_COMMON "${EMCC_COMMON} -DTARGET_EMSCRIPTEN")
  #
  set(EMCC_COMMON "${EMCC_COMMON} -s WASM=1")
  #
  # Whether we should use binaryen's wasm2js to convert our wasm to JS. Set when
  # wasm backend is in use with WASM=0 (to enable non-wasm output, we compile to
  # wasm normally, then compile that to JS).
  # set(EMCC_COMMON "${EMCC_COMMON} -s WASM2JS=1")
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

set(ENABLE_WASM_PTHREADS TRUE)
#set(ENABLE_WASM_PTHREADS FALSE)
if (ENABLE_WASM_PTHREADS)
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
  set(EMCC_COMMON "${EMCC_COMMON} -Wl,--shared-memory")
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
  # set(EMCC_COMMON "${EMCC_COMMON} -s PTHREADS_DEBUG=1")
  #
  # dlmalloc is necessary for multithreading, split memory, e.t.c.
  # default: dlmalloc
  # set(EMCC_COMMON "${EMCC_COMMON} -s MALLOC=dlmalloc")
  #
  # PTHREAD_WORKER_FILE
else(ENABLE_WASM_PTHREADS)
  # deprecated, switching our backend from fastcomp to the upstream LLVM backend.
  # Both Asyncify and the Emterpreter can't work with that backend,
  # see https://github.com/emscripten-core/emscripten/issues/8561
  # ASYNCIFY has a bad worst-case of large code size:
  # If it needs to modify many methods, it can grow code size very significantly (even 10x more was seen)
  # Asyncify can make performance much slower, if it ends up splitting a function which you need to be fast.
  # setjmp/longjmp and C++ exception are not working!
  # emscripten_sleep requires ASYNCIFY!
  # see https://emscripten.org/docs/porting/asyncify.html
  #set(EMCC_COMMON "${EMCC_COMMON} -s ASYNCIFY=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -DHAS_ASYNCIFY=1")
  #
  # ASYNCIFY_WHITELIST==["qsort", "trinkle", "__toread", "__uflow", "__fwritex", "MUSL_vfprintf"]
endif(ENABLE_WASM_PTHREADS)

  set(EMCC_COMMON "${EMCC_COMMON} -s USE_ZLIB=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -s USE_HARFBUZZ=1") # < TODO
  # https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skshaper/BUILD.gn#L11
  # SK_SHAPER_HARFBUZZ_AVAILABLE # < TODO if skia_use_icu
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
if (ENABLE_WEBGL2 OR ENABLE_WEBGL1)
  #
  # WEBGL (see also OFFSCREEN_CAVAS settings)
  #
  # see https://bugs.chromium.org/p/skia/issues/detail?id=9052&q=&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L369
  # see https://www.khronos.org/registry/webgl/specs/2.0/#4.1.2
  # BUG: WebGL 2 was not working with OffscreenCanvas in firefox
  # https://bugzilla.mozilla.org/show_bug.cgi?id=1388299
  # TODO: check freezes with threads
  if (ENABLE_WEBGL2)
    set(EMCC_COMMON "${EMCC_COMMON} -s USE_WEBGL2=1")
    set(EMCC_COMMON "${EMCC_COMMON} -DWEBGL2_SUPPORT=1") # custom define
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
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s GL_ASSERTIONS=1")
    #
    #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s GL_UNSAFE_OPTS=0")
  endif(ENABLE_WEBGL_DEBUG_CHECKS)
endif(ENABLE_WEBGL2)

  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L456
  # DISABLE_EXCEPTION_CATCHING = 0 - generate code to actually catch exceptions
  # DISABLE_EXCEPTION_CATCHING = 1 - disable exception catching at all
  # DISABLE_EXCEPTION_CATCHING = 2 - disable exception catching, but enables
  #                                  catching in whitelist

  # Enables catching exception in the listed functions only, if
  # DISABLE_EXCEPTION_CATCHING = 2 is set
  # EXCEPTION_CATCHING_WHITELIST

  # https://github.com/emscripten-core/emscripten/issues/3773
  # requires merge of https://github.com/luser/emscripten/commits/webrtc-sockets
  # should be complete and running on master.
  # -s SOCKET_WEBRTC=1

  # -s DEMANGLE_SUPPORT to choose whether to compile the
  # application with libcxxabi-provided demangling support ___cxa_demangle().
  # If 1, build in libcxxabi's full c++ demangling code, to allow stackTrace()
  #                        // to emit fully proper demangled c++ names
  # see https://emscripten.org/docs/api_reference/emscripten.h.html?highlight=demangle#c.EM_LOG_DEMANGLE
  # see https://github.com/emscripten-core/emscripten/blob/incoming/src/settings.js#L288
  set(EMCC_COMMON "${EMCC_COMMON} -s DEMANGLE_SUPPORT=1")

  # rtti required by skia
  set(EMCC_COMMON "${EMCC_COMMON} -frtti")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_RELEASE")

  # https://github.com/google/skia/blob/master/BUILD.gn#L502
  # set(EMCC_COMMON "${EMCC_COMMON} -DSKSL_STANDALONE") # if (skia_compile_processors)
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_LEGACY_SHADERCONTEXT=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_ASSUME_WEBGL=1") # see skia_gl_standard
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_ASSUME_GL_ES=1") # see skia_gl_standard
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_ASSUME_GL=1") # see skia_gl_standard
  set(EMCC_COMMON "${EMCC_COMMON} -DIS_WEBGL=1")
  # see https://github.com/xzwang2005/Prelude/blob/master/third_party/skia/src/pathops/SkPathOpsTypes.cpp#L106
  #set(EMCC_COMMON "${EMCC_COMMON} -DSKOTTIE_HACK")
  # https://github.com/qinjidong/qt5.13/blob/master/src/qtwebengine/src/3rdparty/chromium/third_party/skia/experimental/canvaskit/compile.sh
  set(EMCC_COMMON "${EMCC_COMMON} -DSKNX_NO_SIMD")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_AAA")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_DISABLE_EFFECT_DESERIALIZATION")
  set(EMCC_COMMON "${EMCC_COMMON} -DWEB_ASSEMBLY=1")
  #set(EMCC_COMMON "${EMCC_COMMON} -DSK_BUILD_FOR_PATHKIT=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_SUPPORT_OPENCL=0")
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_SAMPLES_FOR_X=1") # always set for linux, even if there's no X used
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_HAS_PNG_LIBRARY=1") # skia_use_libpng

  # https://github.com/emscripten-core/emscripten/issues/4932
  # https://github.com/kosh04/newlisp/blob/master/newlisp.h#L164
  # TODO
  set(EMCC_COMMON "${EMCC_COMMON} -D_FILE_OFFSET_BITS=64")
  #set(EMCC_COMMON "${EMCC_COMMON} -D_LARGEFILE_SOURCE=1")

  # CLANG_ATOMICS for ICU lib
  # see https://github.com/emscripten-core/emscripten/commit/9c4dfa12feb2b3d68bc2a44ad42b95f3b647728d
  # see https://github.com/h-s-c/libKD/blob/master/source/kd_atomic_ops.c#L202
  # set(EMCC_COMMON "${EMCC_COMMON} -DU_HAVE_CLANG_ATOMICS=0")

  # https://github.com/Rusino/skia/blob/master/BUILD.gn#L1688
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_USING_SKSHAPER=1") # skia_enable_skshaper
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_HAS_WUFFS_LIBRARY=1") # skia_use_wuffs
  # SK_HAS_WEBP_LIBRARY # skia_use_libwebp
  # SK_XML # skia_use_expat
  # https://github.com/Rusino/skia/blob/master/BUILD.gn#L191
  set(EMCC_COMMON "${EMCC_COMMON} -DSK_ALLOW_STATIC_GLOBAL_INITIALIZERS=0")

  # Check each write to the heap, for example, this will give a clear error
  # on what would be segfaults in a native build (like dereferencing 0)
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L262
  # see https://emscripten.org/docs/porting/Debugging.html#memory-alignment-issues
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

  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EMCC_COMMON}")

  # TODO EMCC_LINKER_FLAGS

  # https://emscripten.org/docs/tools_reference/emcc.html#emcc-oz
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Oz")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O1")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
  # With --use-preload-plugins, files can be automatically decoded based on their extension.
  # see https://emscripten.org/docs/porting/files/packaging_files.html
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources --use-preload-plugins")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EMCC_COMMON}")
  # https://emscripten.org/docs/getting_started/FAQ.html#why-does-my-code-break-and-gives-odd-errors-when-using-o2-closure-1
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --closure 1")
  # Enables LLVM link-time optimizations (LTO)
  # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --llvm-lto 3")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s SIMD=1")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ERROR_ON_MISSING_LIBRARIES=1")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ERROR_ON_UNDEFINED_SYMBOLS=1")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s SDL2_IMAGE_FORMATS='[\"png\"]'")

  #
  # FILESYSTEM
  #
  # if your C code uses no files, but you include
  # some JS that does, you might need this.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L549
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FORCE_FILESYSTEM=0")
  #
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s NO_FILESYSTEM=1")
  #
  # If set to 1, uses the multithreaded filesystem that is implemented within the
  # asm.js module, using emscripten_fetch.
  # Implies -s FETCH=1 (!!!)
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L1214
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ASMFS=1")
  # enables emscripten_fetch API.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L1214
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FETCH=1")
  # FETCH_DEBUG
  #
  # Log all FS operations.
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L524
  # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FS_LOG=1")
  #
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s CASE_INSENSITIVE_FS=1")

  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s MODULARIZE=1")

  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L41
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ASSERTIONS=1")
  # ASSERTIONS == 2 gives even more runtime checks
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ASSERTIONS=2")

  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L443
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s LZ4=1")

  # In theory there should be no limit, but in practice,
  # 2GB is a practical limit because many (all?)
  # browsers apply that limit, in particular I know Chrome and Firefox do.
  # https://github.com/emscripten-core/emscripten/issues/6566
  # Memory growth is not yet supported with pthreads!
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ALLOW_MEMORY_GROWTH=1")
  # TOTAL_MEMORY: multiple of 16MB
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s TOTAL_MEMORY=512MB")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s TOTAL_MEMORY=1024MB")

  # Also remember to pass -s NO_EXIT_RUNTIME=1 if you want pthreads to stay alive
  # when main() exits on the main thread, otherwise they will be terminated
  # as the C runtime closes at the end of main().
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s NO_EXIT_RUNTIME=1")

  # This is currently only supported in asm.js, not  wasm (!!!)
  # Warn at compile time about instructions that LLVM tells us are not fully
  # aligned.  This is useful to find places in your code where you might refactor
  # to ensure proper alignment.
  # see https://github.com/emscripten-core/emscripten/blob/incoming/src/settings.js#L161
  # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s WARN_UNALIGNED=1")

  #
  # offscreen canvas
  #
  # emscripten_webgl_commit_frame requires offscreen canvas support
  # see https://github.com/emscripten-core/emscripten/issues/5437
  # see explicitSwapControl
  #
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s OFFSCREENCANVAS_SUPPORT=1")
  #
  # When building simultaneously with both -s OFFSCREEN_FRAMEBUFFER=1
  # and -s OFFSCREENCANVAS_SUPPORT=1 linker flags enabled,
  # offscreen backbuffer can be used as a polyfill-like compatibility
  # fallback to enable rendering WebGL from a pthread when the browser
  # does not support the OffscreenCanvas API.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s OFFSCREEN_FRAMEBUFFER=1")

else()

  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DSK_ASSUME_GL=1")

  ### Find Libraries
  find_package(OpenGL REQUIRED)
  if(OPENGL_FOUND)
    message("OPENGL_LIBRARIES = ${OPENGL_LIBRARIES} ")
    message("OPENGL_INCLUDE_DIR = ${OPENGL_INCLUDE_DIR} ")
    set(USE_OPENGL_LIB TRUE)
  endif()

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

  find_package(GLEW REQUIRED) # First try to find using the find_package method (works with vcpkg)
  if(GLEW_FOUND) # Works with some other methods
    message(STATUS "GLEW_INCLUDE_PATH=${GLEW_INCLUDE_PATH}")
    message(STATUS "GLEW_LIBRARY=${GLEW_LIBRARY}")
    set(USE_GLEW_LIB TRUE)
  endif()

  find_package(ZLIB)

  find_package(Freetype)

  # harfbuzz
  set(USE_SHARED_HARFBUZZ "true")
  if(USE_SHARED_HARFBUZZ)
    find_package(HarfBuzz)
  else()
    set(HARFBUZZ_LIBRARIES harfbuzz)
    set(HARFBUZZ_INCLUDE_DIRS ${HARFBUZZ_DIR}/src)
  endif()
  message(STATUS "HARFBUZZ_LIBRARIES=${HARFBUZZ_LIBRARIES}")
  message(STATUS "HARFBUZZ_INCLUDE_DIRS=${HARFBUZZ_INCLUDE_DIRS}")
  #include_directories(${HARFBUZZ_INCLUDE_DIRS})

endif() # EMSCRIPTEN

include(ExternalProject)

#
# WTF
#

add_subdirectory(src/chromium)

#
# Skia
#

# case-insensitive match TODO: is debug, Debug, DEBUG all valid?
if (CMAKE_BUILD_TYPE MATCHES "[dD][eE][bB][uU][gG]")
  set(IS_DEBUG_BUILD ON)
else()
  set(IS_DEBUG_BUILD OFF)
  set(EXT_SKIA_OFFICIAL_BUILD "true")
endif ()

# I wanted to expose (almost) all Skia options as CMake options but sadly
# GN is a really bad tool - It produces non-overridable configure errors like:
#
# The variable "skia_use_system_libjpeg_turbo" was set as a build argument but never appeared in a declare_args() block in any buildfile.
#
# ... even though the option exists (this one in skia/third_party/libjpeg-turbo/BUILD.gb)
# and it's listed in gn args --list.
# (It seems to be caused by the fact that some options are only actually used when other
# options are set appropriately. But it's not always obvious - one would have to dig into
# Skia configuration. And replicating the dependencies here + propagating it correctly into
# the ExternalProject setup is beyond reasonable.
option(EXT_SKIA_ALWAYS_BUILD "" OFF)
option(EXT_SKIA_DEBUG "" ${IS_DEBUG_BUILD})
# NOTE: Use is_component_build=false with EMSCRIPTEN
option(EXT_SKIA_SHARED "build a shared lbrary (ON) or a static library (OFF)" OFF)

set(SKIA_SRC "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/skia")

if (NOT EXISTS ${SKIA_SRC})
  message(FATAL_ERROR "Can't find Skia sources. Please run download-dependencies.sh.")
endif ()

set(SKIA_BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}/skia")

# TODO: extra_cflags=[\"-Wno-unknown-warning-option\",\"-s\",\"USE_FREETYPE=1\",\"-s\",\"USE_LIBPNG=1\"]

# Skia comes with -Werror on by default. That's a cool feature for release...
set(NEW_CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(NEW_CMAKE_C_FLAGS "${NEW_CMAKE_C_FLAGS} -Wno-error")

STRING(REGEX REPLACE " " "\",\"" NEW_CMAKE_C_FLAGS "${NEW_CMAKE_C_FLAGS}")
set(SKIA_C_FLAGS "\"${NEW_CMAKE_C_FLAGS}\"")
message(STATUS "SKIA_C_FLAGS=${SKIA_C_FLAGS}")

# TODO:
# https://github.com/zub2/SkiaExample/blob/master/ext/CMakeLists.txt#L40

#set(NEW_CMAKE_CXX_FLAGS "")
#foreach(line IN LISTS CMAKE_CXX_FLAGS)
#    string(APPEND NEW_CMAKE_CXX_FLAGS "${line}\";\"")
#endforeach()
#STRING(REGEX REPLACE ";" "\";\"" NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS}")
#set(SKIA_CXX_FLAGS "\"${NEW_CMAKE_CXX_FLAGS}\"")

set(NEW_CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

if(EMSCRIPTEN)
  #set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -s MODULARIZE=1 -s EXPORT_NAME=\"PathKitInit\"")
  #set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -s STRICT=1")
endif() # EMSCRIPTEN

set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -Wno-error")

# The string literal "\\\\" represents "\\" in memory which is a valid regex (representing a single backslash).
STRING(REGEX REPLACE " " "\",\"" NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS}")
set(SKIA_CXX_FLAGS "\"${NEW_CMAKE_CXX_FLAGS}\"")
message(STATUS "SKIA_CXX_FLAGS=${SKIA_CXX_FLAGS}")

set(SKIA_LDFLAGS "\"-Wno-error\"")
#set(SKIA_LDFLAGS "\"\"")

function(SET_SKIA_CONFIG_OPTION OPT_NAME OPT_VALUE)
  if (OPT_VALUE)
    set(${OPT_NAME} "true" PARENT_SCOPE)
  else ()
    set(${OPT_NAME} "false" PARENT_SCOPE)
  endif ()
endfunction()

SET_SKIA_CONFIG_OPTION(SK_CONF_DEBUG ${EXT_SKIA_DEBUG})
SET_SKIA_CONFIG_OPTION(SK_CONF_SHARED ${EXT_SKIA_SHARED})

# it's not possible to enable both OFFICIAL and DEBUG
if (EXT_SKIA_OFFICIAL_BUILD AND NOT EXT_SKIA_DEBUG)
  set(SK_CONF_IS_OFFICIAL_BUILD "true")
else ()
  set(SK_CONF_IS_OFFICIAL_BUILD "false")
endif ()

if (EMSCRIPTEN)
  set(SK_CONF_IS_OFFICIAL_BUILD "true")
  set(SK_CONF_SHARED "false")

  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false") # TODO
  set(SK_IS_ccpr "false")

  set(SK_IS_EGL "true")
  # https://github.com/Zubnix/skia-wasm-port/blob/master/build_skia_wasm_bitcode.sh#L16
  # TODO: PATCH https://github.com/Zubnix/skia-wasm-port/blob/master/wasm_compatible_build.patch
  set(SK_TARGET_CPU "target_cpu=\"wasm\"")
  # see DSK_ASSUME_WEBGL
  # see skia/modules/canvaskit/compile.sh
  set(SK_GL_STANDARD "skia_gl_standard=\"webgl\"") # SK_ASSUME_WEBGL
  #set(SK_GL_STANDARD "skia_gl_standard=\"gles\"") # SK_ASSUME_GL_ES
  #set(SK_GL_STANDARD "skia_gl_standard=\"gl\"") # SK_ASSUME_GL
else ()
  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false")
  set(SK_IS_ccpr "true")

  set(SK_IS_EGL "false")
  set(SK_TARGET_CPU "")
  set(SK_GL_STANDARD "") # default
endif ()

# TODO: target_cpu=\"wasm\" \
# skia_use_system_zlib=true \
# skia_use_system_icu=false \
# skia_use_system_harfbuzz=false \
# skia_use_system_expat=true \
# skia_use_mesa=false \
# is_skia_standalone=true
# skia_enable_effects=true \
# skia_enable_effects_imagefilters=true \

# see https://github.com/google/skia/blob/master/BUILD.gn
  # getting right the wonky cmake string handling (with the extra level of ExternalProject)
  # and the undocumented args handling of GN is a special treat
  # at least Cmake 3.0 has the line continuation feature wich is cool
  # but then the args can't be indented because GN is written by somone with overly strong opinions:
  # "You got a tab character in here. Tabs are evil. Convert to spaces."

# NOTE: modifying skia src requires full rebuild!
set(GN_ARGS "${SK_TARGET_CPU} \
${SK_GL_STANDARD} \
ar=\"${CMAKE_AR}\" \
cc=\"${CMAKE_C_COMPILER}\" \
cxx=\"${CMAKE_CXX_COMPILER}\" \
extra_cflags_c=[${SKIA_C_FLAGS}] \
extra_cflags_cc=[${SKIA_CXX_FLAGS}] \
extra_ldflags=[${SKIA_LDFLAGS}] \
is_official_build=${SK_CONF_IS_OFFICIAL_BUILD} \
is_component_build=${SK_CONF_SHARED} \
is_debug=${SK_CONF_DEBUG} \
skia_enable_gpu=true \
skia_use_egl=${SK_IS_EGL} \
skia_use_vulkan=false \
skia_enable_vulkan_debug_layers=false \
skia_enable_spirv_validation=false \
skia_use_icu=false \
skia_enable_ccpr=${SK_IS_ccpr} \
skia_enable_nvpr=false \
skia_use_expat=false \
skia_enable_skottie=true \
skia_use_libjpeg_turbo=true \
skia_use_system_libjpeg_turbo=false \
skia_use_libpng=true \
skia_use_system_libpng=true \
skia_use_zlib=true \
skia_use_wuffs=true \
skia_use_libwebp=false \
skia_enable_pdf=false \
skia_use_sfntly=false \
skia_enable_atlas_text=false \
skia_use_fontconfig=false \
skia_use_freetype=true \
skia_use_system_freetype2=true \
skia_enable_tools=false \
skia_use_lua=false \
skia_use_piex=false \
skia_use_angle=false \
skia_use_dng_sdk=false \
skia_use_metal=false \
skia_enable_fontmgr_empty=false \
skia_enable_fontmgr_custom=true \
skia_use_libheif=false \
skia_enable_skpicture=true \
skia_enable_skshaper=true \
skia_use_x11=true \
skia_lex=false \
skia_compile_processors=${SK_IS_processors} \
skia_generate_workarounds=${SK_IS_workarounds} \
skia_use_harfbuzz=true"

# \
#modules/skottie/utils/SkottieUtils.cpp

)

message(STATUS "GN_ARGS=${GN_ARGS}")
set(CONFIGURE_COMMAND "${SKIA_SRC}/bin/gn;gen;--root=${SKIA_SRC};${SKIA_BUILD_DIR};--args=${GN_ARGS}")

ExternalProject_Add(SKIA_build
  # LIST_SEPARATOR is needed for list expansion of C(XX)_FLAGS.
  LIST_SEPARATOR "^^"
  SOURCE_DIR ${SKIA_SRC}
  CONFIGURE_COMMAND "${CONFIGURE_COMMAND}"
  BUILD_COMMAND ninja -C ${SKIA_BUILD_DIR} -j8
  # there is no install step provided
  INSTALL_COMMAND true
)

if (EXT_SKIA_ALWAYS_BUILD)
  # Make sure the target is always rebuilt.
  # Without this changing Skia sources doesn't trigger a ninja build. With this
  # ninja build is always triggered. This is not needed if you never touch the
  # Skia sources. Please note that enabling this ends up with re-building of
  # targets that depend on the library. :(
  ExternalProject_Add_Step(SKIA_build ForceBuild COMMAND true DEPENDERS build ALWAYS 1)
endif ()

# taken from BUILD.gn (skia_public_includes, minus things that are obviously useless for us)
set(SKIA_HEADERS
  ${SKIA_SRC}
  ${SKIA_SRC}/tools
  ${SKIA_SRC}/modules/skottie/include
  ${SKIA_SRC}/modules/pathkit
  ${SKIA_SRC}/modules/sksg/include
  ${SKIA_SRC}/modules/skshaper/include
#  ${SKIA_SRC}/tools/timer
  ${SKIA_SRC}/src/gpu
  ${SKIA_SRC}/src/sksl
  ${SKIA_SRC}/src/gpu/gl
  ${SKIA_SRC}/src/shaders
  ${SKIA_SRC}/src/core
  ${SKIA_SRC}/src/image
  ${SKIA_SRC}/src/utils
#  ${SKIA_SRC}/src/tools
  ${SKIA_SRC}/include/c
  ${SKIA_SRC}/include/codec
  ${SKIA_SRC}/include/config
  ${SKIA_SRC}/include/core
  ${SKIA_SRC}/include/effects
  ${SKIA_SRC}/include/gpu
  ${SKIA_SRC}/include/gpu/gl
  ${SKIA_SRC}/include/pathops
  ${SKIA_SRC}/include/ports
  ${SKIA_SRC}/include/svg
  ${SKIA_SRC}/include/utils
#  ${SKIA_SRC}/include/views
  ${SKIA_SRC}/include/private
#  ${SKIA_SRC}/third_party/angle2
#  ${SKIA_SRC}/third_party/cpu-features
#  ${SKIA_SRC}/third_party/dng_sdk
#  ${SKIA_SRC}/third_party/etc1
  ${SKIA_SRC}/third_party/expat
#  ${SKIA_SRC}/third_party/externals
  ${SKIA_SRC}/third_party/freetype2
#  ${SKIA_SRC}/third_party/gif
  ${SKIA_SRC}/third_party/harfbuzz
  ${SKIA_SRC}/third_party/icu
#  ${SKIA_SRC}/third_party/imgui
  ${SKIA_SRC}/third_party/libjpeg-turbo
#  ${SKIA_SRC}/third_party/libmicrohttpd
  ${SKIA_SRC}/third_party/libpng
#  ${SKIA_SRC}/third_party/libsdl
#  ${SKIA_SRC}/third_party/libwebp
#  ${SKIA_SRC}/third_party/lua
#  ${SKIA_SRC}/third_party/native_app_glue
  ${SKIA_SRC}/third_party/Nima-Cpp
#  ${SKIA_SRC}/third_party/opencl
#  ${SKIA_SRC}/third_party/piex
  ${SKIA_SRC}/third_party/skcms
#  ${SKIA_SRC}/third_party/sfntly
#  ${SKIA_SRC}/third_party/spirv-headers
#  ${SKIA_SRC}/third_party/spirv-tools
#  ${SKIA_SRC}/third_party/vulkanmemoryallocator
  ${SKIA_SRC}/third_party/wuffs
  ${SKIA_SRC}/third_party/zlib
)

# this must match what BUILD.gn sets
# if it's wrong it can result in all kinds of funny behavior
# see https://github.com/google/skia/blob/master/modules/pathkit/compile.sh#L94
  # TODO:
  # SK_RELEASE"
  # PATHKIT_TESTING"
  #"SK_INTERNAL"
  #"SK_GAMMA_SRGB"
  #"SK_GAMMA_APPLY_TO_A8"
  #"SK_SCALAR_TO_FLOAT_EXCLUDED"
  #"SK_ALLOW_STATIC_GLOBAL_INITIALIZERS=1"
  #"SK_FORCE_DISTANCEFIELD_FONTS=0"
  #"SK_SCALAR_IS_FLOAT"
  #"SK_CAN_USE_FLOAT"
  #"SK_BUILD_FOR_WIN32"
  #"SK_BUILD_JSON_WRITER"
  #"SK_DEBUG"
  #"SK_DEVELOPER=1"
  #"SK_VULKAN=1" # skia_use_vulkan
  #"SK_ENABLE_VK_LAYERS=1" # skia_enable_vulkan_debug_layers
  #"SK_ENABLE_SPIRV_VALIDATION=1" # skia_enable_spirv_validation
  #"SK_SUPPORT_ATLAS_TEXT=0"
  #"SK_SUPPORT_PDF=1" # skia_enable_pdf
  #"SK_PDF_USE_SFNTLY=1" # skia_use_sfntly
  #"SK_HAS_WEBP_LIBRARY=1" # skia_use_libwebp
  #"SK_XML=1" # skia_use_expat
  #"SK_HAS_HEIF_LIBRARY=1" # skia_use_libheif
  #"SK_METAL"
  #"SK_VULKAN"
  #"SK_MOLTENVK"
  #"SK_CODEC_DECODES_RAW"
  # SKIA_IMPLEMENTATION # https://github.com/google/skia/blob/master/include/core/SkPreConfig.h#L187
  # LIBGLESV2_IMPLEMENTATION # https://github.com/google/skia/blob/master/third_party/angle2/BUILD.gn
  # ANGLE_ENABLE_GLSL
  # ANGLE_ENABLE_OPENGL
  #SK_BUILD_FOR_UNIX
  #SK_BUILD_FOR_PATHKIT=1
  #SK_BUILD_FOR_PATHKIT
  #SK_DISABLE_READBUFFER=1
  #SK_DISABLE_READBUFFER
  # see https://skia-review.googlesource.com/c/skia/+/158341
  #GL_GLEXT_PROTOTYPES
  #EGL_EGLEXT_PROTOTYPES
  #LIBEGL_IMPLEMENTATION
set(SKIA_DEFINES
  SKIA_IMPLEMENTATION
  SK_SUPPORT_OPENCL=0
  SK_SAMPLES_FOR_X=1 # always set for linux, even if there's no X used
  SK_SAMPLES_FOR_X
  # see https://skia.org/user/api/skcanvas_creation
  SK_SUPPORT_GPU=1 # skia_enable_gpu
  SK_SUPPORT_GPU
  SK_HAS_PNG_LIBRARY=1 # skia_use_libpng
  SK_HAS_PNG_LIBRARY
  SK_HAS_JPEG_LIBRARY=1 # skia_use_libjpeg_turbo
  SK_HAS_JPEG_LIBRARY
  SK_INCLUDE_MANAGED_SKOTTIE=1
  SK_INCLUDE_MANAGED_SKOTTIE
)

#<listOptionValue builtIn="false" value="SK_DEFAULT_FONT_CACHE_LIMIT=20971520"/>
#<listOptionValue builtIn="false" value="SK_GAMMA_CONTRAST=0.2"/>
#<listOptionValue builtIn="false" value="SK_GAMMA_EXPONENT=1.2"/>
#<listOptionValue builtIn="false" value="SK_IGNORE_DW_GRAY_FIX"/>
#<listOptionValue builtIn="false" value="SK_IGNORE_LINEONLY_AA_CONVEX_PATH_OPTS"/>
#<listOptionValue builtIn="false" value="SK_SUPPORT_GPU=1"/>

# see https://github.com/xzwang2005/Prelude/blob/master/third_party/skia/src/pathops/SkPathOpsTypes.cpp#L106
#list(APPEND SKIA_DEFINES SKOTTIE_HACK)
#list(APPEND SKIA_DEFINES SKOTTIE_HACK=1)

if (EMSCRIPTEN)
  list(APPEND SKIA_DEFINES OS_EMSCRIPTEN=1) # same as in base/WTF/blink
  list(APPEND SKIA_DEFINES SK_CPU_SSE_LEVEL=0)
  list(APPEND SKIA_DEFINES SKNX_NO_SIMD)
  list(APPEND SKIA_DEFINES SKNX_NO_SIMD=1)
  list(APPEND SKIA_DEFINES SK_ASSUME_WEBGL)
  list(APPEND SKIA_DEFINES SK_ASSUME_WEBGL=1)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL_ES)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL_ES=1)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL=1)
  list(APPEND SKIA_DEFINES IS_WEBGL)
  list(APPEND SKIA_DEFINES IS_WEBGL=1)
  #list(APPEND SKIA_DEFINES LIBANGLE_IMPLEMENTATION=1)
  #list(APPEND SKIA_DEFINES LIBGLESV2_IMPLEMENTATION=1)
  list(APPEND SKIA_DEFINES LIBEGL_IMPLEMENTATION=1)

  # see https://github.com/endlessm/chromium-browser/blob/master/third_party/skia/third_party/skcms/skcms.cc#L1813
  # see https://github.com/google/skia/blob/master/third_party/skcms/skcms.cc#L1836
  # list(APPEND SKIA_DEFINES SKCMS_PORTABLE)

  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_ESSL=1)
  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_GLSL=1)
  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_HLSL=1)
  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_OPENGL=1)
  list(APPEND SKIA_DEFINES EGL_EGLEXT_PROTOTYPES=1)
  #list(APPEND SKIA_DEFINES GL_GLEXT_PROTOTYPES=1)
  list(APPEND SKIA_DEFINES WEB_ASSEMBLY=1)
  #list(APPEND SKIA_DEFINES SK_BUILD_FOR_PATHKIT=1)
  list(APPEND SKIA_DEFINES SK_DISABLE_READBUFFER=1)
endif ()

if (SK_CONF_SHARED)
  list(APPEND SKIA_DEFINES SKIA_DLL=1)
endif ()

# GN doesn't seem to do any fancy stuff with library dependencies - it just
# asks the compiler to link to them w/o any fany search strategies. This
# also means that whatever is found here is not guaranteed to be the same as
# what GN finds. :-(
# Anyway, using plain find_library() seems to be the next closest thing,
# so even if some libraries provide pkg_config or special packages for CMake,
# only find_library() is used here.
# This is needed only for static library build where the dependencies have
# to be added explicitly.

if(EMSCRIPTEN)
  # message(FATAL_ERROR "${TODO}")
else()

if (NOT EXT_SKIA_SHARED)
  function(ADD_SKIA_LIBRARY_DEPENDENCY LIB_NAME_LIST)
    foreach(LIB_NAME ${LIB_NAME_LIST})
      message(STATUS "Searching for ${LIB_NAME}...")
      find_library(LIB${LIB_NAME} ${LIB_NAME})
      if (NOT LIB${LIB_NAME})
        message(FATAL_ERROR "Can't find required library ${LIB_NAME}.")
      else()
        message(STATUS "Found library ${LIB_NAME} = ${LIB${LIB_NAME}}")
      endif ()
      set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${LIB${LIB_NAME}}" PARENT_SCOPE)
    endforeach()
  endfunction()

  # seem to be always required...
  ADD_SKIA_LIBRARY_DEPENDENCY("dl")
  ADD_SKIA_LIBRARY_DEPENDENCY("pthread")
  ADD_SKIA_LIBRARY_DEPENDENCY("harfbuzz")

  # when skia_enable_gpu:
if(SK_IS_EGL)
  ADD_SKIA_LIBRARY_DEPENDENCY("EGL") # skia_use_egl
else()
  ADD_SKIA_LIBRARY_DEPENDENCY("GL") # !skia_use_egl # TODO: GLU?
endif() # SK_IS_EGL
  #ADD_SKIA_LIBRARY_DEPENDENCY("icuuc") # skia_use_system_icu

  ADD_SKIA_LIBRARY_DEPENDENCY("expat") #skia_use_system_expat
  #ADD_SKIA_LIBRARY_DEPENDENCY("jpeg") # skia_use_system_libjpeg_turbo
  ADD_SKIA_LIBRARY_DEPENDENCY("png") # skia_use_system_libpng
  ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_SYSTEM_ZLIB} "z") # skia_use_system_zlib

  # webp integration doesn't expose the system option...
  #ADD_SKIA_LIBRARY_DEPENDENCY("webp") # SK_CONF_IS_OFFICIAL_BUILD && skia_use_libwebp

  ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_FONTCONFIG} "fontconfig") # skia_use_fontconfig
  ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_FREETYPE2} "freetype") # skia_use_system_freetype2
endif (NOT EXT_SKIA_SHARED)

set(SKIA_HEADERS "${SKIA_HEADERS};${HARFBUZZ_INCLUDE_DIRS};${OPENGL_INCLUDE_DIR}")
set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${HARFBUZZ_LIBRARIES};${OPENGL_LIBRARIES}")

endif() # EMSCRIPTEN

message(STATUS "SKIA_HEADERS=${SKIA_HEADERS}")
message(STATUS "SKIA_DEPENDENCIES=${SKIA_DEPENDENCIES}")

if (EXT_SKIA_SHARED)
  set(SKIA_LIBRARY_PREFIX "${CMAKE_SHARED_LIBRARY_PREFIX}")
  set(SKIA_LIBRARY_SUFFIX "${CMAKE_SHARED_LIBRARY_SUFFIX}")
  message(FATAL_ERROR "TODO: SUPPORT SHARED BUILDS") # TODO
  set(SK_LIBRARY_TYPE SHARED)
else (EXT_SKIA_SHARED)
  set(SKIA_LIBRARY_PREFIX "${CMAKE_STATIC_LIBRARY_PREFIX}")
  set(SKIA_LIBRARY_SUFFIX "${CMAKE_STATIC_LIBRARY_SUFFIX}")
  set(SK_LIBRARY_TYPE STATIC)
endif (EXT_SKIA_SHARED)

if(EMSCRIPTEN)
  set(SK_LIBRARY_TYPE STATIC) # FORCE STATIC
else()
  # TODO
endif() # EMSCRIPTEN

add_library(SKIA STATIC IMPORTED GLOBAL)
if(NOT TARGET SKIA)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(SKIA_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skia${SKIA_LIBRARY_SUFFIX}")
#
add_library(pathkit ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET pathkit)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(PATHKIT_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}pathkit${SKIA_LIBRARY_SUFFIX}")
#
add_library(sksg ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET sksg)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(sksg_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}sksg${SKIA_LIBRARY_SUFFIX}")
#
add_library(skshaper ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET skshaper)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(skshaper_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skshaper${SKIA_LIBRARY_SUFFIX}")
#
add_library(skottie ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET skottie)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(skottie_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skottie${SKIA_LIBRARY_SUFFIX}")
#
add_library(particles ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET particles)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(particles_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}particles${SKIA_LIBRARY_SUFFIX}")
#
add_library(wuffs ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET wuffs)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(wuffs_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}wuffs${SKIA_LIBRARY_SUFFIX}")
#
add_library(jpeg ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET jpeg)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(jpeg_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}jpeg${SKIA_LIBRARY_SUFFIX}")

#
#message(FATAL_ERROR "${skottie_LIBRARY}")
set_target_properties(wuffs PROPERTIES
  IMPORTED_LOCATION "${wuffs_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
)
add_dependencies(wuffs SKIA_build)
#
set_target_properties(jpeg PROPERTIES
  IMPORTED_LOCATION "${jpeg_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
)
add_dependencies(jpeg SKIA_build)
#
set_target_properties(SKIA PROPERTIES
  IMPORTED_LOCATION "${SKIA_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${wuffs_LIBRARY};${jpeg_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(SKIA SKIA_build wuffs jpeg)
# https://stackoverflow.com/a/53945809
target_link_libraries(SKIA INTERFACE
  wuffs jpeg)
#
set_target_properties(pathkit PROPERTIES
  IMPORTED_LOCATION "${PATHKIT_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(pathkit SKIA)
# https://stackoverflow.com/a/53945809
target_link_libraries(pathkit INTERFACE
  SKIA)
#
set_target_properties(skshaper PROPERTIES
  IMPORTED_LOCATION "${skshaper_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(skshaper SKIA)# https://stackoverflow.com/a/53945809
# https://stackoverflow.com/a/53945809
target_link_libraries(skshaper INTERFACE
  SKIA)
#
set_target_properties(sksg PROPERTIES
  IMPORTED_LOCATION "${sksg_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${skshaper_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(sksg SKIA skshaper)
# https://stackoverflow.com/a/53945809
target_link_libraries(sksg INTERFACE
  SKIA skshaper)
#
#message(FATAL_ERROR "${skottie_LIBRARY}")
#message(FATAL_ERROR "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}")
set_target_properties(skottie PROPERTIES
  IMPORTED_LOCATION "${skottie_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${sksg_LIBRARY};${skshaper_LIBRARY};${SKIA_DEPENDENCIES}"
)
# https://stackoverflow.com/a/53945809
target_link_libraries(skottie INTERFACE
  SKIA sksg skshaper)
add_dependencies(skottie SKIA sksg skshaper)
#
set_target_properties(particles PROPERTIES
  IMPORTED_LOCATION "${particles_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
)
# https://stackoverflow.com/a/53945809
target_link_libraries(particles INTERFACE
  SKIA)
add_dependencies(particles SKIA)

set(PROJECT_SRC
  src/main.cpp
  # skottie
  # https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skottie/BUILD.gn#L45
  thirdparty/skia/modules/skottie/utils/SkottieUtils.cpp
  # skia effects
  thirdparty/skia/src/c/sk_effects.cpp
  thirdparty/skia/src/effects/Sk1DPathEffect.cpp
  thirdparty/skia/src/effects/Sk2DPathEffect.cpp
  thirdparty/skia/src/effects/SkColorMatrix.cpp
  thirdparty/skia/src/effects/SkColorMatrixFilter.cpp
  thirdparty/skia/src/effects/SkCornerPathEffect.cpp
  thirdparty/skia/src/effects/SkDashPathEffect.cpp
  thirdparty/skia/src/effects/SkDiscretePathEffect.cpp
  thirdparty/skia/src/effects/SkEmbossMask.cpp
  thirdparty/skia/src/effects/SkEmbossMaskFilter.cpp
  thirdparty/skia/src/effects/SkHighContrastFilter.cpp
  thirdparty/skia/src/effects/SkLayerDrawLooper.cpp
  thirdparty/skia/src/effects/SkLumaColorFilter.cpp
  thirdparty/skia/src/effects/SkOpPathEffect.cpp
  thirdparty/skia/src/effects/SkOverdrawColorFilter.cpp
  thirdparty/skia/src/effects/SkPackBits.cpp
  thirdparty/skia/src/effects/SkShaderMaskFilter.cpp
  thirdparty/skia/src/effects/SkTableColorFilter.cpp
  thirdparty/skia/src/effects/SkTableMaskFilter.cpp
  thirdparty/skia/src/effects/SkTrimPathEffect.cpp
  thirdparty/skia/src/shaders/SkPerlinNoiseShader.cpp
  thirdparty/skia/src/shaders/gradients/Sk4fGradientBase.cpp
  thirdparty/skia/src/shaders/gradients/Sk4fLinearGradient.cpp
  thirdparty/skia/src/shaders/gradients/SkGradientShader.cpp
  thirdparty/skia/src/shaders/gradients/SkLinearGradient.cpp
  thirdparty/skia/src/shaders/gradients/SkRadialGradient.cpp
  thirdparty/skia/src/shaders/gradients/SkTwoPointConicalGradient.cpp
  thirdparty/skia/src/shaders/gradients/SkSweepGradient.cpp
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
  thirdparty/skia/src/effects/imagefilters/SkAlphaThresholdFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkArithmeticImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkBlurImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkColorFilterImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkComposeImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkDisplacementMapEffect.cpp
  thirdparty/skia/src/effects/imagefilters/SkDropShadowImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkImageSource.cpp
  thirdparty/skia/src/effects/imagefilters/SkLightingImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkMagnifierImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkMatrixConvolutionImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkMergeImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkMorphologyImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkOffsetImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkPaintImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkPictureImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkTileImageFilter.cpp
  thirdparty/skia/src/effects/imagefilters/SkXfermodeImageFilter.cpp
)

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

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

if(EMSCRIPTEN)
  # -s ENVIRONMENT=web
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --emrun")
  # https://emscripten.org/docs/getting_started/Tutorial.html#generating-html
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -o hello.html")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources/fonts/FreeSans.ttf")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --preload-file resources")
endif() # EMSCRIPTEN

set(WTF_LIBRARY_NAME wtf)
#message(FATAL_ERROR ${WTF_LIBRARY_NAME})

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
    ${WTF_LIBRARY_NAME}
    base
    libevent
    icu
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
    ${WTF_LIBRARY_NAME}
    base
    libevent
    icu
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
  )
  target_compile_definitions(${PROJECT_NAME} PRIVATE
    GLEW_NO_GLU
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
