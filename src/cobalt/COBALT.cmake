cmake_minimum_required(VERSION 2.8)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third_party/glm)


set(COBALT_port_base_SOURCES
  ${COBALT_CORE_DIR}/portbase/memory/aligned_memory.cc
)

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
# cobalt/loader/loader.gyp
# cobalt/loader/image/sandbox/sandbox.gyp
# cobalt/loader/origin.gyp

## --- COBALT_BASE ---###
set(COBALT_base_SOURCES
  ##${COBALT_CORE_DIR}/base/accessibility_changed_event.h
  #${COBALT_CORE_DIR}/base/address_sanitizer.h
  ${COBALT_CORE_DIR}/base/camera_transform.h
  ${COBALT_CORE_DIR}/base/circular_buffer_shell.cc
  ${COBALT_CORE_DIR}/base/circular_buffer_shell.h
  ${COBALT_CORE_DIR}/base/clock.h
  ${COBALT_CORE_DIR}/base/cobalt_paths.h
  ${COBALT_CORE_DIR}/base/compiler.h
  ${COBALT_CORE_DIR}/base/c_val.cc
  ${COBALT_CORE_DIR}/base/c_val.h
  ${COBALT_CORE_DIR}/base/c_val_collection_entry_stats.h
  ${COBALT_CORE_DIR}/base/c_val_collection_timer_stats.h
  ${COBALT_CORE_DIR}/base/c_val_time_interval_entry_stats.h
  ${COBALT_CORE_DIR}/base/c_val_time_interval_timer_stats.h
  ${COBALT_CORE_DIR}/base/deep_link_event.h
  ##${COBALT_CORE_DIR}/base/do_main.h
  ##${COBALT_CORE_DIR}/base/do_main_starboard.h
  ${COBALT_CORE_DIR}/base/event.h
  ${COBALT_CORE_DIR}/base/event_dispatcher.cc
  ${COBALT_CORE_DIR}/base/event_dispatcher.h
  ${COBALT_CORE_DIR}/base/get_application_key.cc
  ${COBALT_CORE_DIR}/base/get_application_key.h
  ${COBALT_CORE_DIR}/base/init_cobalt.cc
  ${COBALT_CORE_DIR}/base/init_cobalt.h
  ${COBALT_CORE_DIR}/base/language.cc
  ${COBALT_CORE_DIR}/base/language.h
  ${COBALT_CORE_DIR}/base/localized_strings.cc
  ${COBALT_CORE_DIR}/base/localized_strings.h
  ${COBALT_CORE_DIR}/base/log_message_handler.cc
  ${COBALT_CORE_DIR}/base/log_message_handler.h
  ##${COBALT_CORE_DIR}/base/math.h
  ${COBALT_CORE_DIR}/base/message_queue.h
  ${COBALT_CORE_DIR}/base/on_screen_keyboard_hidden_event.h
  ${COBALT_CORE_DIR}/base/on_screen_keyboard_shown_event.h
  ${COBALT_CORE_DIR}/base/path_provider.cc
  ${COBALT_CORE_DIR}/base/path_provider.h
  ${COBALT_CORE_DIR}/base/poller.h
  ${COBALT_CORE_DIR}/base/polymorphic_downcast.h
  ${COBALT_CORE_DIR}/base/polymorphic_equatable.h
  ${COBALT_CORE_DIR}/base/ref_counted_lock.h
  ${COBALT_CORE_DIR}/base/source_location.h
  ${COBALT_CORE_DIR}/base/startup_timer.cc
  ${COBALT_CORE_DIR}/base/startup_timer.h
  ${COBALT_CORE_DIR}/base/stop_watch.cc
  ${COBALT_CORE_DIR}/base/stop_watch.h
  ${COBALT_CORE_DIR}/base/token.cc
  ${COBALT_CORE_DIR}/base/token.h
  ${COBALT_CORE_DIR}/base/tokens.cc
  ${COBALT_CORE_DIR}/base/tokens.h
  ${COBALT_CORE_DIR}/base/type_id.h
  ${COBALT_CORE_DIR}/base/window_size_changed_event.h
  ${COBALT_CORE_DIR}/base/unicode/character.cc
  ${COBALT_CORE_DIR}/base/unicode/character.h
  ${COBALT_CORE_DIR}/base/unicode/character_values.h
  ${COBALT_CORE_DIR}/base/unused.h
  ${COBALT_CORE_DIR}/base/user_log.cc
  ${COBALT_CORE_DIR}/base/user_log.h
  ${COBALT_CORE_DIR}/base/version_compatibility.cc
  ${COBALT_CORE_DIR}/base/version_compatibility.h
)

add_library(COBALT_BASE STATIC
  ${COBALT_base_SOURCES}
)

target_link_libraries(COBALT_BASE PUBLIC
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  #base
  #SKIA
  #dynamic_annotations
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
  base
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

set_property(TARGET COBALT_BASE PROPERTY CXX_STANDARD 17)

target_include_directories(COBALT_BASE PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(COBALT_BASE PRIVATE
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)

## --- COBALT_CORE ---###

# Interfaces for interacting with a JavaScript engine and exposing objects
# to bindings to JavaScript.
# 'dependencies': [
#   '<(DEPTH)/cobalt/base/base.gyp:base',
#   '<(DEPTH)/nb/nb.gyp:nb',
# ]
# {
#   'target_name': 'standalone_javascript_runner',
#   'type': 'static_library',
#   'sources': [
#     'standalone_javascript_runner.cc
#     'standalone_javascript_runner.h
#   ],
# },
set(COBALT_script_gyp_SOURCES
  ${COBALT_CORE_DIR}script/array_buffer.h
  ${COBALT_CORE_DIR}script/array_buffer_view.h
  ${COBALT_CORE_DIR}script/call_frame.h
  ${COBALT_CORE_DIR}script/callback_function.h
  ${COBALT_CORE_DIR}script/callback_interface_traits.h
  ${COBALT_CORE_DIR}script/data_view.h
  ${COBALT_CORE_DIR}script/environment_settings.h
  ${COBALT_CORE_DIR}script/error_report.h
  ${COBALT_CORE_DIR}script/exception_message.cc
  ${COBALT_CORE_DIR}script/exception_message.h
  ${COBALT_CORE_DIR}script/execution_state.cc
  ${COBALT_CORE_DIR}script/execution_state.h
  ${COBALT_CORE_DIR}script/fake_global_environment.h
  ${COBALT_CORE_DIR}script/fake_script_runner.h
  ${COBALT_CORE_DIR}script/global_environment.h
  ##${COBALT_CORE_DIR}script/global_object_proxy.h
  ${COBALT_CORE_DIR}script/javascript_engine.h
  ${COBALT_CORE_DIR}script/logging_exception_state.h
  ${COBALT_CORE_DIR}script/promise.h
  ${COBALT_CORE_DIR}script/property_enumerator.h
  ${COBALT_CORE_DIR}script/scope.h
  ## TODO ## ${COBALT_CORE_DIR}script/script_debugger.h
  ${COBALT_CORE_DIR}script/script_exception.h
  ## TODO ## ${COBALT_CORE_DIR}script/script_runner.cc
  ${COBALT_CORE_DIR}script/script_runner.h
  ${COBALT_CORE_DIR}script/script_value.h
  ${COBALT_CORE_DIR}script/script_value_factory.h
  ${COBALT_CORE_DIR}script/script_value_factory_instantiations.h
  ${COBALT_CORE_DIR}script/sequence.h
  ${COBALT_CORE_DIR}script/source_code.h
  ${COBALT_CORE_DIR}script/source_provider.h
  ${COBALT_CORE_DIR}script/stack_frame.cc
  ${COBALT_CORE_DIR}script/stack_frame.h
  ${COBALT_CORE_DIR}script/tracer.h
  ${COBALT_CORE_DIR}script/typed_arrays.h
  ${COBALT_CORE_DIR}script/union_type.h
  ${COBALT_CORE_DIR}script/union_type_internal.h
  ${COBALT_CORE_DIR}script/util/stack_trace_helpers.h
  ${COBALT_CORE_DIR}script/value_handle.h
  ${COBALT_CORE_DIR}script/wrappable.h
)

# 'dependencies': [
#   '<(DEPTH)/cobalt/script/script.gyp:script',
# ],
set(COBALT_dom_exception_SOURCES
  ${COBALT_CORE_DIR}dom/dom_exception.cc
  #${COBALT_CORE_DIR}dom/dom_exception.h
)

# cobalt/dom_parser/dom_parser.gyp
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

#'export_dependent_settings': [
#  # Additionally, ensure that the include directories for generated
#  # headers are put on the include directories for targets that depend
#  # on this one.
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#],
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/network/network.gyp:network',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#  '<(DEPTH)/cobalt/dom/dom_exception.gyp:dom_exception',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/ui_navigation/ui_navigation.gyp:ui_navigation',
#  '<(DEPTH)/url/url.gyp:url',
#  'embed_resources_as_header_files',
#],
set(COBALT_CSSOM_SOURCES
  ${COBALT_CORE_DIR}cssom/absolute_url_value.cc
  ${COBALT_CORE_DIR}cssom/absolute_url_value.h
  ${COBALT_CORE_DIR}cssom/active_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/active_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/after_pseudo_element.cc
  ${COBALT_CORE_DIR}cssom/after_pseudo_element.h
  ${COBALT_CORE_DIR}cssom/animation.h
  ${COBALT_CORE_DIR}cssom/animation_set.cc
  ${COBALT_CORE_DIR}cssom/animation_set.h
  ${COBALT_CORE_DIR}cssom/attribute_selector.cc
  ${COBALT_CORE_DIR}cssom/attribute_selector.h
  ${COBALT_CORE_DIR}cssom/before_pseudo_element.cc
  ${COBALT_CORE_DIR}cssom/before_pseudo_element.h
  ${COBALT_CORE_DIR}cssom/calc_value.cc
  ${COBALT_CORE_DIR}cssom/calc_value.h
  ${COBALT_CORE_DIR}cssom/cascade_precedence.h
  ${COBALT_CORE_DIR}cssom/cascaded_style.cc
  ${COBALT_CORE_DIR}cssom/cascaded_style.h
  ${COBALT_CORE_DIR}cssom/character_classification.h
  ${COBALT_CORE_DIR}cssom/child_combinator.cc
  ${COBALT_CORE_DIR}cssom/child_combinator.h
  ${COBALT_CORE_DIR}cssom/class_selector.cc
  ${COBALT_CORE_DIR}cssom/class_selector.h
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_focus_transform_function.cc
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_focus_transform_function.h
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_spotlight_transform_function.cc
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_spotlight_transform_function.h
  ${COBALT_CORE_DIR}cssom/color_stop.cc
  ${COBALT_CORE_DIR}cssom/color_stop.h
  ${COBALT_CORE_DIR}cssom/combinator.cc
  ${COBALT_CORE_DIR}cssom/combinator.h
  ${COBALT_CORE_DIR}cssom/combinator_visitor.h
  ${COBALT_CORE_DIR}cssom/complex_selector.cc
  ${COBALT_CORE_DIR}cssom/complex_selector.h
  ${COBALT_CORE_DIR}cssom/compound_selector.cc
  ${COBALT_CORE_DIR}cssom/compound_selector.h
  ${COBALT_CORE_DIR}cssom/computed_style.cc
  ${COBALT_CORE_DIR}cssom/computed_style.h
  ${COBALT_CORE_DIR}cssom/css.cc
  ${COBALT_CORE_DIR}cssom/css.h
  ${COBALT_CORE_DIR}cssom/css_computed_style_data.cc
  ${COBALT_CORE_DIR}cssom/css_computed_style_data.h
  ${COBALT_CORE_DIR}cssom/css_computed_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_computed_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_condition_rule.cc
  ${COBALT_CORE_DIR}cssom/css_condition_rule.h
  ${COBALT_CORE_DIR}cssom/css_declaration_data.h
  ${COBALT_CORE_DIR}cssom/css_declaration_util.cc
  ${COBALT_CORE_DIR}cssom/css_declaration_util.h
  ${COBALT_CORE_DIR}cssom/css_declared_style_data.cc
  ${COBALT_CORE_DIR}cssom/css_declared_style_data.h
  ${COBALT_CORE_DIR}cssom/css_declared_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_declared_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_font_face_declaration_data.cc
  ${COBALT_CORE_DIR}cssom/css_font_face_declaration_data.h
  ${COBALT_CORE_DIR}cssom/css_font_face_rule.cc
  ${COBALT_CORE_DIR}cssom/css_font_face_rule.h
  ${COBALT_CORE_DIR}cssom/css_grouping_rule.cc
  ${COBALT_CORE_DIR}cssom/css_grouping_rule.h
  ${COBALT_CORE_DIR}cssom/css_keyframe_rule.cc
  ${COBALT_CORE_DIR}cssom/css_keyframe_rule.h
  ${COBALT_CORE_DIR}cssom/css_keyframes_rule.cc
  ${COBALT_CORE_DIR}cssom/css_keyframes_rule.h
  ${COBALT_CORE_DIR}cssom/css_media_rule.cc
  ${COBALT_CORE_DIR}cssom/css_media_rule.h
  ${COBALT_CORE_DIR}cssom/css_parser.h
  ${COBALT_CORE_DIR}cssom/css_rule.cc
  ${COBALT_CORE_DIR}cssom/css_rule.h
  ${COBALT_CORE_DIR}cssom/css_rule_list.cc
  ${COBALT_CORE_DIR}cssom/css_rule_list.h
  ${COBALT_CORE_DIR}cssom/css_rule_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_rule_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_rule_visitor.h
  ${COBALT_CORE_DIR}cssom/css_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_style_rule.cc
  ${COBALT_CORE_DIR}cssom/css_style_rule.h
  ${COBALT_CORE_DIR}cssom/css_style_sheet.cc
  ${COBALT_CORE_DIR}cssom/css_style_sheet.h
  ${COBALT_CORE_DIR}cssom/css_transition.cc
  ${COBALT_CORE_DIR}cssom/css_transition.h
  ${COBALT_CORE_DIR}cssom/css_transition_set.cc
  ${COBALT_CORE_DIR}cssom/css_transition_set.h
  ${COBALT_CORE_DIR}cssom/descendant_combinator.cc
  ${COBALT_CORE_DIR}cssom/descendant_combinator.h
  ${COBALT_CORE_DIR}cssom/empty_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/empty_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/filter_function.h
  ${COBALT_CORE_DIR}cssom/filter_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/filter_function_list_value.h
  ${COBALT_CORE_DIR}cssom/focus_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/focus_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/following_sibling_combinator.cc
  ${COBALT_CORE_DIR}cssom/following_sibling_combinator.h
  ${COBALT_CORE_DIR}cssom/font_style_value.cc
  ${COBALT_CORE_DIR}cssom/font_style_value.h
  ${COBALT_CORE_DIR}cssom/font_weight_value.cc
  ${COBALT_CORE_DIR}cssom/font_weight_value.h
  ${COBALT_CORE_DIR}cssom/hover_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/hover_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/id_selector.cc
  ${COBALT_CORE_DIR}cssom/id_selector.h
  ${COBALT_CORE_DIR}cssom/integer_value.cc
  ${COBALT_CORE_DIR}cssom/integer_value.h
  ${COBALT_CORE_DIR}cssom/interpolate_property_value.cc
  ${COBALT_CORE_DIR}cssom/interpolate_property_value.h
  ${COBALT_CORE_DIR}cssom/interpolated_transform_property_value.cc
  ${COBALT_CORE_DIR}cssom/interpolated_transform_property_value.h
  ${COBALT_CORE_DIR}cssom/keyword_names.cc
  ${COBALT_CORE_DIR}cssom/keyword_names.h
  ${COBALT_CORE_DIR}cssom/keyword_value.cc
  ${COBALT_CORE_DIR}cssom/keyword_value.h
  ${COBALT_CORE_DIR}cssom/length_value.cc
  ${COBALT_CORE_DIR}cssom/length_value.h
  ${COBALT_CORE_DIR}cssom/linear_gradient_value.cc
  ${COBALT_CORE_DIR}cssom/linear_gradient_value.h
  ${COBALT_CORE_DIR}cssom/list_value.h
  ${COBALT_CORE_DIR}cssom/local_src_value.cc
  ${COBALT_CORE_DIR}cssom/local_src_value.h
  ${COBALT_CORE_DIR}cssom/map_to_mesh_function.cc
  ${COBALT_CORE_DIR}cssom/map_to_mesh_function.h
  ${COBALT_CORE_DIR}cssom/matrix_function.cc
  ${COBALT_CORE_DIR}cssom/matrix_function.h
  ${COBALT_CORE_DIR}cssom/media_feature.cc
  ${COBALT_CORE_DIR}cssom/media_feature.h
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value.cc
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value.h
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value_names.cc
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value_names.h
  ${COBALT_CORE_DIR}cssom/media_feature_names.cc
  ${COBALT_CORE_DIR}cssom/media_feature_names.h
  ${COBALT_CORE_DIR}cssom/media_list.cc
  ${COBALT_CORE_DIR}cssom/media_list.h
  ${COBALT_CORE_DIR}cssom/media_query.cc
  ${COBALT_CORE_DIR}cssom/media_query.h
  ${COBALT_CORE_DIR}cssom/media_type_names.cc
  ${COBALT_CORE_DIR}cssom/media_type_names.h
  ${COBALT_CORE_DIR}cssom/mutation_observer.h
  ${COBALT_CORE_DIR}cssom/next_sibling_combinator.cc
  ${COBALT_CORE_DIR}cssom/next_sibling_combinator.h
  ${COBALT_CORE_DIR}cssom/not_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/not_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/number_value.cc
  ${COBALT_CORE_DIR}cssom/number_value.h
  ${COBALT_CORE_DIR}cssom/percentage_value.cc
  ${COBALT_CORE_DIR}cssom/percentage_value.h
  ${COBALT_CORE_DIR}cssom/property_definitions.cc
  ${COBALT_CORE_DIR}cssom/property_definitions.h
  ${COBALT_CORE_DIR}cssom/property_key_list_value.cc
  ${COBALT_CORE_DIR}cssom/property_key_list_value.h
  ${COBALT_CORE_DIR}cssom/property_list_value.h
  ${COBALT_CORE_DIR}cssom/property_value.h
  ${COBALT_CORE_DIR}cssom/property_value_visitor.cc
  ${COBALT_CORE_DIR}cssom/property_value_visitor.h
  ${COBALT_CORE_DIR}cssom/pseudo_class.h
  ${COBALT_CORE_DIR}cssom/pseudo_class_names.cc
  ${COBALT_CORE_DIR}cssom/pseudo_class_names.h
  ${COBALT_CORE_DIR}cssom/pseudo_element.h
  ${COBALT_CORE_DIR}cssom/pseudo_element_names.cc
  ${COBALT_CORE_DIR}cssom/pseudo_element_names.h
  ${COBALT_CORE_DIR}cssom/radial_gradient_value.cc
  ${COBALT_CORE_DIR}cssom/radial_gradient_value.h
  ${COBALT_CORE_DIR}cssom/ratio_value.cc
  ${COBALT_CORE_DIR}cssom/ratio_value.h
  ${COBALT_CORE_DIR}cssom/resolution_value.cc
  ${COBALT_CORE_DIR}cssom/resolution_value.h
  ${COBALT_CORE_DIR}cssom/rgba_color_value.cc
  ${COBALT_CORE_DIR}cssom/rgba_color_value.h
  ${COBALT_CORE_DIR}cssom/rotate_function.cc
  ${COBALT_CORE_DIR}cssom/rotate_function.h
  ${COBALT_CORE_DIR}cssom/scale_function.cc
  ${COBALT_CORE_DIR}cssom/scale_function.h
  ${COBALT_CORE_DIR}cssom/scoped_list_value.h
  ${COBALT_CORE_DIR}cssom/scoped_ref_list_value.h
  ${COBALT_CORE_DIR}cssom/selector.h
  ${COBALT_CORE_DIR}cssom/selector_tree.cc
  ${COBALT_CORE_DIR}cssom/selector_tree.h
  ${COBALT_CORE_DIR}cssom/selector_visitor.h
  ${COBALT_CORE_DIR}cssom/shadow_value.cc
  ${COBALT_CORE_DIR}cssom/shadow_value.h
  ${COBALT_CORE_DIR}cssom/simple_selector.h
  ${COBALT_CORE_DIR}cssom/specificity.cc
  ${COBALT_CORE_DIR}cssom/specificity.h
  ${COBALT_CORE_DIR}cssom/serializer.cc
  ${COBALT_CORE_DIR}cssom/serializer.h
  ${COBALT_CORE_DIR}cssom/string_value.cc
  ${COBALT_CORE_DIR}cssom/string_value.h
  ${COBALT_CORE_DIR}cssom/style_sheet.cc
  ${COBALT_CORE_DIR}cssom/style_sheet.h
  ${COBALT_CORE_DIR}cssom/style_sheet_list.cc
  ${COBALT_CORE_DIR}cssom/style_sheet_list.h
  ${COBALT_CORE_DIR}cssom/testing/mock_css_parser.h
  ${COBALT_CORE_DIR}cssom/time_list_value.cc
  ${COBALT_CORE_DIR}cssom/time_list_value.h
  ${COBALT_CORE_DIR}cssom/timing_function.cc
  ${COBALT_CORE_DIR}cssom/timing_function.h
  ${COBALT_CORE_DIR}cssom/timing_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/timing_function_list_value.h
  ${COBALT_CORE_DIR}cssom/transform_function.h
  ${COBALT_CORE_DIR}cssom/transform_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/transform_function_list_value.h
  ${COBALT_CORE_DIR}cssom/transform_function_visitor.h
  ${COBALT_CORE_DIR}cssom/transform_property_value.h
  ${COBALT_CORE_DIR}cssom/translate_function.cc
  ${COBALT_CORE_DIR}cssom/translate_function.h
  ${COBALT_CORE_DIR}cssom/type_selector.cc
  ${COBALT_CORE_DIR}cssom/type_selector.h
  ${COBALT_CORE_DIR}cssom/unicode_range_value.cc
  ${COBALT_CORE_DIR}cssom/unicode_range_value.h
  ${COBALT_CORE_DIR}cssom/universal_selector.cc
  ${COBALT_CORE_DIR}cssom/universal_selector.h
  ${COBALT_CORE_DIR}cssom/user_agent_style_sheet.cc
  ${COBALT_CORE_DIR}cssom/user_agent_style_sheet.h
  ${COBALT_CORE_DIR}cssom/url_src_value.cc
  ${COBALT_CORE_DIR}cssom/url_src_value.h
  ${COBALT_CORE_DIR}cssom/url_value.cc
  ${COBALT_CORE_DIR}cssom/url_value.h
  ${COBALT_CORE_DIR}cssom/viewport_size.h
)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/cssom/cssom.gyp:cssom',
#],
set(COBALT_WEB_ANIMATIONS_SOURCES
  ${COBALT_CORE_DIR}web_animations/animatable.h
  ${COBALT_CORE_DIR}web_animations/animation.cc
  ${COBALT_CORE_DIR}web_animations/animation.h
  ${COBALT_CORE_DIR}web_animations/animation_effect_read_only.h
  ${COBALT_CORE_DIR}web_animations/animation_effect_timing_read_only.cc
  ${COBALT_CORE_DIR}web_animations/animation_effect_timing_read_only.h
  ${COBALT_CORE_DIR}web_animations/animation_set.cc
  ${COBALT_CORE_DIR}web_animations/animation_set.h
  ${COBALT_CORE_DIR}web_animations/animation_timeline.cc
  ${COBALT_CORE_DIR}web_animations/animation_timeline.h
  ${COBALT_CORE_DIR}web_animations/baked_animation_set.cc
  ${COBALT_CORE_DIR}web_animations/baked_animation_set.h
  ${COBALT_CORE_DIR}web_animations/keyframe.h
  ${COBALT_CORE_DIR}web_animations/keyframe_effect_read_only.cc
  ${COBALT_CORE_DIR}web_animations/keyframe_effect_read_only.h
  ${COBALT_CORE_DIR}web_animations/timed_task_queue.cc
  ${COBALT_CORE_DIR}web_animations/timed_task_queue.h
)

# '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#  '<(DEPTH)/cobalt/csp/csp.gyp:csp',
#  '<(DEPTH)/cobalt/cssom/cssom.gyp:cssom',
#  '<(DEPTH)/cobalt/dom/dom_exception.gyp:dom_exception',
#  '<(DEPTH)/cobalt/loader/loader.gyp:loader',
#  '<(DEPTH)/cobalt/media/media.gyp:media',
#  '<(DEPTH)/cobalt/media_capture/media_capture.gyp:media_capture',
#  '<(DEPTH)/cobalt/media_session/media_session.gyp:media_session',
#  # Interface layer to avoid directly depending on network.
#  '<(DEPTH)/cobalt/network_bridge/network_bridge.gyp:network_bridge',
#  '<(DEPTH)/cobalt/page_visibility/page_visibility.gyp:page_visibility',
#  '<(DEPTH)/cobalt/script/script.gyp:script',
#  '<(DEPTH)/cobalt/speech/speech.gyp:speech',
#  '<(DEPTH)/cobalt/storage/storage.gyp:storage',
#  '<(DEPTH)/cobalt/system_window/system_window.gyp:system_window',
#  '<(DEPTH)/cobalt/ui_navigation/ui_navigation.gyp:ui_navigation',
#  '<(DEPTH)/cobalt/web_animations/web_animations.gyp:web_animations',
#  '<(DEPTH)/nb/nb.gyp:nb',
#  '<(DEPTH)/net/net.gyp:net',
#  '<(DEPTH)/url/url.gyp:url',
#],
#'conditions': [
#  ['enable_map_to_mesh == 1', {
#    'defines' : ['ENABLE_MAP_TO_MESH'],
#  }],
#],
#set(COBALT_CORE_DOM_SOURCES
#        'animation_event.h
#        'animation_frame_request_callback_list.cc
#        'animation_frame_request_callback_list.h
#        'attr.cc
#        'attr.h
#        'audio_track.h
#        'audio_track_list.h
#        'base64.cc
#        'base64.h
#        'benchmark_stat_names.cc
#        'benchmark_stat_names.h
#        'blob.cc
#        'blob.h
#        'blob_property_bag.h
#        'buffer_source.cc
#        'buffer_source.h
#        'c_val_key_list.cc
#        'c_val_key_list.h
#        'c_val_view.cc
#        'c_val_view.h
#        'camera_3d.cc
#        'camera_3d.h
#        'captions/system_caption_settings.cc
#        'captions/system_caption_settings.h
#        'cdata_section.cc
#        'cdata_section.h
#        'character_data.cc
#        'character_data.h
#        'comment.cc
#        'comment.h
#        'console.cc
#        'console.h
#        'crypto.cc
#        'crypto.h
#        'csp_delegate.cc
#        'csp_delegate.h
#        'csp_delegate_enum.h
#        'csp_delegate_factory.cc
#        'csp_delegate_factory.h
#        'csp_violation_reporter.cc
#        'csp_violation_reporter.h
#        'css_animations_adapter.cc
#        'css_animations_adapter.h
#        'css_transitions_adapter.cc
#        'css_transitions_adapter.h
#        'custom_event.h
#        'device_orientation_event.cc
#        'device_orientation_event.h
#        'device_orientation_event_init.h
#        'document.cc
#        'document.h
#        'document_timeline.cc
#        'document_timeline.h
#        'document_type.cc
#        'document_type.h
#        'dom_animatable.cc
#        'dom_animatable.h
#        'dom_implementation.cc
#        'dom_implementation.h
#        'dom_parser.cc
#        'dom_parser.h
#        'dom_rect.h
#        'dom_rect_list.cc
#        'dom_rect_list.h
#        'dom_rect_read_only.h
#        'dom_settings.cc
#        'dom_settings.h
#        'dom_stat_tracker.cc
#        'dom_stat_tracker.h
#        'dom_string_map.cc
#        'dom_string_map.h
#        'dom_token_list.cc
#        'dom_token_list.h
#        'element.cc
#        'element.h
#        'eme/media_encrypted_event.cc
#        'eme/media_encrypted_event.h
#        'eme/media_key_message_event.cc
#        'eme/media_key_message_event.h
#        'eme/media_key_session.cc
#        'eme/media_key_session.h
#        'eme/media_key_status_map.cc
#        'eme/media_key_status_map.h
#        'eme/media_key_system_access.cc
#        'eme/media_key_system_access.h
#        'eme/media_keys.cc
#        'eme/media_keys.h
#        'error_event.h
#        'event.cc
#        'event.h
#        'event_init.h
#        'event_listener.h
#        'event_queue.cc
#        'event_queue.h
#        'event_target.cc
#        'event_target.h
#        'focus_event.cc
#        'focus_event.h
#        'focus_event_init.h
#        'font_cache.cc
#        'font_cache.h
#        'font_face.cc
#        'font_face.h
#        'font_face_updater.cc
#        'font_face_updater.h
#        'font_list.cc
#        'font_list.h
#        'generic_event_handler_reference.cc
#        'generic_event_handler_reference.h
#        'global_stats.cc
#        'global_stats.h
#        'history.cc
#        'history.h
#        'html_anchor_element.cc
#        'html_anchor_element.h
#        'html_body_element.cc
#        'html_body_element.h
#        'html_br_element.cc
#        'html_br_element.h
#        'html_collection.cc
#        'html_collection.h
#        'html_div_element.cc
#        'html_div_element.h
#        'html_element.cc
#        'html_element.h
#        'html_element_context.cc
#        'html_element_context.h
#        'html_element_factory.cc
#        'html_element_factory.h
#        'html_head_element.cc
#        'html_head_element.h
#        'html_heading_element.cc
#        'html_heading_element.h
#        'html_html_element.cc
#        'html_html_element.h
#        'html_image_element.cc
#        'html_image_element.h
#        'html_link_element.cc
#        'html_link_element.h
#        'html_media_element.cc
#        'html_media_element.h
#        'html_meta_element.cc
#        'html_meta_element.h
#        'html_paragraph_element.cc
#        'html_paragraph_element.h
#        'html_script_element.cc
#        'html_script_element.h
#        'html_span_element.cc
#        'html_span_element.h
#        'html_style_element.cc
#        'html_style_element.h
#        'html_title_element.cc
#        'html_title_element.h
#        'html_unknown_element.h
#        'html_video_element.cc
#        'html_video_element.h
#        'initial_computed_style.cc
#        'initial_computed_style.h
#        'input_event.cc
#        'input_event.h
#        'input_event_init.h
#        'keyboard_event.cc
#        'keyboard_event.h
#        'keyboard_event_init.h
#        'keycode.h
#        'keyframes_map_updater.cc
#        'keyframes_map_updater.h
#        'layout_boxes.h
#        'local_storage_database.cc
#        'local_storage_database.h
#        'location.cc
#        'location.h
#        'media_query_list.cc
#        'media_query_list.h
#        'media_source.cc
#        'media_source.h
#        'memory_info.cc
#        'memory_info.h
#        'message_event.cc
#        'message_event.h
#        'mime_type_array.cc
#        'mime_type_array.h
#        'mouse_event.cc
#        'mouse_event.h
#        'mouse_event_init.h
#        'mutation_observer.cc
#        'mutation_observer.h
#        'mutation_observer_init.h
#        'mutation_observer_task_manager.cc
#        'mutation_observer_task_manager.h
#        'mutation_record.cc
#        'mutation_record.h
#        'mutation_reporter.cc
#        'mutation_reporter.h
#        'named_node_map.cc
#        'named_node_map.h
#        'navigator.cc
#        'navigator.h
#        'node.cc
#        'node.h
#        'node_children_iterator.h
#        'node_collection.h
#        'node_descendants_iterator.h
#        'node_list.cc
#        'node_list.h
#        'node_list_live.cc
#        'node_list_live.h
#        'on_error_event_listener.cc
#        'on_error_event_listener.h
#        'on_screen_keyboard.cc
#        'on_screen_keyboard.h
#        'on_screen_keyboard_bridge.h
#        'performance.cc
#        'performance.h
#        'performance_timing.cc
#        'performance_timing.h
#        'plugin_array.cc
#        'plugin_array.h
#        'pointer_event.cc
#        'pointer_event.h
#        'pointer_event_init.h
#        'pointer_state.cc
#        'pointer_state.h
#        'progress_event.cc
#        'progress_event.h
#        'pseudo_element.cc
#        'pseudo_element.h
#        'registered_observer.h
#        'registered_observer_list.cc
#        'registered_observer_list.h
#        'rule_matching.cc
#        'rule_matching.h
#        'screen.h
#        'screenshot.cc
#        'screenshot.h
#        'screenshot_manager.cc
#        'screenshot_manager.h
#        'security_policy_violation_event.cc
#        'security_policy_violation_event.h
#        'serializer.cc
#        'serializer.h
#        'source_buffer.cc
#        'source_buffer.h
#        'source_buffer_list.cc
#        'source_buffer_list.h
#        'storage.cc
#        'storage.h
#        'storage_area.cc
#        'storage_area.h
#        'storage_event.cc
#        'storage_event.h
#        'test_runner.cc
#        'test_runner.h
#        'text.cc
#        'text.h
#        'time_ranges.cc
#        'time_ranges.h
#        'track_base.h
#        'track_default.h
#        'track_default_list.h
#        'track_event.h
#        'transition_event.h
#        'ui_event.cc
#        'ui_event.h
#        'ui_event_init.h
#        'ui_event_with_key_state.cc
#        'ui_event_with_key_state.h
#        'url.cc
#        'url.h
#        'url_registry.h
#        'url_utils.cc
#        'url_utils.h
#        'video_track.h
#        'video_track_list.h
#        'wheel_event.cc
#        'wheel_event.h
#        'wheel_event_init.h
#        'window.cc
#        'window.h
#        'window_timers.cc
#        'window_timers.h
#        'xml_document.h
#        'xml_serializer.cc
#        'xml_serializer.h
#)

add_library(COBALT_CORE STATIC
  #${COBALT_CSSOM_SOURCES}
  #${COBALT_script_gyp_SOURCES}
  ${COBALT_dom_exception_SOURCES}
  #${COBALT_dom_parser_SOURCES}
  ${COBALT_WEB_ANIMATIONS_SOURCES}
  #${COBALT_skia_cobalt_SOURCES}
  #${COBALT_skia_common_SOURCES}
)

target_link_libraries(COBALT_CORE PUBLIC
  COBALT_BASE
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
  ${COBALT_COMMON_DEFINES}
)
