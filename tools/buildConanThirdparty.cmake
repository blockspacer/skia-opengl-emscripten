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

find_program(CONAN_PATH conan
             HINTS ${CONAN_DIR}
                   /usr/bin
                   /usr/local/bin
                   $PATH
                   CMAKE_SYSTEM_PROGRAM_PATH)

if(NOT CONAN_PATH)
  message(FATAL_ERROR "conan not found! Aborting...")
endif() # NOT CONAN_PATH

macro(cmake_remove_directory DIR_PATH)
    message(STATUS "running `git clone` for ${PATH_URI}")
    execute_process(
      COMMAND
        ${COLORED_OUTPUT_ENABLER}
          ${CMAKE_COMMAND} "-E" "time" "cmake" "-E" "remove_directory" "${DIR_PATH}"
      WORKING_DIRECTORY ${CURRENT_SCRIPT_DIR}
      TIMEOUT 7200 # sec
      RESULT_VARIABLE retcode
      ERROR_VARIABLE stderr
      ${OUTPUT_VARS} # may create `stdout` variable
    )
    if(NOT "${retcode}" STREQUAL "0")
      message( FATAL_ERROR "(cmake_remove_directory)
        Bad exit status ${retcode} ${stdout} ${stderr}")
    endif()
endmacro(cmake_remove_directory)

macro(cmake_make_dir DIR_PATH)
    message(STATUS "running `git clone` for ${PATH_URI}")
    execute_process(
      COMMAND
        ${COLORED_OUTPUT_ENABLER}
          ${CMAKE_COMMAND} "-E" "time" "cmake" "-E" "make_directory" "${DIR_PATH}"
      WORKING_DIRECTORY ${CURRENT_SCRIPT_DIR}
      TIMEOUT 7200 # sec
      RESULT_VARIABLE retcode
      ERROR_VARIABLE stderr
      ${OUTPUT_VARS} # may create `stdout` variable
    )
    if(NOT "${retcode}" STREQUAL "0")
      message( FATAL_ERROR "(cmake_make_dir)
        Bad exit status ${retcode} ${stdout} ${stderr}")
    endif()
endmacro(cmake_make_dir)

# NOTE: specify OPTIONS with ';' like "-b;v0.2.1"
macro(git_clone WORKING_DIRECTORY PATH_URI OPTIONS)
    message(STATUS "running `git clone` for ${PATH_URI}")
    execute_process(
      COMMAND
        ${COLORED_OUTPUT_ENABLER}
          ${CMAKE_COMMAND} "-E" "time" "git" "clone" ${PATH_URI} "${WORKING_DIRECTORY}" "--recursive" ${OPTIONS}
      WORKING_DIRECTORY ${CURRENT_SCRIPT_DIR}
      TIMEOUT 7200 # sec
      RESULT_VARIABLE retcode
      ERROR_VARIABLE stderr
      ${OUTPUT_VARS} # may create `stdout` variable
    )
    if(NOT "${retcode}" STREQUAL "0")
      message( FATAL_ERROR "(git_clone)
        Bad exit status ${retcode} ${stdout} ${stderr}")
    endif()
endmacro(git_clone)

macro(conan_remove_target TARGET_NAME)
  #
  message(STATUS "running `conan remove -f` for ${TARGET_NAME}")
  set(ENV{CONAN_REVISIONS_ENABLED} 1)
  set(ENV{CONAN_VERBOSE_TRACEBACK} 1)
  set(ENV{CONAN_PRINT_RUN_COMMANDS} 1)
  set(ENV{CONAN_LOGGING_LEVEL} 1)
  set(ENV{GIT_SSL_NO_VERIFY} 1)
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "${CONAN_PATH}" "remove" ${TARGET_NAME} "-f"
    WORKING_DIRECTORY ${CURRENT_SCRIPT_DIR}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS} # may create `stdout` variable
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( WARNING "(conan_remove_target)
      Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()
endmacro(conan_remove_target)

macro(conan_install_target TARGET_PATH)
  #
  if(NOT EXISTS "${TARGET_PATH}/conanfile.py" AND NOT EXISTS "${TARGET_PATH}/conanfile.txt")
    message(FATAL_ERROR "(conan_install_target)
      path not found: ${TARGET_PATH}/conanfile.py
      AND ${TARGET_PATH}/conanfile.txt")
  endif()
  #
  message(STATUS "running `conan install` for ${TARGET_PATH}")
  set(ENV{CONAN_REVISIONS_ENABLED} 1)
  set(ENV{CONAN_VERBOSE_TRACEBACK} 1)
  set(ENV{CONAN_PRINT_RUN_COMMANDS} 1)
  set(ENV{CONAN_LOGGING_LEVEL} 1)
  set(ENV{GIT_SSL_NO_VERIFY} 1)
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time"
          "${CONAN_PATH}" "install" "." ${EXTRA_CONAN_OPTS}
    WORKING_DIRECTORY ${TARGET_PATH}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS} # may create `stdout` variable
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "(conan_install_target)
      Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()
endmacro(conan_install_target)

macro(conan_create_target TARGET_PATH TARGET_CHANNEL)
  #
  if(NOT EXISTS "${TARGET_PATH}/conanfile.py" AND NOT EXISTS "${TARGET_PATH}/conanfile.txt")
    message(FATAL_ERROR "(conan_create_target)
      path not found: ${TARGET_PATH}/conanfile.py
      AND ${TARGET_PATH}/conanfile.txt")
  endif()
  #
  message(STATUS "running `conan create` for ${TARGET_PATH}")
  set(ENV{CONAN_REVISIONS_ENABLED} 1)
  set(ENV{CONAN_VERBOSE_TRACEBACK} 1)
  set(ENV{CONAN_PRINT_RUN_COMMANDS} 1)
  set(ENV{CONAN_LOGGING_LEVEL} 1)
  set(ENV{GIT_SSL_NO_VERIFY} 1)
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time"
          "${CONAN_PATH}" "create" "." "${TARGET_CHANNEL}" ${EXTRA_CONAN_OPTS}
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

macro(conan_build_target_if TARGET_NAME TARGET_CHANNEL TARGET_PATH OPTION_NAME)
  if(NOT ${OPTION_NAME})
    message(STATUS "(conan_build_target_if)
      DISABLED: ${OPTION_NAME}")
  endif()

  if(${OPTION_NAME})
    if(CLEAN_BUILD)
      conan_remove_target(${TARGET_NAME})
    endif(CLEAN_BUILD)
    conan_install_target(${TARGET_PATH})
    conan_create_target(${TARGET_PATH} ${TARGET_CHANNEL})
  endif(${OPTION_NAME})
endmacro(conan_build_target_if)

# --- run `conan create` command ---

if(EXISTS "${CURRENT_SCRIPT_DIR}/.tmp")
  cmake_remove_directory("${CURRENT_SCRIPT_DIR}/.tmp")
endif()

cmake_make_dir("${CURRENT_SCRIPT_DIR}/.tmp")

if(NOT EXISTS "${CURRENT_SCRIPT_DIR}/.tmp/conan_build_helper")
  git_clone("${CURRENT_SCRIPT_DIR}/.tmp/conan_build_helper"
      "http://github.com/blockspacer/conan_build_helper.git"
      "")
endif()
conan_build_target_if(
  "cmake_platform_detection" # target to clean
  "conan/stable"
  "${CURRENT_SCRIPT_DIR}/.tmp/conan_build_helper" # target to build
  ALWAYS_BUILD)

set(THIRDPARTY_DIR ${CURRENT_SCRIPT_DIR}/../thirdparty/)

# provides helpful cmake macros
conan_build_target_if(
  "cmake_platform_detection" # target to clean
  "${THIRDPARTY_DIR}cmake_platform_detection" # target to build
  USE_CMAKE_PLATFORM_DETECTION)

# provides helpful cmake macros
conan_build_target_if(
  "cmake_build_options" # target to clean
  "${THIRDPARTY_DIR}cmake_build_options" # target to build
  USE_CMAKE_BUILD_OPTIONS)

conan_build_target_if(
  "cobalt_glm" # target to clean
  "${THIRDPARTY_DIR}cobalt_glm" # target to build
  USE_GLM)

# provides build/build_config.h
conan_build_target_if(
  "chromium_build_util" # target to clean
  "${THIRDPARTY_DIR}chromium_build_util" # target to build
  USE_CHROMIUM_BUILD_UTIL)

conan_build_target_if(
  "chromium_icu" # target to clean
  "${THIRDPARTY_DIR}chromium_icu" # target to build
  USE_ICU)

conan_build_target_if(
  "chromium_libevent" # target to clean
  "${THIRDPARTY_DIR}chromium_libevent" # target to build
  USE_LIBEVENT)

conan_build_target_if(
  "chromium_dynamic_annotations" # target to clean
  "${THIRDPARTY_DIR}chromium_dynamic_annotations" # target to build
  USE_DYNAMIC_ANNOTATIONS)

conan_build_target_if(
  "chromium_tcmalloc" # target to clean
  "${THIRDPARTY_DIR}chromium_tcmalloc"
  USE_TCMALLOC)

conan_build_target_if(
  "chromium_xdg_mime" # target to clean
  "${THIRDPARTY_DIR}chromium_xdg_mime" # target to build
  USE_XDG_MIME)

conan_build_target_if(
  "chromium_xdg_user_dirs" # target to clean
  "${THIRDPARTY_DIR}chromium_xdg_user_dirs" # target to build
  USE_XDG_USER_DIRS)

conan_build_target_if(
  "chromium_compact_enc_det" # target to clean
  "${THIRDPARTY_DIR}chromium_compact_enc_det" # target to build
  USE_CED)

conan_build_target_if(
  "chromium_modp_b64" # target to clean
  "${THIRDPARTY_DIR}chromium_modp_b64" # target to build
  USE_MODP_B64)

conan_build_target_if(
  "chromium_zlib" # target to clean
  "${THIRDPARTY_DIR}chromium_zlib" # target to build
  USE_ZLIB)

if(ENABLE_COBALT)
  conan_build_target_if(
    "cobalt_starboard_headers_only" # target to clean
    "${THIRDPARTY_DIR}cobalt_starboard_headers_only" # target to build
    USE_COBALT_HEADERS)
endif(ENABLE_COBALT)

if(ENABLE_COBALT)
  conan_build_target_if(
    "cobalt_starboard" # target to clean
    "${THIRDPARTY_DIR}cobalt_starboard" # target to build
    USE_COBALT_STARBOARD)
endif(ENABLE_COBALT)

conan_build_target_if(
  "chromium_libxml" # target to clean
  "${THIRDPARTY_DIR}chromium_libxml" # target to build
  USE_LIBXML)

if(USE_BASE)
  # NOTE: depends on cobalt_starboard_headers_only
  # NOTE: shared between cobalt and chromium libs
  conan_build_target_if(
    "chromium_base" # target to clean
    "${THIRDPARTY_DIR}chromium_base" # target to build
    USE_CHROMIUM_BASE)
endif(USE_BASE)

# NOTE: shared between cobalt and chromium libs
conan_build_target_if(
  "chromium_url" # target to clean
  "${THIRDPARTY_DIR}chromium_url" # target to build
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

    conan_build_target_if(
      "cobalt_nanobase" # target to clean
      "${THIRDPARTY_DIR}cobalt_nanobase" # target to build
      USE_COBALT_NANOBASE)

    conan_build_target_if(
      "cobalt_base" # target to clean
      "${THIRDPARTY_DIR}cobalt_base" # target to build
      USE_COBALT_BASE)
endif(ENABLE_COBALT)

