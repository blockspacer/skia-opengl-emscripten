// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/style/templates/computed_style_base.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_group_config.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/css_properties_ranking.json5
//   ../../third_party/blink/renderer/core/css/css_value_keywords.json5
//   ../../third_party/blink/renderer/core/style/computed_style_diff_functions.json5
//   ../../third_party/blink/renderer/core/style/computed_style_extra_fields.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_COMPUTED_STYLE_BASE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_COMPUTED_STYLE_BASE_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/layout/layout_theme.h"
#include "third_party/blink/renderer/core/style/computed_style_constants.h"
#include "third_party/blink/renderer/core/style/data_ref.h"
#include "third_party/blink/renderer/core/style/member_copy.h"
#include "third_party/blink/renderer/core/style/computed_style_initial_values.h"
#include "cc/input/scroll_snap_data.h"
#include "third_party/blink/renderer/core/animation/css/css_animation_data.h"
#include "third_party/blink/renderer/core/animation/css/css_transition_data.h"
#include "third_party/blink/renderer/core/css/css_property_names.h"
#include "third_party/blink/renderer/core/css/style_color.h"
#include "third_party/blink/renderer/core/scroll/scroll_customization.h"
#include "third_party/blink/renderer/core/style/applied_text_decoration_list.h"
#include "third_party/blink/renderer/core/style/basic_shapes.h"
#include "third_party/blink/renderer/core/style/clip_path_operation.h"
#include "third_party/blink/renderer/core/style/content_data.h"
#include "third_party/blink/renderer/core/style/counter_directives.h"
#include "third_party/blink/renderer/core/style/cursor_list.h"
#include "third_party/blink/renderer/core/style/fill_layer.h"
#include "third_party/blink/renderer/core/style/gap_length.h"
#include "third_party/blink/renderer/core/style/grid_area.h"
#include "third_party/blink/renderer/core/style/grid_position.h"
#include "third_party/blink/renderer/core/style/grid_track_size.h"
#include "third_party/blink/renderer/core/style/named_grid_lines_map.h"
#include "third_party/blink/renderer/core/style/nine_piece_image.h"
#include "third_party/blink/renderer/core/style/ordered_named_grid_lines.h"
#include "third_party/blink/renderer/core/style/paint_images.h"
#include "third_party/blink/renderer/core/style/quotes_data.h"
#include "third_party/blink/renderer/core/style/shadow_list.h"
#include "third_party/blink/renderer/core/style/shape_value.h"
#include "third_party/blink/renderer/core/style/style_content_alignment_data.h"
#include "third_party/blink/renderer/core/style/style_filter_data.h"
#include "third_party/blink/renderer/core/style/style_image.h"
#include "third_party/blink/renderer/core/style/style_inherited_variables.h"
#include "third_party/blink/renderer/core/style/style_initial_data.h"
#include "third_party/blink/renderer/core/style/style_non_inherited_variables.h"
#include "third_party/blink/renderer/core/style/style_offset_rotation.h"
#include "third_party/blink/renderer/core/style/style_reflection.h"
#include "third_party/blink/renderer/core/style/style_self_alignment_data.h"
#include "third_party/blink/renderer/core/style/text_size_adjust.h"
#include "third_party/blink/renderer/core/style/transform_origin.h"
#include "third_party/blink/renderer/platform/fonts/font.h"
#include "third_party/blink/renderer/platform/geometry/float_size.h"
#include "third_party/blink/renderer/platform/geometry/layout_unit.h"
#include "third_party/blink/renderer/platform/geometry/length.h"
#include "third_party/blink/renderer/platform/geometry/length_box.h"
#include "third_party/blink/renderer/platform/geometry/length_point.h"
#include "third_party/blink/renderer/platform/geometry/length_size.h"
#include "third_party/blink/renderer/platform/graphics/color.h"
#include "third_party/blink/renderer/platform/graphics/graphics_types.h"
#include "third_party/blink/renderer/platform/graphics/touch_action.h"
#include "third_party/blink/renderer/platform/text/tab_size.h"
#include "third_party/blink/renderer/platform/text/text_direction.h"
#include "third_party/blink/renderer/platform/text/text_justify.h"
#include "third_party/blink/renderer/platform/text/unicode_bidi.h"
#include "third_party/blink/renderer/platform/text/writing_mode.h"
#include "third_party/blink/renderer/platform/transforms/rotate_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/scale_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/transform_operations.h"
#include "third_party/blink/renderer/platform/transforms/translate_transform_operation.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"


namespace blink {

// Forward declaration for diff functions.
class ComputedStyle;

// The generated portion of ComputedStyle. For more info, see the header comment
// in ComputedStyle.h.
//
// ComputedStyleBase is a generated class that stores data members or 'fields'
// used in ComputedStyle. These fields can represent CSS properties or internal
// style information.
//
// STORAGE:
//
// Fields are organised in a tree structure, where a node (called a 'group')
// stores a set of fields and a set of pointers to child nodes (called
// 'subgroups'). We can visualise the tree structure with ComputedStyleBase as
// the root node:
//
// ComputedStyleBase (fields: display, vertical-align, ...)
//  |- StyleSurroundData (fields: padding, border, ...)
//  |- StyleBoxData (fields: width, height, ...)
//  |- ...
//  |- StyleRareNonInheritedData (fields: box-shadow, text-overflow, ...)
//      |- StyleFlexibleBoxData (fields: flex-direction, flex-wrap, ...)
//      |- ...
//
// This design saves memory by allowing multiple ComputedStyleBases to share the
// same instance of a subgroup. For example, if a page never uses flex box
// properties, then every ComputedStyleBase can share the same instance of
// StyleFlexibleBoxData. Without this sharing, we would need to allocate a copy
// of all the flex box fields for every ComputedStyleBase. Similarly, when an
// element inherits from its parent, its ComputedStyleBase can simply share all
// of its subgroups with the parent's.
//
// INTERFACE:
//
// The functions generated for a field is determined by its 'template'. For
// example, a field with the 'keyword' template has only one setter, whereas an
// 'external' field has an extra setter that takes an rvalue reference. A list
// of the available templates can be found in css_properties.json5.
class ComputedStyleBase {
 public:
  inline bool IndependentInheritedEqual(const ComputedStyleBase& o) const {
    return (
        white_space_ == o.white_space_
        && pointer_events_ == o.pointer_events_
        && text_transform_ == o.text_transform_
        && visibility_ == o.visibility_
        && border_collapse_ == o.border_collapse_
        && box_direction_ == o.box_direction_
        && caption_side_ == o.caption_side_
        && empty_cells_ == o.empty_cells_
        && list_style_position_ == o.list_style_position_
        && print_color_adjust_ == o.print_color_adjust_
        && rtl_ordering_ == o.rtl_ordering_

    );
  }

  inline bool NonIndependentInheritedEqual(const ComputedStyleBase& o) const {
    return (
        inherited_data_ == o.inherited_data_
        && rare_inherited_usage_less_than_40_percent_data_ == o.rare_inherited_usage_less_than_40_percent_data_
        && cursor_ == o.cursor_
        && list_style_type_ == o.list_style_type_
        && text_align_ == o.text_align_
        && inside_link_ == o.inside_link_
        && writing_mode_ == o.writing_mode_
        && dark_color_scheme_ == o.dark_color_scheme_
        && direction_ == o.direction_
        && has_simple_underline_ == o.has_simple_underline_

    );
  }

  inline bool InheritedEqual(const ComputedStyleBase& o) const {
    return IndependentInheritedEqual(o) && NonIndependentInheritedEqual(o);
  }

  inline bool NonInheritedEqual(const ComputedStyleBase& o) const {
    return (
        rare_non_inherited_usage_less_than_13_percent_data_ == o.rare_non_inherited_usage_less_than_13_percent_data_
        && box_data_ == o.box_data_
        && surround_data_ == o.surround_data_
        && visual_data_ == o.visual_data_
        && background_data_ == o.background_data_
        && display_ == o.display_
        && original_display_ == o.original_display_
        && break_after_ == o.break_after_
        && break_before_ == o.break_before_
        && vertical_align_ == o.vertical_align_
        && break_inside_ == o.break_inside_
        && clear_ == o.clear_
        && floating_ == o.floating_
        && overflow_x_ == o.overflow_x_
        && overflow_y_ == o.overflow_y_
        && position_ == o.position_
        && unicode_bidi_ == o.unicode_bidi_
        && overflow_anchor_ == o.overflow_anchor_
        && overscroll_behavior_x_ == o.overscroll_behavior_x_
        && overscroll_behavior_y_ == o.overscroll_behavior_y_
        && scroll_snap_stop_ == o.scroll_snap_stop_
        && table_layout_ == o.table_layout_
        && transform_box_ == o.transform_box_

    );
  }

  inline bool InheritedDataShared(const ComputedStyleBase& o) const {
    return (
        inherited_data_.Get() == o.inherited_data_.Get()
        && rare_inherited_usage_less_than_40_percent_data_.Get() == o.rare_inherited_usage_less_than_40_percent_data_.Get()
        && white_space_ == o.white_space_
        && cursor_ == o.cursor_
        && list_style_type_ == o.list_style_type_
        && pointer_events_ == o.pointer_events_
        && text_align_ == o.text_align_
        && inside_link_ == o.inside_link_
        && text_transform_ == o.text_transform_
        && visibility_ == o.visibility_
        && writing_mode_ == o.writing_mode_
        && border_collapse_ == o.border_collapse_
        && box_direction_ == o.box_direction_
        && caption_side_ == o.caption_side_
        && dark_color_scheme_ == o.dark_color_scheme_
        && direction_ == o.direction_
        && empty_cells_ == o.empty_cells_
        && has_simple_underline_ == o.has_simple_underline_
        && list_style_position_ == o.list_style_position_
        && print_color_adjust_ == o.print_color_adjust_
        && rtl_ordering_ == o.rtl_ordering_

    );
  }

  enum IsAtShadowBoundary {
    kAtShadowBoundary,
    kNotAtShadowBoundary,
  };

  void InheritFrom(const ComputedStyleBase& other,
                                      IsAtShadowBoundary isAtShadowBoundary);

  void CopyNonInheritedFromCached(
      const ComputedStyleBase& other);

  // Copies the values of any independent inherited properties from the parent
  // style that are marked as inherited by this style.
  void PropagateIndependentInheritedProperties(
      const ComputedStyleBase& parentStyle);

  static bool DiffNeedsVisualRectUpdate(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffTransformData(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesOpacity(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsReshapeAndFullLayoutAndPaintInvalidation(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesFilter(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesTextDecorationOrColor(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesMask(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesTransform(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsFullLayout(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesZIndex(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsFullLayoutAndPaintInvalidationDisplayListItem(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsCollectInlinesAndFullLayoutAndPaintInvalidation(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesNeedsRecomputeOverflow(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsPaintInvalidationSubtree(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsPaintInvalidationObject(const ComputedStyle& a, const ComputedStyle& b);
  static bool ScrollAnchorDisablingPropertyChanged(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsFullLayoutAndPaintInvalidation(const ComputedStyle& a, const ComputedStyle& b);
  static bool DiffNeedsFullLayoutAndPaintInvalidationDisplayTableType(const ComputedStyle& a, const ComputedStyle& b);
  static bool UpdatePropertySpecificDifferencesBackdropFilter(const ComputedStyle& a, const ComputedStyle& b);

  // Fields.
  // TODO(sashab): Remove initialFoo() static methods and update callers to
  // use resetFoo(), which can be more efficient.

  // AffectedByActive
  bool AffectedByActive() const {
    return static_cast<bool>(affected_by_active_);
  }

  void SetAffectedByActive() {
    affected_by_active_ = static_cast<unsigned>(true);
  }


  // AffectedByDrag
  bool AffectedByDrag() const {
    return static_cast<bool>(affected_by_drag_);
  }

  void SetAffectedByDrag() {
    affected_by_drag_ = static_cast<unsigned>(true);
  }


  // AffectedByFocusWithin
  bool AffectedByFocusWithin() const {
    return static_cast<bool>(affected_by_focus_within_);
  }

  void SetAffectedByFocusWithin() {
    affected_by_focus_within_ = static_cast<unsigned>(true);
  }


  // AffectedByHover
  bool AffectedByHover() const {
    return static_cast<bool>(affected_by_hover_);
  }

  void SetAffectedByHover() {
    affected_by_hover_ = static_cast<unsigned>(true);
  }


  // align-content
  const StyleContentAlignmentData& AlignContent() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->align_content_;
  }

  void SetAlignContent(const StyleContentAlignmentData& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->align_content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->align_content_ = v;
  }

  void SetAlignContent(StyleContentAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->align_content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->align_content_ = std::move(v);
  }
  inline void ResetAlignContent() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->align_content_ = StyleContentAlignmentData(ContentPosition::kNormal, ContentDistributionType::kDefault, OverflowAlignment::kDefault);
  }



  // align-items
  const StyleSelfAlignmentData& AlignItems() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->align_items_;
  }

  void SetAlignItems(const StyleSelfAlignmentData& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->align_items_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->align_items_ = v;
  }

  void SetAlignItems(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->align_items_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->align_items_ = std::move(v);
  }
  inline void ResetAlignItems() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->align_items_ = StyleSelfAlignmentData(ItemPosition::kNormal, OverflowAlignment::kDefault);
  }



  // align-self
  const StyleSelfAlignmentData& AlignSelf() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->align_self_;
  }

  void SetAlignSelf(const StyleSelfAlignmentData& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->align_self_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->align_self_ = v;
  }

  void SetAlignSelf(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->align_self_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->align_self_ = std::move(v);
  }
  inline void ResetAlignSelf() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->align_self_ = StyleSelfAlignmentData(ItemPosition::kAuto, OverflowAlignment::kDefault);
  }



  // Animations
  

  inline void ResetAnimations() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->animations_ = nullptr;
  }



  // -webkit-appearance
  ControlPart Appearance() const {
    return static_cast<ControlPart>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->appearance_);
  }

  void SetAppearance(ControlPart v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->appearance_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->appearance_ = static_cast<unsigned>(v);
  }

  inline void ResetAppearance() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->appearance_ = static_cast<unsigned>(kNoControlPart);
  }


  // AppliedTextDecorations
  

  inline void ResetAppliedTextDecorations() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->applied_text_decorations_ = nullptr;
  }



  // AutoRepeatNamedGridColumnLines
  const NamedGridLinesMap& AutoRepeatNamedGridColumnLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_column_lines_;
  }

  void SetAutoRepeatNamedGridColumnLines(const NamedGridLinesMap& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_column_lines_ = v;
  }

  void SetAutoRepeatNamedGridColumnLines(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_column_lines_ = std::move(v);
  }
  inline void ResetAutoRepeatNamedGridColumnLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_column_lines_ = NamedGridLinesMap();
  }



  // AutoRepeatNamedGridRowLines
  const NamedGridLinesMap& AutoRepeatNamedGridRowLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_row_lines_;
  }

  void SetAutoRepeatNamedGridRowLines(const NamedGridLinesMap& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_row_lines_ = v;
  }

  void SetAutoRepeatNamedGridRowLines(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_row_lines_ = std::move(v);
  }
  inline void ResetAutoRepeatNamedGridRowLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_row_lines_ = NamedGridLinesMap();
  }



  // AutoRepeatOrderedNamedGridColumnLines
  const OrderedNamedGridLines& AutoRepeatOrderedNamedGridColumnLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_column_lines_;
  }

  void SetAutoRepeatOrderedNamedGridColumnLines(const OrderedNamedGridLines& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_column_lines_ = v;
  }

  void SetAutoRepeatOrderedNamedGridColumnLines(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_column_lines_ = std::move(v);
  }
  inline void ResetAutoRepeatOrderedNamedGridColumnLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_column_lines_ = OrderedNamedGridLines();
  }



  // AutoRepeatOrderedNamedGridRowLines
  const OrderedNamedGridLines& AutoRepeatOrderedNamedGridRowLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_row_lines_;
  }

  void SetAutoRepeatOrderedNamedGridRowLines(const OrderedNamedGridLines& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_row_lines_ = v;
  }

  void SetAutoRepeatOrderedNamedGridRowLines(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_row_lines_ = std::move(v);
  }
  inline void ResetAutoRepeatOrderedNamedGridRowLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_row_lines_ = OrderedNamedGridLines();
  }



  // backdrop-filter
  

  inline void ResetBackdropFilter() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->backdrop_filter_ = MakeGarbageCollected<StyleFilterData>();
  }



  // backface-visibility
  EBackfaceVisibility BackfaceVisibility() const {
    return static_cast<EBackfaceVisibility>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->backface_visibility_);
  }

  void SetBackfaceVisibility(EBackfaceVisibility v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->backface_visibility_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->backface_visibility_ = static_cast<unsigned>(v);
  }

  inline void ResetBackfaceVisibility() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->backface_visibility_ = static_cast<unsigned>(EBackfaceVisibility::kVisible);
  }


  // Background
  

  inline void ResetBackground() {
    background_data_.Access()->background_ = FillLayer(EFillLayerType::kBackground, true);
  }



  // background-color
  
  void SetBackgroundColor(const StyleColor& v) {
    if (!(background_data_->background_color_ == v))
      background_data_.Access()->background_color_ = v;
  }

  void SetBackgroundColor(StyleColor&& v) {
    if (!(background_data_->background_color_ == v))
      background_data_.Access()->background_color_ = std::move(v);
  }
  inline void ResetBackgroundColor() {
    background_data_.Access()->background_color_ = StyleColor(Color::kTransparent);
  }



  // mix-blend-mode
  BlendMode GetBlendMode() const {
    return static_cast<BlendMode>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->blend_mode_);
  }

  void SetBlendMode(BlendMode v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->blend_mode_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->blend_mode_ = static_cast<unsigned>(v);
  }

  inline void ResetBlendMode() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->blend_mode_ = static_cast<unsigned>(BlendMode::kNormal);
  }


  // border-bottom-color
  

  inline void ResetBorderBottomColor() {
    surround_data_.Access()->border_bottom_color_ = 0;
  }



  // BorderBottomColorIsCurrentColor
  bool BorderBottomColorIsCurrentColor() const {
    return static_cast<bool>(surround_data_->border_bottom_color_is_current_color_);
  }

  void SetBorderBottomColorIsCurrentColor(bool v) {
    if (!(surround_data_->border_bottom_color_is_current_color_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_bottom_color_is_current_color_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderBottomColorIsCurrentColor() {
    surround_data_.Access()->border_bottom_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // border-bottom-left-radius
  const LengthSize& BorderBottomLeftRadius() const {
    return surround_data_->border_bottom_left_radius_;
  }

  void SetBorderBottomLeftRadius(const LengthSize& v) {
    if (!(surround_data_->border_bottom_left_radius_ == v))
      surround_data_.Access()->border_bottom_left_radius_ = v;
  }

  void SetBorderBottomLeftRadius(LengthSize&& v) {
    if (!(surround_data_->border_bottom_left_radius_ == v))
      surround_data_.Access()->border_bottom_left_radius_ = std::move(v);
  }
  inline void ResetBorderBottomLeftRadius() {
    surround_data_.Access()->border_bottom_left_radius_ = LengthSize(Length::Fixed(0), Length::Fixed(0));
  }



  // border-bottom-right-radius
  const LengthSize& BorderBottomRightRadius() const {
    return surround_data_->border_bottom_right_radius_;
  }

  void SetBorderBottomRightRadius(const LengthSize& v) {
    if (!(surround_data_->border_bottom_right_radius_ == v))
      surround_data_.Access()->border_bottom_right_radius_ = v;
  }

  void SetBorderBottomRightRadius(LengthSize&& v) {
    if (!(surround_data_->border_bottom_right_radius_ == v))
      surround_data_.Access()->border_bottom_right_radius_ = std::move(v);
  }
  inline void ResetBorderBottomRightRadius() {
    surround_data_.Access()->border_bottom_right_radius_ = LengthSize(Length::Fixed(0), Length::Fixed(0));
  }



  // border-bottom-style
  EBorderStyle BorderBottomStyle() const {
    return static_cast<EBorderStyle>(surround_data_->border_bottom_style_);
  }

  void SetBorderBottomStyle(EBorderStyle v) {
    if (!(surround_data_->border_bottom_style_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_bottom_style_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderBottomStyle() {
    surround_data_.Access()->border_bottom_style_ = static_cast<unsigned>(EBorderStyle::kNone);
  }


  // border-bottom-width
  

  inline void ResetBorderBottomWidth() {
    surround_data_.Access()->border_bottom_width_ = LayoutUnit(3);
  }



  // border-collapse
  EBorderCollapse BorderCollapse() const {
    return static_cast<EBorderCollapse>(border_collapse_);
  }

  void SetBorderCollapse(EBorderCollapse v) {
    border_collapse_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderCollapse() {
    border_collapse_ = static_cast<unsigned>(EBorderCollapse::kSeparate);
  }


  // border-collapse
  bool BorderCollapseIsInherited() const {
    return static_cast<bool>(border_collapse_is_inherited_);
  }

  void SetBorderCollapseIsInherited(bool v) {
    border_collapse_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderCollapseIsInherited() {
    border_collapse_is_inherited_ = static_cast<unsigned>(true);
  }


  // border-image
  const NinePieceImage& BorderImage() const {
    return surround_data_->border_image_;
  }

  void SetBorderImage(const NinePieceImage& v) {
    if (!(surround_data_->border_image_ == v))
      surround_data_.Access()->border_image_ = v;
  }

  void SetBorderImage(NinePieceImage&& v) {
    if (!(surround_data_->border_image_ == v))
      surround_data_.Access()->border_image_ = std::move(v);
  }
  inline void ResetBorderImage() {
    surround_data_.Access()->border_image_ = NinePieceImage();
  }



  // border-left-color
  

  inline void ResetBorderLeftColor() {
    surround_data_.Access()->border_left_color_ = 0;
  }



  // BorderLeftColorIsCurrentColor
  bool BorderLeftColorIsCurrentColor() const {
    return static_cast<bool>(surround_data_->border_left_color_is_current_color_);
  }

  void SetBorderLeftColorIsCurrentColor(bool v) {
    if (!(surround_data_->border_left_color_is_current_color_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_left_color_is_current_color_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderLeftColorIsCurrentColor() {
    surround_data_.Access()->border_left_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // border-left-style
  EBorderStyle BorderLeftStyle() const {
    return static_cast<EBorderStyle>(surround_data_->border_left_style_);
  }

  void SetBorderLeftStyle(EBorderStyle v) {
    if (!(surround_data_->border_left_style_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_left_style_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderLeftStyle() {
    surround_data_.Access()->border_left_style_ = static_cast<unsigned>(EBorderStyle::kNone);
  }


  // border-left-width
  

  inline void ResetBorderLeftWidth() {
    surround_data_.Access()->border_left_width_ = LayoutUnit(3);
  }



  // border-right-color
  

  inline void ResetBorderRightColor() {
    surround_data_.Access()->border_right_color_ = 0;
  }



  // BorderRightColorIsCurrentColor
  bool BorderRightColorIsCurrentColor() const {
    return static_cast<bool>(surround_data_->border_right_color_is_current_color_);
  }

  void SetBorderRightColorIsCurrentColor(bool v) {
    if (!(surround_data_->border_right_color_is_current_color_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_right_color_is_current_color_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderRightColorIsCurrentColor() {
    surround_data_.Access()->border_right_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // border-right-style
  EBorderStyle BorderRightStyle() const {
    return static_cast<EBorderStyle>(surround_data_->border_right_style_);
  }

  void SetBorderRightStyle(EBorderStyle v) {
    if (!(surround_data_->border_right_style_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_right_style_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderRightStyle() {
    surround_data_.Access()->border_right_style_ = static_cast<unsigned>(EBorderStyle::kNone);
  }


  // border-right-width
  

  inline void ResetBorderRightWidth() {
    surround_data_.Access()->border_right_width_ = LayoutUnit(3);
  }



  // border-top-color
  

  inline void ResetBorderTopColor() {
    surround_data_.Access()->border_top_color_ = 0;
  }



  // BorderTopColorIsCurrentColor
  bool BorderTopColorIsCurrentColor() const {
    return static_cast<bool>(surround_data_->border_top_color_is_current_color_);
  }

  void SetBorderTopColorIsCurrentColor(bool v) {
    if (!(surround_data_->border_top_color_is_current_color_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_top_color_is_current_color_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderTopColorIsCurrentColor() {
    surround_data_.Access()->border_top_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // border-top-left-radius
  const LengthSize& BorderTopLeftRadius() const {
    return surround_data_->border_top_left_radius_;
  }

  void SetBorderTopLeftRadius(const LengthSize& v) {
    if (!(surround_data_->border_top_left_radius_ == v))
      surround_data_.Access()->border_top_left_radius_ = v;
  }

  void SetBorderTopLeftRadius(LengthSize&& v) {
    if (!(surround_data_->border_top_left_radius_ == v))
      surround_data_.Access()->border_top_left_radius_ = std::move(v);
  }
  inline void ResetBorderTopLeftRadius() {
    surround_data_.Access()->border_top_left_radius_ = LengthSize(Length::Fixed(0), Length::Fixed(0));
  }



  // border-top-right-radius
  const LengthSize& BorderTopRightRadius() const {
    return surround_data_->border_top_right_radius_;
  }

  void SetBorderTopRightRadius(const LengthSize& v) {
    if (!(surround_data_->border_top_right_radius_ == v))
      surround_data_.Access()->border_top_right_radius_ = v;
  }

  void SetBorderTopRightRadius(LengthSize&& v) {
    if (!(surround_data_->border_top_right_radius_ == v))
      surround_data_.Access()->border_top_right_radius_ = std::move(v);
  }
  inline void ResetBorderTopRightRadius() {
    surround_data_.Access()->border_top_right_radius_ = LengthSize(Length::Fixed(0), Length::Fixed(0));
  }



  // border-top-style
  EBorderStyle BorderTopStyle() const {
    return static_cast<EBorderStyle>(surround_data_->border_top_style_);
  }

  void SetBorderTopStyle(EBorderStyle v) {
    if (!(surround_data_->border_top_style_ == static_cast<unsigned>(v)))
      surround_data_.Access()->border_top_style_ = static_cast<unsigned>(v);
  }

  inline void ResetBorderTopStyle() {
    surround_data_.Access()->border_top_style_ = static_cast<unsigned>(EBorderStyle::kNone);
  }


  // border-top-width
  

  inline void ResetBorderTopWidth() {
    surround_data_.Access()->border_top_width_ = LayoutUnit(3);
  }



  // bottom
  const Length& Bottom() const {
    return surround_data_->bottom_;
  }

  void SetBottom(const Length& v) {
    if (!(surround_data_->bottom_ == v))
      surround_data_.Access()->bottom_ = v;
  }

  void SetBottom(Length&& v) {
    if (!(surround_data_->bottom_ == v))
      surround_data_.Access()->bottom_ = std::move(v);
  }
  inline void ResetBottom() {
    surround_data_.Access()->bottom_ = Length();
  }



  // -webkit-box-align
  EBoxAlignment BoxAlign() const {
    return static_cast<EBoxAlignment>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_align_);
  }

  void SetBoxAlign(EBoxAlignment v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_align_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_align_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxAlign() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_align_ = static_cast<unsigned>(EBoxAlignment::kStretch);
  }


  // -webkit-box-decoration-break
  EBoxDecorationBreak BoxDecorationBreak() const {
    return static_cast<EBoxDecorationBreak>(box_data_->box_decoration_break_);
  }

  void SetBoxDecorationBreak(EBoxDecorationBreak v) {
    if (!(box_data_->box_decoration_break_ == static_cast<unsigned>(v)))
      box_data_.Access()->box_decoration_break_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxDecorationBreak() {
    box_data_.Access()->box_decoration_break_ = static_cast<unsigned>(EBoxDecorationBreak::kSlice);
  }


  // -webkit-box-direction
  EBoxDirection BoxDirection() const {
    return static_cast<EBoxDirection>(box_direction_);
  }

  void SetBoxDirection(EBoxDirection v) {
    box_direction_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxDirection() {
    box_direction_ = static_cast<unsigned>(EBoxDirection::kNormal);
  }


  // -webkit-box-direction
  bool BoxDirectionIsInherited() const {
    return static_cast<bool>(box_direction_is_inherited_);
  }

  void SetBoxDirectionIsInherited(bool v) {
    box_direction_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxDirectionIsInherited() {
    box_direction_is_inherited_ = static_cast<unsigned>(true);
  }


  // -webkit-box-flex
  float BoxFlex() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_flex_;
  }

  void SetBoxFlex(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_flex_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_flex_ = v;
  }

  inline void ResetBoxFlex() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_flex_ = 0.0f;
  }


  // -webkit-box-ordinal-group
  unsigned BoxOrdinalGroup() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_ordinal_group_;
  }


  inline void ResetBoxOrdinalGroup() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_ordinal_group_ = 1;
  }


  // -webkit-box-orient
  EBoxOrient BoxOrient() const {
    return static_cast<EBoxOrient>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_orient_);
  }

  void SetBoxOrient(EBoxOrient v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_orient_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_orient_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxOrient() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_orient_ = static_cast<unsigned>(EBoxOrient::kHorizontal);
  }


  // -webkit-box-pack
  EBoxPack BoxPack() const {
    return static_cast<EBoxPack>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_pack_);
  }

  void SetBoxPack(EBoxPack v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_pack_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_pack_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxPack() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_pack_ = static_cast<unsigned>(EBoxPack::kStart);
  }


  // -webkit-box-reflect
  StyleReflection* BoxReflect() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_reflect_.get();
  }

  void SetBoxReflect(scoped_refptr<StyleReflection> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_reflect_ = std::move(v);
  }

  // box-shadow
  ShadowList* BoxShadow() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->box_shadow_.get();
  }

  void SetBoxShadow(scoped_refptr<ShadowList> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->box_shadow_ = std::move(v);
  }

  // box-sizing
  EBoxSizing BoxSizing() const {
    return static_cast<EBoxSizing>(box_data_->box_sizing_);
  }

  void SetBoxSizing(EBoxSizing v) {
    if (!(box_data_->box_sizing_ == static_cast<unsigned>(v)))
      box_data_.Access()->box_sizing_ = static_cast<unsigned>(v);
  }

  inline void ResetBoxSizing() {
    box_data_.Access()->box_sizing_ = static_cast<unsigned>(EBoxSizing::kContentBox);
  }


  // break-after
  EBreakBetween BreakAfter() const {
    return static_cast<EBreakBetween>(break_after_);
  }

  void SetBreakAfter(EBreakBetween v) {
    break_after_ = static_cast<unsigned>(v);
  }

  inline void ResetBreakAfter() {
    break_after_ = static_cast<unsigned>(EBreakBetween::kAuto);
  }


  // break-before
  EBreakBetween BreakBefore() const {
    return static_cast<EBreakBetween>(break_before_);
  }

  void SetBreakBefore(EBreakBetween v) {
    break_before_ = static_cast<unsigned>(v);
  }

  inline void ResetBreakBefore() {
    break_before_ = static_cast<unsigned>(EBreakBetween::kAuto);
  }


  // break-inside
  EBreakInside BreakInside() const {
    return static_cast<EBreakInside>(break_inside_);
  }

  void SetBreakInside(EBreakInside v) {
    break_inside_ = static_cast<unsigned>(v);
  }

  inline void ResetBreakInside() {
    break_inside_ = static_cast<unsigned>(EBreakInside::kAuto);
  }


  // CallbackSelectors
  

  inline void ResetCallbackSelectors() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->callback_selectors_ = Vector<String>();
  }



  // caption-side
  ECaptionSide CaptionSide() const {
    return static_cast<ECaptionSide>(caption_side_);
  }

  void SetCaptionSide(ECaptionSide v) {
    caption_side_ = static_cast<unsigned>(v);
  }

  inline void ResetCaptionSide() {
    caption_side_ = static_cast<unsigned>(ECaptionSide::kTop);
  }


  // caption-side
  bool CaptionSideIsInherited() const {
    return static_cast<bool>(caption_side_is_inherited_);
  }

  void SetCaptionSideIsInherited(bool v) {
    caption_side_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetCaptionSideIsInherited() {
    caption_side_is_inherited_ = static_cast<unsigned>(true);
  }


  // caret-color
  

  inline void ResetCaretColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->caret_color_ = Color();
  }



  // CaretColorIsAuto
  

  inline void ResetCaretColorIsAuto() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->caret_color_is_auto_ = static_cast<unsigned>(true);
  }


  // CaretColorIsCurrentColor
  

  inline void ResetCaretColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->caret_color_is_current_color_ = static_cast<unsigned>(false);
  }


  // clear
  EClear Clear() const {
    return static_cast<EClear>(clear_);
  }

  void SetClear(EClear v) {
    clear_ = static_cast<unsigned>(v);
  }

  inline void ResetClear() {
    clear_ = static_cast<unsigned>(EClear::kNone);
  }


  // clip
  const LengthBox& Clip() const {
    return visual_data_->clip_;
  }


  inline void ResetClip() {
    visual_data_.Access()->clip_ = LengthBox();
  }



  // clip-path
  ClipPathOperation* ClipPath() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->clip_path_.get();
  }

  void SetClipPath(scoped_refptr<ClipPathOperation> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->clip_path_ = std::move(v);
  }

  // color
  

  inline void ResetColor() {
    inherited_data_.Access()->color_ = Color::kBlack;
  }



  // column-count
  unsigned short ColumnCount() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_count_;
  }


  inline void ResetColumnCount() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_count_ = 1;
  }


  // column-fill
  EColumnFill GetColumnFill() const {
    return static_cast<EColumnFill>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_fill_);
  }

  void SetColumnFill(EColumnFill v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_fill_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_fill_ = static_cast<unsigned>(v);
  }

  inline void ResetColumnFill() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_fill_ = static_cast<unsigned>(EColumnFill::kBalance);
  }


  // column-gap
  const GapLength& ColumnGap() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_gap_;
  }

  void SetColumnGap(const GapLength& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_gap_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_gap_ = v;
  }

  void SetColumnGap(GapLength&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_gap_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_gap_ = std::move(v);
  }
  inline void ResetColumnGap() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_gap_ = GapLength();
  }



  // column-rule-color
  

  inline void ResetColumnRuleColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_color_ = 0;
  }



  // ColumnRuleColorIsCurrentColor
  bool ColumnRuleColorIsCurrentColor() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->column_rule_color_is_current_color_);
  }

  void SetColumnRuleColorIsCurrentColor(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->column_rule_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->column_rule_color_is_current_color_ = static_cast<unsigned>(v);
  }

  inline void ResetColumnRuleColorIsCurrentColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->column_rule_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // column-rule-style
  EBorderStyle ColumnRuleStyle() const {
    return static_cast<EBorderStyle>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_style_);
  }

  void SetColumnRuleStyle(EBorderStyle v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_style_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_style_ = static_cast<unsigned>(v);
  }

  inline void ResetColumnRuleStyle() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_style_ = static_cast<unsigned>(EBorderStyle::kNone);
  }


  // column-rule-width
  

  inline void ResetColumnRuleWidth() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_width_ = LayoutUnit(3);
  }



  // column-span
  EColumnSpan GetColumnSpan() const {
    return static_cast<EColumnSpan>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_span_);
  }

  void SetColumnSpan(EColumnSpan v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_span_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_span_ = static_cast<unsigned>(v);
  }

  inline void ResetColumnSpan() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_span_ = static_cast<unsigned>(EColumnSpan::kNone);
  }


  // column-width
  float ColumnWidth() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_width_;
  }


  inline void ResetColumnWidth() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_width_ = 0.0f;
  }


  // contain
  unsigned Contain() const {
    return static_cast<unsigned>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->contain_);
  }

  void SetContain(unsigned v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->contain_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->contain_ = static_cast<unsigned>(v);
  }

  inline void ResetContain() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->contain_ = static_cast<unsigned>(kContainsNone);
  }


  // content
  

  inline void ResetContent() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->content_ = nullptr;
  }



  // CounterDirectives
  

  inline void ResetCounterDirectives() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->counter_directives_ = nullptr;
  }



  // cursor
  ECursor Cursor() const {
    return static_cast<ECursor>(cursor_);
  }

  void SetCursor(ECursor v) {
    cursor_ = static_cast<unsigned>(v);
  }

  inline void ResetCursor() {
    cursor_ = static_cast<unsigned>(ECursor::kAuto);
  }


  // CursorData
  

  inline void ResetCursorData() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->cursor_data_ = nullptr;
  }



  // DarkColorScheme
  bool DarkColorScheme() const {
    return static_cast<bool>(dark_color_scheme_);
  }

  void SetDarkColorScheme() {
    dark_color_scheme_ = static_cast<unsigned>(true);
  }


  // direction
  TextDirection Direction() const {
    return static_cast<TextDirection>(direction_);
  }

  void SetDirection(TextDirection v) {
    direction_ = static_cast<unsigned>(v);
  }

  inline void ResetDirection() {
    direction_ = static_cast<unsigned>(TextDirection::kLtr);
  }


  // Display
  EDisplay Display() const {
    return static_cast<EDisplay>(display_);
  }

  void SetDisplay(EDisplay v) {
    display_ = static_cast<unsigned>(v);
  }

  inline void ResetDisplay() {
    display_ = static_cast<unsigned>(EDisplay::kInline);
  }


  // DisplayLayoutCustomName
  const AtomicString& DisplayLayoutCustomName() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_name_;
  }

  void SetDisplayLayoutCustomName(const AtomicString& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_name_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_name_ = v;
  }

  void SetDisplayLayoutCustomName(AtomicString&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_name_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_name_ = std::move(v);
  }
  inline void ResetDisplayLayoutCustomName() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_name_ = g_null_atom;
  }



  // DisplayLayoutCustomParentName
  const AtomicString& DisplayLayoutCustomParentName() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_parent_name_;
  }

  void SetDisplayLayoutCustomParentName(const AtomicString& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_parent_name_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_parent_name_ = v;
  }

  void SetDisplayLayoutCustomParentName(AtomicString&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_parent_name_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_parent_name_ = std::move(v);
  }
  inline void ResetDisplayLayoutCustomParentName() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_parent_name_ = g_null_atom;
  }



  // -webkit-app-region
  EDraggableRegionMode DraggableRegionMode() const {
    return static_cast<EDraggableRegionMode>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->draggable_region_mode_);
  }

  void SetDraggableRegionMode(EDraggableRegionMode v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->draggable_region_mode_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->draggable_region_mode_ = static_cast<unsigned>(v);
  }

  inline void ResetDraggableRegionMode() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->draggable_region_mode_ = static_cast<unsigned>(EDraggableRegionMode::kNone);
  }


  // EffectiveTouchAction
  

  inline void ResetEffectiveTouchAction() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->effective_touch_action_ = static_cast<unsigned>(TouchAction::kTouchActionAuto);
  }


  // EffectiveZoom
  float EffectiveZoom() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->effective_zoom_;
  }


  inline void ResetEffectiveZoom() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->effective_zoom_ = 1.0f;
  }


  // empty-cells
  EEmptyCells EmptyCells() const {
    return static_cast<EEmptyCells>(empty_cells_);
  }

  void SetEmptyCells(EEmptyCells v) {
    empty_cells_ = static_cast<unsigned>(v);
  }

  inline void ResetEmptyCells() {
    empty_cells_ = static_cast<unsigned>(EEmptyCells::kShow);
  }


  // empty-cells
  bool EmptyCellsIsInherited() const {
    return static_cast<bool>(empty_cells_is_inherited_);
  }

  void SetEmptyCellsIsInherited(bool v) {
    empty_cells_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetEmptyCellsIsInherited() {
    empty_cells_is_inherited_ = static_cast<unsigned>(true);
  }


  // filter
  

  inline void ResetFilter() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->filter_ = MakeGarbageCollected<StyleFilterData>();
  }



  // flex-basis
  const Length& FlexBasis() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->flex_basis_;
  }

  void SetFlexBasis(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->flex_basis_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->flex_basis_ = v;
  }

  void SetFlexBasis(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->flex_basis_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->flex_basis_ = std::move(v);
  }
  inline void ResetFlexBasis() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->flex_basis_ = Length::Auto();
  }



  // flex-direction
  EFlexDirection FlexDirection() const {
    return static_cast<EFlexDirection>(rare_non_inherited_usage_less_than_13_percent_data_->flex_direction_);
  }

  void SetFlexDirection(EFlexDirection v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->flex_direction_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->flex_direction_ = static_cast<unsigned>(v);
  }

  inline void ResetFlexDirection() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->flex_direction_ = static_cast<unsigned>(EFlexDirection::kRow);
  }


  // flex-grow
  float FlexGrow() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_grow_;
  }

  void SetFlexGrow(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_grow_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_grow_ = v;
  }

  inline void ResetFlexGrow() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_grow_ = 0.0f;
  }


  // flex-shrink
  float FlexShrink() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_shrink_;
  }

  void SetFlexShrink(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_shrink_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_shrink_ = v;
  }

  inline void ResetFlexShrink() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_shrink_ = 1.0f;
  }


  // flex-wrap
  EFlexWrap FlexWrap() const {
    return static_cast<EFlexWrap>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_wrap_);
  }

  void SetFlexWrap(EFlexWrap v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_wrap_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_wrap_ = static_cast<unsigned>(v);
  }

  inline void ResetFlexWrap() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_wrap_ = static_cast<unsigned>(EFlexWrap::kNowrap);
  }


  // float
  EFloat Floating() const {
    return static_cast<EFloat>(floating_);
  }

  void SetFloating(EFloat v) {
    floating_ = static_cast<unsigned>(v);
  }

  inline void ResetFloating() {
    floating_ = static_cast<unsigned>(EFloat::kNone);
  }


  // font
  

  inline void ResetFont() {
    inherited_data_.Access()->font_data_.Access()->font_ = Font();
  }



  // grid-auto-columns
  const Vector<GridTrackSize>& GridAutoColumns() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_columns_;
  }

  void SetGridAutoColumns(const Vector<GridTrackSize>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_columns_ = v;
  }

  void SetGridAutoColumns(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_columns_ = std::move(v);
  }
  inline void ResetGridAutoColumns() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_columns_ = Vector<GridTrackSize>(1, GridTrackSize(Length::Auto()));
  }



  // grid-auto-flow
  
  void SetGridAutoFlow(GridAutoFlow v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_flow_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_flow_ = static_cast<unsigned>(v);
  }

  inline void ResetGridAutoFlow() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_flow_ = static_cast<unsigned>(kAutoFlowRow);
  }


  // GridAutoRepeatColumns
  const Vector<GridTrackSize>& GridAutoRepeatColumns() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_;
  }

  void SetGridAutoRepeatColumns(const Vector<GridTrackSize>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_ = v;
  }

  void SetGridAutoRepeatColumns(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_ = std::move(v);
  }
  inline void ResetGridAutoRepeatColumns() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_ = Vector<GridTrackSize>();
  }



  // GridAutoRepeatColumnsInsertionPoint
  size_t GridAutoRepeatColumnsInsertionPoint() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_insertion_point_;
  }

  void SetGridAutoRepeatColumnsInsertionPoint(size_t v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_insertion_point_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_insertion_point_ = v;
  }

  inline void ResetGridAutoRepeatColumnsInsertionPoint() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_insertion_point_ = 0;
  }


  // GridAutoRepeatColumnsType
  AutoRepeatType GridAutoRepeatColumnsType() const {
    return static_cast<AutoRepeatType>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_type_);
  }

  void SetGridAutoRepeatColumnsType(AutoRepeatType v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_type_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_type_ = static_cast<unsigned>(v);
  }

  inline void ResetGridAutoRepeatColumnsType() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_type_ = static_cast<unsigned>(AutoRepeatType::kNoAutoRepeat);
  }


  // GridAutoRepeatRows
  const Vector<GridTrackSize>& GridAutoRepeatRows() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_;
  }

  void SetGridAutoRepeatRows(const Vector<GridTrackSize>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_ = v;
  }

  void SetGridAutoRepeatRows(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_ = std::move(v);
  }
  inline void ResetGridAutoRepeatRows() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_ = Vector<GridTrackSize>();
  }



  // GridAutoRepeatRowsInsertionPoint
  size_t GridAutoRepeatRowsInsertionPoint() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_insertion_point_;
  }

  void SetGridAutoRepeatRowsInsertionPoint(size_t v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_insertion_point_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_insertion_point_ = v;
  }

  inline void ResetGridAutoRepeatRowsInsertionPoint() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_insertion_point_ = 0;
  }


  // GridAutoRepeatRowsType
  AutoRepeatType GridAutoRepeatRowsType() const {
    return static_cast<AutoRepeatType>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_type_);
  }

  void SetGridAutoRepeatRowsType(AutoRepeatType v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_type_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_type_ = static_cast<unsigned>(v);
  }

  inline void ResetGridAutoRepeatRowsType() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_type_ = static_cast<unsigned>(AutoRepeatType::kNoAutoRepeat);
  }


  // grid-auto-rows
  const Vector<GridTrackSize>& GridAutoRows() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_rows_;
  }

  void SetGridAutoRows(const Vector<GridTrackSize>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_rows_ = v;
  }

  void SetGridAutoRows(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_rows_ = std::move(v);
  }
  inline void ResetGridAutoRows() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_rows_ = Vector<GridTrackSize>(1, GridTrackSize(Length::Auto()));
  }



  // grid-column-end
  const GridPosition& GridColumnEnd() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_end_;
  }

  void SetGridColumnEnd(const GridPosition& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_end_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_end_ = v;
  }

  void SetGridColumnEnd(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_end_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_end_ = std::move(v);
  }
  inline void ResetGridColumnEnd() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_end_ = GridPosition();
  }



  // grid-column-start
  const GridPosition& GridColumnStart() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_start_;
  }

  void SetGridColumnStart(const GridPosition& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_start_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_start_ = v;
  }

  void SetGridColumnStart(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_start_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_start_ = std::move(v);
  }
  inline void ResetGridColumnStart() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_start_ = GridPosition();
  }



  // grid-row-end
  const GridPosition& GridRowEnd() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_end_;
  }

  void SetGridRowEnd(const GridPosition& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_end_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_end_ = v;
  }

  void SetGridRowEnd(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_end_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_end_ = std::move(v);
  }
  inline void ResetGridRowEnd() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_end_ = GridPosition();
  }



  // grid-row-start
  const GridPosition& GridRowStart() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_start_;
  }

  void SetGridRowStart(const GridPosition& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_start_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_start_ = v;
  }

  void SetGridRowStart(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_start_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_start_ = std::move(v);
  }
  inline void ResetGridRowStart() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_start_ = GridPosition();
  }



  // grid-template-columns
  const Vector<GridTrackSize>& GridTemplateColumns() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_columns_;
  }

  void SetGridTemplateColumns(const Vector<GridTrackSize>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_columns_ = v;
  }

  void SetGridTemplateColumns(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_columns_ = std::move(v);
  }
  inline void ResetGridTemplateColumns() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_columns_ = Vector<GridTrackSize>();
  }



  // grid-template-rows
  const Vector<GridTrackSize>& GridTemplateRows() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_rows_;
  }

  void SetGridTemplateRows(const Vector<GridTrackSize>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_rows_ = v;
  }

  void SetGridTemplateRows(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_rows_ = std::move(v);
  }
  inline void ResetGridTemplateRows() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_rows_ = Vector<GridTrackSize>();
  }



  // HasAttrContent
  bool HasAttrContent() const {
    return static_cast<bool>(has_attr_content_);
  }

  void SetHasAttrContent() {
    has_attr_content_ = static_cast<unsigned>(true);
  }


  // HasAuthorBackground
  bool HasAuthorBackground() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_author_background_);
  }

  void SetHasAuthorBackground(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_author_background_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_author_background_ = static_cast<unsigned>(v);
  }

  inline void ResetHasAuthorBackground() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_author_background_ = static_cast<unsigned>(false);
  }


  // HasAuthorBorder
  bool HasAuthorBorder() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_author_border_);
  }

  void SetHasAuthorBorder(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_author_border_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_author_border_ = static_cast<unsigned>(v);
  }

  inline void ResetHasAuthorBorder() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_author_border_ = static_cast<unsigned>(false);
  }


  // HasAutoClip
  bool HasAutoClip() const {
    return static_cast<bool>(visual_data_->has_auto_clip_);
  }


  inline void ResetHasAutoClip() {
    visual_data_.Access()->has_auto_clip_ = static_cast<unsigned>(true);
  }


  // HasAutoColumnCount
  bool HasAutoColumnCount() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_count_);
  }


  inline void ResetHasAutoColumnCount() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->has_auto_column_count_ = static_cast<unsigned>(true);
  }


  // HasAutoColumnWidth
  bool HasAutoColumnWidth() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_width_);
  }


  inline void ResetHasAutoColumnWidth() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->has_auto_column_width_ = static_cast<unsigned>(true);
  }


  // HasAutoZIndex
  bool HasAutoZIndex() const {
    return static_cast<bool>(box_data_->has_auto_z_index_);
  }


  inline void ResetHasAutoZIndex() {
    box_data_.Access()->has_auto_z_index_ = static_cast<unsigned>(true);
  }


  // HasCurrentBackdropFilterAnimation
  bool HasCurrentBackdropFilterAnimation() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_backdrop_filter_animation_);
  }

  void SetHasCurrentBackdropFilterAnimation(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_backdrop_filter_animation_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_backdrop_filter_animation_ = static_cast<unsigned>(v);
  }

  inline void ResetHasCurrentBackdropFilterAnimation() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_backdrop_filter_animation_ = static_cast<unsigned>(false);
  }


  // HasCurrentFilterAnimation
  bool HasCurrentFilterAnimation() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_filter_animation_);
  }

  void SetHasCurrentFilterAnimation(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_filter_animation_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_filter_animation_ = static_cast<unsigned>(v);
  }

  inline void ResetHasCurrentFilterAnimation() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_filter_animation_ = static_cast<unsigned>(false);
  }


  // HasCurrentOpacityAnimation
  bool HasCurrentOpacityAnimation() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_opacity_animation_);
  }

  void SetHasCurrentOpacityAnimation(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_opacity_animation_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_opacity_animation_ = static_cast<unsigned>(v);
  }

  inline void ResetHasCurrentOpacityAnimation() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_opacity_animation_ = static_cast<unsigned>(false);
  }


  // HasCurrentTransformAnimation
  bool HasCurrentTransformAnimation() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_transform_animation_);
  }

  void SetHasCurrentTransformAnimation(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->has_current_transform_animation_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_transform_animation_ = static_cast<unsigned>(v);
  }

  inline void ResetHasCurrentTransformAnimation() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_transform_animation_ = static_cast<unsigned>(false);
  }


  // HasExplicitlyInheritedProperties
  bool HasExplicitlyInheritedProperties() const {
    return static_cast<bool>(has_explicitly_inherited_properties_);
  }

  void SetHasExplicitlyInheritedProperties() const {
    has_explicitly_inherited_properties_ = static_cast<unsigned>(true);
  }


  // HasRemUnits
  bool HasRemUnits() const {
    return static_cast<bool>(has_rem_units_);
  }

  void SetHasRemUnits() {
    has_rem_units_ = static_cast<unsigned>(true);
  }


  // HasSimpleUnderline
  

  inline void ResetHasSimpleUnderline() {
    has_simple_underline_ = static_cast<unsigned>(false);
  }


  // HasVariableReferenceFromNonInheritedProperty
  bool HasVariableReferenceFromNonInheritedProperty() const {
    return static_cast<bool>(has_variable_reference_from_non_inherited_property_);
  }

  void SetHasVariableReferenceFromNonInheritedProperty() {
    has_variable_reference_from_non_inherited_property_ = static_cast<unsigned>(true);
  }


  // HasViewportUnits
  bool HasViewportUnits() const {
    return static_cast<bool>(has_viewport_units_);
  }

  void SetHasViewportUnits(bool v) {
    has_viewport_units_ = static_cast<unsigned>(v);
  }

  inline void ResetHasViewportUnits() {
    has_viewport_units_ = static_cast<unsigned>(false);
  }


  // height
  const Length& Height() const {
    return box_data_->height_;
  }

  void SetHeight(const Length& v) {
    if (!(box_data_->height_ == v))
      box_data_.Access()->height_ = v;
  }

  void SetHeight(Length&& v) {
    if (!(box_data_->height_ == v))
      box_data_.Access()->height_ = std::move(v);
  }
  inline void ResetHeight() {
    box_data_.Access()->height_ = Length();
  }



  // -webkit-highlight
  const AtomicString& Highlight() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->highlight_;
  }

  void SetHighlight(const AtomicString& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->highlight_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->highlight_ = v;
  }

  void SetHighlight(AtomicString&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->highlight_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->highlight_ = std::move(v);
  }
  inline void ResetHighlight() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->highlight_ = g_null_atom;
  }



  // -webkit-border-horizontal-spacing
  short HorizontalBorderSpacing() const {
    return inherited_data_->horizontal_border_spacing_;
  }

  void SetHorizontalBorderSpacing(short v) {
    if (!(inherited_data_->horizontal_border_spacing_ == v))
      inherited_data_.Access()->horizontal_border_spacing_ = v;
  }

  inline void ResetHorizontalBorderSpacing() {
    inherited_data_.Access()->horizontal_border_spacing_ = 0;
  }


  // HyphenationLimitAfter
  

  inline void ResetHyphenationLimitAfter() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_after_ = -1;
  }


  // HyphenationLimitBefore
  

  inline void ResetHyphenationLimitBefore() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_before_ = -1;
  }


  // HyphenationLimitLines
  

  inline void ResetHyphenationLimitLines() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_lines_ = -1;
  }


  // -webkit-hyphenate-character
  const AtomicString& HyphenationString() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_string_;
  }

  void SetHyphenationString(const AtomicString& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_string_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_string_ = v;
  }

  void SetHyphenationString(AtomicString&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_string_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_string_ = std::move(v);
  }
  inline void ResetHyphenationString() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_string_ = AtomicString();
  }



  // hyphens
  Hyphens GetHyphens() const {
    return static_cast<Hyphens>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->hyphens_);
  }

  void SetHyphens(Hyphens v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->hyphens_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->hyphens_ = static_cast<unsigned>(v);
  }

  inline void ResetHyphens() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->hyphens_ = static_cast<unsigned>(Hyphens::kManual);
  }


  // image-rendering
  EImageRendering ImageRendering() const {
    return static_cast<EImageRendering>(rare_inherited_usage_less_than_40_percent_data_->image_rendering_);
  }

  void SetImageRendering(EImageRendering v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->image_rendering_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->image_rendering_ = static_cast<unsigned>(v);
  }

  inline void ResetImageRendering() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->image_rendering_ = static_cast<unsigned>(EImageRendering::kAuto);
  }


  // InheritedVariables
  

  inline void ResetInheritedVariables() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->inherited_variables_ = nullptr;
  }



  // InitialData
  

  inline void ResetInitialData() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->initial_data_ = nullptr;
  }



  // InsideLink
  EInsideLink InsideLink() const {
    return static_cast<EInsideLink>(inside_link_);
  }

  void SetInsideLink(EInsideLink v) {
    inside_link_ = static_cast<unsigned>(v);
  }

  inline void ResetInsideLink() {
    inside_link_ = static_cast<unsigned>(EInsideLink::kNotInsideLink);
  }


  // IsEnsuredInDisplayNone
  bool IsEnsuredInDisplayNone() const {
    return static_cast<bool>(is_ensured_in_display_none_);
  }

  void SetIsEnsuredInDisplayNone() {
    is_ensured_in_display_none_ = static_cast<unsigned>(true);
  }


  // IsLink
  bool IsLink() const {
    return static_cast<bool>(is_link_);
  }

  void SetIsLink() {
    is_link_ = static_cast<unsigned>(true);
  }


  // IsRunningBackdropFilterAnimationOnCompositor
  bool IsRunningBackdropFilterAnimationOnCompositor() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_backdrop_filter_animation_on_compositor_);
  }

  void SetIsRunningBackdropFilterAnimationOnCompositor(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_backdrop_filter_animation_on_compositor_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_backdrop_filter_animation_on_compositor_ = static_cast<unsigned>(v);
  }

  inline void ResetIsRunningBackdropFilterAnimationOnCompositor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_backdrop_filter_animation_on_compositor_ = static_cast<unsigned>(false);
  }


  // IsRunningFilterAnimationOnCompositor
  bool IsRunningFilterAnimationOnCompositor() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_filter_animation_on_compositor_);
  }

  void SetIsRunningFilterAnimationOnCompositor(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_filter_animation_on_compositor_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_filter_animation_on_compositor_ = static_cast<unsigned>(v);
  }

  inline void ResetIsRunningFilterAnimationOnCompositor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_filter_animation_on_compositor_ = static_cast<unsigned>(false);
  }


  // IsRunningOpacityAnimationOnCompositor
  bool IsRunningOpacityAnimationOnCompositor() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_opacity_animation_on_compositor_);
  }

  void SetIsRunningOpacityAnimationOnCompositor(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_opacity_animation_on_compositor_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_opacity_animation_on_compositor_ = static_cast<unsigned>(v);
  }

  inline void ResetIsRunningOpacityAnimationOnCompositor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_opacity_animation_on_compositor_ = static_cast<unsigned>(false);
  }


  // IsRunningTransformAnimationOnCompositor
  bool IsRunningTransformAnimationOnCompositor() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_transform_animation_on_compositor_);
  }

  void SetIsRunningTransformAnimationOnCompositor(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_running_transform_animation_on_compositor_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_transform_animation_on_compositor_ = static_cast<unsigned>(v);
  }

  inline void ResetIsRunningTransformAnimationOnCompositor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_transform_animation_on_compositor_ = static_cast<unsigned>(false);
  }


  // IsStackingContext
  bool IsStackingContext() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_stacking_context_);
  }

  void SetIsStackingContext(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->is_stacking_context_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_stacking_context_ = static_cast<unsigned>(v);
  }

  inline void ResetIsStackingContext() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_stacking_context_ = static_cast<unsigned>(false);
  }


  // isolation
  EIsolation Isolation() const {
    return static_cast<EIsolation>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->isolation_);
  }

  void SetIsolation(EIsolation v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->isolation_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->isolation_ = static_cast<unsigned>(v);
  }

  inline void ResetIsolation() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->isolation_ = static_cast<unsigned>(EIsolation::kAuto);
  }


  // justify-content
  const StyleContentAlignmentData& JustifyContent() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->justify_content_;
  }

  void SetJustifyContent(const StyleContentAlignmentData& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->justify_content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->justify_content_ = v;
  }

  void SetJustifyContent(StyleContentAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->justify_content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->justify_content_ = std::move(v);
  }
  inline void ResetJustifyContent() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->justify_content_ = StyleContentAlignmentData(ContentPosition::kNormal, ContentDistributionType::kDefault, OverflowAlignment::kDefault);
  }



  // justify-items
  const StyleSelfAlignmentData& JustifyItems() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_items_;
  }

  void SetJustifyItems(const StyleSelfAlignmentData& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_items_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_items_ = v;
  }

  void SetJustifyItems(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_items_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_items_ = std::move(v);
  }
  inline void ResetJustifyItems() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_items_ = StyleSelfAlignmentData(ItemPosition::kLegacy, OverflowAlignment::kDefault);
  }



  // justify-self
  const StyleSelfAlignmentData& JustifySelf() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_self_;
  }

  void SetJustifySelf(const StyleSelfAlignmentData& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_self_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_self_ = v;
  }

  void SetJustifySelf(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_self_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_self_ = std::move(v);
  }
  inline void ResetJustifySelf() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_self_ = StyleSelfAlignmentData(ItemPosition::kAuto, OverflowAlignment::kDefault);
  }



  // left
  const Length& Left() const {
    return surround_data_->left_;
  }

  void SetLeft(const Length& v) {
    if (!(surround_data_->left_ == v))
      surround_data_.Access()->left_ = v;
  }

  void SetLeft(Length&& v) {
    if (!(surround_data_->left_ == v))
      surround_data_.Access()->left_ = std::move(v);
  }
  inline void ResetLeft() {
    surround_data_.Access()->left_ = Length();
  }



  // -webkit-line-break
  LineBreak GetLineBreak() const {
    return static_cast<LineBreak>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_break_);
  }

  void SetLineBreak(LineBreak v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_break_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->line_break_ = static_cast<unsigned>(v);
  }

  inline void ResetLineBreak() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->line_break_ = static_cast<unsigned>(LineBreak::kAuto);
  }


  // -webkit-line-clamp
  const int& LineClamp() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->line_clamp_;
  }

  void SetLineClamp(const int& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->line_clamp_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->line_clamp_ = v;
  }

  void SetLineClamp(int&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->line_clamp_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->line_clamp_ = std::move(v);
  }
  inline void ResetLineClamp() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->line_clamp_ = 0;
  }



  // line-height
  
  void SetLineHeight(const Length& v) {
    if (!(inherited_data_->line_height_ == v))
      inherited_data_.Access()->line_height_ = v;
  }

  void SetLineHeight(Length&& v) {
    if (!(inherited_data_->line_height_ == v))
      inherited_data_.Access()->line_height_ = std::move(v);
  }
  inline void ResetLineHeight() {
    inherited_data_.Access()->line_height_ = Length::Percent(-100.0);
  }



  // line-height-step
  uint8_t LineHeightStep() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_height_step_;
  }

  void SetLineHeightStep(uint8_t v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_height_step_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->line_height_step_ = v;
  }

  inline void ResetLineHeightStep() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->line_height_step_ = 0;
  }


  // list-style-image
  

  inline void ResetListStyleImage() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->list_style_image_ = nullptr;
  }



  // list-style-position
  EListStylePosition ListStylePosition() const {
    return static_cast<EListStylePosition>(list_style_position_);
  }

  void SetListStylePosition(EListStylePosition v) {
    list_style_position_ = static_cast<unsigned>(v);
  }

  inline void ResetListStylePosition() {
    list_style_position_ = static_cast<unsigned>(EListStylePosition::kOutside);
  }


  // list-style-position
  bool ListStylePositionIsInherited() const {
    return static_cast<bool>(list_style_position_is_inherited_);
  }

  void SetListStylePositionIsInherited(bool v) {
    list_style_position_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetListStylePositionIsInherited() {
    list_style_position_is_inherited_ = static_cast<unsigned>(true);
  }


  // list-style-type
  EListStyleType ListStyleType() const {
    return static_cast<EListStyleType>(list_style_type_);
  }

  void SetListStyleType(EListStyleType v) {
    list_style_type_ = static_cast<unsigned>(v);
  }

  inline void ResetListStyleType() {
    list_style_type_ = static_cast<unsigned>(EListStyleType::kDisc);
  }


  // -webkit-margin-after-collapse
  EMarginCollapse MarginAfterCollapse() const {
    return static_cast<EMarginCollapse>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_after_collapse_);
  }

  void SetMarginAfterCollapse(EMarginCollapse v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_after_collapse_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->margin_after_collapse_ = static_cast<unsigned>(v);
  }

  inline void ResetMarginAfterCollapse() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->margin_after_collapse_ = static_cast<unsigned>(EMarginCollapse::kCollapse);
  }


  // -webkit-margin-before-collapse
  EMarginCollapse MarginBeforeCollapse() const {
    return static_cast<EMarginCollapse>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_before_collapse_);
  }

  void SetMarginBeforeCollapse(EMarginCollapse v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_before_collapse_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->margin_before_collapse_ = static_cast<unsigned>(v);
  }

  inline void ResetMarginBeforeCollapse() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->margin_before_collapse_ = static_cast<unsigned>(EMarginCollapse::kCollapse);
  }


  // margin-bottom
  const Length& MarginBottom() const {
    return surround_data_->margin_bottom_;
  }


  inline void ResetMarginBottom() {
    surround_data_.Access()->margin_bottom_ = Length::Fixed();
  }



  // margin-left
  const Length& MarginLeft() const {
    return surround_data_->margin_left_;
  }


  inline void ResetMarginLeft() {
    surround_data_.Access()->margin_left_ = Length::Fixed();
  }



  // margin-right
  const Length& MarginRight() const {
    return surround_data_->margin_right_;
  }


  inline void ResetMarginRight() {
    surround_data_.Access()->margin_right_ = Length::Fixed();
  }



  // margin-top
  const Length& MarginTop() const {
    return surround_data_->margin_top_;
  }


  inline void ResetMarginTop() {
    surround_data_.Access()->margin_top_ = Length::Fixed();
  }



  // Mask
  

  inline void ResetMask() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_ = FillLayer(EFillLayerType::kMask, true);
  }



  // MaskBoxImage
  

  inline void ResetMaskBoxImage() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_box_image_ = NinePieceImage::MaskDefaults();
  }



  // max-height
  const Length& MaxHeight() const {
    return box_data_->max_height_;
  }

  void SetMaxHeight(const Length& v) {
    if (!(box_data_->max_height_ == v))
      box_data_.Access()->max_height_ = v;
  }

  void SetMaxHeight(Length&& v) {
    if (!(box_data_->max_height_ == v))
      box_data_.Access()->max_height_ = std::move(v);
  }
  inline void ResetMaxHeight() {
    box_data_.Access()->max_height_ = Length::MaxSizeNone();
  }



  // max-width
  const Length& MaxWidth() const {
    return box_data_->max_width_;
  }

  void SetMaxWidth(const Length& v) {
    if (!(box_data_->max_width_ == v))
      box_data_.Access()->max_width_ = v;
  }

  void SetMaxWidth(Length&& v) {
    if (!(box_data_->max_width_ == v))
      box_data_.Access()->max_width_ = std::move(v);
  }
  inline void ResetMaxWidth() {
    box_data_.Access()->max_width_ = Length::MaxSizeNone();
  }



  // MayHaveMargin
  bool MayHaveMargin() const {
    return static_cast<bool>(may_have_margin_);
  }

  void SetMayHaveMargin() {
    may_have_margin_ = static_cast<unsigned>(true);
  }


  // MayHavePadding
  bool MayHavePadding() const {
    return static_cast<bool>(may_have_padding_);
  }

  void SetMayHavePadding() {
    may_have_padding_ = static_cast<unsigned>(true);
  }


  // min-height
  const Length& MinHeight() const {
    return box_data_->min_height_;
  }

  void SetMinHeight(const Length& v) {
    if (!(box_data_->min_height_ == v))
      box_data_.Access()->min_height_ = v;
  }

  void SetMinHeight(Length&& v) {
    if (!(box_data_->min_height_ == v))
      box_data_.Access()->min_height_ = std::move(v);
  }
  inline void ResetMinHeight() {
    box_data_.Access()->min_height_ = Length();
  }



  // min-width
  const Length& MinWidth() const {
    return box_data_->min_width_;
  }

  void SetMinWidth(const Length& v) {
    if (!(box_data_->min_width_ == v))
      box_data_.Access()->min_width_ = v;
  }

  void SetMinWidth(Length&& v) {
    if (!(box_data_->min_width_ == v))
      box_data_.Access()->min_width_ = std::move(v);
  }
  inline void ResetMinWidth() {
    box_data_.Access()->min_width_ = Length();
  }



  // NamedGridArea
  const NamedGridAreaMap& NamedGridArea() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_;
  }

  void SetNamedGridArea(const NamedGridAreaMap& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_ = v;
  }

  void SetNamedGridArea(NamedGridAreaMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_ = std::move(v);
  }
  inline void ResetNamedGridArea() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_ = NamedGridAreaMap();
  }



  // NamedGridAreaColumnCount
  size_t NamedGridAreaColumnCount() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_column_count_;
  }

  void SetNamedGridAreaColumnCount(size_t v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_column_count_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_column_count_ = v;
  }

  inline void ResetNamedGridAreaColumnCount() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_column_count_ = 0;
  }


  // NamedGridAreaRowCount
  size_t NamedGridAreaRowCount() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_row_count_;
  }

  void SetNamedGridAreaRowCount(size_t v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_row_count_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_row_count_ = v;
  }

  inline void ResetNamedGridAreaRowCount() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_row_count_ = 0;
  }


  // NamedGridColumnLines
  const NamedGridLinesMap& NamedGridColumnLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_column_lines_;
  }

  void SetNamedGridColumnLines(const NamedGridLinesMap& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_column_lines_ = v;
  }

  void SetNamedGridColumnLines(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_column_lines_ = std::move(v);
  }
  inline void ResetNamedGridColumnLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_column_lines_ = NamedGridLinesMap();
  }



  // NamedGridRowLines
  const NamedGridLinesMap& NamedGridRowLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_row_lines_;
  }

  void SetNamedGridRowLines(const NamedGridLinesMap& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_row_lines_ = v;
  }

  void SetNamedGridRowLines(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_row_lines_ = std::move(v);
  }
  inline void ResetNamedGridRowLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_row_lines_ = NamedGridLinesMap();
  }



  // NonInheritedVariables
  

  inline void ResetNonInheritedVariables() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->non_inherited_variables_ = nullptr;
  }



  // object-fit
  EObjectFit GetObjectFit() const {
    return static_cast<EObjectFit>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_fit_);
  }

  void SetObjectFit(EObjectFit v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_fit_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_fit_ = static_cast<unsigned>(v);
  }

  inline void ResetObjectFit() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_fit_ = static_cast<unsigned>(EObjectFit::kFill);
  }


  // object-position
  const LengthPoint& ObjectPosition() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_position_;
  }

  void SetObjectPosition(const LengthPoint& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_position_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_position_ = v;
  }

  void SetObjectPosition(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_position_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_position_ = std::move(v);
  }
  inline void ResetObjectPosition() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_position_ = LengthPoint(Length::Percent(50.0), Length::Percent(50.0));
  }



  // offset-anchor
  const LengthPoint& OffsetAnchor() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_;
  }

  void SetOffsetAnchor(const LengthPoint& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_anchor_ = v;
  }

  void SetOffsetAnchor(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_anchor_ = std::move(v);
  }
  inline void ResetOffsetAnchor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_anchor_ = LengthPoint(Length::Auto(), Length::Auto());
  }



  // offset-distance
  const Length& OffsetDistance() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_;
  }

  void SetOffsetDistance(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_distance_ = v;
  }

  void SetOffsetDistance(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_distance_ = std::move(v);
  }
  inline void ResetOffsetDistance() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_distance_ = Length::Fixed(0);
  }



  // offset-path
  BasicShape* OffsetPath() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_path_.get();
  }

  void SetOffsetPath(scoped_refptr<BasicShape> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_path_ = std::move(v);
  }

  // offset-position
  const LengthPoint& OffsetPosition() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_;
  }

  void SetOffsetPosition(const LengthPoint& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_position_ = v;
  }

  void SetOffsetPosition(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_position_ = std::move(v);
  }
  inline void ResetOffsetPosition() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_position_ = LengthPoint(Length::Auto(), Length::Auto());
  }



  // offset-rotate
  const StyleOffsetRotation& OffsetRotate() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_;
  }

  void SetOffsetRotate(const StyleOffsetRotation& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_rotate_ = v;
  }

  void SetOffsetRotate(StyleOffsetRotation&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_rotate_ = std::move(v);
  }
  inline void ResetOffsetRotate() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_rotate_ = StyleOffsetRotation(0, OffsetRotationType::kAuto);
  }



  // opacity
  float Opacity() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->opacity_;
  }


  inline void ResetOpacity() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->opacity_ = 1.0;
  }


  // order
  int Order() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->order_;
  }


  inline void ResetOrder() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->order_ = 0;
  }


  // OrderedNamedGridColumnLines
  const OrderedNamedGridLines& OrderedNamedGridColumnLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_column_lines_;
  }

  void SetOrderedNamedGridColumnLines(const OrderedNamedGridLines& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_column_lines_ = v;
  }

  void SetOrderedNamedGridColumnLines(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_column_lines_ = std::move(v);
  }
  inline void ResetOrderedNamedGridColumnLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_column_lines_ = OrderedNamedGridLines();
  }



  // OrderedNamedGridRowLines
  const OrderedNamedGridLines& OrderedNamedGridRowLines() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_row_lines_;
  }

  void SetOrderedNamedGridRowLines(const OrderedNamedGridLines& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_row_lines_ = v;
  }

  void SetOrderedNamedGridRowLines(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_row_lines_ = std::move(v);
  }
  inline void ResetOrderedNamedGridRowLines() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_row_lines_ = OrderedNamedGridLines();
  }



  // OriginalDisplay
  EDisplay OriginalDisplay() const {
    return static_cast<EDisplay>(original_display_);
  }

  void SetOriginalDisplay(EDisplay v) {
    original_display_ = static_cast<unsigned>(v);
  }

  inline void ResetOriginalDisplay() {
    original_display_ = static_cast<unsigned>(EDisplay::kInline);
  }


  // orphans
  short Orphans() const {
    return rare_inherited_usage_less_than_40_percent_data_->orphans_;
  }


  inline void ResetOrphans() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->orphans_ = 2;
  }


  // outline-color
  

  inline void ResetOutlineColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->outline_color_ = 0;
  }



  // OutlineColorIsCurrentColor
  bool OutlineColorIsCurrentColor() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->outline_color_is_current_color_);
  }

  void SetOutlineColorIsCurrentColor(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->outline_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->outline_color_is_current_color_ = static_cast<unsigned>(v);
  }

  inline void ResetOutlineColorIsCurrentColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->outline_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // outline-offset
  
  void SetOutlineOffset(int v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_offset_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_offset_ = v;
  }

  inline void ResetOutlineOffset() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_offset_ = 0;
  }


  // outline-style
  EBorderStyle OutlineStyle() const {
    return static_cast<EBorderStyle>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_style_);
  }

  void SetOutlineStyle(EBorderStyle v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_style_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_style_ = static_cast<unsigned>(v);
  }

  inline void ResetOutlineStyle() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_style_ = static_cast<unsigned>(EBorderStyle::kNone);
  }


  // OutlineStyleIsAuto
  bool OutlineStyleIsAuto() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->outline_style_is_auto_);
  }

  void SetOutlineStyleIsAuto(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->outline_style_is_auto_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->outline_style_is_auto_ = static_cast<unsigned>(v);
  }

  inline void ResetOutlineStyleIsAuto() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->outline_style_is_auto_ = static_cast<unsigned>(false);
  }


  // outline-width
  

  inline void ResetOutlineWidth() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_width_ = LayoutUnit(3);
  }



  // overflow-anchor
  EOverflowAnchor OverflowAnchor() const {
    return static_cast<EOverflowAnchor>(overflow_anchor_);
  }

  void SetOverflowAnchor(EOverflowAnchor v) {
    overflow_anchor_ = static_cast<unsigned>(v);
  }

  inline void ResetOverflowAnchor() {
    overflow_anchor_ = static_cast<unsigned>(EOverflowAnchor::kAuto);
  }


  // overflow-wrap
  EOverflowWrap OverflowWrap() const {
    return static_cast<EOverflowWrap>(rare_inherited_usage_less_than_40_percent_data_->overflow_wrap_);
  }

  void SetOverflowWrap(EOverflowWrap v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->overflow_wrap_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->overflow_wrap_ = static_cast<unsigned>(v);
  }

  inline void ResetOverflowWrap() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->overflow_wrap_ = static_cast<unsigned>(EOverflowWrap::kNormal);
  }


  // overflow-x
  EOverflow OverflowX() const {
    return static_cast<EOverflow>(overflow_x_);
  }

  void SetOverflowX(EOverflow v) {
    overflow_x_ = static_cast<unsigned>(v);
  }

  inline void ResetOverflowX() {
    overflow_x_ = static_cast<unsigned>(EOverflow::kVisible);
  }


  // overflow-y
  EOverflow OverflowY() const {
    return static_cast<EOverflow>(overflow_y_);
  }

  void SetOverflowY(EOverflow v) {
    overflow_y_ = static_cast<unsigned>(v);
  }

  inline void ResetOverflowY() {
    overflow_y_ = static_cast<unsigned>(EOverflow::kVisible);
  }


  // overscroll-behavior-x
  EOverscrollBehavior OverscrollBehaviorX() const {
    return static_cast<EOverscrollBehavior>(overscroll_behavior_x_);
  }

  void SetOverscrollBehaviorX(EOverscrollBehavior v) {
    overscroll_behavior_x_ = static_cast<unsigned>(v);
  }

  inline void ResetOverscrollBehaviorX() {
    overscroll_behavior_x_ = static_cast<unsigned>(EOverscrollBehavior::kAuto);
  }


  // overscroll-behavior-y
  EOverscrollBehavior OverscrollBehaviorY() const {
    return static_cast<EOverscrollBehavior>(overscroll_behavior_y_);
  }

  void SetOverscrollBehaviorY(EOverscrollBehavior v) {
    overscroll_behavior_y_ = static_cast<unsigned>(v);
  }

  inline void ResetOverscrollBehaviorY() {
    overscroll_behavior_y_ = static_cast<unsigned>(EOverscrollBehavior::kAuto);
  }


  // padding-bottom
  const Length& PaddingBottom() const {
    return surround_data_->padding_bottom_;
  }


  inline void ResetPaddingBottom() {
    surround_data_.Access()->padding_bottom_ = Length::Fixed();
  }



  // padding-left
  const Length& PaddingLeft() const {
    return surround_data_->padding_left_;
  }


  inline void ResetPaddingLeft() {
    surround_data_.Access()->padding_left_ = Length::Fixed();
  }



  // padding-right
  const Length& PaddingRight() const {
    return surround_data_->padding_right_;
  }


  inline void ResetPaddingRight() {
    surround_data_.Access()->padding_right_ = Length::Fixed();
  }



  // padding-top
  const Length& PaddingTop() const {
    return surround_data_->padding_top_;
  }


  inline void ResetPaddingTop() {
    surround_data_.Access()->padding_top_ = Length::Fixed();
  }



  // PageSize
  const FloatSize& PageSize() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->page_size_;
  }

  void SetPageSize(const FloatSize& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->page_size_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_ = v;
  }

  void SetPageSize(FloatSize&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->page_size_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_ = std::move(v);
  }
  inline void ResetPageSize() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_ = FloatSize();
  }



  // PageSizeType
  EPageSizeType PageSizeType() const {
    return static_cast<EPageSizeType>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->page_size_type_);
  }

  void SetPageSizeType(EPageSizeType v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->page_size_type_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_type_ = static_cast<unsigned>(v);
  }

  inline void ResetPageSizeType() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_type_ = static_cast<unsigned>(EPageSizeType::kAuto);
  }


  // PaintImages
  

  inline void ResetPaintImages() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->paint_images_ = nullptr;
  }



  // perspective
  float Perspective() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->perspective_;
  }

  void SetPerspective(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->perspective_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->perspective_ = v;
  }

  inline void ResetPerspective() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->perspective_ = 0.0;
  }


  // perspective-origin
  const LengthPoint& PerspectiveOrigin() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->perspective_origin_;
  }

  void SetPerspectiveOrigin(const LengthPoint& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->perspective_origin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->perspective_origin_ = v;
  }

  void SetPerspectiveOrigin(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->perspective_origin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->perspective_origin_ = std::move(v);
  }
  inline void ResetPerspectiveOrigin() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->perspective_origin_ = LengthPoint(Length::Percent(50.0), Length::Percent(50.0));
  }



  // pointer-events
  EPointerEvents PointerEvents() const {
    return static_cast<EPointerEvents>(pointer_events_);
  }

  void SetPointerEvents(EPointerEvents v) {
    pointer_events_ = static_cast<unsigned>(v);
  }

  inline void ResetPointerEvents() {
    pointer_events_ = static_cast<unsigned>(EPointerEvents::kAuto);
  }


  // pointer-events
  bool PointerEventsIsInherited() const {
    return static_cast<bool>(pointer_events_is_inherited_);
  }

  void SetPointerEventsIsInherited(bool v) {
    pointer_events_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetPointerEventsIsInherited() {
    pointer_events_is_inherited_ = static_cast<unsigned>(true);
  }


  // position
  EPosition GetPosition() const {
    return static_cast<EPosition>(position_);
  }

  void SetPosition(EPosition v) {
    position_ = static_cast<unsigned>(v);
  }

  inline void ResetPosition() {
    position_ = static_cast<unsigned>(EPosition::kStatic);
  }


  // -webkit-print-color-adjust
  EPrintColorAdjust PrintColorAdjust() const {
    return static_cast<EPrintColorAdjust>(print_color_adjust_);
  }

  void SetPrintColorAdjust(EPrintColorAdjust v) {
    print_color_adjust_ = static_cast<unsigned>(v);
  }

  inline void ResetPrintColorAdjust() {
    print_color_adjust_ = static_cast<unsigned>(EPrintColorAdjust::kEconomy);
  }


  // -webkit-print-color-adjust
  bool PrintColorAdjustIsInherited() const {
    return static_cast<bool>(print_color_adjust_is_inherited_);
  }

  void SetPrintColorAdjustIsInherited(bool v) {
    print_color_adjust_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetPrintColorAdjustIsInherited() {
    print_color_adjust_is_inherited_ = static_cast<unsigned>(true);
  }


  // PseudoBits
  

  inline void ResetPseudoBits() {
    pseudo_bits_ = static_cast<unsigned>(kPseudoIdNone);
  }


  // quotes
  QuotesData* Quotes() const {
    return rare_inherited_usage_less_than_40_percent_data_->quotes_.get();
  }

  void SetQuotes(scoped_refptr<QuotesData> v) {
    rare_inherited_usage_less_than_40_percent_data_.Access()->quotes_ = std::move(v);
  }

  // RequiresAcceleratedCompositingForExternalReasons
  bool RequiresAcceleratedCompositingForExternalReasons() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->requires_accelerated_compositing_for_external_reasons_);
  }

  void SetRequiresAcceleratedCompositingForExternalReasons(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->requires_accelerated_compositing_for_external_reasons_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->requires_accelerated_compositing_for_external_reasons_ = static_cast<unsigned>(v);
  }

  inline void ResetRequiresAcceleratedCompositingForExternalReasons() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->requires_accelerated_compositing_for_external_reasons_ = static_cast<unsigned>(false);
  }


  // resize
  EResize Resize() const {
    return static_cast<EResize>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->resize_);
  }

  void SetResize(EResize v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->resize_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->resize_ = static_cast<unsigned>(v);
  }

  inline void ResetResize() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->resize_ = static_cast<unsigned>(EResize::kNone);
  }


  // image-orientation
  bool RespectImageOrientation() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->respect_image_orientation_);
  }

  void SetRespectImageOrientation(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->respect_image_orientation_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->respect_image_orientation_ = static_cast<unsigned>(v);
  }

  inline void ResetRespectImageOrientation() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->respect_image_orientation_ = static_cast<unsigned>(false);
  }


  // right
  const Length& Right() const {
    return surround_data_->right_;
  }

  void SetRight(const Length& v) {
    if (!(surround_data_->right_ == v))
      surround_data_.Access()->right_ = v;
  }

  void SetRight(Length&& v) {
    if (!(surround_data_->right_ == v))
      surround_data_.Access()->right_ = std::move(v);
  }
  inline void ResetRight() {
    surround_data_.Access()->right_ = Length();
  }



  // rotate
  RotateTransformOperation* Rotate() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->rotate_.get();
  }

  void SetRotate(scoped_refptr<RotateTransformOperation> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->rotate_ = std::move(v);
  }

  // row-gap
  const GapLength& RowGap() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->row_gap_;
  }

  void SetRowGap(const GapLength& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->row_gap_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->row_gap_ = v;
  }

  void SetRowGap(GapLength&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->row_gap_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->row_gap_ = std::move(v);
  }
  inline void ResetRowGap() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->row_gap_ = GapLength();
  }



  // -webkit-rtl-ordering
  EOrder RtlOrdering() const {
    return static_cast<EOrder>(rtl_ordering_);
  }

  void SetRtlOrdering(EOrder v) {
    rtl_ordering_ = static_cast<unsigned>(v);
  }

  inline void ResetRtlOrdering() {
    rtl_ordering_ = static_cast<unsigned>(EOrder::kLogical);
  }


  // -webkit-rtl-ordering
  bool RtlOrderingIsInherited() const {
    return static_cast<bool>(rtl_ordering_is_inherited_);
  }

  void SetRtlOrderingIsInherited(bool v) {
    rtl_ordering_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetRtlOrderingIsInherited() {
    rtl_ordering_is_inherited_ = static_cast<unsigned>(true);
  }


  // -webkit-ruby-position
  RubyPosition GetRubyPosition() const {
    return static_cast<RubyPosition>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->ruby_position_);
  }

  void SetRubyPosition(RubyPosition v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->ruby_position_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->ruby_position_ = static_cast<unsigned>(v);
  }

  inline void ResetRubyPosition() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->ruby_position_ = static_cast<unsigned>(RubyPosition::kBefore);
  }


  // scale
  ScaleTransformOperation* Scale() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scale_.get();
  }

  void SetScale(scoped_refptr<ScaleTransformOperation> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scale_ = std::move(v);
  }

  // scroll-behavior
  ScrollBehavior GetScrollBehavior() const {
    return static_cast<ScrollBehavior>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scroll_behavior_);
  }

  void SetScrollBehavior(ScrollBehavior v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scroll_behavior_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_behavior_ = static_cast<unsigned>(v);
  }

  inline void ResetScrollBehavior() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_behavior_ = static_cast<unsigned>(kScrollBehaviorAuto);
  }


  // scroll-customization
  scroll_customization::ScrollDirection ScrollCustomization() const {
    return static_cast<scroll_customization::ScrollDirection>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_customization_);
  }

  void SetScrollCustomization(scroll_customization::ScrollDirection v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_customization_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_customization_ = static_cast<unsigned>(v);
  }

  inline void ResetScrollCustomization() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_customization_ = static_cast<unsigned>(scroll_customization::kScrollDirectionNone);
  }


  // scroll-margin-bottom
  float ScrollMarginBottom() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_bottom_;
  }

  void SetScrollMarginBottom(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_bottom_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_bottom_ = v;
  }

  inline void ResetScrollMarginBottom() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_bottom_ = 0.0f;
  }


  // scroll-margin-left
  float ScrollMarginLeft() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_left_;
  }

  void SetScrollMarginLeft(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_left_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_left_ = v;
  }

  inline void ResetScrollMarginLeft() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_left_ = 0.0f;
  }


  // scroll-margin-right
  float ScrollMarginRight() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_right_;
  }

  void SetScrollMarginRight(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_right_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_right_ = v;
  }

  inline void ResetScrollMarginRight() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_right_ = 0.0f;
  }


  // scroll-margin-top
  float ScrollMarginTop() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_top_;
  }

  void SetScrollMarginTop(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_margin_top_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_top_ = v;
  }

  inline void ResetScrollMarginTop() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_top_ = 0.0f;
  }


  // scroll-padding-bottom
  const Length& ScrollPaddingBottom() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_bottom_;
  }

  void SetScrollPaddingBottom(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_bottom_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_bottom_ = v;
  }

  void SetScrollPaddingBottom(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_bottom_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_bottom_ = std::move(v);
  }
  inline void ResetScrollPaddingBottom() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_bottom_ = Length();
  }



  // scroll-padding-left
  const Length& ScrollPaddingLeft() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_left_;
  }

  void SetScrollPaddingLeft(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_left_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_left_ = v;
  }

  void SetScrollPaddingLeft(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_left_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_left_ = std::move(v);
  }
  inline void ResetScrollPaddingLeft() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_left_ = Length();
  }



  // scroll-padding-right
  const Length& ScrollPaddingRight() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_right_;
  }

  void SetScrollPaddingRight(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_right_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_right_ = v;
  }

  void SetScrollPaddingRight(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_right_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_right_ = std::move(v);
  }
  inline void ResetScrollPaddingRight() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_right_ = Length();
  }



  // scroll-padding-top
  const Length& ScrollPaddingTop() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_top_;
  }

  void SetScrollPaddingTop(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_top_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_top_ = v;
  }

  void SetScrollPaddingTop(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_top_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_top_ = std::move(v);
  }
  inline void ResetScrollPaddingTop() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_top_ = Length();
  }



  // scroll-snap-align
  const cc::ScrollSnapAlign& GetScrollSnapAlign() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_snap_align_;
  }

  void SetScrollSnapAlign(const cc::ScrollSnapAlign& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_snap_align_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_snap_align_ = v;
  }

  void SetScrollSnapAlign(cc::ScrollSnapAlign&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_snap_align_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_snap_align_ = std::move(v);
  }
  inline void ResetScrollSnapAlign() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_snap_align_ = cc::ScrollSnapAlign();
  }



  // scroll-snap-stop
  EScrollSnapStop ScrollSnapStop() const {
    return static_cast<EScrollSnapStop>(scroll_snap_stop_);
  }

  void SetScrollSnapStop(EScrollSnapStop v) {
    scroll_snap_stop_ = static_cast<unsigned>(v);
  }

  inline void ResetScrollSnapStop() {
    scroll_snap_stop_ = static_cast<unsigned>(EScrollSnapStop::kNormal);
  }


  // scroll-snap-type
  const cc::ScrollSnapType& GetScrollSnapType() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scroll_snap_type_;
  }

  void SetScrollSnapType(const cc::ScrollSnapType& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scroll_snap_type_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_snap_type_ = v;
  }

  void SetScrollSnapType(cc::ScrollSnapType&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scroll_snap_type_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_snap_type_ = std::move(v);
  }
  inline void ResetScrollSnapType() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_snap_type_ = cc::ScrollSnapType();
  }



  // SelfOrAncestorHasDirAutoAttribute
  bool SelfOrAncestorHasDirAutoAttribute() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->self_or_ancestor_has_dir_auto_attribute_);
  }

  void SetSelfOrAncestorHasDirAutoAttribute(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->self_or_ancestor_has_dir_auto_attribute_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->self_or_ancestor_has_dir_auto_attribute_ = static_cast<unsigned>(v);
  }

  inline void ResetSelfOrAncestorHasDirAutoAttribute() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->self_or_ancestor_has_dir_auto_attribute_ = static_cast<unsigned>(false);
  }


  // shape-image-threshold
  float ShapeImageThreshold() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_image_threshold_;
  }


  inline void ResetShapeImageThreshold() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_image_threshold_ = 0.0;
  }


  // shape-margin
  const Length& ShapeMargin() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_margin_;
  }

  void SetShapeMargin(const Length& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_margin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_margin_ = v;
  }

  void SetShapeMargin(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_margin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_margin_ = std::move(v);
  }
  inline void ResetShapeMargin() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_margin_ = Length::Fixed(0);
  }



  // shape-outside
  
  void SetShapeOutside(const Persistent<ShapeValue>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_outside_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_outside_ = v;
  }

  void SetShapeOutside(Persistent<ShapeValue>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_outside_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_outside_ = std::move(v);
  }
  inline void ResetShapeOutside() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_outside_ = nullptr;
  }



  // speak
  ESpeak Speak() const {
    return static_cast<ESpeak>(rare_inherited_usage_less_than_40_percent_data_->speak_);
  }

  void SetSpeak(ESpeak v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->speak_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->speak_ = static_cast<unsigned>(v);
  }

  inline void ResetSpeak() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->speak_ = static_cast<unsigned>(ESpeak::kNormal);
  }


  // StyleType
  

  inline void ResetStyleType() {
    style_type_ = static_cast<unsigned>(PseudoId::kPseudoIdNone);
  }


  // SubtreeIsSticky
  bool SubtreeIsSticky() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->subtree_is_sticky_);
  }

  void SetSubtreeIsSticky(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->subtree_is_sticky_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->subtree_is_sticky_ = static_cast<unsigned>(v);
  }

  inline void ResetSubtreeIsSticky() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->subtree_is_sticky_ = static_cast<unsigned>(false);
  }


  // SubtreeWillChangeContents
  bool SubtreeWillChangeContents() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->subtree_will_change_contents_);
  }

  void SetSubtreeWillChangeContents(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->subtree_will_change_contents_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->subtree_will_change_contents_ = static_cast<unsigned>(v);
  }

  inline void ResetSubtreeWillChangeContents() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->subtree_will_change_contents_ = static_cast<unsigned>(false);
  }


  // tab-size
  const TabSize& GetTabSize() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->tab_size_;
  }


  inline void ResetTabSize() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->tab_size_ = TabSize(8);
  }



  // table-layout
  ETableLayout TableLayout() const {
    return static_cast<ETableLayout>(table_layout_);
  }

  void SetTableLayout(ETableLayout v) {
    table_layout_ = static_cast<unsigned>(v);
  }

  inline void ResetTableLayout() {
    table_layout_ = static_cast<unsigned>(ETableLayout::kAuto);
  }


  // -webkit-tap-highlight-color
  const Color& TapHighlightColor() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->tap_highlight_color_;
  }

  void SetTapHighlightColor(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->tap_highlight_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->tap_highlight_color_ = v;
  }

  void SetTapHighlightColor(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->tap_highlight_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->tap_highlight_color_ = std::move(v);
  }
  inline void ResetTapHighlightColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->tap_highlight_color_ = LayoutTheme::TapHighlightColor();
  }



  // text-align
  ETextAlign GetTextAlign() const {
    return static_cast<ETextAlign>(text_align_);
  }

  void SetTextAlign(ETextAlign v) {
    text_align_ = static_cast<unsigned>(v);
  }

  inline void ResetTextAlign() {
    text_align_ = static_cast<unsigned>(ETextAlign::kStart);
  }


  // text-align-last
  ETextAlignLast TextAlignLast() const {
    return static_cast<ETextAlignLast>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_align_last_);
  }

  void SetTextAlignLast(ETextAlignLast v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_align_last_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_align_last_ = static_cast<unsigned>(v);
  }

  inline void ResetTextAlignLast() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_align_last_ = static_cast<unsigned>(ETextAlignLast::kAuto);
  }


  // TextAutosizingMultiplier
  float TextAutosizingMultiplier() const {
    return inherited_data_->text_autosizing_multiplier_;
  }


  inline void ResetTextAutosizingMultiplier() {
    inherited_data_.Access()->text_autosizing_multiplier_ = 1.0;
  }


  // text-combine-upright
  ETextCombine TextCombine() const {
    return static_cast<ETextCombine>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_combine_);
  }

  void SetTextCombine(ETextCombine v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_combine_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_combine_ = static_cast<unsigned>(v);
  }

  inline void ResetTextCombine() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_combine_ = static_cast<unsigned>(ETextCombine::kNone);
  }


  // text-decoration-line
  TextDecoration GetTextDecoration() const {
    return static_cast<TextDecoration>(visual_data_->text_decoration_);
  }

  void SetTextDecoration(TextDecoration v) {
    if (!(visual_data_->text_decoration_ == static_cast<unsigned>(v)))
      visual_data_.Access()->text_decoration_ = static_cast<unsigned>(v);
  }

  inline void ResetTextDecoration() {
    visual_data_.Access()->text_decoration_ = static_cast<unsigned>(TextDecoration::kNone);
  }


  // text-decoration-color
  const StyleColor& TextDecorationColor() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_color_;
  }

  void SetTextDecorationColor(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_color_ = v;
  }

  void SetTextDecorationColor(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_color_ = std::move(v);
  }
  inline void ResetTextDecorationColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_color_ = StyleColor::CurrentColor();
  }



  // text-decoration-skip-ink
  ETextDecorationSkipInk TextDecorationSkipInk() const {
    return static_cast<ETextDecorationSkipInk>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_decoration_skip_ink_);
  }

  void SetTextDecorationSkipInk(ETextDecorationSkipInk v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_decoration_skip_ink_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_skip_ink_ = static_cast<unsigned>(v);
  }

  inline void ResetTextDecorationSkipInk() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_skip_ink_ = static_cast<unsigned>(ETextDecorationSkipInk::kAuto);
  }


  // text-decoration-style
  ETextDecorationStyle TextDecorationStyle() const {
    return static_cast<ETextDecorationStyle>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_style_);
  }

  void SetTextDecorationStyle(ETextDecorationStyle v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_style_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_style_ = static_cast<unsigned>(v);
  }

  inline void ResetTextDecorationStyle() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_style_ = static_cast<unsigned>(ETextDecorationStyle::kSolid);
  }


  // -webkit-text-emphasis-color
  

  inline void ResetTextEmphasisColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_ = Color();
  }



  // TextEmphasisColorIsCurrentColor
  

  inline void ResetTextEmphasisColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // TextEmphasisCustomMark
  const AtomicString& TextEmphasisCustomMark() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_custom_mark_;
  }

  void SetTextEmphasisCustomMark(const AtomicString& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_custom_mark_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_custom_mark_ = v;
  }

  void SetTextEmphasisCustomMark(AtomicString&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_custom_mark_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_custom_mark_ = std::move(v);
  }
  inline void ResetTextEmphasisCustomMark() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_custom_mark_ = AtomicString();
  }



  // TextEmphasisFill
  TextEmphasisFill GetTextEmphasisFill() const {
    return static_cast<TextEmphasisFill>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_fill_);
  }

  void SetTextEmphasisFill(TextEmphasisFill v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_fill_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_fill_ = static_cast<unsigned>(v);
  }

  inline void ResetTextEmphasisFill() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_fill_ = static_cast<unsigned>(TextEmphasisFill::kFilled);
  }


  // TextEmphasisMark
  

  inline void ResetTextEmphasisMark() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_mark_ = static_cast<unsigned>(TextEmphasisMark::kNone);
  }


  // -webkit-text-emphasis-position
  TextEmphasisPosition GetTextEmphasisPosition() const {
    return static_cast<TextEmphasisPosition>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_position_);
  }

  void SetTextEmphasisPosition(TextEmphasisPosition v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_position_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_position_ = static_cast<unsigned>(v);
  }

  inline void ResetTextEmphasisPosition() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_position_ = static_cast<unsigned>(TextEmphasisPosition::kOverRight);
  }


  // -webkit-text-fill-color
  

  inline void ResetTextFillColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_ = Color();
  }



  // TextFillColorIsCurrentColor
  

  inline void ResetTextFillColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // text-indent
  const Length& TextIndent() const {
    return rare_inherited_usage_less_than_40_percent_data_->text_indent_;
  }

  void SetTextIndent(const Length& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->text_indent_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->text_indent_ = v;
  }

  void SetTextIndent(Length&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->text_indent_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->text_indent_ = std::move(v);
  }
  inline void ResetTextIndent() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->text_indent_ = Length::Fixed();
  }



  // TextIndentLine
  TextIndentLine GetTextIndentLine() const {
    return static_cast<TextIndentLine>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_indent_line_);
  }

  void SetTextIndentLine(TextIndentLine v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_indent_line_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_indent_line_ = static_cast<unsigned>(v);
  }

  inline void ResetTextIndentLine() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_indent_line_ = static_cast<unsigned>(TextIndentLine::kFirstLine);
  }


  // TextIndentType
  TextIndentType GetTextIndentType() const {
    return static_cast<TextIndentType>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_indent_type_);
  }

  void SetTextIndentType(TextIndentType v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_indent_type_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_indent_type_ = static_cast<unsigned>(v);
  }

  inline void ResetTextIndentType() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_indent_type_ = static_cast<unsigned>(TextIndentType::kNormal);
  }


  // text-justify
  TextJustify GetTextJustify() const {
    return static_cast<TextJustify>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_justify_);
  }

  void SetTextJustify(TextJustify v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_justify_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_justify_ = static_cast<unsigned>(v);
  }

  inline void ResetTextJustify() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_justify_ = static_cast<unsigned>(TextJustify::kAuto);
  }


  // text-orientation
  ETextOrientation GetTextOrientation() const {
    return static_cast<ETextOrientation>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_orientation_);
  }

  void SetTextOrientation(ETextOrientation v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_orientation_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_orientation_ = static_cast<unsigned>(v);
  }

  inline void ResetTextOrientation() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_orientation_ = static_cast<unsigned>(ETextOrientation::kMixed);
  }


  // text-overflow
  ETextOverflow TextOverflow() const {
    return static_cast<ETextOverflow>(rare_non_inherited_usage_less_than_13_percent_data_->text_overflow_);
  }

  void SetTextOverflow(ETextOverflow v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->text_overflow_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->text_overflow_ = static_cast<unsigned>(v);
  }

  inline void ResetTextOverflow() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->text_overflow_ = static_cast<unsigned>(ETextOverflow::kClip);
  }


  // -webkit-text-security
  ETextSecurity TextSecurity() const {
    return static_cast<ETextSecurity>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_security_);
  }

  void SetTextSecurity(ETextSecurity v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_security_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_security_ = static_cast<unsigned>(v);
  }

  inline void ResetTextSecurity() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_security_ = static_cast<unsigned>(ETextSecurity::kNone);
  }


  // text-shadow
  ShadowList* TextShadow() const {
    return rare_inherited_usage_less_than_40_percent_data_->text_shadow_.get();
  }

  void SetTextShadow(scoped_refptr<ShadowList> v) {
    rare_inherited_usage_less_than_40_percent_data_.Access()->text_shadow_ = std::move(v);
  }

  // text-size-adjust
  const TextSizeAdjust& GetTextSizeAdjust() const {
    return rare_inherited_usage_less_than_40_percent_data_->text_size_adjust_;
  }

  void SetTextSizeAdjust(const TextSizeAdjust& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->text_size_adjust_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->text_size_adjust_ = v;
  }

  void SetTextSizeAdjust(TextSizeAdjust&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->text_size_adjust_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->text_size_adjust_ = std::move(v);
  }
  inline void ResetTextSizeAdjust() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->text_size_adjust_ = TextSizeAdjust::AdjustAuto();
  }



  // -webkit-text-stroke-color
  

  inline void ResetTextStrokeColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_ = Color();
  }



  // TextStrokeColorIsCurrentColor
  

  inline void ResetTextStrokeColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // -webkit-text-stroke-width
  float TextStrokeWidth() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_width_;
  }

  void SetTextStrokeWidth(float v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_width_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_width_ = v;
  }

  inline void ResetTextStrokeWidth() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_width_ = 0;
  }


  // text-transform
  ETextTransform TextTransform() const {
    return static_cast<ETextTransform>(text_transform_);
  }

  void SetTextTransform(ETextTransform v) {
    text_transform_ = static_cast<unsigned>(v);
  }

  inline void ResetTextTransform() {
    text_transform_ = static_cast<unsigned>(ETextTransform::kNone);
  }


  // text-transform
  bool TextTransformIsInherited() const {
    return static_cast<bool>(text_transform_is_inherited_);
  }

  void SetTextTransformIsInherited(bool v) {
    text_transform_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetTextTransformIsInherited() {
    text_transform_is_inherited_ = static_cast<unsigned>(true);
  }


  // text-underline-position
  unsigned TextUnderlinePosition() const {
    return static_cast<unsigned>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_underline_position_);
  }

  void SetTextUnderlinePosition(unsigned v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_underline_position_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_underline_position_ = static_cast<unsigned>(v);
  }

  inline void ResetTextUnderlinePosition() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_underline_position_ = static_cast<unsigned>(kTextUnderlinePositionAuto);
  }


  // top
  const Length& Top() const {
    return surround_data_->top_;
  }

  void SetTop(const Length& v) {
    if (!(surround_data_->top_ == v))
      surround_data_.Access()->top_ = v;
  }

  void SetTop(Length&& v) {
    if (!(surround_data_->top_ == v))
      surround_data_.Access()->top_ = std::move(v);
  }
  inline void ResetTop() {
    surround_data_.Access()->top_ = Length();
  }



  // touch-action
  TouchAction GetTouchAction() const {
    return static_cast<TouchAction>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->touch_action_);
  }

  void SetTouchAction(TouchAction v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->touch_action_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->touch_action_ = static_cast<unsigned>(v);
  }

  inline void ResetTouchAction() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->touch_action_ = static_cast<unsigned>(TouchAction::kTouchActionAuto);
  }


  // transform
  const TransformOperations& Transform() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->transform_;
  }

  void SetTransform(const TransformOperations& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->transform_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->transform_ = v;
  }

  void SetTransform(TransformOperations&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->transform_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->transform_ = std::move(v);
  }
  inline void ResetTransform() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->transform_ = EmptyTransformOperations();
  }



  // transform-box
  ETransformBox TransformBox() const {
    return static_cast<ETransformBox>(transform_box_);
  }

  void SetTransformBox(ETransformBox v) {
    transform_box_ = static_cast<unsigned>(v);
  }

  inline void ResetTransformBox() {
    transform_box_ = static_cast<unsigned>(ETransformBox::kViewBox);
  }


  // transform-origin
  const TransformOrigin& GetTransformOrigin() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_;
  }

  void SetTransformOrigin(const TransformOrigin& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->transform_origin_ = v;
  }

  void SetTransformOrigin(TransformOrigin&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->transform_origin_ = std::move(v);
  }
  inline void ResetTransformOrigin() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->transform_origin_ = TransformOrigin(Length::Percent(50.0), Length::Percent(50.0), 0);
  }



  // transform-style
  ETransformStyle3D TransformStyle3D() const {
    return static_cast<ETransformStyle3D>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->transform_style_3d_);
  }

  void SetTransformStyle3D(ETransformStyle3D v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->transform_style_3d_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->transform_style_3d_ = static_cast<unsigned>(v);
  }

  inline void ResetTransformStyle3D() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->transform_style_3d_ = static_cast<unsigned>(ETransformStyle3D::kFlat);
  }


  // Transitions
  

  inline void ResetTransitions() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->transitions_ = nullptr;
  }



  // translate
  TranslateTransformOperation* Translate() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->translate_.get();
  }

  void SetTranslate(scoped_refptr<TranslateTransformOperation> v) {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->translate_ = std::move(v);
  }

  // unicode-bidi
  UnicodeBidi GetUnicodeBidi() const {
    return static_cast<UnicodeBidi>(unicode_bidi_);
  }

  void SetUnicodeBidi(UnicodeBidi v) {
    unicode_bidi_ = static_cast<unsigned>(v);
  }

  inline void ResetUnicodeBidi() {
    unicode_bidi_ = static_cast<unsigned>(UnicodeBidi::kNormal);
  }


  // -webkit-user-drag
  EUserDrag UserDrag() const {
    return static_cast<EUserDrag>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->user_drag_);
  }

  void SetUserDrag(EUserDrag v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->user_drag_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->user_drag_ = static_cast<unsigned>(v);
  }

  inline void ResetUserDrag() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->user_drag_ = static_cast<unsigned>(EUserDrag::kAuto);
  }


  // -webkit-user-modify
  EUserModify UserModify() const {
    return static_cast<EUserModify>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->user_modify_);
  }

  void SetUserModify(EUserModify v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->user_modify_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->user_modify_ = static_cast<unsigned>(v);
  }

  inline void ResetUserModify() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->user_modify_ = static_cast<unsigned>(EUserModify::kReadOnly);
  }


  // user-select
  EUserSelect UserSelect() const {
    return static_cast<EUserSelect>(rare_inherited_usage_less_than_40_percent_data_->user_select_);
  }

  void SetUserSelect(EUserSelect v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->user_select_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->user_select_ = static_cast<unsigned>(v);
  }

  inline void ResetUserSelect() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->user_select_ = static_cast<unsigned>(EUserSelect::kAuto);
  }


  // VerticalAlign
  

  inline void ResetVerticalAlign() {
    vertical_align_ = static_cast<unsigned>(static_cast<unsigned>(EVerticalAlign::kBaseline));
  }


  // VerticalAlignLength
  const Length& GetVerticalAlignLength() const {
    return box_data_->vertical_align_length_;
  }


  inline void ResetVerticalAlignLength() {
    box_data_.Access()->vertical_align_length_ = Length();
  }



  // -webkit-border-vertical-spacing
  short VerticalBorderSpacing() const {
    return inherited_data_->vertical_border_spacing_;
  }

  void SetVerticalBorderSpacing(short v) {
    if (!(inherited_data_->vertical_border_spacing_ == v))
      inherited_data_.Access()->vertical_border_spacing_ = v;
  }

  inline void ResetVerticalBorderSpacing() {
    inherited_data_.Access()->vertical_border_spacing_ = 0;
  }


  // visibility
  EVisibility Visibility() const {
    return static_cast<EVisibility>(visibility_);
  }

  void SetVisibility(EVisibility v) {
    visibility_ = static_cast<unsigned>(v);
  }

  inline void ResetVisibility() {
    visibility_ = static_cast<unsigned>(EVisibility::kVisible);
  }


  // visibility
  bool VisibilityIsInherited() const {
    return static_cast<bool>(visibility_is_inherited_);
  }

  void SetVisibilityIsInherited(bool v) {
    visibility_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetVisibilityIsInherited() {
    visibility_is_inherited_ = static_cast<unsigned>(true);
  }


  // VisitedLinkBackgroundColor
  

  inline void ResetVisitedLinkBackgroundColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_background_color_ = StyleColor(Color::kTransparent);
  }



  // VisitedLinkBorderBottomColor
  

  inline void ResetVisitedLinkBorderBottomColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_bottom_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkBorderLeftColor
  

  inline void ResetVisitedLinkBorderLeftColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_left_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkBorderRightColor
  

  inline void ResetVisitedLinkBorderRightColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_right_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkBorderTopColor
  

  inline void ResetVisitedLinkBorderTopColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_top_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkCaretColor
  

  inline void ResetVisitedLinkCaretColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_ = Color();
  }



  // VisitedLinkCaretColorIsAuto
  

  inline void ResetVisitedLinkCaretColorIsAuto() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_is_auto_ = static_cast<unsigned>(true);
  }


  // VisitedLinkCaretColorIsCurrentColor
  

  inline void ResetVisitedLinkCaretColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_is_current_color_ = static_cast<unsigned>(false);
  }


  // VisitedLinkColor
  const Color& VisitedLinkColor() const {
    return inherited_data_->visited_link_color_;
  }

  void SetVisitedLinkColor(const Color& v) {
    if (!(inherited_data_->visited_link_color_ == v))
      inherited_data_.Access()->visited_link_color_ = v;
  }

  void SetVisitedLinkColor(Color&& v) {
    if (!(inherited_data_->visited_link_color_ == v))
      inherited_data_.Access()->visited_link_color_ = std::move(v);
  }
  inline void ResetVisitedLinkColor() {
    inherited_data_.Access()->visited_link_color_ = Color::kBlack;
  }



  // VisitedLinkColumnRuleColor
  

  inline void ResetVisitedLinkColumnRuleColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->visited_link_column_rule_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkOutlineColor
  

  inline void ResetVisitedLinkOutlineColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_outline_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkTextDecorationColor
  

  inline void ResetVisitedLinkTextDecorationColor() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_text_decoration_color_ = StyleColor::CurrentColor();
  }



  // VisitedLinkTextEmphasisColor
  

  inline void ResetVisitedLinkTextEmphasisColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_ = Color();
  }



  // VisitedLinkTextEmphasisColorIsCurrentColor
  

  inline void ResetVisitedLinkTextEmphasisColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // VisitedLinkTextFillColor
  

  inline void ResetVisitedLinkTextFillColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_ = Color();
  }



  // VisitedLinkTextFillColorIsCurrentColor
  

  inline void ResetVisitedLinkTextFillColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // VisitedLinkTextStrokeColor
  

  inline void ResetVisitedLinkTextStrokeColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_ = Color();
  }



  // VisitedLinkTextStrokeColorIsCurrentColor
  

  inline void ResetVisitedLinkTextStrokeColorIsCurrentColor() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_is_current_color_ = static_cast<unsigned>(true);
  }


  // white-space
  EWhiteSpace WhiteSpace() const {
    return static_cast<EWhiteSpace>(white_space_);
  }

  void SetWhiteSpace(EWhiteSpace v) {
    white_space_ = static_cast<unsigned>(v);
  }

  inline void ResetWhiteSpace() {
    white_space_ = static_cast<unsigned>(EWhiteSpace::kNormal);
  }


  // white-space
  bool WhiteSpaceIsInherited() const {
    return static_cast<bool>(white_space_is_inherited_);
  }

  void SetWhiteSpaceIsInherited(bool v) {
    white_space_is_inherited_ = static_cast<unsigned>(v);
  }

  inline void ResetWhiteSpaceIsInherited() {
    white_space_is_inherited_ = static_cast<unsigned>(true);
  }


  // widows
  short Widows() const {
    return rare_inherited_usage_less_than_40_percent_data_->widows_;
  }


  inline void ResetWidows() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->widows_ = 2;
  }


  // width
  const Length& Width() const {
    return box_data_->width_;
  }

  void SetWidth(const Length& v) {
    if (!(box_data_->width_ == v))
      box_data_.Access()->width_ = v;
  }

  void SetWidth(Length&& v) {
    if (!(box_data_->width_ == v))
      box_data_.Access()->width_ = std::move(v);
  }
  inline void ResetWidth() {
    box_data_.Access()->width_ = Length();
  }



  // WillChangeContents
  bool WillChangeContents() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_contents_);
  }

  void SetWillChangeContents(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_contents_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_contents_ = static_cast<unsigned>(v);
  }

  inline void ResetWillChangeContents() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_contents_ = static_cast<unsigned>(false);
  }


  // WillChangeProperties
  const Vector<CSSPropertyID>& WillChangeProperties() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_properties_;
  }

  void SetWillChangeProperties(const Vector<CSSPropertyID>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_properties_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_properties_ = v;
  }

  void SetWillChangeProperties(Vector<CSSPropertyID>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_properties_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_properties_ = std::move(v);
  }
  inline void ResetWillChangeProperties() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_properties_ = Vector<CSSPropertyID>();
  }



  // WillChangeScrollPosition
  bool WillChangeScrollPosition() const {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_scroll_position_);
  }

  void SetWillChangeScrollPosition(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_scroll_position_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_scroll_position_ = static_cast<unsigned>(v);
  }

  inline void ResetWillChangeScrollPosition() {
    rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_scroll_position_ = static_cast<unsigned>(false);
  }


  // word-break
  EWordBreak WordBreak() const {
    return static_cast<EWordBreak>(rare_inherited_usage_less_than_40_percent_data_->word_break_);
  }

  void SetWordBreak(EWordBreak v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->word_break_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->word_break_ = static_cast<unsigned>(v);
  }

  inline void ResetWordBreak() {
    rare_inherited_usage_less_than_40_percent_data_.Access()->word_break_ = static_cast<unsigned>(EWordBreak::kNormal);
  }


  // writing-mode
  WritingMode GetWritingMode() const {
    return static_cast<WritingMode>(writing_mode_);
  }

  void SetWritingMode(WritingMode v) {
    writing_mode_ = static_cast<unsigned>(v);
  }

  inline void ResetWritingMode() {
    writing_mode_ = static_cast<unsigned>(WritingMode::kHorizontalTb);
  }


  // z-index
  int ZIndex() const {
    return box_data_->z_index_;
  }


  inline void ResetZIndex() {
    box_data_.Access()->z_index_ = 0;
  }


  // zoom
  float Zoom() const {
    return visual_data_->zoom_;
  }

  void SetZoom(float v) {
    if (!(visual_data_->zoom_ == v))
      visual_data_.Access()->zoom_ = v;
  }

  inline void ResetZoom() {
    visual_data_.Access()->zoom_ = 1.0;
  }


 private:
  class StyleGridData : public RefCounted<StyleGridData> {
   public:
    static scoped_refptr<StyleGridData> Create() {
      return base::AdoptRef(new StyleGridData);
    }
    scoped_refptr<StyleGridData> Copy() const {
      return base::AdoptRef(new StyleGridData(*this));
    }

    bool operator==(const StyleGridData& other) const {
      return (
        named_grid_column_lines_ == other.named_grid_column_lines_
        && named_grid_row_lines_ == other.named_grid_row_lines_
        && auto_repeat_named_grid_column_lines_ == other.auto_repeat_named_grid_column_lines_
        && auto_repeat_named_grid_row_lines_ == other.auto_repeat_named_grid_row_lines_
        && ordered_named_grid_column_lines_ == other.ordered_named_grid_column_lines_
        && ordered_named_grid_row_lines_ == other.ordered_named_grid_row_lines_
        && auto_repeat_ordered_named_grid_column_lines_ == other.auto_repeat_ordered_named_grid_column_lines_
        && auto_repeat_ordered_named_grid_row_lines_ == other.auto_repeat_ordered_named_grid_row_lines_
        && named_grid_area_ == other.named_grid_area_
        && grid_auto_repeat_columns_ == other.grid_auto_repeat_columns_
        && grid_auto_repeat_rows_ == other.grid_auto_repeat_rows_
        && named_grid_area_row_count_ == other.named_grid_area_row_count_
        && named_grid_area_column_count_ == other.named_grid_area_column_count_
        && grid_auto_repeat_columns_insertion_point_ == other.grid_auto_repeat_columns_insertion_point_
        && grid_auto_repeat_rows_insertion_point_ == other.grid_auto_repeat_rows_insertion_point_
        && grid_auto_repeat_columns_type_ == other.grid_auto_repeat_columns_type_
        && grid_auto_repeat_rows_type_ == other.grid_auto_repeat_rows_type_
      );
    }
    bool operator!=(const StyleGridData& other) const { return !(*this == other); }

    NamedGridLinesMap named_grid_column_lines_;
    NamedGridLinesMap named_grid_row_lines_;
    NamedGridLinesMap auto_repeat_named_grid_column_lines_;
    NamedGridLinesMap auto_repeat_named_grid_row_lines_;
    OrderedNamedGridLines ordered_named_grid_column_lines_;
    OrderedNamedGridLines ordered_named_grid_row_lines_;
    OrderedNamedGridLines auto_repeat_ordered_named_grid_column_lines_;
    OrderedNamedGridLines auto_repeat_ordered_named_grid_row_lines_;
    NamedGridAreaMap named_grid_area_;
    Vector<GridTrackSize> grid_auto_repeat_columns_;
    Vector<GridTrackSize> grid_auto_repeat_rows_;
    size_t named_grid_area_row_count_;
    size_t named_grid_area_column_count_;
    size_t grid_auto_repeat_columns_insertion_point_;
    size_t grid_auto_repeat_rows_insertion_point_;
    unsigned grid_auto_repeat_columns_type_ : 2; // AutoRepeatType
    unsigned grid_auto_repeat_rows_type_ : 2; // AutoRepeatType

   private:
    StyleGridData();
    CORE_EXPORT StyleGridData(const StyleGridData&);
  };

  class StyleWillChangeData : public RefCounted<StyleWillChangeData> {
   public:
    static scoped_refptr<StyleWillChangeData> Create() {
      return base::AdoptRef(new StyleWillChangeData);
    }
    scoped_refptr<StyleWillChangeData> Copy() const {
      return base::AdoptRef(new StyleWillChangeData(*this));
    }

    bool operator==(const StyleWillChangeData& other) const {
      return (
        will_change_properties_ == other.will_change_properties_
        && will_change_contents_ == other.will_change_contents_
        && will_change_scroll_position_ == other.will_change_scroll_position_
      );
    }
    bool operator!=(const StyleWillChangeData& other) const { return !(*this == other); }

    Vector<CSSPropertyID> will_change_properties_;
    unsigned will_change_contents_ : 1; // bool
    unsigned will_change_scroll_position_ : 1; // bool

   private:
    StyleWillChangeData();
    CORE_EXPORT StyleWillChangeData(const StyleWillChangeData&);
  };

  class StyleMultiColData : public RefCounted<StyleMultiColData> {
   public:
    static scoped_refptr<StyleMultiColData> Create() {
      return base::AdoptRef(new StyleMultiColData);
    }
    scoped_refptr<StyleMultiColData> Copy() const {
      return base::AdoptRef(new StyleMultiColData(*this));
    }

    bool operator==(const StyleMultiColData& other) const {
      return (
        visited_link_column_rule_color_ == other.visited_link_column_rule_color_
        && column_rule_color_is_current_color_ == other.column_rule_color_is_current_color_
        && has_auto_column_count_ == other.has_auto_column_count_
        && has_auto_column_width_ == other.has_auto_column_width_
      );
    }
    bool operator!=(const StyleMultiColData& other) const { return !(*this == other); }

    StyleColor visited_link_column_rule_color_;
    unsigned column_rule_color_is_current_color_ : 1; // bool
    unsigned has_auto_column_count_ : 1; // bool
    unsigned has_auto_column_width_ : 1; // bool

   private:
    StyleMultiColData();
    CORE_EXPORT StyleMultiColData(const StyleMultiColData&);
  };

  class StyleRareNonInheritedUsageLessThan13PercentSubData : public RefCounted<StyleRareNonInheritedUsageLessThan13PercentSubData> {
   public:
    static scoped_refptr<StyleRareNonInheritedUsageLessThan13PercentSubData> Create() {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan13PercentSubData);
    }
    scoped_refptr<StyleRareNonInheritedUsageLessThan13PercentSubData> Copy() const {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan13PercentSubData(*this));
    }

    bool operator==(const StyleRareNonInheritedUsageLessThan13PercentSubData& other) const {
      return (
        grid_data_ == other.grid_data_
        && will_change_data_ == other.will_change_data_
        && multi_col_data_ == other.multi_col_data_
        && display_layout_custom_name_ == other.display_layout_custom_name_
        && display_layout_custom_parent_name_ == other.display_layout_custom_parent_name_
        && DataEquivalent(box_reflect_, other.box_reflect_)
        && DataEquivalent(counter_directives_, other.counter_directives_)
        && DataEquivalent(animations_, other.animations_)
        && DataEquivalent(transitions_, other.transitions_)
        && DataEquivalent(non_inherited_variables_, other.non_inherited_variables_)
        && callback_selectors_ == other.callback_selectors_
        && mask_ == other.mask_
        && mask_box_image_ == other.mask_box_image_
        && page_size_ == other.page_size_
        && scroll_padding_bottom_ == other.scroll_padding_bottom_
        && scroll_padding_left_ == other.scroll_padding_left_
        && scroll_padding_right_ == other.scroll_padding_right_
        && scroll_padding_top_ == other.scroll_padding_top_
        && scroll_margin_bottom_ == other.scroll_margin_bottom_
        && scroll_margin_left_ == other.scroll_margin_left_
        && scroll_margin_right_ == other.scroll_margin_right_
        && scroll_margin_top_ == other.scroll_margin_top_
        && box_flex_ == other.box_flex_
        && scroll_snap_align_ == other.scroll_snap_align_
        && visited_link_text_decoration_color_ == other.visited_link_text_decoration_color_
        && visited_link_background_color_ == other.visited_link_background_color_
        && visited_link_outline_color_ == other.visited_link_outline_color_
        && visited_link_border_left_color_ == other.visited_link_border_left_color_
        && visited_link_border_right_color_ == other.visited_link_border_right_color_
        && visited_link_border_top_color_ == other.visited_link_border_top_color_
        && visited_link_border_bottom_color_ == other.visited_link_border_bottom_color_
        && box_ordinal_group_ == other.box_ordinal_group_
        && line_clamp_ == other.line_clamp_
        && appearance_ == other.appearance_
        && scroll_customization_ == other.scroll_customization_
        && box_align_ == other.box_align_
        && box_pack_ == other.box_pack_
        && draggable_region_mode_ == other.draggable_region_mode_
        && margin_after_collapse_ == other.margin_after_collapse_
        && margin_before_collapse_ == other.margin_before_collapse_
        && page_size_type_ == other.page_size_type_
        && user_drag_ == other.user_drag_
        && box_orient_ == other.box_orient_
        && has_author_background_ == other.has_author_background_
        && has_author_border_ == other.has_author_border_
        && has_current_backdrop_filter_animation_ == other.has_current_backdrop_filter_animation_
        && has_current_filter_animation_ == other.has_current_filter_animation_
        && has_current_opacity_animation_ == other.has_current_opacity_animation_
        && has_current_transform_animation_ == other.has_current_transform_animation_
        && is_stacking_context_ == other.is_stacking_context_
        && outline_color_is_current_color_ == other.outline_color_is_current_color_
        && outline_style_is_auto_ == other.outline_style_is_auto_
        && requires_accelerated_compositing_for_external_reasons_ == other.requires_accelerated_compositing_for_external_reasons_
      );
    }
    bool operator!=(const StyleRareNonInheritedUsageLessThan13PercentSubData& other) const { return !(*this == other); }

    DataRef<StyleGridData> grid_data_;
    DataRef<StyleWillChangeData> will_change_data_;
    DataRef<StyleMultiColData> multi_col_data_;
    AtomicString display_layout_custom_name_;
    AtomicString display_layout_custom_parent_name_;
    scoped_refptr<StyleReflection> box_reflect_;
    std::unique_ptr<CounterDirectiveMap> counter_directives_;
    std::unique_ptr<CSSAnimationData> animations_;
    std::unique_ptr<CSSTransitionData> transitions_;
    std::unique_ptr<PaintImages> paint_images_;
    std::unique_ptr<StyleNonInheritedVariables> non_inherited_variables_;
    Vector<String> callback_selectors_;
    FillLayer mask_;
    NinePieceImage mask_box_image_;
    FloatSize page_size_;
    Length scroll_padding_bottom_;
    Length scroll_padding_left_;
    Length scroll_padding_right_;
    Length scroll_padding_top_;
    float scroll_margin_bottom_;
    float scroll_margin_left_;
    float scroll_margin_right_;
    float scroll_margin_top_;
    float box_flex_;
    cc::ScrollSnapAlign scroll_snap_align_;
    StyleColor visited_link_text_decoration_color_;
    StyleColor visited_link_background_color_;
    StyleColor visited_link_outline_color_;
    StyleColor visited_link_border_left_color_;
    StyleColor visited_link_border_right_color_;
    StyleColor visited_link_border_top_color_;
    StyleColor visited_link_border_bottom_color_;
    unsigned box_ordinal_group_;
    int line_clamp_;
    unsigned appearance_ : 6; // ControlPart
    unsigned scroll_customization_ : 4; // scroll_customization::ScrollDirection
    unsigned box_align_ : 3; // EBoxAlignment
    unsigned box_pack_ : 2; // EBoxPack
    unsigned draggable_region_mode_ : 2; // EDraggableRegionMode
    unsigned margin_after_collapse_ : 2; // EMarginCollapse
    unsigned margin_before_collapse_ : 2; // EMarginCollapse
    unsigned page_size_type_ : 2; // EPageSizeType
    unsigned user_drag_ : 2; // EUserDrag
    unsigned box_orient_ : 1; // EBoxOrient
    unsigned has_author_background_ : 1; // bool
    unsigned has_author_border_ : 1; // bool
    unsigned has_current_backdrop_filter_animation_ : 1; // bool
    unsigned has_current_filter_animation_ : 1; // bool
    unsigned has_current_opacity_animation_ : 1; // bool
    unsigned has_current_transform_animation_ : 1; // bool
    unsigned is_running_backdrop_filter_animation_on_compositor_ : 1; // bool
    unsigned is_running_filter_animation_on_compositor_ : 1; // bool
    unsigned is_running_opacity_animation_on_compositor_ : 1; // bool
    unsigned is_running_transform_animation_on_compositor_ : 1; // bool
    unsigned is_stacking_context_ : 1; // bool
    unsigned outline_color_is_current_color_ : 1; // bool
    unsigned outline_style_is_auto_ : 1; // bool
    unsigned requires_accelerated_compositing_for_external_reasons_ : 1; // bool

   private:
    StyleRareNonInheritedUsageLessThan13PercentSubData();
    CORE_EXPORT StyleRareNonInheritedUsageLessThan13PercentSubData(const StyleRareNonInheritedUsageLessThan13PercentSubData&);
  };

  class StyleRareNonInheritedUsageLessThan100PercentData : public RefCounted<StyleRareNonInheritedUsageLessThan100PercentData> {
   public:
    static scoped_refptr<StyleRareNonInheritedUsageLessThan100PercentData> Create() {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan100PercentData);
    }
    scoped_refptr<StyleRareNonInheritedUsageLessThan100PercentData> Copy() const {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan100PercentData(*this));
    }

    bool operator==(const StyleRareNonInheritedUsageLessThan100PercentData& other) const {
      return (
        grid_auto_columns_ == other.grid_auto_columns_
        && grid_auto_rows_ == other.grid_auto_rows_
        && grid_template_columns_ == other.grid_template_columns_
        && grid_template_rows_ == other.grid_template_rows_
        && grid_column_end_ == other.grid_column_end_
        && grid_column_start_ == other.grid_column_start_
        && grid_row_end_ == other.grid_row_end_
        && grid_row_start_ == other.grid_row_start_
        && column_gap_ == other.column_gap_
        && row_gap_ == other.row_gap_
        && DataEquivalent(clip_path_, other.clip_path_)
        && DataEquivalent(offset_path_, other.offset_path_)
        && DataEquivalent(rotate_, other.rotate_)
        && DataEquivalent(scale_, other.scale_)
        && DataEquivalent(translate_, other.translate_)
        && DataEquivalent(backdrop_filter_, other.backdrop_filter_)
        && DataEquivalent(shape_outside_, other.shape_outside_)
        && offset_rotate_ == other.offset_rotate_
        && object_position_ == other.object_position_
        && offset_anchor_ == other.offset_anchor_
        && offset_position_ == other.offset_position_
        && perspective_origin_ == other.perspective_origin_
        && flex_basis_ == other.flex_basis_
        && offset_distance_ == other.offset_distance_
        && shape_margin_ == other.shape_margin_
        && column_width_ == other.column_width_
        && shape_image_threshold_ == other.shape_image_threshold_
        && scroll_snap_type_ == other.scroll_snap_type_
        && text_decoration_color_ == other.text_decoration_color_
        && column_rule_color_ == other.column_rule_color_
        && outline_color_ == other.outline_color_
        && column_rule_width_ == other.column_rule_width_
        && column_count_ == other.column_count_
        && justify_items_ == other.justify_items_
        && justify_self_ == other.justify_self_
        && align_content_ == other.align_content_
        && blend_mode_ == other.blend_mode_
        && column_rule_style_ == other.column_rule_style_
        && contain_ == other.contain_
        && grid_auto_flow_ == other.grid_auto_flow_
        && object_fit_ == other.object_fit_
        && text_decoration_style_ == other.text_decoration_style_
        && scroll_behavior_ == other.scroll_behavior_
        && column_fill_ == other.column_fill_
        && column_span_ == other.column_span_
        && isolation_ == other.isolation_
        && transform_style_3d_ == other.transform_style_3d_
      );
    }
    bool operator!=(const StyleRareNonInheritedUsageLessThan100PercentData& other) const { return !(*this == other); }

    Vector<GridTrackSize> grid_auto_columns_;
    Vector<GridTrackSize> grid_auto_rows_;
    Vector<GridTrackSize> grid_template_columns_;
    Vector<GridTrackSize> grid_template_rows_;
    GridPosition grid_column_end_;
    GridPosition grid_column_start_;
    GridPosition grid_row_end_;
    GridPosition grid_row_start_;
    GapLength column_gap_;
    GapLength row_gap_;
    scoped_refptr<ClipPathOperation> clip_path_;
    scoped_refptr<BasicShape> offset_path_;
    scoped_refptr<RotateTransformOperation> rotate_;
    scoped_refptr<ScaleTransformOperation> scale_;
    scoped_refptr<TranslateTransformOperation> translate_;
    Persistent<StyleFilterData> backdrop_filter_;
    Persistent<ShapeValue> shape_outside_;
    StyleOffsetRotation offset_rotate_;
    LengthPoint object_position_;
    LengthPoint offset_anchor_;
    LengthPoint offset_position_;
    LengthPoint perspective_origin_;
    Length flex_basis_;
    Length offset_distance_;
    Length shape_margin_;
    float column_width_;
    float shape_image_threshold_;
    cc::ScrollSnapType scroll_snap_type_;
    StyleColor text_decoration_color_;
    Color column_rule_color_;
    Color outline_color_;
    LayoutUnit column_rule_width_;
    unsigned short column_count_;
    StyleSelfAlignmentData justify_items_;
    StyleSelfAlignmentData justify_self_;
    StyleContentAlignmentData align_content_;
    unsigned blend_mode_ : 4; // BlendMode
    unsigned column_rule_style_ : 4; // EBorderStyle
    unsigned contain_ : 4; // unsigned
    unsigned grid_auto_flow_ : 4; // GridAutoFlow
    unsigned object_fit_ : 3; // EObjectFit
    unsigned text_decoration_style_ : 3; // ETextDecorationStyle
    unsigned scroll_behavior_ : 2; // ScrollBehavior
    unsigned column_fill_ : 1; // EColumnFill
    unsigned column_span_ : 1; // EColumnSpan
    unsigned isolation_ : 1; // EIsolation
    unsigned transform_style_3d_ : 1; // ETransformStyle3D

   private:
    StyleRareNonInheritedUsageLessThan100PercentData();
    CORE_EXPORT StyleRareNonInheritedUsageLessThan100PercentData(const StyleRareNonInheritedUsageLessThan100PercentData&);
  };

  class StyleRareNonInheritedUsageLessThan33PercentData : public RefCounted<StyleRareNonInheritedUsageLessThan33PercentData> {
   public:
    static scoped_refptr<StyleRareNonInheritedUsageLessThan33PercentData> Create() {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan33PercentData);
    }
    scoped_refptr<StyleRareNonInheritedUsageLessThan33PercentData> Copy() const {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan33PercentData(*this));
    }

    bool operator==(const StyleRareNonInheritedUsageLessThan33PercentData& other) const {
      return (
        rare_non_inherited_usage_less_than_100_percent_data_ == other.rare_non_inherited_usage_less_than_100_percent_data_
        && DataEquivalent(filter_, other.filter_)
        && transform_origin_ == other.transform_origin_
        && flex_grow_ == other.flex_grow_
        && flex_shrink_ == other.flex_shrink_
        && perspective_ == other.perspective_
        && outline_width_ == other.outline_width_
        && order_ == other.order_
        && outline_offset_ == other.outline_offset_
        && align_self_ == other.align_self_
        && touch_action_ == other.touch_action_
        && outline_style_ == other.outline_style_
        && resize_ == other.resize_
        && flex_wrap_ == other.flex_wrap_
        && backface_visibility_ == other.backface_visibility_
      );
    }
    bool operator!=(const StyleRareNonInheritedUsageLessThan33PercentData& other) const { return !(*this == other); }

    DataRef<StyleRareNonInheritedUsageLessThan100PercentData> rare_non_inherited_usage_less_than_100_percent_data_;
    Persistent<StyleFilterData> filter_;
    TransformOrigin transform_origin_;
    float flex_grow_;
    float flex_shrink_;
    float perspective_;
    LayoutUnit outline_width_;
    int order_;
    int outline_offset_;
    StyleSelfAlignmentData align_self_;
    unsigned touch_action_ : 6; // TouchAction
    unsigned outline_style_ : 4; // EBorderStyle
    unsigned resize_ : 3; // EResize
    unsigned flex_wrap_ : 2; // EFlexWrap
    unsigned backface_visibility_ : 1; // EBackfaceVisibility

   private:
    StyleRareNonInheritedUsageLessThan33PercentData();
    CORE_EXPORT StyleRareNonInheritedUsageLessThan33PercentData(const StyleRareNonInheritedUsageLessThan33PercentData&);
  };

  class StyleRareNonInheritedUsageLessThan13PercentData : public RefCounted<StyleRareNonInheritedUsageLessThan13PercentData> {
   public:
    static scoped_refptr<StyleRareNonInheritedUsageLessThan13PercentData> Create() {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan13PercentData);
    }
    scoped_refptr<StyleRareNonInheritedUsageLessThan13PercentData> Copy() const {
      return base::AdoptRef(new StyleRareNonInheritedUsageLessThan13PercentData(*this));
    }

    bool operator==(const StyleRareNonInheritedUsageLessThan13PercentData& other) const {
      return (
        rare_non_inherited_usage_less_than_13_percent_sub_data_ == other.rare_non_inherited_usage_less_than_13_percent_sub_data_
        && rare_non_inherited_usage_less_than_33_percent_data_ == other.rare_non_inherited_usage_less_than_33_percent_data_
        && transform_ == other.transform_
        && DataEquivalent(box_shadow_, other.box_shadow_)
        && DataEquivalent(content_, other.content_)
        && opacity_ == other.opacity_
        && align_items_ == other.align_items_
        && justify_content_ == other.justify_content_
        && flex_direction_ == other.flex_direction_
        && text_overflow_ == other.text_overflow_
      );
    }
    bool operator!=(const StyleRareNonInheritedUsageLessThan13PercentData& other) const { return !(*this == other); }

    DataRef<StyleRareNonInheritedUsageLessThan13PercentSubData> rare_non_inherited_usage_less_than_13_percent_sub_data_;
    DataRef<StyleRareNonInheritedUsageLessThan33PercentData> rare_non_inherited_usage_less_than_33_percent_data_;
    TransformOperations transform_;
    scoped_refptr<ShadowList> box_shadow_;
    Persistent<ContentData> content_;
    float opacity_;
    StyleSelfAlignmentData align_items_;
    StyleContentAlignmentData justify_content_;
    unsigned flex_direction_ : 2; // EFlexDirection
    unsigned text_overflow_ : 1; // ETextOverflow

   private:
    StyleRareNonInheritedUsageLessThan13PercentData();
    CORE_EXPORT StyleRareNonInheritedUsageLessThan13PercentData(const StyleRareNonInheritedUsageLessThan13PercentData&);
  };

  class StyleBoxData : public RefCounted<StyleBoxData> {
   public:
    static scoped_refptr<StyleBoxData> Create() {
      return base::AdoptRef(new StyleBoxData);
    }
    scoped_refptr<StyleBoxData> Copy() const {
      return base::AdoptRef(new StyleBoxData(*this));
    }

    bool operator==(const StyleBoxData& other) const {
      return (
        height_ == other.height_
        && max_height_ == other.max_height_
        && max_width_ == other.max_width_
        && min_height_ == other.min_height_
        && min_width_ == other.min_width_
        && width_ == other.width_
        && vertical_align_length_ == other.vertical_align_length_
        && z_index_ == other.z_index_
        && box_decoration_break_ == other.box_decoration_break_
        && box_sizing_ == other.box_sizing_
        && has_auto_z_index_ == other.has_auto_z_index_
      );
    }
    bool operator!=(const StyleBoxData& other) const { return !(*this == other); }

    Length height_;
    Length max_height_;
    Length max_width_;
    Length min_height_;
    Length min_width_;
    Length width_;
    Length vertical_align_length_;
    int z_index_;
    unsigned box_decoration_break_ : 1; // EBoxDecorationBreak
    unsigned box_sizing_ : 1; // EBoxSizing
    unsigned has_auto_z_index_ : 1; // bool

   private:
    StyleBoxData();
    CORE_EXPORT StyleBoxData(const StyleBoxData&);
  };

  class StyleSurroundData : public RefCounted<StyleSurroundData> {
   public:
    static scoped_refptr<StyleSurroundData> Create() {
      return base::AdoptRef(new StyleSurroundData);
    }
    scoped_refptr<StyleSurroundData> Copy() const {
      return base::AdoptRef(new StyleSurroundData(*this));
    }

    bool operator==(const StyleSurroundData& other) const {
      return (
        border_image_ == other.border_image_
        && border_bottom_left_radius_ == other.border_bottom_left_radius_
        && border_bottom_right_radius_ == other.border_bottom_right_radius_
        && border_top_left_radius_ == other.border_top_left_radius_
        && border_top_right_radius_ == other.border_top_right_radius_
        && bottom_ == other.bottom_
        && left_ == other.left_
        && margin_bottom_ == other.margin_bottom_
        && margin_left_ == other.margin_left_
        && margin_right_ == other.margin_right_
        && margin_top_ == other.margin_top_
        && padding_bottom_ == other.padding_bottom_
        && padding_left_ == other.padding_left_
        && padding_right_ == other.padding_right_
        && padding_top_ == other.padding_top_
        && right_ == other.right_
        && top_ == other.top_
        && border_bottom_color_ == other.border_bottom_color_
        && border_left_color_ == other.border_left_color_
        && border_right_color_ == other.border_right_color_
        && border_top_color_ == other.border_top_color_
        && border_bottom_width_ == other.border_bottom_width_
        && border_left_width_ == other.border_left_width_
        && border_right_width_ == other.border_right_width_
        && border_top_width_ == other.border_top_width_
        && border_bottom_style_ == other.border_bottom_style_
        && border_left_style_ == other.border_left_style_
        && border_right_style_ == other.border_right_style_
        && border_top_style_ == other.border_top_style_
        && border_bottom_color_is_current_color_ == other.border_bottom_color_is_current_color_
        && border_left_color_is_current_color_ == other.border_left_color_is_current_color_
        && border_right_color_is_current_color_ == other.border_right_color_is_current_color_
        && border_top_color_is_current_color_ == other.border_top_color_is_current_color_
      );
    }
    bool operator!=(const StyleSurroundData& other) const { return !(*this == other); }

    NinePieceImage border_image_;
    LengthSize border_bottom_left_radius_;
    LengthSize border_bottom_right_radius_;
    LengthSize border_top_left_radius_;
    LengthSize border_top_right_radius_;
    Length bottom_;
    Length left_;
    Length margin_bottom_;
    Length margin_left_;
    Length margin_right_;
    Length margin_top_;
    Length padding_bottom_;
    Length padding_left_;
    Length padding_right_;
    Length padding_top_;
    Length right_;
    Length top_;
    Color border_bottom_color_;
    Color border_left_color_;
    Color border_right_color_;
    Color border_top_color_;
    LayoutUnit border_bottom_width_;
    LayoutUnit border_left_width_;
    LayoutUnit border_right_width_;
    LayoutUnit border_top_width_;
    unsigned border_bottom_style_ : 4; // EBorderStyle
    unsigned border_left_style_ : 4; // EBorderStyle
    unsigned border_right_style_ : 4; // EBorderStyle
    unsigned border_top_style_ : 4; // EBorderStyle
    unsigned border_bottom_color_is_current_color_ : 1; // bool
    unsigned border_left_color_is_current_color_ : 1; // bool
    unsigned border_right_color_is_current_color_ : 1; // bool
    unsigned border_top_color_is_current_color_ : 1; // bool

   private:
    StyleSurroundData();
    CORE_EXPORT StyleSurroundData(const StyleSurroundData&);
  };

  class StyleVisualData : public RefCounted<StyleVisualData> {
   public:
    static scoped_refptr<StyleVisualData> Create() {
      return base::AdoptRef(new StyleVisualData);
    }
    scoped_refptr<StyleVisualData> Copy() const {
      return base::AdoptRef(new StyleVisualData(*this));
    }

    bool operator==(const StyleVisualData& other) const {
      return (
        clip_ == other.clip_
        && zoom_ == other.zoom_
        && text_decoration_ == other.text_decoration_
        && has_auto_clip_ == other.has_auto_clip_
      );
    }
    bool operator!=(const StyleVisualData& other) const { return !(*this == other); }

    LengthBox clip_;
    float zoom_;
    unsigned text_decoration_ : 4; // TextDecoration
    unsigned has_auto_clip_ : 1; // bool

   private:
    StyleVisualData();
    CORE_EXPORT StyleVisualData(const StyleVisualData&);
  };

  class StyleBackgroundData : public RefCounted<StyleBackgroundData> {
   public:
    static scoped_refptr<StyleBackgroundData> Create() {
      return base::AdoptRef(new StyleBackgroundData);
    }
    scoped_refptr<StyleBackgroundData> Copy() const {
      return base::AdoptRef(new StyleBackgroundData(*this));
    }

    bool operator==(const StyleBackgroundData& other) const {
      return (
        background_ == other.background_
        && background_color_ == other.background_color_
      );
    }
    bool operator!=(const StyleBackgroundData& other) const { return !(*this == other); }

    FillLayer background_;
    StyleColor background_color_;

   private:
    StyleBackgroundData();
    CORE_EXPORT StyleBackgroundData(const StyleBackgroundData&);
  };

  class StyleFontData : public RefCounted<StyleFontData> {
   public:
    static scoped_refptr<StyleFontData> Create() {
      return base::AdoptRef(new StyleFontData);
    }
    scoped_refptr<StyleFontData> Copy() const {
      return base::AdoptRef(new StyleFontData(*this));
    }

    bool operator==(const StyleFontData& other) const {
      return (
        font_ == other.font_
      );
    }
    bool operator!=(const StyleFontData& other) const { return !(*this == other); }

    Font font_;

   private:
    StyleFontData();
    CORE_EXPORT StyleFontData(const StyleFontData&);
  };

  class StyleInheritedData : public RefCounted<StyleInheritedData> {
   public:
    static scoped_refptr<StyleInheritedData> Create() {
      return base::AdoptRef(new StyleInheritedData);
    }
    scoped_refptr<StyleInheritedData> Copy() const {
      return base::AdoptRef(new StyleInheritedData(*this));
    }

    bool operator==(const StyleInheritedData& other) const {
      return (
        font_data_ == other.font_data_
        && line_height_ == other.line_height_
        && text_autosizing_multiplier_ == other.text_autosizing_multiplier_
        && color_ == other.color_
        && visited_link_color_ == other.visited_link_color_
        && horizontal_border_spacing_ == other.horizontal_border_spacing_
        && vertical_border_spacing_ == other.vertical_border_spacing_
      );
    }
    bool operator!=(const StyleInheritedData& other) const { return !(*this == other); }

    DataRef<StyleFontData> font_data_;
    Length line_height_;
    float text_autosizing_multiplier_;
    Color color_;
    Color visited_link_color_;
    short horizontal_border_spacing_;
    short vertical_border_spacing_;

   private:
    StyleInheritedData();
    CORE_EXPORT StyleInheritedData(const StyleInheritedData&);
  };

  class StyleRareInheritedUsageLessThan100PercentData : public RefCounted<StyleRareInheritedUsageLessThan100PercentData> {
   public:
    static scoped_refptr<StyleRareInheritedUsageLessThan100PercentData> Create() {
      return base::AdoptRef(new StyleRareInheritedUsageLessThan100PercentData);
    }
    scoped_refptr<StyleRareInheritedUsageLessThan100PercentData> Copy() const {
      return base::AdoptRef(new StyleRareInheritedUsageLessThan100PercentData(*this));
    }

    bool operator==(const StyleRareInheritedUsageLessThan100PercentData& other) const {
      return (
        tab_size_ == other.tab_size_
        && caret_color_ == other.caret_color_
        && text_align_last_ == other.text_align_last_
        && text_underline_position_ == other.text_underline_position_
        && hyphens_ == other.hyphens_
        && text_justify_ == other.text_justify_
        && text_orientation_ == other.text_orientation_
        && respect_image_orientation_ == other.respect_image_orientation_
        && text_combine_ == other.text_combine_
        && text_decoration_skip_ink_ == other.text_decoration_skip_ink_
      );
    }
    bool operator!=(const StyleRareInheritedUsageLessThan100PercentData& other) const { return !(*this == other); }

    TabSize tab_size_;
    Color caret_color_;
    unsigned text_align_last_ : 3; // ETextAlignLast
    unsigned text_underline_position_ : 3; // unsigned
    unsigned hyphens_ : 2; // Hyphens
    unsigned text_justify_ : 2; // TextJustify
    unsigned text_orientation_ : 2; // ETextOrientation
    unsigned respect_image_orientation_ : 1; // bool
    unsigned text_combine_ : 1; // ETextCombine
    unsigned text_decoration_skip_ink_ : 1; // ETextDecorationSkipInk

   private:
    StyleRareInheritedUsageLessThan100PercentData();
    CORE_EXPORT StyleRareInheritedUsageLessThan100PercentData(const StyleRareInheritedUsageLessThan100PercentData&);
  };

  class StyleRareInheritedUsageLessThan40PercentSubData : public RefCounted<StyleRareInheritedUsageLessThan40PercentSubData> {
   public:
    static scoped_refptr<StyleRareInheritedUsageLessThan40PercentSubData> Create() {
      return base::AdoptRef(new StyleRareInheritedUsageLessThan40PercentSubData);
    }
    scoped_refptr<StyleRareInheritedUsageLessThan40PercentSubData> Copy() const {
      return base::AdoptRef(new StyleRareInheritedUsageLessThan40PercentSubData(*this));
    }

    bool operator==(const StyleRareInheritedUsageLessThan40PercentSubData& other) const {
      return (
        highlight_ == other.highlight_
        && hyphenation_string_ == other.hyphenation_string_
        && text_emphasis_custom_mark_ == other.text_emphasis_custom_mark_
        && DataEquivalent(applied_text_decorations_, other.applied_text_decorations_)
        && DataEquivalent(inherited_variables_, other.inherited_variables_)
        && DataEquivalent(initial_data_, other.initial_data_)
        && DataEquivalent(cursor_data_, other.cursor_data_)
        && text_stroke_width_ == other.text_stroke_width_
        && effective_zoom_ == other.effective_zoom_
        && tap_highlight_color_ == other.tap_highlight_color_
        && text_emphasis_color_ == other.text_emphasis_color_
        && text_fill_color_ == other.text_fill_color_
        && text_stroke_color_ == other.text_stroke_color_
        && visited_link_text_stroke_color_ == other.visited_link_text_stroke_color_
        && visited_link_text_fill_color_ == other.visited_link_text_fill_color_
        && visited_link_text_emphasis_color_ == other.visited_link_text_emphasis_color_
        && visited_link_caret_color_ == other.visited_link_caret_color_
        && hyphenation_limit_before_ == other.hyphenation_limit_before_
        && hyphenation_limit_after_ == other.hyphenation_limit_after_
        && hyphenation_limit_lines_ == other.hyphenation_limit_lines_
        && line_height_step_ == other.line_height_step_
        && effective_touch_action_ == other.effective_touch_action_
        && line_break_ == other.line_break_
        && text_emphasis_mark_ == other.text_emphasis_mark_
        && text_emphasis_position_ == other.text_emphasis_position_
        && text_security_ == other.text_security_
        && user_modify_ == other.user_modify_
        && caret_color_is_auto_ == other.caret_color_is_auto_
        && caret_color_is_current_color_ == other.caret_color_is_current_color_
        && ruby_position_ == other.ruby_position_
        && self_or_ancestor_has_dir_auto_attribute_ == other.self_or_ancestor_has_dir_auto_attribute_
        && subtree_is_sticky_ == other.subtree_is_sticky_
        && subtree_will_change_contents_ == other.subtree_will_change_contents_
        && text_emphasis_color_is_current_color_ == other.text_emphasis_color_is_current_color_
        && text_emphasis_fill_ == other.text_emphasis_fill_
        && text_fill_color_is_current_color_ == other.text_fill_color_is_current_color_
        && text_indent_line_ == other.text_indent_line_
        && text_indent_type_ == other.text_indent_type_
        && text_stroke_color_is_current_color_ == other.text_stroke_color_is_current_color_
        && visited_link_caret_color_is_auto_ == other.visited_link_caret_color_is_auto_
        && visited_link_caret_color_is_current_color_ == other.visited_link_caret_color_is_current_color_
        && visited_link_text_emphasis_color_is_current_color_ == other.visited_link_text_emphasis_color_is_current_color_
        && visited_link_text_fill_color_is_current_color_ == other.visited_link_text_fill_color_is_current_color_
        && visited_link_text_stroke_color_is_current_color_ == other.visited_link_text_stroke_color_is_current_color_
      );
    }
    bool operator!=(const StyleRareInheritedUsageLessThan40PercentSubData& other) const { return !(*this == other); }

    AtomicString highlight_;
    AtomicString hyphenation_string_;
    AtomicString text_emphasis_custom_mark_;
    scoped_refptr<AppliedTextDecorationList> applied_text_decorations_;
    scoped_refptr<StyleInheritedVariables> inherited_variables_;
    scoped_refptr<StyleInitialData> initial_data_;
    Persistent<CursorList> cursor_data_;
    float text_stroke_width_;
    float effective_zoom_;
    Color tap_highlight_color_;
    Color text_emphasis_color_;
    Color text_fill_color_;
    Color text_stroke_color_;
    Color visited_link_text_stroke_color_;
    Color visited_link_text_fill_color_;
    Color visited_link_text_emphasis_color_;
    Color visited_link_caret_color_;
    short hyphenation_limit_before_;
    short hyphenation_limit_after_;
    short hyphenation_limit_lines_;
    uint8_t line_height_step_;
    unsigned effective_touch_action_ : 6; // TouchAction
    unsigned line_break_ : 3; // LineBreak
    unsigned text_emphasis_mark_ : 3; // TextEmphasisMark
    unsigned text_emphasis_position_ : 2; // TextEmphasisPosition
    unsigned text_security_ : 2; // ETextSecurity
    unsigned user_modify_ : 2; // EUserModify
    unsigned caret_color_is_auto_ : 1; // bool
    unsigned caret_color_is_current_color_ : 1; // bool
    unsigned ruby_position_ : 1; // RubyPosition
    unsigned self_or_ancestor_has_dir_auto_attribute_ : 1; // bool
    unsigned subtree_is_sticky_ : 1; // bool
    unsigned subtree_will_change_contents_ : 1; // bool
    unsigned text_emphasis_color_is_current_color_ : 1; // bool
    unsigned text_emphasis_fill_ : 1; // TextEmphasisFill
    unsigned text_fill_color_is_current_color_ : 1; // bool
    unsigned text_indent_line_ : 1; // TextIndentLine
    unsigned text_indent_type_ : 1; // TextIndentType
    unsigned text_stroke_color_is_current_color_ : 1; // bool
    unsigned visited_link_caret_color_is_auto_ : 1; // bool
    unsigned visited_link_caret_color_is_current_color_ : 1; // bool
    unsigned visited_link_text_emphasis_color_is_current_color_ : 1; // bool
    unsigned visited_link_text_fill_color_is_current_color_ : 1; // bool
    unsigned visited_link_text_stroke_color_is_current_color_ : 1; // bool

   private:
    StyleRareInheritedUsageLessThan40PercentSubData();
    CORE_EXPORT StyleRareInheritedUsageLessThan40PercentSubData(const StyleRareInheritedUsageLessThan40PercentSubData&);
  };

  class StyleRareInheritedUsageLessThan40PercentData : public RefCounted<StyleRareInheritedUsageLessThan40PercentData> {
   public:
    static scoped_refptr<StyleRareInheritedUsageLessThan40PercentData> Create() {
      return base::AdoptRef(new StyleRareInheritedUsageLessThan40PercentData);
    }
    scoped_refptr<StyleRareInheritedUsageLessThan40PercentData> Copy() const {
      return base::AdoptRef(new StyleRareInheritedUsageLessThan40PercentData(*this));
    }

    bool operator==(const StyleRareInheritedUsageLessThan40PercentData& other) const {
      return (
        rare_inherited_usage_less_than_100_percent_data_ == other.rare_inherited_usage_less_than_100_percent_data_
        && rare_inherited_usage_less_than_40_percent_sub_data_ == other.rare_inherited_usage_less_than_40_percent_sub_data_
        && DataEquivalent(quotes_, other.quotes_)
        && DataEquivalent(text_shadow_, other.text_shadow_)
        && DataEquivalent(list_style_image_, other.list_style_image_)
        && text_indent_ == other.text_indent_
        && text_size_adjust_ == other.text_size_adjust_
        && orphans_ == other.orphans_
        && widows_ == other.widows_
        && image_rendering_ == other.image_rendering_
        && speak_ == other.speak_
        && user_select_ == other.user_select_
        && word_break_ == other.word_break_
        && overflow_wrap_ == other.overflow_wrap_
      );
    }
    bool operator!=(const StyleRareInheritedUsageLessThan40PercentData& other) const { return !(*this == other); }

    DataRef<StyleRareInheritedUsageLessThan100PercentData> rare_inherited_usage_less_than_100_percent_data_;
    DataRef<StyleRareInheritedUsageLessThan40PercentSubData> rare_inherited_usage_less_than_40_percent_sub_data_;
    scoped_refptr<QuotesData> quotes_;
    scoped_refptr<ShadowList> text_shadow_;
    Persistent<StyleImage> list_style_image_;
    Length text_indent_;
    TextSizeAdjust text_size_adjust_;
    short orphans_;
    short widows_;
    unsigned image_rendering_ : 3; // EImageRendering
    unsigned speak_ : 3; // ESpeak
    unsigned user_select_ : 2; // EUserSelect
    unsigned word_break_ : 2; // EWordBreak
    unsigned overflow_wrap_ : 1; // EOverflowWrap

   private:
    StyleRareInheritedUsageLessThan40PercentData();
    CORE_EXPORT StyleRareInheritedUsageLessThan40PercentData(const StyleRareInheritedUsageLessThan40PercentData&);
  };


 protected:
  // Constructor and destructor are protected so that only the parent class ComputedStyle
  // can instantiate this class.
  ComputedStyleBase();

  // AffectedByActive
  

  // AffectedByDrag
  

  // AffectedByFocusWithin
  

  // AffectedByHover
  

  // align-content
  

  void SetAlignContentInternal(StyleContentAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->align_content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->align_content_ = std::move(v);
  }
  StyleContentAlignmentData& MutableAlignContentInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->align_content_;
  }


  // align-items
  

  void SetAlignItemsInternal(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->align_items_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->align_items_ = std::move(v);
  }
  StyleSelfAlignmentData& MutableAlignItemsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->align_items_;
  }


  // align-self
  

  void SetAlignSelfInternal(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->align_self_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->align_self_ = std::move(v);
  }
  StyleSelfAlignmentData& MutableAlignSelfInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->align_self_;
  }


  // Animations
  const std::unique_ptr<CSSAnimationData>& AnimationsInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->animations_;
  }

  void SetAnimationsInternal(std::unique_ptr<CSSAnimationData>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->animations_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->animations_ = std::move(v);
  }
  std::unique_ptr<CSSAnimationData>& MutableAnimationsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->animations_;
  }


  // -webkit-appearance
  

  ControlPart MutableAppearanceInternal() {
    return static_cast<ControlPart>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->appearance_);
  }


  // AppliedTextDecorations
  const scoped_refptr<AppliedTextDecorationList>& AppliedTextDecorationsInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->applied_text_decorations_;
  }

  void SetAppliedTextDecorationsInternal(scoped_refptr<AppliedTextDecorationList>&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->applied_text_decorations_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->applied_text_decorations_ = std::move(v);
  }
  scoped_refptr<AppliedTextDecorationList>& MutableAppliedTextDecorationsInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->applied_text_decorations_;
  }


  // AutoRepeatNamedGridColumnLines
  

  void SetAutoRepeatNamedGridColumnLinesInternal(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_column_lines_ = std::move(v);
  }
  NamedGridLinesMap& MutableAutoRepeatNamedGridColumnLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_column_lines_;
  }


  // AutoRepeatNamedGridRowLines
  

  void SetAutoRepeatNamedGridRowLinesInternal(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_row_lines_ = std::move(v);
  }
  NamedGridLinesMap& MutableAutoRepeatNamedGridRowLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_named_grid_row_lines_;
  }


  // AutoRepeatOrderedNamedGridColumnLines
  

  void SetAutoRepeatOrderedNamedGridColumnLinesInternal(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_column_lines_ = std::move(v);
  }
  OrderedNamedGridLines& MutableAutoRepeatOrderedNamedGridColumnLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_column_lines_;
  }


  // AutoRepeatOrderedNamedGridRowLines
  

  void SetAutoRepeatOrderedNamedGridRowLinesInternal(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_row_lines_ = std::move(v);
  }
  OrderedNamedGridLines& MutableAutoRepeatOrderedNamedGridRowLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->auto_repeat_ordered_named_grid_row_lines_;
  }


  // backdrop-filter
  const Persistent<StyleFilterData>& BackdropFilterInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->backdrop_filter_;
  }

  void SetBackdropFilterInternal(Persistent<StyleFilterData>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->backdrop_filter_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->backdrop_filter_ = std::move(v);
  }
  Persistent<StyleFilterData>& MutableBackdropFilterInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->backdrop_filter_;
  }


  // backface-visibility
  

  EBackfaceVisibility MutableBackfaceVisibilityInternal() {
    return static_cast<EBackfaceVisibility>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->backface_visibility_);
  }


  // Background
  const FillLayer& BackgroundInternal() const {
    return background_data_->background_;
  }

  void SetBackgroundInternal(const FillLayer& v) {
    if (!(background_data_->background_ == v))
      background_data_.Access()->background_ = v;
  }

  void SetBackgroundInternal(FillLayer&& v) {
    if (!(background_data_->background_ == v))
      background_data_.Access()->background_ = std::move(v);
  }
  FillLayer& MutableBackgroundInternal() {
    return background_data_.Access()->background_;
  }


  // background-color
  const StyleColor& BackgroundColorInternal() const {
    return background_data_->background_color_;
  }


  void SetBackgroundColorInternal(StyleColor&& v) {
    if (!(background_data_->background_color_ == v))
      background_data_.Access()->background_color_ = std::move(v);
  }
  StyleColor& MutableBackgroundColorInternal() {
    return background_data_.Access()->background_color_;
  }


  // mix-blend-mode
  

  BlendMode MutableBlendModeInternal() {
    return static_cast<BlendMode>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->blend_mode_);
  }


  // border-bottom-color
  const Color& BorderBottomColorInternal() const {
    return surround_data_->border_bottom_color_;
  }

  void SetBorderBottomColorInternal(const Color& v) {
    if (!(surround_data_->border_bottom_color_ == v))
      surround_data_.Access()->border_bottom_color_ = v;
  }

  void SetBorderBottomColorInternal(Color&& v) {
    if (!(surround_data_->border_bottom_color_ == v))
      surround_data_.Access()->border_bottom_color_ = std::move(v);
  }
  Color& MutableBorderBottomColorInternal() {
    return surround_data_.Access()->border_bottom_color_;
  }


  // BorderBottomColorIsCurrentColor
  

  bool MutableBorderBottomColorIsCurrentColorInternal() {
    return static_cast<bool>(surround_data_.Access()->border_bottom_color_is_current_color_);
  }


  // border-bottom-left-radius
  

  void SetBorderBottomLeftRadiusInternal(LengthSize&& v) {
    if (!(surround_data_->border_bottom_left_radius_ == v))
      surround_data_.Access()->border_bottom_left_radius_ = std::move(v);
  }
  LengthSize& MutableBorderBottomLeftRadiusInternal() {
    return surround_data_.Access()->border_bottom_left_radius_;
  }


  // border-bottom-right-radius
  

  void SetBorderBottomRightRadiusInternal(LengthSize&& v) {
    if (!(surround_data_->border_bottom_right_radius_ == v))
      surround_data_.Access()->border_bottom_right_radius_ = std::move(v);
  }
  LengthSize& MutableBorderBottomRightRadiusInternal() {
    return surround_data_.Access()->border_bottom_right_radius_;
  }


  // border-bottom-style
  

  EBorderStyle MutableBorderBottomStyleInternal() {
    return static_cast<EBorderStyle>(surround_data_.Access()->border_bottom_style_);
  }


  // border-bottom-width
  const LayoutUnit& BorderBottomWidthInternal() const {
    return surround_data_->border_bottom_width_;
  }

  void SetBorderBottomWidthInternal(const LayoutUnit& v) {
    if (!(surround_data_->border_bottom_width_ == v))
      surround_data_.Access()->border_bottom_width_ = v;
  }

  void SetBorderBottomWidthInternal(LayoutUnit&& v) {
    if (!(surround_data_->border_bottom_width_ == v))
      surround_data_.Access()->border_bottom_width_ = std::move(v);
  }
  LayoutUnit& MutableBorderBottomWidthInternal() {
    return surround_data_.Access()->border_bottom_width_;
  }


  // border-collapse
  

  EBorderCollapse MutableBorderCollapseInternal() {
    return static_cast<EBorderCollapse>(border_collapse_);
  }


  // border-collapse
  

  bool MutableBorderCollapseIsInheritedInternal() {
    return static_cast<bool>(border_collapse_is_inherited_);
  }


  // border-image
  

  void SetBorderImageInternal(NinePieceImage&& v) {
    if (!(surround_data_->border_image_ == v))
      surround_data_.Access()->border_image_ = std::move(v);
  }
  NinePieceImage& MutableBorderImageInternal() {
    return surround_data_.Access()->border_image_;
  }


  // border-left-color
  const Color& BorderLeftColorInternal() const {
    return surround_data_->border_left_color_;
  }

  void SetBorderLeftColorInternal(const Color& v) {
    if (!(surround_data_->border_left_color_ == v))
      surround_data_.Access()->border_left_color_ = v;
  }

  void SetBorderLeftColorInternal(Color&& v) {
    if (!(surround_data_->border_left_color_ == v))
      surround_data_.Access()->border_left_color_ = std::move(v);
  }
  Color& MutableBorderLeftColorInternal() {
    return surround_data_.Access()->border_left_color_;
  }


  // BorderLeftColorIsCurrentColor
  

  bool MutableBorderLeftColorIsCurrentColorInternal() {
    return static_cast<bool>(surround_data_.Access()->border_left_color_is_current_color_);
  }


  // border-left-style
  

  EBorderStyle MutableBorderLeftStyleInternal() {
    return static_cast<EBorderStyle>(surround_data_.Access()->border_left_style_);
  }


  // border-left-width
  const LayoutUnit& BorderLeftWidthInternal() const {
    return surround_data_->border_left_width_;
  }

  void SetBorderLeftWidthInternal(const LayoutUnit& v) {
    if (!(surround_data_->border_left_width_ == v))
      surround_data_.Access()->border_left_width_ = v;
  }

  void SetBorderLeftWidthInternal(LayoutUnit&& v) {
    if (!(surround_data_->border_left_width_ == v))
      surround_data_.Access()->border_left_width_ = std::move(v);
  }
  LayoutUnit& MutableBorderLeftWidthInternal() {
    return surround_data_.Access()->border_left_width_;
  }


  // border-right-color
  const Color& BorderRightColorInternal() const {
    return surround_data_->border_right_color_;
  }

  void SetBorderRightColorInternal(const Color& v) {
    if (!(surround_data_->border_right_color_ == v))
      surround_data_.Access()->border_right_color_ = v;
  }

  void SetBorderRightColorInternal(Color&& v) {
    if (!(surround_data_->border_right_color_ == v))
      surround_data_.Access()->border_right_color_ = std::move(v);
  }
  Color& MutableBorderRightColorInternal() {
    return surround_data_.Access()->border_right_color_;
  }


  // BorderRightColorIsCurrentColor
  

  bool MutableBorderRightColorIsCurrentColorInternal() {
    return static_cast<bool>(surround_data_.Access()->border_right_color_is_current_color_);
  }


  // border-right-style
  

  EBorderStyle MutableBorderRightStyleInternal() {
    return static_cast<EBorderStyle>(surround_data_.Access()->border_right_style_);
  }


  // border-right-width
  const LayoutUnit& BorderRightWidthInternal() const {
    return surround_data_->border_right_width_;
  }

  void SetBorderRightWidthInternal(const LayoutUnit& v) {
    if (!(surround_data_->border_right_width_ == v))
      surround_data_.Access()->border_right_width_ = v;
  }

  void SetBorderRightWidthInternal(LayoutUnit&& v) {
    if (!(surround_data_->border_right_width_ == v))
      surround_data_.Access()->border_right_width_ = std::move(v);
  }
  LayoutUnit& MutableBorderRightWidthInternal() {
    return surround_data_.Access()->border_right_width_;
  }


  // border-top-color
  const Color& BorderTopColorInternal() const {
    return surround_data_->border_top_color_;
  }

  void SetBorderTopColorInternal(const Color& v) {
    if (!(surround_data_->border_top_color_ == v))
      surround_data_.Access()->border_top_color_ = v;
  }

  void SetBorderTopColorInternal(Color&& v) {
    if (!(surround_data_->border_top_color_ == v))
      surround_data_.Access()->border_top_color_ = std::move(v);
  }
  Color& MutableBorderTopColorInternal() {
    return surround_data_.Access()->border_top_color_;
  }


  // BorderTopColorIsCurrentColor
  

  bool MutableBorderTopColorIsCurrentColorInternal() {
    return static_cast<bool>(surround_data_.Access()->border_top_color_is_current_color_);
  }


  // border-top-left-radius
  

  void SetBorderTopLeftRadiusInternal(LengthSize&& v) {
    if (!(surround_data_->border_top_left_radius_ == v))
      surround_data_.Access()->border_top_left_radius_ = std::move(v);
  }
  LengthSize& MutableBorderTopLeftRadiusInternal() {
    return surround_data_.Access()->border_top_left_radius_;
  }


  // border-top-right-radius
  

  void SetBorderTopRightRadiusInternal(LengthSize&& v) {
    if (!(surround_data_->border_top_right_radius_ == v))
      surround_data_.Access()->border_top_right_radius_ = std::move(v);
  }
  LengthSize& MutableBorderTopRightRadiusInternal() {
    return surround_data_.Access()->border_top_right_radius_;
  }


  // border-top-style
  

  EBorderStyle MutableBorderTopStyleInternal() {
    return static_cast<EBorderStyle>(surround_data_.Access()->border_top_style_);
  }


  // border-top-width
  const LayoutUnit& BorderTopWidthInternal() const {
    return surround_data_->border_top_width_;
  }

  void SetBorderTopWidthInternal(const LayoutUnit& v) {
    if (!(surround_data_->border_top_width_ == v))
      surround_data_.Access()->border_top_width_ = v;
  }

  void SetBorderTopWidthInternal(LayoutUnit&& v) {
    if (!(surround_data_->border_top_width_ == v))
      surround_data_.Access()->border_top_width_ = std::move(v);
  }
  LayoutUnit& MutableBorderTopWidthInternal() {
    return surround_data_.Access()->border_top_width_;
  }


  // bottom
  

  void SetBottomInternal(Length&& v) {
    if (!(surround_data_->bottom_ == v))
      surround_data_.Access()->bottom_ = std::move(v);
  }
  Length& MutableBottomInternal() {
    return surround_data_.Access()->bottom_;
  }


  // -webkit-box-align
  

  EBoxAlignment MutableBoxAlignInternal() {
    return static_cast<EBoxAlignment>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_align_);
  }


  // -webkit-box-decoration-break
  

  EBoxDecorationBreak MutableBoxDecorationBreakInternal() {
    return static_cast<EBoxDecorationBreak>(box_data_.Access()->box_decoration_break_);
  }


  // -webkit-box-direction
  

  EBoxDirection MutableBoxDirectionInternal() {
    return static_cast<EBoxDirection>(box_direction_);
  }


  // -webkit-box-direction
  

  bool MutableBoxDirectionIsInheritedInternal() {
    return static_cast<bool>(box_direction_is_inherited_);
  }


  // -webkit-box-flex
  

  float MutableBoxFlexInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_flex_;
  }


  // -webkit-box-ordinal-group
  
  void SetBoxOrdinalGroupInternal(unsigned v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_ordinal_group_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_ordinal_group_ = v;
  }

  unsigned MutableBoxOrdinalGroupInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_ordinal_group_;
  }


  // -webkit-box-orient
  

  EBoxOrient MutableBoxOrientInternal() {
    return static_cast<EBoxOrient>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_orient_);
  }


  // -webkit-box-pack
  

  EBoxPack MutableBoxPackInternal() {
    return static_cast<EBoxPack>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->box_pack_);
  }


  // box-sizing
  

  EBoxSizing MutableBoxSizingInternal() {
    return static_cast<EBoxSizing>(box_data_.Access()->box_sizing_);
  }


  // break-after
  

  EBreakBetween MutableBreakAfterInternal() {
    return static_cast<EBreakBetween>(break_after_);
  }


  // break-before
  

  EBreakBetween MutableBreakBeforeInternal() {
    return static_cast<EBreakBetween>(break_before_);
  }


  // break-inside
  

  EBreakInside MutableBreakInsideInternal() {
    return static_cast<EBreakInside>(break_inside_);
  }


  // CallbackSelectors
  const Vector<String>& CallbackSelectorsInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->callback_selectors_;
  }

  void SetCallbackSelectorsInternal(const Vector<String>& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->callback_selectors_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->callback_selectors_ = v;
  }

  void SetCallbackSelectorsInternal(Vector<String>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->callback_selectors_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->callback_selectors_ = std::move(v);
  }
  Vector<String>& MutableCallbackSelectorsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->callback_selectors_;
  }


  // caption-side
  

  ECaptionSide MutableCaptionSideInternal() {
    return static_cast<ECaptionSide>(caption_side_);
  }


  // caption-side
  

  bool MutableCaptionSideIsInheritedInternal() {
    return static_cast<bool>(caption_side_is_inherited_);
  }


  // caret-color
  const Color& CaretColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->caret_color_;
  }

  void SetCaretColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->caret_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->caret_color_ = v;
  }

  void SetCaretColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->caret_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->caret_color_ = std::move(v);
  }
  Color& MutableCaretColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->caret_color_;
  }


  // CaretColorIsAuto
  bool CaretColorIsAutoInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->caret_color_is_auto_);
  }

  void SetCaretColorIsAutoInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->caret_color_is_auto_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->caret_color_is_auto_ = static_cast<unsigned>(v);
  }

  bool MutableCaretColorIsAutoInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->caret_color_is_auto_);
  }


  // CaretColorIsCurrentColor
  bool CaretColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->caret_color_is_current_color_);
  }

  void SetCaretColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->caret_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->caret_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableCaretColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->caret_color_is_current_color_);
  }


  // clear
  

  EClear MutableClearInternal() {
    return static_cast<EClear>(clear_);
  }


  // clip
  
  void SetClipInternal(const LengthBox& v) {
    if (!(visual_data_->clip_ == v))
      visual_data_.Access()->clip_ = v;
  }

  void SetClipInternal(LengthBox&& v) {
    if (!(visual_data_->clip_ == v))
      visual_data_.Access()->clip_ = std::move(v);
  }
  LengthBox& MutableClipInternal() {
    return visual_data_.Access()->clip_;
  }


  // color
  const Color& ColorInternal() const {
    return inherited_data_->color_;
  }

  void SetColorInternal(const Color& v) {
    if (!(inherited_data_->color_ == v))
      inherited_data_.Access()->color_ = v;
  }

  void SetColorInternal(Color&& v) {
    if (!(inherited_data_->color_ == v))
      inherited_data_.Access()->color_ = std::move(v);
  }
  Color& MutableColorInternal() {
    return inherited_data_.Access()->color_;
  }


  // column-count
  
  void SetColumnCountInternal(unsigned short v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_count_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_count_ = v;
  }

  unsigned short MutableColumnCountInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_count_;
  }


  // column-fill
  

  EColumnFill MutableColumnFillInternal() {
    return static_cast<EColumnFill>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_fill_);
  }


  // column-gap
  

  void SetColumnGapInternal(GapLength&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_gap_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_gap_ = std::move(v);
  }
  GapLength& MutableColumnGapInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_gap_;
  }


  // column-rule-color
  const Color& ColumnRuleColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_color_;
  }

  void SetColumnRuleColorInternal(const Color& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_color_ = v;
  }

  void SetColumnRuleColorInternal(Color&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_color_ = std::move(v);
  }
  Color& MutableColumnRuleColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_color_;
  }


  // ColumnRuleColorIsCurrentColor
  

  bool MutableColumnRuleColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->column_rule_color_is_current_color_);
  }


  // column-rule-style
  

  EBorderStyle MutableColumnRuleStyleInternal() {
    return static_cast<EBorderStyle>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_style_);
  }


  // column-rule-width
  const LayoutUnit& ColumnRuleWidthInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_width_;
  }

  void SetColumnRuleWidthInternal(const LayoutUnit& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_width_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_width_ = v;
  }

  void SetColumnRuleWidthInternal(LayoutUnit&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_width_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_width_ = std::move(v);
  }
  LayoutUnit& MutableColumnRuleWidthInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_rule_width_;
  }


  // column-span
  

  EColumnSpan MutableColumnSpanInternal() {
    return static_cast<EColumnSpan>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_span_);
  }


  // column-width
  
  void SetColumnWidthInternal(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_width_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_width_ = v;
  }

  float MutableColumnWidthInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->column_width_;
  }


  // contain
  

  unsigned MutableContainInternal() {
    return static_cast<unsigned>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->contain_);
  }


  // content
  const Persistent<ContentData>& ContentInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->content_;
  }

  void SetContentInternal(Persistent<ContentData>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->content_ = std::move(v);
  }
  Persistent<ContentData>& MutableContentInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->content_;
  }


  // CounterDirectives
  const std::unique_ptr<CounterDirectiveMap>& CounterDirectivesInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->counter_directives_;
  }

  void SetCounterDirectivesInternal(std::unique_ptr<CounterDirectiveMap>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->counter_directives_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->counter_directives_ = std::move(v);
  }
  std::unique_ptr<CounterDirectiveMap>& MutableCounterDirectivesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->counter_directives_;
  }


  // cursor
  

  ECursor MutableCursorInternal() {
    return static_cast<ECursor>(cursor_);
  }


  // CursorData
  const Persistent<CursorList>& CursorDataInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->cursor_data_;
  }

  void SetCursorDataInternal(Persistent<CursorList>&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->cursor_data_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->cursor_data_ = std::move(v);
  }
  Persistent<CursorList>& MutableCursorDataInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->cursor_data_;
  }


  // DarkColorScheme
  

  // direction
  

  TextDirection MutableDirectionInternal() {
    return static_cast<TextDirection>(direction_);
  }


  // Display
  

  EDisplay MutableDisplayInternal() {
    return static_cast<EDisplay>(display_);
  }


  // DisplayLayoutCustomName
  

  void SetDisplayLayoutCustomNameInternal(AtomicString&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_name_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_name_ = std::move(v);
  }
  AtomicString& MutableDisplayLayoutCustomNameInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_name_;
  }


  // DisplayLayoutCustomParentName
  

  void SetDisplayLayoutCustomParentNameInternal(AtomicString&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->display_layout_custom_parent_name_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_parent_name_ = std::move(v);
  }
  AtomicString& MutableDisplayLayoutCustomParentNameInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->display_layout_custom_parent_name_;
  }


  // -webkit-app-region
  

  EDraggableRegionMode MutableDraggableRegionModeInternal() {
    return static_cast<EDraggableRegionMode>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->draggable_region_mode_);
  }


  // EffectiveTouchAction
  TouchAction EffectiveTouchActionInternal() const {
    return static_cast<TouchAction>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->effective_touch_action_);
  }

  void SetEffectiveTouchActionInternal(TouchAction v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->effective_touch_action_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->effective_touch_action_ = static_cast<unsigned>(v);
  }

  TouchAction MutableEffectiveTouchActionInternal() {
    return static_cast<TouchAction>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->effective_touch_action_);
  }


  // EffectiveZoom
  
  void SetEffectiveZoomInternal(float v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->effective_zoom_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->effective_zoom_ = v;
  }

  float MutableEffectiveZoomInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->effective_zoom_;
  }


  // empty-cells
  

  EEmptyCells MutableEmptyCellsInternal() {
    return static_cast<EEmptyCells>(empty_cells_);
  }


  // empty-cells
  

  bool MutableEmptyCellsIsInheritedInternal() {
    return static_cast<bool>(empty_cells_is_inherited_);
  }


  // filter
  const Persistent<StyleFilterData>& FilterInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->filter_;
  }

  void SetFilterInternal(Persistent<StyleFilterData>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->filter_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->filter_ = std::move(v);
  }
  Persistent<StyleFilterData>& MutableFilterInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->filter_;
  }


  // flex-basis
  

  void SetFlexBasisInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->flex_basis_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->flex_basis_ = std::move(v);
  }
  Length& MutableFlexBasisInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->flex_basis_;
  }


  // flex-direction
  

  EFlexDirection MutableFlexDirectionInternal() {
    return static_cast<EFlexDirection>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->flex_direction_);
  }


  // flex-grow
  

  float MutableFlexGrowInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_grow_;
  }


  // flex-shrink
  

  float MutableFlexShrinkInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_shrink_;
  }


  // flex-wrap
  

  EFlexWrap MutableFlexWrapInternal() {
    return static_cast<EFlexWrap>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->flex_wrap_);
  }


  // float
  

  EFloat MutableFloatingInternal() {
    return static_cast<EFloat>(floating_);
  }


  // font
  const Font& FontInternal() const {
    return inherited_data_->font_data_->font_;
  }

  void SetFontInternal(const Font& v) {
    if (!(inherited_data_->font_data_->font_ == v))
      inherited_data_.Access()->font_data_.Access()->font_ = v;
  }

  void SetFontInternal(Font&& v) {
    if (!(inherited_data_->font_data_->font_ == v))
      inherited_data_.Access()->font_data_.Access()->font_ = std::move(v);
  }
  Font& MutableFontInternal() {
    return inherited_data_.Access()->font_data_.Access()->font_;
  }


  // grid-auto-columns
  

  void SetGridAutoColumnsInternal(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_columns_ = std::move(v);
  }
  Vector<GridTrackSize>& MutableGridAutoColumnsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_columns_;
  }


  // grid-auto-flow
  GridAutoFlow GridAutoFlowInternal() const {
    return static_cast<GridAutoFlow>(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_flow_);
  }


  GridAutoFlow MutableGridAutoFlowInternal() {
    return static_cast<GridAutoFlow>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_flow_);
  }


  // GridAutoRepeatColumns
  

  void SetGridAutoRepeatColumnsInternal(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_ = std::move(v);
  }
  Vector<GridTrackSize>& MutableGridAutoRepeatColumnsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_;
  }


  // GridAutoRepeatColumnsInsertionPoint
  

  size_t MutableGridAutoRepeatColumnsInsertionPointInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_insertion_point_;
  }


  // GridAutoRepeatColumnsType
  

  AutoRepeatType MutableGridAutoRepeatColumnsTypeInternal() {
    return static_cast<AutoRepeatType>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_columns_type_);
  }


  // GridAutoRepeatRows
  

  void SetGridAutoRepeatRowsInternal(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_ = std::move(v);
  }
  Vector<GridTrackSize>& MutableGridAutoRepeatRowsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_;
  }


  // GridAutoRepeatRowsInsertionPoint
  

  size_t MutableGridAutoRepeatRowsInsertionPointInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_insertion_point_;
  }


  // GridAutoRepeatRowsType
  

  AutoRepeatType MutableGridAutoRepeatRowsTypeInternal() {
    return static_cast<AutoRepeatType>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->grid_auto_repeat_rows_type_);
  }


  // grid-auto-rows
  

  void SetGridAutoRowsInternal(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_rows_ = std::move(v);
  }
  Vector<GridTrackSize>& MutableGridAutoRowsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_auto_rows_;
  }


  // grid-column-end
  

  void SetGridColumnEndInternal(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_end_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_end_ = std::move(v);
  }
  GridPosition& MutableGridColumnEndInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_end_;
  }


  // grid-column-start
  

  void SetGridColumnStartInternal(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_start_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_start_ = std::move(v);
  }
  GridPosition& MutableGridColumnStartInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_column_start_;
  }


  // grid-row-end
  

  void SetGridRowEndInternal(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_end_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_end_ = std::move(v);
  }
  GridPosition& MutableGridRowEndInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_end_;
  }


  // grid-row-start
  

  void SetGridRowStartInternal(GridPosition&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_start_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_start_ = std::move(v);
  }
  GridPosition& MutableGridRowStartInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_row_start_;
  }


  // grid-template-columns
  

  void SetGridTemplateColumnsInternal(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_columns_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_columns_ = std::move(v);
  }
  Vector<GridTrackSize>& MutableGridTemplateColumnsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_columns_;
  }


  // grid-template-rows
  

  void SetGridTemplateRowsInternal(Vector<GridTrackSize>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_rows_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_rows_ = std::move(v);
  }
  Vector<GridTrackSize>& MutableGridTemplateRowsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->grid_template_rows_;
  }


  // HasAttrContent
  

  // HasAuthorBackground
  

  bool MutableHasAuthorBackgroundInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_author_background_);
  }


  // HasAuthorBorder
  

  bool MutableHasAuthorBorderInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_author_border_);
  }


  // HasAutoClip
  
  void SetHasAutoClipInternal(bool v) {
    if (!(visual_data_->has_auto_clip_ == static_cast<unsigned>(v)))
      visual_data_.Access()->has_auto_clip_ = static_cast<unsigned>(v);
  }

  bool MutableHasAutoClipInternal() {
    return static_cast<bool>(visual_data_.Access()->has_auto_clip_);
  }


  // HasAutoColumnCount
  
  void SetHasAutoColumnCountInternal(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_count_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->has_auto_column_count_ = static_cast<unsigned>(v);
  }

  bool MutableHasAutoColumnCountInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->has_auto_column_count_);
  }


  // HasAutoColumnWidth
  
  void SetHasAutoColumnWidthInternal(bool v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_width_ == static_cast<unsigned>(v)))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->has_auto_column_width_ = static_cast<unsigned>(v);
  }

  bool MutableHasAutoColumnWidthInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->has_auto_column_width_);
  }


  // HasAutoZIndex
  
  void SetHasAutoZIndexInternal(bool v) {
    if (!(box_data_->has_auto_z_index_ == static_cast<unsigned>(v)))
      box_data_.Access()->has_auto_z_index_ = static_cast<unsigned>(v);
  }

  bool MutableHasAutoZIndexInternal() {
    return static_cast<bool>(box_data_.Access()->has_auto_z_index_);
  }


  // HasCurrentBackdropFilterAnimation
  

  bool MutableHasCurrentBackdropFilterAnimationInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_backdrop_filter_animation_);
  }


  // HasCurrentFilterAnimation
  

  bool MutableHasCurrentFilterAnimationInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_filter_animation_);
  }


  // HasCurrentOpacityAnimation
  

  bool MutableHasCurrentOpacityAnimationInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_opacity_animation_);
  }


  // HasCurrentTransformAnimation
  

  bool MutableHasCurrentTransformAnimationInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->has_current_transform_animation_);
  }


  // HasExplicitlyInheritedProperties
  

  // HasRemUnits
  

  // HasSimpleUnderline
  bool HasSimpleUnderlineInternal() const {
    return static_cast<bool>(has_simple_underline_);
  }

  void SetHasSimpleUnderlineInternal(bool v) {
    has_simple_underline_ = static_cast<unsigned>(v);
  }

  bool MutableHasSimpleUnderlineInternal() {
    return static_cast<bool>(has_simple_underline_);
  }


  // HasVariableReferenceFromNonInheritedProperty
  

  // HasViewportUnits
  

  bool MutableHasViewportUnitsInternal() {
    return static_cast<bool>(has_viewport_units_);
  }


  // height
  

  void SetHeightInternal(Length&& v) {
    if (!(box_data_->height_ == v))
      box_data_.Access()->height_ = std::move(v);
  }
  Length& MutableHeightInternal() {
    return box_data_.Access()->height_;
  }


  // -webkit-highlight
  

  void SetHighlightInternal(AtomicString&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->highlight_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->highlight_ = std::move(v);
  }
  AtomicString& MutableHighlightInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->highlight_;
  }


  // -webkit-border-horizontal-spacing
  

  short MutableHorizontalBorderSpacingInternal() {
    return inherited_data_.Access()->horizontal_border_spacing_;
  }


  // HyphenationLimitAfter
  short HyphenationLimitAfterInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_after_;
  }

  void SetHyphenationLimitAfterInternal(short v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_after_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_after_ = v;
  }

  short MutableHyphenationLimitAfterInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_after_;
  }


  // HyphenationLimitBefore
  short HyphenationLimitBeforeInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_before_;
  }

  void SetHyphenationLimitBeforeInternal(short v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_before_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_before_ = v;
  }

  short MutableHyphenationLimitBeforeInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_before_;
  }


  // HyphenationLimitLines
  short HyphenationLimitLinesInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_lines_;
  }

  void SetHyphenationLimitLinesInternal(short v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_lines_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_lines_ = v;
  }

  short MutableHyphenationLimitLinesInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_limit_lines_;
  }


  // -webkit-hyphenate-character
  

  void SetHyphenationStringInternal(AtomicString&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_string_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_string_ = std::move(v);
  }
  AtomicString& MutableHyphenationStringInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->hyphenation_string_;
  }


  // hyphens
  

  Hyphens MutableHyphensInternal() {
    return static_cast<Hyphens>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->hyphens_);
  }


  // image-rendering
  

  EImageRendering MutableImageRenderingInternal() {
    return static_cast<EImageRendering>(rare_inherited_usage_less_than_40_percent_data_.Access()->image_rendering_);
  }


  // InheritedVariables
  const scoped_refptr<StyleInheritedVariables>& InheritedVariablesInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->inherited_variables_;
  }

  void SetInheritedVariablesInternal(scoped_refptr<StyleInheritedVariables>&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->inherited_variables_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->inherited_variables_ = std::move(v);
  }
  scoped_refptr<StyleInheritedVariables>& MutableInheritedVariablesInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->inherited_variables_;
  }


  // InitialData
  const scoped_refptr<StyleInitialData>& InitialDataInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->initial_data_;
  }

  void SetInitialDataInternal(scoped_refptr<StyleInitialData>&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->initial_data_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->initial_data_ = std::move(v);
  }
  scoped_refptr<StyleInitialData>& MutableInitialDataInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->initial_data_;
  }


  // InsideLink
  

  EInsideLink MutableInsideLinkInternal() {
    return static_cast<EInsideLink>(inside_link_);
  }


  // IsEnsuredInDisplayNone
  

  // IsLink
  

  // IsRunningBackdropFilterAnimationOnCompositor
  

  bool MutableIsRunningBackdropFilterAnimationOnCompositorInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_backdrop_filter_animation_on_compositor_);
  }


  // IsRunningFilterAnimationOnCompositor
  

  bool MutableIsRunningFilterAnimationOnCompositorInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_filter_animation_on_compositor_);
  }


  // IsRunningOpacityAnimationOnCompositor
  

  bool MutableIsRunningOpacityAnimationOnCompositorInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_opacity_animation_on_compositor_);
  }


  // IsRunningTransformAnimationOnCompositor
  

  bool MutableIsRunningTransformAnimationOnCompositorInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_running_transform_animation_on_compositor_);
  }


  // IsStackingContext
  

  bool MutableIsStackingContextInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->is_stacking_context_);
  }


  // isolation
  

  EIsolation MutableIsolationInternal() {
    return static_cast<EIsolation>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->isolation_);
  }


  // justify-content
  

  void SetJustifyContentInternal(StyleContentAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->justify_content_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->justify_content_ = std::move(v);
  }
  StyleContentAlignmentData& MutableJustifyContentInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->justify_content_;
  }


  // justify-items
  

  void SetJustifyItemsInternal(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_items_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_items_ = std::move(v);
  }
  StyleSelfAlignmentData& MutableJustifyItemsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_items_;
  }


  // justify-self
  

  void SetJustifySelfInternal(StyleSelfAlignmentData&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_self_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_self_ = std::move(v);
  }
  StyleSelfAlignmentData& MutableJustifySelfInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->justify_self_;
  }


  // left
  

  void SetLeftInternal(Length&& v) {
    if (!(surround_data_->left_ == v))
      surround_data_.Access()->left_ = std::move(v);
  }
  Length& MutableLeftInternal() {
    return surround_data_.Access()->left_;
  }


  // -webkit-line-break
  

  LineBreak MutableLineBreakInternal() {
    return static_cast<LineBreak>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->line_break_);
  }


  // -webkit-line-clamp
  

  void SetLineClampInternal(int&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->line_clamp_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->line_clamp_ = std::move(v);
  }
  int& MutableLineClampInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->line_clamp_;
  }


  // line-height
  const Length& LineHeightInternal() const {
    return inherited_data_->line_height_;
  }


  void SetLineHeightInternal(Length&& v) {
    if (!(inherited_data_->line_height_ == v))
      inherited_data_.Access()->line_height_ = std::move(v);
  }
  Length& MutableLineHeightInternal() {
    return inherited_data_.Access()->line_height_;
  }


  // line-height-step
  

  uint8_t MutableLineHeightStepInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->line_height_step_;
  }


  // list-style-image
  const Persistent<StyleImage>& ListStyleImageInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->list_style_image_;
  }

  void SetListStyleImageInternal(Persistent<StyleImage>&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->list_style_image_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->list_style_image_ = std::move(v);
  }
  Persistent<StyleImage>& MutableListStyleImageInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->list_style_image_;
  }


  // list-style-position
  

  EListStylePosition MutableListStylePositionInternal() {
    return static_cast<EListStylePosition>(list_style_position_);
  }


  // list-style-position
  

  bool MutableListStylePositionIsInheritedInternal() {
    return static_cast<bool>(list_style_position_is_inherited_);
  }


  // list-style-type
  

  EListStyleType MutableListStyleTypeInternal() {
    return static_cast<EListStyleType>(list_style_type_);
  }


  // -webkit-margin-after-collapse
  

  EMarginCollapse MutableMarginAfterCollapseInternal() {
    return static_cast<EMarginCollapse>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->margin_after_collapse_);
  }


  // -webkit-margin-before-collapse
  

  EMarginCollapse MutableMarginBeforeCollapseInternal() {
    return static_cast<EMarginCollapse>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->margin_before_collapse_);
  }


  // margin-bottom
  
  void SetMarginBottomInternal(const Length& v) {
    if (!(surround_data_->margin_bottom_ == v))
      surround_data_.Access()->margin_bottom_ = v;
  }

  void SetMarginBottomInternal(Length&& v) {
    if (!(surround_data_->margin_bottom_ == v))
      surround_data_.Access()->margin_bottom_ = std::move(v);
  }
  Length& MutableMarginBottomInternal() {
    return surround_data_.Access()->margin_bottom_;
  }


  // margin-left
  
  void SetMarginLeftInternal(const Length& v) {
    if (!(surround_data_->margin_left_ == v))
      surround_data_.Access()->margin_left_ = v;
  }

  void SetMarginLeftInternal(Length&& v) {
    if (!(surround_data_->margin_left_ == v))
      surround_data_.Access()->margin_left_ = std::move(v);
  }
  Length& MutableMarginLeftInternal() {
    return surround_data_.Access()->margin_left_;
  }


  // margin-right
  
  void SetMarginRightInternal(const Length& v) {
    if (!(surround_data_->margin_right_ == v))
      surround_data_.Access()->margin_right_ = v;
  }

  void SetMarginRightInternal(Length&& v) {
    if (!(surround_data_->margin_right_ == v))
      surround_data_.Access()->margin_right_ = std::move(v);
  }
  Length& MutableMarginRightInternal() {
    return surround_data_.Access()->margin_right_;
  }


  // margin-top
  
  void SetMarginTopInternal(const Length& v) {
    if (!(surround_data_->margin_top_ == v))
      surround_data_.Access()->margin_top_ = v;
  }

  void SetMarginTopInternal(Length&& v) {
    if (!(surround_data_->margin_top_ == v))
      surround_data_.Access()->margin_top_ = std::move(v);
  }
  Length& MutableMarginTopInternal() {
    return surround_data_.Access()->margin_top_;
  }


  // Mask
  const FillLayer& MaskInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_;
  }

  void SetMaskInternal(const FillLayer& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_ = v;
  }

  void SetMaskInternal(FillLayer&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_ = std::move(v);
  }
  FillLayer& MutableMaskInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_;
  }


  // MaskBoxImage
  const NinePieceImage& MaskBoxImageInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_;
  }

  void SetMaskBoxImageInternal(const NinePieceImage& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_box_image_ = v;
  }

  void SetMaskBoxImageInternal(NinePieceImage&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_box_image_ = std::move(v);
  }
  NinePieceImage& MutableMaskBoxImageInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->mask_box_image_;
  }


  // max-height
  

  void SetMaxHeightInternal(Length&& v) {
    if (!(box_data_->max_height_ == v))
      box_data_.Access()->max_height_ = std::move(v);
  }
  Length& MutableMaxHeightInternal() {
    return box_data_.Access()->max_height_;
  }


  // max-width
  

  void SetMaxWidthInternal(Length&& v) {
    if (!(box_data_->max_width_ == v))
      box_data_.Access()->max_width_ = std::move(v);
  }
  Length& MutableMaxWidthInternal() {
    return box_data_.Access()->max_width_;
  }


  // MayHaveMargin
  

  // MayHavePadding
  

  // min-height
  

  void SetMinHeightInternal(Length&& v) {
    if (!(box_data_->min_height_ == v))
      box_data_.Access()->min_height_ = std::move(v);
  }
  Length& MutableMinHeightInternal() {
    return box_data_.Access()->min_height_;
  }


  // min-width
  

  void SetMinWidthInternal(Length&& v) {
    if (!(box_data_->min_width_ == v))
      box_data_.Access()->min_width_ = std::move(v);
  }
  Length& MutableMinWidthInternal() {
    return box_data_.Access()->min_width_;
  }


  // NamedGridArea
  

  void SetNamedGridAreaInternal(NamedGridAreaMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_ = std::move(v);
  }
  NamedGridAreaMap& MutableNamedGridAreaInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_;
  }


  // NamedGridAreaColumnCount
  

  size_t MutableNamedGridAreaColumnCountInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_column_count_;
  }


  // NamedGridAreaRowCount
  

  size_t MutableNamedGridAreaRowCountInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_area_row_count_;
  }


  // NamedGridColumnLines
  

  void SetNamedGridColumnLinesInternal(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_column_lines_ = std::move(v);
  }
  NamedGridLinesMap& MutableNamedGridColumnLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_column_lines_;
  }


  // NamedGridRowLines
  

  void SetNamedGridRowLinesInternal(NamedGridLinesMap&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_row_lines_ = std::move(v);
  }
  NamedGridLinesMap& MutableNamedGridRowLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->named_grid_row_lines_;
  }


  // NonInheritedVariables
  const std::unique_ptr<StyleNonInheritedVariables>& NonInheritedVariablesInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->non_inherited_variables_;
  }

  void SetNonInheritedVariablesInternal(std::unique_ptr<StyleNonInheritedVariables>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->non_inherited_variables_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->non_inherited_variables_ = std::move(v);
  }
  std::unique_ptr<StyleNonInheritedVariables>& MutableNonInheritedVariablesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->non_inherited_variables_;
  }


  // object-fit
  

  EObjectFit MutableObjectFitInternal() {
    return static_cast<EObjectFit>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_fit_);
  }


  // object-position
  

  void SetObjectPositionInternal(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_position_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_position_ = std::move(v);
  }
  LengthPoint& MutableObjectPositionInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->object_position_;
  }


  // offset-anchor
  

  void SetOffsetAnchorInternal(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_anchor_ = std::move(v);
  }
  LengthPoint& MutableOffsetAnchorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_anchor_;
  }


  // offset-distance
  

  void SetOffsetDistanceInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_distance_ = std::move(v);
  }
  Length& MutableOffsetDistanceInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_distance_;
  }


  // offset-position
  

  void SetOffsetPositionInternal(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_position_ = std::move(v);
  }
  LengthPoint& MutableOffsetPositionInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_position_;
  }


  // offset-rotate
  

  void SetOffsetRotateInternal(StyleOffsetRotation&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_rotate_ = std::move(v);
  }
  StyleOffsetRotation& MutableOffsetRotateInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->offset_rotate_;
  }


  // opacity
  
  void SetOpacityInternal(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->opacity_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->opacity_ = v;
  }

  float MutableOpacityInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->opacity_;
  }


  // order
  
  void SetOrderInternal(int v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->order_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->order_ = v;
  }

  int MutableOrderInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->order_;
  }


  // OrderedNamedGridColumnLines
  

  void SetOrderedNamedGridColumnLinesInternal(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_column_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_column_lines_ = std::move(v);
  }
  OrderedNamedGridLines& MutableOrderedNamedGridColumnLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_column_lines_;
  }


  // OrderedNamedGridRowLines
  

  void SetOrderedNamedGridRowLinesInternal(OrderedNamedGridLines&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_row_lines_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_row_lines_ = std::move(v);
  }
  OrderedNamedGridLines& MutableOrderedNamedGridRowLinesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->grid_data_.Access()->ordered_named_grid_row_lines_;
  }


  // OriginalDisplay
  

  EDisplay MutableOriginalDisplayInternal() {
    return static_cast<EDisplay>(original_display_);
  }


  // orphans
  
  void SetOrphansInternal(short v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->orphans_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->orphans_ = v;
  }

  short MutableOrphansInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->orphans_;
  }


  // outline-color
  const Color& OutlineColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->outline_color_;
  }

  void SetOutlineColorInternal(const Color& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->outline_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->outline_color_ = v;
  }

  void SetOutlineColorInternal(Color&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->outline_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->outline_color_ = std::move(v);
  }
  Color& MutableOutlineColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->outline_color_;
  }


  // OutlineColorIsCurrentColor
  

  bool MutableOutlineColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->outline_color_is_current_color_);
  }


  // outline-offset
  int OutlineOffsetInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_offset_;
  }


  int MutableOutlineOffsetInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_offset_;
  }


  // outline-style
  

  EBorderStyle MutableOutlineStyleInternal() {
    return static_cast<EBorderStyle>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_style_);
  }


  // OutlineStyleIsAuto
  

  bool MutableOutlineStyleIsAutoInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->outline_style_is_auto_);
  }


  // outline-width
  const LayoutUnit& OutlineWidthInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_width_;
  }

  void SetOutlineWidthInternal(const LayoutUnit& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_width_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_width_ = v;
  }

  void SetOutlineWidthInternal(LayoutUnit&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->outline_width_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_width_ = std::move(v);
  }
  LayoutUnit& MutableOutlineWidthInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->outline_width_;
  }


  // overflow-anchor
  

  EOverflowAnchor MutableOverflowAnchorInternal() {
    return static_cast<EOverflowAnchor>(overflow_anchor_);
  }


  // overflow-wrap
  

  EOverflowWrap MutableOverflowWrapInternal() {
    return static_cast<EOverflowWrap>(rare_inherited_usage_less_than_40_percent_data_.Access()->overflow_wrap_);
  }


  // overflow-x
  

  EOverflow MutableOverflowXInternal() {
    return static_cast<EOverflow>(overflow_x_);
  }


  // overflow-y
  

  EOverflow MutableOverflowYInternal() {
    return static_cast<EOverflow>(overflow_y_);
  }


  // overscroll-behavior-x
  

  EOverscrollBehavior MutableOverscrollBehaviorXInternal() {
    return static_cast<EOverscrollBehavior>(overscroll_behavior_x_);
  }


  // overscroll-behavior-y
  

  EOverscrollBehavior MutableOverscrollBehaviorYInternal() {
    return static_cast<EOverscrollBehavior>(overscroll_behavior_y_);
  }


  // padding-bottom
  
  void SetPaddingBottomInternal(const Length& v) {
    if (!(surround_data_->padding_bottom_ == v))
      surround_data_.Access()->padding_bottom_ = v;
  }

  void SetPaddingBottomInternal(Length&& v) {
    if (!(surround_data_->padding_bottom_ == v))
      surround_data_.Access()->padding_bottom_ = std::move(v);
  }
  Length& MutablePaddingBottomInternal() {
    return surround_data_.Access()->padding_bottom_;
  }


  // padding-left
  
  void SetPaddingLeftInternal(const Length& v) {
    if (!(surround_data_->padding_left_ == v))
      surround_data_.Access()->padding_left_ = v;
  }

  void SetPaddingLeftInternal(Length&& v) {
    if (!(surround_data_->padding_left_ == v))
      surround_data_.Access()->padding_left_ = std::move(v);
  }
  Length& MutablePaddingLeftInternal() {
    return surround_data_.Access()->padding_left_;
  }


  // padding-right
  
  void SetPaddingRightInternal(const Length& v) {
    if (!(surround_data_->padding_right_ == v))
      surround_data_.Access()->padding_right_ = v;
  }

  void SetPaddingRightInternal(Length&& v) {
    if (!(surround_data_->padding_right_ == v))
      surround_data_.Access()->padding_right_ = std::move(v);
  }
  Length& MutablePaddingRightInternal() {
    return surround_data_.Access()->padding_right_;
  }


  // padding-top
  
  void SetPaddingTopInternal(const Length& v) {
    if (!(surround_data_->padding_top_ == v))
      surround_data_.Access()->padding_top_ = v;
  }

  void SetPaddingTopInternal(Length&& v) {
    if (!(surround_data_->padding_top_ == v))
      surround_data_.Access()->padding_top_ = std::move(v);
  }
  Length& MutablePaddingTopInternal() {
    return surround_data_.Access()->padding_top_;
  }


  // PageSize
  

  void SetPageSizeInternal(FloatSize&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->page_size_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_ = std::move(v);
  }
  FloatSize& MutablePageSizeInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_;
  }


  // PageSizeType
  

  EPageSizeType MutablePageSizeTypeInternal() {
    return static_cast<EPageSizeType>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->page_size_type_);
  }


  // PaintImages
  const std::unique_ptr<PaintImages>& PaintImagesInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->paint_images_;
  }

  void SetPaintImagesInternal(std::unique_ptr<PaintImages>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->paint_images_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->paint_images_ = std::move(v);
  }
  std::unique_ptr<PaintImages>& MutablePaintImagesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->paint_images_;
  }


  // perspective
  

  float MutablePerspectiveInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->perspective_;
  }


  // perspective-origin
  

  void SetPerspectiveOriginInternal(LengthPoint&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->perspective_origin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->perspective_origin_ = std::move(v);
  }
  LengthPoint& MutablePerspectiveOriginInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->perspective_origin_;
  }


  // pointer-events
  

  EPointerEvents MutablePointerEventsInternal() {
    return static_cast<EPointerEvents>(pointer_events_);
  }


  // pointer-events
  

  bool MutablePointerEventsIsInheritedInternal() {
    return static_cast<bool>(pointer_events_is_inherited_);
  }


  // position
  

  EPosition MutablePositionInternal() {
    return static_cast<EPosition>(position_);
  }


  // -webkit-print-color-adjust
  

  EPrintColorAdjust MutablePrintColorAdjustInternal() {
    return static_cast<EPrintColorAdjust>(print_color_adjust_);
  }


  // -webkit-print-color-adjust
  

  bool MutablePrintColorAdjustIsInheritedInternal() {
    return static_cast<bool>(print_color_adjust_is_inherited_);
  }


  // PseudoBits
  unsigned PseudoBitsInternal() const {
    return static_cast<unsigned>(pseudo_bits_);
  }

  void SetPseudoBitsInternal(unsigned v) {
    pseudo_bits_ = static_cast<unsigned>(v);
  }

  unsigned MutablePseudoBitsInternal() {
    return static_cast<unsigned>(pseudo_bits_);
  }


  // RequiresAcceleratedCompositingForExternalReasons
  

  bool MutableRequiresAcceleratedCompositingForExternalReasonsInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->requires_accelerated_compositing_for_external_reasons_);
  }


  // resize
  

  EResize MutableResizeInternal() {
    return static_cast<EResize>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->resize_);
  }


  // image-orientation
  

  bool MutableRespectImageOrientationInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->respect_image_orientation_);
  }


  // right
  

  void SetRightInternal(Length&& v) {
    if (!(surround_data_->right_ == v))
      surround_data_.Access()->right_ = std::move(v);
  }
  Length& MutableRightInternal() {
    return surround_data_.Access()->right_;
  }


  // row-gap
  

  void SetRowGapInternal(GapLength&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->row_gap_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->row_gap_ = std::move(v);
  }
  GapLength& MutableRowGapInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->row_gap_;
  }


  // -webkit-rtl-ordering
  

  EOrder MutableRtlOrderingInternal() {
    return static_cast<EOrder>(rtl_ordering_);
  }


  // -webkit-rtl-ordering
  

  bool MutableRtlOrderingIsInheritedInternal() {
    return static_cast<bool>(rtl_ordering_is_inherited_);
  }


  // -webkit-ruby-position
  

  RubyPosition MutableRubyPositionInternal() {
    return static_cast<RubyPosition>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->ruby_position_);
  }


  // scroll-behavior
  

  ScrollBehavior MutableScrollBehaviorInternal() {
    return static_cast<ScrollBehavior>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_behavior_);
  }


  // scroll-customization
  

  scroll_customization::ScrollDirection MutableScrollCustomizationInternal() {
    return static_cast<scroll_customization::ScrollDirection>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_customization_);
  }


  // scroll-margin-bottom
  

  float MutableScrollMarginBottomInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_bottom_;
  }


  // scroll-margin-left
  

  float MutableScrollMarginLeftInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_left_;
  }


  // scroll-margin-right
  

  float MutableScrollMarginRightInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_right_;
  }


  // scroll-margin-top
  

  float MutableScrollMarginTopInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_margin_top_;
  }


  // scroll-padding-bottom
  

  void SetScrollPaddingBottomInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_bottom_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_bottom_ = std::move(v);
  }
  Length& MutableScrollPaddingBottomInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_bottom_;
  }


  // scroll-padding-left
  

  void SetScrollPaddingLeftInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_left_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_left_ = std::move(v);
  }
  Length& MutableScrollPaddingLeftInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_left_;
  }


  // scroll-padding-right
  

  void SetScrollPaddingRightInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_right_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_right_ = std::move(v);
  }
  Length& MutableScrollPaddingRightInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_right_;
  }


  // scroll-padding-top
  

  void SetScrollPaddingTopInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_padding_top_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_top_ = std::move(v);
  }
  Length& MutableScrollPaddingTopInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_padding_top_;
  }


  // scroll-snap-align
  

  void SetScrollSnapAlignInternal(cc::ScrollSnapAlign&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->scroll_snap_align_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_snap_align_ = std::move(v);
  }
  cc::ScrollSnapAlign& MutableScrollSnapAlignInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->scroll_snap_align_;
  }


  // scroll-snap-stop
  

  EScrollSnapStop MutableScrollSnapStopInternal() {
    return static_cast<EScrollSnapStop>(scroll_snap_stop_);
  }


  // scroll-snap-type
  

  void SetScrollSnapTypeInternal(cc::ScrollSnapType&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scroll_snap_type_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_snap_type_ = std::move(v);
  }
  cc::ScrollSnapType& MutableScrollSnapTypeInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->scroll_snap_type_;
  }


  // SelfOrAncestorHasDirAutoAttribute
  

  bool MutableSelfOrAncestorHasDirAutoAttributeInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->self_or_ancestor_has_dir_auto_attribute_);
  }


  // shape-image-threshold
  
  void SetShapeImageThresholdInternal(float v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_image_threshold_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_image_threshold_ = v;
  }

  float MutableShapeImageThresholdInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_image_threshold_;
  }


  // shape-margin
  

  void SetShapeMarginInternal(Length&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_margin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_margin_ = std::move(v);
  }
  Length& MutableShapeMarginInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_margin_;
  }


  // shape-outside
  const Persistent<ShapeValue>& ShapeOutsideInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_outside_;
  }

  void SetShapeOutsideInternal(Persistent<ShapeValue>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_outside_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_outside_ = std::move(v);
  }
  Persistent<ShapeValue>& MutableShapeOutsideInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->shape_outside_;
  }


  // speak
  

  ESpeak MutableSpeakInternal() {
    return static_cast<ESpeak>(rare_inherited_usage_less_than_40_percent_data_.Access()->speak_);
  }


  // StyleType
  unsigned StyleTypeInternal() const {
    return static_cast<unsigned>(style_type_);
  }

  void SetStyleTypeInternal(unsigned v) {
    style_type_ = static_cast<unsigned>(v);
  }

  unsigned MutableStyleTypeInternal() {
    return static_cast<unsigned>(style_type_);
  }


  // SubtreeIsSticky
  

  bool MutableSubtreeIsStickyInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->subtree_is_sticky_);
  }


  // SubtreeWillChangeContents
  

  bool MutableSubtreeWillChangeContentsInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->subtree_will_change_contents_);
  }


  // tab-size
  
  void SetTabSizeInternal(const TabSize& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->tab_size_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->tab_size_ = v;
  }

  void SetTabSizeInternal(TabSize&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->tab_size_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->tab_size_ = std::move(v);
  }
  TabSize& MutableTabSizeInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->tab_size_;
  }


  // table-layout
  

  ETableLayout MutableTableLayoutInternal() {
    return static_cast<ETableLayout>(table_layout_);
  }


  // -webkit-tap-highlight-color
  

  void SetTapHighlightColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->tap_highlight_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->tap_highlight_color_ = std::move(v);
  }
  Color& MutableTapHighlightColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->tap_highlight_color_;
  }


  // text-align
  

  ETextAlign MutableTextAlignInternal() {
    return static_cast<ETextAlign>(text_align_);
  }


  // text-align-last
  

  ETextAlignLast MutableTextAlignLastInternal() {
    return static_cast<ETextAlignLast>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_align_last_);
  }


  // TextAutosizingMultiplier
  
  void SetTextAutosizingMultiplierInternal(float v) {
    if (!(inherited_data_->text_autosizing_multiplier_ == v))
      inherited_data_.Access()->text_autosizing_multiplier_ = v;
  }

  float MutableTextAutosizingMultiplierInternal() {
    return inherited_data_.Access()->text_autosizing_multiplier_;
  }


  // text-combine-upright
  

  ETextCombine MutableTextCombineInternal() {
    return static_cast<ETextCombine>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_combine_);
  }


  // text-decoration-line
  

  // text-decoration-color
  

  void SetTextDecorationColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_color_ = std::move(v);
  }
  StyleColor& MutableTextDecorationColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_color_;
  }


  // text-decoration-skip-ink
  

  ETextDecorationSkipInk MutableTextDecorationSkipInkInternal() {
    return static_cast<ETextDecorationSkipInk>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_skip_ink_);
  }


  // text-decoration-style
  

  ETextDecorationStyle MutableTextDecorationStyleInternal() {
    return static_cast<ETextDecorationStyle>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->text_decoration_style_);
  }


  // -webkit-text-emphasis-color
  const Color& TextEmphasisColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_color_;
  }

  void SetTextEmphasisColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_ = v;
  }

  void SetTextEmphasisColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_ = std::move(v);
  }
  Color& MutableTextEmphasisColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_;
  }


  // TextEmphasisColorIsCurrentColor
  bool TextEmphasisColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_color_is_current_color_);
  }

  void SetTextEmphasisColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableTextEmphasisColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_color_is_current_color_);
  }


  // TextEmphasisCustomMark
  

  void SetTextEmphasisCustomMarkInternal(AtomicString&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_custom_mark_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_custom_mark_ = std::move(v);
  }
  AtomicString& MutableTextEmphasisCustomMarkInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_custom_mark_;
  }


  // TextEmphasisFill
  

  TextEmphasisFill MutableTextEmphasisFillInternal() {
    return static_cast<TextEmphasisFill>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_fill_);
  }


  // TextEmphasisMark
  TextEmphasisMark TextEmphasisMarkInternal() const {
    return static_cast<TextEmphasisMark>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_mark_);
  }

  void SetTextEmphasisMarkInternal(TextEmphasisMark v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_mark_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_mark_ = static_cast<unsigned>(v);
  }

  TextEmphasisMark MutableTextEmphasisMarkInternal() {
    return static_cast<TextEmphasisMark>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_mark_);
  }


  // -webkit-text-emphasis-position
  

  TextEmphasisPosition MutableTextEmphasisPositionInternal() {
    return static_cast<TextEmphasisPosition>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_emphasis_position_);
  }


  // -webkit-text-fill-color
  const Color& TextFillColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_fill_color_;
  }

  void SetTextFillColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_fill_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_ = v;
  }

  void SetTextFillColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_fill_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_ = std::move(v);
  }
  Color& MutableTextFillColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_;
  }


  // TextFillColorIsCurrentColor
  bool TextFillColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_fill_color_is_current_color_);
  }

  void SetTextFillColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_fill_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableTextFillColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_fill_color_is_current_color_);
  }


  // text-indent
  

  void SetTextIndentInternal(Length&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->text_indent_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->text_indent_ = std::move(v);
  }
  Length& MutableTextIndentInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->text_indent_;
  }


  // TextIndentLine
  

  TextIndentLine MutableTextIndentLineInternal() {
    return static_cast<TextIndentLine>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_indent_line_);
  }


  // TextIndentType
  

  TextIndentType MutableTextIndentTypeInternal() {
    return static_cast<TextIndentType>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_indent_type_);
  }


  // text-justify
  

  TextJustify MutableTextJustifyInternal() {
    return static_cast<TextJustify>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_justify_);
  }


  // text-orientation
  

  ETextOrientation MutableTextOrientationInternal() {
    return static_cast<ETextOrientation>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_orientation_);
  }


  // text-overflow
  

  ETextOverflow MutableTextOverflowInternal() {
    return static_cast<ETextOverflow>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->text_overflow_);
  }


  // -webkit-text-security
  

  ETextSecurity MutableTextSecurityInternal() {
    return static_cast<ETextSecurity>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_security_);
  }


  // text-size-adjust
  

  void SetTextSizeAdjustInternal(TextSizeAdjust&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->text_size_adjust_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->text_size_adjust_ = std::move(v);
  }
  TextSizeAdjust& MutableTextSizeAdjustInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->text_size_adjust_;
  }


  // -webkit-text-stroke-color
  const Color& TextStrokeColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_color_;
  }

  void SetTextStrokeColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_ = v;
  }

  void SetTextStrokeColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_ = std::move(v);
  }
  Color& MutableTextStrokeColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_;
  }


  // TextStrokeColorIsCurrentColor
  bool TextStrokeColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_color_is_current_color_);
  }

  void SetTextStrokeColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableTextStrokeColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_color_is_current_color_);
  }


  // -webkit-text-stroke-width
  

  float MutableTextStrokeWidthInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->text_stroke_width_;
  }


  // text-transform
  

  ETextTransform MutableTextTransformInternal() {
    return static_cast<ETextTransform>(text_transform_);
  }


  // text-transform
  

  bool MutableTextTransformIsInheritedInternal() {
    return static_cast<bool>(text_transform_is_inherited_);
  }


  // text-underline-position
  

  unsigned MutableTextUnderlinePositionInternal() {
    return static_cast<unsigned>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_100_percent_data_.Access()->text_underline_position_);
  }


  // top
  

  void SetTopInternal(Length&& v) {
    if (!(surround_data_->top_ == v))
      surround_data_.Access()->top_ = std::move(v);
  }
  Length& MutableTopInternal() {
    return surround_data_.Access()->top_;
  }


  // touch-action
  

  TouchAction MutableTouchActionInternal() {
    return static_cast<TouchAction>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->touch_action_);
  }


  // transform
  

  void SetTransformInternal(TransformOperations&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->transform_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->transform_ = std::move(v);
  }
  TransformOperations& MutableTransformInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->transform_;
  }


  // transform-box
  

  ETransformBox MutableTransformBoxInternal() {
    return static_cast<ETransformBox>(transform_box_);
  }


  // transform-origin
  

  void SetTransformOriginInternal(TransformOrigin&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->transform_origin_ = std::move(v);
  }
  TransformOrigin& MutableTransformOriginInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->transform_origin_;
  }


  // transform-style
  

  ETransformStyle3D MutableTransformStyle3DInternal() {
    return static_cast<ETransformStyle3D>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_33_percent_data_.Access()->rare_non_inherited_usage_less_than_100_percent_data_.Access()->transform_style_3d_);
  }


  // Transitions
  const std::unique_ptr<CSSTransitionData>& TransitionsInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->transitions_;
  }

  void SetTransitionsInternal(std::unique_ptr<CSSTransitionData>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->transitions_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->transitions_ = std::move(v);
  }
  std::unique_ptr<CSSTransitionData>& MutableTransitionsInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->transitions_;
  }


  // unicode-bidi
  

  UnicodeBidi MutableUnicodeBidiInternal() {
    return static_cast<UnicodeBidi>(unicode_bidi_);
  }


  // -webkit-user-drag
  

  EUserDrag MutableUserDragInternal() {
    return static_cast<EUserDrag>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->user_drag_);
  }


  // -webkit-user-modify
  

  EUserModify MutableUserModifyInternal() {
    return static_cast<EUserModify>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->user_modify_);
  }


  // user-select
  

  EUserSelect MutableUserSelectInternal() {
    return static_cast<EUserSelect>(rare_inherited_usage_less_than_40_percent_data_.Access()->user_select_);
  }


  // VerticalAlign
  unsigned VerticalAlignInternal() const {
    return static_cast<unsigned>(vertical_align_);
  }

  void SetVerticalAlignInternal(unsigned v) {
    vertical_align_ = static_cast<unsigned>(v);
  }

  unsigned MutableVerticalAlignInternal() {
    return static_cast<unsigned>(vertical_align_);
  }


  // VerticalAlignLength
  
  void SetVerticalAlignLengthInternal(const Length& v) {
    if (!(box_data_->vertical_align_length_ == v))
      box_data_.Access()->vertical_align_length_ = v;
  }

  void SetVerticalAlignLengthInternal(Length&& v) {
    if (!(box_data_->vertical_align_length_ == v))
      box_data_.Access()->vertical_align_length_ = std::move(v);
  }
  Length& MutableVerticalAlignLengthInternal() {
    return box_data_.Access()->vertical_align_length_;
  }


  // -webkit-border-vertical-spacing
  

  short MutableVerticalBorderSpacingInternal() {
    return inherited_data_.Access()->vertical_border_spacing_;
  }


  // visibility
  

  EVisibility MutableVisibilityInternal() {
    return static_cast<EVisibility>(visibility_);
  }


  // visibility
  

  bool MutableVisibilityIsInheritedInternal() {
    return static_cast<bool>(visibility_is_inherited_);
  }


  // VisitedLinkBackgroundColor
  const StyleColor& VisitedLinkBackgroundColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_background_color_;
  }

  void SetVisitedLinkBackgroundColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_background_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_background_color_ = v;
  }

  void SetVisitedLinkBackgroundColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_background_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_background_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkBackgroundColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_background_color_;
  }


  // VisitedLinkBorderBottomColor
  const StyleColor& VisitedLinkBorderBottomColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_bottom_color_;
  }

  void SetVisitedLinkBorderBottomColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_bottom_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_bottom_color_ = v;
  }

  void SetVisitedLinkBorderBottomColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_bottom_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_bottom_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkBorderBottomColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_bottom_color_;
  }


  // VisitedLinkBorderLeftColor
  const StyleColor& VisitedLinkBorderLeftColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_left_color_;
  }

  void SetVisitedLinkBorderLeftColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_left_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_left_color_ = v;
  }

  void SetVisitedLinkBorderLeftColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_left_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_left_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkBorderLeftColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_left_color_;
  }


  // VisitedLinkBorderRightColor
  const StyleColor& VisitedLinkBorderRightColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_right_color_;
  }

  void SetVisitedLinkBorderRightColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_right_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_right_color_ = v;
  }

  void SetVisitedLinkBorderRightColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_right_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_right_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkBorderRightColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_right_color_;
  }


  // VisitedLinkBorderTopColor
  const StyleColor& VisitedLinkBorderTopColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_top_color_;
  }

  void SetVisitedLinkBorderTopColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_top_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_top_color_ = v;
  }

  void SetVisitedLinkBorderTopColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_border_top_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_top_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkBorderTopColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_border_top_color_;
  }


  // VisitedLinkCaretColor
  const Color& VisitedLinkCaretColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_;
  }

  void SetVisitedLinkCaretColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_ = v;
  }

  void SetVisitedLinkCaretColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_ = std::move(v);
  }
  Color& MutableVisitedLinkCaretColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_;
  }


  // VisitedLinkCaretColorIsAuto
  bool VisitedLinkCaretColorIsAutoInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_is_auto_);
  }

  void SetVisitedLinkCaretColorIsAutoInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_is_auto_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_is_auto_ = static_cast<unsigned>(v);
  }

  bool MutableVisitedLinkCaretColorIsAutoInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_is_auto_);
  }


  // VisitedLinkCaretColorIsCurrentColor
  bool VisitedLinkCaretColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_is_current_color_);
  }

  void SetVisitedLinkCaretColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_caret_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableVisitedLinkCaretColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_caret_color_is_current_color_);
  }


  // VisitedLinkColor
  

  void SetVisitedLinkColorInternal(Color&& v) {
    if (!(inherited_data_->visited_link_color_ == v))
      inherited_data_.Access()->visited_link_color_ = std::move(v);
  }
  Color& MutableVisitedLinkColorInternal() {
    return inherited_data_.Access()->visited_link_color_;
  }


  // VisitedLinkColumnRuleColor
  const StyleColor& VisitedLinkColumnRuleColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->visited_link_column_rule_color_;
  }

  void SetVisitedLinkColumnRuleColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->visited_link_column_rule_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->visited_link_column_rule_color_ = v;
  }

  void SetVisitedLinkColumnRuleColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->visited_link_column_rule_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->visited_link_column_rule_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkColumnRuleColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->multi_col_data_.Access()->visited_link_column_rule_color_;
  }


  // VisitedLinkOutlineColor
  const StyleColor& VisitedLinkOutlineColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_outline_color_;
  }

  void SetVisitedLinkOutlineColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_outline_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_outline_color_ = v;
  }

  void SetVisitedLinkOutlineColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_outline_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_outline_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkOutlineColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_outline_color_;
  }


  // VisitedLinkTextDecorationColor
  const StyleColor& VisitedLinkTextDecorationColorInternal() const {
    return rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_text_decoration_color_;
  }

  void SetVisitedLinkTextDecorationColorInternal(const StyleColor& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_text_decoration_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_text_decoration_color_ = v;
  }

  void SetVisitedLinkTextDecorationColorInternal(StyleColor&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_text_decoration_color_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_text_decoration_color_ = std::move(v);
  }
  StyleColor& MutableVisitedLinkTextDecorationColorInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->visited_link_text_decoration_color_;
  }


  // VisitedLinkTextEmphasisColor
  const Color& VisitedLinkTextEmphasisColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_emphasis_color_;
  }

  void SetVisitedLinkTextEmphasisColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_emphasis_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_ = v;
  }

  void SetVisitedLinkTextEmphasisColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_emphasis_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_ = std::move(v);
  }
  Color& MutableVisitedLinkTextEmphasisColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_;
  }


  // VisitedLinkTextEmphasisColorIsCurrentColor
  bool VisitedLinkTextEmphasisColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_emphasis_color_is_current_color_);
  }

  void SetVisitedLinkTextEmphasisColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_emphasis_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableVisitedLinkTextEmphasisColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_emphasis_color_is_current_color_);
  }


  // VisitedLinkTextFillColor
  const Color& VisitedLinkTextFillColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_fill_color_;
  }

  void SetVisitedLinkTextFillColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_fill_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_ = v;
  }

  void SetVisitedLinkTextFillColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_fill_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_ = std::move(v);
  }
  Color& MutableVisitedLinkTextFillColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_;
  }


  // VisitedLinkTextFillColorIsCurrentColor
  bool VisitedLinkTextFillColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_fill_color_is_current_color_);
  }

  void SetVisitedLinkTextFillColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_fill_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableVisitedLinkTextFillColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_fill_color_is_current_color_);
  }


  // VisitedLinkTextStrokeColor
  const Color& VisitedLinkTextStrokeColorInternal() const {
    return rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_stroke_color_;
  }

  void SetVisitedLinkTextStrokeColorInternal(const Color& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_stroke_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_ = v;
  }

  void SetVisitedLinkTextStrokeColorInternal(Color&& v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_stroke_color_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_ = std::move(v);
  }
  Color& MutableVisitedLinkTextStrokeColorInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_;
  }


  // VisitedLinkTextStrokeColorIsCurrentColor
  bool VisitedLinkTextStrokeColorIsCurrentColorInternal() const {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_stroke_color_is_current_color_);
  }

  void SetVisitedLinkTextStrokeColorIsCurrentColorInternal(bool v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->visited_link_text_stroke_color_is_current_color_ == static_cast<unsigned>(v)))
      rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_is_current_color_ = static_cast<unsigned>(v);
  }

  bool MutableVisitedLinkTextStrokeColorIsCurrentColorInternal() {
    return static_cast<bool>(rare_inherited_usage_less_than_40_percent_data_.Access()->rare_inherited_usage_less_than_40_percent_sub_data_.Access()->visited_link_text_stroke_color_is_current_color_);
  }


  // white-space
  

  // white-space
  

  bool MutableWhiteSpaceIsInheritedInternal() {
    return static_cast<bool>(white_space_is_inherited_);
  }


  // widows
  
  void SetWidowsInternal(short v) {
    if (!(rare_inherited_usage_less_than_40_percent_data_->widows_ == v))
      rare_inherited_usage_less_than_40_percent_data_.Access()->widows_ = v;
  }

  short MutableWidowsInternal() {
    return rare_inherited_usage_less_than_40_percent_data_.Access()->widows_;
  }


  // width
  

  void SetWidthInternal(Length&& v) {
    if (!(box_data_->width_ == v))
      box_data_.Access()->width_ = std::move(v);
  }
  Length& MutableWidthInternal() {
    return box_data_.Access()->width_;
  }


  // WillChangeContents
  

  bool MutableWillChangeContentsInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_contents_);
  }


  // WillChangeProperties
  

  void SetWillChangePropertiesInternal(Vector<CSSPropertyID>&& v) {
    if (!(rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->will_change_data_->will_change_properties_ == v))
      rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_properties_ = std::move(v);
  }
  Vector<CSSPropertyID>& MutableWillChangePropertiesInternal() {
    return rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_properties_;
  }


  // WillChangeScrollPosition
  

  bool MutableWillChangeScrollPositionInternal() {
    return static_cast<bool>(rare_non_inherited_usage_less_than_13_percent_data_.Access()->rare_non_inherited_usage_less_than_13_percent_sub_data_.Access()->will_change_data_.Access()->will_change_scroll_position_);
  }


  // word-break
  

  EWordBreak MutableWordBreakInternal() {
    return static_cast<EWordBreak>(rare_inherited_usage_less_than_40_percent_data_.Access()->word_break_);
  }


  // writing-mode
  

  WritingMode MutableWritingModeInternal() {
    return static_cast<WritingMode>(writing_mode_);
  }


  // z-index
  
  void SetZIndexInternal(int v) {
    if (!(box_data_->z_index_ == v))
      box_data_.Access()->z_index_ = v;
  }

  int MutableZIndexInternal() {
    return box_data_.Access()->z_index_;
  }


  // zoom
  

  float MutableZoomInternal() {
    return visual_data_.Access()->zoom_;
  }



  ~ComputedStyleBase() = default;

 private:
  // Storage.
  DataRef<StyleRareNonInheritedUsageLessThan13PercentData> rare_non_inherited_usage_less_than_13_percent_data_;
  DataRef<StyleBoxData> box_data_;
  DataRef<StyleSurroundData> surround_data_;
  DataRef<StyleVisualData> visual_data_;
  DataRef<StyleBackgroundData> background_data_;
  DataRef<StyleInheritedData> inherited_data_;
  DataRef<StyleRareInheritedUsageLessThan40PercentData> rare_inherited_usage_less_than_40_percent_data_;

  unsigned pseudo_bits_ : 7; // unsigned
  unsigned white_space_ : 7; // EWhiteSpace
  unsigned cursor_ : 6; // ECursor
  unsigned list_style_type_ : 6; // EListStyleType
  unsigned style_type_ : 6; // unsigned
  unsigned display_ : 5; // EDisplay
  unsigned original_display_ : 5; // EDisplay
  unsigned break_after_ : 4; // EBreakBetween
  unsigned break_before_ : 4; // EBreakBetween
  unsigned pointer_events_ : 4; // EPointerEvents
  unsigned text_align_ : 4; // ETextAlign
  unsigned vertical_align_ : 4; // unsigned
  unsigned break_inside_ : 2; // EBreakInside
  unsigned clear_ : 3; // EClear
  unsigned floating_ : 3; // EFloat
  unsigned overflow_x_ : 3; // EOverflow
  unsigned overflow_y_ : 3; // EOverflow
  unsigned position_ : 3; // EPosition
  unsigned unicode_bidi_ : 3; // UnicodeBidi
  unsigned inside_link_ : 2; // EInsideLink
  unsigned overflow_anchor_ : 2; // EOverflowAnchor
  unsigned overscroll_behavior_x_ : 2; // EOverscrollBehavior
  unsigned overscroll_behavior_y_ : 2; // EOverscrollBehavior
  unsigned text_transform_ : 2; // ETextTransform
  unsigned visibility_ : 2; // EVisibility
  unsigned writing_mode_ : 2; // WritingMode
  unsigned affected_by_active_ : 1; // bool
  unsigned affected_by_drag_ : 1; // bool
  unsigned affected_by_focus_within_ : 1; // bool
  unsigned affected_by_hover_ : 1; // bool
  unsigned border_collapse_ : 1; // EBorderCollapse
  unsigned border_collapse_is_inherited_ : 1; // bool
  unsigned box_direction_ : 1; // EBoxDirection
  unsigned box_direction_is_inherited_ : 1; // bool
  unsigned caption_side_ : 1; // ECaptionSide
  unsigned caption_side_is_inherited_ : 1; // bool
  unsigned dark_color_scheme_ : 1; // bool
  unsigned direction_ : 1; // TextDirection
  unsigned empty_cells_ : 1; // EEmptyCells
  unsigned empty_cells_is_inherited_ : 1; // bool
  unsigned has_attr_content_ : 1; // bool
  mutable unsigned has_explicitly_inherited_properties_ : 1; // bool
  unsigned has_rem_units_ : 1; // bool
  unsigned has_simple_underline_ : 1; // bool
  unsigned has_variable_reference_from_non_inherited_property_ : 1; // bool
  unsigned has_viewport_units_ : 1; // bool
  unsigned is_ensured_in_display_none_ : 1; // bool
  unsigned is_link_ : 1; // bool
  unsigned list_style_position_ : 1; // EListStylePosition
  unsigned list_style_position_is_inherited_ : 1; // bool
  unsigned may_have_margin_ : 1; // bool
  unsigned may_have_padding_ : 1; // bool
  unsigned pointer_events_is_inherited_ : 1; // bool
  unsigned print_color_adjust_ : 1; // EPrintColorAdjust
  unsigned print_color_adjust_is_inherited_ : 1; // bool
  unsigned rtl_ordering_ : 1; // EOrder
  unsigned rtl_ordering_is_inherited_ : 1; // bool
  unsigned scroll_snap_stop_ : 1; // EScrollSnapStop
  unsigned table_layout_ : 1; // ETableLayout
  unsigned text_transform_is_inherited_ : 1; // bool
  unsigned transform_box_ : 1; // ETransformBox
  unsigned visibility_is_inherited_ : 1; // bool
  unsigned white_space_is_inherited_ : 1; // bool
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_COMPUTED_STYLE_BASE_H_
