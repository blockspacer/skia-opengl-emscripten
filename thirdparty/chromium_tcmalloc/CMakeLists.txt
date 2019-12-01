# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_tcmalloc")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

set(STATIC_LIB_NAME ${PROJECT_NAME}-static)

# --------------------------- conan configuration ------------------------------

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
setup_cmake_build_options(RELEASE DEBUG)

# uses Config.cmake or a -config.cmake file
# see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
find_package(chromium_build_util REQUIRED)
#
if(TARGET chromium_build_util::chromium_build_util-static)
  set(build_util_LIB chromium_build_util::chromium_build_util-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_build_util library")
endif()

# uses Config.cmake or a -config.cmake file
# see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
find_package(chromium_dynamic_annotations REQUIRED)
#
if(TARGET chromium_dynamic_annotations::chromium_dynamic_annotations-static)
  set(dynamic_annotations_LIB chromium_dynamic_annotations::chromium_dynamic_annotations-static)
else()
  message(FATAL_ERROR "not supported: using system provided dynamic_annotations library")
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

set(TCMALLOC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/third_party/tcmalloc/chromium/")

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

add_library(${STATIC_LIB_NAME} STATIC
  ${TCMALLOC_SOURCES}
)

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "")

#add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party")

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/tcmalloc")

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/tcmalloc/chromium/src")

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/tcmalloc/chromium/src/gperftools")

set_property(TARGET ${STATIC_LIB_NAME} PROPERTY CXX_STANDARD 17)

if(TARGET_EMSCRIPTEN)
  # use PROPERTY CXX_STANDARD 17
else()
  target_compile_features(${STATIC_LIB_NAME}
    PUBLIC cxx_auto_type
    PRIVATE cxx_variadic_templates)
endif()

target_compile_options(${STATIC_LIB_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:GNU>:-Wall>)

if(TARGET_LINUX)
  set(ENABLE_DYNAMIC_ANNOTATIONS TRUE) # required by tcmalloc
elseif(TARGET_EMSCRIPTEN OR TARGET_WINDOWS)
  # skip
  set(ENABLE_DYNAMIC_ANNOTATIONS FALSE)
else()
  message(FATAL_ERROR "unknown platform")
endif()

# Annotations useful when implementing condition variables such as CondVar,
# using conditional critical sections (Await/LockWhen) and when constructing
# user-defined synchronization mechanisms.
if(ENABLE_DYNAMIC_ANNOTATIONS)
  list(APPEND TCMALLOC_PUBLIC_DEFINES DYNAMIC_ANNOTATIONS_ENABLED=1)
endif(ENABLE_DYNAMIC_ANNOTATIONS)

# https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L204
list(APPEND TCMALLOC_PRIVATE_DEFINES NO_HEAP_CHECK=1)
# https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L247
list(APPEND TCMALLOC_PRIVATE_DEFINES ENABLE_PROFILING=0)
# https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L30
list(APPEND TCMALLOC_PRIVATE_DEFINES TCMALLOC_USE_DOUBLYLINKED_FREELIST=1)
list(APPEND TCMALLOC_PRIVATE_DEFINES TCMALLOC_DISABLE_HUGE_ALLOCATIONS=1)
# TCMALLOC_FOR_DEBUGALLOCATION # if (enable_debugallocation)
# TCMALLOC_DONT_REPLACE_SYSTEM_ALLOC # if (use_allocator_shim)
# TCMALLOC_SMALL_BUT_SLOW # if (use_tcmalloc_small_but_slow)

target_compile_definitions(${STATIC_LIB_NAME} PRIVATE
  ${TCMALLOC_PRIVATE_DEFINES}
)

target_compile_definitions(${STATIC_LIB_NAME} PUBLIC
  ${TCMALLOC_PUBLIC_DEFINES}
)

if(NOT DEFINED dynamic_annotations_LIB)
  message(FATAL_ERROR "NOT DEFINED: dynamic_annotations_LIB")
endif(NOT DEFINED dynamic_annotations_LIB)

target_link_libraries(${STATIC_LIB_NAME} PRIVATE
  ${dynamic_annotations_LIB}
)

if(NOT DEFINED build_util_LIB)
  message(FATAL_ERROR "NOT DEFINED: build_util_LIB")
endif(NOT DEFINED build_util_LIB)

target_link_libraries(${STATIC_LIB_NAME} PUBLIC
  ${build_util_LIB}
)

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
