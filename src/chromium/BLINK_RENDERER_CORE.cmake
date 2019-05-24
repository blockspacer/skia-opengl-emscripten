### --- BLINK_RENDERER_CORE ---###

set(CUR_SRC_DIR ${BLINK_RENDERER_CORE_DIR})

# path to ...gen/third_party/blink/renderer/core/
set(CUR_OUT_DIR ${GEN_BLINK_PUBLIC_DIR}/third_party/blink/renderer/core/)

# src/chromium/gen/gen_blink_public//third_party/blink/renderer/core/third_party/blink/renderer/bindings/core/v8/iterable.h
# message(FATAL_ERROR "GEN_BLINK_PUBLIC_DIR..=${GEN_BLINK_PUBLIC_DIR}/third_party/blink/renderer/bindings/core/v8/iterable.h")

list(APPEND BLINK_RENDERER_CORE_SOURCES
  #${CUR_SRC_DIR}core_export.h
  ${CUR_SRC_DIR}core_initializer.cc
  #${CUR_SRC_DIR}core_initializer.h
)

list(APPEND BLINK_RENDERER_CORE_PAINT_SOURCES
  # blink_core_sources("paint")
  ${CUR_SRC_DIR}paint/applied_decoration_painter.cc
  #${CUR_SRC_DIR}paint/applied_decoration_painter.h",
  # requires third_party/blink/renderer/bindings/core/v8/iterable.h
  ${CUR_SRC_DIR}paint/background_image_geometry.cc
  #${CUR_SRC_DIR}paint/background_image_geometry.h",
  ${CUR_SRC_DIR}paint/block_flow_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/block_flow_paint_invalidator.h",
  ${CUR_SRC_DIR}paint/block_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/block_paint_invalidator.h",
  ${CUR_SRC_DIR}paint/block_painter.cc
  #${CUR_SRC_DIR}paint/block_painter.h",
  ${CUR_SRC_DIR}paint/box_border_painter.cc
  #${CUR_SRC_DIR}paint/box_border_painter.h",
  ${CUR_SRC_DIR}paint/box_decoration_data.cc
  #${CUR_SRC_DIR}paint/box_decoration_data.h",
  ${CUR_SRC_DIR}paint/box_model_object_painter.cc
  #${CUR_SRC_DIR}paint/box_model_object_painter.h",
  ${CUR_SRC_DIR}paint/box_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/box_paint_invalidator.h",
  ${CUR_SRC_DIR}paint/box_painter.cc
  #${CUR_SRC_DIR}paint/box_painter.h",
  ${CUR_SRC_DIR}paint/box_painter_base.cc
  #${CUR_SRC_DIR}paint/box_painter_base.h",
  ${CUR_SRC_DIR}paint/box_reflection_utils.cc
  #${CUR_SRC_DIR}paint/box_reflection_utils.h",
  ${CUR_SRC_DIR}paint/clip_path_clipper.cc
  #${CUR_SRC_DIR}paint/clip_path_clipper.h",
  ${CUR_SRC_DIR}paint/clip_rect.cc
  #${CUR_SRC_DIR}paint/clip_rect.h",
  #${CUR_SRC_DIR}paint/clip_rects.h",
  #${CUR_SRC_DIR}paint/clip_rects_cache.h",
  ${CUR_SRC_DIR}paint/collapsed_border_painter.cc
  #${CUR_SRC_DIR}paint/collapsed_border_painter.h",
  ${CUR_SRC_DIR}paint/compositing/composited_layer_mapping.cc
  #${CUR_SRC_DIR}paint/compositing/composited_layer_mapping.h",
  ${CUR_SRC_DIR}paint/compositing/compositing_inputs_root.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_inputs_root.h",
  ${CUR_SRC_DIR}paint/compositing/compositing_inputs_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_inputs_updater.h",
  ${CUR_SRC_DIR}paint/compositing/compositing_layer_assigner.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_layer_assigner.h",
  ${CUR_SRC_DIR}paint/compositing/compositing_layer_property_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_layer_property_updater.h",
  ${CUR_SRC_DIR}paint/compositing/compositing_reason_finder.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_reason_finder.h",
  ${CUR_SRC_DIR}paint/compositing/compositing_requirements_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_requirements_updater.h",
  #${CUR_SRC_DIR}paint/compositing/compositing_state.h",
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_as_text.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_as_text.h",
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_builder.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_builder.h",
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_updater.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_updater.h",
  ${CUR_SRC_DIR}paint/compositing/paint_layer_compositor.cc
  #${CUR_SRC_DIR}paint/compositing/paint_layer_compositor.h",
  ${CUR_SRC_DIR}paint/css_mask_painter.cc
  #${CUR_SRC_DIR}paint/css_mask_painter.h",
  #${CUR_SRC_DIR}paint/decoration_info.h",
  ${CUR_SRC_DIR}paint/details_marker_painter.cc
  #${CUR_SRC_DIR}paint/details_marker_painter.h",
  ${CUR_SRC_DIR}paint/document_marker_painter.cc
  #${CUR_SRC_DIR}paint/document_marker_painter.h",
  ${CUR_SRC_DIR}paint/ellipsis_box_painter.cc
  #${CUR_SRC_DIR}paint/ellipsis_box_painter.h",
  ${CUR_SRC_DIR}paint/embedded_content_painter.cc
  #${CUR_SRC_DIR}paint/embedded_content_painter.h",
  ${CUR_SRC_DIR}paint/embedded_object_painter.cc
  #${CUR_SRC_DIR}paint/embedded_object_painter.h",
  ${CUR_SRC_DIR}paint/fallback_theme.cc
  #${CUR_SRC_DIR}paint/fallback_theme.h",
  ${CUR_SRC_DIR}paint/fieldset_paint_info.cc
  #${CUR_SRC_DIR}paint/fieldset_paint_info.h",
  ${CUR_SRC_DIR}paint/fieldset_painter.cc
  #${CUR_SRC_DIR}paint/fieldset_painter.h",
  ${CUR_SRC_DIR}paint/file_upload_control_painter.cc
  #${CUR_SRC_DIR}paint/file_upload_control_painter.h",
  ${CUR_SRC_DIR}paint/filter_effect_builder.cc
  #${CUR_SRC_DIR}paint/filter_effect_builder.h",
  #${CUR_SRC_DIR}paint/find_properties_needing_update.h",
  ${CUR_SRC_DIR}paint/first_meaningful_paint_detector.cc
  #${CUR_SRC_DIR}paint/first_meaningful_paint_detector.h",
  ${CUR_SRC_DIR}paint/fragment_data.cc
  #${CUR_SRC_DIR}paint/fragment_data.h",
  #${CUR_SRC_DIR}paint/frame_paint_timing.h",
  ${CUR_SRC_DIR}paint/frame_painter.cc
  #${CUR_SRC_DIR}paint/frame_painter.h",
  ${CUR_SRC_DIR}paint/frame_set_painter.cc
  #${CUR_SRC_DIR}paint/frame_set_painter.h",
  ${CUR_SRC_DIR}paint/html_canvas_painter.cc
  #${CUR_SRC_DIR}paint/html_canvas_painter.h",
  ${CUR_SRC_DIR}paint/image_element_timing.cc
  #${CUR_SRC_DIR}paint/image_element_timing.h",
  ${CUR_SRC_DIR}paint/image_paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/image_paint_timing_detector.h",
  ${CUR_SRC_DIR}paint/image_painter.cc
  #${CUR_SRC_DIR}paint/image_painter.h",
  ${CUR_SRC_DIR}paint/inline_box_painter_base.cc
  #${CUR_SRC_DIR}paint/inline_box_painter_base.h",
  ${CUR_SRC_DIR}paint/inline_flow_box_painter.cc
  #${CUR_SRC_DIR}paint/inline_flow_box_painter.h",
  ${CUR_SRC_DIR}paint/inline_painter.cc
  #${CUR_SRC_DIR}paint/inline_painter.h",
  ${CUR_SRC_DIR}paint/inline_text_box_painter.cc
  #${CUR_SRC_DIR}paint/inline_text_box_painter.h",
  ${CUR_SRC_DIR}paint/line_box_list_painter.cc
  #${CUR_SRC_DIR}paint/line_box_list_painter.h",
  ${CUR_SRC_DIR}paint/link_highlight_impl.cc
  #${CUR_SRC_DIR}paint/link_highlight_impl.h",
  ${CUR_SRC_DIR}paint/list_item_painter.cc
  #${CUR_SRC_DIR}paint/list_item_painter.h",
  ${CUR_SRC_DIR}paint/list_marker_painter.cc
  #${CUR_SRC_DIR}paint/list_marker_painter.h",
  ${CUR_SRC_DIR}paint/multi_column_set_painter.cc
  #${CUR_SRC_DIR}paint/multi_column_set_painter.h",
  ${CUR_SRC_DIR}paint/ng/ng_box_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_box_fragment_painter.h",
  ${CUR_SRC_DIR}paint/ng/ng_fieldset_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_fieldset_painter.h",
  ${CUR_SRC_DIR}paint/ng/ng_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_fragment_painter.h",
  ${CUR_SRC_DIR}paint/ng/ng_inline_box_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_inline_box_fragment_painter.h",
  ${CUR_SRC_DIR}paint/ng/ng_paint_fragment.cc
  #${CUR_SRC_DIR}paint/ng/ng_paint_fragment.h",
  ${CUR_SRC_DIR}paint/ng/ng_paint_fragment_traversal.cc
  #${CUR_SRC_DIR}paint/ng/ng_paint_fragment_traversal.h",
  ${CUR_SRC_DIR}paint/ng/ng_text_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_text_fragment_painter.h",
  ${CUR_SRC_DIR}paint/ng/ng_text_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_text_painter.h",
  ${CUR_SRC_DIR}paint/nine_piece_image_grid.cc
  #${CUR_SRC_DIR}paint/nine_piece_image_grid.h",
  ${CUR_SRC_DIR}paint/nine_piece_image_painter.cc
  #${CUR_SRC_DIR}paint/nine_piece_image_painter.h",
  ${CUR_SRC_DIR}paint/object_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/object_paint_invalidator.h",
  #${CUR_SRC_DIR}paint/object_paint_properties.h",
  ${CUR_SRC_DIR}paint/object_painter.cc
  #${CUR_SRC_DIR}paint/object_painter.h",
  ${CUR_SRC_DIR}paint/object_painter_base.cc
  #${CUR_SRC_DIR}paint/object_painter_base.h",
  #${CUR_SRC_DIR}paint/paint_event.h",
  #${CUR_SRC_DIR}paint/paint_info.h",
  ${CUR_SRC_DIR}paint/paint_invalidator.cc
  #${CUR_SRC_DIR}paint/paint_invalidator.h",
  ${CUR_SRC_DIR}paint/paint_layer.cc
  #${CUR_SRC_DIR}paint/paint_layer.h",
  ${CUR_SRC_DIR}paint/paint_layer_clipper.cc
  #${CUR_SRC_DIR}paint/paint_layer_clipper.h",
  #${CUR_SRC_DIR}paint/paint_layer_fragment.h",
  ${CUR_SRC_DIR}paint/paint_layer_painter.cc
  #${CUR_SRC_DIR}paint/paint_layer_painter.h",
  #${CUR_SRC_DIR}paint/paint_layer_painting_info.h",
  ${CUR_SRC_DIR}paint/paint_layer_resource_info.cc
  #${CUR_SRC_DIR}paint/paint_layer_resource_info.h",
  ${CUR_SRC_DIR}paint/paint_layer_scrollable_area.cc
  #${CUR_SRC_DIR}paint/paint_layer_scrollable_area.h",
  ${CUR_SRC_DIR}paint/paint_layer_stacking_node.cc
  #${CUR_SRC_DIR}paint/paint_layer_stacking_node.h",
  ${CUR_SRC_DIR}paint/paint_layer_stacking_node_iterator.cc
  #${CUR_SRC_DIR}paint/paint_layer_stacking_node_iterator.h",
  ${CUR_SRC_DIR}paint/paint_phase.cc
  #${CUR_SRC_DIR}paint/paint_phase.h",
  ${CUR_SRC_DIR}paint/paint_property_tree_builder.cc
  #${CUR_SRC_DIR}paint/paint_property_tree_builder.h",
  ${CUR_SRC_DIR}paint/paint_property_tree_printer.cc
  #${CUR_SRC_DIR}paint/paint_property_tree_printer.h",
  #${CUR_SRC_DIR}paint/paint_result.h",
  ${CUR_SRC_DIR}paint/paint_timing.cc
  #${CUR_SRC_DIR}paint/paint_timing.h",
  ${CUR_SRC_DIR}paint/paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/paint_timing_detector.h",
  ${CUR_SRC_DIR}paint/pre_paint_tree_walk.cc
  #${CUR_SRC_DIR}paint/pre_paint_tree_walk.h",
  ${CUR_SRC_DIR}paint/replaced_painter.cc
  #${CUR_SRC_DIR}paint/replaced_painter.h",
  ${CUR_SRC_DIR}paint/root_inline_box_painter.cc
  #${CUR_SRC_DIR}paint/root_inline_box_painter.h",
  ${CUR_SRC_DIR}paint/rounded_inner_rect_clipper.cc
  #${CUR_SRC_DIR}paint/rounded_inner_rect_clipper.h",
  ${CUR_SRC_DIR}paint/scoped_paint_state.cc
  #${CUR_SRC_DIR}paint/scoped_paint_state.h",
  ${CUR_SRC_DIR}paint/scoped_svg_paint_state.cc
  #${CUR_SRC_DIR}paint/scoped_svg_paint_state.h",
  ${CUR_SRC_DIR}paint/scrollable_area_painter.cc
  #${CUR_SRC_DIR}paint/scrollable_area_painter.h",
  ${CUR_SRC_DIR}paint/scrollbar_painter.cc
  #${CUR_SRC_DIR}paint/scrollbar_painter.h",
  ${CUR_SRC_DIR}paint/selection_painting_utils.cc
  #${CUR_SRC_DIR}paint/selection_painting_utils.h",
  ${CUR_SRC_DIR}paint/svg_container_painter.cc
  #${CUR_SRC_DIR}paint/svg_container_painter.h",
  ${CUR_SRC_DIR}paint/svg_filter_painter.cc
  #${CUR_SRC_DIR}paint/svg_filter_painter.h",
  ${CUR_SRC_DIR}paint/svg_foreign_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_foreign_object_painter.h",
  ${CUR_SRC_DIR}paint/svg_image_painter.cc
  #${CUR_SRC_DIR}paint/svg_image_painter.h",
  ${CUR_SRC_DIR}paint/svg_inline_flow_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_inline_flow_box_painter.h",
  ${CUR_SRC_DIR}paint/svg_inline_text_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_inline_text_box_painter.h",
  ${CUR_SRC_DIR}paint/svg_mask_painter.cc
  #${CUR_SRC_DIR}paint/svg_mask_painter.h",
  ${CUR_SRC_DIR}paint/svg_model_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_model_object_painter.h",
  ${CUR_SRC_DIR}paint/svg_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_object_painter.h",
  ${CUR_SRC_DIR}paint/svg_root_inline_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_root_inline_box_painter.h",
  ${CUR_SRC_DIR}paint/svg_root_painter.cc
  #${CUR_SRC_DIR}paint/svg_root_painter.h",
  ${CUR_SRC_DIR}paint/svg_shape_painter.cc
  #${CUR_SRC_DIR}paint/svg_shape_painter.h",
  ${CUR_SRC_DIR}paint/svg_text_painter.cc
  #${CUR_SRC_DIR}paint/svg_text_painter.h",
  ${CUR_SRC_DIR}paint/table_cell_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/table_cell_paint_invalidator.h",
  ${CUR_SRC_DIR}paint/table_cell_painter.cc
  #${CUR_SRC_DIR}paint/table_cell_painter.h",
  ${CUR_SRC_DIR}paint/table_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/table_paint_invalidator.h",
  ${CUR_SRC_DIR}paint/table_painter.cc
  #${CUR_SRC_DIR}paint/table_painter.h",
  ${CUR_SRC_DIR}paint/table_row_painter.cc
  #${CUR_SRC_DIR}paint/table_row_painter.h",
  ${CUR_SRC_DIR}paint/table_section_painter.cc
  #${CUR_SRC_DIR}paint/table_section_painter.h",
  ${CUR_SRC_DIR}paint/text_control_single_line_painter.cc
  #${CUR_SRC_DIR}paint/text_control_single_line_painter.h",
  #${CUR_SRC_DIR}paint/text_paint_style.h",
  ${CUR_SRC_DIR}paint/text_paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/text_paint_timing_detector.h",
  ${CUR_SRC_DIR}paint/text_painter.cc
  #${CUR_SRC_DIR}paint/text_painter.h",
  ${CUR_SRC_DIR}paint/text_painter_base.cc
  #${CUR_SRC_DIR}paint/text_painter_base.h",
  ${CUR_SRC_DIR}paint/theme_painter.cc
  #${CUR_SRC_DIR}paint/theme_painter.h",
  ${CUR_SRC_DIR}paint/theme_painter_default.cc
  #${CUR_SRC_DIR}paint/theme_painter_default.h",
  #${CUR_SRC_DIR}paint/theme_painter_mac.h",
  ## TODO ## ${CUR_SRC_DIR}paint/theme_painter_mac.mm",
  ${CUR_SRC_DIR}paint/video_painter.cc
  #${CUR_SRC_DIR}paint/video_painter.h",
  ${CUR_SRC_DIR}paint/view_painter.cc
  #${CUR_SRC_DIR}paint/view_painter.h",
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
# ${CUR_OUT_DIR}css/properties/shorthands/animation.h",
#   "$blink_core_output_dir/css/properties/shorthands/background.h",
#   "$blink_core_output_dir/css/properties/shorthands/background_position.h",
#   "$blink_core_output_dir/css/properties/shorthands/background_repeat.h",
#   "$blink_core_output_dir/css/properties/shorthands/border.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_block.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_block_color.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_block_end.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_block_start.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_block_style.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_block_width.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_bottom.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_color.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_image.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_inline.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_color.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_end.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_start.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_style.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_width.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_left.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_radius.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_right.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_spacing.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_style.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_top.h",
#   "$blink_core_output_dir/css/properties/shorthands/border_width.h",
#   "$blink_core_output_dir/css/properties/shorthands/column_rule.h",
#   "$blink_core_output_dir/css/properties/shorthands/columns.h",
#   "$blink_core_output_dir/css/properties/shorthands/epub_text_emphasis.h",
#   "$blink_core_output_dir/css/properties/shorthands/flex.h",
#   "$blink_core_output_dir/css/properties/shorthands/flex_flow.h",
#   "$blink_core_output_dir/css/properties/shorthands/font.h",
#   "$blink_core_output_dir/css/properties/shorthands/font_variant.h",
#   "$blink_core_output_dir/css/properties/shorthands/gap.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_area.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_column.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_column_gap.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_row_gap.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_gap.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_row.h",
#   "$blink_core_output_dir/css/properties/shorthands/grid_template.h",
#   "$blink_core_output_dir/css/properties/shorthands/inset.h",
#   "$blink_core_output_dir/css/properties/shorthands/inset_block.h",
#   "$blink_core_output_dir/css/properties/shorthands/inset_inline.h",
#   "$blink_core_output_dir/css/properties/shorthands/list_style.h",
#   "$blink_core_output_dir/css/properties/shorthands/margin.h",
#   "$blink_core_output_dir/css/properties/shorthands/margin_block.h",
#   "$blink_core_output_dir/css/properties/shorthands/margin_inline.h",
#   "$blink_core_output_dir/css/properties/shorthands/marker.h",
#   "$blink_core_output_dir/css/properties/shorthands/offset.h",
#   "$blink_core_output_dir/css/properties/shorthands/outline.h",
#   "$blink_core_output_dir/css/properties/shorthands/overflow.h",
#   "$blink_core_output_dir/css/properties/shorthands/overscroll_behavior.h",
#   "$blink_core_output_dir/css/properties/shorthands/padding.h",
#   "$blink_core_output_dir/css/properties/shorthands/padding_block.h",
#   "$blink_core_output_dir/css/properties/shorthands/padding_inline.h",
#   "$blink_core_output_dir/css/properties/shorthands/page_break_after.h",
#   "$blink_core_output_dir/css/properties/shorthands/page_break_before.h",
#   "$blink_core_output_dir/css/properties/shorthands/page_break_inside.h",
#   "$blink_core_output_dir/css/properties/shorthands/place_content.h",
#   "$blink_core_output_dir/css/properties/shorthands/place_items.h",
#   "$blink_core_output_dir/css/properties/shorthands/place_self.h",
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin.h",
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin_block.h",
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin_inline.h",
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding.h",
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding_block.h",
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding_inline.h",
#   "$blink_core_output_dir/css/properties/shorthands/text_decoration.h",
#   "$blink_core_output_dir/css/properties/shorthands/transition.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_animation.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_after.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_before.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_end.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_radius.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_start.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_after.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_before.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_inside.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_rule.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_columns.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_flex.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_flex_flow.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_margin_collapse.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_box_image.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_position.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_repeat.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_text_emphasis.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_text_stroke.h",
#   "$blink_core_output_dir/css/properties/shorthands/webkit_transition.h",
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

add_library(BLINK_RENDERER_CORE STATIC
  ${BLINK_RENDERER_CORE_PAINT_SOURCES}
  ${BLINK_RENDERER_CORE_EVENT_SOURCES}
  ${BLINK_RENDERER_CORE_STYLE_SOURCES}
  ${BLINK_RENDERER_CORE_CSS_SOURCES}
  ${BLINK_RENDERER_CORE_LONGHANDS_SOURCES}
  ${BLINK_RENDERER_CORE_property_names_SOURCES}
  ${BLINK_RENDERER_CORE_atrule_SOURCES}
  ${BLINK_RENDERER_CORE_style_property_shorthand_SOURCES}
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
  skcms
  ced
  # emoji-segmenter
  # webrtc
  # zlib
  # icu
  CC
  #G_GPU
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
