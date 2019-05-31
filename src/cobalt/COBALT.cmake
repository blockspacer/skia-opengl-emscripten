cmake_minimum_required(VERSION 2.8)

# cobalt/system_window/system_window.gyp
# cobalt/storage/store_upgrade/upgrade_tool.gyp
# cobalt/storage/store_upgrade/upgrade.gyp
# cobalt/storage/store/store.gyp
# cobalt/storage/storage_constants.gyp
# cobalt/storage/storage.gyp

# cobalt/content/fonts/fonts.gyp

# cobalt/debug/remote/devtools/inspector_protocol/inspector_protocol.gyp
# cobalt/debug/remote/devtools/devtools.gyp
# cobalt/debug/debug.gyp
# cobalt/renderer/rasterizer/common/common.gyp
# cobalt/renderer/rasterizer/lib/lib.gyp
# cobalt/renderer/rasterizer/blitter/rasterizer.gyp

# cobalt/renderer/rasterizer/skia/skia/skia_library_opts.gyp
# cobalt/renderer/rasterizer/skia/skia/skia.gyp
# skia_cobalt.gypi
# TODO: uses outdated skia ver!
set(COBALT_skia_cobalt_SOURCES
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/config/SkUserConfig.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkNV122RGBShader.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkNV122RGBShader.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkYUV2RGBShader.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkYUV2RGBShader.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/google_logging.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt_factory.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.h
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.cc
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.h
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.cc
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkStream_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkStream_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTLS_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTime_cobalt.cc
)

# cobalt/renderer/rasterizer/skia/common.gyp
#'dependencies': [
#  '<(DEPTH)/base/base.gyp:base',
#  '<(DEPTH)/cobalt/renderer/rasterizer/skia/skia/skia.gyp:skia',
#  '<(DEPTH)/third_party/harfbuzz-ng/harfbuzz.gyp:harfbuzz-ng',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#  '<(DEPTH)/third_party/ots/ots.gyp:ots',
#],
set(COBALT_skia_common_SOURCES
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/cobalt_skia_type_conversions.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/cobalt_skia_type_conversions.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/font.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/font.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/glyph_buffer.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/glyph_buffer.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/harfbuzz_font.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/harfbuzz_font.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/image.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/image.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/render_tree_node_visitor.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/render_tree_node_visitor.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/scratch_surface_cache.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/scratch_surface_cache.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/text_shaper.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/text_shaper.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/typeface.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/typeface.h
)

# cobalt/renderer/rasterizer/skia/software_rasterizer.gyp
# cobalt/renderer/rasterizer/skia/rasterizer.gyp


# cobalt/renderer/rasterizer/rasterizer.gyp
# cobalt/renderer/rasterizer/egl/shaders/shaders.gyp
# cobalt/renderer/rasterizer/egl/rasterizer.gyp
# cobalt/renderer/rasterizer/stub/rasterizer.gyp
# cobalt/renderer/test/png_utils/png_utils.gyp
# cobalt/renderer/test/jpeg_utils/jpeg_utils.gyp
# cobalt/renderer/test/scenes/scenes.gyp
# cobalt/renderer/backend/backend.gyp
# cobalt/renderer/backend/starboard/platform_backend.gyp
# cobalt/renderer/renderer.gyp
# cobalt/renderer/default_options_starboard.gyp
# cobalt/renderer/sandbox/sandbox.gyp
# cobalt/webdriver/webdriver_test.gyp
# cobalt/webdriver/webdriver.gyp
# cobalt/page_visibility/page_visibility.gyp
# cobalt/network/network.gyp
# cobalt/sso/sso.gyp
# cobalt/speech/speech.gyp
# cobalt/speech/sandbox/sandbox.gyp
# cobalt/build/all.gyp
# cobalt/build/cobalt_build_id.gyp
# cobalt/layout/layout.gyp
# cobalt/test/test.gyp
# cobalt/base/base.gyp
# cobalt/trace_event/trace_event.gyp
# cobalt/script/v8c/v8c.gyp
# cobalt/script/script.gyp
# cobalt/script/mozjs-45/mozjs-45.gyp
# cobalt/script/engine.gyp
# cobalt/h5vcc/h5vcc.gyp
# cobalt/input/input.gyp
# cobalt/ui_navigation/ui_navigation.gyp
# cobalt/math/math.gyp
# cobalt/csp/csp.gyp
# cobalt/overlay_info/overlay_info.gyp
# cobalt/media/media.gyp
# cobalt/media/sandbox/sandbox.gyp
# cobalt/media_session/media_session.gyp
# cobalt/media_session/media_session_test.gyp
# cobalt/render_tree/render_tree.gyp
# cobalt/dom_parser/dom_parser_test.gyp
# cobalt/browser/browser_bindings.gyp
# cobalt/browser/null_webapi_extension.gyp
# cobalt/browser/browser.gyp
# cobalt/browser/cobalt.gyp
# cobalt/browser/browser_bindings_gen.gyp
# cobalt/websocket/websocket.gyp
# cobalt/demos/demos.gyp
# cobalt/accessibility/accessibility_test.gyp
# cobalt/accessibility/accessibility.gyp
# cobalt/media_stream/media_stream_test.gyp
# cobalt/media_stream/media_stream.gyp
# cobalt/bindings/testing/testing.gyp
# cobalt/audio/audio_test.gyp
# cobalt/audio/audio.gyp
# cobalt/fetch/fetch.gyp
# cobalt/cssom/cssom.gyp
# cobalt/cssom/cssom_test.gyp
# cobalt/samples/simple_example/simple_example.gyp
# cobalt/media_capture/media_capture_test.gyp
# cobalt/media_capture/media_capture.gyp
# cobalt/web_animations/web_animations.gyp
# cobalt/network_bridge/network_bridge.gyp
# cobalt/dom/dom_test.gyp
# cobalt/dom/dom_exception.gyp
# cobalt/dom/dom.gyp
# cobalt/dom/testing/dom_testing.gyp
# cobalt/account/account.gyp
# cobalt/xhr/xhr.gyp
# cobalt/css_parser/css_parser.gyp
# cobalt/loader/image/sandbox/sandbox.gyp
# cobalt/loader/origin.gyp

## --- COBALT ---###

set(COBALT_third_party_super_fast_hash_SOURCES
  # embedded src!
  #${COBALT_PORT_DIR}third_party/super_fast_hash/super_fast_hash.cc
)

## --- COBALT_CORE ---###

# cobalt/dom_parser/dom_parser.gyp
#
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/dom/dom.gyp:dom',
#  '<(DEPTH)/cobalt/loader/loader.gyp:loader',
#  '<(DEPTH)/net/net.gyp:net',
#  '<(DEPTH)/third_party/libxml/libxml.gyp:libxml',
#],
set(COBALT_dom_parser_SOURCES
  ${COBALT_CORE_DIR}dom_parser/html_decoder.cc
  ${COBALT_CORE_DIR}dom_parser/html_decoder.h
  ${COBALT_CORE_DIR}dom_parser/libxml_html_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_html_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/libxml_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/libxml_xml_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_xml_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/parser.cc
  ${COBALT_CORE_DIR}dom_parser/parser.h
  ${COBALT_CORE_DIR}dom_parser/xml_decoder.cc
  ${COBALT_CORE_DIR}dom_parser/xml_decoder.h
)

#set(COBALT_browser_bindings_gen_gyp_SOURCES
#)

add_library(COBALT_CORE STATIC
  ${COBALT_third_party_super_fast_hash_SOURCES}
  ${COBALT_dom_parser_SOURCES}
  #${COBALT_skia_cobalt_SOURCES}
  #${COBALT_skia_common_SOURCES}
)

target_link_libraries(COBALT_CORE PUBLIC
  modp_b64
  #cobalt_base
  #cobalt_nanobase
  #cobalt_csp
  #cobalt_script
  #cobalt_dom_exception
  #cobalt_ui_navigation
  #cobalt_math
  #cobalt_media
  #cobalt_loader
  #cobalt_page_visibility
  #cobalt_cssom
  #cobalt_web_animations
  cobalt_dom
  #starboard_icu_init
  starboard_eztime  # requires starboard_icu_init
  #starboard_stub
  starboard_platform # requires starboard_stub
  starboard_common
  starboard_core
  ## TODO ## starboard_platform
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  base
  SKIA
  dynamic_annotations
  UI_GFX
  #BLINK_RENDERER_CORE
  BLINK_PUBLIC_COMMON
  BLINK_PUBLIC_MOJOM
  #BLINK_RENDERER_NETWORK
  BLINK_RENDERER_PLATFORM
  GURL
  GNET
  GCRYPTO
  GFX_GEOMETRY
  UI_GFX
  GLIBXML
  # mojo
  # services/service_manager
  # services/ws/public/cpp/gpu
  #${BASE_LIBRARIES}
  base
  SKIA
  #skcms
  ced
  # emoji-segmenter
  # webrtc
  # zlib
  # icu
  CC
  #G_GPU
  ANIMATION_CC
  BASE_CC
  PAINT_CC
  SERVICES_NETWORK_PUBLIC_CPP
  libwebp # requires libpng
  ${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
  ${libpng_LIB}
  ${iccjpeg_LIB}
  MOJO
  #
  # khronos
  ${khronos_LIB}
  LIB_V8_INTERFACE
  COMPONENTS_SCHEDULING_METRICS
  ${HARFBUZZ_LIBRARIES}
  GMEDIA
  GZLIB_EXT
  SERVICES_SERVICE_MANAGER_PUBLIC_CPP
  GFX_CODEC
)

set_property(TARGET COBALT_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(COBALT_CORE PRIVATE
  ${GNET_PARENT_DIR} # to ./net
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  #${COBALT_CORE_DIR}/common
  #${BASE_DIR}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_include_directories(COBALT_CORE PUBLIC
  ${COBALT_CORE_PARENT_DIR} # to ./cobalt
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(COBALT_CORE PRIVATE
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
  # renderer
  COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=10
  #ENABLE_MAP_TO_MESH=1
)

target_compile_options(COBALT_CORE PRIVATE
  -Wno-error
  -Wno-macro-redefined
  -Wno-implicit-function-declaration
  -Wno-c++11-narrowing
  -Wno-macro-redefined
  #-Wno-undef
  #-Wno-unknown-pragmas
  #-Wno-nonportable-include-path
  #-Wno-unknown-argument
  # Warn for implicit type conversions that may change a value.
  #-Wconversion
  -Wno-c++11-compat
  # This complains about "override", which we use heavily.
  -Wno-c++11-extensions
  # Warns on switches on enums that cover all enum values but
  # also contain a default: branch. Chrome is full of that.
  -Wno-covered-switch-default
  # protobuf uses hash_map.
  -Wno-deprecated
  # Don't warn about the "struct foo f = {0};" initialization pattern.
  -Wno-missing-field-initializers
  # Do not warn for implicit sign conversions.
  -Wno-sign-conversion
  -Wno-unnamed-type-template-args
  # Triggered by the COMPILE_ASSERT macro.
  -Wno-unused-local-typedef
  # Do not warn if a function or variable cannot be implicitly
  # instantiated.
  -Wno-undefined-var-template
  # Do not warn about an implicit exception spec mismatch.
  -Wno-implicit-exception-spec-mismatch
  #
  -Wno-inconsistent-missing-override
)
