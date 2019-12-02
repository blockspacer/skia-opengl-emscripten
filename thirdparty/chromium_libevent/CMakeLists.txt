# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_libevent")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

set(STATIC_LIB_NAME ${PROJECT_NAME}-static)

# --------------------------- conan configuration ------------------------------

# Conan package manager List of packages used by the project is container in
# conanfile.py
option(CONAN_AUTO_INSTALL "Let CMake call conan install automatically" OFF)
if (CONAN_AUTO_INSTALL)
  set(CONAN_PROFILE
      "default"
      CACHE STRING "Conan profile to use during installation")
  include(cmake/conan-auto-install.cmake)
  conan_auto_install(${CONAN_PROFILE})
endif()

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
setup_default_build_type(RELEASE)
setup_cmake_build_options(RELEASE DEBUG)

set(LIBEVENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/libevent/)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

include(cmake/PlatformChecks)

include(cmake/CommonOptions)

include(cmake/ProjectFiles)

# $<INSTALL_INTERFACE:...> is exported using install(EXPORT)
# $<BUILD_INTERFACE:...> is exported using export(), or when the target is used by another target in the same buildsystem
macro(add_relative_include_dir TARGET VISIBILITY_BUILD VISIBILITY_INSTALL NEW_ELEM)
  target_include_directories(${TARGET}
    ${VISIBILITY_BUILD} "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${NEW_ELEM}>"
    ${VISIBILITY_INSTALL} "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/${NEW_ELEM}>"
  )
endmacro(add_relative_include_dir)

# libevent
# see https://github.com/cliqz-oss/ceba.js/blob/master/patches/tor/0002-emscripten-main-loop.patch#L7
# see https://github.com/cliqz-oss/ceba.js/blob/master/build.sh#L15
if(MSVC OR TARGET_WINDOWS)
  # skip
elseif(TARGET_EMSCRIPTEN OR TARGET_LINUX)
  # see https://github.com/libevent/libevent
  # defines https://github.com/libevent/libevent/blob/master/event-config.h.cmake
  # see HAVE_CONFIG_H https://github.com/chromium/chromium/blob/master/base/third_party/libevent/BUILD.gn#L37
  set(HAVE_CONFIG_H HAVE_CONFIG_H=1)
else()
  message(FATAL_ERROR "platform not supported")
endif()

list(APPEND LIBEVENT_DEFINES
  ${HAVE_CONFIG_H}
)

add_library(${STATIC_LIB_NAME} STATIC # TODO: rename to ${PROJECT_NAME}_static
  ${LIBEVENT_SOURCES}
)

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "")

#target_include_directories(${STATIC_LIB_NAME} PUBLIC
#  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/libevent>"
#  "$<BUILD_INTERFACE:${LIBEVENT_DIR}compat>"
#  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>" # path to base/third_party/libevent/.../event-config.h
#)

#target_include_directories(${STATIC_LIB_NAME} PUBLIC
#  $<INSTALL_INTERFACE:include>
#  $<INSTALL_INTERFACE:include/base>
#  $<INSTALL_INTERFACE:include/base/third_party>
#  $<INSTALL_INTERFACE:include/base/third_party/libevent>
#  $<INSTALL_INTERFACE:include/base/third_party/libevent/stub>
#  $<INSTALL_INTERFACE:include/base/third_party/libevent/compat>
#  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent>"
#  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/stub>"
#  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/compat>"
#  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/>" # path to base/third_party/libevent/linux/event-config.h
#)

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "base/third_party/libevent")

if(TARGET_EMSCRIPTEN)
  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "base/third_party/libevent/stub")

  #target_include_directories(${STATIC_LIB_NAME}
  #  PUBLIC "$<BUILD_INTERFACE:${LIBEVENT_DIR}stub>"
  #  PUBLIC "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/stub>"
  #)
elseif(TARGET_LINUX)
  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "base/third_party/libevent/stub")

  #target_include_directories(${STATIC_LIB_NAME}
  #  PUBLIC "$<BUILD_INTERFACE:${LIBEVENT_DIR}stub>"
  #  PUBLIC "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/stub>"
  #)
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "base/third_party/libevent/compat")

if(TARGET_EMSCRIPTEN)
  # use PROPERTY CXX_STANDARD 17
else()
  target_compile_features(${STATIC_LIB_NAME}
    PUBLIC cxx_auto_type
    PRIVATE cxx_variadic_templates)
endif()

target_compile_options(${STATIC_LIB_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:GNU>:-Wall>)

target_compile_definitions(${STATIC_LIB_NAME} PUBLIC
  ${LIBEVENT_DEFINES}
)

set_property(TARGET ${STATIC_LIB_NAME} PROPERTY CXX_STANDARD 17)

set(DEBUG_LIBRARY_SUFFIX "-d")
set_target_properties(${STATIC_LIB_NAME}
  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /bin
    OUTPUT_NAME "${STATIC_LIB_NAME}$<$<CONFIG:Debug>:${DEBUG_LIBRARY_SUFFIX}>"
)

# install and export steps
include(cmake/Exports)
