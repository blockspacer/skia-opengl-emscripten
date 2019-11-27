# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/base/BUILD.gn

cmake_minimum_required(VERSION 3.4)

# project() must be before checks, see https://stackoverflow.com/a/26437667/10904212
set(PROJECT_NAME "chromium_icu")
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

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/)

set(ICU_PARENT_FULL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)

set(ICU_FULL_DIR ${ICU_PARENT_FULL_DIR}third_party/icu/)

include(cmake/PlatformChecks)

include(cmake/CommonOptions)

include(cmake/icuOptions)

include(cmake/ProjectFiles)

# $<INSTALL_INTERFACE:...> is exported using install(EXPORT)
# $<BUILD_INTERFACE:...> is exported using export(), or when the target is used by another target in the same buildsystem
macro(add_relative_include_dir TARGET VISIBILITY_BUILD VISIBILITY_INSTALL NEW_ELEM)
  target_include_directories(${TARGET}
    ${VISIBILITY_BUILD} "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${NEW_ELEM}>"
    ${VISIBILITY_INSTALL} "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}/${NEW_ELEM}>"
  )
endmacro(add_relative_include_dir)

#
#set(COMMON_FLAGS "${COMMON_FLAGS} -DSK_USING_THIRD_PARTY_ICU=1")
# https://github.com/google/skia/blob/master/third_party/icu/BUILD.gn#L15
#set(COMMON_FLAGS "${COMMON_FLAGS} -DU_USING_ICU_NAMESPACE=0")
#

if(NOT EXISTS "${ICU_FULL_DIR}source/common")
  message(FATAL_ERROR "Unable to find ${ICU_FULL_DIR}source/common")
endif(NOT EXISTS "${ICU_FULL_DIR}source/common")

#if(TARGET_EMSCRIPTEN)
#  set(USE_OWN_ICU TRUE)
#elseif(TARGET_LINUX)
#  set(USE_OWN_ICU TRUE)
#  if (NOT USE_OWN_ICU)
#    # todo
#    set(EXTRA_ICU_DEFINITIONS
#      USING_SYSTEM_ICU=1
#      #ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE
#      ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC
#      U_ICUDATAENTRY_IN_COMMON # if 'OS == "win" or icu_use_data_file_flag==1'
#      UCHAR_TYPE=uint16_t
#    )
#  endif(NOT USE_OWN_ICU)
#else()
#  message(FATAL_ERROR "icu platform not supported")
#endif()

#if(USE_OWN_ICU)
  add_library(${STATIC_LIB_NAME} STATIC
    ${ICU_SOURCES}
  )

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/")

  #add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/third_party")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source")

  # path to unicode/uvernum.h
  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/common")

  # path to uvernum.h
  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/common/unicode")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/i18n")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/allinone")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/config")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/data")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/extra")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/io")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/layoutex")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/stubdata")

  add_relative_include_dir(${STATIC_LIB_NAME} PUBLIC PUBLIC "third_party/icu/source/tools")

  set_property(TARGET ${STATIC_LIB_NAME} PROPERTY CXX_STANDARD 17)

  target_compile_features(${STATIC_LIB_NAME} PRIVATE
    PUBLIC cxx_auto_type
    PRIVATE cxx_variadic_templates)

  target_compile_options(${STATIC_LIB_NAME} PRIVATE
    $<$<CXX_COMPILER_ID:GNU>:-Wall>)

  # In your source, include files from base/ like normal.
  # So if you want to use the string printf API, do:
  # #include <base/stringprintf.h>
  #target_include_directories(${STATIC_LIB_NAME} PUBLIC
  #  #${CHROMIUM_DIR}
  #  ${OWN_ICU_INCLUDE_DIRS}
  #)

  #target_include_directories(${STATIC_LIB_NAME} PRIVATE
    #${BASE_DIR}
  #)

  if(TARGET_EMSCRIPTEN)
    list(APPEND ICU_PUBLIC_DEFINES
      U_ENABLE_DYLOAD=0
      U_CHECK_DYLOAD=0
    )
  endif(TARGET_EMSCRIPTEN)

if(DISABLE_COLLATION)
  list(APPEND ICU_PUBLIC_DEFINES
    UCONFIG_NO_COLLATION=1 # see icu::Collator::TERTIARY in base/i18n
  )
endif(DISABLE_COLLATION)

if(DISABLE_FORMATTING)
  list(APPEND ICU_PUBLIC_DEFINES
    UCONFIG_NO_FORMATTING=1 # see icu::NumberFormat in base/i18n
  )
endif(DISABLE_FORMATTING)

# # TODO https://github.com/mbbill/JSC.js
# # # http://userguide.icu-project.org/howtouseicu
# # see http://transit.iut2.upmf-grenoble.fr/doc/icu-doc/html/uconfig_8h.html
# # see https://github.com/sillsdev/icu-dotnet/wiki/Making-a-minimal-build-for-ICU58-or-later
# set(COMMON_CXX_FLAGS "-DLIB_ICU_I18N_STATIC=1")
# set(COMMON_CXX_FLAGS "-DU_CHARSET_IS_UTF8=1")
# #set(COMMON_CXX_FLAGS "-DU_NO_DEFAULT_INCLUDE_UTF_HEADERS=0")
# #set(COMMON_CXX_FLAGS "-DU_NO_DEFAULT_INCLUDE_UTF_HEADERS=0")
# set(COMMON_CXX_FLAGS "-DU_ENABLE_DYLOAD=0")
# #set(COMMON_CXX_FLAGS "-DICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC")
# set(COMMON_CXX_FLAGS "-DICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE")
# #
# #set(COMMON_CXX_FLAGS "-DU_DISABLE_VERSION_SUFFIX=1")
# #set(COMMON_FLAGS "${COMMON_FLAGS} -DU_USING_ICU_NAMESPACE=0")
# #
# #set(COMMON_CXX_FLAGS "-DUCONFIG_NO_SERVICE=1")
# set(COMMON_CXX_FLAGS "-DU_HAVE_STD_STRING=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_LEGACY_CONVERSION=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_ONLY_COLLATION=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_FILE_IO=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_CONVERSION=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_COLLATION=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_FORMATTING=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_IDNA=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_NORMALIZATION=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_REGULAR_EXPRESSIONS=1")
# set(COMMON_CXX_FLAGS "-DUCONFIG_NO_TRANSLITERATION=1")
# set(COMMON_CXX_FLAGS "-DU_NO_DEFAULT_INCLUDE_UTF_HEADERS=1")
# #
# #set(COMMON_CXX_FLAGS "-DUCONFIG_NO_BREAK_ITERATION=0")
# #set(COMMON_CXX_FLAGS "-DU_STATIC_IMPLEMENTATION=1")
# set(ICU_DEFINES "${ICU_DEFINES} -DUCHAR_TYPE=uint16_t")
# # set(ICU_DEFINES "${ICU_DEFINES} -DU_STATIC_IMPLEMENTATION=1")
# # set(ICU_DEFINES "${ICU_DEFINES} -DU_COMMON_IMPLEMENTATION=1")
# # set(ICU_DEFINES "${ICU_DEFINES} -DU_I18N_IMPLEMENTATION=1")
# # set(ICU_DEFINES "${ICU_DEFINES} -DU_ENABLE_DYLOAD=0")
# # set(ICU_DEFINES "${ICU_DEFINES} -DHAVE_DLFCN_H=0")
# # set(ICU_DEFINES "${ICU_DEFINES} -DHAVE_DLOPEN=0")
# # if(TARGET_EMSCRIPTEN)
# #   # Tell ICU that we are a 32 bit platform, otherwise,
# #   # double-conversion-utils.h doesn't know how to operate.
# #   set(ICU_DEFINES "${ICU_DEFINES} -D__i386__=1")
# # endif()
# # set(ICU_DEFINES "${ICU_DEFINES} -DU_NO_DEFAULT_INCLUDE_UTF_HEADERS=0")
# # # undefines U_ATTRIBUTE_DEPRECATED
# # set(ICU_DEFINES "${ICU_DEFINES} -UU_ATTRIBUTE_DEPRECATED")
# # # undefines U_NO_DEFAULT_INCLUDE_UTF_HEADERS
# # #set(ICU_DEFINES "${ICU_DEFINES} -UU_NO_DEFAULT_INCLUDE_UTF_HEADERS")
#

# TODO https://github.com/mbbill/JSC.js
# # http://userguide.icu-project.org/howtouseicu
# see http://transit.iut2.upmf-grenoble.fr/doc/icu-doc/html/uconfig_8h.html
# see https://github.com/sillsdev/icu-dotnet/wiki/Making-a-minimal-build-for-ICU58-or-later
  # http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
  list(APPEND ICU_PUBLIC_DEFINES
    U_ENABLE_DYLOAD=0
    ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE
    #ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC
    LIB_ICU_I18N_STATIC=1
    # see http://site.icu-project.org/repository/tips/linux
    U_CHARSET_IS_UTF8=1
    U_HAVE_STD_STRING=1 # obsolete (ICU-12736)
    # UCONFIG_ONLY_COLLATION=1 # NOTE: also disables break iteration!
    UCONFIG_NO_FILE_IO=1
    # see http://userguide.icu-project.org/packaging
    UCONFIG_NO_LEGACY_CONVERSION=1
    UCONFIG_ONLY_HTML_CONVERSION=1
    # UCONFIG_NO_CONVERSION=1 # see UConverter & LIBXML_ICU_ENABLED
    UCONFIG_NO_IDNA=1 # see UIDNA_INFO_INITIALIZER in url/url_idna_icu.cc
    # UCONFIG_NO_NORMALIZATION=1 # NOTE: also disables break iteration!
    UCONFIG_NO_REGULAR_EXPRESSIONS=1
    UCONFIG_NO_TRANSLITERATION=1
    UCONFIG_NO_SERVICE=1
    #
    # If U_NO_DEFAULT_INCLUDE_UTF_HEADERS is 0 then utf.h is
    # included by utypes.h and itself includes utf8.h
    # and utf16.h after some common definitions.
    # If U_NO_DEFAULT_INCLUDE_UTF_HEADERS is 1 then
    # each of these headers must be included explicitly
    # if their definitions are used.
    # SEE: http://icu-project.org/apiref/icu4c/utf_8h.html
    # U_NO_DEFAULT_INCLUDE_UTF_HEADERS=1 # see U16_NEXT in base/i18n
    #
    U_HIDE_OBSOLETE_UTF_OLD_H=1 # utf_old.h is deprecated or obsolete, ICU>60
  )

  set(ICU_PRIVATE_DEFINES
    HAVE_DLOPEN=0
    # see http://icu-project.org/apiref/icu4c561/uconfig_8h.html
    #
    # custom
    HAVE_DLFCN_H=0
  )

  if (WIN32)
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=wchar_t
    )
  elseif(TARGET_EMSCRIPTEN)
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=uint16_t
    )
  else()
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=uint16_t
    )
  endif()

  # see https://github.com/webrtc-uwp/chromium-build/blob/master/linux/unbundle/icu.gn#L37
  list(APPEND ICU_PUBLIC_DEFINES
    U_IMPORT=U_EXPORT
  )

  #    "USING_SYSTEM_ICU=1",a_
  #    "ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC",
  #    "UCHAR_TYPE=uint16_t",
  #
  #    # U_EXPORT (defined in unicode/platform.h) is used to set public visibility
  #    # on classes through the U_COMMON_API and U_I18N_API macros (among others).
  #    # When linking against the system ICU library, we want its symbols to have
  #    # public LTO visibility. This disables CFI checks for the ICU classes and
  #    # allows whole-program optimization to be applied to the rest of Chromium.
  #    #
  #    # Both U_COMMON_API and U_I18N_API macros would be defined to U_EXPORT only
  #    # when U_COMBINED_IMPLEMENTATION is defined (see unicode/utypes.h). Because
  #    # we override the default system UCHAR_TYPE (char16_t), it is not possible
  #    # to use U_COMBINED_IMPLEMENTATION at this moment, meaning the U_COMMON_API
  #    # and U_I18N_API macros are set to U_IMPORT which is an empty definition.
  #    #
  #    # Until building with UCHAR_TYPE=char16_t is supported, one way to apply
  #    # public visibility (and thus public LTO visibility) to all ICU classes is
  #    # to define U_IMPORT to have the same value as U_EXPORT. For more details,
  #    # please see: https://crbug.com/822820
  #    "U_IMPORT=U_EXPORT",

  target_compile_definitions(${STATIC_LIB_NAME} PUBLIC
    ${ICU_PUBLIC_DEFINES}
    #${WTF_EMCC_DEFINITIONS}
    #${WTF_COMMON_DEFINITIONS}
    LIB_ICU_I18N_STATIC=1
    #U_NO_DEFAULT_INCLUDE_UTF_HEADERS=0
    #U_NO_DEFAULT_INCLUDE_UTF_HEADERS
    #U_ATTRIBUTE_DEPRECATED
  )

  target_compile_definitions(${STATIC_LIB_NAME} PRIVATE
    ICU_IMPLEMENTATION=1
    U_STATIC_IMPLEMENTATION=1
    U_COMMON_IMPLEMENTATION=1
    U_I18N_IMPLEMENTATION=1
    U_ATTRIBUTE_DEPRECATED=
    ${ICU_PRIVATE_DEFINES}
    OFFICIAL_BUILD=1
    # https://cs.chromium.org/chromium/src/build/build_config.h?g=0&l=86
    COMPONENT_BUILD=1
    # https://github.com/cool-easy/libchromiumbase/blob/master/build/config/linux/BUILD.gn#L88
    # USE_GLIB=1
    __STDC_FORMAT_MACROS
    #
    #${WTF_EMCC_DEFINITIONS}
    #${WTF_COMMON_DEFINITIONS}
    #
    #SYSTEM_NATIVE_UTF8
    #COM_INIT_CHECK_HOOK_DISABLED
    #USE_SYMBOLIZE
    #BASE_I18N_IMPLEMENTATION
    #MALLOC_WRAPPER_LIB=\"${shlib_prefix}malloc_wrapper${shlib_extension}\"
    #MEMORY_TOOL_REPLACES_ALLOCATOR=1
  )

  target_compile_options(${STATIC_LIB_NAME} PRIVATE
    -Wno-error
    # TODO: remove rtti from icu
    # https://bugs.chromium.org/p/chromium/issues/detail?id=463085
    -frtti
  )
#endif(USE_OWN_ICU)

#if(TARGET_EMSCRIPTEN)
#  # Tell ICU that we are a 32 bit platform, otherwise,
#  # double-conversion-utils.h doesn't know how to operate.
#  set(ICU_DEFINES "${ICU_DEFINES} -D__i386__=1")
#endif()

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
