include_guard( DIRECTORY )

if(NOT TARGET_EMSCRIPTEN)
  message(FATAL_ERROR "That file requires emscripten platform")
endif(NOT TARGET_EMSCRIPTEN)

set(ENABLE_WASM TRUE CACHE BOOL "ENABLE_WASM")
if(NOT ENABLE_WASM)
  message(FATAL_ERROR "only WASM build supported for now")
endif(NOT ENABLE_WASM)

set(ENABLE_WEB_PTHREADS TRUE CACHE BOOL "ENABLE_WEB_PTHREADS")
if(TARGET_EMSCRIPTEN)
  message(STATUS "ENABLE_WEB_PTHREADS=${ENABLE_WEB_PTHREADS}")
endif(TARGET_EMSCRIPTEN)

set(ENABLE_WEBGL2 TRUE CACHE BOOL "ENABLE_WEB_PTHREADS")
#set(ENABLE_WEBGL1 TRUE) # TODO
set(ENABLE_WEBGL_DEBUG_CHECKS TRUE CACHE BOOL "ENABLE_WEBGL_DEBUG_CHECKS") # only in debug

# NOTE: SOURCE_MAP requires -g4 and --source-map-base
# see http://webassemblycode.com/using-browsers-debug-webassembly/
set(EMSCRIPTEN_USE_SOURCE_MAP TRUE CACHE BOOL "EMSCRIPTEN_USE_SOURCE_MAP") # only for debug builds

set(EMSCRIPTEN_USE_SAFE_HEAP TRUE CACHE BOOL "EMSCRIPTEN_USE_SAFE_HEAP") # only for debug builds

set(EMSCRIPTEN_USE_PROFILING FALSE CACHE BOOL "EMSCRIPTEN_USE_PROFILING")

# NOTE: see https://github.com/emscripten-core/emscripten/issues/8755
# NOTE: use with quotes: -DEMSCRIPTEN_ASSERTION_LEVEL=\"1\"
set(EMSCRIPTEN_ASSERTION_LEVEL "" CACHE STRING "EMSCRIPTEN_ASSERTION_LEVEL")

# may be clamp, js, etc.
# see https://emscripten.org/docs/compiling/WebAssembly.html#fastcomp-asm2wasm
set(BINARYEN_TRAP_MODE "" CACHE STRING "BINARYEN_TRAP_MODE")

set(EMSCRIPTEN_EMIT_SYMBOL_MAP TRUE CACHE BOOL "EMSCRIPTEN_EMIT_SYMBOL_MAP") # only for debug builds

set(EMSCRIPTEN_MEMORY_PROFILER FALSE CACHE BOOL "EMSCRIPTEN_MEMORY_PROFILER")

set(EMSCRIPTEN_THREAD_PROFILER FALSE CACHE BOOL "EMSCRIPTEN_THREAD_PROFILER")

set(ENABLE_EMBIND TRUE)
if(ENABLE_EMBIND)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_EMBIND=1")
endif(ENABLE_EMBIND)

# "#window" deprecated, use EMSCRIPTEN_EVENT_TARGET_WINDOW in new versions
set(USE_DEPRECATED_FIND_EVENT_TARGET TRUE)

# see https://github.com/emscripten-core/emscripten/issues/9315
# https://github.com/emscripten-core/emscripten/commit/6803b566b0e9d7ca68e39bec7a22bb5d61b9c2c2
if(NOT BINARYEN_TRAP_MODE MATCHES "")
  set(EMCC_COMMON "${EMCC_COMMON} -s BINARYEN_TRAP_MODE='${BINARYEN_TRAP_MODE}'")
endif(NOT BINARYEN_TRAP_MODE MATCHES "")

# https://github.com/emscripten-core/emscripten/pull/7977
# https://github.com/emscripten-ports/SDL2/pull/75
# (new since 1.38.27) — leads to minor code size savings
# NOTE: will drop support for DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=0 at 1.39
# https://github.com/emscripten-core/emscripten/issues/8047
# set(EMCC_COMMON "${EMCC_COMMON} -s DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=1")
if("${EMSCRIPTEN_VERSION}" VERSION_GREATER 1.38.27)
  # see https://github.com/emscripten-core/emscripten/blob/incoming/ChangeLog.md#v13827-02102019
  set(EMCC_COMMON "${EMCC_COMMON} -s DISABLE_DEPRECATED_FIND_EVENT_TARGET_BEHAVIOR=0")
  set(USE_DEPRECATED_FIND_EVENT_TARGET FALSE)
endif()

if(USE_DEPRECATED_FIND_EVENT_TARGET)
  list(APPEND APP_DEFINITIONS USE_DEPRECATED_FIND_EVENT_TARGET=1)
  # TODO: emscripten-specific define, do we need it everywhere?
  # set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_DEPRECATED_FIND_EVENT_TARGET=1")
endif(USE_DEPRECATED_FIND_EVENT_TARGET)

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
#set(EMCC_COMMON "${EMCC_COMMON} -s USE_LIBPNG=1")
#set(EMCC_COMMON "${EMCC_COMMON} -D__EMSCRIPTEN__=1")

# see https://github.com/endlessm/chromium-browser/blob/master/third_party/skia/third_party/skcms/skcms.cc#L1813
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSKCMS_PORTABLE=1")
# NOTE: SKCMS_PORTABLE <=> __EMSCRIPTEN_major__

# see https://github.com/google/skia/blob/e847af7e0d034cb67675ad8d605d5133b6189640/infra/bots/recipe_modules/build/default.py#L174
# DGR_EGL_TRY_GLES3_THEN_GLES2

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
  # NOTE: for wasm there is no need to set ELIMINATE_DUPLICATE_FUNCTIONS,
  # the binaryen optimizer does it automatically
  #set(EMCC_COMMON "${EMCC_COMMON} -s ELIMINATE_DUPLICATE_FUNCTIONS=1")
  #
  # EVAL_CTORS evaluates global data initializer constructors at link time,
  # which would improve startup time and reduce code size of these ctors.
  set(EMCC_COMMON "${EMCC_COMMON} -s EVAL_CTORS=1")
endif(RELEASE_BUILD)

set(HAS_EMTERPRETIFY FALSE)
set(HAS_ASYNCIFY FALSE)

if(ENABLE_EMBIND)
  set(EMCC_COMMON "${EMCC_COMMON} --bind")
endif(ENABLE_EMBIND)

if(ENABLE_WEB_PTHREADS)
  #custom defines
  set(EMCC_COMMON "${EMCC_COMMON} -DHAVE_PTHREAD=1")
  set(EMCC_COMMON "${EMCC_COMMON} -DEMSCRIPTEN_SUPPORTS_ASYNC_RUN=1")
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
  # Thread local storage
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
endif(ENABLE_WEB_PTHREADS)

#
# ORIGINAL_EXPORTED_FUNCTIONS
#
# EXTRA_EXPORTED_RUNTIME_METHODS
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
#set(EMCC_COMMON "${EMCC_COMMON} -s EXPORTED_FUNCTIONS='[_main, _malloc, _free]'")
# see https://github.com/nskipper1110/objectivemedia/blob/c65c3f652e72dfac81b1739e55ded9397580371f/emsdk-portable/emscripten/1.38.13/tests/test_core.py#L4736
#set(EMCC_COMMON "${EMCC_COMMON} -s EXTRA_EXPORTED_RUNTIME_METHODS=[\"getValue\", \"setValue\", \"UTF8ToString\", \"stringToUTF8\"]")
#set(EMCC_COMMON "${EMCC_COMMON} -s EXTRA_EXPORTED_RUNTIME_METHODS='[UTF8ToString, stringToUTF8, UTF16ToString, stringToUTF16, UTF32ToString, stringToUTF32, ccall, cwrap, setValue, getValue, intArrayFromString, intArrayToString, writeStringToMemory, writeArrayToMemory, writeAsciiToMemory, addRunDependency, removeRunDependency, Pointer_stringify, stackTrace]'")
#
# You can optionally use -s 'EMTERPRETIFY_FILE="data.binary"' to store the emterpreter bytecode in a file
#

if(HAS_ASYNCIFY OR HAS_EMTERPRETIFY)
  #custom defines
  message(FATAL_ERROR "TODO: SUPPORT HAS_ASYNC")
  set(EMCC_COMMON "${EMCC_COMMON} -DHAS_ASYNC=1")
endif(HAS_ASYNCIFY OR HAS_EMTERPRETIFY)

if(USE_SYSTEM_ZLIB)
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_ZLIB=1")
else()
  message(FATAL_ERROR "wasm requires SYSTEM ZLIB")
endif(USE_SYSTEM_ZLIB)

#set(EMCC_COMMON "${EMCC_COMMON} -s USE_BZIP2=1")

if(NOT DEFINED USE_ICU)
  message(FATAL_ERROR "USE_ICU must be defined")
endif(NOT DEFINED USE_ICU)

if(NOT DEFINED USE_CUSTOM_ICU)
  message(FATAL_ERROR "USE_CUSTOM_ICU must be defined")
endif(NOT DEFINED USE_CUSTOM_ICU)

if(USE_ICU AND NOT USE_CUSTOM_ICU)
  set(EMCC_COMMON "${EMCC_COMMON} -s USE_ICU=1")
  message(FATAL_ERROR "not supported: USE_ICU AND NOT USE_CUSTOM_ICU")
endif(USE_ICU AND NOT USE_CUSTOM_ICU)

#set(EMCC_COMMON "${EMCC_COMMON} -s USE_LIBPNG=1")

if(USE_EMCC_LIBJPEG_PORT)
  message(FATAL_ERROR "LIBJPEG port not supported yet")
  if("${EMSCRIPTEN_VERSION}" VERSION_GREATER 1.38.32)
    message(STATUS "using LIBJPEG port, Emscripten version is ${EMSCRIPTEN_VERSION}")
  else()
    message(WARNING "can`t use LIBJPEG port, EMSCRIPTEN_VERSION is not present, or is older than 1.38.32: '${EMSCRIPTEN_VERSION}'")
  endif()
endif()

set(EMCC_COMMON "${EMCC_COMMON} -s USE_SDL=2")
#set(EMCC_COMMON "${EMCC_COMMON} -s USE_SDL_IMAGE=2")
#set(EMCC_COMMON "${EMCC_COMMON} -s USE_SDL_TTF=2")

if(RELEASE_BUILD)
  set(ENABLE_WEBGL_DEBUG_CHECKS FALSE)
endif(RELEASE_BUILD)

if(ENABLE_WEBGL2 OR ENABLE_WEBGL1)
  #
  # WEBGL (see also OFFSCREEN_CAVAS settings)
  #
  # see https://bugs.chromium.org/p/skia/issues/detail?id=9052&q=&sort=-modified&colspec=ID%20Type%20Status%20Priority%20M%20Area%20Owner%20Summary%20Modified
  # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L369
  # see https://www.khronos.org/registry/webgl/specs/2.0/#4.1.2
  # TODO: check freezes with threads
  if(ENABLE_WEBGL2)
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
  if(ENABLE_WEBGL2)
    # Forces support for all GLES3 features, not just the WebGL2-friendly subset.
    set(EMCC_COMMON "${EMCC_COMMON} -s FULL_ES3=1")
  elseif(ENABLE_WEBGL1)
    # // Forces support for all GLES2 features, not just the WebGL-friendly subset.
    # set(EMCC_COMMON "${EMCC_COMMON} -s FULL_ES2=1")
  endif(ENABLE_WEBGL2)
  if(ENABLE_WEBGL_DEBUG_CHECKS)
    #
    # see https://emscripten.org/docs/porting/multimedia_and_graphics/OpenGL-support.html?highlight=use_webgl2#emulation-of-older-desktop-opengl-api-features
    # Incomplete but useful
    # cannot emulate both ES2/ES3 and legacy GL
    # set(EMCC_COMMON "${EMCC_COMMON} -s LEGACY_GL_EMULATION=1")

    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L369
    # debug printing of WebGL related operations
    # set(EMCC_COMMON "${EMCC_COMMON} -s GL_DEBUG=1")
    #
    # print out socket,network data transfer
    # set(EMCC_COMMON "${EMCC_COMMON} -s SOCKET_DEBUG=1")
    #
    # print out sys calls, verbose
    # set(EMCC_COMMON "${EMCC_COMMON} -s SYSCALL_DEBUG=1")
    #
    # print out library calls, verbose
    # set(EMCC_COMMON "${EMCC_COMMON} -s LIBRARY_DEBUG=1")
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
else()
  # https://emscripten.org/docs/optimizing/Optimizing-Code.html#c-rtti
  set(EMCC_COMMON "${EMCC_COMMON} -fno-exceptions")
endif(NOT RELEASE_BUILD)

#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_RELEASE=1")

# TODO: fix hangs in WASM MT without NDEBUG=1 in SK_COMMON_FLAGS
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DNDEBUG=1")

# https://github.com/google/skia/blob/master/BUILD.gn#L502
# set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSKSL_STANDALONE") # if(skia_compile_processors)
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DISABLE_LEGACY_SHADERCONTEXT=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DISABLE_LOWP_RASTER_PIPELINE=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_FORCE_RASTER_PIPELINE_BLITTER=1")
if(USE_SK_GPU)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ASSUME_WEBGL=1") # see skia_gl_standard
  #set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ASSUME_GL_ES=1") # see skia_gl_standard
  #set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ASSUME_GL=1") # see skia_gl_standard
endif(USE_SK_GPU)
set(EMCC_COMMON "${EMCC_COMMON} -DIS_WEBGL=1")
# see https://github.com/xzwang2005/Prelude/blob/master/third_party/skia/src/pathops/SkPathOpsTypes.cpp#L106
#if(ENABLE_SKOTTIE)
  #set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSKOTTIE_HACK")
#endif(ENABLE_SKOTTIE)
# https://github.com/qinjidong/qt5.13/blob/master/src/qtwebengine/src/3rdparty/${CHROMIUM_DIR}third_party/skia/experimental/canvaskit/compile.sh
if(NOT ENABLE_SIMD)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSKNX_NO_SIMD") # see "-s SIMD=1" and -msimd128
endif(NOT ENABLE_SIMD)
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DISABLE_AAA")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_DISABLE_EFFECT_DESERIALIZATION")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DWEB_ASSEMBLY=1")
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_BUILD_FOR_PATHKIT=1")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SUPPORT_OPENCL=0")
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_SAMPLES_FOR_X=1") # always set for linux, even if there's no X used
set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_HAS_PNG_LIBRARY=1") # skia_use_libpng

# CLANG_ATOMICS for ICU lib
# see https://github.com/emscripten-core/emscripten/commit/9c4dfa12feb2b3d68bc2a44ad42b95f3b647728d
# see https://github.com/h-s-c/libKD/blob/master/source/kd_atomic_ops.c#L202
# set(EMCC_COMMON "${EMCC_COMMON} -DU_HAVE_CLANG_ATOMICS=0")

# https://github.com/Rusino/skia/blob/master/BUILD.gn#L1688
# NOTE: on wasm  by default skia don`t use harfbuzz skshaper
if(ENABLE_SKSHAPER)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_USING_SKSHAPER=1") # skia_enable_skshaper
endif(ENABLE_SKSHAPER)
if(ENABLE_WUFFS)
  set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_HAS_WUFFS_LIBRARY=1") # skia_use_wuffs
endif(ENABLE_WUFFS)
# SK_HAS_WEBP_LIBRARY # skia_use_libwebp
# SK_XML # skia_use_expat
# https://github.com/Rusino/skia/blob/master/BUILD.gn#L191
#set(SK_COMMON_FLAGS "${SK_COMMON_FLAGS} -DSK_ALLOW_STATIC_GLOBAL_INITIALIZERS=0") # don`t redefine

# Check each write to the heap, for example, this will give a clear error
# on what would be segfaults in a native build (like dereferencing 0)
# see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js#L262
# see https://emscripten.org/docs/porting/Debugging.html#memory-alignment-issues
if(NOT RELEASE_BUILD)
  if(EMSCRIPTEN_USE_SAFE_HEAP AND EMSCRIPTEN_USE_SAFE_HEAP)
    message(WARNING "SAFE_HEAP may break SOURCE_MAP, see https://github.com/emscripten-core/emscripten/issues/8584#issuecomment-495411386")
  endif()
  if(EMSCRIPTEN_USE_SAFE_HEAP)
    #
    # NOTE: SAFE_HEAP breaks source maps
    # see https://github.com/emscripten-core/emscripten/issues/8584#issuecomment-495411386
    #
    set(EMCC_COMMON "${EMCC_COMMON} -s SAFE_HEAP=1")
  endif()
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
if(HAS_EMTERPRETIFY)
  message(FATAL_ERROR "TODO: REMOVE EMTERPRETIFY FLAGS")
else(HAS_EMTERPRETIFY)
  if(EMSCRIPTEN_USE_SOURCE_MAP)
    # see http://webassemblycode.com/using-browsers-debug-webassembly/
    set(EMCC_COMMON "${EMCC_COMMON} --source-map-base http://localhost:9090/")
  endif()
endif(HAS_EMTERPRETIFY)

if(HAS_EMTERPRETIFY AND EMSCRIPTEN_USE_SOURCE_MAP)
  message(FATAL_ERROR "EMTERPRETIFY breaks source map")
endif()

if(NOT RELEASE_BUILD)
  # -g4: Preserve LLVM debug information. This is the highest level of debuggability
  # see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
  set(DEBUG_LEVEL_DEFAULT "-g4")
  #
  # NOTE: -01 and higher by default discard LLVM debug information
  if(NOT DEBUG_LEVEL)
    set(DEBUG_LEVEL "${DEBUG_LEVEL} ${DEBUG_LEVEL_DEFAULT}")
  else()
    # NOTE: DEBUG_LEVEL may contain not only "-g4" (multiple flags allowed)
    if(EMSCRIPTEN_USE_SOURCE_MAP AND NOT DEBUG_LEVEL MATCHES "-g4")
      message(WARNING "SOURCE_MAP requires DEBUG_LEVEL = -g4. Your DEBUG_LEVEL=${DEBUG_LEVEL}")
    endif()
  endif(NOT DEBUG_LEVEL)
else()
  # force g0 to reduce the size
  set(DEBUG_LEVEL "${DEBUG_LEVEL} -g0")
endif(NOT RELEASE_BUILD)
# see above
message(STATUS "DEBUG_LEVEL=${DEBUG_LEVEL}")
set(EMCC_COMMON "${EMCC_COMMON} ${DEBUG_LEVEL}")

# TODO EMCC_LINKER_FLAGS

# see https://doc.magnum.graphics/magnum/platforms-html5.html#platforms-html5-code-size
# see https://emscripten.org/docs/tools_reference/emcc.html#emcc-oz
# NOTE: compile with -O1 or -O0 to see crash message/assert
if(RELEASE_BUILD)
  #set(EMCC_COMMON "${EMCC_COMMON} -O1")
  # best performance. This is a good setting for a release build (!!!)
  if(NOT OPTIMIZE_LEVEL)
    set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} -O3")
  endif(NOT OPTIMIZE_LEVEL)
  # reduces code size at the expense of performance (!!!)
  #set(EMCC_COMMON "${EMCC_COMMON} -Os")
  # Oz reduces code size even further at the expense of performance (!!!)
  # see https://github.com/emscripten-core/emscripten/issues/362
  # NOTE: -O3 = best performance. -Oz = best size.
  #set(EMCC_COMMON "${EMCC_COMMON} -Oz")
else()
  # set(EMCC_COMMON "${EMCC_COMMON} -O0")
  # NOTE Catching C++ exceptions is turned off by default in -O1 (and above).
  if(NOT OPTIMIZE_LEVEL) # TODO
    set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} -O1")
    #set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} -O2")
  endif(NOT OPTIMIZE_LEVEL)
  #
  if(EMSCRIPTEN_USE_SOURCE_MAP AND EMSCRIPTEN_USE_PROFILING)
    message(WARNING "--profiling may break SOURCE_MAP, see https://github.com/emscripten-core/emscripten/issues/8584#issuecomment-495344200")
  endif()
  if(EMSCRIPTEN_USE_PROFILING)
    #
    # breaks source maps. see https://github.com/emscripten-core/emscripten/issues/8584#issuecomment-495344200
    # see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    set(EMCC_COMMON "${EMCC_COMMON} --profiling")
    #
    ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
    set(EMCC_COMMON "${EMCC_COMMON} --profiling-funcs")
  endif(EMSCRIPTEN_USE_PROFILING)
  #
  ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
  #set(EMCC_COMMON "${EMCC_COMMON} --tracing")
  #
  ## allows you, for example, to reconstruct meaningful stack traces.
  ## see https://habr.com/ru/post/343784/
  if(EMSCRIPTEN_EMIT_SYMBOL_MAP)
    set(EMCC_COMMON "${EMCC_COMMON} --emit-symbol-map")
  endif(EMSCRIPTEN_EMIT_SYMBOL_MAP)
  #
  ## Enables warnings about the use of absolute paths in -I and -L command line directives.
  ## set(EMCC_COMMON "${EMCC_COMMON} -Wwarn-absolute-paths")
  ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
  #
  if(EMSCRIPTEN_MEMORY_PROFILER)
    set(EMCC_COMMON "${EMCC_COMMON} --memoryprofiler")
  endif(EMSCRIPTEN_MEMORY_PROFILER)
  ## see https://emscripten.org/docs/tools_reference/emcc.html#emcc-compiler-optimization-options
  #
  if(ENABLE_WEB_PTHREADS AND EMSCRIPTEN_THREAD_PROFILER)
    set(EMCC_COMMON "${EMCC_COMMON} --threadprofiler")
  endif(ENABLE_WEB_PTHREADS AND EMSCRIPTEN_THREAD_PROFILER)
  #
  #set(EMCC_COMMON "${EMCC_COMMON} -DPATHKIT_TESTING") # TODO
endif(RELEASE_BUILD)
# see above
message(STATUS "OPTIMIZE_LEVEL=${OPTIMIZE_LEVEL}")
set(EMCC_COMMON "${EMCC_COMMON} ${OPTIMIZE_LEVEL}")
#
# TODO: remove some DEAD FUNCTIONS to improve skia webassembly size
# -s DEAD_FUNCTIONS
#
# With --use-preload-plugins, files can be automatically decoded based on their extension.
# see https://emscripten.org/docs/porting/files/packaging_files.html
#set(EMCC_COMMON "${EMCC_COMMON} --preload-file resources --use-preload-plugins")
# https://emscripten.org/docs/getting_started/FAQ.html#why-does-my-code-break-and-gives-odd-errors-when-using-o2-closure-1
#set(EMCC_COMMON "${EMCC_COMMON} --closure 1") # UNSAFE optimization
#
# Enables LLVM link-time optimizations (LTO)
# SEE: https://emscripten.org/docs/optimizing/Optimizing-Code.html#lto
# --llvm-lto N: this controls LLVM’s LTO (Link-Time-Optimization) pass,
# 1 seems to produce the best tradeoff between size and speed for my code.
# Bigger values seem to do more inlining
# and produce bigger code for little performance increase.
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
    set(EMCC_COMMON "${EMCC_COMMON} -mmsse")
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

if(EMSCRIPTEN_ASSERTION_LEVEL MATCHES "")
  if(NOT RELEASE_BUILD)
    message(WARNING "You need to set not empty EMSCRIPTEN_ASSERTION_LEVEL for debug build.")
    set(EMCC_COMMON "${EMCC_COMMON} -s ASSERTIONS=1")
  endif(NOT RELEASE_BUILD)
elseif(EMSCRIPTEN_ASSERTION_LEVEL MATCHES "1")
  set(EMCC_COMMON "${EMCC_COMMON} -s ASSERTIONS=1")
  if(RELEASE_BUILD)
    message(WARNING "You need to set empty EMSCRIPTEN_ASSERTION_LEVEL for release build.")
  endif(RELEASE_BUILD)
elseif(EMSCRIPTEN_ASSERTION_LEVEL MATCHES "2")
  # ASSERTIONS == 2 gives even more runtime checks
  set(EMCC_COMMON "${EMCC_COMMON} -s ASSERTIONS=2")
  if(RELEASE_BUILD)
    message(WARNING "You need to set empty EMSCRIPTEN_ASSERTION_LEVEL for release build.")
  endif(RELEASE_BUILD)
else()
  message(FATAL_ERROR
    "You need to set known EMSCRIPTEN_ASSERTION_LEVEL.
    Current EMSCRIPTEN_ASSERTION_LEVEL=${EMSCRIPTEN_ASSERTION_LEVEL}"
  )
endif()

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

# WASM_OBJECT_FILES=1 may speed up link time
# NOTE: Link Time Optimization (LTO) requires WASM_OBJECT_FILES=0
# NOTE: LTO is UNSAFE, but WASM_OBJECT_FILES is SAFE
# see http://qtandeverything.blogspot.com/2019/06/faster-link-time-for-qt-webassembly.html
# see https://emscripten.org/docs/optimizing/Optimizing-Code.html#lto
# see https://emscripten.org/docs/optimizing/Optimizing-Code.html?highlight=wasm_object_files#unsafe-optimizations
# Btw WASM_OBJECT_FILES=1 is the default so that is not needed.
# see https://github.com/emscripten-core/emscripten/blob/incoming/src/settings.js#L1003
# set(EMCC_COMMON "${EMCC_COMMON} -s WASM_OBJECT_FILES=1")

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

message(STATUS "GLEW_INCLUDE_PATH=${GLEW_INCLUDE_PATH}")
message(STATUS "GLEW_LIBRARY=${GLEW_LIBRARY}")
message(STATUS "OPENGL_LIBRARIES = ${OPENGL_LIBRARIES} ")
message(STATUS "OPENGL_gl_LIBRARY = ${OPENGL_gl_LIBRARY} ")
message(STATUS "OPENGL_INCLUDE_DIR = ${OPENGL_INCLUDE_DIR} ")
