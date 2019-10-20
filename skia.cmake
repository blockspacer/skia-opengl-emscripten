#
# Skia
# NOTE: use clang on ALL platforms
# If you depend on software rasterization, image decoding, or color space conversion
# and compile Skia with GCC, MSVC or another compiler,
# you will see dramatically worse performance
# NOTE: set clang-cl,
# see https://github.com/google/skia/blob/master/site/user/build.md#highly-recommended-build-with-clang-cl
# NOTE: to modify skia build flags/include dirs provide args to c_flags,
# cause SKIA_CMAKE_ONLY_HEADERS don`t affect skia gn build!
#

# case-insensitive match TODO: is debug, Debug, DEBUG all valid?
#if (CMAKE_BUILD_TYPE MATCHES "[dD][eE][bB][uU][gG]")
#  set(IS_DEBUG_BUILD ON)
#else()
#  set(IS_DEBUG_BUILD OFF)
#  set(EXT_SKIA_OFFICIAL_BUILD "true")
#endif ()

option(SKIA_FORCE_BUILD_MODE "" "") # TODO

# force OFFICIAL_BUILD
if(RELEASE_BUILD)
  message(STATUS "building SKIA in RELEASE mode")
  set(IS_DEBUG_BUILD OFF)
  set(EXT_SKIA_OFFICIAL_BUILD "true")
  if(MSVC) # TODO
    # /GR- disables run-time type information.
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"/GR-\", "
    )
    # If you're using our GYP files to build Skia,
    # you're using build scripts mostly designed for development
    # (even Release) where we don't pay much attention to
    # library structure or size.
    # They're all built with -g,
    # which bloats the file size considerably.
    # https://groups.google.com/forum/#!topic/skia-discuss/5hNRcmERVSI
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"/RELEASE\", "
    )
  else()
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"-fno-rtti\", "
    )
    # If you're using our GYP files to build Skia,
    # you're using build scripts mostly designed for development
    # (even Release) where we don't pay much attention to
    # library structure or size.
    # They're all built with -g,
    # which bloats the file size considerably.
    # https://groups.google.com/forum/#!topic/skia-discuss/5hNRcmERVSI
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"-g0\", "
    )
  endif()
  set(SKIA_EXTRA_CFLAGS
    "${SKIA_EXTRA_CFLAGS}\"-DNDEBUG=1\", "
  )
  set(SKIA_EXTRA_CFLAGS
    "${SKIA_EXTRA_CFLAGS}\"-DSK_RELEASE=1\", "
  )
else()
  message(STATUS "building SKIA in DEBUG mode")
  set(IS_DEBUG_BUILD ON)
  if(MSVC) # TODO
    # When /GR is on, the compiler defines the _CPPRTTI preprocessor macro. By default, /GR is on. 
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"/GR\", "
    )
  else()
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"-rtti\", "
    )
  endif()
  set(SKIA_EXTRA_CFLAGS
    "${SKIA_EXTRA_CFLAGS}\"-DSK_DEBUG=1\", "
  )
endif(RELEASE_BUILD)

# I wanted to expose (almost) all Skia options as CMake options but sadly
# GN is a really bad tool - It produces non-overridable configure errors like:
#
# ... even though the option exists (this one in skia/third_party/libjpeg-turbo/BUILD.gb)
# and it's listed in gn args --list.
# (It seems to be caused by the fact that some options are only actually used when other
# options are set appropriately. But it's not always obvious - one would have to dig into
# Skia configuration. And replicating the dependencies here + propagating it correctly into
# the ExternalProject setup is beyond reasonable.
option(EXT_SKIA_ALWAYS_BUILD "" OFF) # TODO
option(EXT_SKIA_DEBUG "" ${IS_DEBUG_BUILD})
if(TARGET_EMSCRIPTEN)
  # NOTE: Use is_component_build=false with EMSCRIPTEN
  option(EXT_SKIA_SHARED "build a shared lbrary (ON) or a static library (OFF)" OFF)
else(EMSCRIPTEN)
  option(EXT_SKIA_SHARED "build a shared lbrary (ON) or a static library (OFF)" OFF)
endif(TARGET_EMSCRIPTEN)

set(SKIA_SRC_DIR "${SKIA_DIR}")

if (NOT EXISTS ${SKIA_SRC_DIR})
  message(FATAL_ERROR "Can't find Skia sources. Please run download-dependencies.sh.")
endif ()

set(SKIA_BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}/skia")

# TODO: extra_cflags=[\"-Wno-unknown-warning-option\",\"-s\",\"USE_FREETYPE=1\",\"-s\",\"USE_LIBPNG=1\"]

# Skia comes with -Werror on by default. That's a cool feature for release...
set(NEW_CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

if(MSVC) # TODO
  set(NEW_CMAKE_C_FLAGS "${NEW_CMAKE_C_FLAGS} /W0")
else()
  set(NEW_CMAKE_C_FLAGS "${NEW_CMAKE_C_FLAGS} -Wno-error")
endif()

STRING(REGEX REPLACE " " "\",\"" NEW_CMAKE_C_FLAGS "${NEW_CMAKE_C_FLAGS}")
set(SKIA_C_FLAGS "\"${NEW_CMAKE_C_FLAGS}\"")
message(STATUS "SKIA_C_FLAGS=${SKIA_C_FLAGS}")

# TODO:
# https://github.com/zub2/SkiaExample/blob/master/ext/CMakeLists.txt#L40

#set(NEW_CMAKE_CXX_FLAGS "")
#foreach(line IN LISTS CMAKE_CXX_FLAGS)
#    string(APPEND NEW_CMAKE_CXX_FLAGS "${line}\";\"")
#endforeach()
#STRING(REGEX REPLACE ";" "\";\"" NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS}")
#set(SKIA_CXX_FLAGS "\"${NEW_CMAKE_CXX_FLAGS}\"")

set(NEW_CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

if(TARGET_EMSCRIPTEN)
  #set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -s MODULARIZE=1 -s EXPORT_NAME=\"PathKitInit\"")
  #set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -s STRICT=1")
endif() # EMSCRIPTEN

if(MSVC) # TODO
  set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} /W0")
else()
  set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -Wno-error")
endif()

# The string literal "\\\\" represents "\\" in memory which is a valid regex (representing a single backslash).
STRING(REGEX REPLACE " " "\",\"" NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS}")
set(SKIA_CXX_FLAGS "\"${NEW_CMAKE_CXX_FLAGS}\"")
message(STATUS "SKIA_CXX_FLAGS=${SKIA_CXX_FLAGS}")

# NOTE: header from SKIA_EXT
# set(SKIA_CXX_FLAGS "${SKIA_CXX_FLAGS},\"-DSK_USER_CONFIG_HEADER=\"${CMAKE_CURRENT_SOURCE_DIR}/src/chromium/skia/config/SkUserConfig.h\"\"") # skia_use_libpng

if(MSVC)
  set(SKIA_LDFLAGS "\"/W0\"")
else()
  set(SKIA_LDFLAGS "\"-Wno-error\"")
endif()

#set(SKIA_LDFLAGS "\"\"")

function(SET_SKIA_CONFIG_OPTION OPT_NAME OPT_VALUE)
  if (OPT_VALUE)
    set(${OPT_NAME} "true" PARENT_SCOPE)
  else ()
    set(${OPT_NAME} "false" PARENT_SCOPE)
  endif ()
endfunction()

SET_SKIA_CONFIG_OPTION(SK_CONF_DEBUG ${EXT_SKIA_DEBUG})
SET_SKIA_CONFIG_OPTION(SK_CONF_SHARED ${EXT_SKIA_SHARED})

# it's not possible to enable both OFFICIAL and DEBUG
if (EXT_SKIA_OFFICIAL_BUILD AND NOT EXT_SKIA_DEBUG)
  set(SK_CONF_IS_OFFICIAL_BUILD "true")
else ()
  set(SK_CONF_IS_OFFICIAL_BUILD "false")
endif()

message(STATUS "SK_CONF_DEBUG=${SK_CONF_DEBUG}")
message(STATUS "SK_CONF_IS_OFFICIAL_BUILD=${SK_CONF_IS_OFFICIAL_BUILD}")

if(USE_SK_GPU)
  set(SK_IS_GPU "true")
else(USE_SK_GPU)
  set(SK_IS_GPU "false")
  message(STATUS "SKIA build without GPU support.")
endif(USE_SK_GPU)

if (EMSCRIPTEN)
  set(SK_IS_x11 "true")

  set(SK_IS_EGL "true")

  # todo
  #set(SK_CONF_IS_OFFICIAL_BUILD "true")

  set(SK_CONF_SHARED "false")

  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false") # TODO
  set(SK_IS_ccpr "false")

  # https://github.com/Zubnix/skia-wasm-port/blob/master/build_skia_wasm_bitcode.sh#L16
  # TODO: PATCH https://github.com/Zubnix/skia-wasm-port/blob/master/wasm_compatible_build.patch
  set(SK_TARGET_CPU "target_cpu=\"wasm\"")
  # see DSK_ASSUME_WEBGL
  # see skia/modules/canvaskit/compile.sh
  set(SK_GL_STANDARD "skia_gl_standard=\"webgl\"") # SK_ASSUME_WEBGL
  #set(SK_GL_STANDARD "skia_gl_standard=\"gles\"") # SK_ASSUME_GL_ES
  #set(SK_GL_STANDARD "skia_gl_standard=\"gl\"") # SK_ASSUME_GL
elseif(TARGET_WINDOWS)
  set(SK_IS_x11 "false")
  set(SK_IS_EGL "false")

  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false")
  set(SK_IS_ccpr "true")

  set(SK_TARGET_CPU "")
  set(SK_GL_STANDARD "") # default
else()
  set(SK_IS_x11 "true")
  set(SK_IS_EGL "false")

  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false")
  set(SK_IS_ccpr "true")

  set(SK_TARGET_CPU "")
  set(SK_GL_STANDARD "") # default
endif ()

# TODO: target_cpu=\"wasm\" \
# skia_use_system_zlib=true \
# skia_use_system_icu=false \
# skia_use_system_harfbuzz=false \
# skia_use_system_expat=true \
# skia_use_mesa=false \
# is_skia_standalone=true
# skia_enable_effects=true \
# skia_enable_effects_imagefilters=true \

# see https://github.com/google/skia/blob/master/BUILD.gn
  # getting right the wonky cmake string handling (with the extra level of ExternalProject)
  # and the undocumented args handling of GN is a special treat
  # at least Cmake 3.0 has the line continuation feature wich is cool
  # but then the args can't be indented because GN is written by somone with overly strong opinions:
  # "You got a tab character in here. Tabs are evil. Convert to spaces."

#${WUFFS_LIB_NAME}
if(ENABLE_WUFFS)
  set(SK_IS_wuffs "true")
else(ENABLE_WUFFS)
  set(SK_IS_wuffs "false")
endif(ENABLE_WUFFS)

if(ENABLE_SKSHAPER)
  set(SK_IS_skshaper "true")
else(ENABLE_SKSHAPER)
  set(SK_IS_skshaper "false")
endif(ENABLE_SKSHAPER)

if(TARGET_EMSCRIPTEN)
  if(USE_SYSTEM_PNG)
    set(SK_USE_SYSTEM_LIBPNG TRUE) # TODO: path to png.h (SkPngCodec.cpp)
  endif()
  set(SK_USE_SYSTEM_ZLIB FALSE) # TODO
  set(SK_system_freetype2
    "skia_use_system_freetype2=true"
  )
elseif(TARGET_WINDOWS)
  # TODO
  set(SK_USE_SYSTEM_LIBPNG FALSE)
  set(SK_USE_SYSTEM_ZLIB FALSE) # TODO
  set(SK_system_freetype2
    "skia_use_system_freetype2=false"
  )
else()
  # TODO
  if(USE_SYSTEM_PNG)
    set(SK_USE_SYSTEM_LIBPNG TRUE)
  endif()
  set(SK_USE_SYSTEM_ZLIB FALSE) # TODO
  set(SK_system_freetype2
    "skia_use_system_freetype2=true"
  )
endif()

if(SK_USE_SYSTEM_LIBPNG)
  set(SK_system_libpng
    "skia_use_system_libpng=true"
  )
endif(SK_USE_SYSTEM_LIBPNG)

if(SK_USE_SYSTEM_ZLIB)
  set(SK_system_zlib
    "skia_use_system_zlib=true"
  )
endif(SK_USE_SYSTEM_ZLIB)

if(USE_LIBJPEG_TURBO)
  set(SK_IS_libjpeg_turbo "true")
  if(USE_CUSTOM_LIBJPEG_TURBO)
    #
    set(SK_system_libjpeg_turbo
      "skia_use_system_libjpeg_turbo=true"
    )
    #
    #if(NOT USE_CUSTOM_LIBJPEG)
    #  message(FATAL_ERROR "Custom LIBJPEG_TURBO requires custom LIBJPEG")
    #endif(NOT USE_CUSTOM_LIBJPEG)
  endif(USE_CUSTOM_LIBJPEG_TURBO)
else()
  set(SK_IS_libjpeg_turbo "false")
endif(USE_LIBJPEG_TURBO)

# NOTE: in skia HARFBUZZ requires icui18n (unicode/uscript.h)
if(FORCE_USE_SKIA_HARFBUZZ)
  if(ENABLE_SKSHAPER) # harfbuzz used only by skshaper
    set(SK_IS_harfbuzz "true")
    #
    if(TARGET_WINDOWS)
      set(SK_system_harfbuzz
        "skia_use_system_harfbuzz=false"
      )
    else()
      set(SK_system_harfbuzz
        "skia_use_system_harfbuzz=true"
      )
    endif(TARGET_WINDOWS)
    #
    set(SK_IS_icu "true")
    #
    if(TARGET_WINDOWS)
      set(SK_system_icu
        "skia_use_system_icu=false"
      )
    else()
      set(SK_system_icu
        "skia_use_system_icu=true"
      )
    endif(TARGET_WINDOWS)
  else(ENABLE_SKSHAPER)
    set(SK_IS_harfbuzz "false")
    set(SK_IS_icu "false")
  endif(ENABLE_SKSHAPER)
  #
  if (USE_CUSTOM_ICU)
    list(APPEND SKIA_CMAKE_ONLY_HEADERS
      ${OWN_ICU_INCLUDE_DIRS}
    )
    #
    # NOTE: WITH trailing comma
    set(SKIA_EXTRA_CFLAGS
      "${SKIA_EXTRA_CFLAGS}\"-I${ICU_FULL_DIR}source/common\", "
    )
  endif(USE_CUSTOM_ICU)
else(FORCE_USE_SKIA_HARFBUZZ)
  set(SK_IS_harfbuzz "false")
  set(SK_IS_icu "false")
endif(FORCE_USE_SKIA_HARFBUZZ)

#
#     "\"-I${ICU_FULL_DIR}source/common\"" # to unicode/uscript.h
#     # LIBJPEG (jpeglib.h) CONFLICTS WITH LIBJPEG_TURBO (jpeglib.h) # "\"-I${GLIBJPEG_DIR}\"" # to libjpeg/jpeglib.h
#     "\"-I${GLIBJPEG_TURBO_DIR}\"" # to libjpeg_turbo/jpeglib.h
#
# NOTE: WITHOUT trailing comma
if(USE_LIBJPEG_TURBO)
  set(SKIA_EXTRA_CFLAGS
    "${SKIA_EXTRA_CFLAGS}\"-I${GLIBJPEG_TURBO_DIR}\""
  )
endif(USE_LIBJPEG_TURBO)

if(ENABLE_SKOTTIE)
  set(SK_IS_skottie "true")
else(ENABLE_SKOTTIE)
  set(SK_IS_skottie "false")
endif(ENABLE_SKOTTIE)

# NOTE: modifying skia src requires full rebuild!
# NOTE: You can use `extra_cflags` and `extra_ldflags` to add include
# or library paths if needed.
set(GN_ARGS "${SK_TARGET_CPU} \
${SK_GL_STANDARD} \
ar=\"${CMAKE_AR}\" \
cc=\"${CMAKE_C_COMPILER}\" \
cxx=\"${CMAKE_CXX_COMPILER}\" \
extra_cflags=[${SKIA_EXTRA_CFLAGS}] \
extra_cflags_c=[${SKIA_C_FLAGS}] \
extra_cflags_cc=[${SKIA_CXX_FLAGS}] \
extra_ldflags=[${SKIA_LDFLAGS}] \
is_official_build=${SK_CONF_IS_OFFICIAL_BUILD} \
is_component_build=${SK_CONF_SHARED} \
is_debug=${SK_CONF_DEBUG} \
skia_enable_gpu=${SK_IS_GPU} \
skia_use_egl=${SK_IS_EGL} \
skia_use_vulkan=false \
skia_enable_vulkan_debug_layers=false \
skia_enable_spirv_validation=false \
skia_use_harfbuzz=${SK_IS_harfbuzz} \
${SK_system_harfbuzz} \
skia_use_icu=${SK_IS_icu} \
${SK_system_icu} \
skia_enable_ccpr=${SK_IS_ccpr} \
skia_enable_nvpr=false \
skia_use_expat=false \
skia_enable_skottie=${SK_IS_skottie} \
skia_use_libjpeg_turbo=${SK_IS_libjpeg_turbo} \
${SK_system_libjpeg_turbo} \
skia_use_libpng=true \
${SK_system_libpng} \
skia_use_zlib=true \
${SK_system_zlib} \
skia_use_wuffs=${SK_IS_wuffs} \
skia_use_libwebp=false \
skia_enable_pdf=false \
skia_use_sfntly=false \
skia_enable_atlas_text=false \
skia_use_fontconfig=false \
skia_use_freetype=true \
${SK_system_freetype2} \
skia_enable_tools=false \
skia_use_lua=false \
skia_use_piex=false \
skia_use_angle=false \
skia_use_dng_sdk=false \
skia_use_metal=false \
skia_enable_fontmgr_empty=false \
skia_enable_fontmgr_custom=true \
skia_use_libheif=false \
skia_enable_skpicture=true \
skia_enable_skshaper=${SK_IS_skshaper} \
skia_use_x11=${SK_IS_x11} \
skia_lex=false \
skia_compile_processors=${SK_IS_processors} \
skia_generate_workarounds=${SK_IS_workarounds}"
)

# \
#modules/skottie/utils/SkottieUtils.cpp

message(STATUS "GN_ARGS=${GN_ARGS}")

set(CONFIGURE_COMMAND "${SKIA_SRC_DIR}/bin/gn;gen;--root=${SKIA_SRC_DIR};${SKIA_BUILD_DIR};--args=${GN_ARGS}")
message(STATUS "CONFIGURE_COMMAND=${CONFIGURE_COMMAND}")

set(BUILD_COMMAND "ninja;-C;${SKIA_BUILD_DIR};-d;keepdepfile;-j8")
message(STATUS "BUILD_COMMAND=${BUILD_COMMAND}")

ExternalProject_Add(SKIA_build
  # LIST_SEPARATOR is needed for list expansion of C(XX)_FLAGS.
  LIST_SEPARATOR "^^"
  SOURCE_DIR ${SKIA_SRC_DIR}
  CONFIGURE_COMMAND "${CONFIGURE_COMMAND}"
  BUILD_COMMAND "${BUILD_COMMAND}"
  # there is no install step provided
  INSTALL_COMMAND true
)

# TODO: make PRINT_ALL_GN_ARGS as target dependant of SKIA_build
#if(EXISTS "${CMAKE_CURRENT_BINARY_DIR}/skia/args.gn")
#  set(PRINT_ALL_GN_ARGS TRUE)
#  message(WARING "skia debug info: ${CMAKE_CURRENT_BINARY_DIR}/skia/args.gn")
#else()
#  message(WARING "not found for skia debug info: ${CMAKE_CURRENT_BINARY_DIR}/skia/args.gn")
#  set(PRINT_ALL_GN_ARGS FALSE)
#endif()
#if(PRINT_ALL_GN_ARGS)
#  execute_process(
#    COMMAND "${SKIA_SRC_DIR}/bin/gn" "args" "--list" "${CMAKE_CURRENT_BINARY_DIR}/skia/"
#    WORKING_DIRECTORY ${SKIA_SRC_DIR}
#    #WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/skia
#    OUTPUT_VARIABLE _gn_args_list
#    #ERROR_QUIET
#    OUTPUT_STRIP_TRAILING_WHITESPACE
#    ERROR_VARIABLE _ERROR_VARIABLE
#    RESULT_VARIABLE retcode
#  )
#  if(NOT "${retcode}" STREQUAL "0")
#    message( FATAL_ERROR "Bad exit status ${_ERROR_VARIABLE} ${_gn_args_list} ${retcode}")
#  endif()
#  message( STATUS "gn_args_list=${_gn_args_list}")
#endif(PRINT_ALL_GN_ARGS)

if (EXT_SKIA_ALWAYS_BUILD)
  message(STATUS "Forced skia rebuild")
  # Make sure the target is always rebuilt.
  # Without this changing Skia sources doesn't trigger a ninja build. With this
  # ninja build is always triggered. This is not needed if you never touch the
  # Skia sources. Please note that enabling this ends up with re-building of
  # targets that depend on the library. :(
  ExternalProject_Add_Step(SKIA_build ForceBuild COMMAND true DEPENDERS build ALWAYS 1)
endif ()
#message(FATAL_ERROR ${SKIA_EXT_PARENT_DIR}/skia/config/sk_ref_cnt_ext_release.h)
# taken from BUILD.gn (skia_public_includes, minus things that are obviously useless for us)

if(ENABLE_SKOTTIE)
  list(APPEND SKIA_CMAKE_ONLY_HEADERS
    ${SKIA_SRC_DIR}/modules/skottie/include
  )
endif(ENABLE_SKOTTIE)

if(ENABLE_SKSG)
  list(APPEND SKIA_CMAKE_ONLY_HEADERS
    ${SKIA_SRC_DIR}/modules/sksg/include
  )
endif(ENABLE_SKSG)

if(ENABLE_SKSHAPER)
  list(APPEND SKIA_CMAKE_ONLY_HEADERS
  ${SKIA_SRC_DIR}/modules/skshaper/include
  )
endif(ENABLE_SKSHAPER)

list(APPEND SKIA_CMAKE_ONLY_HEADERS
  #src/chromium/third_party/
  ${SKIA_PARENT_DIR}
  ${SKIA_EXT_PARENT_DIR}
  ${SKIA_EXT_DIR}
  ${SKIA_SRC_DIR}
  ${SKIA_SRC_DIR}/tools
  ${SKIA_SRC_DIR}/modules/pathkit
#  ${SKIA_SRC_DIR}/tools/timer
  ${SKIA_SRC_DIR}/src/gpu
  ${SKIA_SRC_DIR}/src/sksl
  ${SKIA_SRC_DIR}/src/gpu/gl
  ${SKIA_SRC_DIR}/src/shaders
  ${SKIA_SRC_DIR}/src/core
  ${SKIA_SRC_DIR}/src/image
  ${SKIA_SRC_DIR}/src/utils
#  ${SKIA_SRC_DIR}/src/tools
  ${SKIA_SRC_DIR}/include/c
  ${SKIA_SRC_DIR}/include/codec
  ${SKIA_SRC_DIR}/include/config
  ${SKIA_SRC_DIR}/include/core
  ${SKIA_SRC_DIR}/include/effects
  ${SKIA_SRC_DIR}/include/gpu
  ${SKIA_SRC_DIR}/include/gpu/gl
  ${SKIA_SRC_DIR}/include/pathops
  ${SKIA_SRC_DIR}/include/ports
  ${SKIA_SRC_DIR}/include/svg
  ${SKIA_SRC_DIR}/include/utils
#  ${SKIA_SRC_DIR}/include/views
  ${SKIA_SRC_DIR}/include/private
#  ${SKIA_SRC_DIR}/third_party/angle2
#  ${SKIA_SRC_DIR}/third_party/cpu-features
#  ${SKIA_SRC_DIR}/third_party/dng_sdk
#  ${SKIA_SRC_DIR}/third_party/etc1
#  ${SKIA_SRC_DIR}/third_party/expat
#  ${SKIA_SRC_DIR}/third_party/externals
  ${SKIA_SRC_DIR}/third_party/freetype2
#  ${SKIA_SRC_DIR}/third_party/gif
  ${SKIA_SRC_DIR}/third_party/harfbuzz
#  ${SKIA_SRC_DIR}/third_party/icu # see USE_CUSTOM_ICU
#  ${SKIA_SRC_DIR}/third_party/imgui
#  ${SKIA_SRC_DIR}/third_party/libjpeg-turbo
#  ${SKIA_SRC_DIR}/third_party/libmicrohttpd
#
   ${SKIA_SRC_DIR}/third_party/libpng
#  ${SKIA_SRC_DIR}/third_party/libsdl
#  ${SKIA_SRC_DIR}/third_party/libwebp
#  ${SKIA_SRC_DIR}/third_party/lua
#  ${SKIA_SRC_DIR}/third_party/native_app_glue
  ${SKIA_SRC_DIR}/third_party/Nima-Cpp
#  ${SKIA_SRC_DIR}/third_party/opencl
#  ${SKIA_SRC_DIR}/third_party/piex
  ${SKIA_SRC_DIR}/third_party/skcms
#  ${SKIA_SRC_DIR}/third_party/sfntly
#  ${SKIA_SRC_DIR}/third_party/spirv-headers
#  ${SKIA_SRC_DIR}/third_party/spirv-tools
#  ${SKIA_SRC_DIR}/third_party/vulkanmemoryallocator
#
   ${SKIA_SRC_DIR}/third_party/zlib
)

if(ENABLE_WUFFS)
  list(APPEND SKIA_CMAKE_ONLY_HEADERS
    ${SKIA_SRC_DIR}/third_party/wuffs
  )
endif(ENABLE_WUFFS)

#include_directories(
#  src/chromium/third_party
#)

# this must match what BUILD.gn sets
# if it's wrong it can result in all kinds of funny behavior
# see https://github.com/google/skia/blob/master/modules/pathkit/compile.sh#L94
  # TODO:
  # SK_RELEASE"
  # PATHKIT_TESTING"
  #"SK_INTERNAL"
  #"SK_GAMMA_SRGB"
  #"SK_GAMMA_APPLY_TO_A8"
  #"SK_SCALAR_TO_FLOAT_EXCLUDED"
  #"SK_ALLOW_STATIC_GLOBAL_INITIALIZERS=1"
  #"SK_FORCE_DISTANCEFIELD_FONTS=0"
  #"SK_SCALAR_IS_FLOAT"
  #"SK_CAN_USE_FLOAT"
  #"SK_BUILD_FOR_WIN32"
  #"SK_BUILD_JSON_WRITER"
  #"SK_DEBUG"
  #"SK_DEVELOPER=1"
  #"SK_VULKAN=1" # skia_use_vulkan
  #"SK_ENABLE_VK_LAYERS=1" # skia_enable_vulkan_debug_layers
  #"SK_ENABLE_SPIRV_VALIDATION=1" # skia_enable_spirv_validation
  #"SK_SUPPORT_ATLAS_TEXT=0"
  #"SK_SUPPORT_PDF=1" # skia_enable_pdf
  #"SK_PDF_USE_SFNTLY=1" # skia_use_sfntly
  #"SK_HAS_WEBP_LIBRARY=1" # skia_use_libwebp, skia_use_system_libwebp
  #"SK_XML=1" # skia_use_expat
  #"SK_HAS_HEIF_LIBRARY=1" # skia_use_libheif
  #"SK_METAL"
  #"SK_VULKAN"
  #"SK_MOLTENVK"
  #"SK_CODEC_DECODES_RAW"
  # SKIA_IMPLEMENTATION # https://github.com/google/skia/blob/master/include/core/SkPreConfig.h#L187
  # LIBGLESV2_IMPLEMENTATION # https://github.com/google/skia/blob/master/third_party/angle2/BUILD.gn
  # ANGLE_ENABLE_GLSL
  # ANGLE_ENABLE_OPENGL
  #SK_BUILD_FOR_UNIX
  #SK_BUILD_FOR_PATHKIT=1
  #SK_BUILD_FOR_PATHKIT
  #SK_DISABLE_READBUFFER=1
  #SK_DISABLE_READBUFFER
  # see https://skia-review.googlesource.com/c/skia/+/158341
  #GL_GLEXT_PROTOTYPES
  #EGL_EGLEXT_PROTOTYPES
  #LIBEGL_IMPLEMENTATION

if(MSVC) # TODO
  list(APPEND SKIA_DEFINES
    HB_NO_MT=1
  )
endif()

if(USE_SK_GPU)
  list(APPEND SKIA_DEFINES
    SK_SUPPORT_GPU=1 # skia_enable_gpu
    #SK_SUPPORT_GPU
  )
else()
  list(APPEND SKIA_DEFINES
    SK_SUPPORT_GPU=0 # skia_enable_gpu
  )
endif(USE_SK_GPU)

#if(NOT TARGET_WINDOWS) # TODO
#  list(APPEND SKIA_DEFINES
#    # see https://skia.org/user/api/skcanvas_creation
#    SK_HAS_PNG_LIBRARY=1 # skia_use_libpng
#  )
#endif(NOT TARGET_WINDOWS)

list(APPEND SKIA_DEFINES
  # see https://skia.org/user/api/skcanvas_creation
  SK_HAS_PNG_LIBRARY=1 # skia_use_libpng
  SKIA_IMPLEMENTATION
  SK_SUPPORT_OPENCL=0
  SK_SAMPLES_FOR_X=1 # always set for linux, even if there's no X used
  #SK_SAMPLES_FOR_X
  #SK_HAS_PNG_LIBRARY
  # SK_HAS_GIF_LIBRARY
  # SK_HAS_WEBP_LIBRARY
)

if(ENABLE_SKOTTIE)
  list(APPEND SKIA_DEFINES
    SK_INCLUDE_MANAGED_SKOTTIE=1
    SK_INCLUDE_MANAGED_SKOTTIE
  )
endif(ENABLE_SKOTTIE)

if(SUPPORTS_JPEG)
  list(APPEND SKIA_DEFINES
    SK_HAS_JPEG_LIBRARY=1 # skia_use_libjpeg_turbo
    SK_HAS_JPEG_LIBRARY
  )
elseif(USE_LIBJPEG_TURBO)
  list(APPEND SKIA_DEFINES
    SK_HAS_JPEG_LIBRARY=1 # skia_use_libjpeg_turbo
    SK_HAS_JPEG_LIBRARY
  )
endif()

#<listOptionValue builtIn="false" value="SK_DEFAULT_FONT_CACHE_LIMIT=20971520"/>
#<listOptionValue builtIn="false" value="SK_GAMMA_CONTRAST=0.2"/>
#<listOptionValue builtIn="false" value="SK_GAMMA_EXPONENT=1.2"/>
#<listOptionValue builtIn="false" value="SK_IGNORE_DW_GRAY_FIX"/>
#<listOptionValue builtIn="false" value="SK_IGNORE_LINEONLY_AA_CONVEX_PATH_OPTS"/>
#<listOptionValue builtIn="false" value="SK_SUPPORT_GPU=1"/>

# see https://github.com/xzwang2005/Prelude/blob/master/third_party/skia/src/pathops/SkPathOpsTypes.cpp#L106
#list(APPEND SKIA_DEFINES SKOTTIE_HACK)
#list(APPEND SKIA_DEFINES SKOTTIE_HACK=1)

if (EMSCRIPTEN)
  list(APPEND SKIA_DEFINES OS_EMSCRIPTEN=1) # same as in base/WTF/blink
  #if(ENABLE_WASM)
  if(ENABLE_SIMD)
    list(APPEND SKIA_DEFINES SK_CPU_SSE_LEVEL=0)
    # TODO
    #list(APPEND SKIA_DEFINES SK_CPU_SSE_LEVEL=SK_CPU_SSE_LEVEL_SSE1)
  else()
    list(APPEND SKIA_DEFINES SK_CPU_SSE_LEVEL=0)
    list(APPEND SKIA_DEFINES SKNX_NO_SIMD) # see "-s SIMD=1" and -msimd128
    list(APPEND SKIA_DEFINES SKNX_NO_SIMD=1) # see "-s SIMD=1" and -msimd128
  endif(ENABLE_SIMD)
  if(USE_SK_GPU)
    list(APPEND SKIA_DEFINES SK_ASSUME_WEBGL)
    list(APPEND SKIA_DEFINES SK_ASSUME_WEBGL=1)
    list(APPEND SKIA_DEFINES IS_WEBGL)
    list(APPEND SKIA_DEFINES IS_WEBGL=1)
    #list(APPEND SKIA_DEFINES SK_ASSUME_GL_ES)
    #list(APPEND SKIA_DEFINES SK_ASSUME_GL_ES=1)
    #list(APPEND SKIA_DEFINES SK_ASSUME_GL)
    #list(APPEND SKIA_DEFINES SK_ASSUME_GL=1)
    #list(APPEND SKIA_DEFINES LIBANGLE_IMPLEMENTATION=1)
    #list(APPEND SKIA_DEFINES LIBGLESV2_IMPLEMENTATION=1)
    list(APPEND SKIA_DEFINES LIBEGL_IMPLEMENTATION=1)
    #list(APPEND SKIA_DEFINES ANGLE_ENABLE_ESSL=1)
    #list(APPEND SKIA_DEFINES ANGLE_ENABLE_GLSL=1)
    #list(APPEND SKIA_DEFINES ANGLE_ENABLE_HLSL=1)
    #list(APPEND SKIA_DEFINES ANGLE_ENABLE_OPENGL=1)
    list(APPEND SKIA_DEFINES EGL_EGLEXT_PROTOTYPES=1)
    #list(APPEND SKIA_DEFINES GL_GLEXT_PROTOTYPES=1)
  endif(USE_SK_GPU)

  # see https://github.com/endlessm/chromium-browser/blob/master/third_party/skia/third_party/skcms/skcms.cc#L1813
  # see https://github.com/google/skia/blob/master/third_party/skcms/skcms.cc#L1836
  # list(APPEND SKIA_DEFINES SKCMS_PORTABLE)
  list(APPEND SKIA_DEFINES WEB_ASSEMBLY=1)
  #list(APPEND SKIA_DEFINES SK_BUILD_FOR_PATHKIT=1)

  # we don't deserialize anything.
  list(APPEND SKIA_DEFINES SK_DISABLE_READBUFFER=1)
  #list(APPEND SKIA_DEFINES SK_DISABLE_EFFECT_DESERIALIZATION=1)
else(EMSCRIPTEN)
  # Remove software rasterizers to save some code size.
  #list(APPEND SKIA_DEFINES SK_DISABLE_AAA=1)

  # see https://github.com/flutter/flutter/issues/11402

  if(USE_SK_GPU)
   list(APPEND SKIA_DEFINES SK_ENABLE_DUMP_GPU=1)
  endif(USE_SK_GPU)
endif (EMSCRIPTEN)

if (SK_CONF_SHARED)
  list(APPEND SKIA_DEFINES SKIA_DLL=1)
endif ()

## TODO
#list(APPEND SKIA_DEFINES LIB_ICU_I18N_STATIC=1)
#list(APPEND SKIA_DEFINES U_CHARSET_IS_UTF8=1)
#list(APPEND SKIA_DEFINES U_NO_DEFAULT_INCLUDE_UTF_HEADERS=0)
#
## TODO
#list(APPEND SKIA_DEFINES NEED_SHORT_EXTERNAL_NAMES=1)

# GN doesn't seem to do any fancy stuff with library dependencies - it just
# asks the compiler to link to them w/o any fany search strategies. This
# also means that whatever is found here is not guaranteed to be the same as
# what GN finds. :-(
# Anyway, using plain find_library() seems to be the next closest thing,
# so even if some libraries provide pkg_config or special packages for CMake,
# only find_library() is used here.
# This is needed only for static library build where the dependencies have
# to be added explicitly.

if (NOT EXT_SKIA_SHARED)
  function(ADD_SKIA_LIBRARY_DEPENDENCY LIB_NAME_LIST)
    foreach(LIB_NAME ${LIB_NAME_LIST})
      message(STATUS "Searching for ${LIB_NAME}...")
      find_library(LIB${LIB_NAME} ${LIB_NAME})
      if (NOT LIB${LIB_NAME})
        message(FATAL_ERROR "Can't find required library ${LIB_NAME}.")
      else()
        message(STATUS "Found library ${LIB_NAME} = ${LIB${LIB_NAME}}")
      endif ()
      set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${LIB${LIB_NAME}}" PARENT_SCOPE)
    endforeach()
  endfunction()

  if(TARGET_EMSCRIPTEN)
    message(STATUS "building skia for EMSCRIPTEN")
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    message(STATUS "building skia for ${CMAKE_SYSTEM_NAME}")

    # seem to be always required...
    #ADD_SKIA_LIBRARY_DEPENDENCY("dl")
    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${libDL_LIB}" PARENT_SCOPE)

    #ADD_SKIA_LIBRARY_DEPENDENCY("icuuc") # skia_use_system_icu

    #ADD_SKIA_LIBRARY_DEPENDENCY("expat") #skia_use_system_expat
    find_package(EXPAT REQUIRED)
    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};EXPAT::EXPAT" PARENT_SCOPE)

    #set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${HARFBUZZ_LIBRARIES}" PARENT_SCOPE)

    #set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${FOUND_OPENGL_LIBRARIES}" PARENT_SCOPE)
    #message(FATAL_ERROR FREETYPE_LIBRARIES=${FREETYPE_LIBRARIES})

    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${FREETYPE_LIBRARIES}" PARENT_SCOPE)

    ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_FONTCONFIG} "fontconfig") # skia_use_fontconfig
    ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_FREETYPE2} "freetype") # skia_use_system_freetype2

    # see HARFBUZZ_LIBRARIES
    #if(FORCE_USE_SKIA_HARFBUZZ)
    #  ADD_SKIA_LIBRARY_DEPENDENCY("harfbuzz")
    #endif(FORCE_USE_SKIA_HARFBUZZ)

    #ADD_SKIA_LIBRARY_DEPENDENCY("jpeg") # skia_use_system_libjpeg_turbo

    #ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_SYSTEM_ZLIB} "z") # skia_use_system_zlib
    if(SK_USE_SYSTEM_ZLIB)
      #find_package(ZLIB REQUIRED)
      #message(FATAL_ERROR "libZLIB_LIB=${libZLIB_LIB}")
      # TODO: cannot find /lib64/libz.so.1
    endif(SK_USE_SYSTEM_ZLIB)

    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${libZLIB_LIB}" PARENT_SCOPE)

    # NOTE: libjpeg_turbo requires libjpeg
    #set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${libjpeg_LIB}" PARENT_SCOPE)

    # NOTE: libjpeg_turbo requires libjpeg
    if(USE_LIBJPEG_TURBO)
      set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${libjpeg_TURBO_LIB}" PARENT_SCOPE)
    endif(USE_LIBJPEG_TURBO)

    #ADD_SKIA_LIBRARY_DEPENDENCY("png") # skia_use_system_libpng
    #find_package(PNG REQUIRED)
    # none of the above will be defined unless ZLib can be found!
    #PNG_INCLUDE_DIRS, where to find png.h, etc.
    #PNG_LIBRARIES, the libraries to link against to use PNG.
    #PNG_DEFINITIONS - You should add_definitons(${PNG_DEFINITIONS}) before compiling code that includes png library files.
    #PNG_FOUND, If false, do not try to use PNG.
    #PNG_VERSION_STRING - the version of the PNG library found (since CMake 2.8.8)
    #set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};PNG::PNG" PARENT_SCOPE)
    #
    # TODO: Linking globals named 'png_sRGB_table': symbol multiply defined!
    if(SK_USE_SYSTEM_LIBPNG)
      set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${libpng_LIB}" PARENT_SCOPE)
    endif(SK_USE_SYSTEM_LIBPNG)

    if(USE_CUSTOM_ICU)
      set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${CUSTOM_ICU_LIB};${HARFBUZZ_LIBRARIES}" PARENT_SCOPE)
    endif(USE_CUSTOM_ICU)

    # TODO: Linking globals named 'png_sRGB_table': symbol multiply defined!
    #list(APPEND SKIA_DEFINES ${PNG_DEFINITIONS})
    #message("SKIA_DEFINES=${SKIA_DEFINES}")

    # webp integration doesn't expose the system option...
    #ADD_SKIA_LIBRARY_DEPENDENCY("webp") # SK_CONF_IS_OFFICIAL_BUILD && skia_use_libwebp

    #ADD_SKIA_LIBRARY_DEPENDENCY("pthread")
    find_package(Threads REQUIRED)
    #target_link_libraries(SKIA Threads::Threads)
    message("CMAKE_THREAD_LIBS_INIT=${CMAKE_THREAD_LIBS_INIT}")
    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};Threads::Threads" PARENT_SCOPE)
  else()
    message(FATAL_ERROR "unknown platform")
  endif()

  set(SKIA_CMAKE_ONLY_HEADERS "${SKIA_CMAKE_ONLY_HEADERS};${HARFBUZZ_INCLUDE_DIRS};${FOUND_OPENGL_INCLUDE_DIR};${OPENGL_EGL_INCLUDE_DIRS}")
  set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${HARFBUZZ_LIBRARIES};${FOUND_OPENGL_LIBRARIES}")

  #message(FATAL_ERROR OPENGLES2_LIBRARIES=${OPENGLES2_LIBRARIES})
  #
  #set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${OPENGLES2_LIBRARIES}" PARENT_SCOPE)
  # when skia_enable_gpu:
  #
  # OpenGL::GL
  #   Defined to the platform-specific OpenGL libraries if the system has OpenGL.
  # OpenGL::OpenGL
  #   Defined to libOpenGL if the system is GLVND-based.
  # OpenGL::GLU
  #   Defined if the system has GLU.
  # OpenGL::GLX
  #   Defined if the system has GLX.
  # OpenGL::EGL
  #   Defined if the system has EGL.
  find_package(OpenGL REQUIRED) # see FOUND_OPENGL_LIBRARIES
  #
  if(SK_IS_EGL)
    #ADD_SKIA_LIBRARY_DEPENDENCY("EGL") # skia_use_egl
    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};OpenGL::EGL" PARENT_SCOPE)
    #see OPENGL_EGL_INCLUDE_DIRS
  else()
    #ADD_SKIA_LIBRARY_DEPENDENCY("GL") # !skia_use_egl # TODO: GLU?
    set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};OpenGL::GL" PARENT_SCOPE)
    #see FOUND_OPENGL_INCLUDE_DIR
  endif() # SK_IS_EGL
else(NOT EXT_SKIA_SHARED)
  #message(FATAL_ERROR "unknown platform")
endif(NOT EXT_SKIA_SHARED)

message(STATUS "SKIA_CMAKE_ONLY_HEADERS=${SKIA_CMAKE_ONLY_HEADERS}")
message(STATUS "SKIA_DEPENDENCIES=${SKIA_DEPENDENCIES}")

if (EXT_SKIA_SHARED)
  set(SKIA_LIBRARY_PREFIX "${CMAKE_SHARED_LIBRARY_PREFIX}")
  set(SKIA_LIBRARY_SUFFIX "${CMAKE_SHARED_LIBRARY_SUFFIX}")
  message(FATAL_ERROR "TODO: SUPPORT SHARED BUILDS") # TODO
  set(SK_LIBRARY_TYPE SHARED)
else (EXT_SKIA_SHARED)
  set(SKIA_LIBRARY_PREFIX "${CMAKE_STATIC_LIBRARY_PREFIX}")
  set(SKIA_LIBRARY_SUFFIX "${CMAKE_STATIC_LIBRARY_SUFFIX}")
  set(SK_LIBRARY_TYPE STATIC)
endif (EXT_SKIA_SHARED)

if(TARGET_EMSCRIPTEN)
  set(SK_LIBRARY_TYPE STATIC) # FORCE STATIC
else()
  # TODO
endif() # EMSCRIPTEN

add_library(SKIA STATIC IMPORTED GLOBAL)
if(NOT TARGET SKIA)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(SKIA_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skia${SKIA_LIBRARY_SUFFIX}")
#
#add_library(pathkit ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
#if(NOT TARGET pathkit)
#  message(FATAL_ERROR "SKIA LIB NOT FOUND")
#endif()
#set(PATHKIT_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}pathkit${SKIA_LIBRARY_SUFFIX}")
#
if(ENABLE_SKSG)
  add_library(${sksg_LIB} ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
  if(NOT TARGET ${sksg_LIB})
    message(FATAL_ERROR "SKIA SKSG LIB NOT FOUND")
  endif()
  set(sksg_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}${sksg_LIB}${SKIA_LIBRARY_SUFFIX}")
endif(ENABLE_SKSG)
#
if(ENABLE_SKSHAPER)
  add_library(${skshaper_LIB} ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
  if(NOT TARGET ${skshaper_LIB})
    message(FATAL_ERROR "SKIA SKSHAPER LIB NOT FOUND")
  endif()
  set(skshaper_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}${skshaper_LIB}${SKIA_LIBRARY_SUFFIX}")
endif(ENABLE_SKSHAPER)
#
if(ENABLE_SKOTTIE)
  add_library(skottie ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
  if(NOT TARGET skottie)
    message(FATAL_ERROR "SKIA SKOTTIE LIB NOT FOUND")
  endif()
  set(skottie_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skottie${SKIA_LIBRARY_SUFFIX}")
endif(ENABLE_SKOTTIE)
#
#add_library(particles ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
#if(NOT TARGET particles)
#  message(FATAL_ERROR "SKIA LIB NOT FOUND")
#endif()
#set(particles_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}particles${SKIA_LIBRARY_SUFFIX}")
#
if(ENABLE_WUFFS)
  add_library(wuffs ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
  if(NOT TARGET wuffs)
    message(FATAL_ERROR "SKIA WUFFS LIB NOT FOUND")
  endif()
  set(wuffs_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}wuffs${SKIA_LIBRARY_SUFFIX}")
endif(ENABLE_WUFFS)
#
#add_library(jpeg ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
#if(NOT TARGET jpeg)
#  message(FATAL_ERROR "SKIA LIB NOT FOUND")
#endif()
#set(jpeg_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}jpeg${SKIA_LIBRARY_SUFFIX}")

#
#message(FATAL_ERROR "${skottie_LIBRARY}")
if(ENABLE_WUFFS)
  set_target_properties(wuffs PROPERTIES
    IMPORTED_LOCATION "${wuffs_LIBRARY}"
    INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
    INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
    IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  )
  add_dependencies(wuffs SKIA_build)
endif(ENABLE_WUFFS)
#
#set_target_properties(jpeg PROPERTIES
#  IMPORTED_LOCATION "${jpeg_LIBRARY}"
#  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
#  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
#  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
#)
#add_dependencies(jpeg SKIA_build)
#
set_target_properties(SKIA PROPERTIES
  IMPORTED_LOCATION "${SKIA_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${wuffs_LIBRARY};${jpeg_LIBRARY};${iccjpeg_LIB};${SKIA_DEPENDENCIES}"
)
add_dependencies(SKIA SKIA_build ${CUSTOM_ICU_LIB} ${WUFFS_LIB_NAME} ${CUSTOM_ICU_LIB} ${HARFBUZZ_LIBRARIES} ${iccjpeg_LIB} ${jpeg_LIBRARY})
# https://stackoverflow.com/a/53945809
target_link_libraries(SKIA INTERFACE
  ${CUSTOM_ICU_LIB}
  ${WUFFS_LIB_NAME}
  ${FREETYPE_LIBRARIES}
  ${HARFBUZZ_LIBRARIES}
  ${libpng_LIB}
  ${libZLIB_LIB}
  ${libDL_LIB}
  ${libjpeg_TURBO_LIB}
  ${jpeg_LIBRARY}
  ${iccjpeg_LIB}
)
#
#set_target_properties(pathkit PROPERTIES
#  IMPORTED_LOCATION "${PATHKIT_LIBRARY}"
#  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
#  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
#  # https://stackoverflow.com/a/28102243/10904212
#  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
#)
#add_dependencies(pathkit SKIA)
## https://stackoverflow.com/a/53945809
#target_link_libraries(pathkit INTERFACE
#  SKIA)
#
if(ENABLE_SKSHAPER)
  set_target_properties(${skshaper_LIB} PROPERTIES
    IMPORTED_LOCATION "${skshaper_LIBRARY}"
    INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
    INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
    # https://stackoverflow.com/a/28102243/10904212
    #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
    IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
  )
  add_dependencies(${skshaper_LIB} SKIA)# https://stackoverflow.com/a/53945809
  # https://stackoverflow.com/a/53945809
  target_link_libraries(${skshaper_LIB} INTERFACE
    SKIA)
endif(ENABLE_SKSHAPER)
#
if(ENABLE_SKSG)
  set_target_properties(${sksg_LIB} PROPERTIES
    IMPORTED_LOCATION "${sksg_LIBRARY}"
    INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
    INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
    # https://stackoverflow.com/a/28102243/10904212
    #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
    IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${skshaper_LIBRARY};${SKIA_DEPENDENCIES}"
  )
  add_dependencies(${sksg_LIB} SKIA ${skshaper_LIB})
  # https://stackoverflow.com/a/53945809
  target_link_libraries(${sksg_LIB} INTERFACE
    SKIA ${skshaper_LIB})
endif(ENABLE_SKSG)
#
if(ENABLE_SKOTTIE)
  #message(FATAL_ERROR "${skottie_LIBRARY}")
  #message(FATAL_ERROR "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}")
  set_target_properties(skottie PROPERTIES
    IMPORTED_LOCATION "${skottie_LIBRARY}"
    INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
    INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
    # https://stackoverflow.com/a/28102243/10904212
    #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
    IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${sksg_LIBRARY};${skshaper_LIBRARY};${SKIA_DEPENDENCIES}"
  )
  # https://stackoverflow.com/a/53945809
  target_link_libraries(skottie INTERFACE
    SKIA ${sksg_LIB} ${skshaper_LIB})
  add_dependencies(skottie SKIA ${sksg_LIB} ${skshaper_LIB})
endif(ENABLE_SKOTTIE)
#
#set_target_properties(particles PROPERTIES
#  IMPORTED_LOCATION "${particles_LIBRARY}"
#  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_CMAKE_ONLY_HEADERS}"
#  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
#  # https://stackoverflow.com/a/28102243/10904212
#  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
#  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
#)
## https://stackoverflow.com/a/53945809
#target_link_libraries(particles INTERFACE
#  SKIA)
#add_dependencies(particles SKIA)
