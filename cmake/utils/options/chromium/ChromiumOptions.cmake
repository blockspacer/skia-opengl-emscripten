﻿include_guard( DIRECTORY )

# Blink platform
set(ENABLE_BLINK TRUE CACHE BOOL "ENABLE_BLINK")
set(ENABLE_BLINK_UI_VIEWS TRUE CACHE BOOL "ENABLE_BLINK_UI_VIEWS")
if(ENABLE_BLINK_UI_VIEWS AND NOT ENABLE_BLINK)
  message(FATAL_ERROR "BLINK_UI_VIEWS requires BLINK")
endif(ENABLE_BLINK_UI_VIEWS AND NOT ENABLE_BLINK)
set(ENABLE_BLINK_UI_NATIVE_THEME TRUE CACHE BOOL "ENABLE_BLINK_UI_NATIVE_THEME")
if(ENABLE_BLINK_UI_NATIVE_THEME AND NOT ENABLE_BLINK)
  message(FATAL_ERROR "BLINK_UI_NATIVE_THEME requires BLINK")
endif(ENABLE_BLINK_UI_NATIVE_THEME AND NOT ENABLE_BLINK)
# cobalt
set(ENABLE_COBALT TRUE CACHE BOOL "ENABLE_COBALT")
message(STATUS "ENABLE_COBALT = ${ENABLE_COBALT}")

if(TARGET_EMSCRIPTEN)
  if(ENABLE_BLINK_UI_VIEWS OR ENABLE_BLINK_PLATFORM OR ENABLE_SKIA_UTILS OR ENABLE_SKOTTIE)
    set(USE_SK_GPU TRUE)
  else()
    set(USE_SK_GPU FALSE) # TODO
  endif()
elseif(TARGET_LINUX OR TARGET_WINDOWS)
  set(USE_SK_GPU TRUE)
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(NOT USE_SK_GPU AND ENABLE_BLINK_PLATFORM)
  message(FATAL_ERROR "BLINK_PLATFORM requires SK_GPU (TODO: make optional)")
endif(NOT USE_SK_GPU AND ENABLE_BLINK_PLATFORM)

set(ENABLE_BASE TRUE CACHE BOOL "ENABLE_BASE")
set(ENABLE_WTF FALSE CACHE BOOL "ENABLE_WTF")
if(ENABLE_BLINK_PLATFORM AND NOT ENABLE_WTF)
  message(FATAL_ERROR "BLINK_PLATFORM requires LIBWTF")
endif()
if(ENABLE_BLINK AND NOT ENABLE_GRE2)
  message(FATAL_ERROR "BLINK requires GRE2")
endif()
if(ENABLE_BLINK_PLATFORM AND NOT ENABLE_GLIBXML)
  message(FATAL_ERROR "BLINK_PLATFORM requires GLIBXML")
endif()
if(ENABLE_BLINK AND NOT ENABLE_LIBWEBP)
  #message(FATAL_ERROR "BLINK requires LIBWEBP")
endif()

set(ENABLE_MOJO FALSE)
set(MOJO_BASE_ONLY FALSE)
if(ENABLE_MOJO)
  set(MOJO_LIB MOJO)
endif(ENABLE_MOJO)

set(ENABLE_BLINK_PUBLIC_MOJOM FALSE)
if(ENABLE_BLINK_PUBLIC_MOJOM)
  set(BLINK_PUBLIC_MOJOM_LIB BLINK_PUBLIC_MOJOM)
endif(ENABLE_BLINK_PUBLIC_MOJOM)

set(ENABLE_BLINK_PUBLIC_COMMON FALSE)
if(ENABLE_BLINK_PUBLIC_COMMON)
  set(BLINK_PUBLIC_COMMON_LIB BLINK_PUBLIC_COMMON)
endif(ENABLE_BLINK_PUBLIC_COMMON)

set(ENABLE_GMEDIA FALSE)
if(ENABLE_GMEDIA)
  set(GMEDIA_LIB GMEDIA)
endif(ENABLE_GMEDIA)

set(ENABLE_COBALT_CAMERA3D FALSE)

set(ENABLE_COBALT_STORAGE FALSE)

set(ENABLE_COBALT_MEDIA FALSE)

set(ENABLE_CHROMIUM_CC TRUE)
if(ENABLE_CHROMIUM_CC)
  set(CC_LIB CC)
endif(ENABLE_CHROMIUM_CC)

set(ENABLE_CHROMIUM_ANIMATION_CC TRUE)
if(ENABLE_CHROMIUM_ANIMATION_CC)
  set(ANIMATION_CC_LIB ANIMATION_CC)
endif(ENABLE_CHROMIUM_ANIMATION_CC)

set(ENABLE_CHROMIUM_COMPONENTS_VIZ_COMMON TRUE)
if(ENABLE_CHROMIUM_COMPONENTS_VIZ_COMMON)
  set(COMPONENTS_VIZ_COMMON_LIB COMPONENTS_VIZ_COMMON)
endif(ENABLE_CHROMIUM_COMPONENTS_VIZ_COMMON)

set(ENABLE_CHROMIUM_COMPONENTS_VIZ_CLIENT TRUE)
if(ENABLE_CHROMIUM_COMPONENTS_VIZ_CLIENT)
  set(COMPONENTS_VIZ_CLIENT_LIB COMPONENTS_VIZ_CLIENT)
endif(ENABLE_CHROMIUM_COMPONENTS_VIZ_CLIENT)

set(ENABLE_CHROMIUM_UI_COMPOSITOR TRUE)
if(ENABLE_CHROMIUM_UI_COMPOSITOR)
  set(UI_COMPOSITOR_LIB UI_COMPOSITOR)
endif(ENABLE_CHROMIUM_UI_COMPOSITOR)

#if(TARGET_LINUX)
#  set(ENABLE_DYNAMIC_ANNOTATIONS TRUE) # required by tcmalloc
#elseif(TARGET_EMSCRIPTEN OR TARGET_WINDOWS)
#  # skip
#  set(ENABLE_DYNAMIC_ANNOTATIONS FALSE)
#else()
#  message(FATAL_ERROR "unknown platform")
#endif()

#if(ENABLE_DYNAMIC_ANNOTATIONS)
#  set(dynamic_annotations_LIB dynamic_annotations)
#endif(ENABLE_DYNAMIC_ANNOTATIONS)

set(ENABLE_COBALT_DOM_PARSER FALSE CACHE BOOL "ENABLE_COBALT_DOM_PARSER")
if(ENABLE_COBALT_DOM_PARSER AND NOT ENABLE_GLIBXML)
  message(FATAL_ERROR "COBALT_DOM_PARSER requires LIBXML")
endif(ENABLE_COBALT_DOM_PARSER AND NOT ENABLE_GLIBXML)

set(ENABLE_GCRYPTO FALSE)
if(ENABLE_GCRYPTO)
  set(GCRYPTO_LIB GCRYPTO)
endif(ENABLE_GCRYPTO)

if(ENABLE_BLINK_PLATFORM AND DISABLE_COLLATION)
  message(FATAL_ERROR "BLINK_PLATFORM requires ICU COLLATION")
endif()

if(ENABLE_BLINK_PLATFORM AND DISABLE_FORMATTING)
  message(FATAL_ERROR "BLINK_PLATFORM requires ICU FORMATTING")
endif()

macro(add_mojo_prefixes_3 ARG_BASE_PATH ARG_WHERE_COLLECT)
  set(CUR_MOJO_TO_PREFIXES
    ${ARG_BASE_PATH}.mojom.cc
    ${ARG_BASE_PATH}.mojom-shared.cc
    ${ARG_BASE_PATH}.mojom-blink.cc
  )
  list(APPEND ${ARG_WHERE_COLLECT}
    ${CUR_MOJO_TO_PREFIXES}
  )
  set(${ARG_WHERE_COLLECT} ${${ARG_WHERE_COLLECT}} PARENT_SCOPE)
endmacro(add_mojo_prefixes_3)

macro(add_mojo_prefixes_2 ARG_BASE_PATH ARG_WHERE_COLLECT)
  set(CUR_MOJO_TO_PREFIXES
    ${ARG_BASE_PATH}.mojom.cc
    ${ARG_BASE_PATH}.mojom-shared.cc
  )
  list(APPEND ${ARG_WHERE_COLLECT}
    ${CUR_MOJO_TO_PREFIXES}
  )
  set(${ARG_WHERE_COLLECT} ${${ARG_WHERE_COLLECT}} PARENT_SCOPE)
endmacro(add_mojo_prefixes_2)

macro(add_mojo_prefixes_1 ARG_BASE_PATH ARG_WHERE_COLLECT)
  set(CUR_MOJO_TO_PREFIXES
    ${ARG_BASE_PATH}.mojom.cc
  )
  list(APPEND ${ARG_WHERE_COLLECT}
    ${CUR_MOJO_TO_PREFIXES}
  )
  set(${ARG_WHERE_COLLECT} ${${ARG_WHERE_COLLECT}} PARENT_SCOPE)
endmacro(add_mojo_prefixes_1)

include(private/ChromiumDirs)

if(NOT ENABLE_MOJO)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DDISABLE_MOJO=1")
endif(NOT ENABLE_MOJO)

if(TARGET_EMSCRIPTEN)
  set(USE_CUSTOM_LIBPNG FALSE)
elseif(TARGET_LINUX OR TARGET_WINDOWS)
  set(USE_CUSTOM_LIBPNG FALSE)
else()
  message(FATAL_ERROR "platform not supported")
endif()
if(USE_LIBPNG)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DHAS_LIBPNG=1")
  #
  if(USE_CUSTOM_LIBPNG)
    set(USE_SYSTEM_PNG FALSE)
    set(libpng_LIB GLIBPNG)
  else(USE_CUSTOM_LIBPNG)
    if(TARGET_EMSCRIPTEN)
      set(USE_SYSTEM_PNG TRUE) # TODO
      #message(FATAL_ERROR "wasm: only custom LIBPNG is supported for now")
    elseif(TARGET_LINUX OR TARGET_WINDOWS)
      set(USE_SYSTEM_PNG TRUE)
    else()
      message(FATAL_ERROR "platform not supported")
    endif()
  endif(USE_CUSTOM_LIBPNG)
  #
  if(USE_SYSTEM_PNG)
    #message(FATAL_ERROR "NOT SUPPORTED: SYSTEM PNG")
    if(TARGET_EMSCRIPTEN)
      set(EMCC_COMMON "${EMCC_COMMON} -s USE_LIBPNG=1")
    elseif(TARGET_LINUX OR TARGET_WINDOWS)
      find_package(PNG REQUIRED) # PNG::PNG
      set(libpng_LIB PNG::PNG)
      #set(libpng_LIB GLIBPNG)
    else()
      message(FATAL_ERROR "platform not supported")
    endif()
  else()
    if(USE_CUSTOM_LIBPNG)
      set(libpng_LIB GLIBPNG)
    else()
      message(FATAL_ERROR "YOU MUST USE SYSTEM PNG OR CUSTOM PNG")
    endif(USE_CUSTOM_LIBPNG)
  endif()
endif(USE_LIBPNG)

# harfbuzz
#option(ENABLE_HARFBUZZ "ENABLE_HARFBUZZ" ON)
#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT ENABLE_HARFBUZZ)
#  message(WARNING "AUTO ENABLED HARFBUZZ")
#  option(ENABLE_HARFBUZZ "ENABLE_HARFBUZZ" ON)
#endif()
if(ENABLE_HARFBUZZ)
  if(TARGET_WINDOWS)
    set(USE_CUSTOM_HARFBUZZ FALSE)
  else()
    set(USE_CUSTOM_HARFBUZZ TRUE)
  endif(TARGET_WINDOWS)
  set(FORCE_USE_SKIA_HARFBUZZ TRUE)
  if(TARGET_WINDOWS)
    set(HARFBUZZ_FROM_SKIA TRUE)
  endif(TARGET_WINDOWS)
  #
  # custom flags
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_HARFBUZZ=1")
  # https://github.com/klzgrad/naiveproxy/blob/master/src/third_party/skia/modules/skshaper/BUILD.gn#L11
  # SK_SHAPER_HARFBUZZ_AVAILABLE # < TODO if skia_use_icu
  #
  set(harfbuzz_FULL_DIR
    ${CHROMIUM_DIR}third_party/skia/third_party/externals/harfbuzz/
  )
  #
  if(USE_CUSTOM_HARFBUZZ)
    #
    if(TARGET_WINDOWS)
      # NOTE: HarfBuzz from skia on WINDOWS
      if(HARFBUZZ_FROM_SKIA)
        #set(HARFBUZZ_LIBRARIES harfbuzz)
        set(HARFBUZZ_LIBRARIES SKIA)
      else()
        set(HARFBUZZ_LIBRARIES harfbuzz)
        list(APPEND HARFBUZZ_INCLUDE_DIRS ${harfbuzz_FULL_DIR}/src)
      endif()
    else()
      set(HARFBUZZ_LIBRARIES harfbuzz)
      list(APPEND HARFBUZZ_INCLUDE_DIRS ${harfbuzz_FULL_DIR}/src)
    endif(TARGET_WINDOWS)
  else(USE_CUSTOM_HARFBUZZ)
    set(EMCC_COMMON "${EMCC_COMMON} -s USE_HARFBUZZ=1")
    # see find_package below for linux
  endif(USE_CUSTOM_HARFBUZZ)
endif(ENABLE_HARFBUZZ)

if(TARGET_EMSCRIPTEN)
  set(ENABLE_BORINGSSL FALSE)
elseif(TARGET_LINUX)
  set(ENABLE_BORINGSSL FALSE) # TODO: add src/chromium/third_party/boringssl/src/ssl/CMakeLists.txt
elseif(TARGET_WINDOWS)
  set(ENABLE_BORINGSSL FALSE) # TODO: add src/chromium/third_party/boringssl/src/ssl/CMakeLists.txt
else()
  message(FATAL_ERROR "platform not supported")
endif()
if(ENABLE_BORINGSSL)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BORINGSSL=1")
  set(BORINGSSL_LIBS
    BORINGSSL
  )
endif(ENABLE_BORINGSSL)

if(TARGET_EMSCRIPTEN)
  set(ENABLE_GNET FALSE)
elseif(TARGET_LINUX)
  set(ENABLE_GNET FALSE) # TODO
elseif(TARGET_WINDOWS)
  set(ENABLE_GNET FALSE) # TODO
else()
  message(FATAL_ERROR "platform not supported")
endif()
if(ENABLE_GNET)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_GNET=1")
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_NET=1")
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_NETWORK=1")
  set(GNET_LIBS
    GNET
  )
endif(ENABLE_GNET)

if(TARGET_WINDOWS)
  # prevent C:\Program Files (x86)\Windows Kits\10\include\10.0.17763.0\um\GL/gl.h(1157,1): error: unknown type name 'WINGDIAPI'
  include_directories("${khronos_DIR}noninclude/GL") # TODO: use target_include_directories
  include_directories("${khronos_DIR}noninclude") # TODO: use target_include_directories
  if(NOT EXISTS "${khronos_DIR}noninclude/GL/glext.h")
    message(FATAL_ERROR "can't find ${khronos_DIR}noninclude/GL/glext.h")
  endif()
endif(TARGET_WINDOWS)

# # Annotations useful when implementing condition variables such as CondVar,
# # using conditional critical sections (Await/LockWhen) and when constructing
# # user-defined synchronization mechanisms.
# if(ENABLE_DYNAMIC_ANNOTATIONS)
#   set(COMMON_FLAGS "${COMMON_FLAGS} -DDYNAMIC_ANNOTATIONS_ENABLED=1")
# endif(ENABLE_DYNAMIC_ANNOTATIONS)

if(ENABLE_SKIA AND ENABLE_BLINK)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BLINK_UI=1")
  #
  set(UI_DISPLAY_LIB
    UI_DISPLAY
  )
  #
  if(ENABLE_BLINK_UI_VIEWS)
    set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BLINK_UI_VIEWS=1")
    set(UI_VIEWS_LIB
      UI_VIEWS
    )
  endif(ENABLE_BLINK_UI_VIEWS)
  #
  if(ENABLE_BLINK_UI_VIEWS AND NOT ENABLE_BLINK_UI_NATIVE_THEME)
    message(FATAL_ERROR "BLINK_UI_VIEWS requires BLINK_UI_NATIVE_THEME")
  endif(ENABLE_BLINK_UI_VIEWS AND NOT ENABLE_BLINK_UI_NATIVE_THEME)
  #
  if(ENABLE_BLINK_UI_NATIVE_THEME)
    set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BLINK_UI_NATIVE_THEME=1")
    set(UI_NATIVE_THEME_LIB
      UI_NATIVE_THEME
    )
  endif(ENABLE_BLINK_UI_NATIVE_THEME)
endif(ENABLE_SKIA AND ENABLE_BLINK)

if (ENABLE_SKIA)
  set(ENABLE_WUFFS FALSE)
  if(ENABLE_WUFFS)
    set(WUFFS_LIB_NAME
      wuffs
    )
  endif()
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_SKIA=1")
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_SKIA_HQ=1")
  set(SKIA_PARENT_DIR "${CHROMIUM_DIR}third_party/")
  set(SKIA_DIR "${SKIA_PARENT_DIR}skia/")

  #set(SKIA_EXT_PARENT_DIR ${CHROMIUM_DIR})
  #set(SKIA_EXT_DIR ${SKIA_EXT_PARENT_DIR}skia/)
  set(SKIA_EXT_PARENT_DIR ${SKIA_PARENT_DIR})
  set(SKIA_EXT_DIR ${SKIA_EXT_PARENT_DIR}skia/)
endif(ENABLE_SKIA)

if(ENABLE_SKSG)
  set(sksg_LIB sksg)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_SKSG=1")
endif(ENABLE_SKSG)

if(ENABLE_SKOTTIE)
  set(skottie_LIB skottie)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_SKOTTIE=1")
  set(ENABLE_SKIA_UTILS TRUE)
endif(ENABLE_SKOTTIE)

if (ENABLE_SKSHAPER)
  # SkShaper
  # Shapes text using HarfBuzz
  # and places the shaped text into a TextBlob.
  # If compiled without HarfBuzz,
  # fall back on SkPaint::textToGlyphs.
  set(skshaper_LIB skshaper)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_SKSHAPER=1")
endif(ENABLE_SKSHAPER)

if(ENABLE_BLINK)
  if(NOT ENABLE_SKIA)
    message(FATAL_ERROR "BLINK requires SKIA")
  endif(NOT ENABLE_SKIA)
  #
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_BLINK=1")
  #list(APPEND APP_DEFINITIONS ENABLE_LATENCY=1) # ui/latency
  #list(APPEND APP_DEFINITIONS ENABLE_CC_BENCH=1) # cc/benchmarks
  set(ENABLE_BLINK_COMMON FALSE)
  if(ENABLE_BLINK_COMMON)
    list(APPEND APP_DEFINITIONS ENABLE_BLINK_COMMON=1)
    set(BLINK_COMMON_LIB BLINK_COMMON)
  endif(ENABLE_BLINK_COMMON)
  set(ENABLE_BLINK_PLATFORM FALSE)
  if(ENABLE_BLINK_PLATFORM)
    list(APPEND APP_DEFINITIONS ENABLE_BLINK_PLATFORM=1)
    set(BLINK_RENDERER_PLATFORM_LIB BLINK_RENDERER_PLATFORM)
  endif(ENABLE_BLINK_PLATFORM)
  set(ENABLE_BLINK_RENDERER_CORE FALSE)
  if(ENABLE_BLINK_PLATFORM)
    list(APPEND APP_DEFINITIONS ENABLE_BLINK_RENDERER_CORE=1)
    set(BLINK_RENDERER_CORE_LIB BLINK_RENDERER_CORE)
  endif(ENABLE_BLINK_PLATFORM)
  #
  set(BLINK_GFX_LIBS
    #BLINK_RENDERER_CORE
    # BLINK_RENDERER_PLATFORM
    ${CC_LIB}
    BASE_CC
    DEBUG_CC
    PAINT_CC
    ${ANIMATION_CC_LIB}
    GPU_COMMAND_BUFFER
    GFX_CODEC
    GFX_GEOMETRY
    GFX_GEOMETRY_SKIA
    GFX_COLOR_SPACE
    GFX_SWITCHES
    GFX_RANGE
    SKIA_EXT
    UI_GFX
    ${BLINK_PUBLIC_COMMON_LIB}
    ${COMPONENTS_VIZ_CLIENT_LIB}
    ${COMPONENTS_VIZ_COMMON_LIB}
    #G_GPU
    ## LIB_V8_INTERFACE
    ${MOJO_LIB}
    ${UI_COMPOSITOR_LIB}
    ${UI_DISPLAY_LIB}
    ${UI_NATIVE_THEME_LIB}
    ${UI_VIEWS_LIB}
  )
  list(APPEND BLINK_LIBS
    ${BLINK_GFX_LIBS}
    COMPONENTS_SCHEDULING_METRICS
  )
  list(APPEND BLINK_LIBS
    base
    #ced
    ${GCRYPTO_LIB}
    GURL
  )
  if(NOT TARGET_EMSCRIPTEN)
    if(TARGET_LINUX)
        list(APPEND BLINK_LIBS
          # tcmalloc only for posix/linux/e.t.c.
          ${tcmalloc_LIB}
          # libevent only for posix/linux/e.t.c.
          ${libevent_LIB}
        )
    elseif(TARGET_WINDOWS)
      # skip
    else()
      message(FATAL_ERROR "platform not supported")
    endif()
  endif(NOT TARGET_EMSCRIPTEN)
  if(ENABLE_GNET)
    set(SERVICES_SERVICE_MANAGER_PUBLIC_CPP_LIB
        SERVICES_SERVICE_MANAGER_PUBLIC_CPP
    )
    set(SERVICES_NETWORK_PUBLIC_CPP_LIB
        SERVICES_NETWORK_PUBLIC_CPP
    )
    list(APPEND BLINK_LIBS
      COMPONENTS_CONTENT_SETTINGS_CORE_COMMON
      ${SERVICES_NETWORK_PUBLIC_CPP_LIB}
      ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_LIB}
    )
  endif(ENABLE_GNET)
endif(ENABLE_BLINK)

if(TARGET_EMSCRIPTEN)
  set(ENABLE_UKM FALSE) # keep wasm build as small as possible
elseif(TARGET_LINUX OR TARGET_WINDOWS)
  set(ENABLE_UKM FALSE) # TODO: UKM NOT SUPPORTED FOR NOW
else()
  message(FATAL_ERROR "platform not supported")
endif()
if(ENABLE_UKM)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_UKM=1")
endif(ENABLE_UKM)

if(ENABLE_BLINK)
  # TODO: keep wasm build as small as possible
  set(ENABLE_GIPC FALSE)
else()
  set(ENABLE_GIPC FALSE)
endif()
if(ENABLE_GIPC)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_GIPC=1")
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_MOJO_IPC=1") # TODO
  set(GIPC_LIB GIPC)
endif(ENABLE_GIPC)


set(USE_LIBJPEG FALSE) # NOTE: always FALSE
if(USE_LIBJPEG)
  set(GLIBJPEG_DIR
    ${CHROMIUM_DIR}third_party/libjpeg/
  )
  #
  set(SUPPORTS_JPEG TRUE)
  #
  set(COMMON_FLAGS "${COMMON_FLAGS} -DHAS_LIBJPEG=1")
  # see ui/gfx/codec/jpeg_codec.cc
  set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_LIBJPEG=1")
  #
  set(USE_CUSTOM_LIBJPEG TRUE)
  if(USE_CUSTOM_LIBJPEG)
    set(USE_EMCC_LIBJPEG_PORT FALSE)
  else(USE_CUSTOM_LIBJPEG)
    set(USE_EMCC_LIBJPEG_PORT TRUE) # TODO
    if(TARGET_EMSCRIPTEN)
      message(FATAL_ERROR "wasm: only custom LIBJPEG is supported for now")
    endif(TARGET_EMSCRIPTEN)
  endif(USE_CUSTOM_LIBJPEG)
  #
  if(TARGET_EMSCRIPTEN)
    set(libjpeg_LIB GLIBJPEG)
  elseif(TARGET_LINUX)
    set(libjpeg_LIB GLIBJPEG)
  elseif(TARGET_WINDOWS)
    set(libjpeg_LIB GLIBJPEG)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif(USE_LIBJPEG)

#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT USE_LIBJPEG_TURBO)
#  message(WARNING "AUTO ENABLED LIBJPEG_TURBO")
#  set(USE_LIBJPEG_TURBO TRUE)
#endif()
if(USE_LIBJPEG_TURBO)
  #
  set(GLIBJPEG_TURBO_DIR
    ${CHROMIUM_DIR}third_party/libjpeg_turbo/
  )
  #
  set(SUPPORTS_JPEG TRUE)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DHAS_LIBJPEG_TURBO=1")
  # see ui/gfx/codec/jpeg_codec.cc
  set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_LIBJPEG_TURBO=1")
  #
  set(USE_CUSTOM_LIBJPEG_TURBO TRUE)
  if(USE_CUSTOM_LIBJPEG_TURBO)
    set(USE_EMCC_LIBJPEG_PORT FALSE)
  else(USE_CUSTOM_LIBJPEG_TURBO)
    set(USE_EMCC_LIBJPEG_TURBO_PORT TRUE) # TODO
    if(TARGET_EMSCRIPTEN)
      message(FATAL_ERROR "wasm: only custom LIBJPEG_TURBO is supported for now")
    endif(TARGET_EMSCRIPTEN)
  endif(USE_CUSTOM_LIBJPEG_TURBO)
  #
  if(TARGET_EMSCRIPTEN)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  elseif(TARGET_LINUX)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  elseif(TARGET_WINDOWS)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif(USE_LIBJPEG_TURBO)


if(ENABLE_COBALT)
  set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_COBALT=1")
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DCOBALT=1") # see htmlEmitImpliedRootLevelParagraph
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DSTARBOARD=1")
  set(COMMON_FLAGS "${COMMON_FLAGS} -DCOBALT_FORCE_SOFTWARE_RASTERIZER=1")
  # see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/client_porting/poem/strings_poem.h
  list(APPEND STARBOARD_EXTRA_PUBLIC_FLAGS POEM_NO_EMULATION=1)
  set(COBALT_ROOT_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/)
  set(COBALT_ROOT_DIR ${COBALT_ROOT_PARENT_DIR}cobalt/)
  set(COBALT_PORT_DIR ${COBALT_ROOT_DIR}port/)
  set(COBALT_CORE_PARENT_DIR ${COBALT_ROOT_DIR}src/)
  set(COBALT_CORE_DIR ${COBALT_CORE_PARENT_DIR}cobalt/)
  set(COBALT_GEN_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/src/cobalt/gen/ # to ./cobalt
  )
  set(COBALT_GEN_CSS_PARSER_PARENT_DIR
    ${COBALT_GEN_DIR}cobalt/ # to css_parser/grammar_impl_generated.h
  )
  set(COBALT_GEN_DOM_PARSER_PARENT_DIR
    ${COBALT_GEN_DIR}cobalt/
  )
  if(TARGET_EMSCRIPTEN)
    set(COBALT_OS_DEFINE COBALT_LINUX=1)
  elseif(TARGET_LINUX)
    set(COBALT_OS_DEFINE COBALT_LINUX=1)
  elseif(TARGET_WINDOWS)
    set(COBALT_OS_DEFINE COBALT_WINDOWS=1)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
  if(TARGET_WINDOWS)
    list(APPEND EXTRA_STARBOARD_DEFINES
      STARBOARD_ATOMIC_INCLUDE="${COBALT_ROOT_DIR}port/win/x64x11/atomic_public.h" # TODO: TARGET_WINDOWS
      STARBOARD_THREAD_TYPES_INCLUDE="${COBALT_ROOT_DIR}port/win/x64x11/thread_types_public.h" # TODO: TARGET_WINDOWS
      STARBOARD_CONFIGURATION_INCLUDE="${COBALT_ROOT_DIR}port/win/x64x11/configuration_public.h" # TODO: TARGET_WINDOWS
    )
  elseif(TARGET_LINUX OR TARGET_EMSCRIPTEN)
    list(APPEND EXTRA_STARBOARD_DEFINES
      STARBOARD_ATOMIC_INCLUDE="${COBALT_ROOT_DIR}port/linux/x64x11/atomic_public.h" # TODO: TARGET_WINDOWS
      STARBOARD_THREAD_TYPES_INCLUDE="${COBALT_ROOT_DIR}port/linux/x64x11/thread_types_public.h" # TODO: TARGET_WINDOWS
      STARBOARD_CONFIGURATION_INCLUDE="${COBALT_ROOT_DIR}port/linux/x64x11/configuration_public.h" # TODO: TARGET_WINDOWS
    )
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
  list(APPEND COBALT_COMMON_DEFINES
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
  #message(FATAL_ERROR ${COBALT_CORE_PARENT_DIR}cobalt/base/circular_buffer_shell.h)
  set(COBALT_COMMON_INCLUDES
    ${COBALT_GEN_DIR}
    ${COBALT_GEN_DIR}bindings/browser/source # to cobalt/dom/event_init.h
    ${COBALT_ROOT_DIR}gen # to ./cobalt
    ${CHROMIUM_DIR}src # to ./base/containers/
    ${COBALT_ROOT_DIR}port # to ./starboard/
    ${CHROMIUM_DIR} # to ./base/
    ${COBALT_ROOT_DIR} # to ./port/
    ${COBALT_CORE_PARENT_DIR} # to ./cobalt
  )
  set(COBALT_LIBRARY_NAME COBALT_CORE)
  #
  set(COBALT_BASE_LIB cobalt_base)
  set(COBALT_NANOBASE_LIB cobalt_nanobase)
  set(COBALT_SCRIPT_LIB cobalt_script)
  set(COBALT_SYSTEM_WINDOW_LIB cobalt_system_window)
  set(COBALT_V8_STUB_LIB v8_stub)
  set(COBALT_DOM_EXCEPTION_LIB cobalt_dom_exception)
  set(COBALT_UI_NAVIGATION_LIB cobalt_ui_navigation)
  set(COBALT_MATH_LIB cobalt_math)
  #
  if(NOT ENABLE_COBALT_STORAGE)
    list(APPEND COBALT_COMMON_DEFINES
      DISABLE_COBALT_STORAGE=1
      # ENABLE_COBALT_STORAGE
    )
  endif(NOT ENABLE_COBALT_STORAGE)
  #
  if(NOT ENABLE_COBALT_CAMERA3D)
    list(APPEND COBALT_COMMON_DEFINES
      DISABLE_COBALT_CAMERA3D=1
    )
  endif(NOT ENABLE_COBALT_CAMERA3D)
  #
  if(ENABLE_COBALT_MEDIA)
    set(COBALT_MEDIA_LIB cobalt_media)
    #set(COBALT_MEDIA_LIB GMEDIA)
  else()
    list(APPEND COBALT_COMMON_DEFINES
      #ENABLE_MEDIA
      DISABLE_COBALT_MEDIA=1
      DISABLE_COBALT_MEDIA_CAPTURE=1
      DISABLE_COBALT_MEDIA_SESSION=1
    )
  endif(ENABLE_COBALT_MEDIA)
  #
  if(NOT ENABLE_FONTCONFIG)
    list(APPEND COBALT_COMMON_DEFINES
      DISABLE_COBALT_FONTCONFIG=1
    )
  endif(NOT ENABLE_FONTCONFIG)
  #
  set(COBALT_PAGE_VISIBILITY_LIB cobalt_page_visibility)
  set(COBALT_CSSOM_LIB cobalt_cssom)
  set(COBALT_WEB_ANIMATIONS_LIB cobalt_web_animations)
  set(COBALT_DOM_LIB cobalt_dom)
  set(COBALT_OVERLAY_INFO_LIB cobalt_overlay_info)
  set(COBALT_INPUT_LIB cobalt_input)
  set(COBALT_LAYOUT_LIB cobalt_layout)
  if(ENABLE_GLIBXML AND ENABLE_COBALT_DOM_PARSER)
    set(COBALT_DOM_PARSER_LIB cobalt_dom_parser)
  else()
    list(APPEND COBALT_COMMON_DEFINES
      DISABLE_COBALT_DOM_PARSER=1
    )
  endif(ENABLE_GLIBXML AND ENABLE_COBALT_DOM_PARSER)
  set(COBALT_CSS_PARSER_LIB cobalt_css_parser)
  set(ENABLE_COBALT_GLIMP FALSE)
  if(ENABLE_COBALT_GLIMP)
    set(COBALT_GLIMP_LIB cobalt_glimp)
    list(APPEND APP_DEFINITIONS ENABLE_COBALT_GLIMP=1)
  endif(ENABLE_COBALT_GLIMP)
  #
  set(ENABLE_COBALT_RENDERER TRUE)
  if(ENABLE_COBALT_RENDERER)
    list(APPEND APP_DEFINITIONS ENABLE_COBALT_RENDERER=1)
    set(ENABLE_COBALT_RENDERER_STUB TRUE)
    if(ENABLE_COBALT_RENDERER_STUB)
      set(COBALT_RENDERER_LIB cobalt_renderer_stub)
      set(COBALT_RENDERER_LIB_FILE_NAME cobalt_renderer_stub)
    else(ENABLE_COBALT_RENDERER_STUB)
      set(COBALT_RENDERER_LIB cobalt_renderer)
      set(COBALT_RENDERER_LIB_FILE_NAME cobalt_renderer)
    endif(ENABLE_COBALT_RENDERER_STUB)
  endif(ENABLE_COBALT_RENDERER)
  #
  set(STARBOARD_PLATFORM_LIB starboard_platform)
  set(STARBOARD_ICU_INIT_LIB starboard_icu_init)
  set(STARBOARD_EZTIME_LIB starboard_eztime)
  set(STARBOARD_COMMON_LIB starboard_common)
  #
  set(ENABLE_COBALT_RENDER_TREE TRUE)
  if(ENABLE_COBALT_RENDER_TREE)
    set(COBALT_RENDER_TREE_LIB cobalt_render_tree)
    #set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_COBALT_RENDER_TREE=1") # TODO
    list(APPEND COBALT_LIBS
      ${COBALT_RENDER_TREE_LIB}
    )
  endif(ENABLE_COBALT_RENDER_TREE)
  #
  list(APPEND COBALT_LIBS
    ${STARBOARD_PLATFORM_LIB}
    ${STARBOARD_ICU_INIT_LIB}
    ${STARBOARD_EZTIME_LIB}
    ${STARBOARD_COMMON_LIB}
    #
    ${COBALT_BASE_LIB}
    ${COBALT_NANOBASE_LIB}
    ${COBALT_SYSTEM_WINDOW_LIB}
    ${COBALT_SCRIPT_LIB}
    ${COBALT_V8_STUB_LIB}
    ${COBALT_DOM_EXCEPTION_LIB}
    ${COBALT_V8_STUB_LIB}
    ${COBALT_DOM_EXCEPTION_LIB}
    ${COBALT_UI_NAVIGATION_LIB}
    ${COBALT_MATH_LIB}
    ${COBALT_MEDIA_LIB}
    ${COBALT_PAGE_VISIBILITY_LIB}
    ${COBALT_CSSOM_LIB}
    ${COBALT_WEB_ANIMATIONS_LIB}
    ${COBALT_DOM_LIB}
    ${COBALT_INPUT_LIB}
    ${COBALT_LAYOUT_LIB}
    ${COBALT_DOM_PARSER_LIB}
    ${COBALT_OVERLAY_INFO_LIB}
    ${COBALT_CSS_PARSER_LIB}
    ${COBALT_GLIMP_LIB}
    ${COBALT_RENDERER_LIB}
  )

  #if(ENABLE_GNET)
  set(COBALT_LOADER_LIB_NAME
    cobalt_loader
  )
  list(APPEND COBALT_LIBS
    ${COBALT_LOADER_LIB_NAME}
  )
  #endif()

  #cobalt_csp
  if(TARGET_EMSCRIPTEN)
    set(ENABLE_COBALT_CSP FALSE)
  elseif(TARGET_WINDOWS)
    set(ENABLE_COBALT_CSP FALSE)#TRUE) # TODO
  elseif(TARGET_LINUX)
    set(ENABLE_COBALT_CSP FALSE)#TRUE) # TODO
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
  if(ENABLE_COBALT_CSP)
    set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_COBALT_CSP=1")
    set(COBALT_CSP_LIB_NAME
      cobalt_csp
    )
    list(APPEND COBALT_LIBS
      ${COBALT_CSP_LIB_NAME}
    )
  endif(ENABLE_COBALT_CSP)
endif(ENABLE_COBALT)

# custom debug logger for wasm
set(PORT_OWN_DLOG TRUE)
if (PORT_OWN_DLOG)
  if (EMSCRIPTEN)
    set(EMCC_COMMON "${EMCC_COMMON} -DPORT_OWN_DLOG=1")
  elseif(TARGET_LINUX)
    set(COMMON_FLAGS "${COMMON_FLAGS} -DPORT_OWN_DLOG=1")
  elseif(TARGET_WINDOWS)
    set(COMMON_FLAGS "${COMMON_FLAGS} -DPORT_OWN_DLOG=1")
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif(PORT_OWN_DLOG)

# NOTE: Place after all skia libs
if (ENABLE_SKIA)
  set(SKIA_LIB
    SKIA
  )
  set(SKIA_LIBS
    SKIA
    ${sksg_LIB}
    ${skshaper_LIB}
    #particles
    ${skottie_LIB}
    ${WUFFS_LIB_NAME}
    #jpeg # TODO
    #pathkit
  )
endif(ENABLE_SKIA)

if(ENABLE_COBALT)
  list(APPEND COBALT_LIBS
    base
    #ced
    ${GCRYPTO_LIB}
    GURL
  )
endif(ENABLE_COBALT)

# custom flags
if((ENABLE_WTF OR ENABLE_COBALT OR ENABLE_BLINK) AND NOT ENABLE_BASE)
  message(FATAL_ERROR "BLINK/COBALT/WTF requires BASE")
endif()



## re2
set(ENABLE_GRE2 FALSE)
#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT ENABLE_GRE2)
#  message(WARNING "AUTO ENABLED GRE2")
#  set(ENABLE_GRE2 TRUE)
#endif()
if(ENABLE_GRE2)
  set(GRE2_PARENT_DIR ${CHROMIUM_DIR}third_party/)
  set(GRE2_DIR ${GRE2_PARENT_DIR}re2/)
  set(GRE2_LIB GRE2)
  #include(${CHROMIUM_DIR}GRE2.cmake)
else()
  set(DISABLE_GRE2_DEFINE DISABLE_GRE2=1)
endif(ENABLE_GRE2)#

## libxml
#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT ENABLE_GLIBXML)
#  message(WARNING "AUTO ENABLED GLIBXML")
#  set(ENABLE_GLIBXML TRUE)
#endif()
#set(ENABLE_GLIBXML TRUE)
if(ENABLE_GLIBXML)
  if(NOT USE_ICU)
    message(FATAL_ERROR "GLIBXML requires ICU")
  endif(NOT USE_ICU)
  #
  set(GLIBXML_PARENT_DIR
    ${CHROMIUM_DIR}/third_party/
  )
  set(GLIBXML_DIR
    ${GLIBXML_PARENT_DIR}libxml/
  )
  #include(${CHROMIUM_DIR}GLIBXML.cmake)
  set(GLIBXML_LIB
    GLIBXML
  )
else()
  list(APPEND COBALT_COMMON_DEFINES LIBXML_DISABLED=1)
endif(ENABLE_GLIBXML)

if (USE_LIBPNG AND USE_CUSTOM_LIBPNG)
  # GLIBPNG
  #include(${CHROMIUM_DIR}GLIBPNG.cmake)
endif()

if(USE_LIBJPEG AND USE_CUSTOM_LIBJPEG)
  message(FATAL_ERROR "GLIBJPEG not supported yet")
  # libjpeg: requires LIBXML
  #include(${CHROMIUM_DIR}GLIBJPEG.cmake)
endif(USE_LIBJPEG AND USE_CUSTOM_LIBJPEG)

if(USE_LIBJPEG_TURBO AND USE_CUSTOM_LIBJPEG_TURBO)
  # GLIBJPEG_TURBO: requires LIBJPEG
  #include(${CHROMIUM_DIR}GLIBJPEG_TURBO.cmake)
else()
  if(ENABLE_COBALT OR ENABLE_BLINK)
    message(FATAL_ERROR "GLIBJPEG_TURBO must be active")
  endif()
endif(USE_LIBJPEG_TURBO AND USE_CUSTOM_LIBJPEG_TURBO)

#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT ENABLE_LIBYUV)
#  message(WARNING "AUTO ENABLED LIBYUV")
#  set(ENABLE_LIBYUV TRUE)
#endif()
if(ENABLE_LIBYUV)
  set(libyuv_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/${CHROMIUM_DIR}third_party/)
  set(libyuv_DIR ${libyuv_PARENT_DIR}libyuv/)
  # libyuv: requires LIBJPEG
  #include(${CHROMIUM_DIR}libyuv.cmake)
endif(ENABLE_LIBYUV)

#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT ENABLE_ICCJPEG)
#  message(WARNING "AUTO ENABLED ICCJPEG")
#  set(ENABLE_ICCJPEG TRUE)
#endif()
if(ENABLE_ICCJPEG)
  # iccjpeg: requires LIBJPEG
  #include(${CHROMIUM_DIR}iccjpeg.cmake)
endif(ENABLE_ICCJPEG)

# libwebp: requires libpng, zlib
#if((ENABLE_BLINK OR ENABLE_COBALT) AND NOT ENABLE_LIBWEBP)
#  message(WARNING "AUTO ENABLED LIBWEBP")
#  set(ENABLE_LIBWEBP TRUE)
#endif()
if(ENABLE_LIBWEBP)
  #include(${CHROMIUM_DIR}libwebp.cmake)
  set(WEBP_LIB libwebp)
  list(APPEND APP_DEFINITIONS ENABLE_LIBWEBP=1)
  list(APPEND COBALT_COMMON_DEFINES ENABLE_LIBWEBP=1)
else()
  list(APPEND COBALT_COMMON_DEFINES LIBWEBP_DISABLED=1)
endif(ENABLE_LIBWEBP)
