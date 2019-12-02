# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "cobalt_base")
set(PROJECT_VERSION 1.0.0.1)
project(${PROJECT_NAME}
  VERSION ${PROJECT_VERSION}
  LANGUAGES CXX C)

set(STATIC_LIB_NAME ${PROJECT_NAME}-static)

set(COBALT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/cobalt/)

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

find_package(cobalt_glm REQUIRED)
# TODO: add_definitions(-DGLM_ENABLE_EXPERIMENTAL)

find_package(cobalt_starboard_headers_only REQUIRED)
if(TARGET cobalt_starboard_headers_only::cobalt_starboard_headers_only-static)
  set(cobalt_starboard_headers_only_LIB cobalt_starboard_headers_only::cobalt_starboard_headers_only-static)
else()
  message(FATAL_ERROR "not supported: using system provided cobalt_starboard_headers_only library")
endif()

find_package(cobalt_starboard REQUIRED)
if(TARGET cobalt_starboard::cobalt_starboard-static)
  set(cobalt_starboard_LIB cobalt_starboard::cobalt_starboard-static)
else()
  message(FATAL_ERROR "not supported: using system provided cobalt_starboard_headers_only library")
endif()

set(USE_CUSTOM_ICU TRUE) # TODO
if(USE_CUSTOM_ICU)
  # chromium_icu
  if(TARGET_LINUX OR TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
    find_package(chromium_icu REQUIRED)
    if(NOT TARGET chromium_icu::chromium_icu-static)
      message(FATAL_ERROR "not supported: using system provided chromium_icu library")
    endif()
  #elseif(TARGET_WINDOWS)
    # skip
  else()
    message(FATAL_ERROR "chromium_icu not found")
  endif()
  #
  list(APPEND EXTRA_STARBOARD_DEFINES USE_CUSTOM_ICU=1)
  set(CUSTOM_ICU_LIB chromium_icu::chromium_icu-static) # see icu.cmake
else()
  set(CUSTOM_ICU_LIB icu) # platform specific
  message(FATAL_ERROR "TODO: supports not only USE_CUSTOM_ICU")
endif(USE_CUSTOM_ICU)

find_package(chromium_build_util REQUIRED)
if(TARGET chromium_build_util::chromium_build_util-static)
  set(build_util_LIB chromium_build_util::chromium_build_util-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_build_util library")
endif()

find_package(chromium_base REQUIRED)
if(TARGET chromium_base::chromium_base-static)
  set(base_LIB chromium_base::chromium_base-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_base library")
endif()

find_package(chromium_url REQUIRED)
if(TARGET chromium_url::chromium_url-static)
  set(url_LIB chromium_url::chromium_url-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_url library")
endif()

# xdg_user_dirs
if(TARGET_LINUX)
  find_package(chromium_xdg_user_dirs REQUIRED)
  if(TARGET chromium_xdg_user_dirs::chromium_xdg_user_dirs-static)
    set(xdg_user_dirs_LIB chromium_xdg_user_dirs::chromium_xdg_user_dirs-static)
  else()
    message(FATAL_ERROR "not supported: using system provided xdg_user_dirs library")
  endif()
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform no supported")
endif()

# xdg_mime
if(TARGET_LINUX)
  find_package(chromium_xdg_mime REQUIRED)
  if(TARGET chromium_xdg_mime::chromium_xdg_mime-static)
    set(xdg_mime_LIB chromium_xdg_mime::chromium_xdg_mime-static)
  else()
    message(FATAL_ERROR "not supported: using system provided xdg_mime library")
  endif()
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform no supported")
endif()

# modp_b64
find_package(chromium_modp_b64 REQUIRED)
if(TARGET chromium_modp_b64::chromium_modp_b64-static)
  set(modp_b64_LIB chromium_modp_b64::chromium_modp_b64-static)
else()
  message(FATAL_ERROR "not supported: using system provided modp_b64 library")
endif()

# chromium_libxml
find_package(chromium_libxml MODULE REQUIRED)
if(TARGET chromium_libxml::chromium_libxml-static)
  set(libxml_LIB chromium_libxml::chromium_libxml-static)
else()
  message(FATAL_ERROR "not supported: using system provided chromium_libxml library")
endif()

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

if(NOT DEFINED CUSTOM_ICU_LIB)
  message(FATAL_ERROR "CUSTOM_ICU_LIB must be defined")
endif(NOT DEFINED CUSTOM_ICU_LIB)

if(NOT DEFINED libxml_LIB)
  message(FATAL_ERROR "libxml_LIB must be defined")
endif(NOT DEFINED libxml_LIB)

add_library(${STATIC_LIB_NAME} STATIC
  ${PROJECT_SOURCES}
)

# path to cobalt/base/init_cobalt.h
add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "")

add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "cobalt")

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

target_compile_definitions(${STATIC_LIB_NAME} PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  COBALT_IMPLEMENTATION=1
  #
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
  COBALT_IMPLEMENTATION=1
)

if(NOT DEFINED build_util_LIB)
  message(FATAL_ERROR "NOT DEFINED: build_util_LIB")
endif(NOT DEFINED build_util_LIB)

if(NOT DEFINED base_LIB)
  message(FATAL_ERROR "NOT DEFINED: base_LIB")
endif(NOT DEFINED base_LIB)

target_link_libraries(${STATIC_LIB_NAME} PRIVATE #PUBLIC
  ${base_LIB}
)

if(NOT DEFINED url_LIB)
  message(FATAL_ERROR "NOT DEFINED: url_LIB")
endif(NOT DEFINED url_LIB)

target_link_libraries(${STATIC_LIB_NAME} PRIVATE
  ${url_LIB}
)

target_link_libraries(${STATIC_LIB_NAME} PUBLIC
  ${build_util_LIB}
  ${cobalt_starboard_headers_only_LIB}
  ${cobalt_starboard_LIB}
)

if(TARGET_LINUX)
  if(NOT DEFINED xdg_mime_LIB)
    message(FATAL_ERROR "xdg_mime_LIB must be defined")
  endif(NOT DEFINED xdg_mime_LIB)

  if(NOT DEFINED xdg_user_dirs_LIB)
    message(FATAL_ERROR "xdg_user_dirs_LIB must be defined")
  endif(NOT DEFINED xdg_user_dirs_LIB)

  list(APPEND EXTRA_COBALT_BASE_LIBS
    ${xdg_mime_LIB}
    ${xdg_user_dirs_LIB}
  )
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # TODO
else()
  message(FATAL_ERROR "platform not supported")
endif()

target_link_libraries(${STATIC_LIB_NAME} PRIVATE
  ## starboard_platform
  #starboard_core
  ## starboard_eztime
  ## starboard_common
  ${modp_b64_LIB}
  ${libxml_LIB}
  ${CUSTOM_ICU_LIB}
  #ced
  # NOTE: force glm from conan, otherwise we can break
  # some isolated builds (emscripten) with -system /usr/include
  CONAN_PKG::cobalt_glm
  ${EXTRA_COBALT_BASE_LIBS}
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
