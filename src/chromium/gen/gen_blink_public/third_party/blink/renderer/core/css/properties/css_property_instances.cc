// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_instances.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5

// clang-format off

#include "third_party/blink/renderer/core/css/properties/css_property_instances.h"

#include "third_party/blink/renderer/core/css/properties/longhands/variable.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_composite.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_top_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/all.h"
#include "third_party/blink/renderer/core/css/properties/longhands/caption_side.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_property.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_shrink.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_logical_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_inline_start_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_repeat_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_repeat_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/box_shadow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_size_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/resize.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_block_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_slice.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_weight.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_before_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_basis.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_source.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_font_size_delta.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_justify.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_appearance.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_play_state.h"
#include "third_party/blink/renderer/core/css/properties/longhands/letter_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/empty_cells.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_before.h"
#include "third_party/blink/renderer/core/css/properties/longhands/perspective.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_combine.h"
#include "third_party/blink/renderer/core/css/properties/longhands/touch_action.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_block_start_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_caps.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_family.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective_origin_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_clip_path.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_bottom_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_max_logical_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_word_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_block_start_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_margin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_ruby_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/vector_effect.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_anchor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/marker_mid.h"
#include "third_party/blink/renderer/core/css/properties/longhands/dominant_baseline.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_display.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_start_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/unicode_bidi.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_backface_visibility.h"
#include "third_party/blink/renderer/core/css/properties/longhands/src.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_snap_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/visibility.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_name.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_background_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_left_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_linejoin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_emphasis_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/counter_reset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_repeat.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_miterlimit.h"
#include "third_party/blink/renderer/core/css/properties/longhands/list_style_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_property.h"
#include "third_party/blink/renderer/core/css/properties/longhands/word_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_gap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_offset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/justify_items.h"
#include "third_party/blink/renderer/core/css/properties/longhands/object_fit.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_anchor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_stroke_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flood_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_bottom_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overscroll_behavior_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/order.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_rows.h"
#include "third_party/blink/renderer/core/css/properties/longhands/justify_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_background_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin_z.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_repeat.h"
#include "third_party/blink/renderer/core/css/properties/longhands/justify_self.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_start_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/inset_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_after_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_east_asian.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_emphasis_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_feature_settings.h"
#include "third_party/blink/renderer/core/css/properties/longhands/hyphens.h"
#include "third_party/blink/renderer/core/css/properties/longhands/will_change.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_numeric.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/pointer_events.h"
#include "third_party/blink/renderer/core/css/properties/longhands/marker_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_behavior.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_basis.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/lighting_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_emphasis_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/table_layout.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_inline_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_line_clamp.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_block_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/unicode_range.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_user_modify.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_indent.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_shape_margin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/rx.h"
#include "third_party/blink/renderer/core/css/properties/longhands/ry.h"
#include "third_party/blink/renderer/core/css/properties/longhands/content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/caret_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_right_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_top_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/backdrop_filter.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_after_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_line.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_slice.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variation_settings.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_distance.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/filter.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_font_feature_settings.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_blend_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_outset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_user_select.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_rotate.h"
#include "third_party/blink/renderer/core/css/properties/longhands/size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_min_logical_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_security.h"
#include "third_party/blink/renderer/core/css/properties/longhands/line_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_top_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clip_rule.h"
#include "third_party/blink/renderer/core/css/properties/longhands/align_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_outside.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_app_region.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_after_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/backface_visibility.h"
#include "third_party/blink/renderer/core/css/properties/longhands/isolation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/word_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/r.h"
#include "third_party/blink/renderer/core/css/properties/longhands/fill_rule.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_before_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_attachment.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_dasharray.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stop_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_column_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/inset_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_sizing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_inline_start_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_areas.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_order.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_fill_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_rule_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_box_image_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_iteration_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mask_source_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clear.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_shape_image_threshold.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_inline_end_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_emphasis_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_inline_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_user_drag.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_inline_start_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/fill_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overscroll_behavior_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_before.h"
#include "third_party/blink/renderer/core/css/properties/longhands/line_height_step.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/user_zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_after.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_right_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_right_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color_interpolation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_shrink.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_right_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/marker_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_start_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_snap_stop.h"
#include "third_party/blink/renderer/core/css/properties/longhands/align_self.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_grow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_left_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/orphans.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_before_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/contain.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_align_self.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_background_clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_block_end_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform_origin_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/align_items.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_filter.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/z_index.h"
#include "third_party/blink/renderer/core/css/properties/longhands/clip_path.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_combine_upright.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_span.h"
#include "third_party/blink/renderer/core/css/properties/longhands/baseline_shift.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_align_items.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_name.h"
#include "third_party/blink/renderer/core/css/properties/longhands/x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_underline_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_print_color_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_orient.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_stroke_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_position_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_rule_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/cy.h"
#include "third_party/blink/renderer/core/css/properties/longhands/cx.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_writing_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_line_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/speak.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_delay.h"
#include "third_party/blink/renderer/core/css/properties/longhands/break_after.h"
#include "third_party/blink/renderer/core/css/properties/longhands/tab_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_position_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_position_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_block_start_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_end_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_reflect.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_max_logical_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_shape_outside.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_align_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flood_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/cursor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_vertical_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_block_end_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/margin_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_margin_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_rule_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_dashoffset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_align_last.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_anchor.h"
#include "third_party/blink/renderer/core/css/properties/longhands/flex_grow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_outset.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_end_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_text_emphasis_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_before_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_rule_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_rule_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_auto_flow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_columns.h"
#include "third_party/blink/renderer/core/css/properties/longhands/alignment_baseline.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_fill_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/counter_increment.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_writing_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_image_source.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_position_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/object_position.h"
#include "third_party/blink/renderer/core/css/properties/longhands/y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_customization.h"
#include "third_party/blink/renderer/core/css/properties/longhands/white_space.h"
#include "third_party/blink/renderer/core/css/properties/longhands/left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_rule_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective_origin_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/quotes.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/image_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/paint_order.h"
#include "third_party/blink/renderer/core/css/properties/longhands/image_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/buffered_rendering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_row_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/list_style_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_rtl_ordering.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_flex_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_horizontal_spacing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_shadow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/epub_caption_side.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_fill_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_direction.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/rotate.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_auto_rows.h"
#include "third_party/blink/renderer/core/css/properties/longhands/d.h"
#include "third_party/blink/renderer/core/css/properties/longhands/shape_image_threshold.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_padding_after.h"
#include "third_party/blink/renderer/core/css/properties/longhands/zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/row_gap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_span.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/break_before.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_bottom_left_radius.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_top_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/page.h"
#include "third_party/blink/renderer/core/css/properties/longhands/right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/inline_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_ordinal_group.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_highlight.h"
#include "third_party/blink/renderer/core/css/properties/longhands/color_interpolation_filters.h"
#include "third_party/blink/renderer/core/css/properties/longhands/word_wrap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/writing_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_left_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/block_size.h"
#include "third_party/blink/renderer/core/css/properties/longhands/bottom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_kerning.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_transition_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_size_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_shadow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/outline_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_locale.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/overflow_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_combine.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_block_end_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_variant_ligatures.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mix_blend_mode.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_pack.h"
#include "third_party/blink/renderer/core/css/properties/longhands/line_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/list_style_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_flex.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_box_decoration_break.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_auto_columns.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_column_gap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_snap_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_hyphenate_character.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mask_type.h"
#include "third_party/blink/renderer/core/css/properties/longhands/float.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_bottom_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transition_duration.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_padding_block_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_iteration_count.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_justify_content.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform.h"
#include "third_party/blink/renderer/core/css/properties/longhands/width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_logical_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_left.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_column_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/translate.h"
#include "third_party/blink/renderer/core/css/properties/longhands/break_inside.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_decoration_skip_ink.h"
#include "third_party/blink/renderer/core/css/properties/longhands/grid_row_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_block_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/vertical_align.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stop_opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_inline_end_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/column_fill.h"
#include "third_party/blink/renderer/core/css/properties/longhands/inset_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_repeat_x.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_repeat_y.h"
#include "third_party/blink/renderer/core/css/properties/longhands/offset_path.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_decorations_in_effect.h"
#include "third_party/blink/renderer/core/css/properties/longhands/stroke_linecap.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_collapse.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_top.h"
#include "third_party/blink/renderer/core/css/properties/longhands/background_clip.h"
#include "third_party/blink/renderer/core/css/properties/longhands/display.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scroll_margin_right.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_end_width.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_min_logical_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/widows.h"
#include "third_party/blink/renderer/core/css/properties/longhands/fill.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_perspective.h"
#include "third_party/blink/renderer/core/css/properties/longhands/padding_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_orientation.h"
#include "third_party/blink/renderer/core/css/properties/longhands/transform_box.h"
#include "third_party/blink/renderer/core/css/properties/longhands/border_inline_end_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/viewport_fit.h"
#include "third_party/blink/renderer/core/css/properties/longhands/text_overflow.h"
#include "third_party/blink/renderer/core/css/properties/longhands/animation_play_state.h"
#include "third_party/blink/renderer/core/css/properties/longhands/box_sizing.h"
#include "third_party/blink/renderer/core/css/properties/longhands/user_select.h"
#include "third_party/blink/renderer/core/css/properties/longhands/opacity.h"
#include "third_party/blink/renderer/core/css/properties/longhands/inset_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/longhands/font_stretch.h"
#include "third_party/blink/renderer/core/css/properties/longhands/min_height.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_mask_image.h"
#include "third_party/blink/renderer/core/css/properties/longhands/scale.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_tap_highlight_color.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_text_size_adjust.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_border_after_style.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_animation_timing_function.h"
#include "third_party/blink/renderer/core/css/properties/longhands/perspective_origin.h"
#include "third_party/blink/renderer/core/css/properties/longhands/mask.h"
#include "third_party/blink/renderer/core/css/properties/longhands/max_zoom.h"
#include "third_party/blink/renderer/core/css/properties/longhands/webkit_font_smoothing.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_style.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/place_self.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_margin.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_row_gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_block_start.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_block_style.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_end.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/columns.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/flex.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_row.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_padding_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/background.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_margin_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_start.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_inline_end.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask_position.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_inline_start.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/page_break_before.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/background_repeat.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_right.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/margin_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_text_stroke.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_width.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/font.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_break_inside.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_column.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_inline_style.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_color.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_top.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/inset_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/offset.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_bottom.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/text_decoration.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_padding.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/background_position.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_spacing.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/transition.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_transition.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask_box_image.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_inline_color.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_after.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/flex_flow.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_block_width.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_image.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_radius.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/marker.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/page_break_after.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_radius.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_animation.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_rule.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_text_emphasis.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_area.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_flex_flow.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/list_style.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/padding.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/margin_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/overflow.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/column_rule.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_margin_collapse.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_border_before.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_break_before.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/inset_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_column_gap.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_block_color.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/padding_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/margin.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_mask_repeat.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/font_variant.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_block_end.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/place_items.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/padding_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_columns.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/overscroll_behavior.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/animation.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/page_break_inside.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/epub_text_emphasis.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_padding_block.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/grid_template.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_column_break_after.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/webkit_flex.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_left.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_inline_width.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/scroll_margin_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/outline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/inset.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/border_inline.h"
#include "third_party/blink/renderer/core/css/properties/shorthands/place_content.h"

namespace blink {
namespace {

static constexpr css_longhand::AnimationDelay property_csspropertyanimationdelay;
static constexpr css_longhand::AnimationDirection property_csspropertyanimationdirection;
static constexpr css_longhand::AnimationDuration property_csspropertyanimationduration;
static constexpr css_longhand::AnimationFillMode property_csspropertyanimationfillmode;
static constexpr css_longhand::AnimationIterationCount property_csspropertyanimationiterationcount;
static constexpr css_longhand::AnimationName property_csspropertyanimationname;
static constexpr css_longhand::AnimationPlayState property_csspropertyanimationplaystate;
static constexpr css_longhand::AnimationTimingFunction property_csspropertyanimationtimingfunction;
static constexpr css_longhand::TransitionDelay property_csspropertytransitiondelay;
static constexpr css_longhand::TransitionDuration property_csspropertytransitionduration;
static constexpr css_longhand::TransitionProperty property_csspropertytransitionproperty;
static constexpr css_longhand::TransitionTimingFunction property_csspropertytransitiontimingfunction;
static constexpr css_longhand::Color property_csspropertycolor;
static constexpr css_longhand::Direction property_csspropertydirection;
static constexpr css_longhand::FontFamily property_csspropertyfontfamily;
static constexpr css_longhand::FontFeatureSettings property_csspropertyfontfeaturesettings;
static constexpr css_longhand::FontKerning property_csspropertyfontkerning;
static constexpr css_longhand::FontSize property_csspropertyfontsize;
static constexpr css_longhand::FontSizeAdjust property_csspropertyfontsizeadjust;
static constexpr css_longhand::FontStretch property_csspropertyfontstretch;
static constexpr css_longhand::FontStyle property_csspropertyfontstyle;
static constexpr css_longhand::FontVariantCaps property_csspropertyfontvariantcaps;
static constexpr css_longhand::FontVariantEastAsian property_csspropertyfontvarianteastasian;
static constexpr css_longhand::FontVariantLigatures property_csspropertyfontvariantligatures;
static constexpr css_longhand::FontVariantNumeric property_csspropertyfontvariantnumeric;
static constexpr css_longhand::FontVariationSettings property_csspropertyfontvariationsettings;
static constexpr css_longhand::FontWeight property_csspropertyfontweight;
static constexpr css_longhand::TextOrientation property_csspropertytextorientation;
static constexpr css_longhand::TextRendering property_csspropertytextrendering;
static constexpr css_longhand::WebkitFontSmoothing property_csspropertywebkitfontsmoothing;
static constexpr css_longhand::WebkitLocale property_csspropertywebkitlocale;
static constexpr css_longhand::WebkitTextOrientation property_csspropertywebkittextorientation;
static constexpr css_longhand::WebkitWritingMode property_csspropertywebkitwritingmode;
static constexpr css_longhand::WritingMode property_csspropertywritingmode;
static constexpr css_longhand::Zoom property_csspropertyzoom;
static constexpr css_longhand::AlignContent property_csspropertyaligncontent;
static constexpr css_longhand::AlignItems property_csspropertyalignitems;
static constexpr css_longhand::AlignSelf property_csspropertyalignself;
static constexpr css_longhand::AlignmentBaseline property_csspropertyalignmentbaseline;
static constexpr css_longhand::All property_csspropertyall;
static constexpr css_longhand::BackdropFilter property_csspropertybackdropfilter;
static constexpr css_longhand::BackfaceVisibility property_csspropertybackfacevisibility;
static constexpr css_longhand::BackgroundAttachment property_csspropertybackgroundattachment;
static constexpr css_longhand::BackgroundBlendMode property_csspropertybackgroundblendmode;
static constexpr css_longhand::BackgroundClip property_csspropertybackgroundclip;
static constexpr css_longhand::BackgroundColor property_csspropertybackgroundcolor;
static constexpr css_longhand::BackgroundImage property_csspropertybackgroundimage;
static constexpr css_longhand::BackgroundOrigin property_csspropertybackgroundorigin;
static constexpr css_longhand::BackgroundPositionX property_csspropertybackgroundpositionx;
static constexpr css_longhand::BackgroundPositionY property_csspropertybackgroundpositiony;
static constexpr css_longhand::BackgroundRepeatX property_csspropertybackgroundrepeatx;
static constexpr css_longhand::BackgroundRepeatY property_csspropertybackgroundrepeaty;
static constexpr css_longhand::BackgroundSize property_csspropertybackgroundsize;
static constexpr css_longhand::BaselineShift property_csspropertybaselineshift;
static constexpr css_longhand::BlockSize property_csspropertyblocksize;
static constexpr css_longhand::BorderBlockEndColor property_csspropertyborderblockendcolor;
static constexpr css_longhand::BorderBlockEndStyle property_csspropertyborderblockendstyle;
static constexpr css_longhand::BorderBlockEndWidth property_csspropertyborderblockendwidth;
static constexpr css_longhand::BorderBlockStartColor property_csspropertyborderblockstartcolor;
static constexpr css_longhand::BorderBlockStartStyle property_csspropertyborderblockstartstyle;
static constexpr css_longhand::BorderBlockStartWidth property_csspropertyborderblockstartwidth;
static constexpr css_longhand::BorderBottomColor property_csspropertyborderbottomcolor;
static constexpr css_longhand::BorderBottomLeftRadius property_csspropertyborderbottomleftradius;
static constexpr css_longhand::BorderBottomRightRadius property_csspropertyborderbottomrightradius;
static constexpr css_longhand::BorderBottomStyle property_csspropertyborderbottomstyle;
static constexpr css_longhand::BorderBottomWidth property_csspropertyborderbottomwidth;
static constexpr css_longhand::BorderCollapse property_csspropertybordercollapse;
static constexpr css_longhand::BorderImageOutset property_csspropertyborderimageoutset;
static constexpr css_longhand::BorderImageRepeat property_csspropertyborderimagerepeat;
static constexpr css_longhand::BorderImageSlice property_csspropertyborderimageslice;
static constexpr css_longhand::BorderImageSource property_csspropertyborderimagesource;
static constexpr css_longhand::BorderImageWidth property_csspropertyborderimagewidth;
static constexpr css_longhand::BorderInlineEndColor property_csspropertyborderinlineendcolor;
static constexpr css_longhand::BorderInlineEndStyle property_csspropertyborderinlineendstyle;
static constexpr css_longhand::BorderInlineEndWidth property_csspropertyborderinlineendwidth;
static constexpr css_longhand::BorderInlineStartColor property_csspropertyborderinlinestartcolor;
static constexpr css_longhand::BorderInlineStartStyle property_csspropertyborderinlinestartstyle;
static constexpr css_longhand::BorderInlineStartWidth property_csspropertyborderinlinestartwidth;
static constexpr css_longhand::BorderLeftColor property_csspropertyborderleftcolor;
static constexpr css_longhand::BorderLeftStyle property_csspropertyborderleftstyle;
static constexpr css_longhand::BorderLeftWidth property_csspropertyborderleftwidth;
static constexpr css_longhand::BorderRightColor property_csspropertyborderrightcolor;
static constexpr css_longhand::BorderRightStyle property_csspropertyborderrightstyle;
static constexpr css_longhand::BorderRightWidth property_csspropertyborderrightwidth;
static constexpr css_longhand::BorderTopColor property_csspropertybordertopcolor;
static constexpr css_longhand::BorderTopLeftRadius property_csspropertybordertopleftradius;
static constexpr css_longhand::BorderTopRightRadius property_csspropertybordertoprightradius;
static constexpr css_longhand::BorderTopStyle property_csspropertybordertopstyle;
static constexpr css_longhand::BorderTopWidth property_csspropertybordertopwidth;
static constexpr css_longhand::Bottom property_csspropertybottom;
static constexpr css_longhand::BoxShadow property_csspropertyboxshadow;
static constexpr css_longhand::BoxSizing property_csspropertyboxsizing;
static constexpr css_longhand::BreakAfter property_csspropertybreakafter;
static constexpr css_longhand::BreakBefore property_csspropertybreakbefore;
static constexpr css_longhand::BreakInside property_csspropertybreakinside;
static constexpr css_longhand::BufferedRendering property_csspropertybufferedrendering;
static constexpr css_longhand::CaptionSide property_csspropertycaptionside;
static constexpr css_longhand::CaretColor property_csspropertycaretcolor;
static constexpr css_longhand::Clear property_csspropertyclear;
static constexpr css_longhand::Clip property_csspropertyclip;
static constexpr css_longhand::ClipPath property_csspropertyclippath;
static constexpr css_longhand::ClipRule property_csspropertycliprule;
static constexpr css_longhand::ColorInterpolation property_csspropertycolorinterpolation;
static constexpr css_longhand::ColorInterpolationFilters property_csspropertycolorinterpolationfilters;
static constexpr css_longhand::ColorRendering property_csspropertycolorrendering;
static constexpr css_longhand::ColumnCount property_csspropertycolumncount;
static constexpr css_longhand::ColumnFill property_csspropertycolumnfill;
static constexpr css_longhand::ColumnGap property_csspropertycolumngap;
static constexpr css_longhand::ColumnRuleColor property_csspropertycolumnrulecolor;
static constexpr css_longhand::ColumnRuleStyle property_csspropertycolumnrulestyle;
static constexpr css_longhand::ColumnRuleWidth property_csspropertycolumnrulewidth;
static constexpr css_longhand::ColumnSpan property_csspropertycolumnspan;
static constexpr css_longhand::ColumnWidth property_csspropertycolumnwidth;
static constexpr css_longhand::Contain property_csspropertycontain;
static constexpr css_longhand::Content property_csspropertycontent;
static constexpr css_longhand::CounterIncrement property_csspropertycounterincrement;
static constexpr css_longhand::CounterReset property_csspropertycounterreset;
static constexpr css_longhand::Cursor property_csspropertycursor;
static constexpr css_longhand::Cx property_csspropertycx;
static constexpr css_longhand::Cy property_csspropertycy;
static constexpr css_longhand::D property_csspropertyd;
static constexpr css_longhand::Display property_csspropertydisplay;
static constexpr css_longhand::DominantBaseline property_csspropertydominantbaseline;
static constexpr css_longhand::EmptyCells property_csspropertyemptycells;
static constexpr css_longhand::Fill property_csspropertyfill;
static constexpr css_longhand::FillOpacity property_csspropertyfillopacity;
static constexpr css_longhand::FillRule property_csspropertyfillrule;
static constexpr css_longhand::Filter property_csspropertyfilter;
static constexpr css_longhand::FlexBasis property_csspropertyflexbasis;
static constexpr css_longhand::FlexDirection property_csspropertyflexdirection;
static constexpr css_longhand::FlexGrow property_csspropertyflexgrow;
static constexpr css_longhand::FlexShrink property_csspropertyflexshrink;
static constexpr css_longhand::FlexWrap property_csspropertyflexwrap;
static constexpr css_longhand::Float property_csspropertyfloat;
static constexpr css_longhand::FloodColor property_csspropertyfloodcolor;
static constexpr css_longhand::FloodOpacity property_csspropertyfloodopacity;
static constexpr css_longhand::FontDisplay property_csspropertyfontdisplay;
static constexpr css_longhand::GridAutoColumns property_csspropertygridautocolumns;
static constexpr css_longhand::GridAutoFlow property_csspropertygridautoflow;
static constexpr css_longhand::GridAutoRows property_csspropertygridautorows;
static constexpr css_longhand::GridColumnEnd property_csspropertygridcolumnend;
static constexpr css_longhand::GridColumnStart property_csspropertygridcolumnstart;
static constexpr css_longhand::GridRowEnd property_csspropertygridrowend;
static constexpr css_longhand::GridRowStart property_csspropertygridrowstart;
static constexpr css_longhand::GridTemplateAreas property_csspropertygridtemplateareas;
static constexpr css_longhand::GridTemplateColumns property_csspropertygridtemplatecolumns;
static constexpr css_longhand::GridTemplateRows property_csspropertygridtemplaterows;
static constexpr css_longhand::Height property_csspropertyheight;
static constexpr css_longhand::Hyphens property_csspropertyhyphens;
static constexpr css_longhand::ImageOrientation property_csspropertyimageorientation;
static constexpr css_longhand::ImageRendering property_csspropertyimagerendering;
static constexpr css_longhand::InlineSize property_csspropertyinlinesize;
static constexpr css_longhand::InsetBlockEnd property_csspropertyinsetblockend;
static constexpr css_longhand::InsetBlockStart property_csspropertyinsetblockstart;
static constexpr css_longhand::InsetInlineEnd property_csspropertyinsetinlineend;
static constexpr css_longhand::InsetInlineStart property_csspropertyinsetinlinestart;
static constexpr css_longhand::Isolation property_csspropertyisolation;
static constexpr css_longhand::JustifyContent property_csspropertyjustifycontent;
static constexpr css_longhand::JustifyItems property_csspropertyjustifyitems;
static constexpr css_longhand::JustifySelf property_csspropertyjustifyself;
static constexpr css_longhand::Left property_csspropertyleft;
static constexpr css_longhand::LetterSpacing property_csspropertyletterspacing;
static constexpr css_longhand::LightingColor property_csspropertylightingcolor;
static constexpr css_longhand::LineBreak property_csspropertylinebreak;
static constexpr css_longhand::LineHeight property_csspropertylineheight;
static constexpr css_longhand::LineHeightStep property_csspropertylineheightstep;
static constexpr css_longhand::ListStyleImage property_csspropertyliststyleimage;
static constexpr css_longhand::ListStylePosition property_csspropertyliststyleposition;
static constexpr css_longhand::ListStyleType property_csspropertyliststyletype;
static constexpr css_longhand::MarginBlockEnd property_csspropertymarginblockend;
static constexpr css_longhand::MarginBlockStart property_csspropertymarginblockstart;
static constexpr css_longhand::MarginBottom property_csspropertymarginbottom;
static constexpr css_longhand::MarginInlineEnd property_csspropertymargininlineend;
static constexpr css_longhand::MarginInlineStart property_csspropertymargininlinestart;
static constexpr css_longhand::MarginLeft property_csspropertymarginleft;
static constexpr css_longhand::MarginRight property_csspropertymarginright;
static constexpr css_longhand::MarginTop property_csspropertymargintop;
static constexpr css_longhand::MarkerEnd property_csspropertymarkerend;
static constexpr css_longhand::MarkerMid property_csspropertymarkermid;
static constexpr css_longhand::MarkerStart property_csspropertymarkerstart;
static constexpr css_longhand::Mask property_csspropertymask;
static constexpr css_longhand::MaskSourceType property_csspropertymasksourcetype;
static constexpr css_longhand::MaskType property_csspropertymasktype;
static constexpr css_longhand::MaxBlockSize property_csspropertymaxblocksize;
static constexpr css_longhand::MaxHeight property_csspropertymaxheight;
static constexpr css_longhand::MaxInlineSize property_csspropertymaxinlinesize;
static constexpr css_longhand::MaxWidth property_csspropertymaxwidth;
static constexpr css_longhand::MaxZoom property_csspropertymaxzoom;
static constexpr css_longhand::MinBlockSize property_csspropertyminblocksize;
static constexpr css_longhand::MinHeight property_csspropertyminheight;
static constexpr css_longhand::MinInlineSize property_csspropertymininlinesize;
static constexpr css_longhand::MinWidth property_csspropertyminwidth;
static constexpr css_longhand::MinZoom property_csspropertyminzoom;
static constexpr css_longhand::MixBlendMode property_csspropertymixblendmode;
static constexpr css_longhand::ObjectFit property_csspropertyobjectfit;
static constexpr css_longhand::ObjectPosition property_csspropertyobjectposition;
static constexpr css_longhand::OffsetAnchor property_csspropertyoffsetanchor;
static constexpr css_longhand::OffsetDistance property_csspropertyoffsetdistance;
static constexpr css_longhand::OffsetPath property_csspropertyoffsetpath;
static constexpr css_longhand::OffsetPosition property_csspropertyoffsetposition;
static constexpr css_longhand::OffsetRotate property_csspropertyoffsetrotate;
static constexpr css_longhand::Opacity property_csspropertyopacity;
static constexpr css_longhand::Order property_csspropertyorder;
static constexpr css_longhand::Orientation property_csspropertyorientation;
static constexpr css_longhand::Orphans property_csspropertyorphans;
static constexpr css_longhand::OutlineColor property_csspropertyoutlinecolor;
static constexpr css_longhand::OutlineOffset property_csspropertyoutlineoffset;
static constexpr css_longhand::OutlineStyle property_csspropertyoutlinestyle;
static constexpr css_longhand::OutlineWidth property_csspropertyoutlinewidth;
static constexpr css_longhand::OverflowAnchor property_csspropertyoverflowanchor;
static constexpr css_longhand::OverflowWrap property_csspropertyoverflowwrap;
static constexpr css_longhand::OverflowX property_csspropertyoverflowx;
static constexpr css_longhand::OverflowY property_csspropertyoverflowy;
static constexpr css_longhand::OverscrollBehaviorX property_csspropertyoverscrollbehaviorx;
static constexpr css_longhand::OverscrollBehaviorY property_csspropertyoverscrollbehaviory;
static constexpr css_longhand::PaddingBlockEnd property_csspropertypaddingblockend;
static constexpr css_longhand::PaddingBlockStart property_csspropertypaddingblockstart;
static constexpr css_longhand::PaddingBottom property_csspropertypaddingbottom;
static constexpr css_longhand::PaddingInlineEnd property_csspropertypaddinginlineend;
static constexpr css_longhand::PaddingInlineStart property_csspropertypaddinginlinestart;
static constexpr css_longhand::PaddingLeft property_csspropertypaddingleft;
static constexpr css_longhand::PaddingRight property_csspropertypaddingright;
static constexpr css_longhand::PaddingTop property_csspropertypaddingtop;
static constexpr css_longhand::Page property_csspropertypage;
static constexpr css_longhand::PaintOrder property_csspropertypaintorder;
static constexpr css_longhand::Perspective property_csspropertyperspective;
static constexpr css_longhand::PerspectiveOrigin property_csspropertyperspectiveorigin;
static constexpr css_longhand::PointerEvents property_csspropertypointerevents;
static constexpr css_longhand::Position property_csspropertyposition;
static constexpr css_longhand::Quotes property_csspropertyquotes;
static constexpr css_longhand::R property_csspropertyr;
static constexpr css_longhand::Resize property_csspropertyresize;
static constexpr css_longhand::Right property_csspropertyright;
static constexpr css_longhand::Rotate property_csspropertyrotate;
static constexpr css_longhand::RowGap property_csspropertyrowgap;
static constexpr css_longhand::Rx property_csspropertyrx;
static constexpr css_longhand::Ry property_csspropertyry;
static constexpr css_longhand::Scale property_csspropertyscale;
static constexpr css_longhand::ScrollBehavior property_csspropertyscrollbehavior;
static constexpr css_longhand::ScrollCustomization property_csspropertyscrollcustomization;
static constexpr css_longhand::ScrollMarginBlockEnd property_csspropertyscrollmarginblockend;
static constexpr css_longhand::ScrollMarginBlockStart property_csspropertyscrollmarginblockstart;
static constexpr css_longhand::ScrollMarginBottom property_csspropertyscrollmarginbottom;
static constexpr css_longhand::ScrollMarginInlineEnd property_csspropertyscrollmargininlineend;
static constexpr css_longhand::ScrollMarginInlineStart property_csspropertyscrollmargininlinestart;
static constexpr css_longhand::ScrollMarginLeft property_csspropertyscrollmarginleft;
static constexpr css_longhand::ScrollMarginRight property_csspropertyscrollmarginright;
static constexpr css_longhand::ScrollMarginTop property_csspropertyscrollmargintop;
static constexpr css_longhand::ScrollPaddingBlockEnd property_csspropertyscrollpaddingblockend;
static constexpr css_longhand::ScrollPaddingBlockStart property_csspropertyscrollpaddingblockstart;
static constexpr css_longhand::ScrollPaddingBottom property_csspropertyscrollpaddingbottom;
static constexpr css_longhand::ScrollPaddingInlineEnd property_csspropertyscrollpaddinginlineend;
static constexpr css_longhand::ScrollPaddingInlineStart property_csspropertyscrollpaddinginlinestart;
static constexpr css_longhand::ScrollPaddingLeft property_csspropertyscrollpaddingleft;
static constexpr css_longhand::ScrollPaddingRight property_csspropertyscrollpaddingright;
static constexpr css_longhand::ScrollPaddingTop property_csspropertyscrollpaddingtop;
static constexpr css_longhand::ScrollSnapAlign property_csspropertyscrollsnapalign;
static constexpr css_longhand::ScrollSnapStop property_csspropertyscrollsnapstop;
static constexpr css_longhand::ScrollSnapType property_csspropertyscrollsnaptype;
static constexpr css_longhand::ShapeImageThreshold property_csspropertyshapeimagethreshold;
static constexpr css_longhand::ShapeMargin property_csspropertyshapemargin;
static constexpr css_longhand::ShapeOutside property_csspropertyshapeoutside;
static constexpr css_longhand::ShapeRendering property_csspropertyshaperendering;
static constexpr css_longhand::Size property_csspropertysize;
static constexpr css_longhand::Speak property_csspropertyspeak;
static constexpr css_longhand::Src property_csspropertysrc;
static constexpr css_longhand::StopColor property_csspropertystopcolor;
static constexpr css_longhand::StopOpacity property_csspropertystopopacity;
static constexpr css_longhand::Stroke property_csspropertystroke;
static constexpr css_longhand::StrokeDasharray property_csspropertystrokedasharray;
static constexpr css_longhand::StrokeDashoffset property_csspropertystrokedashoffset;
static constexpr css_longhand::StrokeLinecap property_csspropertystrokelinecap;
static constexpr css_longhand::StrokeLinejoin property_csspropertystrokelinejoin;
static constexpr css_longhand::StrokeMiterlimit property_csspropertystrokemiterlimit;
static constexpr css_longhand::StrokeOpacity property_csspropertystrokeopacity;
static constexpr css_longhand::StrokeWidth property_csspropertystrokewidth;
static constexpr css_longhand::TabSize property_csspropertytabsize;
static constexpr css_longhand::TableLayout property_csspropertytablelayout;
static constexpr css_longhand::TextAlign property_csspropertytextalign;
static constexpr css_longhand::TextAlignLast property_csspropertytextalignlast;
static constexpr css_longhand::TextAnchor property_csspropertytextanchor;
static constexpr css_longhand::TextCombineUpright property_csspropertytextcombineupright;
static constexpr css_longhand::TextDecorationColor property_csspropertytextdecorationcolor;
static constexpr css_longhand::TextDecorationLine property_csspropertytextdecorationline;
static constexpr css_longhand::TextDecorationSkipInk property_csspropertytextdecorationskipink;
static constexpr css_longhand::TextDecorationStyle property_csspropertytextdecorationstyle;
static constexpr css_longhand::TextIndent property_csspropertytextindent;
static constexpr css_longhand::TextJustify property_csspropertytextjustify;
static constexpr css_longhand::TextOverflow property_csspropertytextoverflow;
static constexpr css_longhand::TextShadow property_csspropertytextshadow;
static constexpr css_longhand::TextSizeAdjust property_csspropertytextsizeadjust;
static constexpr css_longhand::TextTransform property_csspropertytexttransform;
static constexpr css_longhand::TextUnderlinePosition property_csspropertytextunderlineposition;
static constexpr css_longhand::Top property_csspropertytop;
static constexpr css_longhand::TouchAction property_csspropertytouchaction;
static constexpr css_longhand::Transform property_csspropertytransform;
static constexpr css_longhand::TransformBox property_csspropertytransformbox;
static constexpr css_longhand::TransformOrigin property_csspropertytransformorigin;
static constexpr css_longhand::TransformStyle property_csspropertytransformstyle;
static constexpr css_longhand::Translate property_csspropertytranslate;
static constexpr css_longhand::UnicodeBidi property_csspropertyunicodebidi;
static constexpr css_longhand::UnicodeRange property_csspropertyunicoderange;
static constexpr css_longhand::UserSelect property_csspropertyuserselect;
static constexpr css_longhand::UserZoom property_csspropertyuserzoom;
static constexpr css_longhand::VectorEffect property_csspropertyvectoreffect;
static constexpr css_longhand::VerticalAlign property_csspropertyverticalalign;
static constexpr css_longhand::ViewportFit property_csspropertyviewportfit;
static constexpr css_longhand::Visibility property_csspropertyvisibility;
static constexpr css_longhand::WebkitAppRegion property_csspropertywebkitappregion;
static constexpr css_longhand::WebkitAppearance property_csspropertywebkitappearance;
static constexpr css_longhand::WebkitBorderHorizontalSpacing property_csspropertywebkitborderhorizontalspacing;
static constexpr css_longhand::WebkitBorderImage property_csspropertywebkitborderimage;
static constexpr css_longhand::WebkitBorderVerticalSpacing property_csspropertywebkitborderverticalspacing;
static constexpr css_longhand::WebkitBoxAlign property_csspropertywebkitboxalign;
static constexpr css_longhand::WebkitBoxDecorationBreak property_csspropertywebkitboxdecorationbreak;
static constexpr css_longhand::WebkitBoxDirection property_csspropertywebkitboxdirection;
static constexpr css_longhand::WebkitBoxFlex property_csspropertywebkitboxflex;
static constexpr css_longhand::WebkitBoxOrdinalGroup property_csspropertywebkitboxordinalgroup;
static constexpr css_longhand::WebkitBoxOrient property_csspropertywebkitboxorient;
static constexpr css_longhand::WebkitBoxPack property_csspropertywebkitboxpack;
static constexpr css_longhand::WebkitBoxReflect property_csspropertywebkitboxreflect;
static constexpr css_longhand::WebkitFontSizeDelta property_csspropertywebkitfontsizedelta;
static constexpr css_longhand::WebkitHighlight property_csspropertywebkithighlight;
static constexpr css_longhand::WebkitHyphenateCharacter property_csspropertywebkithyphenatecharacter;
static constexpr css_longhand::WebkitLineBreak property_csspropertywebkitlinebreak;
static constexpr css_longhand::WebkitLineClamp property_csspropertywebkitlineclamp;
static constexpr css_longhand::WebkitMarginAfterCollapse property_csspropertywebkitmarginaftercollapse;
static constexpr css_longhand::WebkitMarginBeforeCollapse property_csspropertywebkitmarginbeforecollapse;
static constexpr css_longhand::WebkitMarginBottomCollapse property_csspropertywebkitmarginbottomcollapse;
static constexpr css_longhand::WebkitMarginTopCollapse property_csspropertywebkitmargintopcollapse;
static constexpr css_longhand::WebkitMaskBoxImageOutset property_csspropertywebkitmaskboximageoutset;
static constexpr css_longhand::WebkitMaskBoxImageRepeat property_csspropertywebkitmaskboximagerepeat;
static constexpr css_longhand::WebkitMaskBoxImageSlice property_csspropertywebkitmaskboximageslice;
static constexpr css_longhand::WebkitMaskBoxImageSource property_csspropertywebkitmaskboximagesource;
static constexpr css_longhand::WebkitMaskBoxImageWidth property_csspropertywebkitmaskboximagewidth;
static constexpr css_longhand::WebkitMaskClip property_csspropertywebkitmaskclip;
static constexpr css_longhand::WebkitMaskComposite property_csspropertywebkitmaskcomposite;
static constexpr css_longhand::WebkitMaskImage property_csspropertywebkitmaskimage;
static constexpr css_longhand::WebkitMaskOrigin property_csspropertywebkitmaskorigin;
static constexpr css_longhand::WebkitMaskPositionX property_csspropertywebkitmaskpositionx;
static constexpr css_longhand::WebkitMaskPositionY property_csspropertywebkitmaskpositiony;
static constexpr css_longhand::WebkitMaskRepeatX property_csspropertywebkitmaskrepeatx;
static constexpr css_longhand::WebkitMaskRepeatY property_csspropertywebkitmaskrepeaty;
static constexpr css_longhand::WebkitMaskSize property_csspropertywebkitmasksize;
static constexpr css_longhand::WebkitPerspectiveOriginX property_csspropertywebkitperspectiveoriginx;
static constexpr css_longhand::WebkitPerspectiveOriginY property_csspropertywebkitperspectiveoriginy;
static constexpr css_longhand::WebkitPrintColorAdjust property_csspropertywebkitprintcoloradjust;
static constexpr css_longhand::WebkitRtlOrdering property_csspropertywebkitrtlordering;
static constexpr css_longhand::WebkitRubyPosition property_csspropertywebkitrubyposition;
static constexpr css_longhand::WebkitTapHighlightColor property_csspropertywebkittaphighlightcolor;
static constexpr css_longhand::WebkitTextCombine property_csspropertywebkittextcombine;
static constexpr css_longhand::WebkitTextDecorationsInEffect property_csspropertywebkittextdecorationsineffect;
static constexpr css_longhand::WebkitTextEmphasisColor property_csspropertywebkittextemphasiscolor;
static constexpr css_longhand::WebkitTextEmphasisPosition property_csspropertywebkittextemphasisposition;
static constexpr css_longhand::WebkitTextEmphasisStyle property_csspropertywebkittextemphasisstyle;
static constexpr css_longhand::WebkitTextFillColor property_csspropertywebkittextfillcolor;
static constexpr css_longhand::WebkitTextSecurity property_csspropertywebkittextsecurity;
static constexpr css_longhand::WebkitTextStrokeColor property_csspropertywebkittextstrokecolor;
static constexpr css_longhand::WebkitTextStrokeWidth property_csspropertywebkittextstrokewidth;
static constexpr css_longhand::WebkitTransformOriginX property_csspropertywebkittransformoriginx;
static constexpr css_longhand::WebkitTransformOriginY property_csspropertywebkittransformoriginy;
static constexpr css_longhand::WebkitTransformOriginZ property_csspropertywebkittransformoriginz;
static constexpr css_longhand::WebkitUserDrag property_csspropertywebkituserdrag;
static constexpr css_longhand::WebkitUserModify property_csspropertywebkitusermodify;
static constexpr css_longhand::WhiteSpace property_csspropertywhitespace;
static constexpr css_longhand::Widows property_csspropertywidows;
static constexpr css_longhand::Width property_csspropertywidth;
static constexpr css_longhand::WillChange property_csspropertywillchange;
static constexpr css_longhand::WordBreak property_csspropertywordbreak;
static constexpr css_longhand::WordSpacing property_csspropertywordspacing;
static constexpr css_longhand::X property_csspropertyx;
static constexpr css_longhand::Y property_csspropertyy;
static constexpr css_longhand::ZIndex property_csspropertyzindex;
static constexpr css_shorthand::Animation property_csspropertyanimation;
static constexpr css_shorthand::Background property_csspropertybackground;
static constexpr css_shorthand::BackgroundPosition property_csspropertybackgroundposition;
static constexpr css_shorthand::BackgroundRepeat property_csspropertybackgroundrepeat;
static constexpr css_shorthand::Border property_csspropertyborder;
static constexpr css_shorthand::BorderBlock property_csspropertyborderblock;
static constexpr css_shorthand::BorderBlockColor property_csspropertyborderblockcolor;
static constexpr css_shorthand::BorderBlockEnd property_csspropertyborderblockend;
static constexpr css_shorthand::BorderBlockStart property_csspropertyborderblockstart;
static constexpr css_shorthand::BorderBlockStyle property_csspropertyborderblockstyle;
static constexpr css_shorthand::BorderBlockWidth property_csspropertyborderblockwidth;
static constexpr css_shorthand::BorderBottom property_csspropertyborderbottom;
static constexpr css_shorthand::BorderColor property_csspropertybordercolor;
static constexpr css_shorthand::BorderImage property_csspropertyborderimage;
static constexpr css_shorthand::BorderInline property_csspropertyborderinline;
static constexpr css_shorthand::BorderInlineColor property_csspropertyborderinlinecolor;
static constexpr css_shorthand::BorderInlineEnd property_csspropertyborderinlineend;
static constexpr css_shorthand::BorderInlineStart property_csspropertyborderinlinestart;
static constexpr css_shorthand::BorderInlineStyle property_csspropertyborderinlinestyle;
static constexpr css_shorthand::BorderInlineWidth property_csspropertyborderinlinewidth;
static constexpr css_shorthand::BorderLeft property_csspropertyborderleft;
static constexpr css_shorthand::BorderRadius property_csspropertyborderradius;
static constexpr css_shorthand::BorderRight property_csspropertyborderright;
static constexpr css_shorthand::BorderSpacing property_csspropertyborderspacing;
static constexpr css_shorthand::BorderStyle property_csspropertyborderstyle;
static constexpr css_shorthand::BorderTop property_csspropertybordertop;
static constexpr css_shorthand::BorderWidth property_csspropertyborderwidth;
static constexpr css_shorthand::ColumnRule property_csspropertycolumnrule;
static constexpr css_shorthand::Columns property_csspropertycolumns;
static constexpr css_shorthand::Flex property_csspropertyflex;
static constexpr css_shorthand::FlexFlow property_csspropertyflexflow;
static constexpr css_shorthand::Font property_csspropertyfont;
static constexpr css_shorthand::FontVariant property_csspropertyfontvariant;
static constexpr css_shorthand::Gap property_csspropertygap;
static constexpr css_shorthand::Grid property_csspropertygrid;
static constexpr css_shorthand::GridArea property_csspropertygridarea;
static constexpr css_shorthand::GridColumn property_csspropertygridcolumn;
static constexpr css_shorthand::GridColumnGap property_csspropertygridcolumngap;
static constexpr css_shorthand::GridGap property_csspropertygridgap;
static constexpr css_shorthand::GridRow property_csspropertygridrow;
static constexpr css_shorthand::GridRowGap property_csspropertygridrowgap;
static constexpr css_shorthand::GridTemplate property_csspropertygridtemplate;
static constexpr css_shorthand::Inset property_csspropertyinset;
static constexpr css_shorthand::InsetBlock property_csspropertyinsetblock;
static constexpr css_shorthand::InsetInline property_csspropertyinsetinline;
static constexpr css_shorthand::ListStyle property_csspropertyliststyle;
static constexpr css_shorthand::Margin property_csspropertymargin;
static constexpr css_shorthand::MarginBlock property_csspropertymarginblock;
static constexpr css_shorthand::MarginInline property_csspropertymargininline;
static constexpr css_shorthand::Marker property_csspropertymarker;
static constexpr css_shorthand::Offset property_csspropertyoffset;
static constexpr css_shorthand::Outline property_csspropertyoutline;
static constexpr css_shorthand::Overflow property_csspropertyoverflow;
static constexpr css_shorthand::OverscrollBehavior property_csspropertyoverscrollbehavior;
static constexpr css_shorthand::Padding property_csspropertypadding;
static constexpr css_shorthand::PaddingBlock property_csspropertypaddingblock;
static constexpr css_shorthand::PaddingInline property_csspropertypaddinginline;
static constexpr css_shorthand::PageBreakAfter property_csspropertypagebreakafter;
static constexpr css_shorthand::PageBreakBefore property_csspropertypagebreakbefore;
static constexpr css_shorthand::PageBreakInside property_csspropertypagebreakinside;
static constexpr css_shorthand::PlaceContent property_csspropertyplacecontent;
static constexpr css_shorthand::PlaceItems property_csspropertyplaceitems;
static constexpr css_shorthand::PlaceSelf property_csspropertyplaceself;
static constexpr css_shorthand::ScrollMargin property_csspropertyscrollmargin;
static constexpr css_shorthand::ScrollMarginBlock property_csspropertyscrollmarginblock;
static constexpr css_shorthand::ScrollMarginInline property_csspropertyscrollmargininline;
static constexpr css_shorthand::ScrollPadding property_csspropertyscrollpadding;
static constexpr css_shorthand::ScrollPaddingBlock property_csspropertyscrollpaddingblock;
static constexpr css_shorthand::ScrollPaddingInline property_csspropertyscrollpaddinginline;
static constexpr css_shorthand::TextDecoration property_csspropertytextdecoration;
static constexpr css_shorthand::Transition property_csspropertytransition;
static constexpr css_shorthand::WebkitColumnBreakAfter property_csspropertywebkitcolumnbreakafter;
static constexpr css_shorthand::WebkitColumnBreakBefore property_csspropertywebkitcolumnbreakbefore;
static constexpr css_shorthand::WebkitColumnBreakInside property_csspropertywebkitcolumnbreakinside;
static constexpr css_shorthand::WebkitMarginCollapse property_csspropertywebkitmargincollapse;
static constexpr css_shorthand::WebkitMask property_csspropertywebkitmask;
static constexpr css_shorthand::WebkitMaskBoxImage property_csspropertywebkitmaskboximage;
static constexpr css_shorthand::WebkitMaskPosition property_csspropertywebkitmaskposition;
static constexpr css_shorthand::WebkitMaskRepeat property_csspropertywebkitmaskrepeat;
static constexpr css_shorthand::WebkitTextEmphasis property_csspropertywebkittextemphasis;
static constexpr css_shorthand::WebkitTextStroke property_csspropertywebkittextstroke;
static constexpr css_longhand::WebkitAnimationDelay property_csspropertyaliaswebkitanimationdelay;
static constexpr css_longhand::WebkitAnimationDirection property_csspropertyaliaswebkitanimationdirection;
static constexpr css_longhand::WebkitAnimationDuration property_csspropertyaliaswebkitanimationduration;
static constexpr css_longhand::WebkitAnimationFillMode property_csspropertyaliaswebkitanimationfillmode;
static constexpr css_longhand::WebkitAnimationIterationCount property_csspropertyaliaswebkitanimationiterationcount;
static constexpr css_longhand::WebkitAnimationName property_csspropertyaliaswebkitanimationname;
static constexpr css_longhand::WebkitAnimationPlayState property_csspropertyaliaswebkitanimationplaystate;
static constexpr css_longhand::WebkitAnimationTimingFunction property_csspropertyaliaswebkitanimationtimingfunction;
static constexpr css_longhand::WebkitTransitionDelay property_csspropertyaliaswebkittransitiondelay;
static constexpr css_longhand::WebkitTransitionDuration property_csspropertyaliaswebkittransitionduration;
static constexpr css_longhand::WebkitTransitionProperty property_csspropertyaliaswebkittransitionproperty;
static constexpr css_longhand::WebkitTransitionTimingFunction property_csspropertyaliaswebkittransitiontimingfunction;
static constexpr css_longhand::WebkitFontFeatureSettings property_csspropertyaliaswebkitfontfeaturesettings;
static constexpr css_longhand::EpubTextOrientation property_csspropertyaliasepubtextorientation;
static constexpr css_longhand::EpubWritingMode property_csspropertyaliasepubwritingmode;
static constexpr css_longhand::WebkitAlignContent property_csspropertyaliaswebkitaligncontent;
static constexpr css_longhand::WebkitAlignItems property_csspropertyaliaswebkitalignitems;
static constexpr css_longhand::WebkitAlignSelf property_csspropertyaliaswebkitalignself;
static constexpr css_longhand::WebkitBackfaceVisibility property_csspropertyaliaswebkitbackfacevisibility;
static constexpr css_longhand::WebkitBackgroundClip property_csspropertyaliaswebkitbackgroundclip;
static constexpr css_longhand::WebkitBackgroundOrigin property_csspropertyaliaswebkitbackgroundorigin;
static constexpr css_longhand::WebkitBackgroundSize property_csspropertyaliaswebkitbackgroundsize;
static constexpr css_longhand::WebkitLogicalHeight property_csspropertyaliaswebkitlogicalheight;
static constexpr css_longhand::WebkitBorderAfterColor property_csspropertyaliaswebkitborderaftercolor;
static constexpr css_longhand::WebkitBorderAfterStyle property_csspropertyaliaswebkitborderafterstyle;
static constexpr css_longhand::WebkitBorderAfterWidth property_csspropertyaliaswebkitborderafterwidth;
static constexpr css_longhand::WebkitBorderBeforeColor property_csspropertyaliaswebkitborderbeforecolor;
static constexpr css_longhand::WebkitBorderBeforeStyle property_csspropertyaliaswebkitborderbeforestyle;
static constexpr css_longhand::WebkitBorderBeforeWidth property_csspropertyaliaswebkitborderbeforewidth;
static constexpr css_longhand::WebkitBorderBottomLeftRadius property_csspropertyaliaswebkitborderbottomleftradius;
static constexpr css_longhand::WebkitBorderBottomRightRadius property_csspropertyaliaswebkitborderbottomrightradius;
static constexpr css_longhand::WebkitBorderEndColor property_csspropertyaliaswebkitborderendcolor;
static constexpr css_longhand::WebkitBorderEndStyle property_csspropertyaliaswebkitborderendstyle;
static constexpr css_longhand::WebkitBorderEndWidth property_csspropertyaliaswebkitborderendwidth;
static constexpr css_longhand::WebkitBorderStartColor property_csspropertyaliaswebkitborderstartcolor;
static constexpr css_longhand::WebkitBorderStartStyle property_csspropertyaliaswebkitborderstartstyle;
static constexpr css_longhand::WebkitBorderStartWidth property_csspropertyaliaswebkitborderstartwidth;
static constexpr css_longhand::WebkitBorderTopLeftRadius property_csspropertyaliaswebkitbordertopleftradius;
static constexpr css_longhand::WebkitBorderTopRightRadius property_csspropertyaliaswebkitbordertoprightradius;
static constexpr css_longhand::WebkitBoxShadow property_csspropertyaliaswebkitboxshadow;
static constexpr css_longhand::WebkitBoxSizing property_csspropertyaliaswebkitboxsizing;
static constexpr css_longhand::EpubCaptionSide property_csspropertyaliasepubcaptionside;
static constexpr css_longhand::WebkitClipPath property_csspropertyaliaswebkitclippath;
static constexpr css_longhand::WebkitColumnCount property_csspropertyaliaswebkitcolumncount;
static constexpr css_longhand::WebkitColumnGap property_csspropertyaliaswebkitcolumngap;
static constexpr css_longhand::WebkitColumnRuleColor property_csspropertyaliaswebkitcolumnrulecolor;
static constexpr css_longhand::WebkitColumnRuleStyle property_csspropertyaliaswebkitcolumnrulestyle;
static constexpr css_longhand::WebkitColumnRuleWidth property_csspropertyaliaswebkitcolumnrulewidth;
static constexpr css_longhand::WebkitColumnSpan property_csspropertyaliaswebkitcolumnspan;
static constexpr css_longhand::WebkitColumnWidth property_csspropertyaliaswebkitcolumnwidth;
static constexpr css_longhand::WebkitFilter property_csspropertyaliaswebkitfilter;
static constexpr css_longhand::WebkitFlexBasis property_csspropertyaliaswebkitflexbasis;
static constexpr css_longhand::WebkitFlexDirection property_csspropertyaliaswebkitflexdirection;
static constexpr css_longhand::WebkitFlexGrow property_csspropertyaliaswebkitflexgrow;
static constexpr css_longhand::WebkitFlexShrink property_csspropertyaliaswebkitflexshrink;
static constexpr css_longhand::WebkitFlexWrap property_csspropertyaliaswebkitflexwrap;
static constexpr css_longhand::WebkitLogicalWidth property_csspropertyaliaswebkitlogicalwidth;
static constexpr css_longhand::WebkitJustifyContent property_csspropertyaliaswebkitjustifycontent;
static constexpr css_longhand::WebkitMarginAfter property_csspropertyaliaswebkitmarginafter;
static constexpr css_longhand::WebkitMarginBefore property_csspropertyaliaswebkitmarginbefore;
static constexpr css_longhand::WebkitMarginEnd property_csspropertyaliaswebkitmarginend;
static constexpr css_longhand::WebkitMarginStart property_csspropertyaliaswebkitmarginstart;
static constexpr css_longhand::WebkitMaxLogicalHeight property_csspropertyaliaswebkitmaxlogicalheight;
static constexpr css_longhand::WebkitMaxLogicalWidth property_csspropertyaliaswebkitmaxlogicalwidth;
static constexpr css_longhand::WebkitMinLogicalHeight property_csspropertyaliaswebkitminlogicalheight;
static constexpr css_longhand::WebkitMinLogicalWidth property_csspropertyaliaswebkitminlogicalwidth;
static constexpr css_longhand::WebkitOpacity property_csspropertyaliaswebkitopacity;
static constexpr css_longhand::WebkitOrder property_csspropertyaliaswebkitorder;
static constexpr css_longhand::WordWrap property_csspropertyaliaswordwrap;
static constexpr css_longhand::WebkitPaddingAfter property_csspropertyaliaswebkitpaddingafter;
static constexpr css_longhand::WebkitPaddingBefore property_csspropertyaliaswebkitpaddingbefore;
static constexpr css_longhand::WebkitPaddingEnd property_csspropertyaliaswebkitpaddingend;
static constexpr css_longhand::WebkitPaddingStart property_csspropertyaliaswebkitpaddingstart;
static constexpr css_longhand::WebkitPerspective property_csspropertyaliaswebkitperspective;
static constexpr css_longhand::WebkitPerspectiveOrigin property_csspropertyaliaswebkitperspectiveorigin;
static constexpr css_longhand::WebkitShapeImageThreshold property_csspropertyaliaswebkitshapeimagethreshold;
static constexpr css_longhand::WebkitShapeMargin property_csspropertyaliaswebkitshapemargin;
static constexpr css_longhand::WebkitShapeOutside property_csspropertyaliaswebkitshapeoutside;
static constexpr css_longhand::WebkitTextSizeAdjust property_csspropertyaliaswebkittextsizeadjust;
static constexpr css_longhand::EpubTextTransform property_csspropertyaliasepubtexttransform;
static constexpr css_longhand::WebkitTransform property_csspropertyaliaswebkittransform;
static constexpr css_longhand::WebkitTransformOrigin property_csspropertyaliaswebkittransformorigin;
static constexpr css_longhand::WebkitTransformStyle property_csspropertyaliaswebkittransformstyle;
static constexpr css_longhand::WebkitUserSelect property_csspropertyaliaswebkituserselect;
static constexpr css_longhand::EpubTextCombine property_csspropertyaliasepubtextcombine;
static constexpr css_longhand::EpubTextEmphasisColor property_csspropertyaliasepubtextemphasiscolor;
static constexpr css_longhand::EpubTextEmphasisStyle property_csspropertyaliasepubtextemphasisstyle;
static constexpr css_longhand::EpubWordBreak property_csspropertyaliasepubwordbreak;
static constexpr css_shorthand::WebkitAnimation property_csspropertyaliaswebkitanimation;
static constexpr css_shorthand::WebkitBorderAfter property_csspropertyaliaswebkitborderafter;
static constexpr css_shorthand::WebkitBorderBefore property_csspropertyaliaswebkitborderbefore;
static constexpr css_shorthand::WebkitBorderEnd property_csspropertyaliaswebkitborderend;
static constexpr css_shorthand::WebkitBorderStart property_csspropertyaliaswebkitborderstart;
static constexpr css_shorthand::WebkitBorderRadius property_csspropertyaliaswebkitborderradius;
static constexpr css_shorthand::WebkitColumnRule property_csspropertyaliaswebkitcolumnrule;
static constexpr css_shorthand::WebkitColumns property_csspropertyaliaswebkitcolumns;
static constexpr css_shorthand::WebkitFlex property_csspropertyaliaswebkitflex;
static constexpr css_shorthand::WebkitFlexFlow property_csspropertyaliaswebkitflexflow;
static constexpr css_shorthand::WebkitTransition property_csspropertyaliaswebkittransition;
static constexpr css_shorthand::EpubTextEmphasis property_csspropertyaliasepubtextemphasis;

} // namespace

const CSSProperty& GetCSSPropertyAnimationDelay() {
  return property_csspropertyanimationdelay;
}
const CSSProperty& GetCSSPropertyAnimationDirection() {
  return property_csspropertyanimationdirection;
}
const CSSProperty& GetCSSPropertyAnimationDuration() {
  return property_csspropertyanimationduration;
}
const CSSProperty& GetCSSPropertyAnimationFillMode() {
  return property_csspropertyanimationfillmode;
}
const CSSProperty& GetCSSPropertyAnimationIterationCount() {
  return property_csspropertyanimationiterationcount;
}
const CSSProperty& GetCSSPropertyAnimationName() {
  return property_csspropertyanimationname;
}
const CSSProperty& GetCSSPropertyAnimationPlayState() {
  return property_csspropertyanimationplaystate;
}
const CSSProperty& GetCSSPropertyAnimationTimingFunction() {
  return property_csspropertyanimationtimingfunction;
}
const CSSProperty& GetCSSPropertyTransitionDelay() {
  return property_csspropertytransitiondelay;
}
const CSSProperty& GetCSSPropertyTransitionDuration() {
  return property_csspropertytransitionduration;
}
const CSSProperty& GetCSSPropertyTransitionProperty() {
  return property_csspropertytransitionproperty;
}
const CSSProperty& GetCSSPropertyTransitionTimingFunction() {
  return property_csspropertytransitiontimingfunction;
}
const CSSProperty& GetCSSPropertyColor() {
  return property_csspropertycolor;
}
const CSSProperty& GetCSSPropertyDirection() {
  return property_csspropertydirection;
}
const CSSProperty& GetCSSPropertyFontFamily() {
  return property_csspropertyfontfamily;
}
const CSSProperty& GetCSSPropertyFontFeatureSettings() {
  return property_csspropertyfontfeaturesettings;
}
const CSSProperty& GetCSSPropertyFontKerning() {
  return property_csspropertyfontkerning;
}
const CSSProperty& GetCSSPropertyFontSize() {
  return property_csspropertyfontsize;
}
const CSSProperty& GetCSSPropertyFontSizeAdjust() {
  return property_csspropertyfontsizeadjust;
}
const CSSProperty& GetCSSPropertyFontStretch() {
  return property_csspropertyfontstretch;
}
const CSSProperty& GetCSSPropertyFontStyle() {
  return property_csspropertyfontstyle;
}
const CSSProperty& GetCSSPropertyFontVariantCaps() {
  return property_csspropertyfontvariantcaps;
}
const CSSProperty& GetCSSPropertyFontVariantEastAsian() {
  return property_csspropertyfontvarianteastasian;
}
const CSSProperty& GetCSSPropertyFontVariantLigatures() {
  return property_csspropertyfontvariantligatures;
}
const CSSProperty& GetCSSPropertyFontVariantNumeric() {
  return property_csspropertyfontvariantnumeric;
}
const CSSProperty& GetCSSPropertyFontVariationSettings() {
  return property_csspropertyfontvariationsettings;
}
const CSSProperty& GetCSSPropertyFontWeight() {
  return property_csspropertyfontweight;
}
const CSSProperty& GetCSSPropertyTextOrientation() {
  return property_csspropertytextorientation;
}
const CSSProperty& GetCSSPropertyTextRendering() {
  return property_csspropertytextrendering;
}
const CSSProperty& GetCSSPropertyWebkitFontSmoothing() {
  return property_csspropertywebkitfontsmoothing;
}
const CSSProperty& GetCSSPropertyWebkitLocale() {
  return property_csspropertywebkitlocale;
}
const CSSProperty& GetCSSPropertyWebkitTextOrientation() {
  return property_csspropertywebkittextorientation;
}
const CSSProperty& GetCSSPropertyWebkitWritingMode() {
  return property_csspropertywebkitwritingmode;
}
const CSSProperty& GetCSSPropertyWritingMode() {
  return property_csspropertywritingmode;
}
const CSSProperty& GetCSSPropertyZoom() {
  return property_csspropertyzoom;
}
const CSSProperty& GetCSSPropertyAlignContent() {
  return property_csspropertyaligncontent;
}
const CSSProperty& GetCSSPropertyAlignItems() {
  return property_csspropertyalignitems;
}
const CSSProperty& GetCSSPropertyAlignSelf() {
  return property_csspropertyalignself;
}
const CSSProperty& GetCSSPropertyAlignmentBaseline() {
  return property_csspropertyalignmentbaseline;
}
const CSSProperty& GetCSSPropertyAll() {
  return property_csspropertyall;
}
const CSSProperty& GetCSSPropertyBackdropFilter() {
  return property_csspropertybackdropfilter;
}
const CSSProperty& GetCSSPropertyBackfaceVisibility() {
  return property_csspropertybackfacevisibility;
}
const CSSProperty& GetCSSPropertyBackgroundAttachment() {
  return property_csspropertybackgroundattachment;
}
const CSSProperty& GetCSSPropertyBackgroundBlendMode() {
  return property_csspropertybackgroundblendmode;
}
const CSSProperty& GetCSSPropertyBackgroundClip() {
  return property_csspropertybackgroundclip;
}
const CSSProperty& GetCSSPropertyBackgroundColor() {
  return property_csspropertybackgroundcolor;
}
const CSSProperty& GetCSSPropertyBackgroundImage() {
  return property_csspropertybackgroundimage;
}
const CSSProperty& GetCSSPropertyBackgroundOrigin() {
  return property_csspropertybackgroundorigin;
}
const CSSProperty& GetCSSPropertyBackgroundPositionX() {
  return property_csspropertybackgroundpositionx;
}
const CSSProperty& GetCSSPropertyBackgroundPositionY() {
  return property_csspropertybackgroundpositiony;
}
const CSSProperty& GetCSSPropertyBackgroundRepeatX() {
  return property_csspropertybackgroundrepeatx;
}
const CSSProperty& GetCSSPropertyBackgroundRepeatY() {
  return property_csspropertybackgroundrepeaty;
}
const CSSProperty& GetCSSPropertyBackgroundSize() {
  return property_csspropertybackgroundsize;
}
const CSSProperty& GetCSSPropertyBaselineShift() {
  return property_csspropertybaselineshift;
}
const CSSProperty& GetCSSPropertyBlockSize() {
  return property_csspropertyblocksize;
}
const CSSProperty& GetCSSPropertyBorderBlockEndColor() {
  return property_csspropertyborderblockendcolor;
}
const CSSProperty& GetCSSPropertyBorderBlockEndStyle() {
  return property_csspropertyborderblockendstyle;
}
const CSSProperty& GetCSSPropertyBorderBlockEndWidth() {
  return property_csspropertyborderblockendwidth;
}
const CSSProperty& GetCSSPropertyBorderBlockStartColor() {
  return property_csspropertyborderblockstartcolor;
}
const CSSProperty& GetCSSPropertyBorderBlockStartStyle() {
  return property_csspropertyborderblockstartstyle;
}
const CSSProperty& GetCSSPropertyBorderBlockStartWidth() {
  return property_csspropertyborderblockstartwidth;
}
const CSSProperty& GetCSSPropertyBorderBottomColor() {
  return property_csspropertyborderbottomcolor;
}
const CSSProperty& GetCSSPropertyBorderBottomLeftRadius() {
  return property_csspropertyborderbottomleftradius;
}
const CSSProperty& GetCSSPropertyBorderBottomRightRadius() {
  return property_csspropertyborderbottomrightradius;
}
const CSSProperty& GetCSSPropertyBorderBottomStyle() {
  return property_csspropertyborderbottomstyle;
}
const CSSProperty& GetCSSPropertyBorderBottomWidth() {
  return property_csspropertyborderbottomwidth;
}
const CSSProperty& GetCSSPropertyBorderCollapse() {
  return property_csspropertybordercollapse;
}
const CSSProperty& GetCSSPropertyBorderImageOutset() {
  return property_csspropertyborderimageoutset;
}
const CSSProperty& GetCSSPropertyBorderImageRepeat() {
  return property_csspropertyborderimagerepeat;
}
const CSSProperty& GetCSSPropertyBorderImageSlice() {
  return property_csspropertyborderimageslice;
}
const CSSProperty& GetCSSPropertyBorderImageSource() {
  return property_csspropertyborderimagesource;
}
const CSSProperty& GetCSSPropertyBorderImageWidth() {
  return property_csspropertyborderimagewidth;
}
const CSSProperty& GetCSSPropertyBorderInlineEndColor() {
  return property_csspropertyborderinlineendcolor;
}
const CSSProperty& GetCSSPropertyBorderInlineEndStyle() {
  return property_csspropertyborderinlineendstyle;
}
const CSSProperty& GetCSSPropertyBorderInlineEndWidth() {
  return property_csspropertyborderinlineendwidth;
}
const CSSProperty& GetCSSPropertyBorderInlineStartColor() {
  return property_csspropertyborderinlinestartcolor;
}
const CSSProperty& GetCSSPropertyBorderInlineStartStyle() {
  return property_csspropertyborderinlinestartstyle;
}
const CSSProperty& GetCSSPropertyBorderInlineStartWidth() {
  return property_csspropertyborderinlinestartwidth;
}
const CSSProperty& GetCSSPropertyBorderLeftColor() {
  return property_csspropertyborderleftcolor;
}
const CSSProperty& GetCSSPropertyBorderLeftStyle() {
  return property_csspropertyborderleftstyle;
}
const CSSProperty& GetCSSPropertyBorderLeftWidth() {
  return property_csspropertyborderleftwidth;
}
const CSSProperty& GetCSSPropertyBorderRightColor() {
  return property_csspropertyborderrightcolor;
}
const CSSProperty& GetCSSPropertyBorderRightStyle() {
  return property_csspropertyborderrightstyle;
}
const CSSProperty& GetCSSPropertyBorderRightWidth() {
  return property_csspropertyborderrightwidth;
}
const CSSProperty& GetCSSPropertyBorderTopColor() {
  return property_csspropertybordertopcolor;
}
const CSSProperty& GetCSSPropertyBorderTopLeftRadius() {
  return property_csspropertybordertopleftradius;
}
const CSSProperty& GetCSSPropertyBorderTopRightRadius() {
  return property_csspropertybordertoprightradius;
}
const CSSProperty& GetCSSPropertyBorderTopStyle() {
  return property_csspropertybordertopstyle;
}
const CSSProperty& GetCSSPropertyBorderTopWidth() {
  return property_csspropertybordertopwidth;
}
const CSSProperty& GetCSSPropertyBottom() {
  return property_csspropertybottom;
}
const CSSProperty& GetCSSPropertyBoxShadow() {
  return property_csspropertyboxshadow;
}
const CSSProperty& GetCSSPropertyBoxSizing() {
  return property_csspropertyboxsizing;
}
const CSSProperty& GetCSSPropertyBreakAfter() {
  return property_csspropertybreakafter;
}
const CSSProperty& GetCSSPropertyBreakBefore() {
  return property_csspropertybreakbefore;
}
const CSSProperty& GetCSSPropertyBreakInside() {
  return property_csspropertybreakinside;
}
const CSSProperty& GetCSSPropertyBufferedRendering() {
  return property_csspropertybufferedrendering;
}
const CSSProperty& GetCSSPropertyCaptionSide() {
  return property_csspropertycaptionside;
}
const CSSProperty& GetCSSPropertyCaretColor() {
  return property_csspropertycaretcolor;
}
const CSSProperty& GetCSSPropertyClear() {
  return property_csspropertyclear;
}
const CSSProperty& GetCSSPropertyClip() {
  return property_csspropertyclip;
}
const CSSProperty& GetCSSPropertyClipPath() {
  return property_csspropertyclippath;
}
const CSSProperty& GetCSSPropertyClipRule() {
  return property_csspropertycliprule;
}
const CSSProperty& GetCSSPropertyColorInterpolation() {
  return property_csspropertycolorinterpolation;
}
const CSSProperty& GetCSSPropertyColorInterpolationFilters() {
  return property_csspropertycolorinterpolationfilters;
}
const CSSProperty& GetCSSPropertyColorRendering() {
  return property_csspropertycolorrendering;
}
const CSSProperty& GetCSSPropertyColumnCount() {
  return property_csspropertycolumncount;
}
const CSSProperty& GetCSSPropertyColumnFill() {
  return property_csspropertycolumnfill;
}
const CSSProperty& GetCSSPropertyColumnGap() {
  return property_csspropertycolumngap;
}
const CSSProperty& GetCSSPropertyColumnRuleColor() {
  return property_csspropertycolumnrulecolor;
}
const CSSProperty& GetCSSPropertyColumnRuleStyle() {
  return property_csspropertycolumnrulestyle;
}
const CSSProperty& GetCSSPropertyColumnRuleWidth() {
  return property_csspropertycolumnrulewidth;
}
const CSSProperty& GetCSSPropertyColumnSpan() {
  return property_csspropertycolumnspan;
}
const CSSProperty& GetCSSPropertyColumnWidth() {
  return property_csspropertycolumnwidth;
}
const CSSProperty& GetCSSPropertyContain() {
  return property_csspropertycontain;
}
const CSSProperty& GetCSSPropertyContent() {
  return property_csspropertycontent;
}
const CSSProperty& GetCSSPropertyCounterIncrement() {
  return property_csspropertycounterincrement;
}
const CSSProperty& GetCSSPropertyCounterReset() {
  return property_csspropertycounterreset;
}
const CSSProperty& GetCSSPropertyCursor() {
  return property_csspropertycursor;
}
const CSSProperty& GetCSSPropertyCx() {
  return property_csspropertycx;
}
const CSSProperty& GetCSSPropertyCy() {
  return property_csspropertycy;
}
const CSSProperty& GetCSSPropertyD() {
  return property_csspropertyd;
}
const CSSProperty& GetCSSPropertyDisplay() {
  return property_csspropertydisplay;
}
const CSSProperty& GetCSSPropertyDominantBaseline() {
  return property_csspropertydominantbaseline;
}
const CSSProperty& GetCSSPropertyEmptyCells() {
  return property_csspropertyemptycells;
}
const CSSProperty& GetCSSPropertyFill() {
  return property_csspropertyfill;
}
const CSSProperty& GetCSSPropertyFillOpacity() {
  return property_csspropertyfillopacity;
}
const CSSProperty& GetCSSPropertyFillRule() {
  return property_csspropertyfillrule;
}
const CSSProperty& GetCSSPropertyFilter() {
  return property_csspropertyfilter;
}
const CSSProperty& GetCSSPropertyFlexBasis() {
  return property_csspropertyflexbasis;
}
const CSSProperty& GetCSSPropertyFlexDirection() {
  return property_csspropertyflexdirection;
}
const CSSProperty& GetCSSPropertyFlexGrow() {
  return property_csspropertyflexgrow;
}
const CSSProperty& GetCSSPropertyFlexShrink() {
  return property_csspropertyflexshrink;
}
const CSSProperty& GetCSSPropertyFlexWrap() {
  return property_csspropertyflexwrap;
}
const CSSProperty& GetCSSPropertyFloat() {
  return property_csspropertyfloat;
}
const CSSProperty& GetCSSPropertyFloodColor() {
  return property_csspropertyfloodcolor;
}
const CSSProperty& GetCSSPropertyFloodOpacity() {
  return property_csspropertyfloodopacity;
}
const CSSProperty& GetCSSPropertyFontDisplay() {
  return property_csspropertyfontdisplay;
}
const CSSProperty& GetCSSPropertyGridAutoColumns() {
  return property_csspropertygridautocolumns;
}
const CSSProperty& GetCSSPropertyGridAutoFlow() {
  return property_csspropertygridautoflow;
}
const CSSProperty& GetCSSPropertyGridAutoRows() {
  return property_csspropertygridautorows;
}
const CSSProperty& GetCSSPropertyGridColumnEnd() {
  return property_csspropertygridcolumnend;
}
const CSSProperty& GetCSSPropertyGridColumnStart() {
  return property_csspropertygridcolumnstart;
}
const CSSProperty& GetCSSPropertyGridRowEnd() {
  return property_csspropertygridrowend;
}
const CSSProperty& GetCSSPropertyGridRowStart() {
  return property_csspropertygridrowstart;
}
const CSSProperty& GetCSSPropertyGridTemplateAreas() {
  return property_csspropertygridtemplateareas;
}
const CSSProperty& GetCSSPropertyGridTemplateColumns() {
  return property_csspropertygridtemplatecolumns;
}
const CSSProperty& GetCSSPropertyGridTemplateRows() {
  return property_csspropertygridtemplaterows;
}
const CSSProperty& GetCSSPropertyHeight() {
  return property_csspropertyheight;
}
const CSSProperty& GetCSSPropertyHyphens() {
  return property_csspropertyhyphens;
}
const CSSProperty& GetCSSPropertyImageOrientation() {
  return property_csspropertyimageorientation;
}
const CSSProperty& GetCSSPropertyImageRendering() {
  return property_csspropertyimagerendering;
}
const CSSProperty& GetCSSPropertyInlineSize() {
  return property_csspropertyinlinesize;
}
const CSSProperty& GetCSSPropertyInsetBlockEnd() {
  return property_csspropertyinsetblockend;
}
const CSSProperty& GetCSSPropertyInsetBlockStart() {
  return property_csspropertyinsetblockstart;
}
const CSSProperty& GetCSSPropertyInsetInlineEnd() {
  return property_csspropertyinsetinlineend;
}
const CSSProperty& GetCSSPropertyInsetInlineStart() {
  return property_csspropertyinsetinlinestart;
}
const CSSProperty& GetCSSPropertyIsolation() {
  return property_csspropertyisolation;
}
const CSSProperty& GetCSSPropertyJustifyContent() {
  return property_csspropertyjustifycontent;
}
const CSSProperty& GetCSSPropertyJustifyItems() {
  return property_csspropertyjustifyitems;
}
const CSSProperty& GetCSSPropertyJustifySelf() {
  return property_csspropertyjustifyself;
}
const CSSProperty& GetCSSPropertyLeft() {
  return property_csspropertyleft;
}
const CSSProperty& GetCSSPropertyLetterSpacing() {
  return property_csspropertyletterspacing;
}
const CSSProperty& GetCSSPropertyLightingColor() {
  return property_csspropertylightingcolor;
}
const CSSProperty& GetCSSPropertyLineBreak() {
  return property_csspropertylinebreak;
}
const CSSProperty& GetCSSPropertyLineHeight() {
  return property_csspropertylineheight;
}
const CSSProperty& GetCSSPropertyLineHeightStep() {
  return property_csspropertylineheightstep;
}
const CSSProperty& GetCSSPropertyListStyleImage() {
  return property_csspropertyliststyleimage;
}
const CSSProperty& GetCSSPropertyListStylePosition() {
  return property_csspropertyliststyleposition;
}
const CSSProperty& GetCSSPropertyListStyleType() {
  return property_csspropertyliststyletype;
}
const CSSProperty& GetCSSPropertyMarginBlockEnd() {
  return property_csspropertymarginblockend;
}
const CSSProperty& GetCSSPropertyMarginBlockStart() {
  return property_csspropertymarginblockstart;
}
const CSSProperty& GetCSSPropertyMarginBottom() {
  return property_csspropertymarginbottom;
}
const CSSProperty& GetCSSPropertyMarginInlineEnd() {
  return property_csspropertymargininlineend;
}
const CSSProperty& GetCSSPropertyMarginInlineStart() {
  return property_csspropertymargininlinestart;
}
const CSSProperty& GetCSSPropertyMarginLeft() {
  return property_csspropertymarginleft;
}
const CSSProperty& GetCSSPropertyMarginRight() {
  return property_csspropertymarginright;
}
const CSSProperty& GetCSSPropertyMarginTop() {
  return property_csspropertymargintop;
}
const CSSProperty& GetCSSPropertyMarkerEnd() {
  return property_csspropertymarkerend;
}
const CSSProperty& GetCSSPropertyMarkerMid() {
  return property_csspropertymarkermid;
}
const CSSProperty& GetCSSPropertyMarkerStart() {
  return property_csspropertymarkerstart;
}
const CSSProperty& GetCSSPropertyMask() {
  return property_csspropertymask;
}
const CSSProperty& GetCSSPropertyMaskSourceType() {
  return property_csspropertymasksourcetype;
}
const CSSProperty& GetCSSPropertyMaskType() {
  return property_csspropertymasktype;
}
const CSSProperty& GetCSSPropertyMaxBlockSize() {
  return property_csspropertymaxblocksize;
}
const CSSProperty& GetCSSPropertyMaxHeight() {
  return property_csspropertymaxheight;
}
const CSSProperty& GetCSSPropertyMaxInlineSize() {
  return property_csspropertymaxinlinesize;
}
const CSSProperty& GetCSSPropertyMaxWidth() {
  return property_csspropertymaxwidth;
}
const CSSProperty& GetCSSPropertyMaxZoom() {
  return property_csspropertymaxzoom;
}
const CSSProperty& GetCSSPropertyMinBlockSize() {
  return property_csspropertyminblocksize;
}
const CSSProperty& GetCSSPropertyMinHeight() {
  return property_csspropertyminheight;
}
const CSSProperty& GetCSSPropertyMinInlineSize() {
  return property_csspropertymininlinesize;
}
const CSSProperty& GetCSSPropertyMinWidth() {
  return property_csspropertyminwidth;
}
const CSSProperty& GetCSSPropertyMinZoom() {
  return property_csspropertyminzoom;
}
const CSSProperty& GetCSSPropertyMixBlendMode() {
  return property_csspropertymixblendmode;
}
const CSSProperty& GetCSSPropertyObjectFit() {
  return property_csspropertyobjectfit;
}
const CSSProperty& GetCSSPropertyObjectPosition() {
  return property_csspropertyobjectposition;
}
const CSSProperty& GetCSSPropertyOffsetAnchor() {
  return property_csspropertyoffsetanchor;
}
const CSSProperty& GetCSSPropertyOffsetDistance() {
  return property_csspropertyoffsetdistance;
}
const CSSProperty& GetCSSPropertyOffsetPath() {
  return property_csspropertyoffsetpath;
}
const CSSProperty& GetCSSPropertyOffsetPosition() {
  return property_csspropertyoffsetposition;
}
const CSSProperty& GetCSSPropertyOffsetRotate() {
  return property_csspropertyoffsetrotate;
}
const CSSProperty& GetCSSPropertyOpacity() {
  return property_csspropertyopacity;
}
const CSSProperty& GetCSSPropertyOrder() {
  return property_csspropertyorder;
}
const CSSProperty& GetCSSPropertyOrientation() {
  return property_csspropertyorientation;
}
const CSSProperty& GetCSSPropertyOrphans() {
  return property_csspropertyorphans;
}
const CSSProperty& GetCSSPropertyOutlineColor() {
  return property_csspropertyoutlinecolor;
}
const CSSProperty& GetCSSPropertyOutlineOffset() {
  return property_csspropertyoutlineoffset;
}
const CSSProperty& GetCSSPropertyOutlineStyle() {
  return property_csspropertyoutlinestyle;
}
const CSSProperty& GetCSSPropertyOutlineWidth() {
  return property_csspropertyoutlinewidth;
}
const CSSProperty& GetCSSPropertyOverflowAnchor() {
  return property_csspropertyoverflowanchor;
}
const CSSProperty& GetCSSPropertyOverflowWrap() {
  return property_csspropertyoverflowwrap;
}
const CSSProperty& GetCSSPropertyOverflowX() {
  return property_csspropertyoverflowx;
}
const CSSProperty& GetCSSPropertyOverflowY() {
  return property_csspropertyoverflowy;
}
const CSSProperty& GetCSSPropertyOverscrollBehaviorX() {
  return property_csspropertyoverscrollbehaviorx;
}
const CSSProperty& GetCSSPropertyOverscrollBehaviorY() {
  return property_csspropertyoverscrollbehaviory;
}
const CSSProperty& GetCSSPropertyPaddingBlockEnd() {
  return property_csspropertypaddingblockend;
}
const CSSProperty& GetCSSPropertyPaddingBlockStart() {
  return property_csspropertypaddingblockstart;
}
const CSSProperty& GetCSSPropertyPaddingBottom() {
  return property_csspropertypaddingbottom;
}
const CSSProperty& GetCSSPropertyPaddingInlineEnd() {
  return property_csspropertypaddinginlineend;
}
const CSSProperty& GetCSSPropertyPaddingInlineStart() {
  return property_csspropertypaddinginlinestart;
}
const CSSProperty& GetCSSPropertyPaddingLeft() {
  return property_csspropertypaddingleft;
}
const CSSProperty& GetCSSPropertyPaddingRight() {
  return property_csspropertypaddingright;
}
const CSSProperty& GetCSSPropertyPaddingTop() {
  return property_csspropertypaddingtop;
}
const CSSProperty& GetCSSPropertyPage() {
  return property_csspropertypage;
}
const CSSProperty& GetCSSPropertyPaintOrder() {
  return property_csspropertypaintorder;
}
const CSSProperty& GetCSSPropertyPerspective() {
  return property_csspropertyperspective;
}
const CSSProperty& GetCSSPropertyPerspectiveOrigin() {
  return property_csspropertyperspectiveorigin;
}
const CSSProperty& GetCSSPropertyPointerEvents() {
  return property_csspropertypointerevents;
}
const CSSProperty& GetCSSPropertyPosition() {
  return property_csspropertyposition;
}
const CSSProperty& GetCSSPropertyQuotes() {
  return property_csspropertyquotes;
}
const CSSProperty& GetCSSPropertyR() {
  return property_csspropertyr;
}
const CSSProperty& GetCSSPropertyResize() {
  return property_csspropertyresize;
}
const CSSProperty& GetCSSPropertyRight() {
  return property_csspropertyright;
}
const CSSProperty& GetCSSPropertyRotate() {
  return property_csspropertyrotate;
}
const CSSProperty& GetCSSPropertyRowGap() {
  return property_csspropertyrowgap;
}
const CSSProperty& GetCSSPropertyRx() {
  return property_csspropertyrx;
}
const CSSProperty& GetCSSPropertyRy() {
  return property_csspropertyry;
}
const CSSProperty& GetCSSPropertyScale() {
  return property_csspropertyscale;
}
const CSSProperty& GetCSSPropertyScrollBehavior() {
  return property_csspropertyscrollbehavior;
}
const CSSProperty& GetCSSPropertyScrollCustomization() {
  return property_csspropertyscrollcustomization;
}
const CSSProperty& GetCSSPropertyScrollMarginBlockEnd() {
  return property_csspropertyscrollmarginblockend;
}
const CSSProperty& GetCSSPropertyScrollMarginBlockStart() {
  return property_csspropertyscrollmarginblockstart;
}
const CSSProperty& GetCSSPropertyScrollMarginBottom() {
  return property_csspropertyscrollmarginbottom;
}
const CSSProperty& GetCSSPropertyScrollMarginInlineEnd() {
  return property_csspropertyscrollmargininlineend;
}
const CSSProperty& GetCSSPropertyScrollMarginInlineStart() {
  return property_csspropertyscrollmargininlinestart;
}
const CSSProperty& GetCSSPropertyScrollMarginLeft() {
  return property_csspropertyscrollmarginleft;
}
const CSSProperty& GetCSSPropertyScrollMarginRight() {
  return property_csspropertyscrollmarginright;
}
const CSSProperty& GetCSSPropertyScrollMarginTop() {
  return property_csspropertyscrollmargintop;
}
const CSSProperty& GetCSSPropertyScrollPaddingBlockEnd() {
  return property_csspropertyscrollpaddingblockend;
}
const CSSProperty& GetCSSPropertyScrollPaddingBlockStart() {
  return property_csspropertyscrollpaddingblockstart;
}
const CSSProperty& GetCSSPropertyScrollPaddingBottom() {
  return property_csspropertyscrollpaddingbottom;
}
const CSSProperty& GetCSSPropertyScrollPaddingInlineEnd() {
  return property_csspropertyscrollpaddinginlineend;
}
const CSSProperty& GetCSSPropertyScrollPaddingInlineStart() {
  return property_csspropertyscrollpaddinginlinestart;
}
const CSSProperty& GetCSSPropertyScrollPaddingLeft() {
  return property_csspropertyscrollpaddingleft;
}
const CSSProperty& GetCSSPropertyScrollPaddingRight() {
  return property_csspropertyscrollpaddingright;
}
const CSSProperty& GetCSSPropertyScrollPaddingTop() {
  return property_csspropertyscrollpaddingtop;
}
const CSSProperty& GetCSSPropertyScrollSnapAlign() {
  return property_csspropertyscrollsnapalign;
}
const CSSProperty& GetCSSPropertyScrollSnapStop() {
  return property_csspropertyscrollsnapstop;
}
const CSSProperty& GetCSSPropertyScrollSnapType() {
  return property_csspropertyscrollsnaptype;
}
const CSSProperty& GetCSSPropertyShapeImageThreshold() {
  return property_csspropertyshapeimagethreshold;
}
const CSSProperty& GetCSSPropertyShapeMargin() {
  return property_csspropertyshapemargin;
}
const CSSProperty& GetCSSPropertyShapeOutside() {
  return property_csspropertyshapeoutside;
}
const CSSProperty& GetCSSPropertyShapeRendering() {
  return property_csspropertyshaperendering;
}
const CSSProperty& GetCSSPropertySize() {
  return property_csspropertysize;
}
const CSSProperty& GetCSSPropertySpeak() {
  return property_csspropertyspeak;
}
const CSSProperty& GetCSSPropertySrc() {
  return property_csspropertysrc;
}
const CSSProperty& GetCSSPropertyStopColor() {
  return property_csspropertystopcolor;
}
const CSSProperty& GetCSSPropertyStopOpacity() {
  return property_csspropertystopopacity;
}
const CSSProperty& GetCSSPropertyStroke() {
  return property_csspropertystroke;
}
const CSSProperty& GetCSSPropertyStrokeDasharray() {
  return property_csspropertystrokedasharray;
}
const CSSProperty& GetCSSPropertyStrokeDashoffset() {
  return property_csspropertystrokedashoffset;
}
const CSSProperty& GetCSSPropertyStrokeLinecap() {
  return property_csspropertystrokelinecap;
}
const CSSProperty& GetCSSPropertyStrokeLinejoin() {
  return property_csspropertystrokelinejoin;
}
const CSSProperty& GetCSSPropertyStrokeMiterlimit() {
  return property_csspropertystrokemiterlimit;
}
const CSSProperty& GetCSSPropertyStrokeOpacity() {
  return property_csspropertystrokeopacity;
}
const CSSProperty& GetCSSPropertyStrokeWidth() {
  return property_csspropertystrokewidth;
}
const CSSProperty& GetCSSPropertyTabSize() {
  return property_csspropertytabsize;
}
const CSSProperty& GetCSSPropertyTableLayout() {
  return property_csspropertytablelayout;
}
const CSSProperty& GetCSSPropertyTextAlign() {
  return property_csspropertytextalign;
}
const CSSProperty& GetCSSPropertyTextAlignLast() {
  return property_csspropertytextalignlast;
}
const CSSProperty& GetCSSPropertyTextAnchor() {
  return property_csspropertytextanchor;
}
const CSSProperty& GetCSSPropertyTextCombineUpright() {
  return property_csspropertytextcombineupright;
}
const CSSProperty& GetCSSPropertyTextDecorationColor() {
  return property_csspropertytextdecorationcolor;
}
const CSSProperty& GetCSSPropertyTextDecorationLine() {
  return property_csspropertytextdecorationline;
}
const CSSProperty& GetCSSPropertyTextDecorationSkipInk() {
  return property_csspropertytextdecorationskipink;
}
const CSSProperty& GetCSSPropertyTextDecorationStyle() {
  return property_csspropertytextdecorationstyle;
}
const CSSProperty& GetCSSPropertyTextIndent() {
  return property_csspropertytextindent;
}
const CSSProperty& GetCSSPropertyTextJustify() {
  return property_csspropertytextjustify;
}
const CSSProperty& GetCSSPropertyTextOverflow() {
  return property_csspropertytextoverflow;
}
const CSSProperty& GetCSSPropertyTextShadow() {
  return property_csspropertytextshadow;
}
const CSSProperty& GetCSSPropertyTextSizeAdjust() {
  return property_csspropertytextsizeadjust;
}
const CSSProperty& GetCSSPropertyTextTransform() {
  return property_csspropertytexttransform;
}
const CSSProperty& GetCSSPropertyTextUnderlinePosition() {
  return property_csspropertytextunderlineposition;
}
const CSSProperty& GetCSSPropertyTop() {
  return property_csspropertytop;
}
const CSSProperty& GetCSSPropertyTouchAction() {
  return property_csspropertytouchaction;
}
const CSSProperty& GetCSSPropertyTransform() {
  return property_csspropertytransform;
}
const CSSProperty& GetCSSPropertyTransformBox() {
  return property_csspropertytransformbox;
}
const CSSProperty& GetCSSPropertyTransformOrigin() {
  return property_csspropertytransformorigin;
}
const CSSProperty& GetCSSPropertyTransformStyle() {
  return property_csspropertytransformstyle;
}
const CSSProperty& GetCSSPropertyTranslate() {
  return property_csspropertytranslate;
}
const CSSProperty& GetCSSPropertyUnicodeBidi() {
  return property_csspropertyunicodebidi;
}
const CSSProperty& GetCSSPropertyUnicodeRange() {
  return property_csspropertyunicoderange;
}
const CSSProperty& GetCSSPropertyUserSelect() {
  return property_csspropertyuserselect;
}
const CSSProperty& GetCSSPropertyUserZoom() {
  return property_csspropertyuserzoom;
}
const CSSProperty& GetCSSPropertyVectorEffect() {
  return property_csspropertyvectoreffect;
}
const CSSProperty& GetCSSPropertyVerticalAlign() {
  return property_csspropertyverticalalign;
}
const CSSProperty& GetCSSPropertyViewportFit() {
  return property_csspropertyviewportfit;
}
const CSSProperty& GetCSSPropertyVisibility() {
  return property_csspropertyvisibility;
}
const CSSProperty& GetCSSPropertyWebkitAppRegion() {
  return property_csspropertywebkitappregion;
}
const CSSProperty& GetCSSPropertyWebkitAppearance() {
  return property_csspropertywebkitappearance;
}
const CSSProperty& GetCSSPropertyWebkitBorderHorizontalSpacing() {
  return property_csspropertywebkitborderhorizontalspacing;
}
const CSSProperty& GetCSSPropertyWebkitBorderImage() {
  return property_csspropertywebkitborderimage;
}
const CSSProperty& GetCSSPropertyWebkitBorderVerticalSpacing() {
  return property_csspropertywebkitborderverticalspacing;
}
const CSSProperty& GetCSSPropertyWebkitBoxAlign() {
  return property_csspropertywebkitboxalign;
}
const CSSProperty& GetCSSPropertyWebkitBoxDecorationBreak() {
  return property_csspropertywebkitboxdecorationbreak;
}
const CSSProperty& GetCSSPropertyWebkitBoxDirection() {
  return property_csspropertywebkitboxdirection;
}
const CSSProperty& GetCSSPropertyWebkitBoxFlex() {
  return property_csspropertywebkitboxflex;
}
const CSSProperty& GetCSSPropertyWebkitBoxOrdinalGroup() {
  return property_csspropertywebkitboxordinalgroup;
}
const CSSProperty& GetCSSPropertyWebkitBoxOrient() {
  return property_csspropertywebkitboxorient;
}
const CSSProperty& GetCSSPropertyWebkitBoxPack() {
  return property_csspropertywebkitboxpack;
}
const CSSProperty& GetCSSPropertyWebkitBoxReflect() {
  return property_csspropertywebkitboxreflect;
}
const CSSProperty& GetCSSPropertyWebkitFontSizeDelta() {
  return property_csspropertywebkitfontsizedelta;
}
const CSSProperty& GetCSSPropertyWebkitHighlight() {
  return property_csspropertywebkithighlight;
}
const CSSProperty& GetCSSPropertyWebkitHyphenateCharacter() {
  return property_csspropertywebkithyphenatecharacter;
}
const CSSProperty& GetCSSPropertyWebkitLineBreak() {
  return property_csspropertywebkitlinebreak;
}
const CSSProperty& GetCSSPropertyWebkitLineClamp() {
  return property_csspropertywebkitlineclamp;
}
const CSSProperty& GetCSSPropertyWebkitMarginAfterCollapse() {
  return property_csspropertywebkitmarginaftercollapse;
}
const CSSProperty& GetCSSPropertyWebkitMarginBeforeCollapse() {
  return property_csspropertywebkitmarginbeforecollapse;
}
const CSSProperty& GetCSSPropertyWebkitMarginBottomCollapse() {
  return property_csspropertywebkitmarginbottomcollapse;
}
const CSSProperty& GetCSSPropertyWebkitMarginTopCollapse() {
  return property_csspropertywebkitmargintopcollapse;
}
const CSSProperty& GetCSSPropertyWebkitMaskBoxImageOutset() {
  return property_csspropertywebkitmaskboximageoutset;
}
const CSSProperty& GetCSSPropertyWebkitMaskBoxImageRepeat() {
  return property_csspropertywebkitmaskboximagerepeat;
}
const CSSProperty& GetCSSPropertyWebkitMaskBoxImageSlice() {
  return property_csspropertywebkitmaskboximageslice;
}
const CSSProperty& GetCSSPropertyWebkitMaskBoxImageSource() {
  return property_csspropertywebkitmaskboximagesource;
}
const CSSProperty& GetCSSPropertyWebkitMaskBoxImageWidth() {
  return property_csspropertywebkitmaskboximagewidth;
}
const CSSProperty& GetCSSPropertyWebkitMaskClip() {
  return property_csspropertywebkitmaskclip;
}
const CSSProperty& GetCSSPropertyWebkitMaskComposite() {
  return property_csspropertywebkitmaskcomposite;
}
const CSSProperty& GetCSSPropertyWebkitMaskImage() {
  return property_csspropertywebkitmaskimage;
}
const CSSProperty& GetCSSPropertyWebkitMaskOrigin() {
  return property_csspropertywebkitmaskorigin;
}
const CSSProperty& GetCSSPropertyWebkitMaskPositionX() {
  return property_csspropertywebkitmaskpositionx;
}
const CSSProperty& GetCSSPropertyWebkitMaskPositionY() {
  return property_csspropertywebkitmaskpositiony;
}
const CSSProperty& GetCSSPropertyWebkitMaskRepeatX() {
  return property_csspropertywebkitmaskrepeatx;
}
const CSSProperty& GetCSSPropertyWebkitMaskRepeatY() {
  return property_csspropertywebkitmaskrepeaty;
}
const CSSProperty& GetCSSPropertyWebkitMaskSize() {
  return property_csspropertywebkitmasksize;
}
const CSSProperty& GetCSSPropertyWebkitPerspectiveOriginX() {
  return property_csspropertywebkitperspectiveoriginx;
}
const CSSProperty& GetCSSPropertyWebkitPerspectiveOriginY() {
  return property_csspropertywebkitperspectiveoriginy;
}
const CSSProperty& GetCSSPropertyWebkitPrintColorAdjust() {
  return property_csspropertywebkitprintcoloradjust;
}
const CSSProperty& GetCSSPropertyWebkitRtlOrdering() {
  return property_csspropertywebkitrtlordering;
}
const CSSProperty& GetCSSPropertyWebkitRubyPosition() {
  return property_csspropertywebkitrubyposition;
}
const CSSProperty& GetCSSPropertyWebkitTapHighlightColor() {
  return property_csspropertywebkittaphighlightcolor;
}
const CSSProperty& GetCSSPropertyWebkitTextCombine() {
  return property_csspropertywebkittextcombine;
}
const CSSProperty& GetCSSPropertyWebkitTextDecorationsInEffect() {
  return property_csspropertywebkittextdecorationsineffect;
}
const CSSProperty& GetCSSPropertyWebkitTextEmphasisColor() {
  return property_csspropertywebkittextemphasiscolor;
}
const CSSProperty& GetCSSPropertyWebkitTextEmphasisPosition() {
  return property_csspropertywebkittextemphasisposition;
}
const CSSProperty& GetCSSPropertyWebkitTextEmphasisStyle() {
  return property_csspropertywebkittextemphasisstyle;
}
const CSSProperty& GetCSSPropertyWebkitTextFillColor() {
  return property_csspropertywebkittextfillcolor;
}
const CSSProperty& GetCSSPropertyWebkitTextSecurity() {
  return property_csspropertywebkittextsecurity;
}
const CSSProperty& GetCSSPropertyWebkitTextStrokeColor() {
  return property_csspropertywebkittextstrokecolor;
}
const CSSProperty& GetCSSPropertyWebkitTextStrokeWidth() {
  return property_csspropertywebkittextstrokewidth;
}
const CSSProperty& GetCSSPropertyWebkitTransformOriginX() {
  return property_csspropertywebkittransformoriginx;
}
const CSSProperty& GetCSSPropertyWebkitTransformOriginY() {
  return property_csspropertywebkittransformoriginy;
}
const CSSProperty& GetCSSPropertyWebkitTransformOriginZ() {
  return property_csspropertywebkittransformoriginz;
}
const CSSProperty& GetCSSPropertyWebkitUserDrag() {
  return property_csspropertywebkituserdrag;
}
const CSSProperty& GetCSSPropertyWebkitUserModify() {
  return property_csspropertywebkitusermodify;
}
const CSSProperty& GetCSSPropertyWhiteSpace() {
  return property_csspropertywhitespace;
}
const CSSProperty& GetCSSPropertyWidows() {
  return property_csspropertywidows;
}
const CSSProperty& GetCSSPropertyWidth() {
  return property_csspropertywidth;
}
const CSSProperty& GetCSSPropertyWillChange() {
  return property_csspropertywillchange;
}
const CSSProperty& GetCSSPropertyWordBreak() {
  return property_csspropertywordbreak;
}
const CSSProperty& GetCSSPropertyWordSpacing() {
  return property_csspropertywordspacing;
}
const CSSProperty& GetCSSPropertyX() {
  return property_csspropertyx;
}
const CSSProperty& GetCSSPropertyY() {
  return property_csspropertyy;
}
const CSSProperty& GetCSSPropertyZIndex() {
  return property_csspropertyzindex;
}
const CSSProperty& GetCSSPropertyAnimation() {
  return property_csspropertyanimation;
}
const CSSProperty& GetCSSPropertyBackground() {
  return property_csspropertybackground;
}
const CSSProperty& GetCSSPropertyBackgroundPosition() {
  return property_csspropertybackgroundposition;
}
const CSSProperty& GetCSSPropertyBackgroundRepeat() {
  return property_csspropertybackgroundrepeat;
}
const CSSProperty& GetCSSPropertyBorder() {
  return property_csspropertyborder;
}
const CSSProperty& GetCSSPropertyBorderBlock() {
  return property_csspropertyborderblock;
}
const CSSProperty& GetCSSPropertyBorderBlockColor() {
  return property_csspropertyborderblockcolor;
}
const CSSProperty& GetCSSPropertyBorderBlockEnd() {
  return property_csspropertyborderblockend;
}
const CSSProperty& GetCSSPropertyBorderBlockStart() {
  return property_csspropertyborderblockstart;
}
const CSSProperty& GetCSSPropertyBorderBlockStyle() {
  return property_csspropertyborderblockstyle;
}
const CSSProperty& GetCSSPropertyBorderBlockWidth() {
  return property_csspropertyborderblockwidth;
}
const CSSProperty& GetCSSPropertyBorderBottom() {
  return property_csspropertyborderbottom;
}
const CSSProperty& GetCSSPropertyBorderColor() {
  return property_csspropertybordercolor;
}
const CSSProperty& GetCSSPropertyBorderImage() {
  return property_csspropertyborderimage;
}
const CSSProperty& GetCSSPropertyBorderInline() {
  return property_csspropertyborderinline;
}
const CSSProperty& GetCSSPropertyBorderInlineColor() {
  return property_csspropertyborderinlinecolor;
}
const CSSProperty& GetCSSPropertyBorderInlineEnd() {
  return property_csspropertyborderinlineend;
}
const CSSProperty& GetCSSPropertyBorderInlineStart() {
  return property_csspropertyborderinlinestart;
}
const CSSProperty& GetCSSPropertyBorderInlineStyle() {
  return property_csspropertyborderinlinestyle;
}
const CSSProperty& GetCSSPropertyBorderInlineWidth() {
  return property_csspropertyborderinlinewidth;
}
const CSSProperty& GetCSSPropertyBorderLeft() {
  return property_csspropertyborderleft;
}
const CSSProperty& GetCSSPropertyBorderRadius() {
  return property_csspropertyborderradius;
}
const CSSProperty& GetCSSPropertyBorderRight() {
  return property_csspropertyborderright;
}
const CSSProperty& GetCSSPropertyBorderSpacing() {
  return property_csspropertyborderspacing;
}
const CSSProperty& GetCSSPropertyBorderStyle() {
  return property_csspropertyborderstyle;
}
const CSSProperty& GetCSSPropertyBorderTop() {
  return property_csspropertybordertop;
}
const CSSProperty& GetCSSPropertyBorderWidth() {
  return property_csspropertyborderwidth;
}
const CSSProperty& GetCSSPropertyColumnRule() {
  return property_csspropertycolumnrule;
}
const CSSProperty& GetCSSPropertyColumns() {
  return property_csspropertycolumns;
}
const CSSProperty& GetCSSPropertyFlex() {
  return property_csspropertyflex;
}
const CSSProperty& GetCSSPropertyFlexFlow() {
  return property_csspropertyflexflow;
}
const CSSProperty& GetCSSPropertyFont() {
  return property_csspropertyfont;
}
const CSSProperty& GetCSSPropertyFontVariant() {
  return property_csspropertyfontvariant;
}
const CSSProperty& GetCSSPropertyGap() {
  return property_csspropertygap;
}
const CSSProperty& GetCSSPropertyGrid() {
  return property_csspropertygrid;
}
const CSSProperty& GetCSSPropertyGridArea() {
  return property_csspropertygridarea;
}
const CSSProperty& GetCSSPropertyGridColumn() {
  return property_csspropertygridcolumn;
}
const CSSProperty& GetCSSPropertyGridColumnGap() {
  return property_csspropertygridcolumngap;
}
const CSSProperty& GetCSSPropertyGridGap() {
  return property_csspropertygridgap;
}
const CSSProperty& GetCSSPropertyGridRow() {
  return property_csspropertygridrow;
}
const CSSProperty& GetCSSPropertyGridRowGap() {
  return property_csspropertygridrowgap;
}
const CSSProperty& GetCSSPropertyGridTemplate() {
  return property_csspropertygridtemplate;
}
const CSSProperty& GetCSSPropertyInset() {
  return property_csspropertyinset;
}
const CSSProperty& GetCSSPropertyInsetBlock() {
  return property_csspropertyinsetblock;
}
const CSSProperty& GetCSSPropertyInsetInline() {
  return property_csspropertyinsetinline;
}
const CSSProperty& GetCSSPropertyListStyle() {
  return property_csspropertyliststyle;
}
const CSSProperty& GetCSSPropertyMargin() {
  return property_csspropertymargin;
}
const CSSProperty& GetCSSPropertyMarginBlock() {
  return property_csspropertymarginblock;
}
const CSSProperty& GetCSSPropertyMarginInline() {
  return property_csspropertymargininline;
}
const CSSProperty& GetCSSPropertyMarker() {
  return property_csspropertymarker;
}
const CSSProperty& GetCSSPropertyOffset() {
  return property_csspropertyoffset;
}
const CSSProperty& GetCSSPropertyOutline() {
  return property_csspropertyoutline;
}
const CSSProperty& GetCSSPropertyOverflow() {
  return property_csspropertyoverflow;
}
const CSSProperty& GetCSSPropertyOverscrollBehavior() {
  return property_csspropertyoverscrollbehavior;
}
const CSSProperty& GetCSSPropertyPadding() {
  return property_csspropertypadding;
}
const CSSProperty& GetCSSPropertyPaddingBlock() {
  return property_csspropertypaddingblock;
}
const CSSProperty& GetCSSPropertyPaddingInline() {
  return property_csspropertypaddinginline;
}
const CSSProperty& GetCSSPropertyPageBreakAfter() {
  return property_csspropertypagebreakafter;
}
const CSSProperty& GetCSSPropertyPageBreakBefore() {
  return property_csspropertypagebreakbefore;
}
const CSSProperty& GetCSSPropertyPageBreakInside() {
  return property_csspropertypagebreakinside;
}
const CSSProperty& GetCSSPropertyPlaceContent() {
  return property_csspropertyplacecontent;
}
const CSSProperty& GetCSSPropertyPlaceItems() {
  return property_csspropertyplaceitems;
}
const CSSProperty& GetCSSPropertyPlaceSelf() {
  return property_csspropertyplaceself;
}
const CSSProperty& GetCSSPropertyScrollMargin() {
  return property_csspropertyscrollmargin;
}
const CSSProperty& GetCSSPropertyScrollMarginBlock() {
  return property_csspropertyscrollmarginblock;
}
const CSSProperty& GetCSSPropertyScrollMarginInline() {
  return property_csspropertyscrollmargininline;
}
const CSSProperty& GetCSSPropertyScrollPadding() {
  return property_csspropertyscrollpadding;
}
const CSSProperty& GetCSSPropertyScrollPaddingBlock() {
  return property_csspropertyscrollpaddingblock;
}
const CSSProperty& GetCSSPropertyScrollPaddingInline() {
  return property_csspropertyscrollpaddinginline;
}
const CSSProperty& GetCSSPropertyTextDecoration() {
  return property_csspropertytextdecoration;
}
const CSSProperty& GetCSSPropertyTransition() {
  return property_csspropertytransition;
}
const CSSProperty& GetCSSPropertyWebkitColumnBreakAfter() {
  return property_csspropertywebkitcolumnbreakafter;
}
const CSSProperty& GetCSSPropertyWebkitColumnBreakBefore() {
  return property_csspropertywebkitcolumnbreakbefore;
}
const CSSProperty& GetCSSPropertyWebkitColumnBreakInside() {
  return property_csspropertywebkitcolumnbreakinside;
}
const CSSProperty& GetCSSPropertyWebkitMarginCollapse() {
  return property_csspropertywebkitmargincollapse;
}
const CSSProperty& GetCSSPropertyWebkitMask() {
  return property_csspropertywebkitmask;
}
const CSSProperty& GetCSSPropertyWebkitMaskBoxImage() {
  return property_csspropertywebkitmaskboximage;
}
const CSSProperty& GetCSSPropertyWebkitMaskPosition() {
  return property_csspropertywebkitmaskposition;
}
const CSSProperty& GetCSSPropertyWebkitMaskRepeat() {
  return property_csspropertywebkitmaskrepeat;
}
const CSSProperty& GetCSSPropertyWebkitTextEmphasis() {
  return property_csspropertywebkittextemphasis;
}
const CSSProperty& GetCSSPropertyWebkitTextStroke() {
  return property_csspropertywebkittextstroke;
}

const CSSUnresolvedProperty* GetAliasPropertyInternal(CSSPropertyID id) {
  DCHECK_GT(id, lastCSSProperty);  // last property id
  DCHECK_LE(id, lastUnresolvedCSSProperty);  // last unresolved property id
  switch (id) {
    case CSSPropertyID::kAliasWebkitAnimationDelay:
      return &property_csspropertyaliaswebkitanimationdelay;
    case CSSPropertyID::kAliasWebkitAnimationDirection:
      return &property_csspropertyaliaswebkitanimationdirection;
    case CSSPropertyID::kAliasWebkitAnimationDuration:
      return &property_csspropertyaliaswebkitanimationduration;
    case CSSPropertyID::kAliasWebkitAnimationFillMode:
      return &property_csspropertyaliaswebkitanimationfillmode;
    case CSSPropertyID::kAliasWebkitAnimationIterationCount:
      return &property_csspropertyaliaswebkitanimationiterationcount;
    case CSSPropertyID::kAliasWebkitAnimationName:
      return &property_csspropertyaliaswebkitanimationname;
    case CSSPropertyID::kAliasWebkitAnimationPlayState:
      return &property_csspropertyaliaswebkitanimationplaystate;
    case CSSPropertyID::kAliasWebkitAnimationTimingFunction:
      return &property_csspropertyaliaswebkitanimationtimingfunction;
    case CSSPropertyID::kAliasWebkitTransitionDelay:
      return &property_csspropertyaliaswebkittransitiondelay;
    case CSSPropertyID::kAliasWebkitTransitionDuration:
      return &property_csspropertyaliaswebkittransitionduration;
    case CSSPropertyID::kAliasWebkitTransitionProperty:
      return &property_csspropertyaliaswebkittransitionproperty;
    case CSSPropertyID::kAliasWebkitTransitionTimingFunction:
      return &property_csspropertyaliaswebkittransitiontimingfunction;
    case CSSPropertyID::kAliasWebkitFontFeatureSettings:
      return &property_csspropertyaliaswebkitfontfeaturesettings;
    case CSSPropertyID::kAliasEpubTextOrientation:
      return &property_csspropertyaliasepubtextorientation;
    case CSSPropertyID::kAliasEpubWritingMode:
      return &property_csspropertyaliasepubwritingmode;
    case CSSPropertyID::kAliasWebkitAlignContent:
      return &property_csspropertyaliaswebkitaligncontent;
    case CSSPropertyID::kAliasWebkitAlignItems:
      return &property_csspropertyaliaswebkitalignitems;
    case CSSPropertyID::kAliasWebkitAlignSelf:
      return &property_csspropertyaliaswebkitalignself;
    case CSSPropertyID::kAliasWebkitBackfaceVisibility:
      return &property_csspropertyaliaswebkitbackfacevisibility;
    case CSSPropertyID::kAliasWebkitBackgroundClip:
      return &property_csspropertyaliaswebkitbackgroundclip;
    case CSSPropertyID::kAliasWebkitBackgroundOrigin:
      return &property_csspropertyaliaswebkitbackgroundorigin;
    case CSSPropertyID::kAliasWebkitBackgroundSize:
      return &property_csspropertyaliaswebkitbackgroundsize;
    case CSSPropertyID::kAliasWebkitLogicalHeight:
      return &property_csspropertyaliaswebkitlogicalheight;
    case CSSPropertyID::kAliasWebkitBorderAfterColor:
      return &property_csspropertyaliaswebkitborderaftercolor;
    case CSSPropertyID::kAliasWebkitBorderAfterStyle:
      return &property_csspropertyaliaswebkitborderafterstyle;
    case CSSPropertyID::kAliasWebkitBorderAfterWidth:
      return &property_csspropertyaliaswebkitborderafterwidth;
    case CSSPropertyID::kAliasWebkitBorderBeforeColor:
      return &property_csspropertyaliaswebkitborderbeforecolor;
    case CSSPropertyID::kAliasWebkitBorderBeforeStyle:
      return &property_csspropertyaliaswebkitborderbeforestyle;
    case CSSPropertyID::kAliasWebkitBorderBeforeWidth:
      return &property_csspropertyaliaswebkitborderbeforewidth;
    case CSSPropertyID::kAliasWebkitBorderBottomLeftRadius:
      return &property_csspropertyaliaswebkitborderbottomleftradius;
    case CSSPropertyID::kAliasWebkitBorderBottomRightRadius:
      return &property_csspropertyaliaswebkitborderbottomrightradius;
    case CSSPropertyID::kAliasWebkitBorderEndColor:
      return &property_csspropertyaliaswebkitborderendcolor;
    case CSSPropertyID::kAliasWebkitBorderEndStyle:
      return &property_csspropertyaliaswebkitborderendstyle;
    case CSSPropertyID::kAliasWebkitBorderEndWidth:
      return &property_csspropertyaliaswebkitborderendwidth;
    case CSSPropertyID::kAliasWebkitBorderStartColor:
      return &property_csspropertyaliaswebkitborderstartcolor;
    case CSSPropertyID::kAliasWebkitBorderStartStyle:
      return &property_csspropertyaliaswebkitborderstartstyle;
    case CSSPropertyID::kAliasWebkitBorderStartWidth:
      return &property_csspropertyaliaswebkitborderstartwidth;
    case CSSPropertyID::kAliasWebkitBorderTopLeftRadius:
      return &property_csspropertyaliaswebkitbordertopleftradius;
    case CSSPropertyID::kAliasWebkitBorderTopRightRadius:
      return &property_csspropertyaliaswebkitbordertoprightradius;
    case CSSPropertyID::kAliasWebkitBoxShadow:
      return &property_csspropertyaliaswebkitboxshadow;
    case CSSPropertyID::kAliasWebkitBoxSizing:
      return &property_csspropertyaliaswebkitboxsizing;
    case CSSPropertyID::kAliasEpubCaptionSide:
      return &property_csspropertyaliasepubcaptionside;
    case CSSPropertyID::kAliasWebkitClipPath:
      return &property_csspropertyaliaswebkitclippath;
    case CSSPropertyID::kAliasWebkitColumnCount:
      return &property_csspropertyaliaswebkitcolumncount;
    case CSSPropertyID::kAliasWebkitColumnGap:
      return &property_csspropertyaliaswebkitcolumngap;
    case CSSPropertyID::kAliasWebkitColumnRuleColor:
      return &property_csspropertyaliaswebkitcolumnrulecolor;
    case CSSPropertyID::kAliasWebkitColumnRuleStyle:
      return &property_csspropertyaliaswebkitcolumnrulestyle;
    case CSSPropertyID::kAliasWebkitColumnRuleWidth:
      return &property_csspropertyaliaswebkitcolumnrulewidth;
    case CSSPropertyID::kAliasWebkitColumnSpan:
      return &property_csspropertyaliaswebkitcolumnspan;
    case CSSPropertyID::kAliasWebkitColumnWidth:
      return &property_csspropertyaliaswebkitcolumnwidth;
    case CSSPropertyID::kAliasWebkitFilter:
      return &property_csspropertyaliaswebkitfilter;
    case CSSPropertyID::kAliasWebkitFlexBasis:
      return &property_csspropertyaliaswebkitflexbasis;
    case CSSPropertyID::kAliasWebkitFlexDirection:
      return &property_csspropertyaliaswebkitflexdirection;
    case CSSPropertyID::kAliasWebkitFlexGrow:
      return &property_csspropertyaliaswebkitflexgrow;
    case CSSPropertyID::kAliasWebkitFlexShrink:
      return &property_csspropertyaliaswebkitflexshrink;
    case CSSPropertyID::kAliasWebkitFlexWrap:
      return &property_csspropertyaliaswebkitflexwrap;
    case CSSPropertyID::kAliasWebkitLogicalWidth:
      return &property_csspropertyaliaswebkitlogicalwidth;
    case CSSPropertyID::kAliasWebkitJustifyContent:
      return &property_csspropertyaliaswebkitjustifycontent;
    case CSSPropertyID::kAliasWebkitMarginAfter:
      return &property_csspropertyaliaswebkitmarginafter;
    case CSSPropertyID::kAliasWebkitMarginBefore:
      return &property_csspropertyaliaswebkitmarginbefore;
    case CSSPropertyID::kAliasWebkitMarginEnd:
      return &property_csspropertyaliaswebkitmarginend;
    case CSSPropertyID::kAliasWebkitMarginStart:
      return &property_csspropertyaliaswebkitmarginstart;
    case CSSPropertyID::kAliasWebkitMaxLogicalHeight:
      return &property_csspropertyaliaswebkitmaxlogicalheight;
    case CSSPropertyID::kAliasWebkitMaxLogicalWidth:
      return &property_csspropertyaliaswebkitmaxlogicalwidth;
    case CSSPropertyID::kAliasWebkitMinLogicalHeight:
      return &property_csspropertyaliaswebkitminlogicalheight;
    case CSSPropertyID::kAliasWebkitMinLogicalWidth:
      return &property_csspropertyaliaswebkitminlogicalwidth;
    case CSSPropertyID::kAliasWebkitOpacity:
      return &property_csspropertyaliaswebkitopacity;
    case CSSPropertyID::kAliasWebkitOrder:
      return &property_csspropertyaliaswebkitorder;
    case CSSPropertyID::kAliasWordWrap:
      return &property_csspropertyaliaswordwrap;
    case CSSPropertyID::kAliasWebkitPaddingAfter:
      return &property_csspropertyaliaswebkitpaddingafter;
    case CSSPropertyID::kAliasWebkitPaddingBefore:
      return &property_csspropertyaliaswebkitpaddingbefore;
    case CSSPropertyID::kAliasWebkitPaddingEnd:
      return &property_csspropertyaliaswebkitpaddingend;
    case CSSPropertyID::kAliasWebkitPaddingStart:
      return &property_csspropertyaliaswebkitpaddingstart;
    case CSSPropertyID::kAliasWebkitPerspective:
      return &property_csspropertyaliaswebkitperspective;
    case CSSPropertyID::kAliasWebkitPerspectiveOrigin:
      return &property_csspropertyaliaswebkitperspectiveorigin;
    case CSSPropertyID::kAliasWebkitShapeImageThreshold:
      return &property_csspropertyaliaswebkitshapeimagethreshold;
    case CSSPropertyID::kAliasWebkitShapeMargin:
      return &property_csspropertyaliaswebkitshapemargin;
    case CSSPropertyID::kAliasWebkitShapeOutside:
      return &property_csspropertyaliaswebkitshapeoutside;
    case CSSPropertyID::kAliasWebkitTextSizeAdjust:
      return &property_csspropertyaliaswebkittextsizeadjust;
    case CSSPropertyID::kAliasEpubTextTransform:
      return &property_csspropertyaliasepubtexttransform;
    case CSSPropertyID::kAliasWebkitTransform:
      return &property_csspropertyaliaswebkittransform;
    case CSSPropertyID::kAliasWebkitTransformOrigin:
      return &property_csspropertyaliaswebkittransformorigin;
    case CSSPropertyID::kAliasWebkitTransformStyle:
      return &property_csspropertyaliaswebkittransformstyle;
    case CSSPropertyID::kAliasWebkitUserSelect:
      return &property_csspropertyaliaswebkituserselect;
    case CSSPropertyID::kAliasEpubTextCombine:
      return &property_csspropertyaliasepubtextcombine;
    case CSSPropertyID::kAliasEpubTextEmphasisColor:
      return &property_csspropertyaliasepubtextemphasiscolor;
    case CSSPropertyID::kAliasEpubTextEmphasisStyle:
      return &property_csspropertyaliasepubtextemphasisstyle;
    case CSSPropertyID::kAliasEpubWordBreak:
      return &property_csspropertyaliasepubwordbreak;
    case CSSPropertyID::kAliasWebkitAnimation:
      return &property_csspropertyaliaswebkitanimation;
    case CSSPropertyID::kAliasWebkitBorderAfter:
      return &property_csspropertyaliaswebkitborderafter;
    case CSSPropertyID::kAliasWebkitBorderBefore:
      return &property_csspropertyaliaswebkitborderbefore;
    case CSSPropertyID::kAliasWebkitBorderEnd:
      return &property_csspropertyaliaswebkitborderend;
    case CSSPropertyID::kAliasWebkitBorderStart:
      return &property_csspropertyaliaswebkitborderstart;
    case CSSPropertyID::kAliasWebkitBorderRadius:
      return &property_csspropertyaliaswebkitborderradius;
    case CSSPropertyID::kAliasWebkitColumnRule:
      return &property_csspropertyaliaswebkitcolumnrule;
    case CSSPropertyID::kAliasWebkitColumns:
      return &property_csspropertyaliaswebkitcolumns;
    case CSSPropertyID::kAliasWebkitFlex:
      return &property_csspropertyaliaswebkitflex;
    case CSSPropertyID::kAliasWebkitFlexFlow:
      return &property_csspropertyaliaswebkitflexflow;
    case CSSPropertyID::kAliasWebkitTransition:
      return &property_csspropertyaliaswebkittransition;
    case CSSPropertyID::kAliasEpubTextEmphasis:
      return &property_csspropertyaliasepubtextemphasis;
    default:
      NOTREACHED();
      return nullptr;
  }
}

const CSSUnresolvedProperty& GetNonAliasPropertyInternal(CSSPropertyID id) {
  DCHECK_NE(id, CSSPropertyID::kInvalid);
  DCHECK_NE(id, CSSPropertyID::kVariable);
  DCHECK_LE(id, lastCSSProperty);  // last property id
  static constexpr const CSSUnresolvedProperty* const property_classes[] = {
    &property_csspropertyanimationdelay,  // CSSPropertyAnimationDelay
    &property_csspropertyanimationdirection,  // CSSPropertyAnimationDirection
    &property_csspropertyanimationduration,  // CSSPropertyAnimationDuration
    &property_csspropertyanimationfillmode,  // CSSPropertyAnimationFillMode
    &property_csspropertyanimationiterationcount,  // CSSPropertyAnimationIterationCount
    &property_csspropertyanimationname,  // CSSPropertyAnimationName
    &property_csspropertyanimationplaystate,  // CSSPropertyAnimationPlayState
    &property_csspropertyanimationtimingfunction,  // CSSPropertyAnimationTimingFunction
    &property_csspropertytransitiondelay,  // CSSPropertyTransitionDelay
    &property_csspropertytransitionduration,  // CSSPropertyTransitionDuration
    &property_csspropertytransitionproperty,  // CSSPropertyTransitionProperty
    &property_csspropertytransitiontimingfunction,  // CSSPropertyTransitionTimingFunction
    &property_csspropertycolor,  // CSSPropertyColor
    &property_csspropertydirection,  // CSSPropertyDirection
    &property_csspropertyfontfamily,  // CSSPropertyFontFamily
    &property_csspropertyfontfeaturesettings,  // CSSPropertyFontFeatureSettings
    &property_csspropertyfontkerning,  // CSSPropertyFontKerning
    &property_csspropertyfontsize,  // CSSPropertyFontSize
    &property_csspropertyfontsizeadjust,  // CSSPropertyFontSizeAdjust
    &property_csspropertyfontstretch,  // CSSPropertyFontStretch
    &property_csspropertyfontstyle,  // CSSPropertyFontStyle
    &property_csspropertyfontvariantcaps,  // CSSPropertyFontVariantCaps
    &property_csspropertyfontvarianteastasian,  // CSSPropertyFontVariantEastAsian
    &property_csspropertyfontvariantligatures,  // CSSPropertyFontVariantLigatures
    &property_csspropertyfontvariantnumeric,  // CSSPropertyFontVariantNumeric
    &property_csspropertyfontvariationsettings,  // CSSPropertyFontVariationSettings
    &property_csspropertyfontweight,  // CSSPropertyFontWeight
    &property_csspropertytextorientation,  // CSSPropertyTextOrientation
    &property_csspropertytextrendering,  // CSSPropertyTextRendering
    &property_csspropertywebkitfontsmoothing,  // CSSPropertyWebkitFontSmoothing
    &property_csspropertywebkitlocale,  // CSSPropertyWebkitLocale
    &property_csspropertywebkittextorientation,  // CSSPropertyWebkitTextOrientation
    &property_csspropertywebkitwritingmode,  // CSSPropertyWebkitWritingMode
    &property_csspropertywritingmode,  // CSSPropertyWritingMode
    &property_csspropertyzoom,  // CSSPropertyZoom
    &property_csspropertyaligncontent,  // CSSPropertyAlignContent
    &property_csspropertyalignitems,  // CSSPropertyAlignItems
    &property_csspropertyalignself,  // CSSPropertyAlignSelf
    &property_csspropertyalignmentbaseline,  // CSSPropertyAlignmentBaseline
    &property_csspropertyall,  // CSSPropertyAll
    &property_csspropertybackdropfilter,  // CSSPropertyBackdropFilter
    &property_csspropertybackfacevisibility,  // CSSPropertyBackfaceVisibility
    &property_csspropertybackgroundattachment,  // CSSPropertyBackgroundAttachment
    &property_csspropertybackgroundblendmode,  // CSSPropertyBackgroundBlendMode
    &property_csspropertybackgroundclip,  // CSSPropertyBackgroundClip
    &property_csspropertybackgroundcolor,  // CSSPropertyBackgroundColor
    &property_csspropertybackgroundimage,  // CSSPropertyBackgroundImage
    &property_csspropertybackgroundorigin,  // CSSPropertyBackgroundOrigin
    &property_csspropertybackgroundpositionx,  // CSSPropertyBackgroundPositionX
    &property_csspropertybackgroundpositiony,  // CSSPropertyBackgroundPositionY
    &property_csspropertybackgroundrepeatx,  // CSSPropertyBackgroundRepeatX
    &property_csspropertybackgroundrepeaty,  // CSSPropertyBackgroundRepeatY
    &property_csspropertybackgroundsize,  // CSSPropertyBackgroundSize
    &property_csspropertybaselineshift,  // CSSPropertyBaselineShift
    &property_csspropertyblocksize,  // CSSPropertyBlockSize
    &property_csspropertyborderblockendcolor,  // CSSPropertyBorderBlockEndColor
    &property_csspropertyborderblockendstyle,  // CSSPropertyBorderBlockEndStyle
    &property_csspropertyborderblockendwidth,  // CSSPropertyBorderBlockEndWidth
    &property_csspropertyborderblockstartcolor,  // CSSPropertyBorderBlockStartColor
    &property_csspropertyborderblockstartstyle,  // CSSPropertyBorderBlockStartStyle
    &property_csspropertyborderblockstartwidth,  // CSSPropertyBorderBlockStartWidth
    &property_csspropertyborderbottomcolor,  // CSSPropertyBorderBottomColor
    &property_csspropertyborderbottomleftradius,  // CSSPropertyBorderBottomLeftRadius
    &property_csspropertyborderbottomrightradius,  // CSSPropertyBorderBottomRightRadius
    &property_csspropertyborderbottomstyle,  // CSSPropertyBorderBottomStyle
    &property_csspropertyborderbottomwidth,  // CSSPropertyBorderBottomWidth
    &property_csspropertybordercollapse,  // CSSPropertyBorderCollapse
    &property_csspropertyborderimageoutset,  // CSSPropertyBorderImageOutset
    &property_csspropertyborderimagerepeat,  // CSSPropertyBorderImageRepeat
    &property_csspropertyborderimageslice,  // CSSPropertyBorderImageSlice
    &property_csspropertyborderimagesource,  // CSSPropertyBorderImageSource
    &property_csspropertyborderimagewidth,  // CSSPropertyBorderImageWidth
    &property_csspropertyborderinlineendcolor,  // CSSPropertyBorderInlineEndColor
    &property_csspropertyborderinlineendstyle,  // CSSPropertyBorderInlineEndStyle
    &property_csspropertyborderinlineendwidth,  // CSSPropertyBorderInlineEndWidth
    &property_csspropertyborderinlinestartcolor,  // CSSPropertyBorderInlineStartColor
    &property_csspropertyborderinlinestartstyle,  // CSSPropertyBorderInlineStartStyle
    &property_csspropertyborderinlinestartwidth,  // CSSPropertyBorderInlineStartWidth
    &property_csspropertyborderleftcolor,  // CSSPropertyBorderLeftColor
    &property_csspropertyborderleftstyle,  // CSSPropertyBorderLeftStyle
    &property_csspropertyborderleftwidth,  // CSSPropertyBorderLeftWidth
    &property_csspropertyborderrightcolor,  // CSSPropertyBorderRightColor
    &property_csspropertyborderrightstyle,  // CSSPropertyBorderRightStyle
    &property_csspropertyborderrightwidth,  // CSSPropertyBorderRightWidth
    &property_csspropertybordertopcolor,  // CSSPropertyBorderTopColor
    &property_csspropertybordertopleftradius,  // CSSPropertyBorderTopLeftRadius
    &property_csspropertybordertoprightradius,  // CSSPropertyBorderTopRightRadius
    &property_csspropertybordertopstyle,  // CSSPropertyBorderTopStyle
    &property_csspropertybordertopwidth,  // CSSPropertyBorderTopWidth
    &property_csspropertybottom,  // CSSPropertyBottom
    &property_csspropertyboxshadow,  // CSSPropertyBoxShadow
    &property_csspropertyboxsizing,  // CSSPropertyBoxSizing
    &property_csspropertybreakafter,  // CSSPropertyBreakAfter
    &property_csspropertybreakbefore,  // CSSPropertyBreakBefore
    &property_csspropertybreakinside,  // CSSPropertyBreakInside
    &property_csspropertybufferedrendering,  // CSSPropertyBufferedRendering
    &property_csspropertycaptionside,  // CSSPropertyCaptionSide
    &property_csspropertycaretcolor,  // CSSPropertyCaretColor
    &property_csspropertyclear,  // CSSPropertyClear
    &property_csspropertyclip,  // CSSPropertyClip
    &property_csspropertyclippath,  // CSSPropertyClipPath
    &property_csspropertycliprule,  // CSSPropertyClipRule
    &property_csspropertycolorinterpolation,  // CSSPropertyColorInterpolation
    &property_csspropertycolorinterpolationfilters,  // CSSPropertyColorInterpolationFilters
    &property_csspropertycolorrendering,  // CSSPropertyColorRendering
    &property_csspropertycolumncount,  // CSSPropertyColumnCount
    &property_csspropertycolumnfill,  // CSSPropertyColumnFill
    &property_csspropertycolumngap,  // CSSPropertyColumnGap
    &property_csspropertycolumnrulecolor,  // CSSPropertyColumnRuleColor
    &property_csspropertycolumnrulestyle,  // CSSPropertyColumnRuleStyle
    &property_csspropertycolumnrulewidth,  // CSSPropertyColumnRuleWidth
    &property_csspropertycolumnspan,  // CSSPropertyColumnSpan
    &property_csspropertycolumnwidth,  // CSSPropertyColumnWidth
    &property_csspropertycontain,  // CSSPropertyContain
    &property_csspropertycontent,  // CSSPropertyContent
    &property_csspropertycounterincrement,  // CSSPropertyCounterIncrement
    &property_csspropertycounterreset,  // CSSPropertyCounterReset
    &property_csspropertycursor,  // CSSPropertyCursor
    &property_csspropertycx,  // CSSPropertyCx
    &property_csspropertycy,  // CSSPropertyCy
    &property_csspropertyd,  // CSSPropertyD
    &property_csspropertydisplay,  // CSSPropertyDisplay
    &property_csspropertydominantbaseline,  // CSSPropertyDominantBaseline
    &property_csspropertyemptycells,  // CSSPropertyEmptyCells
    &property_csspropertyfill,  // CSSPropertyFill
    &property_csspropertyfillopacity,  // CSSPropertyFillOpacity
    &property_csspropertyfillrule,  // CSSPropertyFillRule
    &property_csspropertyfilter,  // CSSPropertyFilter
    &property_csspropertyflexbasis,  // CSSPropertyFlexBasis
    &property_csspropertyflexdirection,  // CSSPropertyFlexDirection
    &property_csspropertyflexgrow,  // CSSPropertyFlexGrow
    &property_csspropertyflexshrink,  // CSSPropertyFlexShrink
    &property_csspropertyflexwrap,  // CSSPropertyFlexWrap
    &property_csspropertyfloat,  // CSSPropertyFloat
    &property_csspropertyfloodcolor,  // CSSPropertyFloodColor
    &property_csspropertyfloodopacity,  // CSSPropertyFloodOpacity
    &property_csspropertyfontdisplay,  // CSSPropertyFontDisplay
    &property_csspropertygridautocolumns,  // CSSPropertyGridAutoColumns
    &property_csspropertygridautoflow,  // CSSPropertyGridAutoFlow
    &property_csspropertygridautorows,  // CSSPropertyGridAutoRows
    &property_csspropertygridcolumnend,  // CSSPropertyGridColumnEnd
    &property_csspropertygridcolumnstart,  // CSSPropertyGridColumnStart
    &property_csspropertygridrowend,  // CSSPropertyGridRowEnd
    &property_csspropertygridrowstart,  // CSSPropertyGridRowStart
    &property_csspropertygridtemplateareas,  // CSSPropertyGridTemplateAreas
    &property_csspropertygridtemplatecolumns,  // CSSPropertyGridTemplateColumns
    &property_csspropertygridtemplaterows,  // CSSPropertyGridTemplateRows
    &property_csspropertyheight,  // CSSPropertyHeight
    &property_csspropertyhyphens,  // CSSPropertyHyphens
    &property_csspropertyimageorientation,  // CSSPropertyImageOrientation
    &property_csspropertyimagerendering,  // CSSPropertyImageRendering
    &property_csspropertyinlinesize,  // CSSPropertyInlineSize
    &property_csspropertyinsetblockend,  // CSSPropertyInsetBlockEnd
    &property_csspropertyinsetblockstart,  // CSSPropertyInsetBlockStart
    &property_csspropertyinsetinlineend,  // CSSPropertyInsetInlineEnd
    &property_csspropertyinsetinlinestart,  // CSSPropertyInsetInlineStart
    &property_csspropertyisolation,  // CSSPropertyIsolation
    &property_csspropertyjustifycontent,  // CSSPropertyJustifyContent
    &property_csspropertyjustifyitems,  // CSSPropertyJustifyItems
    &property_csspropertyjustifyself,  // CSSPropertyJustifySelf
    &property_csspropertyleft,  // CSSPropertyLeft
    &property_csspropertyletterspacing,  // CSSPropertyLetterSpacing
    &property_csspropertylightingcolor,  // CSSPropertyLightingColor
    &property_csspropertylinebreak,  // CSSPropertyLineBreak
    &property_csspropertylineheight,  // CSSPropertyLineHeight
    &property_csspropertylineheightstep,  // CSSPropertyLineHeightStep
    &property_csspropertyliststyleimage,  // CSSPropertyListStyleImage
    &property_csspropertyliststyleposition,  // CSSPropertyListStylePosition
    &property_csspropertyliststyletype,  // CSSPropertyListStyleType
    &property_csspropertymarginblockend,  // CSSPropertyMarginBlockEnd
    &property_csspropertymarginblockstart,  // CSSPropertyMarginBlockStart
    &property_csspropertymarginbottom,  // CSSPropertyMarginBottom
    &property_csspropertymargininlineend,  // CSSPropertyMarginInlineEnd
    &property_csspropertymargininlinestart,  // CSSPropertyMarginInlineStart
    &property_csspropertymarginleft,  // CSSPropertyMarginLeft
    &property_csspropertymarginright,  // CSSPropertyMarginRight
    &property_csspropertymargintop,  // CSSPropertyMarginTop
    &property_csspropertymarkerend,  // CSSPropertyMarkerEnd
    &property_csspropertymarkermid,  // CSSPropertyMarkerMid
    &property_csspropertymarkerstart,  // CSSPropertyMarkerStart
    &property_csspropertymask,  // CSSPropertyMask
    &property_csspropertymasksourcetype,  // CSSPropertyMaskSourceType
    &property_csspropertymasktype,  // CSSPropertyMaskType
    &property_csspropertymaxblocksize,  // CSSPropertyMaxBlockSize
    &property_csspropertymaxheight,  // CSSPropertyMaxHeight
    &property_csspropertymaxinlinesize,  // CSSPropertyMaxInlineSize
    &property_csspropertymaxwidth,  // CSSPropertyMaxWidth
    &property_csspropertymaxzoom,  // CSSPropertyMaxZoom
    &property_csspropertyminblocksize,  // CSSPropertyMinBlockSize
    &property_csspropertyminheight,  // CSSPropertyMinHeight
    &property_csspropertymininlinesize,  // CSSPropertyMinInlineSize
    &property_csspropertyminwidth,  // CSSPropertyMinWidth
    &property_csspropertyminzoom,  // CSSPropertyMinZoom
    &property_csspropertymixblendmode,  // CSSPropertyMixBlendMode
    &property_csspropertyobjectfit,  // CSSPropertyObjectFit
    &property_csspropertyobjectposition,  // CSSPropertyObjectPosition
    &property_csspropertyoffsetanchor,  // CSSPropertyOffsetAnchor
    &property_csspropertyoffsetdistance,  // CSSPropertyOffsetDistance
    &property_csspropertyoffsetpath,  // CSSPropertyOffsetPath
    &property_csspropertyoffsetposition,  // CSSPropertyOffsetPosition
    &property_csspropertyoffsetrotate,  // CSSPropertyOffsetRotate
    &property_csspropertyopacity,  // CSSPropertyOpacity
    &property_csspropertyorder,  // CSSPropertyOrder
    &property_csspropertyorientation,  // CSSPropertyOrientation
    &property_csspropertyorphans,  // CSSPropertyOrphans
    &property_csspropertyoutlinecolor,  // CSSPropertyOutlineColor
    &property_csspropertyoutlineoffset,  // CSSPropertyOutlineOffset
    &property_csspropertyoutlinestyle,  // CSSPropertyOutlineStyle
    &property_csspropertyoutlinewidth,  // CSSPropertyOutlineWidth
    &property_csspropertyoverflowanchor,  // CSSPropertyOverflowAnchor
    &property_csspropertyoverflowwrap,  // CSSPropertyOverflowWrap
    &property_csspropertyoverflowx,  // CSSPropertyOverflowX
    &property_csspropertyoverflowy,  // CSSPropertyOverflowY
    &property_csspropertyoverscrollbehaviorx,  // CSSPropertyOverscrollBehaviorX
    &property_csspropertyoverscrollbehaviory,  // CSSPropertyOverscrollBehaviorY
    &property_csspropertypaddingblockend,  // CSSPropertyPaddingBlockEnd
    &property_csspropertypaddingblockstart,  // CSSPropertyPaddingBlockStart
    &property_csspropertypaddingbottom,  // CSSPropertyPaddingBottom
    &property_csspropertypaddinginlineend,  // CSSPropertyPaddingInlineEnd
    &property_csspropertypaddinginlinestart,  // CSSPropertyPaddingInlineStart
    &property_csspropertypaddingleft,  // CSSPropertyPaddingLeft
    &property_csspropertypaddingright,  // CSSPropertyPaddingRight
    &property_csspropertypaddingtop,  // CSSPropertyPaddingTop
    &property_csspropertypage,  // CSSPropertyPage
    &property_csspropertypaintorder,  // CSSPropertyPaintOrder
    &property_csspropertyperspective,  // CSSPropertyPerspective
    &property_csspropertyperspectiveorigin,  // CSSPropertyPerspectiveOrigin
    &property_csspropertypointerevents,  // CSSPropertyPointerEvents
    &property_csspropertyposition,  // CSSPropertyPosition
    &property_csspropertyquotes,  // CSSPropertyQuotes
    &property_csspropertyr,  // CSSPropertyR
    &property_csspropertyresize,  // CSSPropertyResize
    &property_csspropertyright,  // CSSPropertyRight
    &property_csspropertyrotate,  // CSSPropertyRotate
    &property_csspropertyrowgap,  // CSSPropertyRowGap
    &property_csspropertyrx,  // CSSPropertyRx
    &property_csspropertyry,  // CSSPropertyRy
    &property_csspropertyscale,  // CSSPropertyScale
    &property_csspropertyscrollbehavior,  // CSSPropertyScrollBehavior
    &property_csspropertyscrollcustomization,  // CSSPropertyScrollCustomization
    &property_csspropertyscrollmarginblockend,  // CSSPropertyScrollMarginBlockEnd
    &property_csspropertyscrollmarginblockstart,  // CSSPropertyScrollMarginBlockStart
    &property_csspropertyscrollmarginbottom,  // CSSPropertyScrollMarginBottom
    &property_csspropertyscrollmargininlineend,  // CSSPropertyScrollMarginInlineEnd
    &property_csspropertyscrollmargininlinestart,  // CSSPropertyScrollMarginInlineStart
    &property_csspropertyscrollmarginleft,  // CSSPropertyScrollMarginLeft
    &property_csspropertyscrollmarginright,  // CSSPropertyScrollMarginRight
    &property_csspropertyscrollmargintop,  // CSSPropertyScrollMarginTop
    &property_csspropertyscrollpaddingblockend,  // CSSPropertyScrollPaddingBlockEnd
    &property_csspropertyscrollpaddingblockstart,  // CSSPropertyScrollPaddingBlockStart
    &property_csspropertyscrollpaddingbottom,  // CSSPropertyScrollPaddingBottom
    &property_csspropertyscrollpaddinginlineend,  // CSSPropertyScrollPaddingInlineEnd
    &property_csspropertyscrollpaddinginlinestart,  // CSSPropertyScrollPaddingInlineStart
    &property_csspropertyscrollpaddingleft,  // CSSPropertyScrollPaddingLeft
    &property_csspropertyscrollpaddingright,  // CSSPropertyScrollPaddingRight
    &property_csspropertyscrollpaddingtop,  // CSSPropertyScrollPaddingTop
    &property_csspropertyscrollsnapalign,  // CSSPropertyScrollSnapAlign
    &property_csspropertyscrollsnapstop,  // CSSPropertyScrollSnapStop
    &property_csspropertyscrollsnaptype,  // CSSPropertyScrollSnapType
    &property_csspropertyshapeimagethreshold,  // CSSPropertyShapeImageThreshold
    &property_csspropertyshapemargin,  // CSSPropertyShapeMargin
    &property_csspropertyshapeoutside,  // CSSPropertyShapeOutside
    &property_csspropertyshaperendering,  // CSSPropertyShapeRendering
    &property_csspropertysize,  // CSSPropertySize
    &property_csspropertyspeak,  // CSSPropertySpeak
    &property_csspropertysrc,  // CSSPropertySrc
    &property_csspropertystopcolor,  // CSSPropertyStopColor
    &property_csspropertystopopacity,  // CSSPropertyStopOpacity
    &property_csspropertystroke,  // CSSPropertyStroke
    &property_csspropertystrokedasharray,  // CSSPropertyStrokeDasharray
    &property_csspropertystrokedashoffset,  // CSSPropertyStrokeDashoffset
    &property_csspropertystrokelinecap,  // CSSPropertyStrokeLinecap
    &property_csspropertystrokelinejoin,  // CSSPropertyStrokeLinejoin
    &property_csspropertystrokemiterlimit,  // CSSPropertyStrokeMiterlimit
    &property_csspropertystrokeopacity,  // CSSPropertyStrokeOpacity
    &property_csspropertystrokewidth,  // CSSPropertyStrokeWidth
    &property_csspropertytabsize,  // CSSPropertyTabSize
    &property_csspropertytablelayout,  // CSSPropertyTableLayout
    &property_csspropertytextalign,  // CSSPropertyTextAlign
    &property_csspropertytextalignlast,  // CSSPropertyTextAlignLast
    &property_csspropertytextanchor,  // CSSPropertyTextAnchor
    &property_csspropertytextcombineupright,  // CSSPropertyTextCombineUpright
    &property_csspropertytextdecorationcolor,  // CSSPropertyTextDecorationColor
    &property_csspropertytextdecorationline,  // CSSPropertyTextDecorationLine
    &property_csspropertytextdecorationskipink,  // CSSPropertyTextDecorationSkipInk
    &property_csspropertytextdecorationstyle,  // CSSPropertyTextDecorationStyle
    &property_csspropertytextindent,  // CSSPropertyTextIndent
    &property_csspropertytextjustify,  // CSSPropertyTextJustify
    &property_csspropertytextoverflow,  // CSSPropertyTextOverflow
    &property_csspropertytextshadow,  // CSSPropertyTextShadow
    &property_csspropertytextsizeadjust,  // CSSPropertyTextSizeAdjust
    &property_csspropertytexttransform,  // CSSPropertyTextTransform
    &property_csspropertytextunderlineposition,  // CSSPropertyTextUnderlinePosition
    &property_csspropertytop,  // CSSPropertyTop
    &property_csspropertytouchaction,  // CSSPropertyTouchAction
    &property_csspropertytransform,  // CSSPropertyTransform
    &property_csspropertytransformbox,  // CSSPropertyTransformBox
    &property_csspropertytransformorigin,  // CSSPropertyTransformOrigin
    &property_csspropertytransformstyle,  // CSSPropertyTransformStyle
    &property_csspropertytranslate,  // CSSPropertyTranslate
    &property_csspropertyunicodebidi,  // CSSPropertyUnicodeBidi
    &property_csspropertyunicoderange,  // CSSPropertyUnicodeRange
    &property_csspropertyuserselect,  // CSSPropertyUserSelect
    &property_csspropertyuserzoom,  // CSSPropertyUserZoom
    &property_csspropertyvectoreffect,  // CSSPropertyVectorEffect
    &property_csspropertyverticalalign,  // CSSPropertyVerticalAlign
    &property_csspropertyviewportfit,  // CSSPropertyViewportFit
    &property_csspropertyvisibility,  // CSSPropertyVisibility
    &property_csspropertywebkitappregion,  // CSSPropertyWebkitAppRegion
    &property_csspropertywebkitappearance,  // CSSPropertyWebkitAppearance
    &property_csspropertywebkitborderhorizontalspacing,  // CSSPropertyWebkitBorderHorizontalSpacing
    &property_csspropertywebkitborderimage,  // CSSPropertyWebkitBorderImage
    &property_csspropertywebkitborderverticalspacing,  // CSSPropertyWebkitBorderVerticalSpacing
    &property_csspropertywebkitboxalign,  // CSSPropertyWebkitBoxAlign
    &property_csspropertywebkitboxdecorationbreak,  // CSSPropertyWebkitBoxDecorationBreak
    &property_csspropertywebkitboxdirection,  // CSSPropertyWebkitBoxDirection
    &property_csspropertywebkitboxflex,  // CSSPropertyWebkitBoxFlex
    &property_csspropertywebkitboxordinalgroup,  // CSSPropertyWebkitBoxOrdinalGroup
    &property_csspropertywebkitboxorient,  // CSSPropertyWebkitBoxOrient
    &property_csspropertywebkitboxpack,  // CSSPropertyWebkitBoxPack
    &property_csspropertywebkitboxreflect,  // CSSPropertyWebkitBoxReflect
    &property_csspropertywebkitfontsizedelta,  // CSSPropertyWebkitFontSizeDelta
    &property_csspropertywebkithighlight,  // CSSPropertyWebkitHighlight
    &property_csspropertywebkithyphenatecharacter,  // CSSPropertyWebkitHyphenateCharacter
    &property_csspropertywebkitlinebreak,  // CSSPropertyWebkitLineBreak
    &property_csspropertywebkitlineclamp,  // CSSPropertyWebkitLineClamp
    &property_csspropertywebkitmarginaftercollapse,  // CSSPropertyWebkitMarginAfterCollapse
    &property_csspropertywebkitmarginbeforecollapse,  // CSSPropertyWebkitMarginBeforeCollapse
    &property_csspropertywebkitmarginbottomcollapse,  // CSSPropertyWebkitMarginBottomCollapse
    &property_csspropertywebkitmargintopcollapse,  // CSSPropertyWebkitMarginTopCollapse
    &property_csspropertywebkitmaskboximageoutset,  // CSSPropertyWebkitMaskBoxImageOutset
    &property_csspropertywebkitmaskboximagerepeat,  // CSSPropertyWebkitMaskBoxImageRepeat
    &property_csspropertywebkitmaskboximageslice,  // CSSPropertyWebkitMaskBoxImageSlice
    &property_csspropertywebkitmaskboximagesource,  // CSSPropertyWebkitMaskBoxImageSource
    &property_csspropertywebkitmaskboximagewidth,  // CSSPropertyWebkitMaskBoxImageWidth
    &property_csspropertywebkitmaskclip,  // CSSPropertyWebkitMaskClip
    &property_csspropertywebkitmaskcomposite,  // CSSPropertyWebkitMaskComposite
    &property_csspropertywebkitmaskimage,  // CSSPropertyWebkitMaskImage
    &property_csspropertywebkitmaskorigin,  // CSSPropertyWebkitMaskOrigin
    &property_csspropertywebkitmaskpositionx,  // CSSPropertyWebkitMaskPositionX
    &property_csspropertywebkitmaskpositiony,  // CSSPropertyWebkitMaskPositionY
    &property_csspropertywebkitmaskrepeatx,  // CSSPropertyWebkitMaskRepeatX
    &property_csspropertywebkitmaskrepeaty,  // CSSPropertyWebkitMaskRepeatY
    &property_csspropertywebkitmasksize,  // CSSPropertyWebkitMaskSize
    &property_csspropertywebkitperspectiveoriginx,  // CSSPropertyWebkitPerspectiveOriginX
    &property_csspropertywebkitperspectiveoriginy,  // CSSPropertyWebkitPerspectiveOriginY
    &property_csspropertywebkitprintcoloradjust,  // CSSPropertyWebkitPrintColorAdjust
    &property_csspropertywebkitrtlordering,  // CSSPropertyWebkitRtlOrdering
    &property_csspropertywebkitrubyposition,  // CSSPropertyWebkitRubyPosition
    &property_csspropertywebkittaphighlightcolor,  // CSSPropertyWebkitTapHighlightColor
    &property_csspropertywebkittextcombine,  // CSSPropertyWebkitTextCombine
    &property_csspropertywebkittextdecorationsineffect,  // CSSPropertyWebkitTextDecorationsInEffect
    &property_csspropertywebkittextemphasiscolor,  // CSSPropertyWebkitTextEmphasisColor
    &property_csspropertywebkittextemphasisposition,  // CSSPropertyWebkitTextEmphasisPosition
    &property_csspropertywebkittextemphasisstyle,  // CSSPropertyWebkitTextEmphasisStyle
    &property_csspropertywebkittextfillcolor,  // CSSPropertyWebkitTextFillColor
    &property_csspropertywebkittextsecurity,  // CSSPropertyWebkitTextSecurity
    &property_csspropertywebkittextstrokecolor,  // CSSPropertyWebkitTextStrokeColor
    &property_csspropertywebkittextstrokewidth,  // CSSPropertyWebkitTextStrokeWidth
    &property_csspropertywebkittransformoriginx,  // CSSPropertyWebkitTransformOriginX
    &property_csspropertywebkittransformoriginy,  // CSSPropertyWebkitTransformOriginY
    &property_csspropertywebkittransformoriginz,  // CSSPropertyWebkitTransformOriginZ
    &property_csspropertywebkituserdrag,  // CSSPropertyWebkitUserDrag
    &property_csspropertywebkitusermodify,  // CSSPropertyWebkitUserModify
    &property_csspropertywhitespace,  // CSSPropertyWhiteSpace
    &property_csspropertywidows,  // CSSPropertyWidows
    &property_csspropertywidth,  // CSSPropertyWidth
    &property_csspropertywillchange,  // CSSPropertyWillChange
    &property_csspropertywordbreak,  // CSSPropertyWordBreak
    &property_csspropertywordspacing,  // CSSPropertyWordSpacing
    &property_csspropertyx,  // CSSPropertyX
    &property_csspropertyy,  // CSSPropertyY
    &property_csspropertyzindex,  // CSSPropertyZIndex
    &property_csspropertyanimation,  // CSSPropertyAnimation
    &property_csspropertybackground,  // CSSPropertyBackground
    &property_csspropertybackgroundposition,  // CSSPropertyBackgroundPosition
    &property_csspropertybackgroundrepeat,  // CSSPropertyBackgroundRepeat
    &property_csspropertyborder,  // CSSPropertyBorder
    &property_csspropertyborderblock,  // CSSPropertyBorderBlock
    &property_csspropertyborderblockcolor,  // CSSPropertyBorderBlockColor
    &property_csspropertyborderblockend,  // CSSPropertyBorderBlockEnd
    &property_csspropertyborderblockstart,  // CSSPropertyBorderBlockStart
    &property_csspropertyborderblockstyle,  // CSSPropertyBorderBlockStyle
    &property_csspropertyborderblockwidth,  // CSSPropertyBorderBlockWidth
    &property_csspropertyborderbottom,  // CSSPropertyBorderBottom
    &property_csspropertybordercolor,  // CSSPropertyBorderColor
    &property_csspropertyborderimage,  // CSSPropertyBorderImage
    &property_csspropertyborderinline,  // CSSPropertyBorderInline
    &property_csspropertyborderinlinecolor,  // CSSPropertyBorderInlineColor
    &property_csspropertyborderinlineend,  // CSSPropertyBorderInlineEnd
    &property_csspropertyborderinlinestart,  // CSSPropertyBorderInlineStart
    &property_csspropertyborderinlinestyle,  // CSSPropertyBorderInlineStyle
    &property_csspropertyborderinlinewidth,  // CSSPropertyBorderInlineWidth
    &property_csspropertyborderleft,  // CSSPropertyBorderLeft
    &property_csspropertyborderradius,  // CSSPropertyBorderRadius
    &property_csspropertyborderright,  // CSSPropertyBorderRight
    &property_csspropertyborderspacing,  // CSSPropertyBorderSpacing
    &property_csspropertyborderstyle,  // CSSPropertyBorderStyle
    &property_csspropertybordertop,  // CSSPropertyBorderTop
    &property_csspropertyborderwidth,  // CSSPropertyBorderWidth
    &property_csspropertycolumnrule,  // CSSPropertyColumnRule
    &property_csspropertycolumns,  // CSSPropertyColumns
    &property_csspropertyflex,  // CSSPropertyFlex
    &property_csspropertyflexflow,  // CSSPropertyFlexFlow
    &property_csspropertyfont,  // CSSPropertyFont
    &property_csspropertyfontvariant,  // CSSPropertyFontVariant
    &property_csspropertygap,  // CSSPropertyGap
    &property_csspropertygrid,  // CSSPropertyGrid
    &property_csspropertygridarea,  // CSSPropertyGridArea
    &property_csspropertygridcolumn,  // CSSPropertyGridColumn
    &property_csspropertygridcolumngap,  // CSSPropertyGridColumnGap
    &property_csspropertygridgap,  // CSSPropertyGridGap
    &property_csspropertygridrow,  // CSSPropertyGridRow
    &property_csspropertygridrowgap,  // CSSPropertyGridRowGap
    &property_csspropertygridtemplate,  // CSSPropertyGridTemplate
    &property_csspropertyinset,  // CSSPropertyInset
    &property_csspropertyinsetblock,  // CSSPropertyInsetBlock
    &property_csspropertyinsetinline,  // CSSPropertyInsetInline
    &property_csspropertyliststyle,  // CSSPropertyListStyle
    &property_csspropertymargin,  // CSSPropertyMargin
    &property_csspropertymarginblock,  // CSSPropertyMarginBlock
    &property_csspropertymargininline,  // CSSPropertyMarginInline
    &property_csspropertymarker,  // CSSPropertyMarker
    &property_csspropertyoffset,  // CSSPropertyOffset
    &property_csspropertyoutline,  // CSSPropertyOutline
    &property_csspropertyoverflow,  // CSSPropertyOverflow
    &property_csspropertyoverscrollbehavior,  // CSSPropertyOverscrollBehavior
    &property_csspropertypadding,  // CSSPropertyPadding
    &property_csspropertypaddingblock,  // CSSPropertyPaddingBlock
    &property_csspropertypaddinginline,  // CSSPropertyPaddingInline
    &property_csspropertypagebreakafter,  // CSSPropertyPageBreakAfter
    &property_csspropertypagebreakbefore,  // CSSPropertyPageBreakBefore
    &property_csspropertypagebreakinside,  // CSSPropertyPageBreakInside
    &property_csspropertyplacecontent,  // CSSPropertyPlaceContent
    &property_csspropertyplaceitems,  // CSSPropertyPlaceItems
    &property_csspropertyplaceself,  // CSSPropertyPlaceSelf
    &property_csspropertyscrollmargin,  // CSSPropertyScrollMargin
    &property_csspropertyscrollmarginblock,  // CSSPropertyScrollMarginBlock
    &property_csspropertyscrollmargininline,  // CSSPropertyScrollMarginInline
    &property_csspropertyscrollpadding,  // CSSPropertyScrollPadding
    &property_csspropertyscrollpaddingblock,  // CSSPropertyScrollPaddingBlock
    &property_csspropertyscrollpaddinginline,  // CSSPropertyScrollPaddingInline
    &property_csspropertytextdecoration,  // CSSPropertyTextDecoration
    &property_csspropertytransition,  // CSSPropertyTransition
    &property_csspropertywebkitcolumnbreakafter,  // CSSPropertyWebkitColumnBreakAfter
    &property_csspropertywebkitcolumnbreakbefore,  // CSSPropertyWebkitColumnBreakBefore
    &property_csspropertywebkitcolumnbreakinside,  // CSSPropertyWebkitColumnBreakInside
    &property_csspropertywebkitmargincollapse,  // CSSPropertyWebkitMarginCollapse
    &property_csspropertywebkitmask,  // CSSPropertyWebkitMask
    &property_csspropertywebkitmaskboximage,  // CSSPropertyWebkitMaskBoxImage
    &property_csspropertywebkitmaskposition,  // CSSPropertyWebkitMaskPosition
    &property_csspropertywebkitmaskrepeat,  // CSSPropertyWebkitMaskRepeat
    &property_csspropertywebkittextemphasis,  // CSSPropertyWebkitTextEmphasis
    &property_csspropertywebkittextstroke,  // CSSPropertyWebkitTextStroke
  };
  // Subtract 2 because CSSPropertyID::kInvalid and CSSPropertyID::kVariable do not
  // appear in the array.
  return *property_classes[static_cast<int>(id) - 2];
}

}  // namespace blink
