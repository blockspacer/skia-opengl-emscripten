cmake_minimum_required(VERSION 2.8)

# loader/origin.gyp
# no deps
# includes
# * "base/optional.h"
# * "url/gurl.h"
set(cobalt_loader_origin_SOURCES
  ${COBALT_CORE_DIR}loader/origin.cc
  ${COBALT_CORE_DIR}loader/origin.h
)

# cobalt/loader/loader.gyp
# 'includes': [
#   '<(DEPTH)/cobalt/renderer/renderer_parameters_setup.gypi',
# ],
# 'dependencies': [
#   '<(DEPTH)/cobalt/base/base.gyp:base',
#   '<(DEPTH)/cobalt/csp/csp.gyp:csp',
#   '<(DEPTH)/cobalt/loader/origin.gyp:origin',
#   '<(DEPTH)/cobalt/network/network.gyp:network',
#   '<(DEPTH)/cobalt/render_tree/render_tree.gyp:render_tree',
#   '<(DEPTH)/cobalt/renderer/test/jpeg_utils/jpeg_utils.gyp:jpeg_utils',
#   '<(DEPTH)/cobalt/renderer/test/png_utils/png_utils.gyp:png_utils',
#   '<(DEPTH)/url/url.gyp:url',
#   '<(DEPTH)/third_party/libjpeg/libjpeg.gyp:libjpeg',
#   '<(DEPTH)/third_party/libpng/libpng.gyp:libpng',
#   '<(DEPTH)/third_party/libwebp/libwebp.gyp:libwebp',
#   'embed_resources_as_header_files',
# ],
# 'conditions': [
#   ['enable_about_scheme == 1', {
#     'defines': [ 'ENABLE_ABOUT_SCHEME' ],
#     'sources': [
#       'about_fetcher.cc',
#       'about_fetcher.h',
#     ]
#   }],
#   ['enable_xhr_header_filtering == 1', {
#     'dependencies': [
#       '<@(cobalt_platform_dependencies)',
#     ],
#     'defines': [
#       'COBALT_ENABLE_XHR_HEADER_FILTERING',
#     ],
#     'direct_dependent_settings': {
#       'defines': [
#         'COBALT_ENABLE_XHR_HEADER_FILTERING',
#       ],
#
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/csp/csp.gyp:csp',
#  '<(DEPTH)/cobalt/loader/origin.gyp:origin',
#  '<(DEPTH)/cobalt/network/network.gyp:network',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:render_tree',
#  '<(DEPTH)/cobalt/renderer/test/jpeg_utils/jpeg_utils.gyp:jpeg_utils',
#  '<(DEPTH)/cobalt/renderer/test/png_utils/png_utils.gyp:png_utils',
#  '<(DEPTH)/url/url.gyp:url',
#  '<(DEPTH)/third_party/libjpeg/libjpeg.gyp:libjpeg',
#  '<(DEPTH)/third_party/libpng/libpng.gyp:libpng',
#  '<(DEPTH)/third_party/libwebp/libwebp.gyp:libwebp',
#  'embed_resources_as_header_files',
#],
set(cobalt_loader_SOURCES
  ${COBALT_CORE_DIR}loader/blob_fetcher.cc
  ${COBALT_CORE_DIR}loader/blob_fetcher.h
  ${COBALT_CORE_DIR}loader/cobalt_url_fetcher_string_writer.cc
  ${COBALT_CORE_DIR}loader/cobalt_url_fetcher_string_writer.h
  ${COBALT_CORE_DIR}loader/cache_fetcher.cc
  ${COBALT_CORE_DIR}loader/cache_fetcher.h
  ${COBALT_CORE_DIR}loader/cors_preflight.cc
  ${COBALT_CORE_DIR}loader/cors_preflight.h
  ${COBALT_CORE_DIR}loader/cors_preflight_cache.cc
  ${COBALT_CORE_DIR}loader/cors_preflight_cache.h
  ${COBALT_CORE_DIR}loader/decoder.h
  ${COBALT_CORE_DIR}loader/embedded_fetcher.cc
  ${COBALT_CORE_DIR}loader/embedded_fetcher.h
  ${COBALT_CORE_DIR}loader/error_fetcher.cc
  ${COBALT_CORE_DIR}loader/error_fetcher.h
  ${COBALT_CORE_DIR}loader/fetcher_factory.cc
  ${COBALT_CORE_DIR}loader/fetcher_factory.h
  ${COBALT_CORE_DIR}loader/fetcher.cc
  ${COBALT_CORE_DIR}loader/fetcher.h
  ${COBALT_CORE_DIR}loader/file_fetcher.cc
  ${COBALT_CORE_DIR}loader/file_fetcher.h
  ${COBALT_CORE_DIR}loader/font/remote_typeface_cache.h
  ${COBALT_CORE_DIR}loader/font/typeface_decoder.cc
  ${COBALT_CORE_DIR}loader/font/typeface_decoder.h
  ${COBALT_CORE_DIR}loader/image/animated_image_tracker.cc
  ${COBALT_CORE_DIR}loader/image/animated_image_tracker.h
  ${COBALT_CORE_DIR}loader/image/animated_webp_image.cc
  ${COBALT_CORE_DIR}loader/image/animated_webp_image.h
  ${COBALT_CORE_DIR}loader/image/dummy_gif_image_decoder.cc
  ${COBALT_CORE_DIR}loader/image/dummy_gif_image_decoder.h
  ${COBALT_CORE_DIR}loader/image/image_cache.h
  ${COBALT_CORE_DIR}loader/image/image_data_decoder.cc
  ${COBALT_CORE_DIR}loader/image/image_data_decoder.h
  ${COBALT_CORE_DIR}loader/image/image_decoder_starboard.cc
  ${COBALT_CORE_DIR}loader/image/image_decoder_starboard.h
  ${COBALT_CORE_DIR}loader/image/image_decoder.cc
  ${COBALT_CORE_DIR}loader/image/image_decoder.h
  ${COBALT_CORE_DIR}loader/image/image_encoder.cc
  ${COBALT_CORE_DIR}loader/image/image_encoder.h
  ${COBALT_CORE_DIR}loader/image/image.h
  ${COBALT_CORE_DIR}loader/image/jpeg_image_decoder.cc
  ${COBALT_CORE_DIR}loader/image/jpeg_image_decoder.h
  ## TODO ## forward declaration of 'png_struct_def'
  #${COBALT_CORE_DIR}loader/image/png_image_decoder.cc
  #${COBALT_CORE_DIR}loader/image/png_image_decoder.h
  ${COBALT_CORE_DIR}loader/image/stub_image_decoder.h
  ${COBALT_CORE_DIR}loader/image/threaded_image_decoder_proxy.cc
  ${COBALT_CORE_DIR}loader/image/threaded_image_decoder_proxy.h
  ${COBALT_CORE_DIR}loader/image/webp_image_decoder.cc
  ${COBALT_CORE_DIR}loader/image/webp_image_decoder.h
  ${COBALT_CORE_DIR}loader/loader_factory.cc
  ${COBALT_CORE_DIR}loader/loader_factory.h
  ${COBALT_CORE_DIR}loader/loader_types.h
  ${COBALT_CORE_DIR}loader/loader.cc
  #/home/avakimov_am/skia-opengl-emscripten/src/cobalt/src/cobalt/loader/loader.cc
  ${COBALT_CORE_DIR}loader/loader.h
  ${COBALT_CORE_DIR}loader/mesh/mesh_cache.h
  ${COBALT_CORE_DIR}loader/mesh/mesh_decoder.cc
  ${COBALT_CORE_DIR}loader/mesh/mesh_decoder.h
  ${COBALT_CORE_DIR}loader/mesh/mesh_projection.h
  ${COBALT_CORE_DIR}loader/mesh/projection_codec/constants.h
  ${COBALT_CORE_DIR}loader/mesh/projection_codec/indexed_vert.cc
  ${COBALT_CORE_DIR}loader/mesh/projection_codec/indexed_vert.h
  ${COBALT_CORE_DIR}loader/mesh/projection_codec/projection_decoder.cc
  ${COBALT_CORE_DIR}loader/mesh/projection_codec/projection_decoder.h
  ${COBALT_CORE_DIR}loader/net_fetcher.cc
  ${COBALT_CORE_DIR}loader/net_fetcher.h
  ${COBALT_CORE_DIR}loader/resource_cache.h
  ${COBALT_CORE_DIR}loader/switches.cc
  ${COBALT_CORE_DIR}loader/switches.h
  ${COBALT_CORE_DIR}loader/sync_loader.cc
  ${COBALT_CORE_DIR}loader/sync_loader.h
  ${COBALT_CORE_DIR}loader/text_decoder.h
)

add_library(cobalt_loader STATIC
  ${cobalt_loader_SOURCES}
  ${cobalt_loader_origin_SOURCES}
)

target_link_libraries(cobalt_loader PUBLIC
  cobalt_base
  #cobalt_nanobase
  #cobalt_script
  cobalt_csp
  base # TODO
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
  GURL
  GNET
  #GCRYPTO
  #GFX_GEOMETRY
  #UI_GFX
  ## mojo
  ## services/service_manager
  ## services/ws/public/cpp/gpu
  ##${BASE_LIBRARIES}
  GLIBXML
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
  libwebp # requires libpng
  ${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
  ${libpng_LIB}
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

set_property(TARGET cobalt_loader PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_loader PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_loader PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  # cobalt/loader/loader.gyp
  #
  #ENABLE_ABOUT_SCHEME=1
  #COBALT_ENABLE_XHR_HEADER_FILTERING=1
  #COBALT_ENABLE_XHR_HEADER_FILTERING=1
  #
  ${COBALT_COMMON_DEFINES}
)
