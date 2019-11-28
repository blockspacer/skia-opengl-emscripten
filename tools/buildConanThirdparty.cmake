#
# portable build script based on "cmake -P"
#
# example:
# cmake -DEXTRA_OPTS="conan/stable;--profile;clang" -P tools/buildConanThirdparty.cmake
#
# example (WINDOWS):
# cmake -DUSE_LIBEVENT=FALSE -DUSE_TCMALLOC=FALSE -DUSE_XDG_MIME=FALSE -DUSE_XDG_USER_DIRS=FALSE -DEXTRA_OPTS="conan/stable;--profile;clang-cl" -P tools/buildConanThirdparty.cmake
#
# example (EMSCRIPTEN):
# cmake -DUSE_LIBEVENT=FALSE -DUSE_TCMALLOC=FALSE -DUSE_XDG_MIME=FALSE -DUSE_XDG_USER_DIRS=FALSE -DEXTRA_OPTS="conan/stable;--profile;emscripten" -P tools/buildConanThirdparty.cmake
#
cmake_minimum_required(VERSION 3.5)

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)

set(EXTRA_OPTS "" CACHE STRING "conan arguments")
if(EXTRA_OPTS STREQUAL "")
  message(FATAL_ERROR "provide EXTRA_OPTS, see comments in .cmake file")
endif()

macro(conan_create_target TARGET_PATH)
  message(STATUS "running `conan create` for ${TARGET_PATH}")
  #
  if(NOT EXISTS "${TARGET_PATH}/conanfile.py" AND NOT EXISTS "${TARGET_PATH}/conanfile.txt")
    message(FATAL_ERROR "path not found: ${TARGET_PATH}/conanfile.py AND ${TARGET_PATH}/conanfile.txt")
  endif()
  #
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "conan" "create" "." ${EXTRA_OPTS}
    WORKING_DIRECTORY ${TARGET_PATH}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
endmacro(conan_create_target)

# --- run `conan create` command ---

set(THIRDPARTY_DIR ${CURRENT_SCRIPT_DIR}/../thirdparty/)

set(USE_CMAKE_PLATFORM_DETECTION TRUE CACHE BOOL "USE_CMAKE_PLATFORM_DETECTION")
if(USE_CMAKE_PLATFORM_DETECTION)
  # provides helpful cmake macros
  conan_create_target(${THIRDPARTY_DIR}cmake_platform_detection)
endif(USE_CMAKE_PLATFORM_DETECTION)

set(USE_CHROMIUM_BUILD_UTIL TRUE CACHE BOOL "USE_CHROMIUM_BUILD_UTIL")
if(USE_CHROMIUM_BUILD_UTIL)
  # provides build/build_config.h
  conan_create_target(${THIRDPARTY_DIR}chromium_build_util)
endif(USE_CHROMIUM_BUILD_UTIL)

set(USE_ICU TRUE CACHE BOOL "USE_ICU")
if(USE_ICU)
  conan_create_target(${THIRDPARTY_DIR}chromium_icu)
endif(USE_ICU)

set(USE_LIBEVENT TRUE CACHE BOOL "USE_LIBEVENT")
if(USE_LIBEVENT)
  conan_create_target(${THIRDPARTY_DIR}chromium_libevent)
endif(USE_LIBEVENT)

set(USE_DYNAMIC_ANNOTATIONS TRUE CACHE BOOL "USE_DYNAMIC_ANNOTATIONS")
if(USE_DYNAMIC_ANNOTATIONS)
  conan_create_target(${THIRDPARTY_DIR}chromium_dynamic_annotations)
endif(USE_DYNAMIC_ANNOTATIONS)

set(USE_TCMALLOC TRUE CACHE BOOL "USE_TCMALLOC")
if(USE_TCMALLOC)
  conan_create_target(${THIRDPARTY_DIR}chromium_tcmalloc)
endif(USE_TCMALLOC)

set(USE_XDG_MIME TRUE CACHE BOOL "USE_XDG_MIME")
if(USE_XDG_MIME)
  conan_create_target(${THIRDPARTY_DIR}chromium_xdg_mime)
endif(USE_XDG_MIME)

set(USE_XDG_USER_DIRS TRUE CACHE BOOL "USE_XDG_USER_DIRS")
if(USE_XDG_USER_DIRS)
  conan_create_target(${THIRDPARTY_DIR}chromium_xdg_user_dirs)
endif(USE_XDG_USER_DIRS)

set(USE_CED TRUE CACHE BOOL "USE_CED")
if(USE_CED)
  conan_create_target(${THIRDPARTY_DIR}chromium_compact_enc_det)
endif(USE_CED)

set(USE_MODP_B64 TRUE CACHE BOOL "USE_MODP_B64")
if(USE_MODP_B64)
  conan_create_target(${THIRDPARTY_DIR}chromium_modp_b64)
endif(USE_MODP_B64)

# TODO
# set(ENABLE_CHROMIUM TRUE CACHE BOOL "ENABLE_CHROMIUM")

set(ENABLE_COBALT TRUE CACHE BOOL "ENABLE_COBALT")
if(ENABLE_COBALT)
  set(USE_COBALT_HEADERS TRUE CACHE BOOL "USE_COBALT_HEADERS")
  if(USE_COBALT_HEADERS)
    conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_headers_only)
    conan_create_target(${THIRDPARTY_DIR}cobalt_starboard)
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_icu_init)
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_eztime)
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_common)
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_platform)
  endif(USE_COBALT_HEADERS)
endif(ENABLE_COBALT)

set(USE_BASE TRUE CACHE BOOL "USE_BASE")
if(USE_BASE)
  # NOTE: depends on cobalt_starboard_headers_only
  conan_create_target(${THIRDPARTY_DIR}chromium_base)
endif(USE_BASE)

