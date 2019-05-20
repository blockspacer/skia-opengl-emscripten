#
# Skia
# NOTE: use clang on ALL platforms
# If you depend on software rasterization, image decoding, or color space conversion
# and compile Skia with GCC, MSVC or another compiler,
# you will see dramatically worse performance
# NOTE: set clang-cl,
# see https://github.com/google/skia/blob/master/site/user/build.md#highly-recommended-build-with-clang-cl
#

# case-insensitive match TODO: is debug, Debug, DEBUG all valid?
if (CMAKE_BUILD_TYPE MATCHES "[dD][eE][bB][uU][gG]")
  set(IS_DEBUG_BUILD ON)
else()
  set(IS_DEBUG_BUILD OFF)
  set(EXT_SKIA_OFFICIAL_BUILD "true")
endif ()

# force OFFICIAL_BUILD
if(RELEASE_BUILD)
  set(IS_DEBUG_BUILD OFF)
  set(EXT_SKIA_OFFICIAL_BUILD "true")
endif(RELEASE_BUILD)

# I wanted to expose (almost) all Skia options as CMake options but sadly
# GN is a really bad tool - It produces non-overridable configure errors like:
#
# The variable "skia_use_system_libjpeg_turbo" was set as a build argument but never appeared in a declare_args() block in any buildfile.
#
# ... even though the option exists (this one in skia/third_party/libjpeg-turbo/BUILD.gb)
# and it's listed in gn args --list.
# (It seems to be caused by the fact that some options are only actually used when other
# options are set appropriately. But it's not always obvious - one would have to dig into
# Skia configuration. And replicating the dependencies here + propagating it correctly into
# the ExternalProject setup is beyond reasonable.
option(EXT_SKIA_ALWAYS_BUILD "" OFF)
option(EXT_SKIA_DEBUG "" ${IS_DEBUG_BUILD})
if(EMSCRIPTEN)
  # NOTE: Use is_component_build=false with EMSCRIPTEN
  option(EXT_SKIA_SHARED "build a shared lbrary (ON) or a static library (OFF)" OFF)
else(EMSCRIPTEN)
  option(EXT_SKIA_SHARED "build a shared lbrary (ON) or a static library (OFF)" OFF)
endif(EMSCRIPTEN)

set(SKIA_SRC "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/skia")

if (NOT EXISTS ${SKIA_SRC})
  message(FATAL_ERROR "Can't find Skia sources. Please run download-dependencies.sh.")
endif ()

set(SKIA_BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}/skia")

# TODO: extra_cflags=[\"-Wno-unknown-warning-option\",\"-s\",\"USE_FREETYPE=1\",\"-s\",\"USE_LIBPNG=1\"]

# Skia comes with -Werror on by default. That's a cool feature for release...
set(NEW_CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(NEW_CMAKE_C_FLAGS "${NEW_CMAKE_C_FLAGS} -Wno-error")

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

if(EMSCRIPTEN)
  #set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -s MODULARIZE=1 -s EXPORT_NAME=\"PathKitInit\"")
  #set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -s STRICT=1")
endif() # EMSCRIPTEN

set(NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS} -Wno-error")

# The string literal "\\\\" represents "\\" in memory which is a valid regex (representing a single backslash).
STRING(REGEX REPLACE " " "\",\"" NEW_CMAKE_CXX_FLAGS "${NEW_CMAKE_CXX_FLAGS}")
set(SKIA_CXX_FLAGS "\"${NEW_CMAKE_CXX_FLAGS}\"")
message(STATUS "SKIA_CXX_FLAGS=${SKIA_CXX_FLAGS}")

set(SKIA_LDFLAGS "\"-Wno-error\"")
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
endif ()

if (EMSCRIPTEN)
  # todo
  #set(SK_CONF_IS_OFFICIAL_BUILD "true")

  set(SK_CONF_SHARED "false")

  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false") # TODO
  set(SK_IS_ccpr "false")

  set(SK_IS_EGL "true")
  # https://github.com/Zubnix/skia-wasm-port/blob/master/build_skia_wasm_bitcode.sh#L16
  # TODO: PATCH https://github.com/Zubnix/skia-wasm-port/blob/master/wasm_compatible_build.patch
  set(SK_TARGET_CPU "target_cpu=\"wasm\"")
  # see DSK_ASSUME_WEBGL
  # see skia/modules/canvaskit/compile.sh
  set(SK_GL_STANDARD "skia_gl_standard=\"webgl\"") # SK_ASSUME_WEBGL
  #set(SK_GL_STANDARD "skia_gl_standard=\"gles\"") # SK_ASSUME_GL_ES
  #set(SK_GL_STANDARD "skia_gl_standard=\"gl\"") # SK_ASSUME_GL
else (EMSCRIPTEN)
  set(SK_IS_processors "false") # see SKSL_STANDALONE
  set(SK_IS_workarounds "false")
  set(SK_IS_ccpr "true")

  set(SK_IS_EGL "false")
  set(SK_TARGET_CPU "")
  set(SK_GL_STANDARD "") # default
endif (EMSCRIPTEN)

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

# NOTE: modifying skia src requires full rebuild!
set(GN_ARGS "${SK_TARGET_CPU} \
${SK_GL_STANDARD} \
ar=\"${CMAKE_AR}\" \
cc=\"${CMAKE_C_COMPILER}\" \
cxx=\"${CMAKE_CXX_COMPILER}\" \
extra_cflags_c=[${SKIA_C_FLAGS}] \
extra_cflags_cc=[${SKIA_CXX_FLAGS}] \
extra_ldflags=[${SKIA_LDFLAGS}] \
is_official_build=${SK_CONF_IS_OFFICIAL_BUILD} \
is_component_build=${SK_CONF_SHARED} \
is_debug=${SK_CONF_DEBUG} \
skia_enable_gpu=true \
skia_use_egl=${SK_IS_EGL} \
skia_use_vulkan=false \
skia_enable_vulkan_debug_layers=false \
skia_enable_spirv_validation=false \
skia_use_icu=false \
skia_enable_ccpr=${SK_IS_ccpr} \
skia_enable_nvpr=false \
skia_use_expat=false \
skia_enable_skottie=true \
skia_use_libjpeg_turbo=true \
skia_use_system_libjpeg_turbo=false \
skia_use_libpng=true \
skia_use_system_libpng=true \
skia_use_zlib=true \
skia_use_wuffs=true \
skia_use_libwebp=false \
skia_enable_pdf=false \
skia_use_sfntly=false \
skia_enable_atlas_text=false \
skia_use_fontconfig=false \
skia_use_freetype=true \
skia_use_system_freetype2=true \
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
skia_enable_skshaper=true \
skia_use_x11=true \
skia_lex=false \
skia_compile_processors=${SK_IS_processors} \
skia_generate_workarounds=${SK_IS_workarounds} \
skia_use_harfbuzz=true"

# \
#modules/skottie/utils/SkottieUtils.cpp

)

message(STATUS "GN_ARGS=${GN_ARGS}")
set(CONFIGURE_COMMAND "${SKIA_SRC}/bin/gn;gen;--root=${SKIA_SRC};${SKIA_BUILD_DIR};--args=${GN_ARGS}")

ExternalProject_Add(SKIA_build
  # LIST_SEPARATOR is needed for list expansion of C(XX)_FLAGS.
  LIST_SEPARATOR "^^"
  SOURCE_DIR ${SKIA_SRC}
  CONFIGURE_COMMAND "${CONFIGURE_COMMAND}"
  BUILD_COMMAND ninja -C ${SKIA_BUILD_DIR} -j8
  # there is no install step provided
  INSTALL_COMMAND true
)

if (EXT_SKIA_ALWAYS_BUILD)
  # Make sure the target is always rebuilt.
  # Without this changing Skia sources doesn't trigger a ninja build. With this
  # ninja build is always triggered. This is not needed if you never touch the
  # Skia sources. Please note that enabling this ends up with re-building of
  # targets that depend on the library. :(
  ExternalProject_Add_Step(SKIA_build ForceBuild COMMAND true DEPENDERS build ALWAYS 1)
endif ()

# taken from BUILD.gn (skia_public_includes, minus things that are obviously useless for us)
set(SKIA_HEADERS
  ${SKIA_SRC}
  ${SKIA_SRC}/tools
  ${SKIA_SRC}/modules/skottie/include
  ${SKIA_SRC}/modules/pathkit
  ${SKIA_SRC}/modules/sksg/include
  ${SKIA_SRC}/modules/skshaper/include
#  ${SKIA_SRC}/tools/timer
  ${SKIA_SRC}/src/gpu
  ${SKIA_SRC}/src/sksl
  ${SKIA_SRC}/src/gpu/gl
  ${SKIA_SRC}/src/shaders
  ${SKIA_SRC}/src/core
  ${SKIA_SRC}/src/image
  ${SKIA_SRC}/src/utils
#  ${SKIA_SRC}/src/tools
  ${SKIA_SRC}/include/c
  ${SKIA_SRC}/include/codec
  ${SKIA_SRC}/include/config
  ${SKIA_SRC}/include/core
  ${SKIA_SRC}/include/effects
  ${SKIA_SRC}/include/gpu
  ${SKIA_SRC}/include/gpu/gl
  ${SKIA_SRC}/include/pathops
  ${SKIA_SRC}/include/ports
  ${SKIA_SRC}/include/svg
  ${SKIA_SRC}/include/utils
#  ${SKIA_SRC}/include/views
  ${SKIA_SRC}/include/private
#  ${SKIA_SRC}/third_party/angle2
#  ${SKIA_SRC}/third_party/cpu-features
#  ${SKIA_SRC}/third_party/dng_sdk
#  ${SKIA_SRC}/third_party/etc1
  ${SKIA_SRC}/third_party/expat
#  ${SKIA_SRC}/third_party/externals
  ${SKIA_SRC}/third_party/freetype2
#  ${SKIA_SRC}/third_party/gif
  ${SKIA_SRC}/third_party/harfbuzz
  ${SKIA_SRC}/third_party/icu
#  ${SKIA_SRC}/third_party/imgui
  ${SKIA_SRC}/third_party/libjpeg-turbo
#  ${SKIA_SRC}/third_party/libmicrohttpd
  ${SKIA_SRC}/third_party/libpng
#  ${SKIA_SRC}/third_party/libsdl
#  ${SKIA_SRC}/third_party/libwebp
#  ${SKIA_SRC}/third_party/lua
#  ${SKIA_SRC}/third_party/native_app_glue
  ${SKIA_SRC}/third_party/Nima-Cpp
#  ${SKIA_SRC}/third_party/opencl
#  ${SKIA_SRC}/third_party/piex
  ${SKIA_SRC}/third_party/skcms
#  ${SKIA_SRC}/third_party/sfntly
#  ${SKIA_SRC}/third_party/spirv-headers
#  ${SKIA_SRC}/third_party/spirv-tools
#  ${SKIA_SRC}/third_party/vulkanmemoryallocator
  ${SKIA_SRC}/third_party/wuffs
  ${SKIA_SRC}/third_party/zlib
)

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
  #"SK_HAS_WEBP_LIBRARY=1" # skia_use_libwebp
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
set(SKIA_DEFINES
  SKIA_IMPLEMENTATION
  SK_SUPPORT_OPENCL=0
  SK_SAMPLES_FOR_X=1 # always set for linux, even if there's no X used
  SK_SAMPLES_FOR_X
  # see https://skia.org/user/api/skcanvas_creation
  SK_SUPPORT_GPU=1 # skia_enable_gpu
  SK_SUPPORT_GPU
  SK_HAS_PNG_LIBRARY=1 # skia_use_libpng
  SK_HAS_PNG_LIBRARY
  SK_HAS_JPEG_LIBRARY=1 # skia_use_libjpeg_turbo
  SK_HAS_JPEG_LIBRARY
  SK_INCLUDE_MANAGED_SKOTTIE=1
  SK_INCLUDE_MANAGED_SKOTTIE
)

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
  list(APPEND SKIA_DEFINES SK_ASSUME_WEBGL)
  list(APPEND SKIA_DEFINES SK_ASSUME_WEBGL=1)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL_ES)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL_ES=1)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL)
  #list(APPEND SKIA_DEFINES SK_ASSUME_GL=1)
  list(APPEND SKIA_DEFINES IS_WEBGL)
  list(APPEND SKIA_DEFINES IS_WEBGL=1)
  #list(APPEND SKIA_DEFINES LIBANGLE_IMPLEMENTATION=1)
  #list(APPEND SKIA_DEFINES LIBGLESV2_IMPLEMENTATION=1)
  list(APPEND SKIA_DEFINES LIBEGL_IMPLEMENTATION=1)

  # see https://github.com/endlessm/chromium-browser/blob/master/third_party/skia/third_party/skcms/skcms.cc#L1813
  # see https://github.com/google/skia/blob/master/third_party/skcms/skcms.cc#L1836
  # list(APPEND SKIA_DEFINES SKCMS_PORTABLE)

  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_ESSL=1)
  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_GLSL=1)
  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_HLSL=1)
  #list(APPEND SKIA_DEFINES ANGLE_ENABLE_OPENGL=1)
  list(APPEND SKIA_DEFINES EGL_EGLEXT_PROTOTYPES=1)
  #list(APPEND SKIA_DEFINES GL_GLEXT_PROTOTYPES=1)
  list(APPEND SKIA_DEFINES WEB_ASSEMBLY=1)
  #list(APPEND SKIA_DEFINES SK_BUILD_FOR_PATHKIT=1)

  # we don't deserialize anything.
  list(APPEND SKIA_DEFINES SK_DISABLE_READBUFFER=1)
  #list(APPEND SKIA_DEFINES SK_DISABLE_EFFECT_DESERIALIZATION=1)
else(EMSCRIPTEN)
  # Remove software rasterizers to save some code size.
  #list(APPEND SKIA_DEFINES SK_DISABLE_AAA=1)

  # see https://github.com/flutter/flutter/issues/11402
  list(APPEND SKIA_DEFINES SK_ENABLE_DUMP_GPU=1)
endif (EMSCRIPTEN)

if (SK_CONF_SHARED)
  list(APPEND SKIA_DEFINES SKIA_DLL=1)
endif ()

# GN doesn't seem to do any fancy stuff with library dependencies - it just
# asks the compiler to link to them w/o any fany search strategies. This
# also means that whatever is found here is not guaranteed to be the same as
# what GN finds. :-(
# Anyway, using plain find_library() seems to be the next closest thing,
# so even if some libraries provide pkg_config or special packages for CMake,
# only find_library() is used here.
# This is needed only for static library build where the dependencies have
# to be added explicitly.

if(EMSCRIPTEN)
  # message(FATAL_ERROR "${TODO}")
else()

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

  # seem to be always required...
  ADD_SKIA_LIBRARY_DEPENDENCY("dl")
  ADD_SKIA_LIBRARY_DEPENDENCY("pthread")
  if(ENABLE_HARFBUZZ)
    ADD_SKIA_LIBRARY_DEPENDENCY("harfbuzz")
  endif(ENABLE_HARFBUZZ)

  # when skia_enable_gpu:
if(SK_IS_EGL)
  ADD_SKIA_LIBRARY_DEPENDENCY("EGL") # skia_use_egl
else()
  ADD_SKIA_LIBRARY_DEPENDENCY("GL") # !skia_use_egl # TODO: GLU?
endif() # SK_IS_EGL
  #ADD_SKIA_LIBRARY_DEPENDENCY("icuuc") # skia_use_system_icu

  ADD_SKIA_LIBRARY_DEPENDENCY("expat") #skia_use_system_expat
  #ADD_SKIA_LIBRARY_DEPENDENCY("jpeg") # skia_use_system_libjpeg_turbo
  ADD_SKIA_LIBRARY_DEPENDENCY("png") # skia_use_system_libpng
  ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_SYSTEM_ZLIB} "z") # skia_use_system_zlib

  # webp integration doesn't expose the system option...
  #ADD_SKIA_LIBRARY_DEPENDENCY("webp") # SK_CONF_IS_OFFICIAL_BUILD && skia_use_libwebp

  ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_FONTCONFIG} "fontconfig") # skia_use_fontconfig
  ADD_SKIA_LIBRARY_DEPENDENCY(${EXT_SKIA_USE_FREETYPE2} "freetype") # skia_use_system_freetype2
endif (NOT EXT_SKIA_SHARED)

set(SKIA_HEADERS "${SKIA_HEADERS};${HARFBUZZ_INCLUDE_DIRS};${OPENGL_INCLUDE_DIR}")
set(SKIA_DEPENDENCIES "${SKIA_DEPENDENCIES};${HARFBUZZ_LIBRARIES};${OPENGL_LIBRARIES}")

endif() # EMSCRIPTEN

message(STATUS "SKIA_HEADERS=${SKIA_HEADERS}")
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

if(EMSCRIPTEN)
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
add_library(pathkit ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET pathkit)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(PATHKIT_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}pathkit${SKIA_LIBRARY_SUFFIX}")
#
add_library(sksg ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET sksg)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(sksg_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}sksg${SKIA_LIBRARY_SUFFIX}")
#
add_library(skshaper ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET skshaper)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(skshaper_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skshaper${SKIA_LIBRARY_SUFFIX}")
#
add_library(skottie ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET skottie)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(skottie_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}skottie${SKIA_LIBRARY_SUFFIX}")
#
add_library(particles ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET particles)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(particles_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}particles${SKIA_LIBRARY_SUFFIX}")
#
add_library(wuffs ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET wuffs)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(wuffs_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}wuffs${SKIA_LIBRARY_SUFFIX}")
#
add_library(jpeg ${SK_LIBRARY_TYPE} IMPORTED GLOBAL)
if(NOT TARGET jpeg)
  message(FATAL_ERROR "SKIA LIB NOT FOUND")
endif()
set(jpeg_LIBRARY "${SKIA_BUILD_DIR}/${SKIA_LIBRARY_PREFIX}jpeg${SKIA_LIBRARY_SUFFIX}")

#
#message(FATAL_ERROR "${skottie_LIBRARY}")
set_target_properties(wuffs PROPERTIES
  IMPORTED_LOCATION "${wuffs_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
)
add_dependencies(wuffs SKIA_build)
#
set_target_properties(jpeg PROPERTIES
  IMPORTED_LOCATION "${jpeg_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
)
add_dependencies(jpeg SKIA_build)
#
set_target_properties(SKIA PROPERTIES
  IMPORTED_LOCATION "${SKIA_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${wuffs_LIBRARY};${jpeg_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(SKIA SKIA_build wuffs jpeg)
# https://stackoverflow.com/a/53945809
target_link_libraries(SKIA INTERFACE
  wuffs jpeg)
#
set_target_properties(pathkit PROPERTIES
  IMPORTED_LOCATION "${PATHKIT_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(pathkit SKIA)
# https://stackoverflow.com/a/53945809
target_link_libraries(pathkit INTERFACE
  SKIA)
#
set_target_properties(skshaper PROPERTIES
  IMPORTED_LOCATION "${skshaper_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(skshaper SKIA)# https://stackoverflow.com/a/53945809
# https://stackoverflow.com/a/53945809
target_link_libraries(skshaper INTERFACE
  SKIA)
#
set_target_properties(sksg PROPERTIES
  IMPORTED_LOCATION "${sksg_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${skshaper_LIBRARY};${SKIA_DEPENDENCIES}"
)
add_dependencies(sksg SKIA skshaper)
# https://stackoverflow.com/a/53945809
target_link_libraries(sksg INTERFACE
  SKIA skshaper)
#
#message(FATAL_ERROR "${skottie_LIBRARY}")
#message(FATAL_ERROR "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}")
set_target_properties(skottie PROPERTIES
  IMPORTED_LOCATION "${skottie_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${sksg_LIBRARY};${skshaper_LIBRARY};${SKIA_DEPENDENCIES}"
)
# https://stackoverflow.com/a/53945809
target_link_libraries(skottie INTERFACE
  SKIA sksg skshaper)
add_dependencies(skottie SKIA sksg skshaper)
#
set_target_properties(particles PROPERTIES
  IMPORTED_LOCATION "${particles_LIBRARY}"
  INTERFACE_INCLUDE_DIRECTORIES "${SKIA_HEADERS}"
  INTERFACE_COMPILE_DEFINITIONS "${SKIA_DEFINES}"
  # https://stackoverflow.com/a/28102243/10904212
  #IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_DEPENDENCIES}"
  IMPORTED_LINK_INTERFACE_LIBRARIES "${SKIA_LIBRARY};${SKIA_DEPENDENCIES}"
)
# https://stackoverflow.com/a/53945809
target_link_libraries(particles INTERFACE
  SKIA)
add_dependencies(particles SKIA)