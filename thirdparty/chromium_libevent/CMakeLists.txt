# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_libevent")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

set(LIBEVENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/libevent/)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

include(cmake/PlatformChecks)

include(cmake/ProjectFiles)

# libevent
# see https://github.com/cliqz-oss/ceba.js/blob/master/patches/tor/0002-emscripten-main-loop.patch#L7
# see https://github.com/cliqz-oss/ceba.js/blob/master/build.sh#L15

# see https://github.com/libevent/libevent
# defines https://github.com/libevent/libevent/blob/master/event-config.h.cmake
# see HAVE_CONFIG_H https://github.com/chromium/chromium/blob/master/base/third_party/libevent/BUILD.gn#L37

list(APPEND LIBEVENT_INCLUDE_DIRS
  ${CMAKE_CURRENT_SOURCE_DIR}base/third_party/libevent
  ${LIBEVENT_DIR}emscripten
  ${LIBEVENT_DIR}compat
)

if(MSVC OR TARGET_WINDOWS)
  # skip
elseif(TARGET_EMSCRIPTEN OR TARGET_LINUX)
  set(HAVE_CONFIG_H HAVE_CONFIG_H=1)
else()
  message(FATAL_ERROR "platform not supported")
endif()

list(APPEND LIBEVENT_DEFINES
  ${HAVE_CONFIG_H}
)

if(TARGET_EMSCRIPTEN)
  list(APPEND LIBEVENT_INCLUDE_DIRS
    ${LIBEVENT_DIR}emscripten
  )
elseif(TARGET_LINUX)
  list(APPEND LIBEVENT_INCLUDE_DIRS
    ${LIBEVENT_DIR}linux
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_library(libevent STATIC
  ${LIBEVENT_SOURCES}
)

set_property(TARGET libevent PROPERTY CXX_STANDARD 17)

target_include_directories(libevent PUBLIC
  ${LIBEVENT_INCLUDE_DIRS}
  ${CMAKE_CURRENT_SOURCE_DIR} # path to base/third_party/libevent/linux/event-config.h
)

#target_include_directories(libevent PRIVATE
#  ${CHROMIUM_DIR}
#)

target_compile_definitions(libevent PUBLIC
  ${LIBEVENT_DEFINES}
  #${WTF_EMCC_DEFINITIONS}
  #${WTF_COMMON_DEFINITIONS}
)

