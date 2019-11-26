# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_libevent")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

set(STATIC_LIB_NAME ${PROJECT_NAME})

if(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
  include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  conan_basic_setup(TARGETS)
endif(EXISTS "${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")

#set(LIBEVENT_DIR base/third_party/libevent/)
set(LIBEVENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/libevent/)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

include(cmake/PlatformChecks)

include(cmake/ProjectFiles)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

if (NOT DEFINED CMAKE_INSTALL_BINDIR)
  set(CMAKE_INSTALL_BINDIR "bin")
endif()
if (NOT DEFINED CMAKE_INSTALL_INCLUDEDIR)
  set(CMAKE_INSTALL_INCLUDEDIR "include")
endif()
if (NOT DEFINED CMAKE_INSTALL_LIBDIR)
  set(CMAKE_INSTALL_LIBDIR "lib")
endif()

macro(add_relative_include_dir TARGET VISIBILITY_BUILD NEW_ELEM)
  target_include_directories(${TARGET}
    ${VISIBILITY_BUILD} "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${NEW_ELEM}>"
    INTERFACE "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/${NEW_ELEM}>"
    # ${CMAKE_INSTALL_INCLUDEDIR}
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

add_library(${STATIC_LIB_NAME} STATIC # TODO: rename to ${PROJECT_NAME}_static
  ${LIBEVENT_SOURCES}
)

#Add an alias so that library can be used inside the build tree, e.g. when testing
#add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${STATIC_LIB_NAME})

# PCFs are generally expected to be authored by dependencies and to be installed alongside their artifacts.
# see https://jfreeman.dev/blog/2019/05/22/trying-conan-with-modern-cmake:-dependencies/
add_library(${PROJECT_NAME}_pcf INTERFACE)

#target_include_directories(${PROJECT_NAME} PUBLIC
#  ${LIBEVENT_INCLUDE_DIRS}
#  #"."
#  ${CMAKE_CURRENT_SOURCE_DIR} # path to base/third_party/libevent/linux/event-config.h
#)

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC "")
add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "")

#set_target_properties(${PROJECT_NAME}_pcf PROPERTIES
#  INTERFACE_INCLUDE_DIRECTORIES
#    "$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}"
#)

target_include_directories(${STATIC_LIB_NAME} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/libevent>"
  "$<BUILD_INTERFACE:${LIBEVENT_DIR}compat>"
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>" # path to base/third_party/libevent/linux/event-config.h
)

target_include_directories(${STATIC_LIB_NAME} PUBLIC
  $<INSTALL_INTERFACE:include>
  $<INSTALL_INTERFACE:include/base>
  $<INSTALL_INTERFACE:include/base/third_party>
  $<INSTALL_INTERFACE:include/base/third_party/libevent>
  $<INSTALL_INTERFACE:include/base/third_party/libevent/emscripten>
  $<INSTALL_INTERFACE:include/base/third_party/libevent/compat>
  #"$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/emscripten>"
  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent>"
  #"$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/linux>"
  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/emscripten>"
  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/compat>"
  "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/>" # path to base/third_party/libevent/linux/event-config.h
)

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC "base/third_party/libevent")
add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent")
#set_target_properties(${PROJECT_NAME}_pcf PROPERTIES
#  INTERFACE_INCLUDE_DIRECTORIES
#    "$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent"
#)

if(TARGET_EMSCRIPTEN)
  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC "base/third_party/libevent/emscripten")
  add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/emscripten")
  #set_target_properties(${PROJECT_NAME}_pcf PROPERTIES
  #  INTERFACE_INCLUDE_DIRECTORIES
  #    "$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/emscripten"
  #)
  target_include_directories(${STATIC_LIB_NAME}
    PUBLIC "$<BUILD_INTERFACE:${LIBEVENT_DIR}emscripten>"
    PUBLIC "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/emscripten>"
  )
elseif(TARGET_LINUX)
  # add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC "base/third_party/libevent/linux")
  # add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/linux")
  # #set_target_properties(${PROJECT_NAME}_pcf PROPERTIES
  # #  INTERFACE_INCLUDE_DIRECTORIES
  # #    "$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/linux"
  # #)
  # target_include_directories(${STATIC_LIB_NAME}
  #   PUBLIC "$<BUILD_INTERFACE:${LIBEVENT_DIR}linux>"
  #   INTERFACE "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/linux>"
  # )
  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC "base/third_party/libevent/emscripten")
  add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/emscripten")
  #set_target_properties(${PROJECT_NAME}_pcf PROPERTIES
  #  INTERFACE_INCLUDE_DIRECTORIES
  #    "$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/emscripten"
  #)
  target_include_directories(${STATIC_LIB_NAME}
    PUBLIC "$<BUILD_INTERFACE:${LIBEVENT_DIR}emscripten>"
    PUBLIC "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent/emscripten>"
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC "base/third_party/libevent/compat")
add_relative_include_dir(${PROJECT_NAME}_pcf INTERFACE "base/third_party/libevent/compat")
#set_target_properties(${PROJECT_NAME}_pcf PROPERTIES
#  INTERFACE_INCLUDE_DIRECTORIES
#    "$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/base/third_party/libevent"
#)

#target_include_directories(${PROJECT_NAME} PUBLIC
#  ${${PROJECT_NAME}_pcf_INCLUDE_DIRS}
#  #$<BUILD_INTERFACE:${BUILD_INTERFACE_INCLUDE_DIRS}>
#  #$<INSTALL_INTERFACE:"${INSTALL_INTERFACE_INCLUDE_DIRS};base/third_party/libevent">
#  #$<INSTALL_INTERFACE:base/third_party/libevent>
#)

#target_include_directories(${PROJECT_NAME} PRIVATE
#  ${CHROMIUM_DIR}
#)

target_compile_features(${STATIC_LIB_NAME} PRIVATE
  PUBLIC cxx_auto_type
  PRIVATE cxx_variadic_templates)

target_compile_options(${STATIC_LIB_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:GNU>:-Wall>)

target_compile_definitions(${STATIC_LIB_NAME} PUBLIC
  ${LIBEVENT_DEFINES}
  #${WTF_EMCC_DEFINITIONS}
  #${WTF_COMMON_DEFINITIONS}
)

target_compile_definitions(${PROJECT_NAME}_pcf INTERFACE
  ${LIBEVENT_DEFINES}
  #${WTF_EMCC_DEFINITIONS}
  #${WTF_COMMON_DEFINITIONS}
)

# PUBLIC_HEADER - will be installed to INCLUDES DESTINATION
#if(DEFINED PUBLIC_HEADERS)
#  set_target_properties(${STATIC_LIB_NAME}
#    PROPERTIES
#      PUBLIC_HEADER ${PUBLIC_HEADERS})
#endif(DEFINED PUBLIC_HEADERS)

#set_property(TARGET ${PROJECT_NAME}
#    APPEND PROPERTY INTERFACE_COMPILE_DEFINITIONS
#      ${LIBEVENT_DEFINES}
#      CUSTOM_TEST_DEF=1
#)

set_property(TARGET ${STATIC_LIB_NAME} PROPERTY CXX_STANDARD 17)

set(DEBUG_LIBRARY_SUFFIX "-d")
set_target_properties(${STATIC_LIB_NAME}
  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /bin
    OUTPUT_NAME "${STATIC_LIB_NAME}$<$<CONFIG:Debug>:${DEBUG_LIBRARY_SUFFIX}>"
)

#target_link_libraries(${STATIC_LIB_NAME} INTERFACE
#  # public library config as separate lib
#  ${PROJECT_NAME}_pcf
#)

include(cmake/Exports)
