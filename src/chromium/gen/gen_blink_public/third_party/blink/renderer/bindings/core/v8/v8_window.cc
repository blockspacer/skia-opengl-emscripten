// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_activate_invisible_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_effect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_playback_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache_error_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_attr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_bar_prop.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_before_activate_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_before_unload_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_cdata_section.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_character_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_clipboard_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_comment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_composition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_condition_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_font_face_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_font_feature_values_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_grouping_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_image_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_import_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyframe_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyframes_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_keyword_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_invert.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_max.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_min.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_negate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_product.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_sum.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_matrix_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_media_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_namespace_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_page_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_perspective.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_position_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rotate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_scale.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_x.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_y.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_declaration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_supports_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_component.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_transform_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_translate.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unit_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unparsed_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_variable_reference_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_viewport_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_element_registry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_custom_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer_item.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer_item_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_display_lock_context.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_type.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_implementation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_parser.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_quad.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_drag_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element_internals.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_error_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_external.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_focus_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set_load_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_frame_request_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_function.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_hash_change_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_headers.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_history.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_all_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_anchor_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_area_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_audio_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_base_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_body_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_br_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_button_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_content_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_data_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_data_list_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_details_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_dialog_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_directory_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_div_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_dlist_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_embed_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_field_set_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_font_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_controls_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_frame_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_frame_set_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_head_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_heading_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_hr_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_iframe_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_input_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_label_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_legend_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_li_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_link_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_map_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_marquee_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_menu_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_meta_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_meter_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_mod_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_object_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_olist_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_opt_group_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_option_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_options_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_output_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_paragraph_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_param_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_picture_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_portal_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_pre_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_progress_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_quote_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_select_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_shadow_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_slot_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_source_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_span_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_style_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_caption_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_cell_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_col_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_row_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_section_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_template_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_text_area_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_time_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_title_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_track_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_ulist_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_unknown_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_idle_deadline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_idle_request_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_idle_request_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_device_capabilities.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_input_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_error.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_channel.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_interceptor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_interface_request_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_watcher.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mutation_record.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_named_node_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_filter.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_iterator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_overscroll_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_page_transition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_element_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_event_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_layout_jank.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_long_task_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_mark.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_navigation_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_entry_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_paint_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_resource_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_server_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pop_state_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_portal_activate_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_portal_host.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_processing_instruction.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_reporting_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_resize_observer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_resize_observer_entry.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scheduling.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_screen.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scripted_task_queue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scripted_task_queue_controller.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_to_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_security_policy_violation_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shared_worker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_media.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_a_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animate_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animate_motion_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animate_transform_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_angle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_boolean.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_integer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_number_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_string.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_transform_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animation_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_circle_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_clip_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_component_transfer_function_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_defs_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_desc_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_discard_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_ellipse_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_blend_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_color_matrix_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_component_transfer_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_composite_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_convolve_matrix_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_diffuse_lighting_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_displacement_map_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_distant_light_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_drop_shadow_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_flood_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_a_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_b_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_g_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_func_r_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_gaussian_blur_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_merge_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_merge_node_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_morphology_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_offset_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_point_light_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_specular_lighting_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_spot_light_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_tile_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_fe_turbulence_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_filter_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_foreign_object_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_g_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_geometry_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_gradient_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_graphics_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_length_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_line_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_linear_gradient_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_marker_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_mask_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_metadata_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_mpath_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_pattern_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_polygon_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_polyline_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_preserve_aspect_ratio.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_radial_gradient_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_set_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_stop_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_string_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_style_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_switch_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_symbol_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_content_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_path_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_positioning_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_title_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_tspan_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_unit_types.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_use_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_view_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_task.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_task_attribution_timing.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_task_worklet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_task_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_metrics.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_cue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_cue_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_time_ranges.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_track_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transform_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transition_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_tree_walker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_url_search_params.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_user_activation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_visual_viewport.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_function.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_cue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_region.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_wheel_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window_post_message_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_task_queue.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream_default_writer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_upload.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_serializer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_evaluator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_expression.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xslt_processor.h"
#include "third_party/blink/renderer/core/dom/global_event_handlers.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/global_fetch.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/frame/window_event_handlers.h"
#include "third_party/blink/renderer/core/frame/window_or_worker_global_scope.h"
#include "third_party/blink/renderer/core/html/portal/dom_window_portal_host.h"
#include "third_party/blink/renderer/core/timing/dom_window_performance.h"
#include "third_party/blink/renderer/core/window_core_constructors.h"
#include "third_party/blink/renderer/core/workers/experimental/window_task_worklet.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_cross_origin_setter_info.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo v8_window_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Window::DomTemplate,
    V8Window::InstallConditionalFeatures,
    "Window",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMWindow.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMWindow::wrapper_type_info_ = v8_window_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMWindow>::value,
    "DOMWindow inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMWindow::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMWindow is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_window_v8_internal {

static void WindowAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->window()), impl);
}

static void SelfAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->self()), impl);
}

static void DocumentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueFast(info, WTF::GetPtr(impl->document()), impl);
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setName(cpp_value);
}

static void LocationAttributeSetter(
    v8::Local<v8::Value> v8_value, const V8CrossOriginSetterInfo& info
) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => location.href
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Window", "location");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "location"))
      .ToLocal(&target)) {
    return;
  }
  if (!target->IsObject()) {
    exception_state.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(
          isolate->GetCurrentContext(),
          V8AtomicString(isolate, "href"),
          v8_value).To(&result)) {
    return;
  }
  if (!result)
    return;
}

static void CustomElementsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CustomElementRegistry* cpp_value(impl->customElements(script_state));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#customElements")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void HistoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  History* cpp_value(WTF::GetPtr(impl->history()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#history")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void LocationbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  BarProp* cpp_value(WTF::GetPtr(impl->locationbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#locationbar")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void LocationbarAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "locationbar");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void MenubarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  BarProp* cpp_value(WTF::GetPtr(impl->menubar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#menubar")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void MenubarAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "menubar");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void PersonalbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  BarProp* cpp_value(WTF::GetPtr(impl->personalbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#personalbar")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PersonalbarAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "personalbar");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScrollbarsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  BarProp* cpp_value(WTF::GetPtr(impl->scrollbars()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#scrollbars")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ScrollbarsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "scrollbars");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void StatusbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  BarProp* cpp_value(WTF::GetPtr(impl->statusbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#statusbar")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void StatusbarAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "statusbar");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ToolbarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  BarProp* cpp_value(WTF::GetPtr(impl->toolbar()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#toolbar")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ToolbarAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "toolbar");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void StatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->status(), info.GetIsolate());
}

static void StatusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setStatus(cpp_value);
}

static void ClosedAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueBool(info, impl->closed());
}

static void FramesAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->frames()), impl);
}

static void LengthAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void TopAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->top()), impl);
}

static void OpenerAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->opener()), impl);
}

static void ParentAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWindow* impl = V8Window::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->parent()), impl);
}

static void NavigatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  Navigator* cpp_value(WTF::GetPtr(impl->navigator()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#navigator")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ApplicationCacheAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ApplicationCache* cpp_value(WTF::GetPtr(impl->applicationCache()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#applicationCache")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void OriginAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "origin");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ExternalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  External* cpp_value(WTF::GetPtr(impl->external()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#external")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ExternalAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "external");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  Screen* cpp_value(WTF::GetPtr(impl->screen()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#screen")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ScreenAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "screen");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void TaskQueueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ScriptedTaskQueueController* cpp_value(WTF::GetPtr(impl->taskQueue()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#TaskQueue")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void TaskQueueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "TaskQueue");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void InnerWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->innerWidth());
}

static void InnerWidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "innerWidth");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void InnerHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->innerHeight());
}

static void InnerHeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "innerHeight");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScrollXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->scrollX());
}

static void ScrollXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "scrollX");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void PageXOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->pageXOffset());
}

static void PageXOffsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "pageXOffset");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScrollYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->scrollY());
}

static void ScrollYAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "scrollY");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void PageYOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->pageYOffset());
}

static void PageYOffsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "pageYOffset");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void VisualViewportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  DOMVisualViewport* cpp_value(WTF::GetPtr(impl->visualViewport()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#visualViewport")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void VisualViewportAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "visualViewport");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScreenXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenX());
}

static void ScreenXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "screenX");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScreenYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenY());
}

static void ScreenYAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "screenY");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void OuterWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->outerWidth());
}

static void OuterWidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "outerWidth");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void OuterHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->outerHeight());
}

static void OuterHeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "outerHeight");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void DevicePixelRatioAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValue(info, impl->devicePixelRatio());
}

static void DevicePixelRatioAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "devicePixelRatio");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void OnorientationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onorientationchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnorientationchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnorientationchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OrientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->orientation());
}

static void ClientInformationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  Navigator* cpp_value(WTF::GetPtr(impl->clientInformation()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#clientInformation")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ClientInformationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "clientInformation");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void EventAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "event");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void OffscreenBufferingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueBool(info, impl->offscreenBuffering());
}

static void OffscreenBufferingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "offscreenBuffering");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScreenLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenLeft());
}

static void ScreenLeftAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "screenLeft");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ScreenTopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueInt(info, impl->screenTop());
}

static void ScreenTopAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "screenTop");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void DefaultStatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->defaultStatus(), info.GetIsolate());
}

static void DefaultStatusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setDefaultStatus(cpp_value);
}

static void DefaultstatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueString(info, impl->defaultStatus(), info.GetIsolate());
}

static void DefaultstatusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setDefaultStatus(cpp_value);
}

static void StyleMediaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  StyleMedia* cpp_value(WTF::GetPtr(impl->styleMedia()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#styleMedia")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnanimationendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onanimationend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnanimationendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnanimationend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnanimationiterationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onanimationiteration()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnanimationiterationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnanimationiteration(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnanimationstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onanimationstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnanimationstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnanimationstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsearchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onsearch()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsearchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnsearch(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntransitionendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->ontransitionend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntransitionendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOntransitionend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkitanimationendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onwebkitanimationend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitanimationendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkitanimationend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkitanimationiterationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onwebkitanimationiteration()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitanimationiterationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkitanimationiteration(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkitanimationstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onwebkitanimationstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitanimationstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkitanimationstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkittransitionendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WTF::GetPtr(impl->onwebkittransitionend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkittransitionendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  impl->setOnwebkittransitionend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void IsSecureContextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  V8SetReturnValueBool(info, impl->isSecureContext());
}

static void TrustedTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  TrustedTypePolicyFactory* cpp_value(WTF::GetPtr(impl->trustedTypes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#TrustedTypes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onabort(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnabortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnabort(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnactivateinvisibleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onactivateinvisible(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnactivateinvisibleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnactivateinvisible(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeactivateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onbeforeactivate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeactivateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnbeforeactivate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnblurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onblur(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnblurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnblur(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oncancel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncancelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncancel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncanplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oncanplay(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncanplayAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncanplay(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncanplaythroughAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oncanplaythrough(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncanplaythroughAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncanplaythrough(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onclose(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncloseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnclose(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncontextmenuAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oncontextmenu(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncontextmenuAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncontextmenu(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncuechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oncuechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncuechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOncuechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndblclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondblclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndblclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndblclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondrag(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndrag(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondragend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondragenter(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragenter(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondragleave(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragleaveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragleave(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragoverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondragover(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragoverAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragover(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondragstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndropAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondrop(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndropAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndrop(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndurationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ondurationchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndurationchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOndurationchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnemptiedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onemptied(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnemptiedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnemptied(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onended(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnendedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnended(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnfocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onfocus(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnfocus(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnformdataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onformdata(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnformdataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnformdata(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninputAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oninput(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninputAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOninput(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninvalidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::oninvalid(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninvalidAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOninvalid(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnkeydownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onkeydown(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnkeydownAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeydown(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnkeypressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onkeypress(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnkeypressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeypress(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnkeyupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onkeyup(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnkeyupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeyup(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadeddataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onloadeddata(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadeddataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadeddata(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadedmetadataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onloadedmetadata(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadedmetadataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadedmetadata(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onloadstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmousedownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmousedown(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmousedownAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousedown(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmouseenter(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::HasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseenter(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmouseleave(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseleaveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Window::HasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseleave(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmousemoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmousemove(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmousemoveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousemove(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmouseout(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseoutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseout(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseoverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmouseover(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseoverAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseover(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmouseup(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseup(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmousewheelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onmousewheel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmousewheelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousewheel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnoverscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onoverscroll(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnoverscrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnoverscroll(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpauseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpause(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpauseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpause(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onplay(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnplayAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnplay(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnplayingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onplaying(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnplayingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnplaying(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onprogress(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnprogressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnprogress(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnratechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onratechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnratechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnratechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onreset(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnreset(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onresize(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnresize(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onscroll(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnscrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnscroll(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnscrollendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onscrollend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnscrollendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnscrollend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnseekedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onseeked(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnseekedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnseeked(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnseekingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onseeking(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnseekingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnseeking(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onselect(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselect(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnstalledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onstalled(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstalledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnstalled(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsubmitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onsubmit(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsubmitAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnsubmit(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsuspendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onsuspend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsuspendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnsuspend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntimeupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ontimeupdate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntimeupdateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntimeupdate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntoggleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ontoggle(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntoggleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntoggle(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnvolumechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onvolumechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnvolumechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnvolumechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwaitingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onwaiting(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwaitingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnwaiting(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwheelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onwheel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwheelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnwheel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnauxclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onauxclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnauxclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnauxclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OngotpointercaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ongotpointercapture(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OngotpointercaptureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOngotpointercapture(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnlostpointercaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onlostpointercapture(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnlostpointercaptureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnlostpointercapture(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerdownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerdown(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerdownAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerdown(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointermoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointermove(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointermoveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointermove(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerrawupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerrawupdate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerrawupdateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerrawupdate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerup(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerup(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointercancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointercancel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointercancelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointercancel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointeroverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerover(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointeroverAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerover(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointeroutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerout(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointeroutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerout(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerenter(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerenter(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onpointerleave(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerleaveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerleave(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchcancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ontouchcancel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchcancelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchcancel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ontouchend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchmoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ontouchmove(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchmoveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchmove(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::ontouchstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onselectstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselectstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectionchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(GlobalEventHandlers::onselectionchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectionchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselectionchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnafterprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onafterprint(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnafterprintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnafterprint(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onbeforeprint(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeprintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnbeforeprint(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onbeforeunload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeunloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnbeforeunload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnBeforeUnloadEventHandler));
}

static void OnhashchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onhashchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnhashchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnhashchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnlanguagechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onlanguagechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnlanguagechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnlanguagechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onmessage(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnmessage(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onmessageerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnmessageerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnofflineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onoffline(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnofflineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnoffline(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnonlineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::ononline(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnonlineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnonline(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpagehideAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onpagehide(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpagehideAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnpagehide(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpageshowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onpageshow(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpageshowAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnpageshow(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpopstateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onpopstate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpopstateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnpopstate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnportalactivateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onportalactivate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnportalactivateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnportalactivate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnrejectionhandledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onrejectionhandled(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnrejectionhandledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnrejectionhandled(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnstorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onstorage(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstorageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnstorage(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunhandledrejectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onunhandledrejection(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunhandledrejectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnunhandledrejection(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(WindowEventHandlers::onunload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  WindowEventHandlers::setOnunload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void PortalHostAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  PortalHost* cpp_value(DOMWindowPortalHost::portalHost(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#portalHost")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PerformanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  Performance* cpp_value(DOMWindowPerformance::performance(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#performance")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PerformanceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "performance");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void TaskWorkletAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  TaskWorklet* cpp_value(WindowTaskWorklet::taskWorklet(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#taskWorklet")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  impl->close(info.GetIsolate());
}

static void CloseOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int dom_template_key; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interface_template =
      data->FindInterfaceTemplate(world, V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interface_template);

  v8::Local<v8::FunctionTemplate> method_template =
      data->FindOrCreateOperationTemplate(
          world,
          &dom_template_key,
          V8Window::CloseMethodCallback,
          v8::Local<v8::Value>(),
          signature,
          0);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, method_template->GetFunction(info.GetIsolate()->GetCurrentContext())
                   .ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl,
          BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cc.tmpl.
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "close");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (property_symbol.HasValue(holder)) {
    V8SetReturnValue(info, property_symbol.GetOrUndefined(holder));
  }
}

static void StopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  impl->stop();
}

static void FocusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  impl->focus(info.GetIsolate());
}

static void FocusOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int dom_template_key; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interface_template =
      data->FindInterfaceTemplate(world, V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interface_template);

  v8::Local<v8::FunctionTemplate> method_template =
      data->FindOrCreateOperationTemplate(
          world,
          &dom_template_key,
          V8Window::FocusMethodCallback,
          v8::Local<v8::Value>(),
          signature,
          0);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, method_template->GetFunction(info.GetIsolate()->GetCurrentContext())
                   .ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl,
          BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cc.tmpl.
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "focus");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (property_symbol.HasValue(holder)) {
    V8SetReturnValue(info, property_symbol.GetOrUndefined(holder));
  }
}

static void BlurMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  impl->blur();
}

static void BlurOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int dom_template_key; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interface_template =
      data->FindInterfaceTemplate(world, V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interface_template);

  v8::Local<v8::FunctionTemplate> method_template =
      data->FindOrCreateOperationTemplate(
          world,
          &dom_template_key,
          V8Window::BlurMethodCallback,
          v8::Local<v8::Value>(),
          signature,
          0);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, method_template->GetFunction(info.GetIsolate()->GetCurrentContext())
                   .ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl,
          BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cc.tmpl.
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "blur");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (property_symbol.HasValue(holder)) {
    V8SetReturnValue(info, property_symbol.GetOrUndefined(holder));
  }
}

static void OpenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "open");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  USVStringOrTrustedURL url;
  V8StringResource<> target;
  V8StringResource<kTreatNullAsEmptyString> features;
  if (!info[0]->IsUndefined()) {
    V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), info[0], url, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
  } else {
    url.SetUSVString(WTF::g_empty_string);
  }
  if (!info[1]->IsUndefined()) {
    target = info[1];
    if (!target.Prepare())
      return;
  } else {
    target = "_blank";
  }
  if (!info[2]->IsUndefined()) {
    features = info[2];
    if (!features.Prepare())
      return;
  } else {
    features = WTF::g_empty_string;
  }

  DOMWindow* result = impl->open(info.GetIsolate(), url, target, features, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void Alert1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->alert(script_state);
}

static void Alert2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8StringResource<> message;
  message = info[0];
  if (!message.Prepare())
    return;

  impl->alert(script_state, message);
}

static void AlertMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_Alert_Method);
        Alert1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_Alert_Method);
        Alert2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "alert");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ConfirmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8StringResource<> message;
  if (!info[0]->IsUndefined()) {
    message = info[0];
    if (!message.Prepare())
      return;
  } else {
    message = WTF::g_empty_string;
  }

  bool result = impl->confirm(script_state, message);
  V8SetReturnValueBool(info, result);
}

static void PromptMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8StringResource<> message;
  V8StringResource<> default_value;
  if (!info[0]->IsUndefined()) {
    message = info[0];
    if (!message.Prepare())
      return;
  } else {
    message = WTF::g_empty_string;
  }
  if (!info[1]->IsUndefined()) {
    default_value = info[1];
    if (!default_value.Prepare())
      return;
  } else {
    default_value = WTF::g_empty_string;
  }

  String result = impl->prompt(script_state, message, default_value);
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void PrintMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->print(script_state);
}

static void PostMessage1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "postMessage");

  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  ScriptValue message;
  V8StringResource<> target_origin;
  Vector<ScriptValue> transfer;
  message = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  target_origin = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    transfer = NativeValueTraits<IDLSequence<ScriptValue>>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    /* Nothing to do */;
  }

  impl->postMessage(info.GetIsolate(), message, target_origin, transfer, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PostMessage2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "postMessage");

  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  ScriptValue message;
  WindowPostMessageOptions* options;
  message = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<WindowPostMessageOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->postMessage(info.GetIsolate(), message, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PostMessageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        PostMessage2Method(info);
        return;
      }
      break;
    case 2:
      if (info[1]->IsUndefined()) {
        PostMessage2Method(info);
        return;
      }
      if (IsUndefinedOrNull(info[1])) {
        PostMessage2Method(info);
        return;
      }
      if (info[1]->IsObject()) {
        PostMessage2Method(info);
        return;
      }
      if (true) {
        PostMessage1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        PostMessage1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "postMessage");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void PostMessageOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info) {
  static int dom_template_key; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(info.GetIsolate());
  const DOMWrapperWorld& world = DOMWrapperWorld::World(info.GetIsolate()->GetCurrentContext());
  v8::Local<v8::FunctionTemplate> interface_template =
      data->FindInterfaceTemplate(world, V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Signature> signature = v8::Signature::New(info.GetIsolate(), interface_template);

  v8::Local<v8::FunctionTemplate> method_template =
      data->FindOrCreateOperationTemplate(
          world,
          &dom_template_key,
          V8Window::PostMessageMethodCallback,
          v8::Local<v8::Value>(),
          signature,
          1);
  // Return the function by default, unless the user script has overwritten it.
  V8SetReturnValue(info, method_template->GetFunction(info.GetIsolate()->GetCurrentContext())
                   .ToLocalChecked());

  DOMWindow* impl = V8Window::ToImpl(info.Holder());
  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl,
          BindingSecurity::ErrorReportOption::kDoNotReport)) {
    return;
  }

  // {{method.name}} must be same with |methodName| (=name) in
  // {{cpp_class}}OriginSafeMethodSetter defined in interface.cc.tmpl.
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(), "postMessage");
  v8::Local<v8::Object> holder = v8::Local<v8::Object>::Cast(info.Holder());
  if (property_symbol.HasValue(holder)) {
    V8SetReturnValue(info, property_symbol.GetOrUndefined(holder));
  }
}

static void QueueMicrotaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "queueMicrotask");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8VoidFunction* callback;
  if (info[0]->IsFunction()) {
    callback = V8VoidFunction::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  impl->queueMicrotask(callback);
}

static void RequestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "requestAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  V8SetReturnValueInt(info, impl->requestAnimationFrame(callback));
}

static void CancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "cancelAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->cancelAnimationFrame(handle);
}

static void RequestPostAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "requestPostAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  V8SetReturnValueInt(info, impl->requestPostAnimationFrame(callback));
}

static void CancelPostAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "cancelPostAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->cancelPostAnimationFrame(handle);
}

static void CaptureEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  impl->captureEvents();
}

static void ReleaseEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  impl->releaseEvents();
}

static void RequestIdleCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "requestIdleCallback");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8IdleRequestCallback* callback;
  IdleRequestOptions* options;
  if (info[0]->IsFunction()) {
    callback = V8IdleRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<IdleRequestOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueInt(info, impl->requestIdleCallback(callback, options));
}

static void CancelIdleCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "cancelIdleCallback");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->cancelIdleCallback(handle);
}

static void GetComputedStyleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "getComputedStyle");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* elt;
  V8StringResource<kTreatNullAndUndefinedAsNullString> pseudo_elt;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  elt = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!elt) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    CSSStyleDeclaration* result = impl->getComputedStyle(elt);
    // [NewObject] must always create a new wrapper.  Check that a wrapper
    // does not exist yet.
    DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
    V8SetReturnValue(info, result);
    return;
  }
  pseudo_elt = info[1];
  if (!pseudo_elt.Prepare())
    return;

  CSSStyleDeclaration* result = impl->getComputedStyle(elt, pseudo_elt);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void MatchMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "matchMedia");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> query;
  query = info[0];
  if (!query.Prepare())
    return;

  MediaQueryList* result = impl->matchMedia(query);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void MoveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "moveTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->moveTo(x, y);
}

static void MoveByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "moveBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->moveBy(x, y);
}

static void ResizeToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "resizeTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->resizeTo(x, y);
}

static void ResizeByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "resizeBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->resizeBy(x, y);
}

static void Scroll1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scroll");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScrollToOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ScrollToOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scroll(options);
}

static void Scroll2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scroll");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scroll(x, y);
}

static void ScrollMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        Scroll1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        Scroll1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        Scroll2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scroll");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ScrollTo1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScrollToOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ScrollToOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollTo(options);
}

static void ScrollTo2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollTo");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollTo(x, y);
}

static void ScrollToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        ScrollTo1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        ScrollTo1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        ScrollTo2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollTo");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ScrollBy1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScrollToOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ScrollToOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollBy(options);
}

static void ScrollBy2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollBy");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollBy(x, y);
}

static void ScrollByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        ScrollBy1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        ScrollBy1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        ScrollBy2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "scrollBy");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void GetSelectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  V8SetReturnValue(info, impl->getSelection());
}

static void GetComputedAccessibleNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "getComputedAccessibleNode");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  ScriptPromise result = impl->getComputedAccessibleNode(script_state, element);
  V8SetReturnValue(info, result.V8Value());
}

static void FindMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "find");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  V8StringResource<> string;
  bool case_sensitive;
  bool backwards;
  bool wrap;
  bool whole_word;
  bool search_in_frames;
  bool show_dialog;
  string = info[0];
  if (!string.Prepare())
    return;

  case_sensitive = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  backwards = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  wrap = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  whole_word = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  search_in_frames = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  show_dialog = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->find(string, case_sensitive, backwards, wrap, whole_word, search_in_frames, show_dialog));
}

static void WebkitRequestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitRequestAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  V8SetReturnValueInt(info, impl->webkitRequestAnimationFrame(callback));
}

static void WebkitCancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitCancelAnimationFrame");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t id;
  id = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->cancelAnimationFrame(id);
}

static void FetchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "fetch");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RequestOrUSVString input;
  RequestInit* init;
  V8RequestOrUSVString::ToImpl(info.GetIsolate(), info[0], input, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('init') is not an object.");
    return;
  }
  init = NativeValueTraits<RequestInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = GlobalFetch::fetch(script_state, *impl, input, init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void BtoaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "btoa");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> btoa;
  btoa = info[0];
  if (!btoa.Prepare())
    return;

  String result = WindowOrWorkerGlobalScope::btoa(*impl, btoa, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void AtobMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "atob");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> atob;
  atob = info[0];
  if (!atob.Prepare())
    return;

  String result = WindowOrWorkerGlobalScope::atob(*impl, atob, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void SetTimeout1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setTimeout");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8Function* handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  if (info[0]->IsFunction()) {
    handler = V8Function::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setTimeout(script_state, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void SetTimeout2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setTimeout");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  StringOrTrustedScript handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  V8StringOrTrustedScript::ToImpl(info.GetIsolate(), info[0], handler, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setTimeout(script_state, *impl, handler, timeout, arguments, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void SetTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (info[0]->IsFunction()) {
        SetTimeout1Method(info);
        return;
      }
      if (true) {
        SetTimeout2Method(info);
        return;
      }
      break;
    case 2:
      if (info[0]->IsFunction()) {
        SetTimeout1Method(info);
        return;
      }
      if (true) {
        SetTimeout2Method(info);
        return;
      }
      break;
    case 3:
      if (info[0]->IsFunction()) {
        SetTimeout1Method(info);
        return;
      }
      if (true) {
        SetTimeout2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setTimeout");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "clearTimeout");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  int32_t handle;
  if (!info[0]->IsUndefined()) {
    handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    handle = 0;
  }

  WindowOrWorkerGlobalScope::clearTimeout(*impl, handle);
}

static void SetInterval1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setInterval");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8Function* handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  if (info[0]->IsFunction()) {
    handler = V8Function::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setInterval(script_state, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void SetInterval2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setInterval");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  StringOrTrustedScript handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  V8StringOrTrustedScript::ToImpl(info.GetIsolate(), info[0], handler, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setInterval(script_state, *impl, handler, timeout, arguments, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void SetIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (info[0]->IsFunction()) {
        SetInterval1Method(info);
        return;
      }
      if (true) {
        SetInterval2Method(info);
        return;
      }
      break;
    case 2:
      if (info[0]->IsFunction()) {
        SetInterval1Method(info);
        return;
      }
      if (true) {
        SetInterval2Method(info);
        return;
      }
      break;
    case 3:
      if (info[0]->IsFunction()) {
        SetInterval1Method(info);
        return;
      }
      if (true) {
        SetInterval2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "setInterval");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "clearInterval");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  int32_t handle;
  if (!info[0]->IsUndefined()) {
    handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    handle = 0;
  }

  WindowOrWorkerGlobalScope::clearInterval(*impl, handle);
}

static void CreateImageBitmap1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "createImageBitmap");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas image_bitmap;
  ImageBitmapOptions* options;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image_bitmap, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ImageBitmapOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = WindowOrWorkerGlobalScope::createImageBitmap(script_state, *impl, image_bitmap, options);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateImageBitmap2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "createImageBitmap");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas image_bitmap;
  int32_t sx;
  int32_t sy;
  int32_t sw;
  int32_t sh;
  ImageBitmapOptions* options;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image_bitmap, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  sx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  sy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[5]->IsNullOrUndefined() && !info[5]->IsObject()) {
    exception_state.ThrowTypeError("parameter 6 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ImageBitmapOptions>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = WindowOrWorkerGlobalScope::createImageBitmap(script_state, *impl, image_bitmap, sx, sy, sw, sh, options);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateImageBitmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(6, info.Length())) {
    case 1:
      if (true) {
        CreateImageBitmap1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateImageBitmap1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        CreateImageBitmap2Method(info);
        return;
      }
      break;
    case 6:
      if (true) {
        CreateImageBitmap2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "createImageBitmap");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 2, 5, 6]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void DOMWindowOriginSafeMethodSetter(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<void>& info) {
  if (!name->IsString())
    return;
  v8::Local<v8::Object> holder =
      V8Window::FindInstanceInPrototypeChain(info.Holder(), info.GetIsolate());
  if (holder.IsEmpty())
    return;
  DOMWindow* impl = V8Window::ToImpl(holder);
  v8::String::Utf8Value name_in_utf8(info.GetIsolate(), name);
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kSetterContext,
      "Window",
      *name_in_utf8);
  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl, exception_state)) {
    return;
  }

  // |methodName| must be same with {{method.name}} in
  // {{method.name}}OriginSafeMethodGetter{{world_suffix}} defined in
  // methods.cc.tmpl
  V8PrivateProperty::GetSymbol(info.GetIsolate(), *name_in_utf8)
      .Set(v8::Local<v8::Object>::Cast(info.Holder()), v8_value);
}
static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  DOMWindow* impl = V8Window::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  DOMWindow* result = impl->AnonymousIndexedGetter(index);
  V8SetReturnValueFast(info, result, impl);
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8Window::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

static const struct {
  using GetterCallback = void(*)(const v8::PropertyCallbackInfo<v8::Value>&);
  using SetterCallback = void(*)(v8::Local<v8::Value>, const V8CrossOriginSetterInfo&);

  const char* const name;
  const GetterCallback getter;
  const SetterCallback setter;
} kCrossOriginAttributeTable[] = {
  {
    "window",
    dom_window_v8_internal::WindowAttributeGetter,
    nullptr,
  },
  {
    "self",
    dom_window_v8_internal::SelfAttributeGetter,
    nullptr,
  },
  {
    "location",
    V8Window::LocationAttributeGetterCustom,
    &dom_window_v8_internal::LocationAttributeSetter,
  },
  {
    "closed",
    dom_window_v8_internal::ClosedAttributeGetter,
    nullptr,
  },
  {
    "frames",
    dom_window_v8_internal::FramesAttributeGetter,
    nullptr,
  },
  {
    "length",
    dom_window_v8_internal::LengthAttributeGetter,
    nullptr,
  },
  {
    "top",
    dom_window_v8_internal::TopAttributeGetter,
    nullptr,
  },
  {
    "opener",
    dom_window_v8_internal::OpenerAttributeGetter,
    nullptr,
  },
  {
    "parent",
    dom_window_v8_internal::ParentAttributeGetter,
    nullptr,
  },
  {"close", &dom_window_v8_internal::CloseOriginSafeMethodGetter, nullptr},
  {"focus", &dom_window_v8_internal::FocusOriginSafeMethodGetter, nullptr},
  {"blur", &dom_window_v8_internal::BlurOriginSafeMethodGetter, nullptr},
  {"postMessage", &dom_window_v8_internal::PostMessageOriginSafeMethodGetter, nullptr},
};
}  // namespace dom_window_v8_internal

void V8Window::WindowAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_window_Getter");

  dom_window_v8_internal::WindowAttributeGetter(info);
}

void V8Window::SelfAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_self_Getter");

  dom_window_v8_internal::SelfAttributeGetter(info);
}

void V8Window::DocumentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_document_Getter");

  dom_window_v8_internal::DocumentAttributeGetter(info);
}

void V8Window::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_name_Getter");

  dom_window_v8_internal::NameAttributeGetter(info);
}

void V8Window::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8Window::LocationAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_location_Getter");

  V8Window::LocationAttributeGetterCustom(info);
}

void V8Window::LocationAttributeSetterCallback(
    v8::Local<v8::Name>, v8::Local<v8::Value> v8_value, const v8::PropertyCallbackInfo<void>& info
) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_location_Setter");

  dom_window_v8_internal::LocationAttributeSetter(
      v8_value, V8CrossOriginSetterInfo(info.GetIsolate(), info.Holder()));
}

void V8Window::CustomElementsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_customElements_Getter");

  dom_window_v8_internal::CustomElementsAttributeGetter(info);
}

void V8Window::HistoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_history_Getter");

  dom_window_v8_internal::HistoryAttributeGetter(info);
}

void V8Window::LocationbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_locationbar_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBarPropLocationbar);

  dom_window_v8_internal::LocationbarAttributeGetter(info);
}

void V8Window::LocationbarAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_locationbar_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropLocationbar);

  dom_window_v8_internal::LocationbarAttributeSetter(v8_value, info);
}

void V8Window::MenubarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_menubar_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBarPropMenubar);

  dom_window_v8_internal::MenubarAttributeGetter(info);
}

void V8Window::MenubarAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_menubar_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropMenubar);

  dom_window_v8_internal::MenubarAttributeSetter(v8_value, info);
}

void V8Window::PersonalbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_personalbar_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBarPropPersonalbar);

  dom_window_v8_internal::PersonalbarAttributeGetter(info);
}

void V8Window::PersonalbarAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_personalbar_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropPersonalbar);

  dom_window_v8_internal::PersonalbarAttributeSetter(v8_value, info);
}

void V8Window::ScrollbarsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollbars_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBarPropScrollbars);

  dom_window_v8_internal::ScrollbarsAttributeGetter(info);
}

void V8Window::ScrollbarsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollbars_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropScrollbars);

  dom_window_v8_internal::ScrollbarsAttributeSetter(v8_value, info);
}

void V8Window::StatusbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_statusbar_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBarPropStatusbar);

  dom_window_v8_internal::StatusbarAttributeGetter(info);
}

void V8Window::StatusbarAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_statusbar_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropStatusbar);

  dom_window_v8_internal::StatusbarAttributeSetter(v8_value, info);
}

void V8Window::ToolbarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_toolbar_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBarPropToolbar);

  dom_window_v8_internal::ToolbarAttributeGetter(info);
}

void V8Window::ToolbarAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_toolbar_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kBarPropToolbar);

  dom_window_v8_internal::ToolbarAttributeSetter(v8_value, info);
}

void V8Window::StatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_status_Getter");

  dom_window_v8_internal::StatusAttributeGetter(info);
}

void V8Window::StatusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_status_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::StatusAttributeSetter(v8_value, info);
}

void V8Window::ClosedAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_closed_Getter");

  dom_window_v8_internal::ClosedAttributeGetter(info);
}

void V8Window::FramesAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_frames_Getter");

  dom_window_v8_internal::FramesAttributeGetter(info);
}

void V8Window::LengthAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_length_Getter");

  dom_window_v8_internal::LengthAttributeGetter(info);
}

void V8Window::TopAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_top_Getter");

  dom_window_v8_internal::TopAttributeGetter(info);
}

void V8Window::OpenerAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_opener_Getter");

  dom_window_v8_internal::OpenerAttributeGetter(info);
}

void V8Window::OpenerAttributeSetterCallback(
    v8::Local<v8::Name>, v8::Local<v8::Value> v8_value, const v8::PropertyCallbackInfo<void>& info
) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_opener_Setter");

  V8Window::OpenerAttributeSetterCustom(v8_value, info);
}

void V8Window::ParentAttributeGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_parent_Getter");

  dom_window_v8_internal::ParentAttributeGetter(info);
}

void V8Window::FrameElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_frameElement_Getter");

  V8Window::FrameElementAttributeGetterCustom(info);
}

void V8Window::NavigatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_navigator_Getter");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (script_state->World().IsIsolatedWorld() && context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogGetter("Window.navigator");
  }

  dom_window_v8_internal::NavigatorAttributeGetter(info);
}

void V8Window::ApplicationCacheAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_applicationCache_Getter");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (script_state->World().IsIsolatedWorld() && context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogGetter("Window.applicationCache");
  }

  dom_window_v8_internal::ApplicationCacheAttributeGetter(info);
}

void V8Window::OriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_origin_Getter");

  dom_window_v8_internal::OriginAttributeGetter(info);
}

void V8Window::OriginAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_origin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OriginAttributeSetter(v8_value, info);
}

void V8Window::ExternalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_external_Getter");

  dom_window_v8_internal::ExternalAttributeGetter(info);
}

void V8Window::ExternalAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_external_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::ExternalAttributeSetter(v8_value, info);
}

void V8Window::ScreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screen_Getter");

  dom_window_v8_internal::ScreenAttributeGetter(info);
}

void V8Window::ScreenAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screen_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::ScreenAttributeSetter(v8_value, info);
}

void V8Window::TaskQueueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TaskQueue_Getter");

  dom_window_v8_internal::TaskQueueAttributeGetter(info);
}

void V8Window::TaskQueueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TaskQueue_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::TaskQueueAttributeSetter(v8_value, info);
}

void V8Window::InnerWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerWidth_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowInnerWidth);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowInnerWidth);

  dom_window_v8_internal::InnerWidthAttributeGetter(info);
}

void V8Window::InnerWidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerWidth_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowInnerWidth);

  dom_window_v8_internal::InnerWidthAttributeSetter(v8_value, info);
}

void V8Window::InnerHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerHeight_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowInnerHeight);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowInnerHeight);

  dom_window_v8_internal::InnerHeightAttributeGetter(info);
}

void V8Window::InnerHeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_innerHeight_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowInnerHeight);

  dom_window_v8_internal::InnerHeightAttributeSetter(v8_value, info);
}

void V8Window::ScrollXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollX_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowScrollX);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowScrollX);

  dom_window_v8_internal::ScrollXAttributeGetter(info);
}

void V8Window::ScrollXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollX_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScrollX);

  dom_window_v8_internal::ScrollXAttributeSetter(v8_value, info);
}

void V8Window::PageXOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageXOffset_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowPageXOffset);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowPageXOffset);

  dom_window_v8_internal::PageXOffsetAttributeGetter(info);
}

void V8Window::PageXOffsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageXOffset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowPageXOffset);

  dom_window_v8_internal::PageXOffsetAttributeSetter(v8_value, info);
}

void V8Window::ScrollYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollY_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowScrollY);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowScrollY);

  dom_window_v8_internal::ScrollYAttributeGetter(info);
}

void V8Window::ScrollYAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollY_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScrollY);

  dom_window_v8_internal::ScrollYAttributeSetter(v8_value, info);
}

void V8Window::PageYOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageYOffset_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowPageYOffset);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowPageYOffset);

  dom_window_v8_internal::PageYOffsetAttributeGetter(info);
}

void V8Window::PageYOffsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_pageYOffset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowPageYOffset);

  dom_window_v8_internal::PageYOffsetAttributeSetter(v8_value, info);
}

void V8Window::VisualViewportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_visualViewport_Getter");

  dom_window_v8_internal::VisualViewportAttributeGetter(info);
}

void V8Window::VisualViewportAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_visualViewport_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::VisualViewportAttributeSetter(v8_value, info);
}

void V8Window::ScreenXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenX_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowScreenX);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowScreenX);

  dom_window_v8_internal::ScreenXAttributeGetter(info);
}

void V8Window::ScreenXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenX_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenX);

  dom_window_v8_internal::ScreenXAttributeSetter(v8_value, info);
}

void V8Window::ScreenYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenY_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowScreenY);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowScreenY);

  dom_window_v8_internal::ScreenYAttributeGetter(info);
}

void V8Window::ScreenYAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenY_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenY);

  dom_window_v8_internal::ScreenYAttributeSetter(v8_value, info);
}

void V8Window::OuterWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerWidth_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowOuterWidth);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowOuterWidth);

  dom_window_v8_internal::OuterWidthAttributeGetter(info);
}

void V8Window::OuterWidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerWidth_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowOuterWidth);

  dom_window_v8_internal::OuterWidthAttributeSetter(v8_value, info);
}

void V8Window::OuterHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerHeight_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowOuterHeight);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowOuterHeight);

  dom_window_v8_internal::OuterHeightAttributeGetter(info);
}

void V8Window::OuterHeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_outerHeight_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowOuterHeight);

  dom_window_v8_internal::OuterHeightAttributeSetter(v8_value, info);
}

void V8Window::DevicePixelRatioAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_devicePixelRatio_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowDevicePixelRatio);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowDevicePixelRatio);

  dom_window_v8_internal::DevicePixelRatioAttributeGetter(info);
}

void V8Window::DevicePixelRatioAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_devicePixelRatio_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDevicePixelRatio);

  dom_window_v8_internal::DevicePixelRatioAttributeSetter(v8_value, info);
}

void V8Window::OnorientationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onorientationchange_Getter");

  dom_window_v8_internal::OnorientationchangeAttributeGetter(info);
}

void V8Window::OnorientationchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onorientationchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnorientationchangeAttributeSetter(v8_value, info);
}

void V8Window::OrientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_orientation_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowOrientation);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowOrientation);

  dom_window_v8_internal::OrientationAttributeGetter(info);
}

void V8Window::WebkitURLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URL::GetWrapperTypeInfo());
}

void V8Window::ClientInformationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clientInformation_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowClientInformation);

  dom_window_v8_internal::ClientInformationAttributeGetter(info);
}

void V8Window::ClientInformationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clientInformation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowClientInformation);

  dom_window_v8_internal::ClientInformationAttributeSetter(v8_value, info);
}

void V8Window::EventAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_event_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowEvent);

  V8Window::EventAttributeGetterCustom(info);
}

void V8Window::EventAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_event_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowEvent);

  dom_window_v8_internal::EventAttributeSetter(v8_value, info);
}

void V8Window::OffscreenBufferingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_offscreenBuffering_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowOffscreenBuffering);

  dom_window_v8_internal::OffscreenBufferingAttributeGetter(info);
}

void V8Window::OffscreenBufferingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_offscreenBuffering_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowOffscreenBuffering);

  dom_window_v8_internal::OffscreenBufferingAttributeSetter(v8_value, info);
}

void V8Window::ScreenLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenLeft_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowScreenLeft);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowScreenLeft);

  dom_window_v8_internal::ScreenLeftAttributeGetter(info);
}

void V8Window::ScreenLeftAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenLeft_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenLeft);

  dom_window_v8_internal::ScreenLeftAttributeSetter(v8_value, info);
}

void V8Window::ScreenTopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenTop_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowScreenTop);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kWindowScreenTop);

  dom_window_v8_internal::ScreenTopAttributeGetter(info);
}

void V8Window::ScreenTopAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_screenTop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowScreenTop);

  dom_window_v8_internal::ScreenTopAttributeSetter(v8_value, info);
}

void V8Window::DefaultStatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultStatus_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowDefaultStatus);

  dom_window_v8_internal::DefaultStatusAttributeGetter(info);
}

void V8Window::DefaultStatusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultStatus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDefaultStatus);

  dom_window_v8_internal::DefaultStatusAttributeSetter(v8_value, info);
}

void V8Window::DefaultstatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultstatus_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowDefaultstatus);

  dom_window_v8_internal::DefaultstatusAttributeGetter(info);
}

void V8Window::DefaultstatusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_defaultstatus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kWindowDefaultstatus);

  dom_window_v8_internal::DefaultstatusAttributeSetter(v8_value, info);
}

void V8Window::StyleMediaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_styleMedia_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kStyleMedia);

  dom_window_v8_internal::StyleMediaAttributeGetter(info);
}

void V8Window::WebKitMutationObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebKitMutationObserver_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedMutationObserverConstructor);

  V8ConstructorAttributeGetter(property, info, V8MutationObserver::GetWrapperTypeInfo());
}

void V8Window::OnanimationendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationend_Getter");

  dom_window_v8_internal::OnanimationendAttributeGetter(info);
}

void V8Window::OnanimationendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnanimationendAttributeSetter(v8_value, info);
}

void V8Window::OnanimationiterationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationiteration_Getter");

  dom_window_v8_internal::OnanimationiterationAttributeGetter(info);
}

void V8Window::OnanimationiterationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationiteration_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnanimationiterationAttributeSetter(v8_value, info);
}

void V8Window::OnanimationstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationstart_Getter");

  dom_window_v8_internal::OnanimationstartAttributeGetter(info);
}

void V8Window::OnanimationstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onanimationstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnanimationstartAttributeSetter(v8_value, info);
}

void V8Window::OnsearchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsearch_Getter");

  dom_window_v8_internal::OnsearchAttributeGetter(info);
}

void V8Window::OnsearchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsearch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnsearchAttributeSetter(v8_value, info);
}

void V8Window::OntransitionendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontransitionend_Getter");

  dom_window_v8_internal::OntransitionendAttributeGetter(info);
}

void V8Window::OntransitionendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontransitionend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntransitionendAttributeSetter(v8_value, info);
}

void V8Window::OnwebkitanimationendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationend_Getter");

  dom_window_v8_internal::OnwebkitanimationendAttributeGetter(info);
}

void V8Window::OnwebkitanimationendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnwebkitanimationendAttributeSetter(v8_value, info);
}

void V8Window::OnwebkitanimationiterationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationiteration_Getter");

  dom_window_v8_internal::OnwebkitanimationiterationAttributeGetter(info);
}

void V8Window::OnwebkitanimationiterationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationiteration_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnwebkitanimationiterationAttributeSetter(v8_value, info);
}

void V8Window::OnwebkitanimationstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationstart_Getter");

  dom_window_v8_internal::OnwebkitanimationstartAttributeGetter(info);
}

void V8Window::OnwebkitanimationstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkitanimationstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnwebkitanimationstartAttributeSetter(v8_value, info);
}

void V8Window::OnwebkittransitionendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkittransitionend_Getter");

  dom_window_v8_internal::OnwebkittransitionendAttributeGetter(info);
}

void V8Window::OnwebkittransitionendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwebkittransitionend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnwebkittransitionendAttributeSetter(v8_value, info);
}

void V8Window::IsSecureContextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_isSecureContext_Getter");

  dom_window_v8_internal::IsSecureContextAttributeGetter(info);
}

void V8Window::WebKitCSSMatrixConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebKitCSSMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrix::GetWrapperTypeInfo());
}

void V8Window::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedTypes_Getter");

  dom_window_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8Window::TrustedTypePolicyFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedTypePolicyFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedTypePolicyFactory::GetWrapperTypeInfo());
}

void V8Window::AccessibleNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AccessibleNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AccessibleNode::GetWrapperTypeInfo());
}

void V8Window::AccessibleNodeListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AccessibleNodeList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AccessibleNodeList::GetWrapperTypeInfo());
}

void V8Window::ComputedAccessibleNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ComputedAccessibleNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ComputedAccessibleNode::GetWrapperTypeInfo());
}

void V8Window::ScrollTimelineConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScrollTimeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ScrollTimeline::GetWrapperTypeInfo());
}

void V8Window::AudioTrackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioTrack::GetWrapperTypeInfo());
}

void V8Window::AudioTrackListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioTrackList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioTrackList::GetWrapperTypeInfo());
}

void V8Window::VideoTrackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VideoTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VideoTrack::GetWrapperTypeInfo());
}

void V8Window::VideoTrackListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VideoTrackList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VideoTrackList::GetWrapperTypeInfo());
}

void V8Window::CSSFontFeatureValuesRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSFontFeatureValuesRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSFontFeatureValuesRule::GetWrapperTypeInfo());
}

void V8Window::CSSViewportRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSViewportRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSViewportRule::GetWrapperTypeInfo());
}

void V8Window::BeforeActivateEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BeforeActivateEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BeforeActivateEvent::GetWrapperTypeInfo());
}

void V8Window::DisplayLockContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DisplayLockContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DisplayLockContext::GetWrapperTypeInfo());
}

void V8Window::ElementInternalsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ElementInternals_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ElementInternals::GetWrapperTypeInfo());
}

void V8Window::PerformanceElementTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceElementTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceElementTiming::GetWrapperTypeInfo());
}

void V8Window::PerformanceEventTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceEventTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceEventTiming::GetWrapperTypeInfo());
}

void V8Window::SchedulingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Scheduling_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Scheduling::GetWrapperTypeInfo());
}

void V8Window::FormDataEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FormDataEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FormDataEvent::GetWrapperTypeInfo());
}

void V8Window::ActivateInvisibleEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ActivateInvisibleEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ActivateInvisibleEvent::GetWrapperTypeInfo());
}

void V8Window::PerformanceLayoutJankConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceLayoutJank_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceLayoutJank::GetWrapperTypeInfo());
}

void V8Window::MojoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Mojo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Mojo::GetWrapperTypeInfo());
}

void V8Window::MojoHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoHandle::GetWrapperTypeInfo());
}

void V8Window::MojoWatcherConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoWatcher_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoWatcher::GetWrapperTypeInfo());
}

void V8Window::MojoInterfaceInterceptorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoInterfaceInterceptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceInterceptor::GetWrapperTypeInfo());
}

void V8Window::MojoInterfaceRequestEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MojoInterfaceRequestEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MojoInterfaceRequestEvent::GetWrapperTypeInfo());
}

void V8Window::OffscreenCanvasConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OffscreenCanvas_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvas::GetWrapperTypeInfo());
}

void V8Window::OverscrollEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OverscrollEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OverscrollEvent::GetWrapperTypeInfo());
}

void V8Window::HTMLPortalElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLPortalElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLPortalElement::GetWrapperTypeInfo());
}

void V8Window::PortalActivateEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PortalActivateEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PortalActivateEvent::GetWrapperTypeInfo());
}

void V8Window::PortalHostConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PortalHost_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PortalHost::GetWrapperTypeInfo());
}

void V8Window::ScrollStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScrollState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ScrollState::GetWrapperTypeInfo());
}

void V8Window::SharedWorkerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SharedWorker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SharedWorker::GetWrapperTypeInfo());
}

void V8Window::FontFaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FontFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FontFace::GetWrapperTypeInfo());
}

void V8Window::ReadableStreamDefaultReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ReadableStreamDefaultReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStreamDefaultReader::GetWrapperTypeInfo());
}

void V8Window::WritableStreamDefaultWriterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WritableStreamDefaultWriter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStreamDefaultWriter::GetWrapperTypeInfo());
}

void V8Window::TrustedHTMLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedHTML_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedHTML::GetWrapperTypeInfo());
}

void V8Window::TrustedScriptConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedScript_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedScript::GetWrapperTypeInfo());
}

void V8Window::TrustedScriptURLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedScriptURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedScriptURL::GetWrapperTypeInfo());
}

void V8Window::TrustedTypePolicyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedTypePolicy_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedTypePolicy::GetWrapperTypeInfo());
}

void V8Window::TrustedURLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrustedURL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrustedURL::GetWrapperTypeInfo());
}

void V8Window::UserActivationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_UserActivation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8UserActivation::GetWrapperTypeInfo());
}

void V8Window::AnimationPlaybackEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationPlaybackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AnimationPlaybackEvent::GetWrapperTypeInfo());
}

void V8Window::AnimationTimelineConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationTimeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AnimationTimeline::GetWrapperTypeInfo());
}

void V8Window::DocumentTimelineConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DocumentTimeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DocumentTimeline::GetWrapperTypeInfo());
}

void V8Window::VTTRegionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VTTRegion_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VTTRegion::GetWrapperTypeInfo());
}

void V8Window::TaskWorkletConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TaskWorklet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TaskWorklet::GetWrapperTypeInfo());
}

void V8Window::WorkerTaskQueueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WorkerTaskQueue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkerTaskQueue::GetWrapperTypeInfo());
}

void V8Window::ScriptedTaskQueueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScriptedTaskQueue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ScriptedTaskQueue::GetWrapperTypeInfo());
}

void V8Window::ScriptedTaskQueueControllerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScriptedTaskQueueController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ScriptedTaskQueueController::GetWrapperTypeInfo());
}

void V8Window::TaskConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Task_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Task::GetWrapperTypeInfo());
}

void V8Window::TaskWorkletGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TaskWorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TaskWorkletGlobalScope::GetWrapperTypeInfo());
}

void V8Window::XSLTProcessorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XSLTProcessor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XSLTProcessor::GetWrapperTypeInfo());
}

void V8Window::ApplicationCacheConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ApplicationCache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ApplicationCache::GetWrapperTypeInfo());
}

void V8Window::ApplicationCacheErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ApplicationCacheErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ApplicationCacheErrorEvent::GetWrapperTypeInfo());
}

void V8Window::WorkletConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Worklet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Worklet::GetWrapperTypeInfo());
}

void V8Window::AbortControllerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AbortController_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortController::GetWrapperTypeInfo());
}

void V8Window::AbortSignalConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AbortSignal_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbortSignal::GetWrapperTypeInfo());
}

void V8Window::AnimationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Animation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Animation::GetWrapperTypeInfo());
}

void V8Window::AnimationEffectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationEffect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AnimationEffect::GetWrapperTypeInfo());
}

void V8Window::AnimationEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnimationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AnimationEvent::GetWrapperTypeInfo());
}

void V8Window::AttrConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Attr_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Attr::GetWrapperTypeInfo());
}

void V8Window::BarPropConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BarProp_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BarProp::GetWrapperTypeInfo());
}

void V8Window::BeforeUnloadEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BeforeUnloadEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BeforeUnloadEvent::GetWrapperTypeInfo());
}

void V8Window::BlobConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Blob_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Blob::GetWrapperTypeInfo());
}

void V8Window::CDATASectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CDATASection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CDATASection::GetWrapperTypeInfo());
}

void V8Window::CSSConditionRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSConditionRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSConditionRule::GetWrapperTypeInfo());
}

void V8Window::CSSConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSS_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSS::GetWrapperTypeInfo());
}

void V8Window::CSSFontFaceRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSFontFaceRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSFontFaceRule::GetWrapperTypeInfo());
}

void V8Window::CSSGroupingRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSGroupingRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSGroupingRule::GetWrapperTypeInfo());
}

void V8Window::CSSImageValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSImageValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSImageValue::GetWrapperTypeInfo());
}

void V8Window::CSSImportRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSImportRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSImportRule::GetWrapperTypeInfo());
}

void V8Window::CSSKeyframeRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSKeyframeRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSKeyframeRule::GetWrapperTypeInfo());
}

void V8Window::CSSKeyframesRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSKeyframesRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSKeyframesRule::GetWrapperTypeInfo());
}

void V8Window::CSSKeywordValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSKeywordValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSKeywordValue::GetWrapperTypeInfo());
}

void V8Window::CSSMathInvertConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathInvert_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathInvert::GetWrapperTypeInfo());
}

void V8Window::CSSMathMaxConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathMax_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathMax::GetWrapperTypeInfo());
}

void V8Window::CSSMathMinConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathMin_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathMin::GetWrapperTypeInfo());
}

void V8Window::CSSMathNegateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathNegate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathNegate::GetWrapperTypeInfo());
}

void V8Window::CSSMathProductConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathProduct_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathProduct::GetWrapperTypeInfo());
}

void V8Window::CSSMathSumConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathSum_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathSum::GetWrapperTypeInfo());
}

void V8Window::CSSMathValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMathValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMathValue::GetWrapperTypeInfo());
}

void V8Window::CSSMatrixComponentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMatrixComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMatrixComponent::GetWrapperTypeInfo());
}

void V8Window::CSSMediaRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSMediaRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSMediaRule::GetWrapperTypeInfo());
}

void V8Window::CSSNamespaceRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSNamespaceRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSNamespaceRule::GetWrapperTypeInfo());
}

void V8Window::CSSNumericArrayConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSNumericArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSNumericArray::GetWrapperTypeInfo());
}

void V8Window::CSSNumericValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSNumericValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSNumericValue::GetWrapperTypeInfo());
}

void V8Window::CSSPageRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSPageRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSPageRule::GetWrapperTypeInfo());
}

void V8Window::CSSPerspectiveConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSPerspective_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSPerspective::GetWrapperTypeInfo());
}

void V8Window::CSSPositionValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSPositionValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSPositionValue::GetWrapperTypeInfo());
}

void V8Window::CSSRotateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSRotate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSRotate::GetWrapperTypeInfo());
}

void V8Window::CSSRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSRule::GetWrapperTypeInfo());
}

void V8Window::CSSRuleListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSRuleList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSRuleList::GetWrapperTypeInfo());
}

void V8Window::CSSScaleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSScale_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSScale::GetWrapperTypeInfo());
}

void V8Window::CSSSkewConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSkew_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkew::GetWrapperTypeInfo());
}

void V8Window::CSSSkewXConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSkewX_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewX::GetWrapperTypeInfo());
}

void V8Window::CSSSkewYConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSkewY_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSkewY::GetWrapperTypeInfo());
}

void V8Window::CSSStyleDeclarationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleDeclaration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSStyleDeclaration::GetWrapperTypeInfo());
}

void V8Window::CSSStyleRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSStyleRule::GetWrapperTypeInfo());
}

void V8Window::CSSStyleSheetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleSheet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSStyleSheet::GetWrapperTypeInfo());
}

void V8Window::CSSStyleValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSStyleValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSStyleValue::GetWrapperTypeInfo());
}

void V8Window::CSSSupportsRuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSSupportsRule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSSupportsRule::GetWrapperTypeInfo());
}

void V8Window::CSSTransformComponentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSTransformComponent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSTransformComponent::GetWrapperTypeInfo());
}

void V8Window::CSSTransformValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSTransformValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSTransformValue::GetWrapperTypeInfo());
}

void V8Window::CSSTranslateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSTranslate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSTranslate::GetWrapperTypeInfo());
}

void V8Window::CSSUnitValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSUnitValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSUnitValue::GetWrapperTypeInfo());
}

void V8Window::CSSUnparsedValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSUnparsedValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSUnparsedValue::GetWrapperTypeInfo());
}

void V8Window::CSSVariableReferenceValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CSSVariableReferenceValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CSSVariableReferenceValue::GetWrapperTypeInfo());
}

void V8Window::CharacterDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CharacterData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CharacterData::GetWrapperTypeInfo());
}

void V8Window::ClipboardEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ClipboardEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ClipboardEvent::GetWrapperTypeInfo());
}

void V8Window::CommentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Comment_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Comment::GetWrapperTypeInfo());
}

void V8Window::CompositionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CompositionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CompositionEvent::GetWrapperTypeInfo());
}

void V8Window::CustomElementRegistryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CustomElementRegistry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CustomElementRegistry::GetWrapperTypeInfo());
}

void V8Window::CustomEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CustomEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CustomEvent::GetWrapperTypeInfo());
}

void V8Window::DOMExceptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMException_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMException::GetWrapperTypeInfo());
}

void V8Window::DOMImplementationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMImplementation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMImplementation::GetWrapperTypeInfo());
}

void V8Window::DOMMatrixConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrix::GetWrapperTypeInfo());
}

void V8Window::DOMMatrixReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMMatrixReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMMatrixReadOnly::GetWrapperTypeInfo());
}

void V8Window::DOMParserConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMParser_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMParser::GetWrapperTypeInfo());
}

void V8Window::DOMPointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPoint::GetWrapperTypeInfo());
}

void V8Window::DOMPointReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMPointReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMPointReadOnly::GetWrapperTypeInfo());
}

void V8Window::DOMQuadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMQuad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMQuad::GetWrapperTypeInfo());
}

void V8Window::DOMRectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRect::GetWrapperTypeInfo());
}

void V8Window::DOMRectListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMRectList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRectList::GetWrapperTypeInfo());
}

void V8Window::DOMRectReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMRectReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMRectReadOnly::GetWrapperTypeInfo());
}

void V8Window::DOMStringListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMStringList::GetWrapperTypeInfo());
}

void V8Window::DOMStringMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMStringMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMStringMap::GetWrapperTypeInfo());
}

void V8Window::DOMTokenListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMTokenList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMTokenList::GetWrapperTypeInfo());
}

void V8Window::DataTransferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataTransfer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DataTransfer::GetWrapperTypeInfo());
}

void V8Window::DataTransferItemConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataTransferItem_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DataTransferItem::GetWrapperTypeInfo());
}

void V8Window::DataTransferItemListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataTransferItemList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DataTransferItemList::GetWrapperTypeInfo());
}

void V8Window::DataViewConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DataView_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DataView::GetWrapperTypeInfo());
}

void V8Window::DocumentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Document_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Document::GetWrapperTypeInfo());
}

void V8Window::DocumentFragmentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DocumentFragment_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DocumentFragment::GetWrapperTypeInfo());
}

void V8Window::DocumentTypeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DocumentType_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DocumentType::GetWrapperTypeInfo());
}

void V8Window::DragEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DragEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DragEvent::GetWrapperTypeInfo());
}

void V8Window::ElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Element_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Element::GetWrapperTypeInfo());
}

void V8Window::ErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ErrorEvent::GetWrapperTypeInfo());
}

void V8Window::EventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Event_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Event::GetWrapperTypeInfo());
}

void V8Window::EventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_EventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventTarget::GetWrapperTypeInfo());
}

void V8Window::ExternalConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_External_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8External::GetWrapperTypeInfo());
}

void V8Window::FileConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_File_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8File::GetWrapperTypeInfo());
}

void V8Window::FileListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileList::GetWrapperTypeInfo());
}

void V8Window::FileReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileReader::GetWrapperTypeInfo());
}

void V8Window::FocusEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FocusEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FocusEvent::GetWrapperTypeInfo());
}

void V8Window::FontFaceSetLoadEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FontFaceSetLoadEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FontFaceSetLoadEvent::GetWrapperTypeInfo());
}

void V8Window::FormDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FormData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FormData::GetWrapperTypeInfo());
}

void V8Window::HTMLAllCollectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAllCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLAllCollection::GetWrapperTypeInfo());
}

void V8Window::HTMLAnchorElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAnchorElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLAnchorElement::GetWrapperTypeInfo());
}

void V8Window::HTMLAreaElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAreaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLAreaElement::GetWrapperTypeInfo());
}

void V8Window::HTMLAudioElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLAudioElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLAudioElement::GetWrapperTypeInfo());
}

void V8Window::AudioConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Audio_ConstructorGetterCallback");

  V8HTMLAudioElementConstructor::NamedConstructorAttributeGetter(property, info);
}

void V8Window::HTMLBRElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLBRElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLBRElement::GetWrapperTypeInfo());
}

void V8Window::HTMLBaseElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLBaseElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLBaseElement::GetWrapperTypeInfo());
}

void V8Window::HTMLBodyElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLBodyElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLBodyElement::GetWrapperTypeInfo());
}

void V8Window::HTMLButtonElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLButtonElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLButtonElement::GetWrapperTypeInfo());
}

void V8Window::HTMLCanvasElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLCanvasElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLCanvasElement::GetWrapperTypeInfo());
}

void V8Window::HTMLCollectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLCollection::GetWrapperTypeInfo());
}

void V8Window::HTMLContentElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLContentElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLContentElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDListElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDListElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDataElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDataElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDataElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDataListElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDataListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDataListElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDetailsElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDetailsElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDetailsElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDialogElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDialogElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDialogElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDirectoryElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDirectoryElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDirectoryElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDivElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDivElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDivElement::GetWrapperTypeInfo());
}

void V8Window::HTMLDocumentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLDocument_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLDocument::GetWrapperTypeInfo());
}

void V8Window::HTMLElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLElement::GetWrapperTypeInfo());
}

void V8Window::HTMLEmbedElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLEmbedElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLEmbedElement::GetWrapperTypeInfo());
}

void V8Window::HTMLFieldSetElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFieldSetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLFieldSetElement::GetWrapperTypeInfo());
}

void V8Window::HTMLFontElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFontElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLFontElement::GetWrapperTypeInfo());
}

void V8Window::HTMLFormControlsCollectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFormControlsCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLFormControlsCollection::GetWrapperTypeInfo());
}

void V8Window::HTMLFormElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFormElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLFormElement::GetWrapperTypeInfo());
}

void V8Window::HTMLFrameElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFrameElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLFrameElement::GetWrapperTypeInfo());
}

void V8Window::HTMLFrameSetElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLFrameSetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLFrameSetElement::GetWrapperTypeInfo());
}

void V8Window::HTMLHRElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHRElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLHRElement::GetWrapperTypeInfo());
}

void V8Window::HTMLHeadElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHeadElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLHeadElement::GetWrapperTypeInfo());
}

void V8Window::HTMLHeadingElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHeadingElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLHeadingElement::GetWrapperTypeInfo());
}

void V8Window::HTMLHtmlElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLHtmlElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLHtmlElement::GetWrapperTypeInfo());
}

void V8Window::HTMLIFrameElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLIFrameElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLIFrameElement::GetWrapperTypeInfo());
}

void V8Window::HTMLImageElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLImageElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLImageElement::GetWrapperTypeInfo());
}

void V8Window::ImageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Image_ConstructorGetterCallback");

  V8HTMLImageElementConstructor::NamedConstructorAttributeGetter(property, info);
}

void V8Window::HTMLInputElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLInputElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLInputElement::GetWrapperTypeInfo());
}

void V8Window::HTMLLIElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLIElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLLIElement::GetWrapperTypeInfo());
}

void V8Window::HTMLLabelElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLabelElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLLabelElement::GetWrapperTypeInfo());
}

void V8Window::HTMLLegendElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLegendElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLLegendElement::GetWrapperTypeInfo());
}

void V8Window::HTMLLinkElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLLinkElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLLinkElement::GetWrapperTypeInfo());
}

void V8Window::HTMLMapElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMapElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLMapElement::GetWrapperTypeInfo());
}

void V8Window::HTMLMarqueeElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMarqueeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLMarqueeElement::GetWrapperTypeInfo());
}

void V8Window::HTMLMediaElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMediaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLMediaElement::GetWrapperTypeInfo());
}

void V8Window::HTMLMenuElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMenuElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLMenuElement::GetWrapperTypeInfo());
}

void V8Window::HTMLMetaElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMetaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLMetaElement::GetWrapperTypeInfo());
}

void V8Window::HTMLMeterElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLMeterElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLMeterElement::GetWrapperTypeInfo());
}

void V8Window::HTMLModElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLModElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLModElement::GetWrapperTypeInfo());
}

void V8Window::HTMLOListElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLOListElement::GetWrapperTypeInfo());
}

void V8Window::HTMLObjectElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLObjectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLObjectElement::GetWrapperTypeInfo());
}

void V8Window::HTMLOptGroupElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOptGroupElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLOptGroupElement::GetWrapperTypeInfo());
}

void V8Window::HTMLOptionElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOptionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLOptionElement::GetWrapperTypeInfo());
}

void V8Window::OptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Option_ConstructorGetterCallback");

  V8HTMLOptionElementConstructor::NamedConstructorAttributeGetter(property, info);
}

void V8Window::HTMLOptionsCollectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOptionsCollection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLOptionsCollection::GetWrapperTypeInfo());
}

void V8Window::HTMLOutputElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLOutputElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLOutputElement::GetWrapperTypeInfo());
}

void V8Window::HTMLParagraphElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLParagraphElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLParagraphElement::GetWrapperTypeInfo());
}

void V8Window::HTMLParamElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLParamElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLParamElement::GetWrapperTypeInfo());
}

void V8Window::HTMLPictureElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLPictureElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLPictureElement::GetWrapperTypeInfo());
}

void V8Window::HTMLPreElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLPreElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLPreElement::GetWrapperTypeInfo());
}

void V8Window::HTMLProgressElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLProgressElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLProgressElement::GetWrapperTypeInfo());
}

void V8Window::HTMLQuoteElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLQuoteElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLQuoteElement::GetWrapperTypeInfo());
}

void V8Window::HTMLScriptElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLScriptElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLScriptElement::GetWrapperTypeInfo());
}

void V8Window::HTMLSelectElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSelectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLSelectElement::GetWrapperTypeInfo());
}

void V8Window::HTMLShadowElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLShadowElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLShadowElement::GetWrapperTypeInfo());
}

void V8Window::HTMLSlotElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSlotElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLSlotElement::GetWrapperTypeInfo());
}

void V8Window::HTMLSourceElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSourceElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLSourceElement::GetWrapperTypeInfo());
}

void V8Window::HTMLSpanElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLSpanElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLSpanElement::GetWrapperTypeInfo());
}

void V8Window::HTMLStyleElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLStyleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLStyleElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTableCaptionElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableCaptionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTableCaptionElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTableCellElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableCellElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTableCellElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTableColElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableColElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTableColElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTableElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTableElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTableRowElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableRowElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTableRowElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTableSectionElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTableSectionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTableSectionElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTemplateElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTemplateElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTemplateElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTextAreaElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTextAreaElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTextAreaElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTimeElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTimeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTimeElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTitleElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTitleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTitleElement::GetWrapperTypeInfo());
}

void V8Window::HTMLTrackElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLTrackElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLTrackElement::GetWrapperTypeInfo());
}

void V8Window::HTMLUListElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLUListElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLUListElement::GetWrapperTypeInfo());
}

void V8Window::HTMLUnknownElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLUnknownElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLUnknownElement::GetWrapperTypeInfo());
}

void V8Window::HTMLVideoElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HTMLVideoElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HTMLVideoElement::GetWrapperTypeInfo());
}

void V8Window::HashChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HashChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HashChangeEvent::GetWrapperTypeInfo());
}

void V8Window::HeadersConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Headers_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Headers::GetWrapperTypeInfo());
}

void V8Window::HistoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_History_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8History::GetWrapperTypeInfo());
}

void V8Window::IdleDeadlineConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IdleDeadline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IdleDeadline::GetWrapperTypeInfo());
}

void V8Window::ImageBitmapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageBitmap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageBitmap::GetWrapperTypeInfo());
}

void V8Window::ImageDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageData::GetWrapperTypeInfo());
}

void V8Window::InputDeviceCapabilitiesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_InputDeviceCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8InputDeviceCapabilities::GetWrapperTypeInfo());
}

void V8Window::InputEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_InputEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8InputEvent::GetWrapperTypeInfo());
}

void V8Window::IntersectionObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IntersectionObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IntersectionObserver::GetWrapperTypeInfo());
}

void V8Window::IntersectionObserverEntryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IntersectionObserverEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IntersectionObserverEntry::GetWrapperTypeInfo());
}

void V8Window::KeyboardEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_KeyboardEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8KeyboardEvent::GetWrapperTypeInfo());
}

void V8Window::KeyframeEffectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_KeyframeEffect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8KeyframeEffect::GetWrapperTypeInfo());
}

void V8Window::LocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Location_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Location::GetWrapperTypeInfo());
}

void V8Window::MediaErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaError::GetWrapperTypeInfo());
}

void V8Window::MediaListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaList::GetWrapperTypeInfo());
}

void V8Window::MediaQueryListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaQueryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaQueryList::GetWrapperTypeInfo());
}

void V8Window::MediaQueryListEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaQueryListEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaQueryListEvent::GetWrapperTypeInfo());
}

void V8Window::MessageChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MessageChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageChannel::GetWrapperTypeInfo());
}

void V8Window::MessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessageEvent::GetWrapperTypeInfo());
}

void V8Window::MessagePortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MessagePort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MessagePort::GetWrapperTypeInfo());
}

void V8Window::MouseEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MouseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MouseEvent::GetWrapperTypeInfo());
}

void V8Window::MutationEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MutationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MutationEvent::GetWrapperTypeInfo());
}

void V8Window::MutationObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MutationObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MutationObserver::GetWrapperTypeInfo());
}

void V8Window::MutationRecordConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MutationRecord_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MutationRecord::GetWrapperTypeInfo());
}

void V8Window::NamedNodeMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NamedNodeMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NamedNodeMap::GetWrapperTypeInfo());
}

void V8Window::NavigatorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Navigator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Navigator::GetWrapperTypeInfo());
}

void V8Window::NodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Node_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Node::GetWrapperTypeInfo());
}

void V8Window::NodeFilterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NodeFilter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NodeFilter::GetWrapperTypeInfo());
}

void V8Window::NodeIteratorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NodeIterator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NodeIterator::GetWrapperTypeInfo());
}

void V8Window::NodeListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NodeList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NodeList::GetWrapperTypeInfo());
}

void V8Window::PageTransitionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PageTransitionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PageTransitionEvent::GetWrapperTypeInfo());
}

void V8Window::PerformanceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Performance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Performance::GetWrapperTypeInfo());
}

void V8Window::PerformanceEntryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceEntry::GetWrapperTypeInfo());
}

void V8Window::PerformanceLongTaskTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceLongTaskTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceLongTaskTiming::GetWrapperTypeInfo());
}

void V8Window::PerformanceMarkConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceMark_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMark::GetWrapperTypeInfo());
}

void V8Window::PerformanceMeasureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceMeasure_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceMeasure::GetWrapperTypeInfo());
}

void V8Window::PerformanceNavigationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceNavigation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceNavigation::GetWrapperTypeInfo());
}

void V8Window::PerformanceNavigationTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceNavigationTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceNavigationTiming::GetWrapperTypeInfo());
}

void V8Window::PerformanceObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserver::GetWrapperTypeInfo());
}

void V8Window::PerformanceObserverEntryListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceObserverEntryList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceObserverEntryList::GetWrapperTypeInfo());
}

void V8Window::PerformancePaintTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformancePaintTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformancePaintTiming::GetWrapperTypeInfo());
}

void V8Window::PerformanceResourceTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceResourceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceResourceTiming::GetWrapperTypeInfo());
}

void V8Window::PerformanceServerTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceServerTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceServerTiming::GetWrapperTypeInfo());
}

void V8Window::PerformanceTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PerformanceTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PerformanceTiming::GetWrapperTypeInfo());
}

void V8Window::PointerEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PointerEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PointerEvent::GetWrapperTypeInfo());
}

void V8Window::PopStateEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PopStateEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PopStateEvent::GetWrapperTypeInfo());
}

void V8Window::ProcessingInstructionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ProcessingInstruction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ProcessingInstruction::GetWrapperTypeInfo());
}

void V8Window::ProgressEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ProgressEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ProgressEvent::GetWrapperTypeInfo());
}

void V8Window::PromiseRejectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PromiseRejectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PromiseRejectionEvent::GetWrapperTypeInfo());
}

void V8Window::RadioNodeListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RadioNodeList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RadioNodeList::GetWrapperTypeInfo());
}

void V8Window::RangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Range_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Range::GetWrapperTypeInfo());
}

void V8Window::ReadableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ReadableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStream::GetWrapperTypeInfo());
}

void V8Window::ReportingObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ReportingObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReportingObserver::GetWrapperTypeInfo());
}

void V8Window::RequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Request_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Request::GetWrapperTypeInfo());
}

void V8Window::ResizeObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ResizeObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ResizeObserver::GetWrapperTypeInfo());
}

void V8Window::ResizeObserverEntryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ResizeObserverEntry_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ResizeObserverEntry::GetWrapperTypeInfo());
}

void V8Window::ResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Response_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Response::GetWrapperTypeInfo());
}

void V8Window::SVGAElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAElement::GetWrapperTypeInfo());
}

void V8Window::SVGAngleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAngle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAngle::GetWrapperTypeInfo());
}

void V8Window::SVGAnimateElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimateElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimateElement::GetWrapperTypeInfo());
}

void V8Window::SVGAnimateMotionElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimateMotionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimateMotionElement::GetWrapperTypeInfo());
}

void V8Window::SVGAnimateTransformElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimateTransformElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimateTransformElement::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedAngleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedAngle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedAngle::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedBooleanConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedBoolean_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedBoolean::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedEnumerationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedEnumeration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedEnumeration::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedIntegerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedInteger_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedInteger::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedLengthConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedLength_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedLength::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedLengthListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedLengthList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedLengthList::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedNumberConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedNumber_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedNumber::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedNumberListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedNumberList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedNumberList::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedPreserveAspectRatioConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedPreserveAspectRatio_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedPreserveAspectRatio::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedRectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedRect::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedStringConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedString_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedString::GetWrapperTypeInfo());
}

void V8Window::SVGAnimatedTransformListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimatedTransformList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimatedTransformList::GetWrapperTypeInfo());
}

void V8Window::SVGAnimationElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGAnimationElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGAnimationElement::GetWrapperTypeInfo());
}

void V8Window::SVGCircleElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGCircleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGCircleElement::GetWrapperTypeInfo());
}

void V8Window::SVGClipPathElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGClipPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGClipPathElement::GetWrapperTypeInfo());
}

void V8Window::SVGComponentTransferFunctionElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGComponentTransferFunctionElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGComponentTransferFunctionElement::GetWrapperTypeInfo());
}

void V8Window::SVGDefsElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGDefsElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGDefsElement::GetWrapperTypeInfo());
}

void V8Window::SVGDescElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGDescElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGDescElement::GetWrapperTypeInfo());
}

void V8Window::SVGDiscardElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGDiscardElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGDiscardElement::GetWrapperTypeInfo());
}

void V8Window::SVGElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGElement::GetWrapperTypeInfo());
}

void V8Window::SVGEllipseElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGEllipseElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGEllipseElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEBlendElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEBlendElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEBlendElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEColorMatrixElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEColorMatrixElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEColorMatrixElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEComponentTransferElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEComponentTransferElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEComponentTransferElement::GetWrapperTypeInfo());
}

void V8Window::SVGFECompositeElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFECompositeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFECompositeElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEConvolveMatrixElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEConvolveMatrixElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEConvolveMatrixElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEDiffuseLightingElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDiffuseLightingElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEDiffuseLightingElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEDisplacementMapElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDisplacementMapElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEDisplacementMapElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEDistantLightElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDistantLightElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEDistantLightElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEDropShadowElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEDropShadowElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEDropShadowElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEFloodElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFloodElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEFloodElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEFuncAElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncAElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEFuncAElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEFuncBElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncBElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEFuncBElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEFuncGElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEFuncGElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEFuncRElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEFuncRElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEFuncRElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEGaussianBlurElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEGaussianBlurElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEGaussianBlurElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEImageElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEImageElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEImageElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEMergeElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEMergeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEMergeElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEMergeNodeElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEMergeNodeElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEMergeNodeElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEMorphologyElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEMorphologyElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEMorphologyElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEOffsetElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEOffsetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEOffsetElement::GetWrapperTypeInfo());
}

void V8Window::SVGFEPointLightElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFEPointLightElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFEPointLightElement::GetWrapperTypeInfo());
}

void V8Window::SVGFESpecularLightingElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFESpecularLightingElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFESpecularLightingElement::GetWrapperTypeInfo());
}

void V8Window::SVGFESpotLightElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFESpotLightElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFESpotLightElement::GetWrapperTypeInfo());
}

void V8Window::SVGFETileElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFETileElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFETileElement::GetWrapperTypeInfo());
}

void V8Window::SVGFETurbulenceElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFETurbulenceElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFETurbulenceElement::GetWrapperTypeInfo());
}

void V8Window::SVGFilterElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGFilterElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGFilterElement::GetWrapperTypeInfo());
}

void V8Window::SVGForeignObjectElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGForeignObjectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGForeignObjectElement::GetWrapperTypeInfo());
}

void V8Window::SVGGElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGGElement::GetWrapperTypeInfo());
}

void V8Window::SVGGeometryElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGeometryElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGGeometryElement::GetWrapperTypeInfo());
}

void V8Window::SVGGradientElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGradientElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGGradientElement::GetWrapperTypeInfo());
}

void V8Window::SVGGraphicsElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGGraphicsElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGGraphicsElement::GetWrapperTypeInfo());
}

void V8Window::SVGImageElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGImageElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGImageElement::GetWrapperTypeInfo());
}

void V8Window::SVGLengthConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLength_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGLength::GetWrapperTypeInfo());
}

void V8Window::SVGLengthListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLengthList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGLengthList::GetWrapperTypeInfo());
}

void V8Window::SVGLineElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLineElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGLineElement::GetWrapperTypeInfo());
}

void V8Window::SVGLinearGradientElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGLinearGradientElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGLinearGradientElement::GetWrapperTypeInfo());
}

void V8Window::SVGMPathElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGMPathElement::GetWrapperTypeInfo());
}

void V8Window::SVGMarkerElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMarkerElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGMarkerElement::GetWrapperTypeInfo());
}

void V8Window::SVGMaskElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMaskElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGMaskElement::GetWrapperTypeInfo());
}

void V8Window::SVGMatrixConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMatrix_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGMatrix::GetWrapperTypeInfo());
}

void V8Window::SVGMetadataElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGMetadataElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGMetadataElement::GetWrapperTypeInfo());
}

void V8Window::SVGNumberConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGNumber_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGNumber::GetWrapperTypeInfo());
}

void V8Window::SVGNumberListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGNumberList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGNumberList::GetWrapperTypeInfo());
}

void V8Window::SVGPathElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPathElement::GetWrapperTypeInfo());
}

void V8Window::SVGPatternElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPatternElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPatternElement::GetWrapperTypeInfo());
}

void V8Window::SVGPointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPoint::GetWrapperTypeInfo());
}

void V8Window::SVGPointListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPointList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPointList::GetWrapperTypeInfo());
}

void V8Window::SVGPolygonElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPolygonElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPolygonElement::GetWrapperTypeInfo());
}

void V8Window::SVGPolylineElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPolylineElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPolylineElement::GetWrapperTypeInfo());
}

void V8Window::SVGPreserveAspectRatioConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGPreserveAspectRatio_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGPreserveAspectRatio::GetWrapperTypeInfo());
}

void V8Window::SVGRadialGradientElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGRadialGradientElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGRadialGradientElement::GetWrapperTypeInfo());
}

void V8Window::SVGRectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGRect_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGRect::GetWrapperTypeInfo());
}

void V8Window::SVGRectElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGRectElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGRectElement::GetWrapperTypeInfo());
}

void V8Window::SVGSVGElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSVGElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGSVGElement::GetWrapperTypeInfo());
}

void V8Window::SVGScriptElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGScriptElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGScriptElement::GetWrapperTypeInfo());
}

void V8Window::SVGSetElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSetElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGSetElement::GetWrapperTypeInfo());
}

void V8Window::SVGStopElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGStopElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGStopElement::GetWrapperTypeInfo());
}

void V8Window::SVGStringListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGStringList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGStringList::GetWrapperTypeInfo());
}

void V8Window::SVGStyleElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGStyleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGStyleElement::GetWrapperTypeInfo());
}

void V8Window::SVGSwitchElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSwitchElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGSwitchElement::GetWrapperTypeInfo());
}

void V8Window::SVGSymbolElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGSymbolElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGSymbolElement::GetWrapperTypeInfo());
}

void V8Window::SVGTSpanElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTSpanElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTSpanElement::GetWrapperTypeInfo());
}

void V8Window::SVGTextContentElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextContentElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTextContentElement::GetWrapperTypeInfo());
}

void V8Window::SVGTextElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTextElement::GetWrapperTypeInfo());
}

void V8Window::SVGTextPathElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextPathElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTextPathElement::GetWrapperTypeInfo());
}

void V8Window::SVGTextPositioningElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTextPositioningElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTextPositioningElement::GetWrapperTypeInfo());
}

void V8Window::SVGTitleElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTitleElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTitleElement::GetWrapperTypeInfo());
}

void V8Window::SVGTransformConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTransform_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTransform::GetWrapperTypeInfo());
}

void V8Window::SVGTransformListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGTransformList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGTransformList::GetWrapperTypeInfo());
}

void V8Window::SVGUnitTypesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGUnitTypes_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGUnitTypes::GetWrapperTypeInfo());
}

void V8Window::SVGUseElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGUseElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGUseElement::GetWrapperTypeInfo());
}

void V8Window::SVGViewElementConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SVGViewElement_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SVGViewElement::GetWrapperTypeInfo());
}

void V8Window::ScreenConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Screen_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Screen::GetWrapperTypeInfo());
}

void V8Window::SecurityPolicyViolationEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SecurityPolicyViolationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SecurityPolicyViolationEvent::GetWrapperTypeInfo());
}

void V8Window::SelectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Selection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Selection::GetWrapperTypeInfo());
}

void V8Window::ShadowRootConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ShadowRoot_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ShadowRoot::GetWrapperTypeInfo());
}

void V8Window::StaticRangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StaticRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StaticRange::GetWrapperTypeInfo());
}

void V8Window::StylePropertyMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StylePropertyMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StylePropertyMap::GetWrapperTypeInfo());
}

void V8Window::StylePropertyMapReadOnlyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StylePropertyMapReadOnly_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StylePropertyMapReadOnly::GetWrapperTypeInfo());
}

void V8Window::StyleSheetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StyleSheet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StyleSheet::GetWrapperTypeInfo());
}

void V8Window::StyleSheetListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StyleSheetList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StyleSheetList::GetWrapperTypeInfo());
}

void V8Window::TaskAttributionTimingConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TaskAttributionTiming_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TaskAttributionTiming::GetWrapperTypeInfo());
}

void V8Window::TextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Text_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Text::GetWrapperTypeInfo());
}

void V8Window::TextEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEvent::GetWrapperTypeInfo());
}

void V8Window::TextMetricsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextMetrics_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextMetrics::GetWrapperTypeInfo());
}

void V8Window::TextTrackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextTrack::GetWrapperTypeInfo());
}

void V8Window::TextTrackCueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrackCue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextTrackCue::GetWrapperTypeInfo());
}

void V8Window::TextTrackCueListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrackCueList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextTrackCueList::GetWrapperTypeInfo());
}

void V8Window::TextTrackListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextTrackList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextTrackList::GetWrapperTypeInfo());
}

void V8Window::TimeRangesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TimeRanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TimeRanges::GetWrapperTypeInfo());
}

void V8Window::TouchConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Touch_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Touch::GetWrapperTypeInfo());
}

void V8Window::TouchEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TouchEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TouchEvent::GetWrapperTypeInfo());
}

void V8Window::TouchListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TouchList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TouchList::GetWrapperTypeInfo());
}

void V8Window::TrackEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrackEvent::GetWrapperTypeInfo());
}

void V8Window::TransformStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TransformStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TransformStream::GetWrapperTypeInfo());
}

void V8Window::TransitionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TransitionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TransitionEvent::GetWrapperTypeInfo());
}

void V8Window::TreeWalkerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TreeWalker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TreeWalker::GetWrapperTypeInfo());
}

void V8Window::UIEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_UIEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8UIEvent::GetWrapperTypeInfo());
}

void V8Window::URLConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_URL_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URL::GetWrapperTypeInfo());
}

void V8Window::URLSearchParamsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_URLSearchParams_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8URLSearchParams::GetWrapperTypeInfo());
}

void V8Window::VTTCueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VTTCue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VTTCue::GetWrapperTypeInfo());
}

void V8Window::ValidityStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ValidityState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ValidityState::GetWrapperTypeInfo());
}

void V8Window::VisualViewportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VisualViewport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VisualViewport::GetWrapperTypeInfo());
}

void V8Window::WheelEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WheelEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WheelEvent::GetWrapperTypeInfo());
}

void V8Window::WindowConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Window_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Window::GetWrapperTypeInfo());
}

void V8Window::WorkerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Worker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Worker::GetWrapperTypeInfo());
}

void V8Window::WritableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WritableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStream::GetWrapperTypeInfo());
}

void V8Window::XMLDocumentConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLDocument_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLDocument::GetWrapperTypeInfo());
}

void V8Window::XMLHttpRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLHttpRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequest::GetWrapperTypeInfo());
}

void V8Window::XMLHttpRequestEventTargetConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLHttpRequestEventTarget_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequestEventTarget::GetWrapperTypeInfo());
}

void V8Window::XMLHttpRequestUploadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLHttpRequestUpload_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLHttpRequestUpload::GetWrapperTypeInfo());
}

void V8Window::XMLSerializerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XMLSerializer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XMLSerializer::GetWrapperTypeInfo());
}

void V8Window::XPathEvaluatorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XPathEvaluator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XPathEvaluator::GetWrapperTypeInfo());
}

void V8Window::XPathExpressionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XPathExpression_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XPathExpression::GetWrapperTypeInfo());
}

void V8Window::XPathResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XPathResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XPathResult::GetWrapperTypeInfo());
}

void V8Window::OnabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onabort_Getter");

  dom_window_v8_internal::OnabortAttributeGetter(info);
}

void V8Window::OnabortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onabort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnabortAttributeSetter(v8_value, info);
}

void V8Window::OnactivateinvisibleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onactivateinvisible_Getter");

  dom_window_v8_internal::OnactivateinvisibleAttributeGetter(info);
}

void V8Window::OnactivateinvisibleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onactivateinvisible_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnactivateinvisibleAttributeSetter(v8_value, info);
}

void V8Window::OnbeforeactivateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeactivate_Getter");

  dom_window_v8_internal::OnbeforeactivateAttributeGetter(info);
}

void V8Window::OnbeforeactivateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeactivate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnbeforeactivateAttributeSetter(v8_value, info);
}

void V8Window::OnblurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onblur_Getter");

  dom_window_v8_internal::OnblurAttributeGetter(info);
}

void V8Window::OnblurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onblur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnblurAttributeSetter(v8_value, info);
}

void V8Window::OncancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncancel_Getter");

  dom_window_v8_internal::OncancelAttributeGetter(info);
}

void V8Window::OncancelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncancel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OncancelAttributeSetter(v8_value, info);
}

void V8Window::OncanplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplay_Getter");

  dom_window_v8_internal::OncanplayAttributeGetter(info);
}

void V8Window::OncanplayAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplay_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OncanplayAttributeSetter(v8_value, info);
}

void V8Window::OncanplaythroughAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplaythrough_Getter");

  dom_window_v8_internal::OncanplaythroughAttributeGetter(info);
}

void V8Window::OncanplaythroughAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncanplaythrough_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OncanplaythroughAttributeSetter(v8_value, info);
}

void V8Window::OnchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onchange_Getter");

  dom_window_v8_internal::OnchangeAttributeGetter(info);
}

void V8Window::OnchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnchangeAttributeSetter(v8_value, info);
}

void V8Window::OnclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclick_Getter");

  dom_window_v8_internal::OnclickAttributeGetter(info);
}

void V8Window::OnclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnclickAttributeSetter(v8_value, info);
}

void V8Window::OncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclose_Getter");

  dom_window_v8_internal::OncloseAttributeGetter(info);
}

void V8Window::OncloseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onclose_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OncloseAttributeSetter(v8_value, info);
}

void V8Window::OncontextmenuAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncontextmenu_Getter");

  dom_window_v8_internal::OncontextmenuAttributeGetter(info);
}

void V8Window::OncontextmenuAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncontextmenu_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OncontextmenuAttributeSetter(v8_value, info);
}

void V8Window::OncuechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncuechange_Getter");

  dom_window_v8_internal::OncuechangeAttributeGetter(info);
}

void V8Window::OncuechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oncuechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OncuechangeAttributeSetter(v8_value, info);
}

void V8Window::OndblclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondblclick_Getter");

  dom_window_v8_internal::OndblclickAttributeGetter(info);
}

void V8Window::OndblclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondblclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndblclickAttributeSetter(v8_value, info);
}

void V8Window::OndragAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrag_Getter");

  dom_window_v8_internal::OndragAttributeGetter(info);
}

void V8Window::OndragAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrag_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndragAttributeSetter(v8_value, info);
}

void V8Window::OndragendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragend_Getter");

  dom_window_v8_internal::OndragendAttributeGetter(info);
}

void V8Window::OndragendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndragendAttributeSetter(v8_value, info);
}

void V8Window::OndragenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragenter_Getter");

  dom_window_v8_internal::OndragenterAttributeGetter(info);
}

void V8Window::OndragenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndragenterAttributeSetter(v8_value, info);
}

void V8Window::OndragleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragleave_Getter");

  dom_window_v8_internal::OndragleaveAttributeGetter(info);
}

void V8Window::OndragleaveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragleave_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndragleaveAttributeSetter(v8_value, info);
}

void V8Window::OndragoverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragover_Getter");

  dom_window_v8_internal::OndragoverAttributeGetter(info);
}

void V8Window::OndragoverAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragover_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndragoverAttributeSetter(v8_value, info);
}

void V8Window::OndragstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragstart_Getter");

  dom_window_v8_internal::OndragstartAttributeGetter(info);
}

void V8Window::OndragstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondragstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndragstartAttributeSetter(v8_value, info);
}

void V8Window::OndropAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrop_Getter");

  dom_window_v8_internal::OndropAttributeGetter(info);
}

void V8Window::OndropAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondrop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndropAttributeSetter(v8_value, info);
}

void V8Window::OndurationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondurationchange_Getter");

  dom_window_v8_internal::OndurationchangeAttributeGetter(info);
}

void V8Window::OndurationchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondurationchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OndurationchangeAttributeSetter(v8_value, info);
}

void V8Window::OnemptiedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onemptied_Getter");

  dom_window_v8_internal::OnemptiedAttributeGetter(info);
}

void V8Window::OnemptiedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onemptied_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnemptiedAttributeSetter(v8_value, info);
}

void V8Window::OnendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onended_Getter");

  dom_window_v8_internal::OnendedAttributeGetter(info);
}

void V8Window::OnendedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onended_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnendedAttributeSetter(v8_value, info);
}

void V8Window::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onerror_Getter");

  dom_window_v8_internal::OnerrorAttributeGetter(info);
}

void V8Window::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8Window::OnfocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onfocus_Getter");

  dom_window_v8_internal::OnfocusAttributeGetter(info);
}

void V8Window::OnfocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onfocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnfocusAttributeSetter(v8_value, info);
}

void V8Window::OnformdataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onformdata_Getter");

  dom_window_v8_internal::OnformdataAttributeGetter(info);
}

void V8Window::OnformdataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onformdata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnformdataAttributeSetter(v8_value, info);
}

void V8Window::OninputAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninput_Getter");

  dom_window_v8_internal::OninputAttributeGetter(info);
}

void V8Window::OninputAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninput_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OninputAttributeSetter(v8_value, info);
}

void V8Window::OninvalidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninvalid_Getter");

  dom_window_v8_internal::OninvalidAttributeGetter(info);
}

void V8Window::OninvalidAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_oninvalid_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OninvalidAttributeSetter(v8_value, info);
}

void V8Window::OnkeydownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeydown_Getter");

  dom_window_v8_internal::OnkeydownAttributeGetter(info);
}

void V8Window::OnkeydownAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeydown_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnkeydownAttributeSetter(v8_value, info);
}

void V8Window::OnkeypressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeypress_Getter");

  dom_window_v8_internal::OnkeypressAttributeGetter(info);
}

void V8Window::OnkeypressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeypress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnkeypressAttributeSetter(v8_value, info);
}

void V8Window::OnkeyupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeyup_Getter");

  dom_window_v8_internal::OnkeyupAttributeGetter(info);
}

void V8Window::OnkeyupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onkeyup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnkeyupAttributeSetter(v8_value, info);
}

void V8Window::OnloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onload_Getter");

  dom_window_v8_internal::OnloadAttributeGetter(info);
}

void V8Window::OnloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnloadAttributeSetter(v8_value, info);
}

void V8Window::OnloadeddataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadeddata_Getter");

  dom_window_v8_internal::OnloadeddataAttributeGetter(info);
}

void V8Window::OnloadeddataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadeddata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnloadeddataAttributeSetter(v8_value, info);
}

void V8Window::OnloadedmetadataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadedmetadata_Getter");

  dom_window_v8_internal::OnloadedmetadataAttributeGetter(info);
}

void V8Window::OnloadedmetadataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadedmetadata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnloadedmetadataAttributeSetter(v8_value, info);
}

void V8Window::OnloadstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadstart_Getter");

  dom_window_v8_internal::OnloadstartAttributeGetter(info);
}

void V8Window::OnloadstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onloadstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnloadstartAttributeSetter(v8_value, info);
}

void V8Window::OnmousedownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousedown_Getter");

  dom_window_v8_internal::OnmousedownAttributeGetter(info);
}

void V8Window::OnmousedownAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousedown_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmousedownAttributeSetter(v8_value, info);
}

void V8Window::OnmouseenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseenter_Getter");

  dom_window_v8_internal::OnmouseenterAttributeGetter(info);
}

void V8Window::OnmouseenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmouseenterAttributeSetter(v8_value, info);
}

void V8Window::OnmouseleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseleave_Getter");

  dom_window_v8_internal::OnmouseleaveAttributeGetter(info);
}

void V8Window::OnmouseleaveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseleave_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmouseleaveAttributeSetter(v8_value, info);
}

void V8Window::OnmousemoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousemove_Getter");

  dom_window_v8_internal::OnmousemoveAttributeGetter(info);
}

void V8Window::OnmousemoveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousemove_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmousemoveAttributeSetter(v8_value, info);
}

void V8Window::OnmouseoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseout_Getter");

  dom_window_v8_internal::OnmouseoutAttributeGetter(info);
}

void V8Window::OnmouseoutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseout_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmouseoutAttributeSetter(v8_value, info);
}

void V8Window::OnmouseoverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseover_Getter");

  dom_window_v8_internal::OnmouseoverAttributeGetter(info);
}

void V8Window::OnmouseoverAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseover_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmouseoverAttributeSetter(v8_value, info);
}

void V8Window::OnmouseupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseup_Getter");

  dom_window_v8_internal::OnmouseupAttributeGetter(info);
}

void V8Window::OnmouseupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmouseup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmouseupAttributeSetter(v8_value, info);
}

void V8Window::OnmousewheelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousewheel_Getter");

  dom_window_v8_internal::OnmousewheelAttributeGetter(info);
}

void V8Window::OnmousewheelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmousewheel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmousewheelAttributeSetter(v8_value, info);
}

void V8Window::OnoverscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onoverscroll_Getter");

  dom_window_v8_internal::OnoverscrollAttributeGetter(info);
}

void V8Window::OnoverscrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onoverscroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnoverscrollAttributeSetter(v8_value, info);
}

void V8Window::OnpauseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpause_Getter");

  dom_window_v8_internal::OnpauseAttributeGetter(info);
}

void V8Window::OnpauseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpause_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpauseAttributeSetter(v8_value, info);
}

void V8Window::OnplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplay_Getter");

  dom_window_v8_internal::OnplayAttributeGetter(info);
}

void V8Window::OnplayAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplay_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnplayAttributeSetter(v8_value, info);
}

void V8Window::OnplayingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplaying_Getter");

  dom_window_v8_internal::OnplayingAttributeGetter(info);
}

void V8Window::OnplayingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onplaying_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnplayingAttributeSetter(v8_value, info);
}

void V8Window::OnprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onprogress_Getter");

  dom_window_v8_internal::OnprogressAttributeGetter(info);
}

void V8Window::OnprogressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onprogress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnprogressAttributeSetter(v8_value, info);
}

void V8Window::OnratechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onratechange_Getter");

  dom_window_v8_internal::OnratechangeAttributeGetter(info);
}

void V8Window::OnratechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onratechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnratechangeAttributeSetter(v8_value, info);
}

void V8Window::OnresetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onreset_Getter");

  dom_window_v8_internal::OnresetAttributeGetter(info);
}

void V8Window::OnresetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onreset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnresetAttributeSetter(v8_value, info);
}

void V8Window::OnresizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onresize_Getter");

  dom_window_v8_internal::OnresizeAttributeGetter(info);
}

void V8Window::OnresizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onresize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnresizeAttributeSetter(v8_value, info);
}

void V8Window::OnscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onscroll_Getter");

  dom_window_v8_internal::OnscrollAttributeGetter(info);
}

void V8Window::OnscrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onscroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnscrollAttributeSetter(v8_value, info);
}

void V8Window::OnscrollendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onscrollend_Getter");

  dom_window_v8_internal::OnscrollendAttributeGetter(info);
}

void V8Window::OnscrollendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onscrollend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnscrollendAttributeSetter(v8_value, info);
}

void V8Window::OnseekedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeked_Getter");

  dom_window_v8_internal::OnseekedAttributeGetter(info);
}

void V8Window::OnseekedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeked_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnseekedAttributeSetter(v8_value, info);
}

void V8Window::OnseekingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeking_Getter");

  dom_window_v8_internal::OnseekingAttributeGetter(info);
}

void V8Window::OnseekingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onseeking_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnseekingAttributeSetter(v8_value, info);
}

void V8Window::OnselectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselect_Getter");

  dom_window_v8_internal::OnselectAttributeGetter(info);
}

void V8Window::OnselectAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselect_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnselectAttributeSetter(v8_value, info);
}

void V8Window::OnstalledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstalled_Getter");

  dom_window_v8_internal::OnstalledAttributeGetter(info);
}

void V8Window::OnstalledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstalled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnstalledAttributeSetter(v8_value, info);
}

void V8Window::OnsubmitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsubmit_Getter");

  dom_window_v8_internal::OnsubmitAttributeGetter(info);
}

void V8Window::OnsubmitAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsubmit_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnsubmitAttributeSetter(v8_value, info);
}

void V8Window::OnsuspendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsuspend_Getter");

  dom_window_v8_internal::OnsuspendAttributeGetter(info);
}

void V8Window::OnsuspendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onsuspend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnsuspendAttributeSetter(v8_value, info);
}

void V8Window::OntimeupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontimeupdate_Getter");

  dom_window_v8_internal::OntimeupdateAttributeGetter(info);
}

void V8Window::OntimeupdateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontimeupdate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntimeupdateAttributeSetter(v8_value, info);
}

void V8Window::OntoggleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontoggle_Getter");

  dom_window_v8_internal::OntoggleAttributeGetter(info);
}

void V8Window::OntoggleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontoggle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntoggleAttributeSetter(v8_value, info);
}

void V8Window::OnvolumechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onvolumechange_Getter");

  dom_window_v8_internal::OnvolumechangeAttributeGetter(info);
}

void V8Window::OnvolumechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onvolumechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnvolumechangeAttributeSetter(v8_value, info);
}

void V8Window::OnwaitingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwaiting_Getter");

  dom_window_v8_internal::OnwaitingAttributeGetter(info);
}

void V8Window::OnwaitingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwaiting_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnwaitingAttributeSetter(v8_value, info);
}

void V8Window::OnwheelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwheel_Getter");

  dom_window_v8_internal::OnwheelAttributeGetter(info);
}

void V8Window::OnwheelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onwheel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnwheelAttributeSetter(v8_value, info);
}

void V8Window::OnauxclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onauxclick_Getter");

  dom_window_v8_internal::OnauxclickAttributeGetter(info);
}

void V8Window::OnauxclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onauxclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnauxclickAttributeSetter(v8_value, info);
}

void V8Window::OngotpointercaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ongotpointercapture_Getter");

  dom_window_v8_internal::OngotpointercaptureAttributeGetter(info);
}

void V8Window::OngotpointercaptureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ongotpointercapture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OngotpointercaptureAttributeSetter(v8_value, info);
}

void V8Window::OnlostpointercaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlostpointercapture_Getter");

  dom_window_v8_internal::OnlostpointercaptureAttributeGetter(info);
}

void V8Window::OnlostpointercaptureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlostpointercapture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnlostpointercaptureAttributeSetter(v8_value, info);
}

void V8Window::OnpointerdownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerdown_Getter");

  dom_window_v8_internal::OnpointerdownAttributeGetter(info);
}

void V8Window::OnpointerdownAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerdown_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointerdownAttributeSetter(v8_value, info);
}

void V8Window::OnpointermoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointermove_Getter");

  dom_window_v8_internal::OnpointermoveAttributeGetter(info);
}

void V8Window::OnpointermoveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointermove_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointermoveAttributeSetter(v8_value, info);
}

void V8Window::OnpointerrawupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerrawupdate_Getter");

  dom_window_v8_internal::OnpointerrawupdateAttributeGetter(info);
}

void V8Window::OnpointerrawupdateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerrawupdate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointerrawupdateAttributeSetter(v8_value, info);
}

void V8Window::OnpointerupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerup_Getter");

  dom_window_v8_internal::OnpointerupAttributeGetter(info);
}

void V8Window::OnpointerupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointerupAttributeSetter(v8_value, info);
}

void V8Window::OnpointercancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointercancel_Getter");

  dom_window_v8_internal::OnpointercancelAttributeGetter(info);
}

void V8Window::OnpointercancelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointercancel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointercancelAttributeSetter(v8_value, info);
}

void V8Window::OnpointeroverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerover_Getter");

  dom_window_v8_internal::OnpointeroverAttributeGetter(info);
}

void V8Window::OnpointeroverAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerover_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointeroverAttributeSetter(v8_value, info);
}

void V8Window::OnpointeroutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerout_Getter");

  dom_window_v8_internal::OnpointeroutAttributeGetter(info);
}

void V8Window::OnpointeroutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerout_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointeroutAttributeSetter(v8_value, info);
}

void V8Window::OnpointerenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerenter_Getter");

  dom_window_v8_internal::OnpointerenterAttributeGetter(info);
}

void V8Window::OnpointerenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointerenterAttributeSetter(v8_value, info);
}

void V8Window::OnpointerleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerleave_Getter");

  dom_window_v8_internal::OnpointerleaveAttributeGetter(info);
}

void V8Window::OnpointerleaveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpointerleave_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpointerleaveAttributeSetter(v8_value, info);
}

void V8Window::OntouchcancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchcancel_Getter");

  dom_window_v8_internal::OntouchcancelAttributeGetter(info);
}

void V8Window::OntouchcancelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchcancel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntouchcancelAttributeSetter(v8_value, info);
}

void V8Window::OntouchendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchend_Getter");

  dom_window_v8_internal::OntouchendAttributeGetter(info);
}

void V8Window::OntouchendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntouchendAttributeSetter(v8_value, info);
}

void V8Window::OntouchmoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchmove_Getter");

  dom_window_v8_internal::OntouchmoveAttributeGetter(info);
}

void V8Window::OntouchmoveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchmove_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntouchmoveAttributeSetter(v8_value, info);
}

void V8Window::OntouchstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchstart_Getter");

  dom_window_v8_internal::OntouchstartAttributeGetter(info);
}

void V8Window::OntouchstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ontouchstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OntouchstartAttributeSetter(v8_value, info);
}

void V8Window::OnselectstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselectstart_Getter");

  dom_window_v8_internal::OnselectstartAttributeGetter(info);
}

void V8Window::OnselectstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselectstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnselectstartAttributeSetter(v8_value, info);
}

void V8Window::OnselectionchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselectionchange_Getter");

  dom_window_v8_internal::OnselectionchangeAttributeGetter(info);
}

void V8Window::OnselectionchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onselectionchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnselectionchangeAttributeSetter(v8_value, info);
}

void V8Window::OnafterprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onafterprint_Getter");

  dom_window_v8_internal::OnafterprintAttributeGetter(info);
}

void V8Window::OnafterprintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onafterprint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnafterprintAttributeSetter(v8_value, info);
}

void V8Window::OnbeforeprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeprint_Getter");

  dom_window_v8_internal::OnbeforeprintAttributeGetter(info);
}

void V8Window::OnbeforeprintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeprint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnbeforeprintAttributeSetter(v8_value, info);
}

void V8Window::OnbeforeunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeunload_Getter");

  dom_window_v8_internal::OnbeforeunloadAttributeGetter(info);
}

void V8Window::OnbeforeunloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeunload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnbeforeunloadAttributeSetter(v8_value, info);
}

void V8Window::OnhashchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onhashchange_Getter");

  dom_window_v8_internal::OnhashchangeAttributeGetter(info);
}

void V8Window::OnhashchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onhashchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnhashchangeAttributeSetter(v8_value, info);
}

void V8Window::OnlanguagechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlanguagechange_Getter");

  dom_window_v8_internal::OnlanguagechangeAttributeGetter(info);
}

void V8Window::OnlanguagechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onlanguagechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnlanguagechangeAttributeSetter(v8_value, info);
}

void V8Window::OnmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessage_Getter");

  dom_window_v8_internal::OnmessageAttributeGetter(info);
}

void V8Window::OnmessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmessageAttributeSetter(v8_value, info);
}

void V8Window::OnmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessageerror_Getter");

  dom_window_v8_internal::OnmessageerrorAttributeGetter(info);
}

void V8Window::OnmessageerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onmessageerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnmessageerrorAttributeSetter(v8_value, info);
}

void V8Window::OnofflineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onoffline_Getter");

  dom_window_v8_internal::OnofflineAttributeGetter(info);
}

void V8Window::OnofflineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onoffline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnofflineAttributeSetter(v8_value, info);
}

void V8Window::OnonlineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ononline_Getter");

  dom_window_v8_internal::OnonlineAttributeGetter(info);
}

void V8Window::OnonlineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ononline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnonlineAttributeSetter(v8_value, info);
}

void V8Window::OnpagehideAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpagehide_Getter");

  dom_window_v8_internal::OnpagehideAttributeGetter(info);
}

void V8Window::OnpagehideAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpagehide_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpagehideAttributeSetter(v8_value, info);
}

void V8Window::OnpageshowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpageshow_Getter");

  dom_window_v8_internal::OnpageshowAttributeGetter(info);
}

void V8Window::OnpageshowAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpageshow_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpageshowAttributeSetter(v8_value, info);
}

void V8Window::OnpopstateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpopstate_Getter");

  dom_window_v8_internal::OnpopstateAttributeGetter(info);
}

void V8Window::OnpopstateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onpopstate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnpopstateAttributeSetter(v8_value, info);
}

void V8Window::OnportalactivateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onportalactivate_Getter");

  dom_window_v8_internal::OnportalactivateAttributeGetter(info);
}

void V8Window::OnportalactivateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onportalactivate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnportalactivateAttributeSetter(v8_value, info);
}

void V8Window::OnrejectionhandledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onrejectionhandled_Getter");

  dom_window_v8_internal::OnrejectionhandledAttributeGetter(info);
}

void V8Window::OnrejectionhandledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onrejectionhandled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnrejectionhandledAttributeSetter(v8_value, info);
}

void V8Window::OnstorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstorage_Getter");

  dom_window_v8_internal::OnstorageAttributeGetter(info);
}

void V8Window::OnstorageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onstorage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnstorageAttributeSetter(v8_value, info);
}

void V8Window::OnunhandledrejectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunhandledrejection_Getter");

  dom_window_v8_internal::OnunhandledrejectionAttributeGetter(info);
}

void V8Window::OnunhandledrejectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunhandledrejection_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnunhandledrejectionAttributeSetter(v8_value, info);
}

void V8Window::OnunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunload_Getter");

  dom_window_v8_internal::OnunloadAttributeGetter(info);
}

void V8Window::OnunloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onunload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::OnunloadAttributeSetter(v8_value, info);
}

void V8Window::PortalHostAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_portalHost_Getter");

  dom_window_v8_internal::PortalHostAttributeGetter(info);
}

void V8Window::PerformanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_performance_Getter");

  dom_window_v8_internal::PerformanceAttributeGetter(info);
}

void V8Window::PerformanceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_performance_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_v8_internal::PerformanceAttributeSetter(v8_value, info);
}

void V8Window::TaskWorkletAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_taskWorklet_Getter");

  dom_window_v8_internal::TaskWorkletAttributeGetter(info);
}

void V8Window::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_close");

  dom_window_v8_internal::CloseMethod(info);
}

void V8Window::CloseOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_close_OriginSafeMethodGetter");

  dom_window_v8_internal::CloseOriginSafeMethodGetter(info);
}

void V8Window::StopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_stop");

  dom_window_v8_internal::StopMethod(info);
}

void V8Window::FocusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_focus");

  dom_window_v8_internal::FocusMethod(info);
}

void V8Window::FocusOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_focus_OriginSafeMethodGetter");

  dom_window_v8_internal::FocusOriginSafeMethodGetter(info);
}

void V8Window::BlurMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_blur");

  dom_window_v8_internal::BlurMethod(info);
}

void V8Window::BlurOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_blur_OriginSafeMethodGetter");

  dom_window_v8_internal::BlurOriginSafeMethodGetter(info);
}

void V8Window::OpenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_open");

  dom_window_v8_internal::OpenMethod(info);
}

void V8Window::AlertMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_alert");

  dom_window_v8_internal::AlertMethod(info);
}

void V8Window::ConfirmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_confirm");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_Confirm_Method);
  dom_window_v8_internal::ConfirmMethod(info);
}

void V8Window::PromptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_prompt");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_Prompt_Method);
  dom_window_v8_internal::PromptMethod(info);
}

void V8Window::PrintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_print");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_Print_Method);
  dom_window_v8_internal::PrintMethod(info);
}

void V8Window::PostMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_postMessage");

  dom_window_v8_internal::PostMessageMethod(info);
}

void V8Window::PostMessageOriginSafeMethodGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_postMessage_OriginSafeMethodGetter");

  dom_window_v8_internal::PostMessageOriginSafeMethodGetter(info);
}

void V8Window::QueueMicrotaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_queueMicrotask");

  dom_window_v8_internal::QueueMicrotaskMethod(info);
}

void V8Window::RequestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_requestAnimationFrame");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kUnprefixedRequestAnimationFrame);
  dom_window_v8_internal::RequestAnimationFrameMethod(info);
}

void V8Window::CancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cancelAnimationFrame");

  dom_window_v8_internal::CancelAnimationFrameMethod(info);
}

void V8Window::RequestPostAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_requestPostAnimationFrame");

  dom_window_v8_internal::RequestPostAnimationFrameMethod(info);
}

void V8Window::CancelPostAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cancelPostAnimationFrame");

  dom_window_v8_internal::CancelPostAnimationFrameMethod(info);
}

void V8Window::CaptureEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_captureEvents");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowCaptureEvents);
  dom_window_v8_internal::CaptureEventsMethod(info);
}

void V8Window::ReleaseEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_releaseEvents");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowReleaseEvents);
  dom_window_v8_internal::ReleaseEventsMethod(info);
}

void V8Window::RequestIdleCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_requestIdleCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_RequestIdleCallback_Method);
  dom_window_v8_internal::RequestIdleCallbackMethod(info);
}

void V8Window::CancelIdleCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cancelIdleCallback");

  dom_window_v8_internal::CancelIdleCallbackMethod(info);
}

void V8Window::GetComputedStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_getComputedStyle");

  dom_window_v8_internal::GetComputedStyleMethod(info);
}

void V8Window::MatchMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_matchMedia");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_MatchMedia_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8Window_MatchMedia_Method);
  dom_window_v8_internal::MatchMediaMethod(info);
}

void V8Window::MoveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_moveTo");

  dom_window_v8_internal::MoveToMethod(info);
}

void V8Window::MoveByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_moveBy");

  dom_window_v8_internal::MoveByMethod(info);
}

void V8Window::ResizeToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_resizeTo");

  dom_window_v8_internal::ResizeToMethod(info);
}

void V8Window::ResizeByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_resizeBy");

  dom_window_v8_internal::ResizeByMethod(info);
}

void V8Window::ScrollMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scroll");

  dom_window_v8_internal::ScrollMethod(info);
}

void V8Window::ScrollToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollTo");

  dom_window_v8_internal::ScrollToMethod(info);
}

void V8Window::ScrollByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_scrollBy");

  dom_window_v8_internal::ScrollByMethod(info);
}

void V8Window::GetSelectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_getSelection");

  dom_window_v8_internal::GetSelectionMethod(info);
}

void V8Window::GetComputedAccessibleNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_getComputedAccessibleNode");

  dom_window_v8_internal::GetComputedAccessibleNodeMethod(info);
}

void V8Window::FindMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_find");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWindowFind);
  dom_window_v8_internal::FindMethod(info);
}

void V8Window::WebkitRequestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitRequestAnimationFrame");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedRequestAnimationFrame);
  dom_window_v8_internal::WebkitRequestAnimationFrameMethod(info);
}

void V8Window::WebkitCancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitCancelAnimationFrame");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedCancelAnimationFrame);
  dom_window_v8_internal::WebkitCancelAnimationFrameMethod(info);
}

void V8Window::FetchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_fetch");

  dom_window_v8_internal::FetchMethod(info);
}

void V8Window::BtoaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_btoa");

  dom_window_v8_internal::BtoaMethod(info);
}

void V8Window::AtobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_atob");

  dom_window_v8_internal::AtobMethod(info);
}

void V8Window::SetTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_setTimeout");

  dom_window_v8_internal::SetTimeoutMethod(info);
}

void V8Window::ClearTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clearTimeout");

  dom_window_v8_internal::ClearTimeoutMethod(info);
}

void V8Window::SetIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_setInterval");

  dom_window_v8_internal::SetIntervalMethod(info);
}

void V8Window::ClearIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_clearInterval");

  dom_window_v8_internal::ClearIntervalMethod(info);
}

void V8Window::CreateImageBitmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_createImageBitmap");

  dom_window_v8_internal::CreateImageBitmapMethod(info);
}

void V8Window::DOMWindowOriginSafeMethodSetterCallback(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<void>& info) {
  dom_window_v8_internal::DOMWindowOriginSafeMethodSetter(name, v8_value, info);
}
void V8Window::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  V8Window::NamedPropertyGetterCustom(property_name, info);
}

void V8Window::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IndexedPropertyGetter");

  dom_window_v8_internal::IndexedPropertyGetter(index, info);
}

void V8Window::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  dom_window_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8Window::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "Window");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8Window::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "Window");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

bool V8Window::SecurityCheck(v8::Local<v8::Context> accessing_context, v8::Local<v8::Object> accessed_object, v8::Local<v8::Value> data) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::Local<v8::Object> window = V8Window::FindInstanceInPrototypeChain(accessed_object, isolate);
  if (window.IsEmpty())
    return false;  // the frame is gone.

  const DOMWindow* target_window = V8Window::ToImpl(window);
  return BindingSecurity::ShouldAllowAccessTo(ToLocalDOMWindow(accessing_context), target_window, BindingSecurity::ErrorReportOption::kDoNotReport);
}

void V8Window::CrossOriginNamedGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CrossOriginNamedGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  for (const auto& attribute : dom_window_v8_internal::kCrossOriginAttributeTable) {
    if (property_name == attribute.name && attribute.getter) {
      attribute.getter(info);
      return;
    }
  }

  V8Window::NamedPropertyGetterCustom(property_name, info);
}

void V8Window::CrossOriginNamedSetter(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CrossOriginNamedSetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  for (const auto& attribute : dom_window_v8_internal::kCrossOriginAttributeTable) {
    if (property_name == attribute.name && attribute.setter) {
      attribute.setter(value, V8CrossOriginSetterInfo(info.GetIsolate(), info.Holder()));
      return;
    }
  }

  BindingSecurity::FailedAccessCheckFor(
      info.GetIsolate(),
      V8Window::GetWrapperTypeInfo(),
      info.Holder());
}

void V8Window::CrossOriginNamedEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info) {
  Vector<String> names;
  for (const auto& attribute : dom_window_v8_internal::kCrossOriginAttributeTable)
    names.push_back(attribute.name);

  // Use the current context as the creation context, as a cross-origin access
  // may involve an object that does not have a creation context.
  V8SetReturnValue(info,
                   ToV8(names, info.GetIsolate()->GetCurrentContext()->Global(),
                        info.GetIsolate()).As<v8::Array>());
}

void V8Window::CrossOriginIndexedGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  dom_window_v8_internal::IndexedPropertyGetter(index, info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8WindowAttributes[] = {
    { "window", V8Window::WindowAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "self", V8Window::SelfAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "location", V8Window::LocationAttributeGetterCallback, V8Window::LocationAttributeSetterCallback, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "closed", V8Window::ClosedAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "frames", V8Window::FramesAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "length", V8Window::LengthAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "top", V8Window::TopAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "opener", V8Window::OpenerAttributeGetterCallback, V8Window::OpenerAttributeSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "parent", V8Window::ParentAttributeGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitURL", V8Window::WebkitURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WebKitMutationObserver", V8Window::WebKitMutationObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "WebKitCSSMatrix", V8Window::WebKitCSSMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AbortController", V8Window::AbortControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AbortSignal", V8Window::AbortSignalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Animation", V8Window::AnimationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AnimationEffect", V8Window::AnimationEffectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AnimationEvent", V8Window::AnimationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Attr", V8Window::AttrConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BarProp", V8Window::BarPropConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BeforeUnloadEvent", V8Window::BeforeUnloadEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Blob", V8Window::BlobConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CDATASection", V8Window::CDATASectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSConditionRule", V8Window::CSSConditionRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSS", V8Window::CSSConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSFontFaceRule", V8Window::CSSFontFaceRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSGroupingRule", V8Window::CSSGroupingRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSImageValue", V8Window::CSSImageValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSImportRule", V8Window::CSSImportRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSKeyframeRule", V8Window::CSSKeyframeRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSKeyframesRule", V8Window::CSSKeyframesRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSKeywordValue", V8Window::CSSKeywordValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathInvert", V8Window::CSSMathInvertConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathMax", V8Window::CSSMathMaxConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathMin", V8Window::CSSMathMinConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathNegate", V8Window::CSSMathNegateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathProduct", V8Window::CSSMathProductConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathSum", V8Window::CSSMathSumConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMathValue", V8Window::CSSMathValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMatrixComponent", V8Window::CSSMatrixComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSMediaRule", V8Window::CSSMediaRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSNamespaceRule", V8Window::CSSNamespaceRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSNumericArray", V8Window::CSSNumericArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSNumericValue", V8Window::CSSNumericValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSPageRule", V8Window::CSSPageRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSPerspective", V8Window::CSSPerspectiveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSPositionValue", V8Window::CSSPositionValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSRotate", V8Window::CSSRotateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSRule", V8Window::CSSRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSRuleList", V8Window::CSSRuleListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSScale", V8Window::CSSScaleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkew", V8Window::CSSSkewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewX", V8Window::CSSSkewXConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSkewY", V8Window::CSSSkewYConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleDeclaration", V8Window::CSSStyleDeclarationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleRule", V8Window::CSSStyleRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleSheet", V8Window::CSSStyleSheetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSStyleValue", V8Window::CSSStyleValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSSupportsRule", V8Window::CSSSupportsRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSTransformComponent", V8Window::CSSTransformComponentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSTransformValue", V8Window::CSSTransformValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSTranslate", V8Window::CSSTranslateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSUnitValue", V8Window::CSSUnitValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSUnparsedValue", V8Window::CSSUnparsedValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CSSVariableReferenceValue", V8Window::CSSVariableReferenceValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CharacterData", V8Window::CharacterDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ClipboardEvent", V8Window::ClipboardEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Comment", V8Window::CommentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CompositionEvent", V8Window::CompositionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CustomElementRegistry", V8Window::CustomElementRegistryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CustomEvent", V8Window::CustomEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMException", V8Window::DOMExceptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMImplementation", V8Window::DOMImplementationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrix", V8Window::DOMMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMMatrixReadOnly", V8Window::DOMMatrixReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMParser", V8Window::DOMParserConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPoint", V8Window::DOMPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMPointReadOnly", V8Window::DOMPointReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMQuad", V8Window::DOMQuadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRect", V8Window::DOMRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRectList", V8Window::DOMRectListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMRectReadOnly", V8Window::DOMRectReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMStringList", V8Window::DOMStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMStringMap", V8Window::DOMStringMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMTokenList", V8Window::DOMTokenListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DataTransfer", V8Window::DataTransferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DataTransferItem", V8Window::DataTransferItemConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DataTransferItemList", V8Window::DataTransferItemListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DataView", V8Window::DataViewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Document", V8Window::DocumentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DocumentFragment", V8Window::DocumentFragmentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DocumentType", V8Window::DocumentTypeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DragEvent", V8Window::DragEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Element", V8Window::ElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ErrorEvent", V8Window::ErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Event", V8Window::EventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventTarget", V8Window::EventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "External", V8Window::ExternalConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "File", V8Window::FileConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileList", V8Window::FileListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FileReader", V8Window::FileReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FocusEvent", V8Window::FocusEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FontFaceSetLoadEvent", V8Window::FontFaceSetLoadEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "FormData", V8Window::FormDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLAllCollection", V8Window::HTMLAllCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLAnchorElement", V8Window::HTMLAnchorElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLAreaElement", V8Window::HTMLAreaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLAudioElement", V8Window::HTMLAudioElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Audio", V8Window::AudioConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLBRElement", V8Window::HTMLBRElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLBaseElement", V8Window::HTMLBaseElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLBodyElement", V8Window::HTMLBodyElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLButtonElement", V8Window::HTMLButtonElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLCanvasElement", V8Window::HTMLCanvasElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLCollection", V8Window::HTMLCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLContentElement", V8Window::HTMLContentElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDListElement", V8Window::HTMLDListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDataElement", V8Window::HTMLDataElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDataListElement", V8Window::HTMLDataListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDetailsElement", V8Window::HTMLDetailsElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDialogElement", V8Window::HTMLDialogElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDirectoryElement", V8Window::HTMLDirectoryElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDivElement", V8Window::HTMLDivElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLDocument", V8Window::HTMLDocumentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLElement", V8Window::HTMLElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLEmbedElement", V8Window::HTMLEmbedElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLFieldSetElement", V8Window::HTMLFieldSetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLFontElement", V8Window::HTMLFontElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLFormControlsCollection", V8Window::HTMLFormControlsCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLFormElement", V8Window::HTMLFormElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLFrameElement", V8Window::HTMLFrameElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLFrameSetElement", V8Window::HTMLFrameSetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLHRElement", V8Window::HTMLHRElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLHeadElement", V8Window::HTMLHeadElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLHeadingElement", V8Window::HTMLHeadingElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLHtmlElement", V8Window::HTMLHtmlElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLIFrameElement", V8Window::HTMLIFrameElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLImageElement", V8Window::HTMLImageElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Image", V8Window::ImageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLInputElement", V8Window::HTMLInputElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLLIElement", V8Window::HTMLLIElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLLabelElement", V8Window::HTMLLabelElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLLegendElement", V8Window::HTMLLegendElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLLinkElement", V8Window::HTMLLinkElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLMapElement", V8Window::HTMLMapElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLMarqueeElement", V8Window::HTMLMarqueeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLMediaElement", V8Window::HTMLMediaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLMenuElement", V8Window::HTMLMenuElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLMetaElement", V8Window::HTMLMetaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLMeterElement", V8Window::HTMLMeterElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLModElement", V8Window::HTMLModElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLOListElement", V8Window::HTMLOListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLObjectElement", V8Window::HTMLObjectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLOptGroupElement", V8Window::HTMLOptGroupElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLOptionElement", V8Window::HTMLOptionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Option", V8Window::OptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLOptionsCollection", V8Window::HTMLOptionsCollectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLOutputElement", V8Window::HTMLOutputElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLParagraphElement", V8Window::HTMLParagraphElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLParamElement", V8Window::HTMLParamElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLPictureElement", V8Window::HTMLPictureElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLPreElement", V8Window::HTMLPreElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLProgressElement", V8Window::HTMLProgressElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLQuoteElement", V8Window::HTMLQuoteElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLScriptElement", V8Window::HTMLScriptElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLSelectElement", V8Window::HTMLSelectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLShadowElement", V8Window::HTMLShadowElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLSlotElement", V8Window::HTMLSlotElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLSourceElement", V8Window::HTMLSourceElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLSpanElement", V8Window::HTMLSpanElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLStyleElement", V8Window::HTMLStyleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableCaptionElement", V8Window::HTMLTableCaptionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableCellElement", V8Window::HTMLTableCellElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableColElement", V8Window::HTMLTableColElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableElement", V8Window::HTMLTableElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableRowElement", V8Window::HTMLTableRowElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTableSectionElement", V8Window::HTMLTableSectionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTemplateElement", V8Window::HTMLTemplateElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTextAreaElement", V8Window::HTMLTextAreaElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTimeElement", V8Window::HTMLTimeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTitleElement", V8Window::HTMLTitleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLTrackElement", V8Window::HTMLTrackElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLUListElement", V8Window::HTMLUListElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLUnknownElement", V8Window::HTMLUnknownElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HTMLVideoElement", V8Window::HTMLVideoElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "HashChangeEvent", V8Window::HashChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Headers", V8Window::HeadersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "History", V8Window::HistoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IdleDeadline", V8Window::IdleDeadlineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmap", V8Window::ImageBitmapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageData", V8Window::ImageDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "InputDeviceCapabilities", V8Window::InputDeviceCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "InputEvent", V8Window::InputEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IntersectionObserver", V8Window::IntersectionObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IntersectionObserverEntry", V8Window::IntersectionObserverEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "KeyboardEvent", V8Window::KeyboardEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "KeyframeEffect", V8Window::KeyframeEffectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Location", V8Window::LocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaError", V8Window::MediaErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaList", V8Window::MediaListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaQueryList", V8Window::MediaQueryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaQueryListEvent", V8Window::MediaQueryListEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageChannel", V8Window::MessageChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessageEvent", V8Window::MessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MessagePort", V8Window::MessagePortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MouseEvent", V8Window::MouseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MutationEvent", V8Window::MutationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MutationObserver", V8Window::MutationObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MutationRecord", V8Window::MutationRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NamedNodeMap", V8Window::NamedNodeMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Navigator", V8Window::NavigatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Node", V8Window::NodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NodeFilter", V8Window::NodeFilterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NodeIterator", V8Window::NodeIteratorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NodeList", V8Window::NodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PageTransitionEvent", V8Window::PageTransitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Performance", V8Window::PerformanceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceEntry", V8Window::PerformanceEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceLongTaskTiming", V8Window::PerformanceLongTaskTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMark", V8Window::PerformanceMarkConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceMeasure", V8Window::PerformanceMeasureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceNavigation", V8Window::PerformanceNavigationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceNavigationTiming", V8Window::PerformanceNavigationTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserver", V8Window::PerformanceObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceObserverEntryList", V8Window::PerformanceObserverEntryListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformancePaintTiming", V8Window::PerformancePaintTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceResourceTiming", V8Window::PerformanceResourceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceServerTiming", V8Window::PerformanceServerTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PerformanceTiming", V8Window::PerformanceTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PointerEvent", V8Window::PointerEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PopStateEvent", V8Window::PopStateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ProcessingInstruction", V8Window::ProcessingInstructionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ProgressEvent", V8Window::ProgressEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PromiseRejectionEvent", V8Window::PromiseRejectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RadioNodeList", V8Window::RadioNodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Range", V8Window::RangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ReadableStream", V8Window::ReadableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ReportingObserver", V8Window::ReportingObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Request", V8Window::RequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ResizeObserver", V8Window::ResizeObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ResizeObserverEntry", V8Window::ResizeObserverEntryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Response", V8Window::ResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAElement", V8Window::SVGAElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAngle", V8Window::SVGAngleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimateElement", V8Window::SVGAnimateElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimateMotionElement", V8Window::SVGAnimateMotionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimateTransformElement", V8Window::SVGAnimateTransformElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedAngle", V8Window::SVGAnimatedAngleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedBoolean", V8Window::SVGAnimatedBooleanConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedEnumeration", V8Window::SVGAnimatedEnumerationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedInteger", V8Window::SVGAnimatedIntegerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedLength", V8Window::SVGAnimatedLengthConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedLengthList", V8Window::SVGAnimatedLengthListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedNumber", V8Window::SVGAnimatedNumberConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedNumberList", V8Window::SVGAnimatedNumberListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedPreserveAspectRatio", V8Window::SVGAnimatedPreserveAspectRatioConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedRect", V8Window::SVGAnimatedRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedString", V8Window::SVGAnimatedStringConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimatedTransformList", V8Window::SVGAnimatedTransformListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGAnimationElement", V8Window::SVGAnimationElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGCircleElement", V8Window::SVGCircleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGClipPathElement", V8Window::SVGClipPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGComponentTransferFunctionElement", V8Window::SVGComponentTransferFunctionElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGDefsElement", V8Window::SVGDefsElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGDescElement", V8Window::SVGDescElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGDiscardElement", V8Window::SVGDiscardElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGElement", V8Window::SVGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGEllipseElement", V8Window::SVGEllipseElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEBlendElement", V8Window::SVGFEBlendElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEColorMatrixElement", V8Window::SVGFEColorMatrixElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEComponentTransferElement", V8Window::SVGFEComponentTransferElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFECompositeElement", V8Window::SVGFECompositeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEConvolveMatrixElement", V8Window::SVGFEConvolveMatrixElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDiffuseLightingElement", V8Window::SVGFEDiffuseLightingElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDisplacementMapElement", V8Window::SVGFEDisplacementMapElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDistantLightElement", V8Window::SVGFEDistantLightElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEDropShadowElement", V8Window::SVGFEDropShadowElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFloodElement", V8Window::SVGFEFloodElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncAElement", V8Window::SVGFEFuncAElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncBElement", V8Window::SVGFEFuncBElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncGElement", V8Window::SVGFEFuncGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEFuncRElement", V8Window::SVGFEFuncRElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEGaussianBlurElement", V8Window::SVGFEGaussianBlurElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEImageElement", V8Window::SVGFEImageElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEMergeElement", V8Window::SVGFEMergeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEMergeNodeElement", V8Window::SVGFEMergeNodeElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEMorphologyElement", V8Window::SVGFEMorphologyElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEOffsetElement", V8Window::SVGFEOffsetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFEPointLightElement", V8Window::SVGFEPointLightElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFESpecularLightingElement", V8Window::SVGFESpecularLightingElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFESpotLightElement", V8Window::SVGFESpotLightElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFETileElement", V8Window::SVGFETileElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFETurbulenceElement", V8Window::SVGFETurbulenceElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGFilterElement", V8Window::SVGFilterElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGForeignObjectElement", V8Window::SVGForeignObjectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGGElement", V8Window::SVGGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGGeometryElement", V8Window::SVGGeometryElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGGradientElement", V8Window::SVGGradientElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGGraphicsElement", V8Window::SVGGraphicsElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGImageElement", V8Window::SVGImageElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGLength", V8Window::SVGLengthConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGLengthList", V8Window::SVGLengthListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGLineElement", V8Window::SVGLineElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGLinearGradientElement", V8Window::SVGLinearGradientElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGMPathElement", V8Window::SVGMPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGMarkerElement", V8Window::SVGMarkerElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGMaskElement", V8Window::SVGMaskElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGMatrix", V8Window::SVGMatrixConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGMetadataElement", V8Window::SVGMetadataElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGNumber", V8Window::SVGNumberConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGNumberList", V8Window::SVGNumberListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPathElement", V8Window::SVGPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPatternElement", V8Window::SVGPatternElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPoint", V8Window::SVGPointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPointList", V8Window::SVGPointListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPolygonElement", V8Window::SVGPolygonElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPolylineElement", V8Window::SVGPolylineElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGPreserveAspectRatio", V8Window::SVGPreserveAspectRatioConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGRadialGradientElement", V8Window::SVGRadialGradientElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGRect", V8Window::SVGRectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGRectElement", V8Window::SVGRectElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGSVGElement", V8Window::SVGSVGElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGScriptElement", V8Window::SVGScriptElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGSetElement", V8Window::SVGSetElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGStopElement", V8Window::SVGStopElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGStringList", V8Window::SVGStringListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGStyleElement", V8Window::SVGStyleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGSwitchElement", V8Window::SVGSwitchElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGSymbolElement", V8Window::SVGSymbolElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTSpanElement", V8Window::SVGTSpanElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTextContentElement", V8Window::SVGTextContentElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTextElement", V8Window::SVGTextElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTextPathElement", V8Window::SVGTextPathElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTextPositioningElement", V8Window::SVGTextPositioningElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTitleElement", V8Window::SVGTitleElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTransform", V8Window::SVGTransformConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGTransformList", V8Window::SVGTransformListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGUnitTypes", V8Window::SVGUnitTypesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGUseElement", V8Window::SVGUseElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SVGViewElement", V8Window::SVGViewElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Screen", V8Window::ScreenConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SecurityPolicyViolationEvent", V8Window::SecurityPolicyViolationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Selection", V8Window::SelectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ShadowRoot", V8Window::ShadowRootConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StaticRange", V8Window::StaticRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StylePropertyMap", V8Window::StylePropertyMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StylePropertyMapReadOnly", V8Window::StylePropertyMapReadOnlyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StyleSheet", V8Window::StyleSheetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StyleSheetList", V8Window::StyleSheetListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TaskAttributionTiming", V8Window::TaskAttributionTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Text", V8Window::TextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEvent", V8Window::TextEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextMetrics", V8Window::TextMetricsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextTrack", V8Window::TextTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextTrackCue", V8Window::TextTrackCueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextTrackCueList", V8Window::TextTrackCueListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextTrackList", V8Window::TextTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TimeRanges", V8Window::TimeRangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Touch", V8Window::TouchConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TouchEvent", V8Window::TouchEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TouchList", V8Window::TouchListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TrackEvent", V8Window::TrackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TransformStream", V8Window::TransformStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TransitionEvent", V8Window::TransitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TreeWalker", V8Window::TreeWalkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "UIEvent", V8Window::UIEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URL", V8Window::URLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "URLSearchParams", V8Window::URLSearchParamsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "VTTCue", V8Window::VTTCueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ValidityState", V8Window::ValidityStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "VisualViewport", V8Window::VisualViewportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WheelEvent", V8Window::WheelEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Window", V8Window::WindowConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Worker", V8Window::WorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WritableStream", V8Window::WritableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLDocument", V8Window::XMLDocumentConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequest", V8Window::XMLHttpRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestEventTarget", V8Window::XMLHttpRequestEventTargetConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLHttpRequestUpload", V8Window::XMLHttpRequestUploadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XMLSerializer", V8Window::XMLSerializerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XPathEvaluator", V8Window::XPathEvaluatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XPathExpression", V8Window::XPathExpressionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "XPathResult", V8Window::XPathResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WindowAccessors[] = {
    { "document", V8Window::DocumentAttributeGetterCallback, nullptr, V8PrivateProperty::kWindowDocumentCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8Window::NameAttributeGetterCallback, V8Window::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "customElements", V8Window::CustomElementsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "history", V8Window::HistoryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "locationbar", V8Window::LocationbarAttributeGetterCallback, V8Window::LocationbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "menubar", V8Window::MenubarAttributeGetterCallback, V8Window::MenubarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "personalbar", V8Window::PersonalbarAttributeGetterCallback, V8Window::PersonalbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollbars", V8Window::ScrollbarsAttributeGetterCallback, V8Window::ScrollbarsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "statusbar", V8Window::StatusbarAttributeGetterCallback, V8Window::StatusbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "toolbar", V8Window::ToolbarAttributeGetterCallback, V8Window::ToolbarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "status", V8Window::StatusAttributeGetterCallback, V8Window::StatusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "frameElement", V8Window::FrameElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "navigator", V8Window::NavigatorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "origin", V8Window::OriginAttributeGetterCallback, V8Window::OriginAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "external", V8Window::ExternalAttributeGetterCallback, V8Window::ExternalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "screen", V8Window::ScreenAttributeGetterCallback, V8Window::ScreenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "innerWidth", V8Window::InnerWidthAttributeGetterCallback, V8Window::InnerWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "innerHeight", V8Window::InnerHeightAttributeGetterCallback, V8Window::InnerHeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollX", V8Window::ScrollXAttributeGetterCallback, V8Window::ScrollXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pageXOffset", V8Window::PageXOffsetAttributeGetterCallback, V8Window::PageXOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollY", V8Window::ScrollYAttributeGetterCallback, V8Window::ScrollYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pageYOffset", V8Window::PageYOffsetAttributeGetterCallback, V8Window::PageYOffsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visualViewport", V8Window::VisualViewportAttributeGetterCallback, V8Window::VisualViewportAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "screenX", V8Window::ScreenXAttributeGetterCallback, V8Window::ScreenXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "screenY", V8Window::ScreenYAttributeGetterCallback, V8Window::ScreenYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "outerWidth", V8Window::OuterWidthAttributeGetterCallback, V8Window::OuterWidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "outerHeight", V8Window::OuterHeightAttributeGetterCallback, V8Window::OuterHeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "devicePixelRatio", V8Window::DevicePixelRatioAttributeGetterCallback, V8Window::DevicePixelRatioAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clientInformation", V8Window::ClientInformationAttributeGetterCallback, V8Window::ClientInformationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "event", V8Window::EventAttributeGetterCallback, V8Window::EventAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "offscreenBuffering", V8Window::OffscreenBufferingAttributeGetterCallback, V8Window::OffscreenBufferingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "screenLeft", V8Window::ScreenLeftAttributeGetterCallback, V8Window::ScreenLeftAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "screenTop", V8Window::ScreenTopAttributeGetterCallback, V8Window::ScreenTopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultStatus", V8Window::DefaultStatusAttributeGetterCallback, V8Window::DefaultStatusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultstatus", V8Window::DefaultstatusAttributeGetterCallback, V8Window::DefaultstatusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "styleMedia", V8Window::StyleMediaAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onanimationend", V8Window::OnanimationendAttributeGetterCallback, V8Window::OnanimationendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onanimationiteration", V8Window::OnanimationiterationAttributeGetterCallback, V8Window::OnanimationiterationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onanimationstart", V8Window::OnanimationstartAttributeGetterCallback, V8Window::OnanimationstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsearch", V8Window::OnsearchAttributeGetterCallback, V8Window::OnsearchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontransitionend", V8Window::OntransitionendAttributeGetterCallback, V8Window::OntransitionendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitanimationend", V8Window::OnwebkitanimationendAttributeGetterCallback, V8Window::OnwebkitanimationendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitanimationiteration", V8Window::OnwebkitanimationiterationAttributeGetterCallback, V8Window::OnwebkitanimationiterationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitanimationstart", V8Window::OnwebkitanimationstartAttributeGetterCallback, V8Window::OnwebkitanimationstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkittransitionend", V8Window::OnwebkittransitionendAttributeGetterCallback, V8Window::OnwebkittransitionendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isSecureContext", V8Window::IsSecureContextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8Window::OnabortAttributeGetterCallback, V8Window::OnabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onblur", V8Window::OnblurAttributeGetterCallback, V8Window::OnblurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncancel", V8Window::OncancelAttributeGetterCallback, V8Window::OncancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncanplay", V8Window::OncanplayAttributeGetterCallback, V8Window::OncanplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncanplaythrough", V8Window::OncanplaythroughAttributeGetterCallback, V8Window::OncanplaythroughAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onchange", V8Window::OnchangeAttributeGetterCallback, V8Window::OnchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onclick", V8Window::OnclickAttributeGetterCallback, V8Window::OnclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onclose", V8Window::OncloseAttributeGetterCallback, V8Window::OncloseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncontextmenu", V8Window::OncontextmenuAttributeGetterCallback, V8Window::OncontextmenuAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncuechange", V8Window::OncuechangeAttributeGetterCallback, V8Window::OncuechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondblclick", V8Window::OndblclickAttributeGetterCallback, V8Window::OndblclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondrag", V8Window::OndragAttributeGetterCallback, V8Window::OndragAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragend", V8Window::OndragendAttributeGetterCallback, V8Window::OndragendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragenter", V8Window::OndragenterAttributeGetterCallback, V8Window::OndragenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragleave", V8Window::OndragleaveAttributeGetterCallback, V8Window::OndragleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragover", V8Window::OndragoverAttributeGetterCallback, V8Window::OndragoverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragstart", V8Window::OndragstartAttributeGetterCallback, V8Window::OndragstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondrop", V8Window::OndropAttributeGetterCallback, V8Window::OndropAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondurationchange", V8Window::OndurationchangeAttributeGetterCallback, V8Window::OndurationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onemptied", V8Window::OnemptiedAttributeGetterCallback, V8Window::OnemptiedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onended", V8Window::OnendedAttributeGetterCallback, V8Window::OnendedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8Window::OnerrorAttributeGetterCallback, V8Window::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfocus", V8Window::OnfocusAttributeGetterCallback, V8Window::OnfocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oninput", V8Window::OninputAttributeGetterCallback, V8Window::OninputAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oninvalid", V8Window::OninvalidAttributeGetterCallback, V8Window::OninvalidAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onkeydown", V8Window::OnkeydownAttributeGetterCallback, V8Window::OnkeydownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onkeypress", V8Window::OnkeypressAttributeGetterCallback, V8Window::OnkeypressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onkeyup", V8Window::OnkeyupAttributeGetterCallback, V8Window::OnkeyupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onload", V8Window::OnloadAttributeGetterCallback, V8Window::OnloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadeddata", V8Window::OnloadeddataAttributeGetterCallback, V8Window::OnloadeddataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadedmetadata", V8Window::OnloadedmetadataAttributeGetterCallback, V8Window::OnloadedmetadataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadstart", V8Window::OnloadstartAttributeGetterCallback, V8Window::OnloadstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmousedown", V8Window::OnmousedownAttributeGetterCallback, V8Window::OnmousedownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseenter", V8Window::OnmouseenterAttributeGetterCallback, V8Window::OnmouseenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseleave", V8Window::OnmouseleaveAttributeGetterCallback, V8Window::OnmouseleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmousemove", V8Window::OnmousemoveAttributeGetterCallback, V8Window::OnmousemoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseout", V8Window::OnmouseoutAttributeGetterCallback, V8Window::OnmouseoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseover", V8Window::OnmouseoverAttributeGetterCallback, V8Window::OnmouseoverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseup", V8Window::OnmouseupAttributeGetterCallback, V8Window::OnmouseupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmousewheel", V8Window::OnmousewheelAttributeGetterCallback, V8Window::OnmousewheelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpause", V8Window::OnpauseAttributeGetterCallback, V8Window::OnpauseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onplay", V8Window::OnplayAttributeGetterCallback, V8Window::OnplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onplaying", V8Window::OnplayingAttributeGetterCallback, V8Window::OnplayingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onprogress", V8Window::OnprogressAttributeGetterCallback, V8Window::OnprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onratechange", V8Window::OnratechangeAttributeGetterCallback, V8Window::OnratechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onreset", V8Window::OnresetAttributeGetterCallback, V8Window::OnresetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresize", V8Window::OnresizeAttributeGetterCallback, V8Window::OnresizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onscroll", V8Window::OnscrollAttributeGetterCallback, V8Window::OnscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onseeked", V8Window::OnseekedAttributeGetterCallback, V8Window::OnseekedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onseeking", V8Window::OnseekingAttributeGetterCallback, V8Window::OnseekingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onselect", V8Window::OnselectAttributeGetterCallback, V8Window::OnselectAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstalled", V8Window::OnstalledAttributeGetterCallback, V8Window::OnstalledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsubmit", V8Window::OnsubmitAttributeGetterCallback, V8Window::OnsubmitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsuspend", V8Window::OnsuspendAttributeGetterCallback, V8Window::OnsuspendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontimeupdate", V8Window::OntimeupdateAttributeGetterCallback, V8Window::OntimeupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontoggle", V8Window::OntoggleAttributeGetterCallback, V8Window::OntoggleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onvolumechange", V8Window::OnvolumechangeAttributeGetterCallback, V8Window::OnvolumechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwaiting", V8Window::OnwaitingAttributeGetterCallback, V8Window::OnwaitingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwheel", V8Window::OnwheelAttributeGetterCallback, V8Window::OnwheelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onauxclick", V8Window::OnauxclickAttributeGetterCallback, V8Window::OnauxclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ongotpointercapture", V8Window::OngotpointercaptureAttributeGetterCallback, V8Window::OngotpointercaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onlostpointercapture", V8Window::OnlostpointercaptureAttributeGetterCallback, V8Window::OnlostpointercaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerdown", V8Window::OnpointerdownAttributeGetterCallback, V8Window::OnpointerdownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointermove", V8Window::OnpointermoveAttributeGetterCallback, V8Window::OnpointermoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerup", V8Window::OnpointerupAttributeGetterCallback, V8Window::OnpointerupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointercancel", V8Window::OnpointercancelAttributeGetterCallback, V8Window::OnpointercancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerover", V8Window::OnpointeroverAttributeGetterCallback, V8Window::OnpointeroverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerout", V8Window::OnpointeroutAttributeGetterCallback, V8Window::OnpointeroutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerenter", V8Window::OnpointerenterAttributeGetterCallback, V8Window::OnpointerenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerleave", V8Window::OnpointerleaveAttributeGetterCallback, V8Window::OnpointerleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onselectstart", V8Window::OnselectstartAttributeGetterCallback, V8Window::OnselectstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onselectionchange", V8Window::OnselectionchangeAttributeGetterCallback, V8Window::OnselectionchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onafterprint", V8Window::OnafterprintAttributeGetterCallback, V8Window::OnafterprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeprint", V8Window::OnbeforeprintAttributeGetterCallback, V8Window::OnbeforeprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeunload", V8Window::OnbeforeunloadAttributeGetterCallback, V8Window::OnbeforeunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onhashchange", V8Window::OnhashchangeAttributeGetterCallback, V8Window::OnhashchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onlanguagechange", V8Window::OnlanguagechangeAttributeGetterCallback, V8Window::OnlanguagechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8Window::OnmessageAttributeGetterCallback, V8Window::OnmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8Window::OnmessageerrorAttributeGetterCallback, V8Window::OnmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onoffline", V8Window::OnofflineAttributeGetterCallback, V8Window::OnofflineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ononline", V8Window::OnonlineAttributeGetterCallback, V8Window::OnonlineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpagehide", V8Window::OnpagehideAttributeGetterCallback, V8Window::OnpagehideAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpageshow", V8Window::OnpageshowAttributeGetterCallback, V8Window::OnpageshowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpopstate", V8Window::OnpopstateAttributeGetterCallback, V8Window::OnpopstateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onrejectionhandled", V8Window::OnrejectionhandledAttributeGetterCallback, V8Window::OnrejectionhandledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstorage", V8Window::OnstorageAttributeGetterCallback, V8Window::OnstorageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunhandledrejection", V8Window::OnunhandledrejectionAttributeGetterCallback, V8Window::OnunhandledrejectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunload", V8Window::OnunloadAttributeGetterCallback, V8Window::OnunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "performance", V8Window::PerformanceAttributeGetterCallback, V8Window::PerformanceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8WindowMethods[] = {
    {"stop", V8Window::StopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"open", V8Window::OpenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"alert", V8Window::AlertMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"confirm", V8Window::ConfirmMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"prompt", V8Window::PromptMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"print", V8Window::PrintMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queueMicrotask", V8Window::QueueMicrotaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestAnimationFrame", V8Window::RequestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelAnimationFrame", V8Window::CancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"captureEvents", V8Window::CaptureEventsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"releaseEvents", V8Window::ReleaseEventsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestIdleCallback", V8Window::RequestIdleCallbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelIdleCallback", V8Window::CancelIdleCallbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getComputedStyle", V8Window::GetComputedStyleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"matchMedia", V8Window::MatchMediaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8Window::MoveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveBy", V8Window::MoveByMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resizeTo", V8Window::ResizeToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resizeBy", V8Window::ResizeByMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scroll", V8Window::ScrollMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollTo", V8Window::ScrollToMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollBy", V8Window::ScrollByMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelection", V8Window::GetSelectionMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"find", V8Window::FindMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitRequestAnimationFrame", V8Window::WebkitRequestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitCancelAnimationFrame", V8Window::WebkitCancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fetch", V8Window::FetchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"btoa", V8Window::BtoaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"atob", V8Window::AtobMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTimeout", V8Window::SetTimeoutMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearTimeout", V8Window::ClearTimeoutMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setInterval", V8Window::SetIntervalMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearInterval", V8Window::ClearIntervalMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createImageBitmap", V8Window::CreateImageBitmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8Window::InstallV8WindowTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Window::GetWrapperTypeInfo()->interface_name, V8Window::DomTemplateForNamedPropertiesObject(isolate, world), V8Window::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  prototype_template->SetInternalFieldCount(V8Window::kInternalFieldCount);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototype_template->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instance_template->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instance_template, prototype_template,
      kV8WindowAttributes, base::size(kV8WindowAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WindowAccessors, base::size(kV8WindowAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WindowMethods, base::size(kV8WindowMethods));

  // Cross-origin access check
  instance_template->SetAccessCheckCallbackAndHandler(
      V8Window::SecurityCheck,
      v8::NamedPropertyHandlerConfiguration(
          V8Window::CrossOriginNamedGetter,
          V8Window::CrossOriginNamedSetter,
          nullptr,
          nullptr,
          V8Window::CrossOriginNamedEnumerator),
      v8::IndexedPropertyHandlerConfiguration(V8Window::CrossOriginIndexedGetter),
      v8::External::New(isolate, const_cast<WrapperTypeInfo*>(V8Window::GetWrapperTypeInfo())));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8Window::IndexedPropertyGetterCallback,
      V8Window::IndexedPropertySetterCallback,
      V8Window::IndexedPropertyDescriptorCallback,
      nullptr,
      nullptr,
      V8Window::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);

  // Custom signature
  static const V8DOMConfiguration::AttributeConfiguration closeOriginSafeAttributeConfiguration[] = {
      {"close", V8Window::CloseOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds}
  };
   for (const auto& attributeConfig : closeOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance_template, prototype_template, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration focusOriginSafeAttributeConfiguration[] = {
      {"focus", V8Window::FocusOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds}
  };
   for (const auto& attributeConfig : focusOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance_template, prototype_template, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration blurOriginSafeAttributeConfiguration[] = {
      {"blur", V8Window::BlurOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds}
  };
   for (const auto& attributeConfig : blurOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance_template, prototype_template, attributeConfig);
  static const V8DOMConfiguration::AttributeConfiguration postMessageOriginSafeAttributeConfiguration[] = {
      {"postMessage", V8Window::PostMessageOriginSafeMethodGetterCallback, V8Window::DOMWindowOriginSafeMethodSetterCallback, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds}
  };
   for (const auto& attributeConfig : postMessageOriginSafeAttributeConfiguration)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance_template, prototype_template, attributeConfig);
}

void V8Window::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AccessibleNode", V8Window::AccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "AccessibleNodeList", V8Window::AccessibleNodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "ComputedAccessibleNode", V8Window::ComputedAccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AudioTrack", V8Window::AudioTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "AudioTrackList", V8Window::AudioTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "VideoTrack", V8Window::VideoTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "VideoTrackList", V8Window::VideoTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::CSSFontFeatureValuesEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CSSFontFeatureValuesRule", V8Window::CSSFontFeatureValuesRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::CSSViewportEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CSSViewportRule", V8Window::CSSViewportRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BeforeActivateEvent", V8Window::BeforeActivateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DisplayLockContext", V8Window::DisplayLockContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ElementInternalsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ElementInternals", V8Window::ElementInternalsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FormDataEvent", V8Window::FormDataEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ActivateInvisibleEvent", V8Window::ActivateInvisibleEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Mojo", V8Window::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8Window::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8Window::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MojoInterfaceInterceptor", V8Window::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8Window::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OffscreenCanvas", V8Window::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OverscrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OverscrollEvent", V8Window::OverscrollEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PortalsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "HTMLPortalElement", V8Window::HTMLPortalElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PortalActivateEvent", V8Window::PortalActivateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PortalHost", V8Window::PortalHostConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ScrollState", V8Window::ScrollStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::SharedWorkerEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "SharedWorker", V8Window::SharedWorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FontFace", V8Window::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StreamsNativeEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ReadableStreamDefaultReader", V8Window::ReadableStreamDefaultReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WritableStreamDefaultWriter", V8Window::WritableStreamDefaultWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::UserActivationAPIEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "UserActivation", V8Window::UserActivationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AnimationPlaybackEvent", V8Window::AnimationPlaybackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "AnimationTimeline", V8Window::AnimationTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DocumentTimeline", V8Window::DocumentTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "VTTRegion", V8Window::VTTRegionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ScriptedTaskQueue", V8Window::ScriptedTaskQueueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "ScriptedTaskQueueController", V8Window::ScriptedTaskQueueControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Task", V8Window::TaskConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TaskWorkletGlobalScope", V8Window::TaskWorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::XSLTEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "XSLTProcessor", V8Window::XSLTProcessorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onbeforeactivate", V8Window::OnbeforeactivateAttributeGetterCallback, V8Window::OnbeforeactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onformdata", V8Window::OnformdataAttributeGetterCallback, V8Window::OnformdataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onactivateinvisible", V8Window::OnactivateinvisibleAttributeGetterCallback, V8Window::OnactivateinvisibleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OrientationEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "orientation", V8Window::OrientationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onorientationchange", V8Window::OnorientationchangeAttributeGetterCallback, V8Window::OnorientationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OverscrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onoverscroll", V8Window::OnoverscrollAttributeGetterCallback, V8Window::OnoverscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onscrollend", V8Window::OnscrollendAttributeGetterCallback, V8Window::OnscrollendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PointerRawUpdateEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onpointerrawupdate", V8Window::OnpointerrawupdateAttributeGetterCallback, V8Window::OnpointerrawupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PortalsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "portalHost", V8Window::PortalHostAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onportalactivate", V8Window::OnportalactivateAttributeGetterCallback, V8Window::OnportalactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "TaskQueue", V8Window::TaskQueueAttributeGetterCallback, V8Window::TaskQueueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::PostAnimationFrameEnabled()) {
    {
      // Install requestPostAnimationFrame configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"requestPostAnimationFrame", V8Window::RequestPostAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::PostAnimationFrameEnabled()) {
    {
      // Install cancelPostAnimationFrame configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"cancelPostAnimationFrame", V8Window::CancelPostAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    {
      // Install getComputedAccessibleNode configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getComputedAccessibleNode", V8Window::GetComputedAccessibleNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8Window::InstallRuntimeEnabledFeatures(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  InstallRuntimeEnabledFeaturesImpl(isolate, world, instance, prototype, interface);

  // Call partial interface's installer.
  install_runtime_enabled_features_function_(isolate, world, instance, prototype, interface);
}

void V8Window::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);

  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AccessibleNode", V8Window::AccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "AccessibleNodeList", V8Window::AccessibleNodeListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "ComputedAccessibleNode", V8Window::ComputedAccessibleNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AudioTrack", V8Window::AudioTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "AudioTrackList", V8Window::AudioTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "VideoTrack", V8Window::VideoTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "VideoTrackList", V8Window::VideoTrackListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::CSSFontFeatureValuesEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CSSFontFeatureValuesRule", V8Window::CSSFontFeatureValuesRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::CSSViewportEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CSSViewportRule", V8Window::CSSViewportRuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BeforeActivateEvent", V8Window::BeforeActivateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DisplayLockContext", V8Window::DisplayLockContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ElementInternalsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ElementInternals", V8Window::ElementInternalsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FormDataEvent", V8Window::FormDataEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ActivateInvisibleEvent", V8Window::ActivateInvisibleEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Mojo", V8Window::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoHandle", V8Window::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoWatcher", V8Window::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MojoJSTestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MojoInterfaceInterceptor", V8Window::MojoInterfaceInterceptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MojoInterfaceRequestEvent", V8Window::MojoInterfaceRequestEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OffscreenCanvas", V8Window::OffscreenCanvasConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OverscrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OverscrollEvent", V8Window::OverscrollEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PortalsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "HTMLPortalElement", V8Window::HTMLPortalElementConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PortalActivateEvent", V8Window::PortalActivateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PortalHost", V8Window::PortalHostConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ScrollState", V8Window::ScrollStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::SharedWorkerEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "SharedWorker", V8Window::SharedWorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FontFace", V8Window::FontFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StreamsNativeEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ReadableStreamDefaultReader", V8Window::ReadableStreamDefaultReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WritableStreamDefaultWriter", V8Window::WritableStreamDefaultWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::UserActivationAPIEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "UserActivation", V8Window::UserActivationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "AnimationPlaybackEvent", V8Window::AnimationPlaybackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "AnimationTimeline", V8Window::AnimationTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DocumentTimeline", V8Window::DocumentTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "VTTRegion", V8Window::VTTRegionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ScriptedTaskQueue", V8Window::ScriptedTaskQueueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "ScriptedTaskQueueController", V8Window::ScriptedTaskQueueControllerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Task", V8Window::TaskConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TaskWorkletGlobalScope", V8Window::TaskWorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::XSLTEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "XSLTProcessor", V8Window::XSLTProcessorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onbeforeactivate", V8Window::OnbeforeactivateAttributeGetterCallback, V8Window::OnbeforeactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onformdata", V8Window::OnformdataAttributeGetterCallback, V8Window::OnformdataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onactivateinvisible", V8Window::OnactivateinvisibleAttributeGetterCallback, V8Window::OnactivateinvisibleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OrientationEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "orientation", V8Window::OrientationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onorientationchange", V8Window::OnorientationchangeAttributeGetterCallback, V8Window::OnorientationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OverscrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onoverscroll", V8Window::OnoverscrollAttributeGetterCallback, V8Window::OnoverscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onscrollend", V8Window::OnscrollendAttributeGetterCallback, V8Window::OnscrollendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PointerRawUpdateEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onpointerrawupdate", V8Window::OnpointerrawupdateAttributeGetterCallback, V8Window::OnpointerrawupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PortalsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "portalHost", V8Window::PortalHostAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onportalactivate", V8Window::OnportalactivateAttributeGetterCallback, V8Window::OnportalactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "TaskQueue", V8Window::TaskQueueAttributeGetterCallback, V8Window::TaskQueueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::PostAnimationFrameEnabled()) {
    {
      // Install requestPostAnimationFrame configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"requestPostAnimationFrame", V8Window::RequestPostAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::PostAnimationFrameEnabled()) {
    {
      // Install cancelPostAnimationFrame configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"cancelPostAnimationFrame", V8Window::CancelPostAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    {
      // Install getComputedAccessibleNode configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getComputedAccessibleNode", V8Window::GetComputedAccessibleNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
}

void V8Window::InstallMojoJS(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoConfigurations[] = {
      { "Mojo", V8Window::MojoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoHandleConfigurations[] = {
      { "MojoHandle", V8Window::MojoHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoHandleConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kMojoWatcherConfigurations[] = {
      { "MojoWatcher", V8Window::MojoWatcherConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kMojoWatcherConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8Window::InstallMojoJS(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallMojoJS(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallMojoJS(ScriptState* script_state) {
  InstallMojoJS(script_state, v8::Local<v8::Object>());
}

void V8Window::InstallElementTiming(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kPerformanceElementTimingConfigurations[] = {
      { "PerformanceElementTiming", V8Window::PerformanceElementTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kPerformanceElementTimingConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8Window::InstallElementTiming(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallElementTiming(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallEventTiming(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kPerformanceEventTimingConfigurations[] = {
      { "PerformanceEventTiming", V8Window::PerformanceEventTimingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kPerformanceEventTimingConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8Window::InstallEventTiming(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallEventTiming(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallLayoutJankAPI(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kPerformanceLayoutJankConfigurations[] = {
      { "PerformanceLayoutJank", V8Window::PerformanceLayoutJankConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kPerformanceLayoutJankConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8Window::InstallLayoutJankAPI(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallLayoutJankAPI(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallExperimentalIsInputPending(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kSchedulingConfigurations[] = {
      { "Scheduling", V8Window::SchedulingConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kSchedulingConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8Window::InstallExperimentalIsInputPending(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallExperimentalIsInputPending(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallAnimationWorklet(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kScrollTimelineConfigurations[] = {
      { "ScrollTimeline", V8Window::ScrollTimelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kScrollTimelineConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8Window::InstallAnimationWorklet(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallAnimationWorklet(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedHTMLConfigurations[] = {
      { "TrustedHTML", V8Window::TrustedHTMLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedHTMLConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedScriptConfigurations[] = {
      { "TrustedScript", V8Window::TrustedScriptConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedScriptConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedScriptURLConfigurations[] = {
      { "TrustedScriptURL", V8Window::TrustedScriptURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedScriptURLConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedTypePolicyConfigurations[] = {
      { "TrustedTypePolicy", V8Window::TrustedTypePolicyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypePolicyConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedTypePolicyFactoryConfigurations[] = {
      { "TrustedTypePolicyFactory", V8Window::TrustedTypePolicyFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypePolicyFactoryConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kTrustedURLConfigurations[] = {
      { "TrustedURL", V8Window::TrustedURLConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedURLConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8Window::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8Window::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Window::InstallTouchEventFeatureDetection(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchcancelConfigurations[] = {
      { "ontouchcancel", V8Window::OntouchcancelAttributeGetterCallback, V8Window::OntouchcancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchcancelConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchendConfigurations[] = {
      { "ontouchend", V8Window::OntouchendAttributeGetterCallback, V8Window::OntouchendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchendConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchmoveConfigurations[] = {
      { "ontouchmove", V8Window::OntouchmoveAttributeGetterCallback, V8Window::OntouchmoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchmoveConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchstartConfigurations[] = {
      { "ontouchstart", V8Window::OntouchstartAttributeGetterCallback, V8Window::OntouchstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchstartConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8Window::InstallTouchEventFeatureDetection(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTouchEventFeatureDetection(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8Window::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Window::GetWrapperTypeInfo()),
      V8Window::install_v8_window_template_function_);
}

v8::Local<v8::FunctionTemplate>
V8Window::DomTemplateForNamedPropertiesObject(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  v8::Local<v8::FunctionTemplate> parentTemplate =
      V8EventTarget::DomTemplate(isolate, world);

  v8::Local<v8::FunctionTemplate> named_properties_function_template =
      v8::FunctionTemplate::New(isolate,
                                V8ObjectConstructor::IsValidConstructorMode);
  named_properties_function_template->SetClassName(
      V8AtomicString(isolate, "WindowProperties"));
  named_properties_function_template->Inherit(parentTemplate);

  v8::Local<v8::ObjectTemplate> named_properties_object_template =
      named_properties_function_template->PrototypeTemplate();
  named_properties_object_template->SetInternalFieldCount(
      V8Window::kInternalFieldCount);
  // Named Properties object has SetPrototype method of Immutable Prototype Exotic Objects
  named_properties_object_template->SetImmutableProto();
  V8DOMConfiguration::SetClassString(
      isolate, named_properties_object_template, "WindowProperties");
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8Window::NamedPropertyGetterCallback, nullptr, nullptr, nullptr, nullptr, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
  named_properties_object_template->SetHandler(namedPropertyHandlerConfig);

  return named_properties_function_template;
}

bool V8Window::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Window::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Window::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Window::GetWrapperTypeInfo(), v8_value);
}

DOMWindow* V8Window::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMWindow* NativeValueTraits<DOMWindow>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMWindow* native_value = V8Window::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Window"));
  }
  return native_value;
}

void V8Window::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!instance_object.IsEmpty()) {
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "taskWorklet", V8Window::TaskWorkletAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "applicationCache", V8Window::ApplicationCacheAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "Worklet", V8Window::WorkletConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
      if (RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "TaskWorklet", V8Window::TaskWorkletConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "WorkerTaskQueue", V8Window::WorkerTaskQueueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
    }
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "ApplicationCache", V8Window::ApplicationCacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ApplicationCacheErrorEvent", V8Window::ApplicationCacheErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
    }
  }
}

InstallRuntimeEnabledFeaturesFunction
V8Window::install_runtime_enabled_features_function_ =
    &V8Window::InstallRuntimeEnabledFeaturesImpl;
InstallRuntimeEnabledFeaturesOnTemplateFunction
V8Window::install_runtime_enabled_features_on_template_function_ =
    &V8Window::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8Window::install_v8_window_template_function_ =
    &V8Window::InstallV8WindowTemplate;

void V8Window::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8Window::install_v8_window_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_function);
  V8Window::install_runtime_enabled_features_function_ =
      install_runtime_enabled_features_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8Window::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8Window::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
