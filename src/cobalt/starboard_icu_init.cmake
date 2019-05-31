cmake_minimum_required(VERSION 2.8)

#'dependencies': [
# '<(DEPTH)/starboard/starboard_headers_only.gyp:starboard_headers_only',
# '<(DEPTH)/third_party/icu/icu.gyp:icui18n',
# '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#],
set(starboard_icu_init_SOURCES
  ${COBALT_PORT_DIR}/starboard/client_porting/icu_init/icu_init.cc
  ${COBALT_PORT_DIR}/starboard/client_porting/icu_init/icu_init.h
)

add_library(starboard_icu_init STATIC
  ${starboard_icu_init_SOURCES}
)

target_link_libraries(starboard_icu_init PUBLIC
  #starboard_common
  #starboard_icu_init
  #starboard_core
  modp_b64
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  #base
  #SKIA
  dynamic_annotations
  #UI_GFX
  ##BLINK_RENDERER_CORE
  #BLINK_PUBLIC_COMMON
  #BLINK_PUBLIC_MOJOM
  ##BLINK_RENDERER_NETWORK
  #BLINK_RENDERER_PLATFORM
  #GURL
  #GNET
  #GCRYPTO
  #GFX_GEOMETRY
  #UI_GFX
  ## mojo
  ## services/service_manager
  ## services/ws/public/cpp/gpu
  ##${BASE_LIBRARIES}
  #base
  #GLIBXML
  #SKIA
  ##skcms
  #ced
  ## emoji-segmenter
  ## webrtc
  ## zlib
  icu
  ced
  glm
  #CC
  ##G_GPU
  #ANIMATION_CC
  #BASE_CC
  #PAINT_CC
  #SERVICES_NETWORK_PUBLIC_CPP
  #libwebp # requires libpng
  #${libjpeg_LIB}
  #${libjpeg_TURBO_LIB}
  #${libpng_LIB}
  #${iccjpeg_LIB}
  #MOJO
  ##
  ## khronos
  #${khronos_LIB}
  #LIB_V8_INTERFACE
  #COMPONENTS_SCHEDULING_METRICS
  #${HARFBUZZ_LIBRARIES}
  #GMEDIA
  #GZLIB_EXT
  #SERVICES_SERVICE_MANAGER_PUBLIC_CPP
  #GFX_CODEC
)

set_property(TARGET starboard_icu_init PROPERTY CXX_STANDARD 17)

target_include_directories(starboard_icu_init PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_icu_init PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)
