### --- BLINK_RENDERER_CORE ---###

set(CUR_SRC_DIR ${BLINK_RENDERER_CORE_DIR})

# path to ...gen/third_party/blink/renderer/core/
set(CUR_OUT_DIR ${GEN_COMBINED_DIR}/third_party/blink/renderer/core/)

# src/chromium/gen/gen_blink_public//third_party/blink/renderer/core/third_party/blink/renderer/bindings/core/v8/iterable.h
# message(FATAL_ERROR "GEN_BLINK_PUBLIC_DIR..=${GEN_BLINK_PUBLIC_DIR}/third_party/blink/renderer/bindings/core/v8/iterable.h")

list(APPEND BLINK_RENDERER_CORE_SOURCES
  #${CUR_SRC_DIR}core_export.h
  ${CUR_SRC_DIR}core_initializer.cc
  #${CUR_SRC_DIR}core_initializer.h
)

#if(ENABLE_HARFBUZZ)
  #
#endif(ENABLE_HARFBUZZ)

list(APPEND BLINK_RENDERER_CORE_TYPED_ARRAYS_SOURCES
  #${CUR_SRC_DIR}typed_arrays/array_buffer_view_helpers.h
  ${CUR_SRC_DIR}typed_arrays/dom_array_buffer.cc
  #${CUR_SRC_DIR}typed_arrays/dom_array_buffer.h
  #${CUR_SRC_DIR}typed_arrays/dom_array_buffer_base.h
  #${CUR_SRC_DIR}typed_arrays/dom_array_buffer_view.h
  ${CUR_SRC_DIR}typed_arrays/dom_array_piece.cc
  #${CUR_SRC_DIR}typed_arrays/dom_array_piece.h
  ${CUR_SRC_DIR}typed_arrays/dom_data_view.cc
  #${CUR_SRC_DIR}typed_arrays/dom_data_view.h
  ${CUR_SRC_DIR}typed_arrays/dom_shared_array_buffer.cc
  #${CUR_SRC_DIR}typed_arrays/dom_shared_array_buffer.h
  ${CUR_SRC_DIR}typed_arrays/dom_typed_array.cc
  #${CUR_SRC_DIR}typed_arrays/dom_typed_array.h
  #${CUR_SRC_DIR}typed_arrays/flexible_array_buffer_view.h
  #${CUR_SRC_DIR}typed_arrays/typed_flexible_array_buffer_view.h
)

# requires
# > renderer/bindings
# > renderer/platform
# > core/dom
# > core/fileapi
# > core/messaging
# > core/typed_arrays
# > core/frame
list(APPEND BLINK_RENDERER_CORE_EVENTS_SOURCES
  # blink_core_sources("events")
  ${CUR_SRC_DIR}after_print_event.h
  ${CUR_SRC_DIR}animation_event.cc
  ${CUR_SRC_DIR}animation_event.h
  ${CUR_SRC_DIR}animation_playback_event.cc
  ${CUR_SRC_DIR}animation_playback_event.h
  ${CUR_SRC_DIR}application_cache_error_event.cc
  ${CUR_SRC_DIR}application_cache_error_event.h
  ${CUR_SRC_DIR}before_print_event.h
  ${CUR_SRC_DIR}before_text_inserted_event.cc
  ${CUR_SRC_DIR}before_text_inserted_event.h
  ${CUR_SRC_DIR}before_unload_event.cc
  ${CUR_SRC_DIR}before_unload_event.h
  ${CUR_SRC_DIR}clipboard_event.cc
  ${CUR_SRC_DIR}clipboard_event.h
  ${CUR_SRC_DIR}composition_event.cc
  ${CUR_SRC_DIR}composition_event.h
  ${CUR_SRC_DIR}current_input_event.cc
  ${CUR_SRC_DIR}current_input_event.h
  ${CUR_SRC_DIR}drag_event.cc
  ${CUR_SRC_DIR}drag_event.h
  ${CUR_SRC_DIR}error_event.cc
  ${CUR_SRC_DIR}error_event.h
  ${CUR_SRC_DIR}event_factory.h
  ${CUR_SRC_DIR}event_util.cc
  ${CUR_SRC_DIR}event_util.h
  ${CUR_SRC_DIR}focus_event.cc
  ${CUR_SRC_DIR}focus_event.h
  ${CUR_SRC_DIR}gesture_event.cc
  ${CUR_SRC_DIR}gesture_event.h
  ${CUR_SRC_DIR}hash_change_event.h
  ${CUR_SRC_DIR}input_event.cc
  ${CUR_SRC_DIR}input_event.h
  ${CUR_SRC_DIR}keyboard_event.cc
  ${CUR_SRC_DIR}keyboard_event.h
  ${CUR_SRC_DIR}message_event.cc
  ${CUR_SRC_DIR}message_event.h
  ${CUR_SRC_DIR}mouse_event.cc
  ${CUR_SRC_DIR}mouse_event.h
  ${CUR_SRC_DIR}mutation_event.cc
  ${CUR_SRC_DIR}mutation_event.h
  ${CUR_SRC_DIR}navigator_events.cc
  ${CUR_SRC_DIR}navigator_events.h
  ${CUR_SRC_DIR}overscroll_event.cc
  ${CUR_SRC_DIR}overscroll_event.h
  ${CUR_SRC_DIR}page_transition_event.cc
  ${CUR_SRC_DIR}page_transition_event.h
  ${CUR_SRC_DIR}pointer_event.cc
  ${CUR_SRC_DIR}pointer_event.h
  ${CUR_SRC_DIR}pointer_event_factory.cc
  ${CUR_SRC_DIR}pointer_event_factory.h
  ${CUR_SRC_DIR}pop_state_event.cc
  ${CUR_SRC_DIR}pop_state_event.h
  ${CUR_SRC_DIR}portal_activate_event.cc
  ${CUR_SRC_DIR}portal_activate_event.h
  ${CUR_SRC_DIR}progress_event.cc
  ${CUR_SRC_DIR}progress_event.h
  ${CUR_SRC_DIR}promise_rejection_event.cc
  ${CUR_SRC_DIR}promise_rejection_event.h
  ${CUR_SRC_DIR}resource_progress_event.cc
  ${CUR_SRC_DIR}resource_progress_event.h
  ${CUR_SRC_DIR}security_policy_violation_event.cc
  ${CUR_SRC_DIR}security_policy_violation_event.h
  ${CUR_SRC_DIR}text_event.cc
  ${CUR_SRC_DIR}text_event.h
  ${CUR_SRC_DIR}text_event_input_type.h
  ${CUR_SRC_DIR}touch_event.cc
  ${CUR_SRC_DIR}touch_event.h
  ${CUR_SRC_DIR}touch_event_context.cc
  ${CUR_SRC_DIR}touch_event_context.h
  ${CUR_SRC_DIR}transition_event.cc
  ${CUR_SRC_DIR}transition_event.h
  ${CUR_SRC_DIR}ui_event.cc
  ${CUR_SRC_DIR}ui_event.h
  ${CUR_SRC_DIR}ui_event_with_key_state.cc
  ${CUR_SRC_DIR}ui_event_with_key_state.h
  ${CUR_SRC_DIR}visual_viewport_resize_event.cc
  ${CUR_SRC_DIR}visual_viewport_resize_event.h
  ${CUR_SRC_DIR}visual_viewport_scroll_event.cc
  ${CUR_SRC_DIR}visual_viewport_scroll_event.h
  ${CUR_SRC_DIR}web_input_event_conversion.cc
  ${CUR_SRC_DIR}web_input_event_conversion.h
  ${CUR_SRC_DIR}wheel_event.cc
  ${CUR_SRC_DIR}wheel_event.h
)

list(APPEND BLINK_RENDERER_CORE_ACCESSIBILITY_SOURCES
  ${CUR_SRC_DIR}accessibility/apply_dark_mode.cc
  #${CUR_SRC_DIR}accessibility/apply_dark_mode.h
  ${CUR_SRC_DIR}accessibility/ax_context.cc
  #${CUR_SRC_DIR}accessibility/ax_context.h
  ${CUR_SRC_DIR}accessibility/ax_object_cache.cc
  #${CUR_SRC_DIR}accessibility/ax_object_cache.h
  ${CUR_SRC_DIR}accessibility/ax_object_cache_base.cc
  #${CUR_SRC_DIR}accessibility/ax_object_cache_base.h
  #${CUR_SRC_DIR}accessibility/axid.h
)

list(APPEND BLINK_RENDERER_CORE_AOM_SOURCES
  ${CUR_SRC_DIR}aom/accessible_node.cc
  #${CUR_SRC_DIR}accessible_node.h
  ${CUR_SRC_DIR}aom/accessible_node_list.cc
  #${CUR_SRC_DIR}accessible_node_list.h
  ${CUR_SRC_DIR}aom/computed_accessible_node.cc
  #${CUR_SRC_DIR}computed_accessible_node.h
)

list(APPEND BLINK_RENDERER_CORE_CLIPBOARD_SOURCES
  ${CUR_SRC_DIR}clipboard/clipboard_mime_types.cc
  ${CUR_SRC_DIR}clipboard/clipboard_mime_types.h
  ${CUR_SRC_DIR}clipboard/clipboard_utilities.cc
  ${CUR_SRC_DIR}clipboard/clipboard_utilities.h
  ${CUR_SRC_DIR}clipboard/data_object.cc
  ${CUR_SRC_DIR}clipboard/data_object.h
  ${CUR_SRC_DIR}clipboard/data_object_item.cc
  ${CUR_SRC_DIR}clipboard/data_object_item.h
  ${CUR_SRC_DIR}clipboard/data_transfer.cc
  ${CUR_SRC_DIR}clipboard/data_transfer.h
  ${CUR_SRC_DIR}clipboard/data_transfer_access_policy.h
  ${CUR_SRC_DIR}clipboard/data_transfer_item.cc
  ${CUR_SRC_DIR}clipboard/data_transfer_item.h
  ${CUR_SRC_DIR}clipboard/data_transfer_item_list.cc
  ${CUR_SRC_DIR}clipboard/data_transfer_item_list.h
  ${CUR_SRC_DIR}clipboard/dragged_isolated_file_system.cc
  ${CUR_SRC_DIR}clipboard/dragged_isolated_file_system.h
  ${CUR_SRC_DIR}clipboard/paste_mode.h
  ${CUR_SRC_DIR}clipboard/system_clipboard.cc
  ${CUR_SRC_DIR}clipboard/system_clipboard.h
  # clipboard_utilities_win.cc
)

# requires
# > renderer/bindings
# > renderer/bindings/core/v8
# > core/core_export.h
# > core/css
# > core/style
# > core/dom
# > core/svg
# > core/events
# > core/execution_context
# > core/frame
# > core/inspector
# > core/probe
# > core/paint
# > renderer/platform
list(APPEND BLINK_RENDERER_CORE_ANIMATION_SOURCES
  # blink_core_sources("animation")
  ${CUR_SRC_DIR}animation/animation.cc
  #${CUR_SRC_DIR}animation/animation.h
  ${CUR_SRC_DIR}animation/animation_clock.cc
  #${CUR_SRC_DIR}animation/animation_clock.h
  ${CUR_SRC_DIR}animation/animation_effect.cc
  #${CUR_SRC_DIR}animation/animation_effect.h
  #${CUR_SRC_DIR}animation/animation_effect_owner.h
  ${CUR_SRC_DIR}animation/animation_input_helpers.cc
  #${CUR_SRC_DIR}animation/animation_input_helpers.h
  ${CUR_SRC_DIR}animation/animation_time_delta.cc
  #${CUR_SRC_DIR}animation/animation_time_delta.h
  #${CUR_SRC_DIR}animation/animation_timeline.h
  ${CUR_SRC_DIR}animation/basic_shape_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/basic_shape_interpolation_functions.h
  ${CUR_SRC_DIR}animation/color_property_functions.cc
  #${CUR_SRC_DIR}animation/color_property_functions.h
  ${CUR_SRC_DIR}animation/compositor_animations.cc
  #${CUR_SRC_DIR}animation/compositor_animations.h
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_double.h
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_filter_operations.h
  ${CUR_SRC_DIR}animation/css/compositor_keyframe_transform.h
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_value.h
  ${CUR_SRC_DIR}animation/css/compositor_keyframe_value_factory.cc
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_value_factory.h
  ${CUR_SRC_DIR}animation/css/css_animation_data.cc
  #${CUR_SRC_DIR}animation/css/css_animation_data.h
  ${CUR_SRC_DIR}animation/css/css_animation_update.cc
  #${CUR_SRC_DIR}animation/css/css_animation_update.h
  ${CUR_SRC_DIR}animation/css/css_animations.cc
  #${CUR_SRC_DIR}animation/css/css_animations.h
  ${CUR_SRC_DIR}animation/css/css_timing_data.cc
  #${CUR_SRC_DIR}animation/css/css_timing_data.h
  ${CUR_SRC_DIR}animation/css/css_transition_data.cc
  #${CUR_SRC_DIR}animation/css/css_transition_data.h
  ${CUR_SRC_DIR}animation/css_angle_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_angle_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_basic_shape_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_basic_shape_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_border_image_length_box_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_border_image_length_box_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_clip_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_clip_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_color_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_color_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_custom_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_custom_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_default_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_default_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_filter_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_filter_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_font_size_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_font_size_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_font_variation_settings_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_font_variation_settings_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_font_weight_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_font_weight_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_image_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_image_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_image_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_image_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_image_slice_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_image_slice_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_interpolation_types_map.cc
  #${CUR_SRC_DIR}animation/css_interpolation_types_map.h
  ${CUR_SRC_DIR}animation/css_length_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_length_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_length_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_length_list_interpolation_type.h
  #${CUR_SRC_DIR}animation/css_length_pair_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_number_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_number_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_offset_rotate_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_offset_rotate_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_paint_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_paint_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_path_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_path_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_position_axis_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_position_axis_list_interpolation_type.h
  #${CUR_SRC_DIR}animation/css_position_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_ray_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_ray_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_resolution_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_resolution_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_rotate_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_rotate_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_scale_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_scale_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_shadow_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_shadow_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_size_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_size_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_text_indent_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_text_indent_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_time_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_time_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_transform_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_transform_interpolation_type.h
  #${CUR_SRC_DIR}animation/css_transform_origin_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_translate_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_translate_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_var_cycle_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_var_cycle_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_visibility_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_visibility_interpolation_type.h
  #${CUR_SRC_DIR}animation/document_animation.h
  ${CUR_SRC_DIR}animation/document_animations.cc
  #${CUR_SRC_DIR}animation/document_animations.h
  ${CUR_SRC_DIR}animation/document_timeline.cc
  #${CUR_SRC_DIR}animation/document_timeline.h
  ${CUR_SRC_DIR}animation/effect_input.cc
  #${CUR_SRC_DIR}animation/effect_input.h
  ${CUR_SRC_DIR}animation/effect_model.cc
  #${CUR_SRC_DIR}animation/effect_model.h
  ${CUR_SRC_DIR}animation/effect_stack.cc
  #${CUR_SRC_DIR}animation/effect_stack.h
  ${CUR_SRC_DIR}animation/element_animation.cc
  #${CUR_SRC_DIR}animation/element_animation.h
  ${CUR_SRC_DIR}animation/element_animations.cc
  #${CUR_SRC_DIR}animation/element_animations.h
  ${CUR_SRC_DIR}animation/filter_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/filter_interpolation_functions.h
  #${CUR_SRC_DIR}animation/image_list_property_functions.h
  #${CUR_SRC_DIR}animation/image_slice_property_functions.h
  ${CUR_SRC_DIR}animation/inert_effect.cc
  #${CUR_SRC_DIR}animation/inert_effect.h
  ${CUR_SRC_DIR}animation/interpolable_value.cc
  #${CUR_SRC_DIR}animation/interpolable_value.h
  #${CUR_SRC_DIR}animation/interpolated_svg_path_source.h
  #${CUR_SRC_DIR}animation/interpolation.h
  ${CUR_SRC_DIR}animation/interpolation_effect.cc
  #${CUR_SRC_DIR}animation/interpolation_effect.h
  #${CUR_SRC_DIR}animation/interpolation_environment.h
  #${CUR_SRC_DIR}animation/interpolation_type.h
  #${CUR_SRC_DIR}animation/interpolation_types_map.h
  #${CUR_SRC_DIR}animation/interpolation_value.h
  ${CUR_SRC_DIR}animation/invalidatable_interpolation.cc
  #${CUR_SRC_DIR}animation/invalidatable_interpolation.h
  ${CUR_SRC_DIR}animation/keyframe.cc
  #${CUR_SRC_DIR}animation/keyframe.h
  ${CUR_SRC_DIR}animation/keyframe_effect.cc
  #${CUR_SRC_DIR}animation/keyframe_effect.h
  ${CUR_SRC_DIR}animation/keyframe_effect_model.cc
  #${CUR_SRC_DIR}animation/keyframe_effect_model.h
  ${CUR_SRC_DIR}animation/length_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/length_interpolation_functions.h
  ${CUR_SRC_DIR}animation/length_list_property_functions.cc
  #${CUR_SRC_DIR}animation/length_list_property_functions.h
  ${CUR_SRC_DIR}animation/length_property_functions.cc
  #${CUR_SRC_DIR}animation/length_property_functions.h
  #${CUR_SRC_DIR}animation/length_units_checker.h
  ${CUR_SRC_DIR}animation/list_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/list_interpolation_functions.h
  #${CUR_SRC_DIR}animation/non_interpolable_value.h
  ${CUR_SRC_DIR}animation/number_property_functions.cc
  #${CUR_SRC_DIR}animation/number_property_functions.h
  #${CUR_SRC_DIR}animation/pairwise_interpolation_value.h
  ${CUR_SRC_DIR}animation/path_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/path_interpolation_functions.h
  ${CUR_SRC_DIR}animation/pending_animations.cc
  #${CUR_SRC_DIR}animation/pending_animations.h
  #${CUR_SRC_DIR}animation/primitive_interpolation.h
  ${CUR_SRC_DIR}animation/property_handle.cc
  #${CUR_SRC_DIR}animation/property_handle.h
  ${CUR_SRC_DIR}animation/sampled_effect.cc
  #${CUR_SRC_DIR}animation/sampled_effect.h
  ${CUR_SRC_DIR}animation/scroll_timeline.cc
  #${CUR_SRC_DIR}animation/scroll_timeline.h
  ${CUR_SRC_DIR}animation/scroll_timeline_util.cc
  #${CUR_SRC_DIR}animation/scroll_timeline_util.h
  ${CUR_SRC_DIR}animation/shadow_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/shadow_interpolation_functions.h
  #${CUR_SRC_DIR}animation/side_index.h
  ${CUR_SRC_DIR}animation/size_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/size_interpolation_functions.h
  ${CUR_SRC_DIR}animation/size_list_property_functions.cc
  #${CUR_SRC_DIR}animation/size_list_property_functions.h
  ${CUR_SRC_DIR}animation/string_keyframe.cc
  #${CUR_SRC_DIR}animation/string_keyframe.h
  ${CUR_SRC_DIR}animation/svg_angle_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_angle_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_integer_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_integer_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_integer_optional_integer_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_integer_optional_integer_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_interpolation_types_map.cc
  #${CUR_SRC_DIR}animation/svg_interpolation_types_map.h
  ${CUR_SRC_DIR}animation/svg_length_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_length_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_length_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_length_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_number_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_number_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_number_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_number_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_number_optional_number_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_number_optional_number_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_path_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_path_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_path_seg_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/svg_path_seg_interpolation_functions.h
  ${CUR_SRC_DIR}animation/svg_point_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_point_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_rect_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_rect_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_transform_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_transform_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_value_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_value_interpolation_type.h
  ${CUR_SRC_DIR}animation/timing.cc
  #${CUR_SRC_DIR}animation/timing.h
  #${CUR_SRC_DIR}animation/timing_calculations.h
  ${CUR_SRC_DIR}animation/timing_input.cc
  #${CUR_SRC_DIR}animation/timing_input.h
  ${CUR_SRC_DIR}animation/transition_interpolation.cc
  #${CUR_SRC_DIR}animation/transition_interpolation.h
  ${CUR_SRC_DIR}animation/transition_keyframe.cc
  #${CUR_SRC_DIR}animation/transition_keyframe.h
  #${CUR_SRC_DIR}animation/typed_interpolation_value.h
  #${CUR_SRC_DIR}animation/underlying_length_checker.h
  ${CUR_SRC_DIR}animation/underlying_value_owner.cc
  #${CUR_SRC_DIR}animation/underlying_value_owner.h
  #${CUR_SRC_DIR}animation/worklet_animation_base.h
  ${CUR_SRC_DIR}animation/worklet_animation_controller.cc
  #${CUR_SRC_DIR}animation/worklet_animation_controller.h
)

list(APPEND BLINK_RENDERER_CORE_PAINT_SOURCES
  # blink_core_sources("paint")
  ${CUR_SRC_DIR}paint/applied_decoration_painter.cc
  #${CUR_SRC_DIR}paint/applied_decoration_painter.h
  # requires third_party/blink/renderer/bindings/core/v8/iterable.h
  ${CUR_SRC_DIR}paint/background_image_geometry.cc
  #${CUR_SRC_DIR}paint/background_image_geometry.h
  ${CUR_SRC_DIR}paint/block_flow_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/block_flow_paint_invalidator.h
  ${CUR_SRC_DIR}paint/block_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/block_paint_invalidator.h
  ${CUR_SRC_DIR}paint/block_painter.cc
  #${CUR_SRC_DIR}paint/block_painter.h
  ${CUR_SRC_DIR}paint/box_border_painter.cc
  #${CUR_SRC_DIR}paint/box_border_painter.h
  ${CUR_SRC_DIR}paint/box_decoration_data.cc
  #${CUR_SRC_DIR}paint/box_decoration_data.h
  ${CUR_SRC_DIR}paint/box_model_object_painter.cc
  #${CUR_SRC_DIR}paint/box_model_object_painter.h
  ${CUR_SRC_DIR}paint/box_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/box_paint_invalidator.h
  ${CUR_SRC_DIR}paint/box_painter.cc
  #${CUR_SRC_DIR}paint/box_painter.h
  ${CUR_SRC_DIR}paint/box_painter_base.cc
  #${CUR_SRC_DIR}paint/box_painter_base.h
  ${CUR_SRC_DIR}paint/box_reflection_utils.cc
  #${CUR_SRC_DIR}paint/box_reflection_utils.h
  ${CUR_SRC_DIR}paint/clip_path_clipper.cc
  #${CUR_SRC_DIR}paint/clip_path_clipper.h
  ${CUR_SRC_DIR}paint/clip_rect.cc
  #${CUR_SRC_DIR}paint/clip_rect.h
  #${CUR_SRC_DIR}paint/clip_rects.h
  #${CUR_SRC_DIR}paint/clip_rects_cache.h
  ${CUR_SRC_DIR}paint/collapsed_border_painter.cc
  #${CUR_SRC_DIR}paint/collapsed_border_painter.h
  ${CUR_SRC_DIR}paint/compositing/composited_layer_mapping.cc
  #${CUR_SRC_DIR}paint/compositing/composited_layer_mapping.h
  ${CUR_SRC_DIR}paint/compositing/compositing_inputs_root.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_inputs_root.h
  ${CUR_SRC_DIR}paint/compositing/compositing_inputs_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_inputs_updater.h
  ${CUR_SRC_DIR}paint/compositing/compositing_layer_assigner.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_layer_assigner.h
  ${CUR_SRC_DIR}paint/compositing/compositing_layer_property_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_layer_property_updater.h
  ${CUR_SRC_DIR}paint/compositing/compositing_reason_finder.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_reason_finder.h
  ${CUR_SRC_DIR}paint/compositing/compositing_requirements_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_requirements_updater.h
  #${CUR_SRC_DIR}paint/compositing/compositing_state.h
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_as_text.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_as_text.h
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_builder.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_builder.h
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_updater.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_updater.h
  ${CUR_SRC_DIR}paint/compositing/paint_layer_compositor.cc
  #${CUR_SRC_DIR}paint/compositing/paint_layer_compositor.h
  ${CUR_SRC_DIR}paint/css_mask_painter.cc
  #${CUR_SRC_DIR}paint/css_mask_painter.h
  #${CUR_SRC_DIR}paint/decoration_info.h
  ${CUR_SRC_DIR}paint/details_marker_painter.cc
  #${CUR_SRC_DIR}paint/details_marker_painter.h
  ${CUR_SRC_DIR}paint/document_marker_painter.cc
  #${CUR_SRC_DIR}paint/document_marker_painter.h
  ${CUR_SRC_DIR}paint/ellipsis_box_painter.cc
  #${CUR_SRC_DIR}paint/ellipsis_box_painter.h
  ${CUR_SRC_DIR}paint/embedded_content_painter.cc
  #${CUR_SRC_DIR}paint/embedded_content_painter.h
  ${CUR_SRC_DIR}paint/embedded_object_painter.cc
  #${CUR_SRC_DIR}paint/embedded_object_painter.h
  ${CUR_SRC_DIR}paint/fallback_theme.cc
  #${CUR_SRC_DIR}paint/fallback_theme.h
  ${CUR_SRC_DIR}paint/fieldset_paint_info.cc
  #${CUR_SRC_DIR}paint/fieldset_paint_info.h
  ${CUR_SRC_DIR}paint/fieldset_painter.cc
  #${CUR_SRC_DIR}paint/fieldset_painter.h
  ${CUR_SRC_DIR}paint/file_upload_control_painter.cc
  #${CUR_SRC_DIR}paint/file_upload_control_painter.h
  ${CUR_SRC_DIR}paint/filter_effect_builder.cc
  #${CUR_SRC_DIR}paint/filter_effect_builder.h
  #${CUR_SRC_DIR}paint/find_properties_needing_update.h
  ${CUR_SRC_DIR}paint/first_meaningful_paint_detector.cc
  #${CUR_SRC_DIR}paint/first_meaningful_paint_detector.h
  ${CUR_SRC_DIR}paint/fragment_data.cc
  #${CUR_SRC_DIR}paint/fragment_data.h
  #${CUR_SRC_DIR}paint/frame_paint_timing.h
  ${CUR_SRC_DIR}paint/frame_painter.cc
  #${CUR_SRC_DIR}paint/frame_painter.h
  ${CUR_SRC_DIR}paint/frame_set_painter.cc
  #${CUR_SRC_DIR}paint/frame_set_painter.h
  ${CUR_SRC_DIR}paint/html_canvas_painter.cc
  #${CUR_SRC_DIR}paint/html_canvas_painter.h
  ${CUR_SRC_DIR}paint/image_element_timing.cc
  #${CUR_SRC_DIR}paint/image_element_timing.h
  ${CUR_SRC_DIR}paint/image_paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/image_paint_timing_detector.h
  ${CUR_SRC_DIR}paint/image_painter.cc
  #${CUR_SRC_DIR}paint/image_painter.h
  ${CUR_SRC_DIR}paint/inline_box_painter_base.cc
  #${CUR_SRC_DIR}paint/inline_box_painter_base.h
  ${CUR_SRC_DIR}paint/inline_flow_box_painter.cc
  #${CUR_SRC_DIR}paint/inline_flow_box_painter.h
  ${CUR_SRC_DIR}paint/inline_painter.cc
  #${CUR_SRC_DIR}paint/inline_painter.h
  ${CUR_SRC_DIR}paint/inline_text_box_painter.cc
  #${CUR_SRC_DIR}paint/inline_text_box_painter.h
  ${CUR_SRC_DIR}paint/line_box_list_painter.cc
  #${CUR_SRC_DIR}paint/line_box_list_painter.h
  ${CUR_SRC_DIR}paint/link_highlight_impl.cc
  #${CUR_SRC_DIR}paint/link_highlight_impl.h
  ${CUR_SRC_DIR}paint/list_item_painter.cc
  #${CUR_SRC_DIR}paint/list_item_painter.h
  ${CUR_SRC_DIR}paint/list_marker_painter.cc
  #${CUR_SRC_DIR}paint/list_marker_painter.h
  ${CUR_SRC_DIR}paint/multi_column_set_painter.cc
  #${CUR_SRC_DIR}paint/multi_column_set_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_box_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_box_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_fieldset_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_fieldset_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_inline_box_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_inline_box_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_paint_fragment.cc
  #${CUR_SRC_DIR}paint/ng/ng_paint_fragment.h
  ${CUR_SRC_DIR}paint/ng/ng_paint_fragment_traversal.cc
  #${CUR_SRC_DIR}paint/ng/ng_paint_fragment_traversal.h
  ${CUR_SRC_DIR}paint/ng/ng_text_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_text_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_text_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_text_painter.h
  ${CUR_SRC_DIR}paint/nine_piece_image_grid.cc
  #${CUR_SRC_DIR}paint/nine_piece_image_grid.h
  ${CUR_SRC_DIR}paint/nine_piece_image_painter.cc
  #${CUR_SRC_DIR}paint/nine_piece_image_painter.h
  ${CUR_SRC_DIR}paint/object_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/object_paint_invalidator.h
  #${CUR_SRC_DIR}paint/object_paint_properties.h
  ${CUR_SRC_DIR}paint/object_painter.cc
  #${CUR_SRC_DIR}paint/object_painter.h
  ${CUR_SRC_DIR}paint/object_painter_base.cc
  #${CUR_SRC_DIR}paint/object_painter_base.h
  #${CUR_SRC_DIR}paint/paint_event.h
  #${CUR_SRC_DIR}paint/paint_info.h
  ${CUR_SRC_DIR}paint/paint_invalidator.cc
  #${CUR_SRC_DIR}paint/paint_invalidator.h
  ${CUR_SRC_DIR}paint/paint_layer.cc
  #${CUR_SRC_DIR}paint/paint_layer.h
  ${CUR_SRC_DIR}paint/paint_layer_clipper.cc
  #${CUR_SRC_DIR}paint/paint_layer_clipper.h
  #${CUR_SRC_DIR}paint/paint_layer_fragment.h
  ${CUR_SRC_DIR}paint/paint_layer_painter.cc
  #${CUR_SRC_DIR}paint/paint_layer_painter.h
  #${CUR_SRC_DIR}paint/paint_layer_painting_info.h
  ${CUR_SRC_DIR}paint/paint_layer_resource_info.cc
  #${CUR_SRC_DIR}paint/paint_layer_resource_info.h
  ${CUR_SRC_DIR}paint/paint_layer_scrollable_area.cc
  #${CUR_SRC_DIR}paint/paint_layer_scrollable_area.h
  ${CUR_SRC_DIR}paint/paint_layer_stacking_node.cc
  #${CUR_SRC_DIR}paint/paint_layer_stacking_node.h
  ${CUR_SRC_DIR}paint/paint_layer_stacking_node_iterator.cc
  #${CUR_SRC_DIR}paint/paint_layer_stacking_node_iterator.h
  ${CUR_SRC_DIR}paint/paint_phase.cc
  #${CUR_SRC_DIR}paint/paint_phase.h
  ${CUR_SRC_DIR}paint/paint_property_tree_builder.cc
  #${CUR_SRC_DIR}paint/paint_property_tree_builder.h
  ${CUR_SRC_DIR}paint/paint_property_tree_printer.cc
  #${CUR_SRC_DIR}paint/paint_property_tree_printer.h
  #${CUR_SRC_DIR}paint/paint_result.h
  ${CUR_SRC_DIR}paint/paint_timing.cc
  #${CUR_SRC_DIR}paint/paint_timing.h
  ${CUR_SRC_DIR}paint/paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/paint_timing_detector.h
  ${CUR_SRC_DIR}paint/pre_paint_tree_walk.cc
  #${CUR_SRC_DIR}paint/pre_paint_tree_walk.h
  ${CUR_SRC_DIR}paint/replaced_painter.cc
  #${CUR_SRC_DIR}paint/replaced_painter.h
  ${CUR_SRC_DIR}paint/root_inline_box_painter.cc
  #${CUR_SRC_DIR}paint/root_inline_box_painter.h
  ${CUR_SRC_DIR}paint/rounded_inner_rect_clipper.cc
  #${CUR_SRC_DIR}paint/rounded_inner_rect_clipper.h
  ${CUR_SRC_DIR}paint/scoped_paint_state.cc
  #${CUR_SRC_DIR}paint/scoped_paint_state.h
  ${CUR_SRC_DIR}paint/scoped_svg_paint_state.cc
  #${CUR_SRC_DIR}paint/scoped_svg_paint_state.h
  ${CUR_SRC_DIR}paint/scrollable_area_painter.cc
  #${CUR_SRC_DIR}paint/scrollable_area_painter.h
  ${CUR_SRC_DIR}paint/scrollbar_painter.cc
  #${CUR_SRC_DIR}paint/scrollbar_painter.h
  ${CUR_SRC_DIR}paint/selection_painting_utils.cc
  #${CUR_SRC_DIR}paint/selection_painting_utils.h
  ${CUR_SRC_DIR}paint/svg_container_painter.cc
  #${CUR_SRC_DIR}paint/svg_container_painter.h
  ${CUR_SRC_DIR}paint/svg_filter_painter.cc
  #${CUR_SRC_DIR}paint/svg_filter_painter.h
  ${CUR_SRC_DIR}paint/svg_foreign_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_foreign_object_painter.h
  ${CUR_SRC_DIR}paint/svg_image_painter.cc
  #${CUR_SRC_DIR}paint/svg_image_painter.h
  ${CUR_SRC_DIR}paint/svg_inline_flow_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_inline_flow_box_painter.h
  ${CUR_SRC_DIR}paint/svg_inline_text_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_inline_text_box_painter.h
  ${CUR_SRC_DIR}paint/svg_mask_painter.cc
  #${CUR_SRC_DIR}paint/svg_mask_painter.h
  ${CUR_SRC_DIR}paint/svg_model_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_model_object_painter.h
  ${CUR_SRC_DIR}paint/svg_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_object_painter.h
  ${CUR_SRC_DIR}paint/svg_root_inline_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_root_inline_box_painter.h
  ${CUR_SRC_DIR}paint/svg_root_painter.cc
  #${CUR_SRC_DIR}paint/svg_root_painter.h
  ${CUR_SRC_DIR}paint/svg_shape_painter.cc
  #${CUR_SRC_DIR}paint/svg_shape_painter.h
  ${CUR_SRC_DIR}paint/svg_text_painter.cc
  #${CUR_SRC_DIR}paint/svg_text_painter.h
  ${CUR_SRC_DIR}paint/table_cell_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/table_cell_paint_invalidator.h
  ${CUR_SRC_DIR}paint/table_cell_painter.cc
  #${CUR_SRC_DIR}paint/table_cell_painter.h
  ${CUR_SRC_DIR}paint/table_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/table_paint_invalidator.h
  ${CUR_SRC_DIR}paint/table_painter.cc
  #${CUR_SRC_DIR}paint/table_painter.h
  ${CUR_SRC_DIR}paint/table_row_painter.cc
  #${CUR_SRC_DIR}paint/table_row_painter.h
  ${CUR_SRC_DIR}paint/table_section_painter.cc
  #${CUR_SRC_DIR}paint/table_section_painter.h
  ${CUR_SRC_DIR}paint/text_control_single_line_painter.cc
  #${CUR_SRC_DIR}paint/text_control_single_line_painter.h
  #${CUR_SRC_DIR}paint/text_paint_style.h
  ${CUR_SRC_DIR}paint/text_paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/text_paint_timing_detector.h
  ${CUR_SRC_DIR}paint/text_painter.cc
  #${CUR_SRC_DIR}paint/text_painter.h
  ${CUR_SRC_DIR}paint/text_painter_base.cc
  #${CUR_SRC_DIR}paint/text_painter_base.h
  ${CUR_SRC_DIR}paint/theme_painter.cc
  #${CUR_SRC_DIR}paint/theme_painter.h
  ${CUR_SRC_DIR}paint/theme_painter_default.cc
  #${CUR_SRC_DIR}paint/theme_painter_default.h
  #${CUR_SRC_DIR}paint/theme_painter_mac.h
  ## TODO ## ${CUR_SRC_DIR}paint/theme_painter_mac.mm",
  ${CUR_SRC_DIR}paint/video_painter.cc
  #${CUR_SRC_DIR}paint/video_painter.h
  ${CUR_SRC_DIR}paint/view_painter.cc
  #${CUR_SRC_DIR}paint/view_painter.h
)

list(APPEND BLINK_RENDERER_CORE_EVENT_SOURCES
  #generate_event_interfaces("core_event_interfaces")
  ${CUR_OUT_DIR}css/font_face_set_load_event_init.cc
  ${CUR_OUT_DIR}css/media_query_list_event_init.cc
  #${CUR_OUT_DIR}display_lock/before_activate_event_init.cc
  ${CUR_OUT_DIR}dom/events/custom_event_init.cc
  ${CUR_OUT_DIR}dom/events/event_init.cc
  ${CUR_OUT_DIR}events/animation_event_init.cc
  ${CUR_OUT_DIR}events/animation_playback_event_init.cc
  ${CUR_OUT_DIR}events/application_cache_error_event_init.cc
  #${CUR_OUT_DIR}events/before_unload_event_init.cc
  ${CUR_OUT_DIR}events/clipboard_event_init.cc
  ${CUR_OUT_DIR}events/composition_event_init.cc
  ${CUR_OUT_DIR}events/drag_event_init.cc
  ${CUR_OUT_DIR}events/error_event_init.cc
  ${CUR_OUT_DIR}events/focus_event_init.cc
  ${CUR_OUT_DIR}events/hash_change_event_init.cc
  ${CUR_OUT_DIR}events/input_event_init.cc
  ${CUR_OUT_DIR}events/keyboard_event_init.cc
  ${CUR_OUT_DIR}events/message_event_init.cc
  ${CUR_OUT_DIR}events/mouse_event_init.cc
  #${CUR_OUT_DIR}events/mutation_event_init.cc
  ${CUR_OUT_DIR}events/overscroll_event_init.cc
  ${CUR_OUT_DIR}events/page_transition_event_init.cc
  ${CUR_OUT_DIR}events/pointer_event_init.cc
  ${CUR_OUT_DIR}events/pop_state_event_init.cc
  ${CUR_OUT_DIR}events/progress_event_init.cc
  ${CUR_OUT_DIR}events/promise_rejection_event_init.cc
  #${CUR_OUT_DIR}events/resource_progress_event_init.cc
  ${CUR_OUT_DIR}events/security_policy_violation_event_init.cc
  #${CUR_OUT_DIR}events/text_event_init.cc
  ${CUR_OUT_DIR}events/touch_event_init.cc
  ${CUR_OUT_DIR}events/transition_event_init.cc
  ${CUR_OUT_DIR}events/ui_event_init.cc
  ${CUR_OUT_DIR}events/wheel_event_init.cc
  ${CUR_OUT_DIR}html/forms/form_data_event_init.cc
  ${CUR_OUT_DIR}html/track/track_event_init.cc
  #${CUR_OUT_DIR}invisible_dom/activate_invisible_event_init.cc
  ${CUR_OUT_DIR}mojo/test/mojo_interface_request_event_init.cc
)

list(APPEND BLINK_RENDERER_CORE_STYLE_SOURCES
  # css_properties("make_core_generated_computed_style_base")
  ${CUR_OUT_DIR}style/computed_style_base.cc
)

list(APPEND BLINK_RENDERER_CORE_CSS_SOURCES
  # make_core_generated_css_property_instances
  ${CUR_OUT_DIR}css/properties/css_property_instances.cc
)

list(APPEND BLINK_RENDERER_CORE_LONGHANDS_SOURCES
  # make_core_generated_css_property_instances
  ${CUR_OUT_DIR}css/properties/longhands/background_attachment.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_blend_mode.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_clip.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_image.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_origin.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_position_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_position_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_repeat_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_repeat_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_size.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_bottom_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_left_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_right_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_top_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/column_rule_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/counter_increment.cc
  ${CUR_OUT_DIR}css/properties/longhands/counter_reset.cc
  ${CUR_OUT_DIR}css/properties/longhands/grid_template_columns.cc
  ${CUR_OUT_DIR}css/properties/longhands/grid_template_rows.cc
  ${CUR_OUT_DIR}css/properties/longhands/mask_source_type.cc
  ${CUR_OUT_DIR}css/properties/longhands/outline_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/text_decoration_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_clip.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_composite.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_image.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_origin.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_position_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_position_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_repeat_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_repeat_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_size.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_text_emphasis_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_text_fill_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_text_stroke_color.cc
)

#list(APPEND BLINK_RENDERER_SHORTHANDS_SOURCES
# ${CUR_OUT_DIR}css/properties/shorthands/animation.h
#   "$blink_core_output_dir/css/properties/shorthands/background.h
#   "$blink_core_output_dir/css/properties/shorthands/background_position.h
#   "$blink_core_output_dir/css/properties/shorthands/background_repeat.h
#   "$blink_core_output_dir/css/properties/shorthands/border.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_color.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_end.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_start.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_style.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_width.h
#   "$blink_core_output_dir/css/properties/shorthands/border_bottom.h
#   "$blink_core_output_dir/css/properties/shorthands/border_color.h
#   "$blink_core_output_dir/css/properties/shorthands/border_image.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_color.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_end.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_start.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_style.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_width.h
#   "$blink_core_output_dir/css/properties/shorthands/border_left.h
#   "$blink_core_output_dir/css/properties/shorthands/border_radius.h
#   "$blink_core_output_dir/css/properties/shorthands/border_right.h
#   "$blink_core_output_dir/css/properties/shorthands/border_spacing.h
#   "$blink_core_output_dir/css/properties/shorthands/border_style.h
#   "$blink_core_output_dir/css/properties/shorthands/border_top.h
#   "$blink_core_output_dir/css/properties/shorthands/border_width.h
#   "$blink_core_output_dir/css/properties/shorthands/column_rule.h
#   "$blink_core_output_dir/css/properties/shorthands/columns.h
#   "$blink_core_output_dir/css/properties/shorthands/epub_text_emphasis.h
#   "$blink_core_output_dir/css/properties/shorthands/flex.h
#   "$blink_core_output_dir/css/properties/shorthands/flex_flow.h
#   "$blink_core_output_dir/css/properties/shorthands/font.h
#   "$blink_core_output_dir/css/properties/shorthands/font_variant.h
#   "$blink_core_output_dir/css/properties/shorthands/gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_area.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_column.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_column_gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_row_gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_row.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_template.h
#   "$blink_core_output_dir/css/properties/shorthands/inset.h
#   "$blink_core_output_dir/css/properties/shorthands/inset_block.h
#   "$blink_core_output_dir/css/properties/shorthands/inset_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/list_style.h
#   "$blink_core_output_dir/css/properties/shorthands/margin.h
#   "$blink_core_output_dir/css/properties/shorthands/margin_block.h
#   "$blink_core_output_dir/css/properties/shorthands/margin_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/marker.h
#   "$blink_core_output_dir/css/properties/shorthands/offset.h
#   "$blink_core_output_dir/css/properties/shorthands/outline.h
#   "$blink_core_output_dir/css/properties/shorthands/overflow.h
#   "$blink_core_output_dir/css/properties/shorthands/overscroll_behavior.h
#   "$blink_core_output_dir/css/properties/shorthands/padding.h
#   "$blink_core_output_dir/css/properties/shorthands/padding_block.h
#   "$blink_core_output_dir/css/properties/shorthands/padding_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/page_break_after.h
#   "$blink_core_output_dir/css/properties/shorthands/page_break_before.h
#   "$blink_core_output_dir/css/properties/shorthands/page_break_inside.h
#   "$blink_core_output_dir/css/properties/shorthands/place_content.h
#   "$blink_core_output_dir/css/properties/shorthands/place_items.h
#   "$blink_core_output_dir/css/properties/shorthands/place_self.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin_block.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding_block.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/text_decoration.h
#   "$blink_core_output_dir/css/properties/shorthands/transition.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_animation.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_after.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_before.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_end.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_radius.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_start.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_after.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_before.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_inside.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_rule.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_columns.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_flex.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_flex_flow.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_margin_collapse.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_box_image.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_position.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_repeat.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_text_emphasis.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_text_stroke.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_transition.h
#)

list(APPEND BLINK_RENDERER_CORE_property_names_SOURCES
  # make_core_generated_css_property_names
  ${CUR_OUT_DIR}css/css_property_names.cc
)

list(APPEND BLINK_RENDERER_CORE_atrule_SOURCES
  # make_core_generated_atrule_names
  ${CUR_OUT_DIR}css/parser/at_rule_descriptors.cc
)

#list(APPEND BLINK_RENDERER_CORE_media_features_SOURCES
#  # make_core_generated_media_features
#  ${CUR_OUT_DIR}css/media_features.h
#)

list(APPEND BLINK_RENDERER_CORE_style_property_shorthand_SOURCES
  # make_core_generated_style_property_shorthand
  ${CUR_OUT_DIR}style_property_shorthand.cc
)

## see core_idl_files
#                    "aom/accessible_node.idl",
#                    "aom/accessible_node_list.idl",
#                    "aom/computed_accessible_node.idl",
#                    "animation/animation.idl",
#                    "animation/animation_effect.idl",
#                    "animation/animation_timeline.idl",
#                    "animation/document_timeline.idl",
#                    "animation/keyframe_effect.idl",
#                    "animation/scroll_timeline.idl",
#                    "clipboard/data_transfer.idl",
#                    "clipboard/data_transfer_item_list.idl",
#                    "css/css_condition_rule.idl",
#                    "css/css_font_face_rule.idl",
#                    "css/css_font_feature_values_rule.idl",
#                    "css/css_grouping_rule.idl",
#                    "css/css_import_rule.idl",
#                    "css/css_keyframe_rule.idl",
#                    "css/css_keyframes_rule.idl",
#                    "css/css_media_rule.idl",
#                    "css/css_namespace_rule.idl",
#                    "css/css_page_rule.idl",
#                    "css/css_rule.idl",
#                    "css/css_rule_list.idl",
#                    "css/css_style_declaration.idl",
#                    "css/css_style_rule.idl",
#                    "css/css_style_sheet.idl",
#                    "css/css_supports_rule.idl",
#                    "css/css_viewport_rule.idl",
#                    "css/font_face.idl",
#                    "css/font_face_set.idl",
#                    "css/font_face_set_load_event.idl",
#                    "css/media_list.idl",
#                    "css/media_query_list.idl",
#                    "css/media_query_list_event.idl",
#                    "css/style_media.idl",
#                    "css/style_sheet.idl",
#                    "css/style_sheet_list.idl",
#                    "css/cssom/css_image_value.idl",
#                    "css/cssom/css_keyword_value.idl",
#                    "css/cssom/css_matrix_component.idl",
#                    "css/cssom/css_math_invert.idl",
#                    "css/cssom/css_math_max.idl",
#                    "css/cssom/css_math_min.idl",
#                    "css/cssom/css_math_negate.idl",
#                    "css/cssom/css_math_sum.idl",
#                    "css/cssom/css_math_product.idl",
#                    "css/cssom/css_math_value.idl",
#                    "css/cssom/css_numeric_array.idl",
#                    "css/cssom/css_numeric_value.idl",
#                    "css/cssom/css_perspective.idl",
#                    "css/cssom/css_position_value.idl",
#                    "css/cssom/css_rotate.idl",
#                    "css/cssom/css_scale.idl",
#                    "css/cssom/css_skew.idl",
#                    "css/cssom/css_skew_x.idl",
#                    "css/cssom/css_skew_y.idl",
#                    "css/cssom/css_style_value.idl",
#                    "css/cssom/css_transform_component.idl",
#                    "css/cssom/css_transform_value.idl",
#                    "css/cssom/css_translate.idl",
#                    "css/cssom/css_unit_value.idl",
#                    "css/cssom/css_unparsed_value.idl",
#                    "css/cssom/css_variable_reference_value.idl",
#                    "css/cssom/style_property_map.idl",
#                    "css/cssom/style_property_map_read_only.idl",
#                    "display_lock/before_activate_event.idl",
#                    "display_lock/display_lock_context.idl",
#                    "dom/abort_controller.idl",
#                    "dom/abort_signal.idl",
#                    "dom/attr.idl",
#                    "dom/cdata_section.idl",
#                    "dom/character_data.idl",
#                    "dom/comment.idl",
#                    "dom/dom_exception.idl",
#                    "dom/dom_implementation.idl",
#                    "dom/dom_string_list.idl",
#                    "dom/dom_string_map.idl",
#                    "dom/dom_token_list.idl",
#                    "dom/document_fragment.idl",
#                    "dom/document_type.idl",
#                    "dom/element.idl",
#                    "dom/idle_deadline.idl",
#                    "dom/iterator.idl",
#                    "dom/mutation_observer.idl",
#                    "dom/mutation_record.idl",
#                    "dom/named_node_map.idl",
#                    "dom/node.idl",
#                    "dom/node_filter.idl",
#                    "dom/node_iterator.idl",
#                    "dom/node_list.idl",
#                    "dom/processing_instruction.idl",
#                    "dom/range.idl",
#                    "dom/scripted_task_queue.idl",
#                    "dom/scripted_task_queue_controller.idl",
#                    "dom/static_range.idl",
#                    "dom/text.idl",
#                    "dom/tree_walker.idl",
#                    "dom/xml_document.idl",
#                    "dom/events/custom_event.idl",
#                    "dom/events/event.idl",
#                    "dom/events/event_listener.idl",
#                    "dom/events/event_target.idl",
#                    "trustedtypes/trusted_html.idl",
#                    "trustedtypes/trusted_script.idl",
#                    "trustedtypes/trusted_script_url.idl",
#                    "trustedtypes/trusted_type_policy.idl",
#                    "trustedtypes/trusted_type_policy_factory.idl",
#                    "trustedtypes/trusted_url.idl",
#                    "editing/selection.idl",
#                    "events/animation_event.idl",
#                    "events/animation_playback_event.idl",
#                    "events/application_cache_error_event.idl",
#                    "events/before_unload_event.idl",
#                    "events/clipboard_event.idl",
#                    "events/composition_event.idl",
#                    "events/drag_event.idl",
#                    "events/error_event.idl",
#                    "events/focus_event.idl",
#                    "events/hash_change_event.idl",
#                    "events/input_event.idl",
#                    "events/keyboard_event.idl",
#                    "events/message_event.idl",
#                    "events/mouse_event.idl",
#                    "events/mutation_event.idl",
#                    "events/overscroll_event.idl",
#                    "events/page_transition_event.idl",
#                    "events/pointer_event.idl",
#                    "events/pop_state_event.idl",
#                    "events/portal_activate_event.idl",
#                    "events/progress_event.idl",
#                    "events/promise_rejection_event.idl",
#                    "events/resource_progress_event.idl",
#                    "events/security_policy_violation_event.idl",
#                    "events/text_event.idl",
#                    "events/touch_event.idl",
#                    "events/transition_event.idl",
#                    "events/ui_event.idl",
#                    "events/wheel_event.idl",
#                    "feature_policy/feature_policy.idl",
#                    "fetch/body.idl",
#                    "fetch/headers.idl",
#                    "fetch/request.idl",
#                    "fetch/response.idl",
#                    "fileapi/blob.idl",
#                    "fileapi/file.idl",
#                    "fileapi/file_list.idl",
#                    "fileapi/file_reader.idl",
#                    "fileapi/file_reader_sync.idl",
#                    "frame/bar_prop.idl",
#                    "frame/csp/csp_violation_report_body.idl",
#                    "frame/deprecation_report_body.idl",
#                    "frame/external.idl",
#                    "frame/feature_policy_violation_report_body.idl",
#                    "frame/history.idl",
#                    "frame/intervention_report_body.idl",
#                    "frame/location.idl",
#                    "frame/report.idl",
#                    "frame/report_body.idl",
#                    "frame/reporting_observer.idl",
#                    "frame/scheduling.idl",
#                    "frame/test_report_body.idl",
#                    "frame/user_activation.idl",
#                    "frame/visual_viewport.idl",
#                    "geometry/dom_matrix.idl",
#                    "geometry/dom_matrix_read_only.idl",
#                    "geometry/dom_point.idl",
#                    "geometry/dom_point_read_only.idl",
#                    "geometry/dom_quad.idl",
#                    "geometry/dom_rect.idl",
#                    "geometry/dom_rect_list.idl",
#                    "geometry/dom_rect_read_only.idl",
#                    "html/html_all_collection.idl",
#                    "html/html_anchor_element.idl",
#                    "html/html_area_element.idl",
#                    "html/html_br_element.idl",
#                    "html/html_base_element.idl",
#                    "html/html_body_element.idl",
#                    "html/html_collection.idl",
#                    "html/html_content_element.idl",
#                    "html/html_dlist_element.idl",
#                    "html/html_data_element.idl",
#                    "html/html_details_element.idl",
#                    "html/html_dialog_element.idl",
#                    "html/html_directory_element.idl",
#                    "html/html_div_element.idl",
#                    "html/html_document.idl",
#                    "html/html_embed_element.idl",
#                    "html/html_font_element.idl",
#                    "html/html_frame_element.idl",
#                    "html/html_frame_set_element.idl",
#                    "html/html_hr_element.idl",
#                    "html/html_head_element.idl",
#                    "html/html_heading_element.idl",
#                    "html/html_html_element.idl",
#                    "html/html_image_element.idl",
#                    "html/html_li_element.idl",
#                    "html/html_link_element.idl",
#                    "html/html_map_element.idl",
#                    "html/html_marquee_element.idl",
#                    "html/html_menu_element.idl",
#                    "html/html_meta_element.idl",
#                    "html/html_meter_element.idl",
#                    "html/html_mod_element.idl",
#                    "html/html_olist_element.idl",
#                    "html/html_object_element.idl",
#                    "html/html_paragraph_element.idl",
#                    "html/html_param_element.idl",
#                    "html/html_picture_element.idl",
#                    "html/html_pre_element.idl",
#                    "html/html_progress_element.idl",
#                    "html/html_quote_element.idl",
#                    "html/html_script_element.idl",
#                    "html/html_shadow_element.idl",
#                    "html/html_slot_element.idl",
#                    "html/html_source_element.idl",
#                    "html/html_span_element.idl",
#                    "html/html_style_element.idl",
#                    "html/html_table_caption_element.idl",
#                    "html/html_table_cell_element.idl",
#                    "html/html_table_col_element.idl",
#                    "html/html_table_element.idl",
#                    "html/html_table_row_element.idl",
#                    "html/html_table_section_element.idl",
#                    "html/html_template_element.idl",
#                    "html/html_time_element.idl",
#                    "html/html_title_element.idl",
#                    "html/html_ulist_element.idl",
#                    "html/html_unknown_element.idl",
#                    "html/time_ranges.idl",
#                    "html/void_callback.idl",
#                    "html/canvas/image_data.idl",
#                    "html/canvas/text_metrics.idl",
#                    "html/custom/custom_element_registry.idl",
#                    "html/custom/element_internals.idl",
#                    "html/forms/form_data.idl",
#                    "html/forms/form_data_event.idl",
#                    "html/forms/html_button_element.idl",
#                    "html/forms/html_data_list_element.idl",
#                    "html/forms/html_field_set_element.idl",
#                    "html/forms/html_form_controls_collection.idl",
#                    "html/forms/html_form_element.idl",
#                    "html/forms/html_label_element.idl",
#                    "html/forms/html_legend_element.idl",
#                    "html/forms/html_opt_group_element.idl",
#                    "html/forms/html_option_element.idl",
#                    "html/forms/html_options_collection.idl",
#                    "html/forms/html_output_element.idl",
#                    "html/forms/html_select_element.idl",
#                    "html/forms/html_text_area_element.idl",
#                    "html/forms/radio_node_list.idl",
#                    "html/forms/validity_state.idl",
#                    "html/media/html_audio_element.idl",
#                    "html/media/media_error.idl",
#                    "html/portal/html_portal_element.idl",
#                    "html/portal/portal_host.idl",
#                    "html/track/audio_track_list.idl",
#                    "html/track/html_track_element.idl",
#                    "html/track/text_track.idl",
#                    "html/track/text_track_cue.idl",
#                    "html/track/text_track_cue_list.idl",
#                    "html/track/text_track_list.idl",
#                    "html/track/track_event.idl",
#                    "html/track/video_track_list.idl",
#                    "html/track/vtt/vtt_cue.idl",
#                    "html/track/vtt/vtt_region.idl",
#                    "imagebitmap/image_bitmap.idl",
#                    "input/input_device_capabilities.idl",
#                    "input/touch.idl",
#                    "input/touch_list.idl",
#                    "inspector/inspector_overlay_host.idl",
#                    "intersection_observer/intersection_observer.idl",
#                    "intersection_observer/intersection_observer_entry.idl",
#                    "invisible_dom/activate_invisible_event.idl",
#                    "layout/custom/layout_constraints.idl",
#                    "layout/custom/layout_fragment.idl",
#                    "layout/custom/layout_fragment_request.idl",
#                    "layout/custom/layout_child.idl",
#                    "layout/custom/layout_worklet_global_scope.idl",
#                    "loader/appcache/application_cache.idl",
#                    "messaging/message_channel.idl",
#                    "messaging/message_port.idl",
#                    "mojo/mojo.idl",
#                    "mojo/mojo_handle.idl",
#                    "mojo/mojo_watcher.idl",
#                    "mojo/test/mojo_interface_interceptor.idl",
#                    "mojo/test/mojo_interface_request_event.idl",
#                    "page/page_popup_controller.idl",
#                    "page/scrolling/scroll_state.idl",
#                    "resize_observer/resize_observer.idl",
#                    "resize_observer/resize_observer_entry.idl",
#                    "streams/readable_stream.idl",
#                    "streams/readable_stream_default_controller.idl",
#                    "streams/readable_stream_default_reader.idl",
#                    "streams/transform_stream.idl",
#                    "streams/transform_stream_default_controller.idl",
#                    "streams/writable_stream.idl",
#                    "streams/writable_stream_default_controller.idl",
#                    "streams/writable_stream_default_writer.idl",
#                    "streams/underlying_source_base.idl",
#                    "streams/underlying_sink_base.idl",
#                    "svg/svg_a_element.idl",
#                    "svg/svg_angle.idl",
#                    "svg/svg_animate_element.idl",
#                    "svg/svg_animate_motion_element.idl",
#                    "svg/svg_animate_transform_element.idl",
#                    "svg/svg_animated_angle.idl",
#                    "svg/svg_animated_boolean.idl",
#                    "svg/svg_animated_enumeration.idl",
#                    "svg/svg_animated_integer.idl",
#                    "svg/svg_animated_length.idl",
#                    "svg/svg_animated_length_list.idl",
#                    "svg/svg_animated_number.idl",
#                    "svg/svg_animated_number_list.idl",
#                    "svg/svg_animated_preserve_aspect_ratio.idl",
#                    "svg/svg_animated_rect.idl",
#                    "svg/svg_animated_string.idl",
#                    "svg/svg_animated_transform_list.idl",
#                    "svg/svg_animation_element.idl",
#                    "svg/svg_circle_element.idl",
#                    "svg/svg_clip_path_element.idl",
#                    "svg/svg_component_transfer_function_element.idl",
#                    "svg/svg_defs_element.idl",
#                    "svg/svg_desc_element.idl",
#                    "svg/svg_discard_element.idl",
#                    "svg/svg_element.idl",
#                    "svg/svg_ellipse_element.idl",
#                    "svg/svg_fe_blend_element.idl",
#                    "svg/svg_fe_color_matrix_element.idl",
#                    "svg/svg_fe_component_transfer_element.idl",
#                    "svg/svg_fe_composite_element.idl",
#                    "svg/svg_fe_convolve_matrix_element.idl",
#                    "svg/svg_fe_diffuse_lighting_element.idl",
#                    "svg/svg_fe_displacement_map_element.idl",
#                    "svg/svg_fe_distant_light_element.idl",
#                    "svg/svg_fe_drop_shadow_element.idl",
#                    "svg/svg_fe_flood_element.idl",
#                    "svg/svg_fe_func_a_element.idl",
#                    "svg/svg_fe_func_b_element.idl",
#                    "svg/svg_fe_func_g_element.idl",
#                    "svg/svg_fe_func_r_element.idl",
#                    "svg/svg_fe_gaussian_blur_element.idl",
#                    "svg/svg_fe_image_element.idl",
#                    "svg/svg_fe_merge_element.idl",
#                    "svg/svg_fe_merge_node_element.idl",
#                    "svg/svg_fe_morphology_element.idl",
#                    "svg/svg_fe_offset_element.idl",
#                    "svg/svg_fe_point_light_element.idl",
#                    "svg/svg_fe_specular_lighting_element.idl",
#                    "svg/svg_fe_spot_light_element.idl",
#                    "svg/svg_fe_tile_element.idl",
#                    "svg/svg_fe_turbulence_element.idl",
#                    "svg/svg_filter_element.idl",
#                    "svg/svg_foreign_object_element.idl",
#                    "svg/svg_g_element.idl",
#                    "svg/svg_geometry_element.idl",
#                    "svg/svg_gradient_element.idl",
#                    "svg/svg_graphics_element.idl",
#                    "svg/svg_image_element.idl",
#                    "svg/svg_length.idl",
#                    "svg/svg_length_list.idl",
#                    "svg/svg_line_element.idl",
#                    "svg/svg_linear_gradient_element.idl",
#                    "svg/svg_mpath_element.idl",
#                    "svg/svg_marker_element.idl",
#                    "svg/svg_mask_element.idl",
#                    "svg/svg_matrix.idl",
#                    "svg/svg_metadata_element.idl",
#                    "svg/svg_number.idl",
#                    "svg/svg_number_list.idl",
#                    "svg/svg_path_element.idl",
#                    "svg/svg_pattern_element.idl",
#                    "svg/svg_point.idl",
#                    "svg/svg_point_list.idl",
#                    "svg/svg_polygon_element.idl",
#                    "svg/svg_polyline_element.idl",
#                    "svg/svg_preserve_aspect_ratio.idl",
#                    "svg/svg_radial_gradient_element.idl",
#                    "svg/svg_rect.idl",
#                    "svg/svg_rect_element.idl",
#                    "svg/svg_svg_element.idl",
#                    "svg/svg_script_element.idl",
#                    "svg/svg_set_element.idl",
#                    "svg/svg_stop_element.idl",
#                    "svg/svg_string_list.idl",
#                    "svg/svg_style_element.idl",
#                    "svg/svg_switch_element.idl",
#                    "svg/svg_symbol_element.idl",
#                    "svg/svg_tspan_element.idl",
#                    "svg/svg_text_content_element.idl",
#                    "svg/svg_text_element.idl",
#                    "svg/svg_text_path_element.idl",
#                    "svg/svg_text_positioning_element.idl",
#                    "svg/svg_title_element.idl",
#                    "svg/svg_transform.idl",
#                    "svg/svg_transform_list.idl",
#                    "svg/svg_unit_types.idl",
#                    "svg/svg_use_element.idl",
#                    "svg/svg_view_element.idl",
#                    "timing/memory_info.idl",
#                    "timing/performance.idl",
#                    "timing/performance_element_timing.idl",
#                    "timing/performance_entry.idl",
#                    "timing/performance_event_timing.idl",
#                    "timing/performance_layout_jank.idl",
#                    "timing/performance_long_task_timing.idl",
#                    "timing/performance_mark.idl",
#                    "timing/performance_measure.idl",
#                    "timing/performance_navigation.idl",
#                    "timing/performance_navigation_timing.idl",
#                    "timing/performance_observer.idl",
#                    "timing/performance_observer_entry_list.idl",
#                    "timing/performance_paint_timing.idl",
#                    "timing/performance_resource_timing.idl",
#                    "timing/performance_server_timing.idl",
#                    "timing/performance_timing.idl",
#                    "timing/task_attribution_timing.idl",
#                    "typed_arrays/array_buffer.idl",
#                    "typed_arrays/array_buffer_view.idl",
#                    "typed_arrays/big_int_64_array.idl",
#                    "typed_arrays/big_uint_64_array.idl",
#                    "typed_arrays/data_view.idl",
#                    "typed_arrays/float32_array.idl",
#                    "typed_arrays/float64_array.idl",
#                    "typed_arrays/int16_array.idl",
#                    "typed_arrays/int32_array.idl",
#                    "typed_arrays/int8_array.idl",
#                    "typed_arrays/shared_array_buffer.idl",
#                    "typed_arrays/uint16_array.idl",
#                    "typed_arrays/uint32_array.idl",
#                    "typed_arrays/uint8_array.idl",
#                    "typed_arrays/uint8_clamped_array.idl",
#                    "url/url_search_params.idl",
#                    "workers/experimental/task.idl",
#                    "workers/experimental/task_worklet.idl",
#                    "workers/experimental/task_worklet_global_scope.idl",
#                    "workers/experimental/worker_task_queue.idl",
#                    "workers/shared_worker.idl",
#                    "workers/worker.idl",
#                    "workers/worker_location.idl",
#                    "workers/worklet.idl",
#                    "workers/worklet_global_scope.idl",
#                    "xml/dom_parser.idl",
#                    "xml/xml_serializer.idl",
#                    "xml/xpath_evaluator.idl",
#                    "xml/xpath_expression.idl",
#                    "xml/xpath_ns_resolver.idl",
#                    "xml/xpath_result.idl",
#                    "xml/xslt_processor.idl",
#                    "xmlhttprequest/xml_http_request.idl",
#                    "xmlhttprequest/xml_http_request_event_target.idl",
#                    "xmlhttprequest/xml_http_request_upload.idl",
#
## see core_idl_with_modules_dependency_files
#                    "clipboard/data_transfer_item.idl",
#                    "css/css.idl",
#                    "dom/document.idl",
#                    "dom/shadow_root.idl",
#                    "frame/navigator.idl",
#                    "frame/screen.idl",
#                    "frame/window.idl",
#                    "html/html_element.idl",
#                    "html/html_iframe_element.idl",
#                    "html/canvas/html_canvas_element.idl",
#                    "html/forms/html_input_element.idl",
#                    "html/media/html_media_element.idl",
#                    "html/media/html_video_element.idl",
#                    "html/track/audio_track.idl",
#                    "html/track/video_track.idl",
#                    "inspector/dev_tools_host.idl",
#                    "offscreencanvas/offscreen_canvas.idl",
#                    "url/url.idl",
#                    "workers/dedicated_worker_global_scope.idl",
#                    "workers/shared_worker_global_scope.idl",
#                    "workers/worker_global_scope.idl",
#                    "workers/worker_navigator.idl",
#
## see core_dependency_idl_files
#                    "animation/document_animation.idl",
#                    "animation/element_animation.idl",
#                    "css/font_face_source.idl",
#                    "css/property_registration.idl",
#                    "css/cssom/css_unit_values.idl",
#                    "css/cssom/element_computed_style_map.idl",
#                    "dom/accessibility_role.idl",
#                    "dom/aria_attributes.idl",
#                    "dom/child_node.idl",
#                    "dom/document_and_element_event_handlers.idl",
#                    "dom/document_or_shadow_root.idl",
#                    "dom/global_event_handlers.idl",
#                    "dom/nonced_element.idl",
#                    "dom/non_document_type_child_node.idl",
#                    "dom/non_element_parent_node.idl",
#                    "dom/parent_node.idl",
#                    "events/navigator_events.idl",
#                    "fetch/window_fetch.idl",
#                    "fetch/worker_fetch.idl",
#                    "fileapi/url_file_api.idl",
#                    "frame/navigator_automation_information.idl",
#                    "frame/navigator_concurrent_hardware.idl",
#                    "frame/navigator_cookies.idl",
#                    "frame/navigator_device_memory.idl",
#                    "frame/navigator_id.idl",
#                    "frame/navigator_language.idl",
#                    "frame/navigator_on_line.idl",
#                    "frame/navigator_scheduling.idl",
#                    "frame/navigator_user_activation.idl",
#                    "frame/navigator_user_agent.idl",
#                    "frame/window_event_handlers.idl",
#                    "frame/window_or_worker_global_scope.idl",
#                    "fullscreen/document_fullscreen.idl",
#                    "fullscreen/element_fullscreen.idl",
#                    "html/html_hyperlink_element_utils.idl",
#                    "html/portal/window_portal_host.idl",
#                    "layout/custom/css_layout_worklet.idl",
#                    "svg/svg_document.idl",
#                    "svg/svg_filter_primitive_standard_attributes.idl",
#                    "svg/svg_fit_to_view_box.idl",
#                    "svg/svg_tests.idl",
#                    "svg/svg_uri_reference.idl",
#                    "svg/svg_zoom_and_pan.idl",
#                    "timing/window_performance.idl",
#                    "timing/worker_global_scope_performance.idl",
#                    "workers/abstract_worker.idl",
#                    "workers/experimental/window_task_worklet.idl",
#                    "xml/document_xpath_evaluator.idl",
#
## see core_typedefs_enums_only_idl_files
#                    "css/cssom_string.idl",
#                    "dom/common_definitions.idl",
#                    "timing/dom_high_res_time_stamp.idl",
#                    "timing/performance_entry_list.idl",
#
## see core_callback_function_idl_files
#                    "html/event_handler.idl",
#                    "dom/frame_request_callback.idl",
#                    "dom/function_string_callback.idl",
#                    "dom/idle_request_callback.idl",
#                    "dom/void_function.idl",
#
## see core_dictionary_idl_files
#                    "animation/base_keyframe.idl",
#                    "animation/base_property_indexed_keyframe.idl",
#                    "animation/computed_effect_timing.idl",
#                    "animation/document_timeline_options.idl",
#                    "animation/effect_timing.idl",
#                    "animation/keyframe_animation_options.idl",
#                    "animation/keyframe_effect_options.idl",
#                    "animation/optional_effect_timing.idl",
#                    "animation/scroll_timeline_options.idl",
#                    "css/css_style_sheet_init.idl",
#                    "css/font_face_descriptors.idl",
#                    "css/font_face_set_load_event_init.idl",
#                    "css/media_query_list_event_init.idl",
#                    "css/property_descriptor.idl",
#                    "css/cssom/css_matrix_component_options.idl",
#                    "css/cssom/css_numeric_type.idl",
#                    "dom/element_creation_options.idl",
#                    "dom/element_definition_options.idl",
#                    "dom/element_registration_options.idl",
#                    "dom/get_root_node_options.idl",
#                    "dom/idle_request_options.idl",
#                    "dom/mutation_observer_init.idl",
#                    "dom/shadow_root_init.idl",
#                    "dom/events/add_event_listener_options.idl",
#                    "dom/events/custom_event_init.idl",
#                    "dom/events/event_init.idl",
#                    "dom/events/event_listener_options.idl",
#                    "dom/events/event_modifier_init.idl",
#                    "display_lock/display_lock_options.idl",
#                    "events/animation_event_init.idl",
#                    "events/animation_playback_event_init.idl",
#                    "events/application_cache_error_event_init.idl",
#                    "events/clipboard_event_init.idl",
#                    "events/composition_event_init.idl",
#                    "events/drag_event_init.idl",
#                    "events/error_event_init.idl",
#                    "events/focus_event_init.idl",
#                    "events/hash_change_event_init.idl",
#                    "events/input_event_init.idl",
#                    "events/keyboard_event_init.idl",
#                    "events/message_event_init.idl",
#                    "events/mouse_event_init.idl",
#                    "events/overscroll_event_init.idl",
#                    "events/page_transition_event_init.idl",
#                    "events/pointer_event_init.idl",
#                    "events/pop_state_event_init.idl",
#                    "events/portal_activate_event_init.idl",
#                    "events/progress_event_init.idl",
#                    "events/promise_rejection_event_init.idl",
#                    "events/security_policy_violation_event_init.idl",
#                    "events/touch_event_init.idl",
#                    "events/transition_event_init.idl",
#                    "events/ui_event_init.idl",
#                    "events/wheel_event_init.idl",
#                    "fetch/request_init.idl",
#                    "fetch/response_init.idl",
#                    "fileapi/blob_property_bag.idl",
#                    "fileapi/file_property_bag.idl",
#                    "frame/reporting_observer_options.idl",
#                    "frame/scroll_into_view_options.idl",
#                    "frame/scroll_options.idl",
#                    "frame/scroll_to_options.idl",
#                    "frame/user_agent.idl",
#                    "frame/window_post_message_options.idl",
#                    "fullscreen/fullscreen_options.idl",
#                    "geometry/dom_matrix_2d_init.idl",
#                    "geometry/dom_matrix_init.idl",
#                    "geometry/dom_point_init.idl",
#                    "geometry/dom_quad_init.idl",
#                    "geometry/dom_rect_init.idl",
#                    "html/focus_options.idl",
#                    "html/assigned_nodes_options.idl",
#                    "html/canvas/baselines.idl",
#                    "html/canvas/image_data_color_settings.idl",
#                    "html/canvas/image_encode_options.idl",
#                    "html/custom/validity_state_flags.idl",
#                    "html/forms/form_data_event_init.idl",
#                    "html/portal/portal_activate_options.idl",
#                    "html/track/track_event_init.idl",
#                    "imagebitmap/image_bitmap_options.idl",
#                    "input/input_device_capabilities_init.idl",
#                    "input/touch_init.idl",
#                    "intersection_observer/intersection_observer_init.idl",
#                    "layout/custom/custom_layout_constraints_options.idl",
#                    "layout/custom/fragment_result_options.idl",
#                    "messaging/post_message_options.idl",
#                    "mojo/mojo_create_data_pipe_options.idl",
#                    "mojo/mojo_create_data_pipe_result.idl",
#                    "mojo/mojo_create_message_pipe_result.idl",
#                    "mojo/mojo_create_shared_buffer_result.idl",
#                    "mojo/mojo_discard_data_options.idl",
#                    "mojo/mojo_duplicate_buffer_handle_options.idl",
#                    "mojo/mojo_handle_signals.idl",
#                    "mojo/mojo_map_buffer_result.idl",
#                    "mojo/mojo_read_data_options.idl",
#                    "mojo/mojo_read_data_result.idl",
#                    "mojo/mojo_read_message_flags.idl",
#                    "mojo/mojo_read_message_result.idl",
#                    "mojo/mojo_write_data_options.idl",
#                    "mojo/mojo_write_data_result.idl",
#                    "mojo/test/mojo_interface_request_event_init.idl",
#                    "page/scrolling/scroll_state_init.idl",
#                    "timing/performance_mark_options.idl",
#                    "timing/performance_measure_options.idl",
#                    "timing/performance_observer_init.idl",
#                    "trustedtypes/trusted_type_policy_options.idl",
#                    "workers/worker_options.idl",
#                    "workers/worklet_options.idl",

add_library(BLINK_RENDERER_CORE STATIC
  #${BLINK_RENDERER_CORE_ACCESSIBILITY_SOURCES}
  #${BLINK_RENDERER_CORE_AOM_SOURCES}
  #${BLINK_RENDERER_CORE_CLIPBOARD_SOURCES}
  ${BLINK_RENDERER_CORE_TYPED_ARRAYS_SOURCES}
  #${BLINK_RENDERER_CORE_ACCESSIBILITY_SOURCES}
  #${BLINK_RENDERER_CORE_EVENTS_SOURCES}
  #${BLINK_RENDERER_CORE_ANIMATION_SOURCES}
  #${BLINK_RENDERER_CORE_PAINT_SOURCES}
  #${BLINK_RENDERER_CORE_EVENT_SOURCES}
  #${BLINK_RENDERER_CORE_STYLE_SOURCES}
  #${BLINK_RENDERER_CORE_CSS_SOURCES}
  #${BLINK_RENDERER_CORE_LONGHANDS_SOURCES}
  #${BLINK_RENDERER_CORE_property_names_SOURCES}
  #${BLINK_RENDERER_CORE_atrule_SOURCES}
  #${BLINK_RENDERER_CORE_style_property_shorthand_SOURCES}
)

target_link_libraries(BLINK_RENDERER_CORE PUBLIC
  #public_deps = [
  #  "//services/network/public/cpp:cpp",
  #  "//services/service_manager/public/cpp",
  #  "//skia",
  #  "//third_party/angle:translator",
  #  "//third_party/blink/public/mojom:mojom_broadcastchannel_bindings_blink",
  #  "//third_party/blink/renderer/core/inspector:generated",
  #  "//third_party/blink/renderer/core/probe:generated",
  #  "//third_party/blink/renderer/platform",
  #  "//third_party/iccjpeg",
  #  "//third_party/icu",
  #  "//third_party/libpng",
  #  "//third_party/libwebp",
  #  "//third_party/libxml",
  #  "//third_party/libxslt",
  #  "//third_party/ots",
  #  "//third_party/snappy",
  #  "//third_party/zlib",
  #  "//ui/base/ime/mojo",
  #  "//ui/events:dom_keycode_converter",
  #  "//ui/gfx/geometry",
  #  "//ui/native_theme",
  #  "//url",
  #  "//v8",
  #]
  #deps = [
  #  "//third_party/blink/renderer/bindings/core/v8:bindings_core_v8_generated",
  #
  #  # FIXME: don't depend on bindings_modules http://crbug.com/358074
  #  "//third_party/blink/renderer/bindings/modules/v8:bindings_modules_v8_generated",
  #]
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

set_property(TARGET BLINK_RENDERER_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_RENDERER_CORE PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${BLINK_RENDERER_CORE_DIR}
  #${BASE_DIR}
  ${CUR_OUT_DIR}
  ${GEN_BLINK_PUBLIC_DIR}
)

target_include_directories(BLINK_RENDERER_CORE PUBLIC
  ${GEN_BLINK_PUBLIC_DIR}
)

target_compile_definitions(BLINK_RENDERER_CORE PRIVATE
  BLINK_CORE_IMPLEMENTATION=1
  #BLINK_ANIMATION_USE_TIME_DELTA=1
  #ENABLE_TOUCHLESS_UASTYLE_THEME=1
)
