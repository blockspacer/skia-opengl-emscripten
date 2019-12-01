# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "cobalt_starboard_headers_only")
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

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

set(STARBOARD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/cobalt/starboard")

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

add_library(${STATIC_LIB_NAME} INTERFACE
  #${STARBOARD_SOURCES}
)

# path to starboard/export.h
add_relative_include_dir(${STATIC_LIB_NAME} INTERFACE INTERFACE "cobalt")

# add_relative_include_dir(${STATIC_LIB_NAME} INTERFACE INTERFACE "cobalt/starboard")

# set_property(TARGET ${STATIC_LIB_NAME} PROPERTY CXX_STANDARD 17)

if(TARGET_EMSCRIPTEN)
  # use PROPERTY CXX_STANDARD 17
else()
  target_compile_features(${STATIC_LIB_NAME}
    INTERFACE cxx_auto_type
    INTERFACE cxx_variadic_templates)
endif()

#target_compile_options(${STATIC_LIB_NAME} PRIVATE
#  $<$<CXX_COMPILER_ID:GNU>:-Wall>)

# target_compile_definitions(${STATIC_LIB_NAME} PRIVATE
#   # starboard/linux/shared/BUILD.gn
#   STARBOARD_IMPLEMENTATION=1
#   COBALT_IMPLEMENTATION=1
# )

if(TARGET_EMSCRIPTEN)
  set(COBALT_OS_DEFINE COBALT_LINUX=1)
elseif(TARGET_LINUX)
  set(COBALT_OS_DEFINE COBALT_LINUX=1)
elseif(TARGET_WINDOWS)
  set(COBALT_OS_DEFINE COBALT_WINDOWS=1)
else()
  message(FATAL_ERROR "platform not supported")
endif()

target_compile_definitions(${STATIC_LIB_NAME} INTERFACE
  ENABLE_COBALT=1
  COBALT=1
  STARBOARD=1
  COBALT_FORCE_SOFTWARE_RASTERIZER=1
)

# see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/client_porting/poem/strings_poem.h
list(APPEND STARBOARD_EXTRA_PUBLIC_FLAGS POEM_NO_EMULATION=1)

if(TARGET_WINDOWS)
  list(APPEND EXTRA_STARBOARD_DEFINES
    STARBOARD_ATOMIC_INCLUDE="starboard/win/x64x11/atomic_public.h"
    STARBOARD_THREAD_TYPES_INCLUDE="starboard/win/x64x11/thread_types_public.h"
    STARBOARD_CONFIGURATION_INCLUDE="starboard/win/x64x11/configuration_public.h"
  )
elseif(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  list(APPEND EXTRA_STARBOARD_DEFINES
    STARBOARD_ATOMIC_INCLUDE="starboard/linux/x64x11/atomic_public.h"
    STARBOARD_THREAD_TYPES_INCLUDE="starboard/linux/x64x11/thread_types_public.h"
    STARBOARD_CONFIGURATION_INCLUDE="starboard/linux/x64x11/configuration_public.h"
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(NOT RELEASE_BUILD)
  list(APPEND COBALT_COMMON_DEFINES COBALT_BUILD_TYPE_DEBUG=1)
  list(APPEND COBALT_COMMON_DEFINES COBALT_BUILD_TYPE_DEVEL=1)
  # TODO # ENABLE_DEBUGGER
  # TODO # COBALT_BUILD_TYPE_QA
  # TODO # COBALT_ENABLE_JAVASCRIPT_ERROR_LOGGING
  # TODO # COBALT_SECURITY_SCREEN_CLEAR_TO_UGLY_COLOR
  # TODO # ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  # TODO # ENABLE_DEBUG_C_VAL
  # TODO # ENABLE_DEBUG_CONSOLE
  # TODO # ENABLE_IGNORE_CERTIFICATE_ERRORS
  # TODO # ENABLE_PARTIAL_LAYOUT_CONTROL
  # TODO # ENABLE_TEST_DATA
  # TODO # ENABLE_TEST_RUNNER
  # TODO # COBALT_BOX_DUMP_ENABLED
  # TODO # COBALT_FORCE_CSP
  # TODO # COBALT_FORCE_HTTPS
  # TODO # COBALT_BUILD_TYPE_GOLD
endif()

target_compile_definitions(${STATIC_LIB_NAME} INTERFACE
  ${EXTRA_STARBOARD_DEFINES}
  ${STARBOARD_EXTRA_PUBLIC_FLAGS}
  # ENABLE_SCRIPT_RUNNER
  COBALT_PORT=1
  OS_STARBOARD=1
  STARBOARD=1
  COBALT=1
  ${COBALT_OS_DEFINE}
  #SB_HAS_STD_UNORDERED_HASH=1 # see configuration_public.h
  #MESA_EGL_NO_X11_HEADERS=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${EXTRA_STARBOARD_DEFINES}
  #
  #BASE_HASH_DEFINE_LONG_LONG_HASHES=0
  #BASE_HASH_DEFINE_STRING_HASHES=0
  #BASE_HASH_USE_HASH=0
  #BASE_HASH_MAP_INCLUDE="<unordered_map>"
  # TODO #BASE_HASH_NAMESPACE=std  # TODO
  # TODO #BASE_HASH_NAMESPACE=bhash # TODO
  #BASE_HASH_SET_INCLUDE="<unordered_set>"
  #BASE_HASH_USE_HASH_STRUCT=1
  # https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/dom_parser/libxml_html_parser_wrapper.cc#L119
  #USE_SYSTEM_LIBXML=1
  #
  # see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/out/qtcreator_projects/linux-x64x11_devel_cobalt.config
  #
  COBALT_MEDIA_BUFFER_STORAGE_TYPE_MEMORY=1
  #LIBXML_STATIC=1
  #OPENSSL_NO_EC_NISTP_64_GCC_128=1
  #OPENSSL_NO_HEARTBEATS=1
  #UCONFIG_NO_REGULAR_EXPRESSIONS=1
  COBALT_MAX_CPU_USAGE_IN_BYTES=-1
  #OPENSSL_NO_DYNAMIC_ENGINE=1
  #OPENSSL_NO_OCSP=1
  #OPENSSL_NO_UI=1
  #OPENSSL_NO_SSL3=1
  #OPENSSL_NO_CAMELLIA=1
  #OPENSSL_NO_CAST=1
  COBALT_OFFSCREEN_TARGET_CACHE_SIZE_IN_BYTES=-1
  #OPENSSL_NO_POSIX_IO=1
  #HAVE_ICU_BUILTIN=1
  #OPENSSL_NO_GOST=1
  #OPENSSL_NO_MDC2=1
  #OPENSSL_NO_SRP=1
  #OPENSSL_NO_STORE=1
  #OPENSSL_NO_COMP=1
  STARBOARD_NO_LOCAL_ISSUER=1
  #THREADSAFE=1
  #ENABLE_PARTIAL_LAYOUT_CONTROL=1
  #OPENSSL_NO_MD4=1
  #NO_WINDOWS_BRAINDEATH=1
  COBALT_MEDIA_BUFFER_ALIGNMENT=1
  #OPENSSL_NO_JPAKE=1
  #OPENSSL_NO_DGRAM=1
  #OPENSSL_NO_BUF_FREELISTS=1
  #OPENSSL_NO_OCB=1
  #OPENSSL_NO_KRB5=1
  #COBALT_FORCE_DIRECT_GLES_RASTERIZER=1
  #OPENSSL_NO_ENGINE=1
  #OPENSSL_NO_RC4=1
  #OPENSSL_NO_RC5=1
  COBALT_MAX_GPU_USAGE_IN_BYTES=-1
  #OPENSSL_NO_RC2=1
  # TODO # ENABLE_WEBDRIVER=1
  #STARBOARD_OLD_ICU=1
  #USE_OPENSSL=1
  #OPENSSL_NO_BF=1
  QUIC_DISABLED_FOR_STARBOARD=1
  #OPENSSL_NO_CAPIENG=1
  #OPENSSL_NO_RIPEMD=1
  #ENABLE_BUILT_IN_DNS=1
  #OPENSSL_NO_CMS=1
  #OPENSSL_NO_RFC3779=1
  #OPENSSL_NO_GMP=1
  #FLAC__NO_DLL=1
  #OPENSSL_NO_SSL2=1
  #HB_NO_MT=1
  #ENABLE_IGNORE_CERTIFICATE_ERRORS=1 # TODO
  #LIBGLESV2_IMPLEMENTATION=1
  HTTP_CACHE_DISABLED_FOR_STARBOARD=1
  #OPENSSL_NO_STATIC_ENGINE=1
  #OPENSSL_NO_HW=1
  #OPENSSL_NO_IDEA=1
  #OPENSSL_NO_THREADS=1
  #OPENSSL_NO_EC2M=1
  #OPENSSL_NO_SOCK=1
  #OPENSSL_NO_SEED=1
  #OPENSSL_NO_SCTP=1
  #OPENSSL_NO_MD2=1
  COBALT_SCRATCH_SURFACE_CACHE_SIZE_IN_BYTES=0
)

# uses Config.cmake or a -config.cmake file
# see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
# find_package(chromium_dynamic_annotations REQUIRED)
# #
# if(TARGET chromium_dynamic_annotations::chromium_dynamic_annotations-static)
#   set(dynamic_annotations_LIB chromium_dynamic_annotations::chromium_dynamic_annotations-static)
# else()
#   message(FATAL_ERROR "not supported: using system provided dynamic_annotations library")
# endif()
#
# if(NOT DEFINED dynamic_annotations_LIB)
#   message(FATAL_ERROR "NOT DEFINED: dynamic_annotations_LIB")
# endif(NOT DEFINED dynamic_annotations_LIB)
#
# target_link_libraries(${STATIC_LIB_NAME} INTERFACE
#   ${dynamic_annotations_LIB}
# )

if(NOT DEFINED build_util_LIB)
  message(FATAL_ERROR "NOT DEFINED: build_util_LIB")
endif(NOT DEFINED build_util_LIB)

target_link_libraries(${STATIC_LIB_NAME} INTERFACE
  ${build_util_LIB}
)

# set(DEBUG_LIBRARY_SUFFIX "-d")
# set_target_properties(${STATIC_LIB_NAME}
#   PROPERTIES
#     ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
#     LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /lib
#     RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}" # TODO: /bin
#     OUTPUT_NAME "${STATIC_LIB_NAME}$<$<CONFIG:Debug>:${DEBUG_LIBRARY_SUFFIX}>"
# )

# install and export steps
include(cmake/Exports)
