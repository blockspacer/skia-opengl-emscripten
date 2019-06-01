cmake_minimum_required(VERSION 2.8)

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
set(cobalt_dom_SOURCES
  ${COBALT_CORE_DIR}dom/animation_event.h
  ${COBALT_CORE_DIR}dom/animation_frame_request_callback_list.cc
  ${COBALT_CORE_DIR}dom/animation_frame_request_callback_list.h
  ${COBALT_CORE_DIR}dom/attr.cc
  ${COBALT_CORE_DIR}dom/attr.h
  ${COBALT_CORE_DIR}dom/audio_track.h
  ${COBALT_CORE_DIR}dom/audio_track_list.h
  ${COBALT_CORE_DIR}dom/base64.cc
  ${COBALT_CORE_DIR}dom/base64.h
  ${COBALT_CORE_DIR}dom/benchmark_stat_names.cc
  ${COBALT_CORE_DIR}dom/benchmark_stat_names.h
  ${COBALT_CORE_DIR}dom/blob.cc
  ${COBALT_CORE_DIR}dom/blob.h
  ##${COBALT_CORE_DIR}dom/blob_property_bag.h
  ${COBALT_CORE_DIR}dom/buffer_source.cc
  ${COBALT_CORE_DIR}dom/buffer_source.h
  ${COBALT_CORE_DIR}dom/c_val_key_list.cc
  ${COBALT_CORE_DIR}dom/c_val_key_list.h
  ${COBALT_CORE_DIR}dom/c_val_view.cc
  ${COBALT_CORE_DIR}dom/c_val_view.h
  ${COBALT_CORE_DIR}dom/camera_3d.cc
  ${COBALT_CORE_DIR}dom/camera_3d.h
  ${COBALT_CORE_DIR}dom/captions/system_caption_settings.cc
  ${COBALT_CORE_DIR}dom/captions/system_caption_settings.h
  ${COBALT_CORE_DIR}dom/cdata_section.cc
  ${COBALT_CORE_DIR}dom/cdata_section.h
  ${COBALT_CORE_DIR}dom/character_data.cc
  ${COBALT_CORE_DIR}dom/character_data.h
  ${COBALT_CORE_DIR}dom/comment.cc
  ${COBALT_CORE_DIR}dom/comment.h
  ${COBALT_CORE_DIR}dom/console.cc
  ${COBALT_CORE_DIR}dom/console.h
  ${COBALT_CORE_DIR}dom/crypto.cc
  ${COBALT_CORE_DIR}dom/crypto.h
  ${COBALT_CORE_DIR}dom/csp_delegate.cc
  ${COBALT_CORE_DIR}dom/csp_delegate.h
  ##${COBALT_CORE_DIR}dom/csp_delegate_enum.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/blob_property_bag.h
  #
  ${COBALT_CORE_DIR}dom/csp_delegate_factory.cc
  ${COBALT_CORE_DIR}dom/csp_delegate_factory.h
  ${COBALT_CORE_DIR}dom/csp_violation_reporter.cc
  ${COBALT_CORE_DIR}dom/csp_violation_reporter.h
  ${COBALT_CORE_DIR}dom/css_animations_adapter.cc
  ${COBALT_CORE_DIR}dom/css_animations_adapter.h
  ${COBALT_CORE_DIR}dom/css_transitions_adapter.cc
  ${COBALT_CORE_DIR}dom/css_transitions_adapter.h
  ${COBALT_CORE_DIR}dom/custom_event.h
  ${COBALT_CORE_DIR}dom/device_orientation_event.cc
  ${COBALT_CORE_DIR}dom/device_orientation_event.h
  #${COBALT_CORE_DIR}dom/device_orientation_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/device_orientation_event_init.h
  #
  ${COBALT_CORE_DIR}dom/document.cc
  ${COBALT_CORE_DIR}dom/document.h
  ${COBALT_CORE_DIR}dom/document_timeline.cc
  ${COBALT_CORE_DIR}dom/document_timeline.h
  ${COBALT_CORE_DIR}dom/document_type.cc
  ${COBALT_CORE_DIR}dom/document_type.h
  ${COBALT_CORE_DIR}dom/dom_animatable.cc
  ${COBALT_CORE_DIR}dom/dom_animatable.h
  ${COBALT_CORE_DIR}dom/dom_implementation.cc
  ${COBALT_CORE_DIR}dom/dom_implementation.h
  ${COBALT_CORE_DIR}dom/dom_parser.cc
  ${COBALT_CORE_DIR}dom/dom_parser.h
  ${COBALT_CORE_DIR}dom/dom_rect.h
  ${COBALT_CORE_DIR}dom/dom_rect_list.cc
  ${COBALT_CORE_DIR}dom/dom_rect_list.h
  ${COBALT_CORE_DIR}dom/dom_rect_read_only.h
  ${COBALT_CORE_DIR}dom/dom_settings.cc
  ${COBALT_CORE_DIR}dom/dom_settings.h
  ${COBALT_CORE_DIR}dom/dom_stat_tracker.cc
  ${COBALT_CORE_DIR}dom/dom_stat_tracker.h
  ${COBALT_CORE_DIR}dom/dom_string_map.cc
  ${COBALT_CORE_DIR}dom/dom_string_map.h
  ${COBALT_CORE_DIR}dom/dom_token_list.cc
  ${COBALT_CORE_DIR}dom/dom_token_list.h
  ${COBALT_CORE_DIR}dom/element.cc
  ${COBALT_CORE_DIR}dom/element.h
  ${COBALT_CORE_DIR}dom/eme/media_encrypted_event.cc
  ${COBALT_CORE_DIR}dom/eme/media_encrypted_event.h
  ${COBALT_CORE_DIR}dom/eme/media_key_message_event.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_message_event.h
  ${COBALT_CORE_DIR}dom/eme/media_key_session.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_session.h
  ${COBALT_CORE_DIR}dom/eme/media_key_status_map.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_status_map.h
  ${COBALT_CORE_DIR}dom/eme/media_key_system_access.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_system_access.h
  ${COBALT_CORE_DIR}dom/eme/media_keys.cc
  ${COBALT_CORE_DIR}dom/eme/media_keys.h
  ${COBALT_CORE_DIR}dom/error_event.h
  ${COBALT_CORE_DIR}dom/event.cc
  ${COBALT_CORE_DIR}dom/event.h
  #${COBALT_CORE_DIR}dom/event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/event_init.h
  #
  ${COBALT_CORE_DIR}dom/event_listener.h
  ${COBALT_CORE_DIR}dom/event_queue.cc
  ${COBALT_CORE_DIR}dom/event_queue.h
  ${COBALT_CORE_DIR}dom/event_target.cc
  ${COBALT_CORE_DIR}dom/event_target.h
  ${COBALT_CORE_DIR}dom/focus_event.cc
  ${COBALT_CORE_DIR}dom/focus_event.h
  #${COBALT_CORE_DIR}dom/focus_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/focus_event_init.h
  #
  ${COBALT_CORE_DIR}dom/font_cache.cc
  ${COBALT_CORE_DIR}dom/font_cache.h
  ${COBALT_CORE_DIR}dom/font_face.cc
  ${COBALT_CORE_DIR}dom/font_face.h
  ${COBALT_CORE_DIR}dom/font_face_updater.cc
  ${COBALT_CORE_DIR}dom/font_face_updater.h
  ${COBALT_CORE_DIR}dom/font_list.cc
  ${COBALT_CORE_DIR}dom/font_list.h
  ${COBALT_CORE_DIR}dom/generic_event_handler_reference.cc
  ${COBALT_CORE_DIR}dom/generic_event_handler_reference.h
  ${COBALT_CORE_DIR}dom/global_stats.cc
  ${COBALT_CORE_DIR}dom/global_stats.h
  ${COBALT_CORE_DIR}dom/history.cc
  ${COBALT_CORE_DIR}dom/history.h
  ${COBALT_CORE_DIR}dom/html_anchor_element.cc
  ${COBALT_CORE_DIR}dom/html_anchor_element.h
  ${COBALT_CORE_DIR}dom/html_body_element.cc
  ${COBALT_CORE_DIR}dom/html_body_element.h
  ${COBALT_CORE_DIR}dom/html_br_element.cc
  ${COBALT_CORE_DIR}dom/html_br_element.h
  ${COBALT_CORE_DIR}dom/html_collection.cc
  ${COBALT_CORE_DIR}dom/html_collection.h
  ${COBALT_CORE_DIR}dom/html_div_element.cc
  ${COBALT_CORE_DIR}dom/html_div_element.h
  ${COBALT_CORE_DIR}dom/html_element.cc
  ${COBALT_CORE_DIR}dom/html_element.h
  ${COBALT_CORE_DIR}dom/html_element_context.cc
  ${COBALT_CORE_DIR}dom/html_element_context.h
  ${COBALT_CORE_DIR}dom/html_element_factory.cc
  ${COBALT_CORE_DIR}dom/html_element_factory.h
  ${COBALT_CORE_DIR}dom/html_head_element.cc
  ${COBALT_CORE_DIR}dom/html_head_element.h
  ${COBALT_CORE_DIR}dom/html_heading_element.cc
  ${COBALT_CORE_DIR}dom/html_heading_element.h
  ${COBALT_CORE_DIR}dom/html_html_element.cc
  ${COBALT_CORE_DIR}dom/html_html_element.h
  ${COBALT_CORE_DIR}dom/html_image_element.cc
  ${COBALT_CORE_DIR}dom/html_image_element.h
  ${COBALT_CORE_DIR}dom/html_link_element.cc
  ${COBALT_CORE_DIR}dom/html_link_element.h
  ${COBALT_CORE_DIR}dom/html_media_element.cc
  ${COBALT_CORE_DIR}dom/html_media_element.h
  ${COBALT_CORE_DIR}dom/html_meta_element.cc
  ${COBALT_CORE_DIR}dom/html_meta_element.h
  ${COBALT_CORE_DIR}dom/html_paragraph_element.cc
  ${COBALT_CORE_DIR}dom/html_paragraph_element.h
  ${COBALT_CORE_DIR}dom/html_script_element.cc
  ${COBALT_CORE_DIR}dom/html_script_element.h
  ${COBALT_CORE_DIR}dom/html_span_element.cc
  ${COBALT_CORE_DIR}dom/html_span_element.h
  ${COBALT_CORE_DIR}dom/html_style_element.cc
  ${COBALT_CORE_DIR}dom/html_style_element.h
  ${COBALT_CORE_DIR}dom/html_title_element.cc
  ${COBALT_CORE_DIR}dom/html_title_element.h
  ${COBALT_CORE_DIR}dom/html_unknown_element.h
  ${COBALT_CORE_DIR}dom/html_video_element.cc
  ${COBALT_CORE_DIR}dom/html_video_element.h
  ${COBALT_CORE_DIR}dom/initial_computed_style.cc
  ${COBALT_CORE_DIR}dom/initial_computed_style.h
  ${COBALT_CORE_DIR}dom/input_event.cc
  ${COBALT_CORE_DIR}dom/input_event.h
  #${COBALT_CORE_DIR}dom/input_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/input_event_init.h
  #
  ${COBALT_CORE_DIR}dom/keyboard_event.cc
  ${COBALT_CORE_DIR}dom/keyboard_event.h
  #${COBALT_CORE_DIR}dom/keyboard_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/keyboard_event_init.h
  #
  ${COBALT_CORE_DIR}dom/keycode.h
  ${COBALT_CORE_DIR}dom/keyframes_map_updater.cc
  ${COBALT_CORE_DIR}dom/keyframes_map_updater.h
  ${COBALT_CORE_DIR}dom/layout_boxes.h
  ${COBALT_CORE_DIR}dom/local_storage_database.cc
  ${COBALT_CORE_DIR}dom/local_storage_database.h
  ${COBALT_CORE_DIR}dom/location.cc
  ${COBALT_CORE_DIR}dom/location.h
  ${COBALT_CORE_DIR}dom/media_query_list.cc
  ${COBALT_CORE_DIR}dom/media_query_list.h
  ${COBALT_CORE_DIR}dom/media_source.cc
  ${COBALT_CORE_DIR}dom/media_source.h
  ${COBALT_CORE_DIR}dom/memory_info.cc
  ${COBALT_CORE_DIR}dom/memory_info.h
  ${COBALT_CORE_DIR}dom/message_event.cc
  ${COBALT_CORE_DIR}dom/message_event.h
  ${COBALT_CORE_DIR}dom/mime_type_array.cc
  ${COBALT_CORE_DIR}dom/mime_type_array.h
  ${COBALT_CORE_DIR}dom/mouse_event.cc
  ${COBALT_CORE_DIR}dom/mouse_event.h
  #${COBALT_CORE_DIR}dom/mouse_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/mouse_event_init.h
  #
  ${COBALT_CORE_DIR}dom/mutation_observer.cc
  ${COBALT_CORE_DIR}dom/mutation_observer.h
  #${COBALT_CORE_DIR}dom/mutation_observer_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/mutation_observer_init.h
  #
  ${COBALT_CORE_DIR}dom/mutation_observer_task_manager.cc
  ${COBALT_CORE_DIR}dom/mutation_observer_task_manager.h
  ${COBALT_CORE_DIR}dom/mutation_record.cc
  ${COBALT_CORE_DIR}dom/mutation_record.h
  ${COBALT_CORE_DIR}dom/mutation_reporter.cc
  ${COBALT_CORE_DIR}dom/mutation_reporter.h
  ${COBALT_CORE_DIR}dom/named_node_map.cc
  ${COBALT_CORE_DIR}dom/named_node_map.h
  ## TODO ## ${COBALT_CORE_DIR}dom/navigator.cc
  ## TODO ## ${COBALT_CORE_DIR}dom/navigator.h
  ${COBALT_CORE_DIR}dom/node.cc
  ${COBALT_CORE_DIR}dom/node.h
  ${COBALT_CORE_DIR}dom/node_children_iterator.h
  #${COBALT_CORE_DIR}dom/node_collection.h
  #${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/node_collection.h
  #
  ${COBALT_CORE_DIR}dom/node_descendants_iterator.h
  ${COBALT_CORE_DIR}dom/node_list.cc
  ${COBALT_CORE_DIR}dom/node_list.h
  ${COBALT_CORE_DIR}dom/node_list_live.cc
  ${COBALT_CORE_DIR}dom/node_list_live.h
  ${COBALT_CORE_DIR}dom/on_error_event_listener.cc
  ${COBALT_CORE_DIR}dom/on_error_event_listener.h
  ${COBALT_CORE_DIR}dom/on_screen_keyboard.cc
  ${COBALT_CORE_DIR}dom/on_screen_keyboard.h
  ${COBALT_CORE_DIR}dom/on_screen_keyboard_bridge.h
  ${COBALT_CORE_DIR}dom/performance.cc
  ${COBALT_CORE_DIR}dom/performance.h
  ${COBALT_CORE_DIR}dom/performance_timing.cc
  ${COBALT_CORE_DIR}dom/performance_timing.h
  ${COBALT_CORE_DIR}dom/plugin_array.cc
  ${COBALT_CORE_DIR}dom/plugin_array.h
  ${COBALT_CORE_DIR}dom/pointer_event.cc
  ${COBALT_CORE_DIR}dom/pointer_event.h
  #${COBALT_CORE_DIR}dom/pointer_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/pointer_event_init.h
  #
  ${COBALT_CORE_DIR}dom/pointer_state.cc
  ${COBALT_CORE_DIR}dom/pointer_state.h
  ${COBALT_CORE_DIR}dom/progress_event.cc
  ${COBALT_CORE_DIR}dom/progress_event.h
  ${COBALT_CORE_DIR}dom/pseudo_element.cc
  ${COBALT_CORE_DIR}dom/pseudo_element.h
  ${COBALT_CORE_DIR}dom/registered_observer.h
  ${COBALT_CORE_DIR}dom/registered_observer_list.cc
  ${COBALT_CORE_DIR}dom/registered_observer_list.h
  ${COBALT_CORE_DIR}dom/rule_matching.cc
  ${COBALT_CORE_DIR}dom/rule_matching.h
  ${COBALT_CORE_DIR}dom/screen.h
  ${COBALT_CORE_DIR}dom/screenshot.cc
  ${COBALT_CORE_DIR}dom/screenshot.h
  ${COBALT_CORE_DIR}dom/screenshot_manager.cc
  ${COBALT_CORE_DIR}dom/screenshot_manager.h
  ${COBALT_CORE_DIR}dom/security_policy_violation_event.cc
  ${COBALT_CORE_DIR}dom/security_policy_violation_event.h
  ${COBALT_CORE_DIR}dom/serializer.cc
  ${COBALT_CORE_DIR}dom/serializer.h
  ${COBALT_CORE_DIR}dom/source_buffer.cc
  ${COBALT_CORE_DIR}dom/source_buffer.h
  ${COBALT_CORE_DIR}dom/source_buffer_list.cc
  ${COBALT_CORE_DIR}dom/source_buffer_list.h
  ${COBALT_CORE_DIR}dom/storage.cc
  ${COBALT_CORE_DIR}dom/storage.h
  ${COBALT_CORE_DIR}dom/storage_area.cc
  ${COBALT_CORE_DIR}dom/storage_area.h
  ${COBALT_CORE_DIR}dom/storage_event.cc
  ${COBALT_CORE_DIR}dom/storage_event.h
  ${COBALT_CORE_DIR}dom/test_runner.cc
  ${COBALT_CORE_DIR}dom/test_runner.h
  ${COBALT_CORE_DIR}dom/text.cc
  ${COBALT_CORE_DIR}dom/text.h
  ${COBALT_CORE_DIR}dom/time_ranges.cc
  ${COBALT_CORE_DIR}dom/time_ranges.h
  ${COBALT_CORE_DIR}dom/track_base.h
  ${COBALT_CORE_DIR}dom/track_default.h
  ${COBALT_CORE_DIR}dom/track_default_list.h
  ${COBALT_CORE_DIR}dom/track_event.h
  ${COBALT_CORE_DIR}dom/transition_event.h
  ${COBALT_CORE_DIR}dom/ui_event.cc
  ${COBALT_CORE_DIR}dom/ui_event.h
  #${COBALT_CORE_DIR}dom/ui_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/ui_event_init.h
  #
  ${COBALT_CORE_DIR}dom/ui_event_with_key_state.cc
  ${COBALT_CORE_DIR}dom/ui_event_with_key_state.h
  ${COBALT_CORE_DIR}dom/url.cc
  ${COBALT_CORE_DIR}dom/url.h
  ${COBALT_CORE_DIR}dom/url_registry.h
  ${COBALT_CORE_DIR}dom/url_utils.cc
  ${COBALT_CORE_DIR}dom/url_utils.h
  ${COBALT_CORE_DIR}dom/video_track.h
  ${COBALT_CORE_DIR}dom/video_track_list.h
  ${COBALT_CORE_DIR}dom/wheel_event.cc
  ${COBALT_CORE_DIR}dom/wheel_event.h
  #${COBALT_CORE_DIR}dom/wheel_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/wheel_event_init.h
  #
  ${COBALT_CORE_DIR}dom/window.cc
  ${COBALT_CORE_DIR}dom/window.h
  ${COBALT_CORE_DIR}dom/window_timers.cc
  ${COBALT_CORE_DIR}dom/window_timers.h
  ${COBALT_CORE_DIR}dom/xml_document.h
  ${COBALT_CORE_DIR}dom/xml_serializer.cc
  ${COBALT_CORE_DIR}dom/xml_serializer.h
)

add_library(cobalt_dom STATIC
  ${cobalt_dom_SOURCES}
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
target_link_libraries(cobalt_dom PUBLIC
  base # TODO
  cobalt_base
  cobalt_nanobase
  cobalt_csp
  cobalt_loader
  cobalt_media
  cobalt_page_visibility
  cobalt_script
  v8_stub
  cobalt_ui_navigation
  cobalt_web_animations
  #cobalt_browser ## TODO ##
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

set_property(TARGET cobalt_dom PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_dom PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_dom PRIVATE
  #'conditions': [
  #  ['enable_map_to_mesh == 1', {
  #    'defines' : ['ENABLE_MAP_TO_MESH'],
  #  }],
  #],
  #
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
)
