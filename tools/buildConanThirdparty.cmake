#
# portable build script based on "cmake -P"
#
# example:
# cmake -DEXTRA_CONAN_OPTS="conan/stable;--profile;clang" -P tools/buildConanThirdparty.cmake
#
# example (WINDOWS):
# cmake -DUSE_LIBEVENT=FALSE -DUSE_TCMALLOC=FALSE -DUSE_XDG_MIME=FALSE -DUSE_XDG_USER_DIRS=FALSE -DEXTRA_CONAN_OPTS="conan/stable;--profile;clang-cl" -P tools/buildConanThirdparty.cmake
#
# example (EMSCRIPTEN):
# cmake -DUSE_LIBEVENT=FALSE -DUSE_TCMALLOC=FALSE -DUSE_XDG_MIME=FALSE -DUSE_XDG_USER_DIRS=FALSE -DEXTRA_CONAN_OPTS="conan/stable;--profile;emscripten" -P tools/buildConanThirdparty.cmake
#
cmake_minimum_required(VERSION 3.5)

option(CLEAN_BUILD "CLEAN_BUILD" ON)
if(CLEAN_BUILD)
  message(WARNING "(buildConanThirdparty)
    clean rebuild of all conan deps may take a lot of time.
    Use `CLEAN_BUILD=OFF` with `--build=missing` in `EXTRA_CONAN_OPTS`")
endif(CLEAN_BUILD)

# TODO: make local, not global
# allows to run `execute_process` without printing to console
option(PRINT_TO_STDOUT "PRINT_TO_STDOUT" ON)
if(PRINT_TO_STDOUT)
  set(OUTPUT_VARS ) # undefined
else()
  set(OUTPUT_VARS OUTPUT_VARIABLE stdout)
endif(PRINT_TO_STDOUT)

# TODO: refactor CACHE BOOL (TRUE/FALSE) to option (ON/OFF)

# NOTE: ENABLE_* - used for grouping of multiple options
set(ENABLE_CHROMIUM TRUE CACHE BOOL "ENABLE_CHROMIUM")
set(ENABLE_COBALT TRUE CACHE BOOL "ENABLE_COBALT")

# NOTE: USE_* - used for single option
set(USE_BASE TRUE CACHE BOOL "USE_BASE")
set(USE_GURL TRUE CACHE BOOL "USE_GURL")
set(USE_LIBXML TRUE CACHE BOOL "USE_LIBXML")
set(USE_ZLIB TRUE CACHE BOOL "USE_ZLIB")
set(USE_MODP_B64 TRUE CACHE BOOL "USE_MODP_B64")
set(USE_CED TRUE CACHE BOOL "USE_CED")
set(USE_XDG_USER_DIRS TRUE CACHE BOOL "USE_XDG_USER_DIRS")
set(USE_XDG_MIME TRUE CACHE BOOL "USE_XDG_MIME")
set(USE_TCMALLOC TRUE CACHE BOOL "USE_TCMALLOC")
set(USE_DYNAMIC_ANNOTATIONS TRUE CACHE BOOL "USE_DYNAMIC_ANNOTATIONS")
set(USE_LIBEVENT TRUE CACHE BOOL "USE_LIBEVENT")
set(USE_ICU TRUE CACHE BOOL "USE_ICU")
set(USE_CHROMIUM_BUILD_UTIL TRUE CACHE BOOL "USE_CHROMIUM_BUILD_UTIL")
set(USE_GLM TRUE CACHE BOOL "USE_GLM")
set(USE_CMAKE_BUILD_OPTIONS TRUE CACHE BOOL "USE_CMAKE_BUILD_OPTIONS")
set(USE_CMAKE_PLATFORM_DETECTION TRUE CACHE BOOL "USE_CMAKE_PLATFORM_DETECTION")
set(USE_COBALT_HEADERS TRUE CACHE BOOL "USE_COBALT_HEADERS")
set(USE_COBALT_STARBOARD TRUE CACHE BOOL "USE_COBALT_STARBOARD")
set(USE_CHROMIUM_BASE TRUE CACHE BOOL "USE_CHROMIUM_BASE")
set(USE_COBALT_BASE TRUE CACHE BOOL "USE_COBALT_BASE")
set(USE_COBALT_NANOBASE TRUE CACHE BOOL "USE_COBALT_NANOBASE")

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)

set(EXTRA_CONAN_OPTS "" CACHE STRING "conan arguments")
if(EXTRA_CONAN_OPTS STREQUAL "")
  message(FATAL_ERROR "(buildConanThirdparty)
    provide EXTRA_CONAN_OPTS, see comments in .cmake file")
endif()

macro(conan_remove_target TARGET_NAME)
  #
  message(STATUS "running `conan remove -f` for ${TARGET_NAME}")
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "conan" "remove" ${TARGET_NAME} "-f"
    WORKING_DIRECTORY ${CURRENT_SCRIPT_DIR}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS} # may create `stdout` variable
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "(conan_remove_target)
      Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()
endmacro(conan_remove_target)

macro(conan_create_target TARGET_PATH)
  #
  if(NOT EXISTS "${TARGET_PATH}/conanfile.py" AND NOT EXISTS "${TARGET_PATH}/conanfile.txt")
    message(FATAL_ERROR "(conan_create_target)
      path not found: ${TARGET_PATH}/conanfile.py
      AND ${TARGET_PATH}/conanfile.txt")
  endif()
  #
  message(STATUS "running `conan create` for ${TARGET_PATH}")
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time"
          "conan" "create" "." ${EXTRA_CONAN_OPTS}
    WORKING_DIRECTORY ${TARGET_PATH}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS} # may create `stdout` variable
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "(conan_create_target)
      Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()
endmacro(conan_create_target)

macro(conan_build_target_if TARGET_NAME TARGET_PATH OPTION_NAME)
  if(NOT ${OPTION_NAME})
    message(STATUS "(conan_build_target_if)
      DISABLED: ${OPTION_NAME}")
  endif()

  if(${OPTION_NAME})
    if(CLEAN_BUILD)
      conan_remove_target(${TARGET_NAME})
    endif(CLEAN_BUILD)
    conan_create_target(${TARGET_PATH})
  endif(${OPTION_NAME})
endmacro(conan_build_target_if)

# --- run `conan create` command ---

set(THIRDPARTY_DIR ${CURRENT_SCRIPT_DIR}/../thirdparty/)

# provides helpful cmake macros
conan_build_target_if("cmake_platform_detection"
  "${THIRDPARTY_DIR}cmake_platform_detection"
  USE_CMAKE_PLATFORM_DETECTION)

# provides helpful cmake macros
conan_build_target_if("cmake_build_options"
  "${THIRDPARTY_DIR}cmake_build_options"
  USE_CMAKE_BUILD_OPTIONS)

conan_build_target_if("cobalt_glm"
  "${THIRDPARTY_DIR}cobalt_glm"
  USE_GLM)

# provides build/build_config.h
conan_build_target_if("chromium_build_util"
  "${THIRDPARTY_DIR}chromium_build_util"
  USE_CHROMIUM_BUILD_UTIL)

conan_build_target_if("chromium_icu"
  "${THIRDPARTY_DIR}chromium_icu"
  USE_ICU)

conan_build_target_if("chromium_libevent"
  "${THIRDPARTY_DIR}chromium_libevent"
  USE_LIBEVENT)

conan_build_target_if("chromium_dynamic_annotations"
  "${THIRDPARTY_DIR}chromium_dynamic_annotations"
  USE_DYNAMIC_ANNOTATIONS)

conan_build_target_if("chromium_tcmalloc"
  "${THIRDPARTY_DIR}chromium_tcmalloc"
  USE_TCMALLOC)

conan_build_target_if("chromium_xdg_mime"
  "${THIRDPARTY_DIR}chromium_xdg_mime"
  USE_XDG_MIME)

conan_build_target_if("chromium_xdg_user_dirs"
  "${THIRDPARTY_DIR}chromium_xdg_user_dirs"
  USE_XDG_USER_DIRS)

conan_build_target_if("chromium_compact_enc_det"
  "${THIRDPARTY_DIR}chromium_compact_enc_det"
  USE_CED)

conan_build_target_if("chromium_modp_b64"
  "${THIRDPARTY_DIR}chromium_modp_b64"
  USE_MODP_B64)

conan_build_target_if("chromium_zlib"
  "${THIRDPARTY_DIR}chromium_zlib"
  USE_ZLIB)

if(ENABLE_COBALT)
  conan_build_target_if("cobalt_starboard_headers_only"
    "${THIRDPARTY_DIR}cobalt_starboard_headers_only"
    USE_COBALT_HEADERS)
endif(ENABLE_COBALT)

if(ENABLE_COBALT)
  conan_build_target_if("cobalt_starboard"
    "${THIRDPARTY_DIR}cobalt_starboard"
    USE_COBALT_STARBOARD)
endif(ENABLE_COBALT)

conan_build_target_if("chromium_libxml"
  "${THIRDPARTY_DIR}chromium_libxml"
  USE_LIBXML)

if(USE_BASE)
  # NOTE: depends on cobalt_starboard_headers_only
  # NOTE: shared between cobalt and chromium libs
  conan_build_target_if("chromium_base"
    "${THIRDPARTY_DIR}chromium_base"
    USE_CHROMIUM_BASE)
endif(USE_BASE)

# NOTE: shared between cobalt and chromium libs
conan_build_target_if("chromium_url"
  "${THIRDPARTY_DIR}chromium_url"
  USE_GURL)

if(ENABLE_COBALT)
    #conan_remove_target("cobalt_starboard_icu_init")
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_icu_init)
    #conan_remove_target("cobalt_starboard_eztime")
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_eztime)
    #conan_remove_target("cobalt_starboard_common")
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_common)
    #conan_remove_target("cobalt_starboard_platform")
    #conan_create_target(${THIRDPARTY_DIR}cobalt_starboard_platform)

    conan_build_target_if("cobalt_nanobase"
      "${THIRDPARTY_DIR}cobalt_nanobase"
      USE_COBALT_NANOBASE)

    conan_build_target_if("cobalt_base"
      "${THIRDPARTY_DIR}cobalt_base"
      USE_COBALT_BASE)
endif(ENABLE_COBALT)

