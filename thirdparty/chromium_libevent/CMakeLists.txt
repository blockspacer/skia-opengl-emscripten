# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_libevent")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

if(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
  include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  conan_basic_setup(TARGETS)
endif(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")

#set(LIBEVENT_DIR base/third_party/libevent/)
set(LIBEVENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/libevent/)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

include(cmake/PlatformChecks)

include(cmake/ProjectFiles)

macro(add_relative_include_dir TARGET VISIBILITY NEW_ELEM)
  target_include_directories(${TARGET} ${VISIBILITY}
    #$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${NEW_ELEM}>
    $<INSTALL_INTERFACE:${NEW_ELEM}>
  )
endmacro(add_relative_include_dir)

# libevent
# see https://github.com/cliqz-oss/ceba.js/blob/master/patches/tor/0002-emscripten-main-loop.patch#L7
# see https://github.com/cliqz-oss/ceba.js/blob/master/build.sh#L15

# see https://github.com/libevent/libevent
# defines https://github.com/libevent/libevent/blob/master/event-config.h.cmake
# see HAVE_CONFIG_H https://github.com/chromium/chromium/blob/master/base/third_party/libevent/BUILD.gn#L37

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

add_library(${PROJECT_NAME}_pcf INTERFACE)

#target_include_directories(${PROJECT_NAME}_pcf PUBLIC
#  ${LIBEVENT_INCLUDE_DIRS}
#  #"."
#  ${CMAKE_CURRENT_SOURCE_DIR} # path to base/third_party/libevent/linux/event-config.h
#)

add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE ".")
add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent")

if(TARGET_EMSCRIPTEN)
  add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/emscripten")
elseif(TARGET_LINUX)
  add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/linux")
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/compat")

#target_include_directories(${PROJECT_NAME}_pcf PUBLIC
#  ${${PROJECT_NAME}_pcf_INCLUDE_DIRS}
#  #$<BUILD_INTERFACE:${BUILD_INTERFACE_INCLUDE_DIRS}>
#  #$<INSTALL_INTERFACE:"${INSTALL_INTERFACE_INCLUDE_DIRS};base/third_party/libevent">
#  #$<INSTALL_INTERFACE:base/third_party/libevent>
#)

#target_include_directories(${PROJECT_NAME}_pcf PRIVATE
#  ${CHROMIUM_DIR}
#)

target_compile_definitions(${PROJECT_NAME}_pcf INTERFACE
  ${LIBEVENT_DEFINES}
  #${WTF_EMCC_DEFINITIONS}
  #${WTF_COMMON_DEFINITIONS}
)

# PUBLIC_HEADER - will be installed to INCLUDES DESTINATION
if(DEFINED PUBLIC_HEADERS)
  set_target_properties(${PROJECT_NAME}_pcf PROPERTIES PUBLIC_HEADER ${PUBLIC_HEADERS})
endif(DEFINED PUBLIC_HEADERS)

#set_property(TARGET ${PROJECT_NAME}_pcf
#    APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS
#      ${LIBEVENT_DEFINES}
#      CUSTOM_TEST_DEF=1
#)

add_library(${PROJECT_NAME} STATIC # TODO: rename to ${PROJECT_NAME}_static
  ${LIBEVENT_SOURCES}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

list(APPEND LIBEVENT_INCLUDE_DIRS
  ${CMAKE_CURRENT_SOURCE_DIR}base/third_party/libevent
  ${LIBEVENT_DIR}emscripten
  ${LIBEVENT_DIR}compat
)

target_link_libraries(${PROJECT_NAME} PUBLIC
  # public library config as separate lib
  ${PROJECT_NAME}_pcf
)

target_include_directories(${PROJECT_NAME} PUBLIC
  ${LIBEVENT_INCLUDE_DIRS}
  ${CMAKE_CURRENT_SOURCE_DIR} # path to base/third_party/libevent/linux/event-config.h
)

if (NOT DEFINED CMAKE_INSTALL_BINDIR)
  set(CMAKE_INSTALL_BINDIR "${CMAKE_INSTALL_PREFIX}/bin")
endif()
if (NOT DEFINED CMAKE_INSTALL_INCLUDEDIR)
  set(CMAKE_INSTALL_INCLUDEDIR "${CMAKE_INSTALL_PREFIX}/include")
endif()
if (NOT DEFINED CMAKE_INSTALL_LIBDIR)
  set(CMAKE_INSTALL_LIBDIR "${CMAKE_INSTALL_PREFIX}/lib")
endif()

# NOTE: preserve directory structure
install(
    DIRECTORY ${CMAKE_SOURCE_DIR}/base/
    DESTINATION base
    FILES_MATCHING PATTERN "*")

#install(TARGETS ${PROJECT_NAME}_pcf
#  INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
#  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(TARGETS ${PROJECT_NAME}_pcf EXPORT ${PROJECT_NAME}_pcf-config)
install(EXPORT  ${PROJECT_NAME}_pcf-config DESTINATION cmake)
#install(EXPORT ${PROJECT_NAME}_pcf-config DESTINATION ".")
# see Package Configuration File (PCF) https://jfreeman.dev/blog/2019/05/22/trying-conan-with-modern-cmake:-dependencies/
export(TARGETS ${PROJECT_NAME}_pcf
  FILE ${PROJECT_NAME}_pcf-config.cmake)

install(TARGETS ${PROJECT_NAME}
  INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
