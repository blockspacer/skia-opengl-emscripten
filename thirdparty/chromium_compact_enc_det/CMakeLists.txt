# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_compact_enc_det")
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

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

set(compact_enc_det_DIR "${CMAKE_CURRENT_SOURCE_DIR}/chromium/third_party/ced/src/")

if (NOT EXISTS "${compact_enc_det_DIR}compact_enc_det/compact_enc_det.h")
  message(FATAL_ERROR "Could not find ced source code.")
endif()

include(cmake/PlatformChecks)

include(cmake/CommonOptions)

option(CED_BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(cmake/ProjectFiles)

# $<INSTALL_INTERFACE:...> is exported using install(EXPORT)
# $<BUILD_INTERFACE:...> is exported using export(), or when the target is used by another target in the same buildsystem
macro(add_relative_include_dir TARGET VISIBILITY_BUILD VISIBILITY_INSTALL NEW_ELEM)
  target_include_directories(${TARGET}
    ${VISIBILITY_BUILD} "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${NEW_ELEM}>"
    ${VISIBILITY_INSTALL} "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/${NEW_ELEM}>"
  )
endmacro(add_relative_include_dir)

add_library(${STATIC_LIB_NAME} STATIC
  ${compact_enc_det_SOURCES}
)

# path to third_party/ced/src/compact_enc_det/compact_enc_det.h
add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "chromium")

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "chromium/third_party/ced/src")

target_include_directories(${STATIC_LIB_NAME} PRIVATE
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
)

set_property(TARGET ${STATIC_LIB_NAME} PROPERTY CXX_STANDARD 17)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-narrowing")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  if (NOT BUILD_SHARED_LIBS)
    foreach(flag_var
            CED_CMAKE_CXX_FLAGS CED_CMAKE_CXX_FLAGS_DEBUG CED_CMAKE_CXX_FLAGS_RELEASE
            CED_CMAKE_CXX_FLAGS_MINSIZEREL CED_CMAKE_CXX_FLAGS_RELWITHDEBINFO)
      if(${flag_var} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
      endif(${flag_var} MATCHES "/MD")
    endforeach(flag_var)
  endif()
else()
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing")
endif()

# https://stackoverflow.com/a/28294859/10904212
message(STATUS "CED_CMAKE_CXX_FLAGS=${CED_CMAKE_CXX_FLAGS}")
if(CED_CMAKE_CXX_FLAGS)
  string(REPLACE " " ";" CED_REPLACED_FLAGS ${CED_CMAKE_CXX_FLAGS})
  target_compile_options(${STATIC_LIB_NAME} PRIVATE
    ${CED_REPLACED_FLAGS}
  )
endif(CED_CMAKE_CXX_FLAGS)

if(WIN32)
  target_compile_definitions(${STATIC_LIB_NAME} PRIVATE
    UNICODE
    _UNICODE
    STRICT
    NOMINMAX)
  set(CED_THREADING threadwin)
elseif(TARGET_LINUX)
  set(CED_THREADING thread)
  list(APPEND EXTRA_TARGET_LINK_LIBRARIES -pthread)
elseif(TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(TARGET_EMSCRIPTEN)
  # use PROPERTY CXX_STANDARD 17
else()
  target_compile_features(${STATIC_LIB_NAME}
    PUBLIC cxx_auto_type
    PRIVATE cxx_variadic_templates)
endif()

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
