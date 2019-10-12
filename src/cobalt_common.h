﻿/// \note defined by CMAKE
//#ifndef ENABLE_COBALT
//#define ENABLE_COBALT 1
//#endif
//#undef ENABLE_COBALT
#ifdef ENABLE_COBALT
//#include "renderer_stub/rasterizer/skgl/software_rasterizer.h"
#include "renderer_stub/rasterizer/skia/font.h"

#include "render_tree_combiner.h"
#include "starboard/event.h"

#include "cobalt/base/init_cobalt.h"

#include "cobalt/web_animations/animation.h"

#include "cobalt/cssom/selector_tree.h"

#include "cobalt/css_parser/parser.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/specificity.h"

#include "cobalt/cssom/css_rule_list.h"

#include "cobalt/cssom/css_font_face_rule.h"
#include "cobalt/cssom/css_media_rule.h"
#include "cobalt/cssom/css_rule_style_declaration.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/media_list.h"

#include "cobalt/src/cobalt/loader/decoder.h"

#include "cobalt/dom/html_custom_element.h"

#include "cobalt/dom_parser/html_decoder.h"
#include "cobalt/dom/attr.h"
#include "cobalt/dom/font_cache.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/named_node_map.h"

#include "cobalt/dom/error_event.h"
#include "cobalt/dom/error_event_init.h"
#include "cobalt/dom/event.h"

#include "cobalt/dom/html_body_element.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_factory.h"
#include "cobalt/dom/html_head_element.h"
#include "cobalt/dom/html_html_element.h"
#include "cobalt/dom/html_script_element.h"

#include "cobalt/dom/attr.h"
#include "cobalt/dom/comment.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_rect.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/dom_token_list.h"
#include "cobalt/dom/global_stats.h"
#include "cobalt/dom/html_div_element.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/node_list.h"
#include "cobalt/dom/text.h"
#include "cobalt/dom/xml_document.h"
#include "cobalt/dom_parser/parser.h"

#include "cobalt/dom/rule_matching.h"

//#include "cobalt/dom/testing/stub_css_parser.h"
//#include "cobalt/dom/testing/stub_script_runner.h"

#include "cobalt/dom/text.h"
#include "cobalt/dom_parser/parser.h"
//#include "cobalt/loader/fetcher_factory.h"

#include "cobalt/css_parser/parser.h"

#include "cobalt/cssom/active_pseudo_class.h"
#include "cobalt/cssom/after_pseudo_element.h"
#include "cobalt/cssom/attribute_selector.h"
#include "cobalt/cssom/before_pseudo_element.h"
#include "cobalt/cssom/child_combinator.h"
#include "cobalt/cssom/class_selector.h"
#include "cobalt/cssom/cobalt_ui_nav_focus_transform_function.h"
#include "cobalt/cssom/cobalt_ui_nav_spotlight_transform_function.h"
#include "cobalt/cssom/complex_selector.h"
#include "cobalt/cssom/compound_selector.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_font_face_declaration_data.h"
#include "cobalt/cssom/css_font_face_rule.h"
#include "cobalt/cssom/css_keyframe_rule.h"
#include "cobalt/cssom/css_keyframes_rule.h"
#include "cobalt/cssom/css_rule_list.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/css_style_sheet.h"
#include "cobalt/cssom/descendant_combinator.h"
#include "cobalt/cssom/empty_pseudo_class.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/focus_pseudo_class.h"
#include "cobalt/cssom/following_sibling_combinator.h"
#include "cobalt/cssom/font_style_value.h"
#include "cobalt/cssom/font_weight_value.h"
#include "cobalt/cssom/hover_pseudo_class.h"
#include "cobalt/cssom/id_selector.h"
#include "cobalt/cssom/integer_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/length_value.h"
#include "cobalt/cssom/linear_gradient_value.h"
#include "cobalt/cssom/local_src_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/cssom/matrix_function.h"
#include "cobalt/cssom/media_list.h"
#include "cobalt/cssom/media_query.h"
#include "cobalt/cssom/next_sibling_combinator.h"
#include "cobalt/cssom/not_pseudo_class.h"
#include "cobalt/cssom/number_value.h"
#include "cobalt/cssom/percentage_value.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/property_key_list_value.h"
#include "cobalt/cssom/property_list_value.h"
#include "cobalt/cssom/property_value_visitor.h"
#include "cobalt/cssom/radial_gradient_value.h"
#include "cobalt/cssom/rgba_color_value.h"
#include "cobalt/cssom/rotate_function.h"
#include "cobalt/cssom/scale_function.h"
#include "cobalt/cssom/shadow_value.h"
#include "cobalt/cssom/simple_selector.h"
#include "cobalt/cssom/string_value.h"
#include "cobalt/cssom/time_list_value.h"
#include "cobalt/cssom/timing_function.h"
#include "cobalt/cssom/timing_function_list_value.h"
#include "cobalt/cssom/transform_function_list_value.h"
#include "cobalt/cssom/translate_function.h"
#include "cobalt/cssom/type_selector.h"
#include "cobalt/cssom/unicode_range_value.h"
#include "cobalt/cssom/universal_selector.h"
#include "cobalt/cssom/url_src_value.h"
#include "cobalt/cssom/url_value.h"
#include "cobalt/cssom/viewport_size.h"

//#include "cobalt/browser/splash_screen_cache.h"
//#include "cobalt/browser/stack_size_constants.h"
//#include "cobalt/browser/switches.h"
//#include "cobalt/browser/web_module_stat_tracker.h"
#include "cobalt/css_parser/parser.h"
//#include "cobalt/debug/backend/debug_module.h"
#include "cobalt/dom/blob.h"
#include "cobalt/dom/csp_delegate_factory.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/global_stats.h"
#include "cobalt/dom/html_script_element.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/local_storage_database.h"
#include "cobalt/dom/mutation_observer_task_manager.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/storage.h"
#include "cobalt/dom/ui_event.h"
#include "cobalt/dom/url.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/dom/window.h"
#include "cobalt/dom_parser/parser.h"
//#include "cobalt/h5vcc/h5vcc.h"
#include "cobalt/layout/topmost_event_target.h"
#include "cobalt/loader/image/animated_image_tracker.h"
//#include "cobalt/media_session/media_session_client.h"
#include "cobalt/page_visibility/visibility_state.h"
#include "cobalt/script/error_report.h"
#include "cobalt/script/javascript_engine.h"
//#include "cobalt/storage/storage_manager.h"
#include "starboard/accessibility.h"
#include "starboard/log.h"

#include "cobalt/base/c_val.h"
#include "cobalt/base/language.h"
#include "cobalt/base/startup_timer.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/type_id.h"
#include "cobalt/base/version_compatibility.h"
#include "cobalt/base/message_queue.h"
#include "cobalt/base/event_dispatcher.h"
#include "cobalt/base/address_sanitizer.h"
#include "cobalt/base/source_location.h"
//#include "cobalt/accessibility/tts_engine.h"
///#include "cobalt/browser/lifecycle_observer.h"
//#include "cobalt/browser/screen_shot_writer.h"
///#include "cobalt/browser/splash_screen_cache.h"
#include "cobalt/css_parser/parser.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/dom/blob.h"
#include "cobalt/dom/csp_delegate.h"
#include "cobalt/dom/dom_settings.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/local_storage_database.h"
#include "cobalt/dom/media_source.h"
#include "cobalt/dom/on_screen_keyboard_bridge.h"
#include "cobalt/dom/pointer_event_init.h"
//#include "cobalt/dom/screenshot_manager.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/dom/window.h"
#include "cobalt/dom_parser/parser.h"
#include "cobalt/layout/layout_manager.h"
#include "cobalt/loader/fetcher_factory.h"
#include "cobalt/math/size.h"
#include "cobalt/media/can_play_type_handler.h"
#include "cobalt/media/web_media_player_factory.h"
//#include "cobalt/network/network_module.h"
#include "cobalt/render_tree/node.h"
#include "cobalt/render_tree/resource_provider.h"

#include "cobalt/render_tree/brush.h"
#include "cobalt/render_tree/composition_node.h"
#include "cobalt/render_tree/dump_render_tree_to_string.h"
#include "cobalt/render_tree/rect_node.h"

#include "cobalt/script/global_environment.h"
#include "cobalt/script/javascript_engine.h"
#include "cobalt/script/script_runner.h"
#include "cobalt/ui_navigation/nav_item.h"
//#include "cobalt/webdriver/session_driver.h"
#include "url/gurl.h"
//#include "cobalt/account/account_manager.h"
#include "cobalt/base/accessibility_caption_settings_changed_event.h"
#include "cobalt/base/application_state.h"
//#include "cobalt/base/message_queue.h"
#include "cobalt/base/on_screen_keyboard_blurred_event.h"
#include "cobalt/base/on_screen_keyboard_focused_event.h"
#include "cobalt/base/on_screen_keyboard_hidden_event.h"
#include "cobalt/base/on_screen_keyboard_shown_event.h"
#include "cobalt/base/on_screen_keyboard_suggestions_updated_event.h"
//#include "cobalt/browser/lifecycle_observer.h"
//#include "cobalt/browser/memory_settings/auto_mem.h"
//#include "cobalt/browser/memory_settings/checker.h"
//#include "cobalt/browser/render_tree_combiner.h"
//#include "cobalt/browser/screen_shot_writer.h"
//#include "cobalt/browser/splash_screen.h"
//#include "cobalt/browser/suspend_fuzzer.h"
//#include "cobalt/browser/system_platform_error_handler.h"
//#include "cobalt/browser/url_handler.h"
//#include "cobalt/browser/web_module.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/on_screen_keyboard_bridge.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/input/input_device_manager.h"
#include "cobalt/layout/layout_manager.h"

#include "cobalt/layout/box_generator.h"
#include "cobalt/dom/text.h"
#include "cobalt/layout/base_direction.h"
#include "cobalt/layout/block_formatting_block_container_box.h"
#include "cobalt/layout/block_level_replaced_box.h"
#include "cobalt/layout/inline_container_box.h"
#include "cobalt/layout/inline_level_replaced_box.h"
#include "cobalt/layout/layout_boxes.h"
#include "cobalt/layout/layout_stat_tracker.h"
#include "cobalt/layout/text_box.h"
#include "cobalt/layout/used_style.h"
#include "cobalt/layout/white_space_processing.h"
#include "cobalt/media/base/video_frame_provider.h"
#include "cobalt/render_tree/image.h"
#include "cobalt/web_animations/keyframe_effect_read_only.h"
#include "starboard/decode_target.h"

#include "cobalt/media/can_play_type_handler.h"
#include "cobalt/media/media_module.h"
//#include "cobalt/network/network_module.h"
//#include "cobalt/overlay_info/qr_code_overlay.h"
#include "cobalt/render_tree/node.h"
#include "cobalt/render_tree/resource_provider.h"
#include "cobalt/render_tree/resource_provider_stub.h"
//#include "cobalt/renderer/renderer_module.h"
//#include "cobalt/script/array_buffer.h"
//#include "cobalt/storage/storage_manager.h"
#include "cobalt/system_window/system_window.h"
//#include "cobalt/webdriver/session_driver.h"
#include "starboard/configuration.h"
#include "starboard/window.h"
#include "url/gurl.h"

#include "cobalt/input/camera_3d.h"

#include "cobalt/dom/event.h"
#include "cobalt/dom/history.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/location.h"
#include "cobalt/dom/media_source.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/mutation_observer_task_manager.h"
#include "cobalt/dom/navigator.h"
#include "cobalt/dom/performance.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/screen.h"
#include "cobalt/dom/screenshot.h"
#include "cobalt/dom/screenshot_manager.h"
#include "cobalt/dom/storage.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/dom/window_timers.h"
//#include "cobalt/media_session/media_session_client.h"
#include "cobalt/script/environment_settings.h"
#include "cobalt/script/javascript_engine.h"
//#include "cobalt/speech/speech_synthesis.h"
#include "starboard/file.h"

#include "cobalt/input/input_device_manager.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/dom_settings.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/dom/on_screen_keyboard_bridge.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/overlay_info/overlay_info_registry.h"

#include "renderer_stub/renderer_module.h"
#include "renderer_stub/pipeline.h"
#include "renderer_stub/submission.h"
#include "renderer_stub/backend/graphics_system.h"
#include "renderer_stub/backend/graphics_context.h"
#include "renderer_stub/backend/default_graphics_system.h"
#include "renderer_stub/backend/graphics_system_stub.h"

#include "extended_html/input_box/common.h"
#include "extended_html/component/common.h"

typedef base::Callback<void(const cobalt::layout::LayoutManager::LayoutResults&)>
    OnRenderTreeProducedCallback;
#endif // ENABLE_COBALT
