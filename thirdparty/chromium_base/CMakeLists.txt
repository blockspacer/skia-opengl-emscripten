# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_base")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

# TODO
if(NOT DEFINED BASE_STANDALONE)
  message("FATAL_ERROR: TODO: USE BASE_STANDALONE")
  set(BASE_STANDALONE TRUE) # TODO
endif(NOT DEFINED BASE_STANDALONE)

if(BASE_STANDALONE)
  set(CHROMIUM_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../chromium/)
  set(COMMON_THIRDPARTY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../thirdparty/)
  set(ICU_PARENT_FULL_DIR ${COMMON_THIRDPARTY_DIR}/icu_wrapper/)
  set(ICU_FULL_DIR ${ICU_PARENT_FULL_DIR}third_party/icu/)
  set(BASE_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
  set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/)
endif(BASE_STANDALONE)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

include(cmake/PlatformChecks)

include(cmake/Options)

include(cmake/GenBuildFlags)

include(cmake/ProjectFiles)

if(TARGET_LINUX)
  include(cmake/detect_atomic32_support)
endif(TARGET_LINUX)

if(BASE_STANDALONE)
  set(OWN_ICU_INCLUDE_DIRS
    ${ICU_PARENT_FULL_DIR}
    ${ICU_FULL_DIR}
    ${ICU_FULL_DIR}source/common/unicode
    ${ICU_FULL_DIR}source/common
    ${ICU_FULL_DIR}source/i18n
  )
  list(APPEND CMAKE_MODULE_PATH ${CHROMIUM_DIR})
  list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../)
  #message(FATAL_ERROR "CHROMIUM_DIR=${CHROMIUM_DIR}")
  include(dynamic_annotations)
  include(ced)
  if(TARGET_LINUX)
    # libevent
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../chromium_libevent)
  elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
    # skip
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
  include(tcmalloc)
  include(icu)
  include(modp_b64)
  include(xdg_mime)
  include(xdg_user_dirs)
  set(CUSTOM_ICU_LIB icu)
  set(ced_LIB ced)
  #
  #find_package(LibDL REQUIRED)
  #set(libDL_LIB LIBDL::LIBDL)
  #
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    find_package( Threads REQUIRED )
    message(STATUS "CMAKE_THREAD_LIBS_INIT = ${CMAKE_THREAD_LIBS_INIT}")
    set(PTHREADS_LIBS ${CMAKE_THREAD_LIBS_INIT}) # note: not set for emscripten
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
  #
  find_package(ZLIB REQUIRED)
  set(libZLIB_LIB ZLIB::ZLIB)
endif(BASE_STANDALONE)

add_library(base STATIC
  ${BASE_SOURCES}
  ${COBALT_port_base_SOURCES}
)

if(TARGET_EMSCRIPTEN)
  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    ${ced_LIB}
    ${CUSTOM_ICU_LIB}
  )
elseif(TARGET_LINUX)
  if(NOT DEFINED libevent_LIB)
    message(FATAL_ERROR "NOT DEFINED libevent_LIB")
  endif(NOT DEFINED libevent_LIB)

  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    tcmalloc
    ${ced_LIB}
    ${CUSTOM_ICU_LIB}
    # libevent only for posix/linux/e.t.c.
    ${libevent_LIB}
    modp_b64
  )
  add_dependencies(base
    tcmalloc
    ${ced_LIB}
    ${CUSTOM_ICU_LIB}
    modp_b64
  )
elseif(TARGET_WINDOWS)
  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    #tcmalloc
    ${ced_LIB}
    ${CUSTOM_ICU_LIB}
    # libevent only for posix/linux/e.t.c.
    #${libevent_LIB}
    modp_b64
  )
  add_dependencies(base
    #tcmalloc
    ${ced_LIB}
    ${CUSTOM_ICU_LIB}
    modp_b64
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(TARGET_LINUX)
  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    xdg_mime
    xdg_user_dirs
  )
endif(TARGET_LINUX)

add_dependencies(base
  ${EXTRA_CHROMIUM_BASE_LIBS}
)

#message(FATAL_ERROR EXTRA_CHROMIUM_BASE_LIBS=${EXTRA_CHROMIUM_BASE_LIBS})

if(TARGET_WINDOWS)
  # see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn#L1799
  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    cfgmgr32.lib
    powrprof.lib
    propsys.lib
    setupapi.lib
    userenv.lib
    wbemuuid.lib
    winmm.lib
    # https://stackoverflow.com/questions/7028304/error-lnk2019-when-using-getfileversioninfosize
    version.lib
    # https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/build/config/BUILD.gn#L203
    advapi32.lib
    comdlg32.lib
    dbghelp.lib
    dnsapi.lib
    gdi32.lib
    msimg32.lib
    odbc32.lib
    odbccp32.lib
    oleaut32.lib
    shell32.lib
    shlwapi.lib
    user32.lib
    usp10.lib
    uuid.lib
    wininet.lib
    winmm.lib
    winspool.lib
    ws2_32.lib
  )
endif(TARGET_WINDOWS)

#'dependencies': [
#  '<(DEPTH)/nb/nb.gyp:nb',
#  '<(DEPTH)/starboard/client_porting/eztime/eztime.gyp:eztime',
#  '<(DEPTH)/starboard/starboard.gyp:starboard',
#  '<(DEPTH)/testing/gtest.gyp:gtest_prod',
#  '<(DEPTH)/third_party/modp_b64/modp_b64.gyp:modp_b64',
#  'base_static',
#  'third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations',
#],
target_link_libraries(base PRIVATE
  ${COBALT_NANOBASE_LIB}
  ${STARBOARD_PLATFORM_LIB}
  #starboard_core
  ${STARBOARD_EZTIME_LIB}
  ${STARBOARD_COMMON_LIB}
  modp_b64
  #
  ${dynamic_annotations_LIB}
  ${EXTRA_CHROMIUM_BASE_LIBS}
  ${LIBATOMIC} # from system, no dep. for __atomic_is_lock_free
  # see https://stackoverflow.com/questions/1236670/how-to-make-opengl-apps-in-64-bit-windows
  #${FOUND_OPENGL_LIBRARIES}
  # ${GLEW_LIBRARY}
  ${PTHREADS_LIBS} # note: not set for emscripten
)

set_property(TARGET base PROPERTY CXX_STANDARD 17)

list(APPEND BASE_DEFINES
  OFFICIAL_BUILD=1
  BASE_PORT=1
)

# In your source, include files from base/ like normal.
# So if you want to use the string printf API, do:
# #include <base/stringprintf.h>
target_include_directories(base PUBLIC
  ${CHROMIUM_DIR} # TODO
  ${CMAKE_CURRENT_SOURCE_DIR} # path to base/threading/thread.h
  # TODO
  #${COBALT_COMMON_INCLUDES}
  # see https://stackoverflow.com/questions/16390078/build-error-when-trying-to-run-an-opengl-example-in-vc
  # ${GLEW_INCLUDE_PATH}
)

#message(FATAL_ERROR ${CHROMIUM_DIR}/../../thirdparty/ced/src/)
target_include_directories(base PRIVATE
  #${CHROMIUM_DIR}/../..
  #${CHROMIUM_DIR}/../../thirdparty/ced/src
  ../../thirdparty/icu_wrapper/ # TODO
  third_party
  third_party/tcmalloc
  third_party/tcmalloc/chromium/src
  third_party/tcmalloc/chromium/src/gperftools
  #${BASE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(base PUBLIC
  ${BASE_DEFINES}
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
  ${EXTRA_DEFINES}
  # _HAS_ITERATOR_DEBUGGING=0 # https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/build/config/BUILD.gn#L164
)

if(TARGET_LINUX)
  list(APPEND BASE_EXTRA_DEFINITIONS
    HAVE_MMAP=1
  )
elseif(TARGET_WINDOWS)
  list(APPEND BASE_EXTRA_DEFINITIONS
    COM_INIT_CHECK_HOOK_DISABLED=1
  )
endif()

target_compile_definitions(base PRIVATE
  # TODO
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(base PUBLIC
  _USE_MATH_DEFINES=1 # https://stackoverflow.com/a/58379321
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
  ${BASE_EXTRA_DEFINITIONS}
  # TODO
  #${COBALT_COMMON_DEFINES}
)

if(NOT MSVC OR IS_CLANG_CL)
  target_compile_options(base PUBLIC
    -Wno-c++11-narrowing
    -Wno-c++98-compat
    -Wno-reserved-id-macro
    -Wno-macro-redefined
    -Wno-implicit-function-declaration
    -Wno-c++11-narrowing
    -Wno-builtin-macro-redefined
  )
else()
  # TODO
endif()
