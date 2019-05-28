// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/style/templates/computed_style_base.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_group_config.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/css_properties_ranking.json5
//   ../../third_party/blink/renderer/core/css/css_value_keywords.json5
//   ../../third_party/blink/renderer/core/style/computed_style_diff_functions.json5
//   ../../third_party/blink/renderer/core/style/computed_style_extra_fields.json5


#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/core/style/computed_style_base.h"
#include "third_party/blink/renderer/platform/wtf/size_assertions.h"

namespace blink {

struct SameSizeVerifierForComputedStyleBase {
  void* data_refs[7];
  unsigned bit_fields[5];
};

// If this fails, the packing algorithm in make_computed_style_base.py has
// failed to produce the optimal packed size. To fix, update the algorithm to
// ensure that the buckets are placed so that each takes up at most 1 word.
ASSERT_SIZE(ComputedStyleBase, SameSizeVerifierForComputedStyleBase);

// Constructor and destructor are protected so that only the parent class ComputedStyle
// can instantiate this class.
ComputedStyleBase::ComputedStyleBase() :
    pseudo_bits_(static_cast<unsigned>(kPseudoIdNone))
    , white_space_(static_cast<unsigned>(EWhiteSpace::kNormal))
    , cursor_(static_cast<unsigned>(ECursor::kAuto))
    , list_style_type_(static_cast<unsigned>(EListStyleType::kDisc))
    , style_type_(static_cast<unsigned>(PseudoId::kPseudoIdNone))
    , display_(static_cast<unsigned>(EDisplay::kInline))
    , original_display_(static_cast<unsigned>(EDisplay::kInline))
    , break_after_(static_cast<unsigned>(EBreakBetween::kAuto))
    , break_before_(static_cast<unsigned>(EBreakBetween::kAuto))
    , pointer_events_(static_cast<unsigned>(EPointerEvents::kAuto))
    , text_align_(static_cast<unsigned>(ETextAlign::kStart))
    , vertical_align_(static_cast<unsigned>(static_cast<unsigned>(EVerticalAlign::kBaseline)))
    , break_inside_(static_cast<unsigned>(EBreakInside::kAuto))
    , clear_(static_cast<unsigned>(EClear::kNone))
    , floating_(static_cast<unsigned>(EFloat::kNone))
    , overflow_x_(static_cast<unsigned>(EOverflow::kVisible))
    , overflow_y_(static_cast<unsigned>(EOverflow::kVisible))
    , position_(static_cast<unsigned>(EPosition::kStatic))
    , unicode_bidi_(static_cast<unsigned>(UnicodeBidi::kNormal))
    , inside_link_(static_cast<unsigned>(EInsideLink::kNotInsideLink))
    , overflow_anchor_(static_cast<unsigned>(EOverflowAnchor::kAuto))
    , overscroll_behavior_x_(static_cast<unsigned>(EOverscrollBehavior::kAuto))
    , overscroll_behavior_y_(static_cast<unsigned>(EOverscrollBehavior::kAuto))
    , text_transform_(static_cast<unsigned>(ETextTransform::kNone))
    , visibility_(static_cast<unsigned>(EVisibility::kVisible))
    , writing_mode_(static_cast<unsigned>(WritingMode::kHorizontalTb))
    , affected_by_active_(static_cast<unsigned>(false))
    , affected_by_drag_(static_cast<unsigned>(false))
    , affected_by_focus_within_(static_cast<unsigned>(false))
    , affected_by_hover_(static_cast<unsigned>(false))
    , border_collapse_(static_cast<unsigned>(EBorderCollapse::kSeparate))
    , border_collapse_is_inherited_(static_cast<unsigned>(true))
    , box_direction_(static_cast<unsigned>(EBoxDirection::kNormal))
    , box_direction_is_inherited_(static_cast<unsigned>(true))
    , caption_side_(static_cast<unsigned>(ECaptionSide::kTop))
    , caption_side_is_inherited_(static_cast<unsigned>(true))
    , dark_color_scheme_(static_cast<unsigned>(false))
    , direction_(static_cast<unsigned>(TextDirection::kLtr))
    , empty_cells_(static_cast<unsigned>(EEmptyCells::kShow))
    , empty_cells_is_inherited_(static_cast<unsigned>(true))
    , has_attr_content_(static_cast<unsigned>(false))
    , has_explicitly_inherited_properties_(static_cast<unsigned>(false))
    , has_rem_units_(static_cast<unsigned>(false))
    , has_simple_underline_(static_cast<unsigned>(false))
    , has_variable_reference_from_non_inherited_property_(static_cast<unsigned>(false))
    , has_viewport_units_(static_cast<unsigned>(false))
    , is_ensured_in_display_none_(static_cast<unsigned>(false))
    , is_link_(static_cast<unsigned>(false))
    , list_style_position_(static_cast<unsigned>(EListStylePosition::kOutside))
    , list_style_position_is_inherited_(static_cast<unsigned>(true))
    , may_have_margin_(static_cast<unsigned>(false))
    , may_have_padding_(static_cast<unsigned>(false))
    , pointer_events_is_inherited_(static_cast<unsigned>(true))
    , print_color_adjust_(static_cast<unsigned>(EPrintColorAdjust::kEconomy))
    , print_color_adjust_is_inherited_(static_cast<unsigned>(true))
    , rtl_ordering_(static_cast<unsigned>(EOrder::kLogical))
    , rtl_ordering_is_inherited_(static_cast<unsigned>(true))
    , scroll_snap_stop_(static_cast<unsigned>(EScrollSnapStop::kNormal))
    , table_layout_(static_cast<unsigned>(ETableLayout::kAuto))
    , text_transform_is_inherited_(static_cast<unsigned>(true))
    , transform_box_(static_cast<unsigned>(ETransformBox::kViewBox))
    , visibility_is_inherited_(static_cast<unsigned>(true))
    , white_space_is_inherited_(static_cast<unsigned>(true))
{
  box_data_.Init();
  rare_non_inherited_usage_less_than_13_percent_data_.Init();
  surround_data_.Init();
  visual_data_.Init();
  background_data_.Init();
  inherited_data_.Init();
  rare_inherited_usage_less_than_40_percent_data_.Init();
}

void ComputedStyleBase::InheritFrom(const ComputedStyleBase& other,
                                    IsAtShadowBoundary isAtShadowBoundary) {
  inherited_data_ = other.inherited_data_;
  rare_inherited_usage_less_than_40_percent_data_ = other.rare_inherited_usage_less_than_40_percent_data_;
  white_space_ = other.white_space_;
  cursor_ = other.cursor_;
  list_style_type_ = other.list_style_type_;
  pointer_events_ = other.pointer_events_;
  text_align_ = other.text_align_;
  inside_link_ = other.inside_link_;
  text_transform_ = other.text_transform_;
  visibility_ = other.visibility_;
  writing_mode_ = other.writing_mode_;
  border_collapse_ = other.border_collapse_;
  box_direction_ = other.box_direction_;
  caption_side_ = other.caption_side_;
  dark_color_scheme_ = other.dark_color_scheme_;
  direction_ = other.direction_;
  empty_cells_ = other.empty_cells_;
  has_simple_underline_ = other.has_simple_underline_;
  list_style_position_ = other.list_style_position_;
  print_color_adjust_ = other.print_color_adjust_;
  rtl_ordering_ = other.rtl_ordering_;

}

void ComputedStyleBase::CopyNonInheritedFromCached(
    const ComputedStyleBase& other) {
  box_data_ = other.box_data_;
  rare_non_inherited_usage_less_than_13_percent_data_ = other.rare_non_inherited_usage_less_than_13_percent_data_;
  surround_data_ = other.surround_data_;
  visual_data_ = other.visual_data_;
  background_data_ = other.background_data_;
  display_ = other.display_;
  original_display_ = other.original_display_;
  break_after_ = other.break_after_;
  break_before_ = other.break_before_;
  vertical_align_ = other.vertical_align_;
  break_inside_ = other.break_inside_;
  clear_ = other.clear_;
  floating_ = other.floating_;
  overflow_x_ = other.overflow_x_;
  overflow_y_ = other.overflow_y_;
  position_ = other.position_;
  unicode_bidi_ = other.unicode_bidi_;
  overflow_anchor_ = other.overflow_anchor_;
  overscroll_behavior_x_ = other.overscroll_behavior_x_;
  overscroll_behavior_y_ = other.overscroll_behavior_y_;
  border_collapse_is_inherited_ = other.border_collapse_is_inherited_;
  box_direction_is_inherited_ = other.box_direction_is_inherited_;
  caption_side_is_inherited_ = other.caption_side_is_inherited_;
  empty_cells_is_inherited_ = other.empty_cells_is_inherited_;
  has_rem_units_ = other.has_rem_units_;
  has_viewport_units_ = other.has_viewport_units_;
  is_ensured_in_display_none_ = other.is_ensured_in_display_none_;
  list_style_position_is_inherited_ = other.list_style_position_is_inherited_;
  may_have_margin_ = other.may_have_margin_;
  may_have_padding_ = other.may_have_padding_;
  pointer_events_is_inherited_ = other.pointer_events_is_inherited_;
  print_color_adjust_is_inherited_ = other.print_color_adjust_is_inherited_;
  rtl_ordering_is_inherited_ = other.rtl_ordering_is_inherited_;
  scroll_snap_stop_ = other.scroll_snap_stop_;
  table_layout_ = other.table_layout_;
  text_transform_is_inherited_ = other.text_transform_is_inherited_;
  transform_box_ = other.transform_box_;
  visibility_is_inherited_ = other.visibility_is_inherited_;
  white_space_is_inherited_ = other.white_space_is_inherited_;

}

void ComputedStyleBase::PropagateIndependentInheritedProperties(
    const ComputedStyleBase& parentStyle) {
  if (WhiteSpaceIsInherited())
    white_space_ = parentStyle.white_space_;
  if (PointerEventsIsInherited())
    pointer_events_ = parentStyle.pointer_events_;
  if (TextTransformIsInherited())
    text_transform_ = parentStyle.text_transform_;
  if (VisibilityIsInherited())
    visibility_ = parentStyle.visibility_;
  if (BorderCollapseIsInherited())
    border_collapse_ = parentStyle.border_collapse_;
  if (BoxDirectionIsInherited())
    box_direction_ = parentStyle.box_direction_;
  if (CaptionSideIsInherited())
    caption_side_ = parentStyle.caption_side_;
  if (EmptyCellsIsInherited())
    empty_cells_ = parentStyle.empty_cells_;
  if (ListStylePositionIsInherited())
    list_style_position_ = parentStyle.list_style_position_;
  if (PrintColorAdjustIsInherited())
    print_color_adjust_ = parentStyle.print_color_adjust_;
  if (RtlOrderingIsInherited())
    rtl_ordering_ = parentStyle.rtl_ordering_;
}

bool ComputedStyleBase::DiffNeedsVisualRectUpdate(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (!a.ClipPathDataEquivalent(b))
            return true;

        }
        if (a.Resize() != b.Resize())
          return true;

      }

    }
    if (a.Visibility() != b.Visibility())
      return true;

  return false;
}

bool ComputedStyleBase::DiffTransformData(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->translate_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->translate_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->rotate_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->rotate_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scale_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scale_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_path_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_path_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_)
            return true;

        }
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_)
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->transform_ != b.rare_non_inherited_usage_less_than_13_percent_data_->transform_)
        return true;

    }
    if (a.transform_box_ != b.transform_box_)
      return true;

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesOpacity(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->opacity_ != b.rare_non_inherited_usage_less_than_13_percent_data_->opacity_)
        return true;

    }

  return false;
}

bool ComputedStyleBase::DiffNeedsReshapeAndFullLayoutAndPaintInvalidation(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.inherited_data_.Get() != b.inherited_data_.Get()) {
      if (a.inherited_data_->font_data_.Get() != b.inherited_data_->font_data_.Get()) {
        if (a.inherited_data_->font_data_->font_ != b.inherited_data_->font_data_->font_)
          return true;
        if (a.FontInternal().LoadingCustomFonts() != b.FontInternal().LoadingCustomFonts())
          return true;

      }

    }
    if (a.TextTransform() != b.TextTransform())
      return true;
    if (a.WhiteSpace() != b.WhiteSpace())
      return true;

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesFilter(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (!a.ReflectionDataEquivalent(b))
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (!a.FilterDataEquivalent(b))
          return true;

      }

    }

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesTextDecorationOrColor(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_text_decoration_color_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->visited_link_text_decoration_color_)
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_style_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_style_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_color_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->text_decoration_color_)
            return true;

        }

      }

    }
    if (a.visual_data_.Get() != b.visual_data_.Get()) {
      if (a.visual_data_->text_decoration_ != b.visual_data_->text_decoration_)
        return true;

    }
    if (a.inherited_data_.Get() != b.inherited_data_.Get()) {
      if (a.inherited_data_->color_ != b.inherited_data_->color_)
        return true;
      if (a.inherited_data_->visited_link_color_ != b.inherited_data_->visited_link_color_)
        return true;

    }
    if (a.rare_inherited_usage_less_than_40_percent_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_.Get()) {
      if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_.Get()) {
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_fill_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_fill_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->applied_text_decorations_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->applied_text_decorations_)
          return true;
        if (a.TextFillColor() != b.TextFillColor())
          return true;
        if (a.TextStrokeColor() != b.TextStrokeColor())
          return true;
        if (a.TextEmphasisColor() != b.TextEmphasisColor())
          return true;
        if (a.VisitedLinkTextFillColor() != b.VisitedLinkTextFillColor())
          return true;
        if (a.VisitedLinkTextStrokeColor() != b.VisitedLinkTextStrokeColor())
          return true;
        if (a.VisitedLinkTextEmphasisColor() != b.VisitedLinkTextEmphasisColor())
          return true;
        if (a.VisitedLinkCaretColor() != b.VisitedLinkCaretColor())
          return true;

      }
      if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_.Get()) {
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_underline_position_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_underline_position_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_decoration_skip_ink_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_decoration_skip_ink_)
          return true;
        if (a.CaretColor() != b.CaretColor())
          return true;

      }

    }
    if (a.HasSimpleUnderlineInternal() != b.HasSimpleUnderlineInternal())
      return true;

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesMask(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_)
          return true;

      }

    }

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesTransform(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.HasTransform() != b.HasTransform())
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->translate_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->translate_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->rotate_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->rotate_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scale_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->scale_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_path_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_path_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_rotate_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_position_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_anchor_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->offset_distance_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->perspective_origin_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->perspective_origin_)
            return true;
          if (a.HasTransform() != b.HasTransform())
            return true;

        }
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->transform_origin_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->perspective_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->perspective_)
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->transform_ != b.rare_non_inherited_usage_less_than_13_percent_data_->transform_)
        return true;
      if (a.HasTransform() != b.HasTransform())
        return true;

    }
    if (a.transform_box_ != b.transform_box_)
      return true;

  return false;
}

bool ComputedStyleBase::DiffNeedsFullLayout(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.box_data_.Get() != b.box_data_.Get()) {
      if (a.box_data_->width_ != b.box_data_->width_)
        return true;
      if (a.box_data_->min_width_ != b.box_data_->min_width_)
        return true;
      if (a.box_data_->max_width_ != b.box_data_->max_width_)
        return true;
      if (a.box_data_->height_ != b.box_data_->height_)
        return true;
      if (a.box_data_->min_height_ != b.box_data_->min_height_)
        return true;
      if (a.box_data_->max_height_ != b.box_data_->max_height_)
        return true;
      if (a.box_data_->vertical_align_length_ != b.box_data_->vertical_align_length_)
        return true;
      if (a.box_data_->box_sizing_ != b.box_data_->box_sizing_)
        return true;

    }
    if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->align_content_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->align_content_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_items_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_items_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_self_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->justify_self_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->contain_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->contain_)
            return true;

        }
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->align_self_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->align_self_)
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->align_items_ != b.rare_non_inherited_usage_less_than_13_percent_data_->align_items_)
        return true;
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->justify_content_ != b.rare_non_inherited_usage_less_than_13_percent_data_->justify_content_)
        return true;

    }
    if (a.VerticalAlign() != b.VerticalAlign())
      return true;
    if (a.GetPosition() != b.GetPosition())
      return true;

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesZIndex(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.box_data_.Get() != b.box_data_.Get()) {
      if (a.box_data_->z_index_ != b.box_data_->z_index_)
        return true;

    }
    if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.IsStackingContext() != b.IsStackingContext())
          return true;

      }

    }

  return false;
}

bool ComputedStyleBase::DiffNeedsFullLayoutAndPaintInvalidationDisplayListItem(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.ListStyleType() != b.ListStyleType())
      return true;
    if (a.ListStylePosition() != b.ListStylePosition())
      return true;

  return false;
}

bool ComputedStyleBase::DiffNeedsCollectInlinesAndFullLayoutAndPaintInvalidation(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.Direction() != b.Direction())
      return true;
    if (a.RtlOrdering() != b.RtlOrdering())
      return true;
    if (a.GetUnicodeBidi() != b.GetUnicodeBidi())
      return true;

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesNeedsRecomputeOverflow(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (!a.OutlineVisuallyEqual(b))
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (!a.OutlineVisuallyEqual(b))
            return true;

        }
        if (!a.OutlineVisuallyEqual(b))
          return true;

      }
      if (!a.BoxShadowDataEquivalent(b))
        return true;

    }
    if (a.surround_data_.Get() != b.surround_data_.Get()) {
      if (!a.BorderVisualOverflowEqual(b))
        return true;

    }

  return false;
}

bool ComputedStyleBase::DiffNeedsPaintInvalidationSubtree(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->mask_box_image_)
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->blend_mode_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->blend_mode_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->isolation_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->isolation_)
            return true;

        }

      }

    }

  return false;
}

bool ComputedStyleBase::DiffNeedsPaintInvalidationObject(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->user_drag_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->user_drag_)
          return true;
        if (a.VisitedLinkBackgroundColor() != b.VisitedLinkBackgroundColor())
          return true;
        if (!a.OutlineVisuallyEqual(b))
          return true;
        if (!a.VisitedLinkBorderLeftColorHasNotChanged(b))
          return true;
        if (!a.VisitedLinkBorderRightColorHasNotChanged(b))
          return true;
        if (!a.VisitedLinkBorderBottomColorHasNotChanged(b))
          return true;
        if (!a.VisitedLinkBorderTopColorHasNotChanged(b))
          return true;
        if (!a.VisitedLinkOutlineColorHasNotChanged(b))
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_fit_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_fit_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_position_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->object_position_)
            return true;
          if (!a.ShapeOutsideDataEquivalent(b))
            return true;
          if (!a.ClipPathDataEquivalent(b))
            return true;
          if (!a.OutlineVisuallyEqual(b))
            return true;

        }
        if (a.Resize() != b.Resize())
          return true;
        if (!a.OutlineVisuallyEqual(b))
          return true;

      }
      if (!a.BoxShadowDataEquivalent(b))
        return true;

    }
    if (a.rare_inherited_usage_less_than_40_percent_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_.Get()) {
      if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_.Get()) {
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->user_modify_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->user_modify_)
          return true;

      }
      if (a.rare_inherited_usage_less_than_40_percent_data_->user_select_ != b.rare_inherited_usage_less_than_40_percent_data_->user_select_)
        return true;
      if (a.rare_inherited_usage_less_than_40_percent_data_->image_rendering_ != b.rare_inherited_usage_less_than_40_percent_data_->image_rendering_)
        return true;

    }
    if (a.Visibility() != b.Visibility())
      return true;
    if (a.PrintColorAdjust() != b.PrintColorAdjust())
      return true;
    if (a.InsideLink() != b.InsideLink())
      return true;

  return false;
}

bool ComputedStyleBase::ScrollAnchorDisablingPropertyChanged(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.box_data_.Get() != b.box_data_.Get()) {
      if (a.box_data_->width_ != b.box_data_->width_)
        return true;
      if (a.box_data_->min_width_ != b.box_data_->min_width_)
        return true;
      if (a.box_data_->max_width_ != b.box_data_->max_width_)
        return true;
      if (a.box_data_->height_ != b.box_data_->height_)
        return true;
      if (a.box_data_->min_height_ != b.box_data_->min_height_)
        return true;
      if (a.box_data_->max_height_ != b.box_data_->max_height_)
        return true;

    }
    if (a.surround_data_.Get() != b.surround_data_.Get()) {
      if (a.surround_data_->margin_top_ != b.surround_data_->margin_top_)
        return true;
      if (a.surround_data_->margin_left_ != b.surround_data_->margin_left_)
        return true;
      if (a.surround_data_->margin_right_ != b.surround_data_->margin_right_)
        return true;
      if (a.surround_data_->margin_bottom_ != b.surround_data_->margin_bottom_)
        return true;
      if (a.surround_data_->left_ != b.surround_data_->left_)
        return true;
      if (a.surround_data_->right_ != b.surround_data_->right_)
        return true;
      if (a.surround_data_->top_ != b.surround_data_->top_)
        return true;
      if (a.surround_data_->bottom_ != b.surround_data_->bottom_)
        return true;
      if (a.surround_data_->padding_top_ != b.surround_data_->padding_top_)
        return true;
      if (a.surround_data_->padding_left_ != b.surround_data_->padding_left_)
        return true;
      if (a.surround_data_->padding_right_ != b.surround_data_->padding_right_)
        return true;
      if (a.surround_data_->padding_bottom_ != b.surround_data_->padding_bottom_)
        return true;

    }
    if (a.GetPosition() != b.GetPosition())
      return true;

  return false;
}

bool ComputedStyleBase::DiffNeedsFullLayoutAndPaintInvalidation(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_column_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_column_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_row_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_row_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_column_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_column_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_row_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->ordered_named_grid_row_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_column_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_column_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_row_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_named_grid_row_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_column_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_column_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_row_lines_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->auto_repeat_ordered_named_grid_row_lines_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_row_count_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_row_count_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_column_count_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->named_grid_area_column_count_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_insertion_point_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_insertion_point_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_insertion_point_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_insertion_point_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_type_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_columns_type_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_type_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->grid_data_->grid_auto_repeat_rows_type_)
            return true;

        }
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->column_rule_color_is_current_color_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->column_rule_color_is_current_color_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->visited_link_column_rule_color_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->visited_link_column_rule_color_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_count_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_count_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_width_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->multi_col_data_->has_auto_column_width_)
            return true;

        }
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->appearance_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->appearance_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_before_collapse_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_before_collapse_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_after_collapse_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->margin_after_collapse_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->line_clamp_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->line_clamp_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_flex_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_flex_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_ordinal_group_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_ordinal_group_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_align_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_align_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_pack_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_pack_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_orient_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_13_percent_sub_data_->box_orient_)
          return true;
        if (a.DisplayLayoutCustomName() != b.DisplayLayoutCustomName())
          return true;
        if (!a.OpacityChangedStackingContext(b))
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_margin_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->shape_margin_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_rows_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_rows_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_rows_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_rows_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_columns_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_template_columns_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_columns_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_columns_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->row_gap_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->row_gap_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_flow_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_auto_flow_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->flex_basis_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->flex_basis_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_start_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_start_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_end_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_row_end_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_start_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_start_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_end_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->grid_column_end_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_gap_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_gap_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_width_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_width_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_style_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_style_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_width_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_width_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_color_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_rule_color_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_count_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_count_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_fill_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_fill_)
            return true;
          if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_span_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_->column_span_)
            return true;

        }
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->order_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->order_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_shrink_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_shrink_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_grow_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_grow_)
          return true;
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_wrap_ != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->flex_wrap_)
          return true;
        if (a.HasFilters() != b.HasFilters())
          return true;

      }
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->text_overflow_ != b.rare_non_inherited_usage_less_than_13_percent_data_->text_overflow_)
        return true;
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->flex_direction_ != b.rare_non_inherited_usage_less_than_13_percent_data_->flex_direction_)
        return true;
      if (!a.OpacityChangedStackingContext(b))
        return true;

    }
    if (a.surround_data_.Get() != b.surround_data_.Get()) {
      if (a.surround_data_->padding_top_ != b.surround_data_->padding_top_)
        return true;
      if (a.surround_data_->padding_left_ != b.surround_data_->padding_left_)
        return true;
      if (a.surround_data_->padding_right_ != b.surround_data_->padding_right_)
        return true;
      if (a.surround_data_->padding_bottom_ != b.surround_data_->padding_bottom_)
        return true;
      if (a.BorderLeftWidth() != b.BorderLeftWidth())
        return true;
      if (a.BorderTopWidth() != b.BorderTopWidth())
        return true;
      if (a.BorderBottomWidth() != b.BorderBottomWidth())
        return true;
      if (a.BorderRightWidth() != b.BorderRightWidth())
        return true;

    }
    if (a.inherited_data_.Get() != b.inherited_data_.Get()) {
      if (a.inherited_data_->line_height_ != b.inherited_data_->line_height_)
        return true;
      if (a.inherited_data_->horizontal_border_spacing_ != b.inherited_data_->horizontal_border_spacing_)
        return true;
      if (a.inherited_data_->vertical_border_spacing_ != b.inherited_data_->vertical_border_spacing_)
        return true;
      if (a.inherited_data_->text_autosizing_multiplier_ != b.inherited_data_->text_autosizing_multiplier_)
        return true;

    }
    if (a.rare_inherited_usage_less_than_40_percent_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_.Get()) {
      if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_.Get()) {
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->highlight_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->highlight_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_indent_line_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_indent_line_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->effective_zoom_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->effective_zoom_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_break_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_break_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_security_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_security_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_before_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_before_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_after_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_limit_after_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_string_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->hyphenation_string_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->ruby_position_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->ruby_position_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_mark_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_mark_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_position_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_position_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_custom_mark_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_emphasis_custom_mark_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_height_step_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->line_height_step_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_width_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_40_percent_sub_data_->text_stroke_width_)
          return true;

      }
      if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_.Get() != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_.Get()) {
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_align_last_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_align_last_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->hyphens_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->hyphens_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->respect_image_orientation_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->respect_image_orientation_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_justify_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_justify_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_orientation_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_orientation_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_combine_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->text_combine_)
          return true;
        if (a.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->tab_size_ != b.rare_inherited_usage_less_than_40_percent_data_->rare_inherited_usage_less_than_100_percent_data_->tab_size_)
          return true;

      }
      if (a.rare_inherited_usage_less_than_40_percent_data_->text_indent_ != b.rare_inherited_usage_less_than_40_percent_data_->text_indent_)
        return true;
      if (a.rare_inherited_usage_less_than_40_percent_data_->word_break_ != b.rare_inherited_usage_less_than_40_percent_data_->word_break_)
        return true;
      if (a.rare_inherited_usage_less_than_40_percent_data_->overflow_wrap_ != b.rare_inherited_usage_less_than_40_percent_data_->overflow_wrap_)
        return true;
      if (a.rare_inherited_usage_less_than_40_percent_data_->text_size_adjust_ != b.rare_inherited_usage_less_than_40_percent_data_->text_size_adjust_)
        return true;
      if (a.rare_inherited_usage_less_than_40_percent_data_->list_style_image_ != b.rare_inherited_usage_less_than_40_percent_data_->list_style_image_)
        return true;
      if (!a.TextShadowDataEquivalent(b))
        return true;
      if (!a.QuotesDataEquivalent(b))
        return true;

    }
    if (a.HasPseudoStyle(kPseudoIdScrollbar) != b.HasPseudoStyle(kPseudoIdScrollbar))
      return true;
    if (a.BoxDirection() != b.BoxDirection())
      return true;
    if (a.GetTextAlign() != b.GetTextAlign())
      return true;
    if (a.GetWritingMode() != b.GetWritingMode())
      return true;
    if (a.OverflowX() != b.OverflowX())
      return true;
    if (a.OverflowY() != b.OverflowY())
      return true;
    if (a.Clear() != b.Clear())
      return true;
    if (a.Floating() != b.Floating())
      return true;
    if (a.OriginalDisplay() != b.OriginalDisplay())
      return true;

  return false;
}

bool ComputedStyleBase::DiffNeedsFullLayoutAndPaintInvalidationDisplayTableType(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.BorderCollapse() != b.BorderCollapse())
      return true;
    if (a.EmptyCells() != b.EmptyCells())
      return true;
    if (a.CaptionSide() != b.CaptionSide())
      return true;
    if (a.TableLayout() != b.TableLayout())
      return true;

  return false;
}

bool ComputedStyleBase::UpdatePropertySpecificDifferencesBackdropFilter(const ComputedStyle& a, const ComputedStyle& b) {
  if (a.rare_non_inherited_usage_less_than_13_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_.Get()) {
      if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_.Get()) {
        if (a.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get() != b.rare_non_inherited_usage_less_than_13_percent_data_->rare_non_inherited_usage_less_than_33_percent_data_->rare_non_inherited_usage_less_than_100_percent_data_.Get()) {
          if (!a.BackdropFilterDataEquivalent(b))
            return true;

        }

      }

    }

  return false;
}


ComputedStyleBase::StyleBoxData::StyleBoxData() :
      height_(Length())
      , max_height_(Length::MaxSizeNone())
      , max_width_(Length::MaxSizeNone())
      , min_height_(Length())
      , min_width_(Length())
      , width_(Length())
      , vertical_align_length_(Length())
      , z_index_(0)
      , box_decoration_break_(static_cast<unsigned>(EBoxDecorationBreak::kSlice))
      , box_sizing_(static_cast<unsigned>(EBoxSizing::kContentBox))
      , has_auto_z_index_(static_cast<unsigned>(true))
  {
  }

ComputedStyleBase::StyleBoxData::StyleBoxData(const StyleBoxData& other) :
      height_(other.height_)
      , max_height_(other.max_height_)
      , max_width_(other.max_width_)
      , min_height_(other.min_height_)
      , min_width_(other.min_width_)
      , width_(other.width_)
      , vertical_align_length_(other.vertical_align_length_)
      , z_index_(other.z_index_)
      , box_decoration_break_(other.box_decoration_break_)
      , box_sizing_(other.box_sizing_)
      , has_auto_z_index_(other.has_auto_z_index_)
  {}

ComputedStyleBase::StyleGridData::StyleGridData() :
      named_grid_column_lines_(NamedGridLinesMap())
      , named_grid_row_lines_(NamedGridLinesMap())
      , auto_repeat_named_grid_column_lines_(NamedGridLinesMap())
      , auto_repeat_named_grid_row_lines_(NamedGridLinesMap())
      , ordered_named_grid_column_lines_(OrderedNamedGridLines())
      , ordered_named_grid_row_lines_(OrderedNamedGridLines())
      , auto_repeat_ordered_named_grid_column_lines_(OrderedNamedGridLines())
      , auto_repeat_ordered_named_grid_row_lines_(OrderedNamedGridLines())
      , named_grid_area_(NamedGridAreaMap())
      , grid_auto_repeat_columns_(Vector<GridTrackSize>())
      , grid_auto_repeat_rows_(Vector<GridTrackSize>())
      , named_grid_area_row_count_(0)
      , named_grid_area_column_count_(0)
      , grid_auto_repeat_columns_insertion_point_(0)
      , grid_auto_repeat_rows_insertion_point_(0)
      , grid_auto_repeat_columns_type_(static_cast<unsigned>(AutoRepeatType::kNoAutoRepeat))
      , grid_auto_repeat_rows_type_(static_cast<unsigned>(AutoRepeatType::kNoAutoRepeat))
  {
  }

ComputedStyleBase::StyleGridData::StyleGridData(const StyleGridData& other) :
      named_grid_column_lines_(other.named_grid_column_lines_)
      , named_grid_row_lines_(other.named_grid_row_lines_)
      , auto_repeat_named_grid_column_lines_(other.auto_repeat_named_grid_column_lines_)
      , auto_repeat_named_grid_row_lines_(other.auto_repeat_named_grid_row_lines_)
      , ordered_named_grid_column_lines_(other.ordered_named_grid_column_lines_)
      , ordered_named_grid_row_lines_(other.ordered_named_grid_row_lines_)
      , auto_repeat_ordered_named_grid_column_lines_(other.auto_repeat_ordered_named_grid_column_lines_)
      , auto_repeat_ordered_named_grid_row_lines_(other.auto_repeat_ordered_named_grid_row_lines_)
      , named_grid_area_(other.named_grid_area_)
      , grid_auto_repeat_columns_(other.grid_auto_repeat_columns_)
      , grid_auto_repeat_rows_(other.grid_auto_repeat_rows_)
      , named_grid_area_row_count_(other.named_grid_area_row_count_)
      , named_grid_area_column_count_(other.named_grid_area_column_count_)
      , grid_auto_repeat_columns_insertion_point_(other.grid_auto_repeat_columns_insertion_point_)
      , grid_auto_repeat_rows_insertion_point_(other.grid_auto_repeat_rows_insertion_point_)
      , grid_auto_repeat_columns_type_(other.grid_auto_repeat_columns_type_)
      , grid_auto_repeat_rows_type_(other.grid_auto_repeat_rows_type_)
  {}

ComputedStyleBase::StyleWillChangeData::StyleWillChangeData() :
      will_change_properties_(Vector<CSSPropertyID>())
      , will_change_contents_(static_cast<unsigned>(false))
      , will_change_scroll_position_(static_cast<unsigned>(false))
  {
  }

ComputedStyleBase::StyleWillChangeData::StyleWillChangeData(const StyleWillChangeData& other) :
      will_change_properties_(other.will_change_properties_)
      , will_change_contents_(other.will_change_contents_)
      , will_change_scroll_position_(other.will_change_scroll_position_)
  {}

ComputedStyleBase::StyleMultiColData::StyleMultiColData() :
      visited_link_column_rule_color_(StyleColor::CurrentColor())
      , column_rule_color_is_current_color_(static_cast<unsigned>(true))
      , has_auto_column_count_(static_cast<unsigned>(true))
      , has_auto_column_width_(static_cast<unsigned>(true))
  {
  }

ComputedStyleBase::StyleMultiColData::StyleMultiColData(const StyleMultiColData& other) :
      visited_link_column_rule_color_(other.visited_link_column_rule_color_)
      , column_rule_color_is_current_color_(other.column_rule_color_is_current_color_)
      , has_auto_column_count_(other.has_auto_column_count_)
      , has_auto_column_width_(other.has_auto_column_width_)
  {}

ComputedStyleBase::StyleRareNonInheritedUsageLessThan13PercentSubData::StyleRareNonInheritedUsageLessThan13PercentSubData() :
      display_layout_custom_name_(g_null_atom)
      , display_layout_custom_parent_name_(g_null_atom)
      , box_reflect_(nullptr)
      , counter_directives_(nullptr)
      , animations_(nullptr)
      , transitions_(nullptr)
      , paint_images_(nullptr)
      , non_inherited_variables_(nullptr)
      , callback_selectors_(Vector<String>())
      , mask_(FillLayer(EFillLayerType::kMask, true))
      , mask_box_image_(NinePieceImage::MaskDefaults())
      , page_size_(FloatSize())
      , scroll_padding_bottom_(Length())
      , scroll_padding_left_(Length())
      , scroll_padding_right_(Length())
      , scroll_padding_top_(Length())
      , scroll_margin_bottom_(0.0f)
      , scroll_margin_left_(0.0f)
      , scroll_margin_right_(0.0f)
      , scroll_margin_top_(0.0f)
      , box_flex_(0.0f)
      , scroll_snap_align_(cc::ScrollSnapAlign())
      , visited_link_text_decoration_color_(StyleColor::CurrentColor())
      , visited_link_background_color_(StyleColor(Color::kTransparent))
      , visited_link_outline_color_(StyleColor::CurrentColor())
      , visited_link_border_left_color_(StyleColor::CurrentColor())
      , visited_link_border_right_color_(StyleColor::CurrentColor())
      , visited_link_border_top_color_(StyleColor::CurrentColor())
      , visited_link_border_bottom_color_(StyleColor::CurrentColor())
      , box_ordinal_group_(1)
      , line_clamp_(0)
      , appearance_(static_cast<unsigned>(kNoControlPart))
      , scroll_customization_(static_cast<unsigned>(scroll_customization::kScrollDirectionNone))
      , box_align_(static_cast<unsigned>(EBoxAlignment::kStretch))
      , box_pack_(static_cast<unsigned>(EBoxPack::kStart))
      , draggable_region_mode_(static_cast<unsigned>(EDraggableRegionMode::kNone))
      , margin_after_collapse_(static_cast<unsigned>(EMarginCollapse::kCollapse))
      , margin_before_collapse_(static_cast<unsigned>(EMarginCollapse::kCollapse))
      , page_size_type_(static_cast<unsigned>(EPageSizeType::kAuto))
      , user_drag_(static_cast<unsigned>(EUserDrag::kAuto))
      , box_orient_(static_cast<unsigned>(EBoxOrient::kHorizontal))
      , has_author_background_(static_cast<unsigned>(false))
      , has_author_border_(static_cast<unsigned>(false))
      , has_current_backdrop_filter_animation_(static_cast<unsigned>(false))
      , has_current_filter_animation_(static_cast<unsigned>(false))
      , has_current_opacity_animation_(static_cast<unsigned>(false))
      , has_current_transform_animation_(static_cast<unsigned>(false))
      , is_running_backdrop_filter_animation_on_compositor_(static_cast<unsigned>(false))
      , is_running_filter_animation_on_compositor_(static_cast<unsigned>(false))
      , is_running_opacity_animation_on_compositor_(static_cast<unsigned>(false))
      , is_running_transform_animation_on_compositor_(static_cast<unsigned>(false))
      , is_stacking_context_(static_cast<unsigned>(false))
      , outline_color_is_current_color_(static_cast<unsigned>(true))
      , outline_style_is_auto_(static_cast<unsigned>(false))
      , requires_accelerated_compositing_for_external_reasons_(static_cast<unsigned>(false))
  {
    grid_data_.Init();
    will_change_data_.Init();
    multi_col_data_.Init();
  }

ComputedStyleBase::StyleRareNonInheritedUsageLessThan13PercentSubData::StyleRareNonInheritedUsageLessThan13PercentSubData(const StyleRareNonInheritedUsageLessThan13PercentSubData& other) :
      grid_data_(other.grid_data_)
      , will_change_data_(other.will_change_data_)
      , multi_col_data_(other.multi_col_data_)
      , display_layout_custom_name_(other.display_layout_custom_name_)
      , display_layout_custom_parent_name_(other.display_layout_custom_parent_name_)
      , box_reflect_(MemberCopy(other.box_reflect_))
      , counter_directives_(MemberCopy(other.counter_directives_))
      , animations_(MemberCopy(other.animations_))
      , transitions_(MemberCopy(other.transitions_))
      , paint_images_(MemberCopy(other.paint_images_))
      , non_inherited_variables_(MemberCopy(other.non_inherited_variables_))
      , callback_selectors_(other.callback_selectors_)
      , mask_(other.mask_)
      , mask_box_image_(other.mask_box_image_)
      , page_size_(other.page_size_)
      , scroll_padding_bottom_(other.scroll_padding_bottom_)
      , scroll_padding_left_(other.scroll_padding_left_)
      , scroll_padding_right_(other.scroll_padding_right_)
      , scroll_padding_top_(other.scroll_padding_top_)
      , scroll_margin_bottom_(other.scroll_margin_bottom_)
      , scroll_margin_left_(other.scroll_margin_left_)
      , scroll_margin_right_(other.scroll_margin_right_)
      , scroll_margin_top_(other.scroll_margin_top_)
      , box_flex_(other.box_flex_)
      , scroll_snap_align_(other.scroll_snap_align_)
      , visited_link_text_decoration_color_(other.visited_link_text_decoration_color_)
      , visited_link_background_color_(other.visited_link_background_color_)
      , visited_link_outline_color_(other.visited_link_outline_color_)
      , visited_link_border_left_color_(other.visited_link_border_left_color_)
      , visited_link_border_right_color_(other.visited_link_border_right_color_)
      , visited_link_border_top_color_(other.visited_link_border_top_color_)
      , visited_link_border_bottom_color_(other.visited_link_border_bottom_color_)
      , box_ordinal_group_(other.box_ordinal_group_)
      , line_clamp_(other.line_clamp_)
      , appearance_(other.appearance_)
      , scroll_customization_(other.scroll_customization_)
      , box_align_(other.box_align_)
      , box_pack_(other.box_pack_)
      , draggable_region_mode_(other.draggable_region_mode_)
      , margin_after_collapse_(other.margin_after_collapse_)
      , margin_before_collapse_(other.margin_before_collapse_)
      , page_size_type_(other.page_size_type_)
      , user_drag_(other.user_drag_)
      , box_orient_(other.box_orient_)
      , has_author_background_(other.has_author_background_)
      , has_author_border_(other.has_author_border_)
      , has_current_backdrop_filter_animation_(other.has_current_backdrop_filter_animation_)
      , has_current_filter_animation_(other.has_current_filter_animation_)
      , has_current_opacity_animation_(other.has_current_opacity_animation_)
      , has_current_transform_animation_(other.has_current_transform_animation_)
      , is_running_backdrop_filter_animation_on_compositor_(other.is_running_backdrop_filter_animation_on_compositor_)
      , is_running_filter_animation_on_compositor_(other.is_running_filter_animation_on_compositor_)
      , is_running_opacity_animation_on_compositor_(other.is_running_opacity_animation_on_compositor_)
      , is_running_transform_animation_on_compositor_(other.is_running_transform_animation_on_compositor_)
      , is_stacking_context_(other.is_stacking_context_)
      , outline_color_is_current_color_(other.outline_color_is_current_color_)
      , outline_style_is_auto_(other.outline_style_is_auto_)
      , requires_accelerated_compositing_for_external_reasons_(other.requires_accelerated_compositing_for_external_reasons_)
  {}

ComputedStyleBase::StyleRareNonInheritedUsageLessThan100PercentData::StyleRareNonInheritedUsageLessThan100PercentData() :
      grid_auto_columns_(Vector<GridTrackSize>(1, GridTrackSize(Length::Auto())))
      , grid_auto_rows_(Vector<GridTrackSize>(1, GridTrackSize(Length::Auto())))
      , grid_template_columns_(Vector<GridTrackSize>())
      , grid_template_rows_(Vector<GridTrackSize>())
      , grid_column_end_(GridPosition())
      , grid_column_start_(GridPosition())
      , grid_row_end_(GridPosition())
      , grid_row_start_(GridPosition())
      , column_gap_(GapLength())
      , row_gap_(GapLength())
      , clip_path_(nullptr)
      , offset_path_(nullptr)
      , rotate_(nullptr)
      , scale_(nullptr)
      , translate_(nullptr)
      , backdrop_filter_(MakeGarbageCollected<StyleFilterData>())
      , shape_outside_(nullptr)
      , offset_rotate_(StyleOffsetRotation(0, OffsetRotationType::kAuto))
      , object_position_(LengthPoint(Length::Percent(50.0), Length::Percent(50.0)))
      , offset_anchor_(LengthPoint(Length::Auto(), Length::Auto()))
      , offset_position_(LengthPoint(Length::Auto(), Length::Auto()))
      , perspective_origin_(LengthPoint(Length::Percent(50.0), Length::Percent(50.0)))
      , flex_basis_(Length::Auto())
      , offset_distance_(Length::Fixed(0))
      , shape_margin_(Length::Fixed(0))
      , column_width_(0.0f)
      , shape_image_threshold_(0.0)
      , scroll_snap_type_(cc::ScrollSnapType())
      , text_decoration_color_(StyleColor::CurrentColor())
      , column_rule_color_(0)
      , outline_color_(0)
      , column_rule_width_(LayoutUnit(3))
      , column_count_(1)
      , justify_items_(StyleSelfAlignmentData(ItemPosition::kLegacy, OverflowAlignment::kDefault))
      , justify_self_(StyleSelfAlignmentData(ItemPosition::kAuto, OverflowAlignment::kDefault))
      , align_content_(StyleContentAlignmentData(ContentPosition::kNormal, ContentDistributionType::kDefault, OverflowAlignment::kDefault))
      , blend_mode_(static_cast<unsigned>(BlendMode::kNormal))
      , column_rule_style_(static_cast<unsigned>(EBorderStyle::kNone))
      , contain_(static_cast<unsigned>(kContainsNone))
      , grid_auto_flow_(static_cast<unsigned>(kAutoFlowRow))
      , object_fit_(static_cast<unsigned>(EObjectFit::kFill))
      , text_decoration_style_(static_cast<unsigned>(ETextDecorationStyle::kSolid))
      , scroll_behavior_(static_cast<unsigned>(kScrollBehaviorAuto))
      , column_fill_(static_cast<unsigned>(EColumnFill::kBalance))
      , column_span_(static_cast<unsigned>(EColumnSpan::kNone))
      , isolation_(static_cast<unsigned>(EIsolation::kAuto))
      , transform_style_3d_(static_cast<unsigned>(ETransformStyle3D::kFlat))
  {
  }

ComputedStyleBase::StyleRareNonInheritedUsageLessThan100PercentData::StyleRareNonInheritedUsageLessThan100PercentData(const StyleRareNonInheritedUsageLessThan100PercentData& other) :
      grid_auto_columns_(other.grid_auto_columns_)
      , grid_auto_rows_(other.grid_auto_rows_)
      , grid_template_columns_(other.grid_template_columns_)
      , grid_template_rows_(other.grid_template_rows_)
      , grid_column_end_(other.grid_column_end_)
      , grid_column_start_(other.grid_column_start_)
      , grid_row_end_(other.grid_row_end_)
      , grid_row_start_(other.grid_row_start_)
      , column_gap_(other.column_gap_)
      , row_gap_(other.row_gap_)
      , clip_path_(MemberCopy(other.clip_path_))
      , offset_path_(MemberCopy(other.offset_path_))
      , rotate_(MemberCopy(other.rotate_))
      , scale_(MemberCopy(other.scale_))
      , translate_(MemberCopy(other.translate_))
      , backdrop_filter_(MemberCopy(other.backdrop_filter_))
      , shape_outside_(MemberCopy(other.shape_outside_))
      , offset_rotate_(other.offset_rotate_)
      , object_position_(other.object_position_)
      , offset_anchor_(other.offset_anchor_)
      , offset_position_(other.offset_position_)
      , perspective_origin_(other.perspective_origin_)
      , flex_basis_(other.flex_basis_)
      , offset_distance_(other.offset_distance_)
      , shape_margin_(other.shape_margin_)
      , column_width_(other.column_width_)
      , shape_image_threshold_(other.shape_image_threshold_)
      , scroll_snap_type_(other.scroll_snap_type_)
      , text_decoration_color_(other.text_decoration_color_)
      , column_rule_color_(other.column_rule_color_)
      , outline_color_(other.outline_color_)
      , column_rule_width_(other.column_rule_width_)
      , column_count_(other.column_count_)
      , justify_items_(other.justify_items_)
      , justify_self_(other.justify_self_)
      , align_content_(other.align_content_)
      , blend_mode_(other.blend_mode_)
      , column_rule_style_(other.column_rule_style_)
      , contain_(other.contain_)
      , grid_auto_flow_(other.grid_auto_flow_)
      , object_fit_(other.object_fit_)
      , text_decoration_style_(other.text_decoration_style_)
      , scroll_behavior_(other.scroll_behavior_)
      , column_fill_(other.column_fill_)
      , column_span_(other.column_span_)
      , isolation_(other.isolation_)
      , transform_style_3d_(other.transform_style_3d_)
  {}

ComputedStyleBase::StyleRareNonInheritedUsageLessThan33PercentData::StyleRareNonInheritedUsageLessThan33PercentData() :
      filter_(MakeGarbageCollected<StyleFilterData>())
      , transform_origin_(TransformOrigin(Length::Percent(50.0), Length::Percent(50.0), 0))
      , flex_grow_(0.0f)
      , flex_shrink_(1.0f)
      , perspective_(0.0)
      , outline_width_(LayoutUnit(3))
      , order_(0)
      , outline_offset_(0)
      , align_self_(StyleSelfAlignmentData(ItemPosition::kAuto, OverflowAlignment::kDefault))
      , touch_action_(static_cast<unsigned>(TouchAction::kTouchActionAuto))
      , outline_style_(static_cast<unsigned>(EBorderStyle::kNone))
      , resize_(static_cast<unsigned>(EResize::kNone))
      , flex_wrap_(static_cast<unsigned>(EFlexWrap::kNowrap))
      , backface_visibility_(static_cast<unsigned>(EBackfaceVisibility::kVisible))
  {
    rare_non_inherited_usage_less_than_100_percent_data_.Init();
  }

ComputedStyleBase::StyleRareNonInheritedUsageLessThan33PercentData::StyleRareNonInheritedUsageLessThan33PercentData(const StyleRareNonInheritedUsageLessThan33PercentData& other) :
      rare_non_inherited_usage_less_than_100_percent_data_(other.rare_non_inherited_usage_less_than_100_percent_data_)
      , filter_(MemberCopy(other.filter_))
      , transform_origin_(other.transform_origin_)
      , flex_grow_(other.flex_grow_)
      , flex_shrink_(other.flex_shrink_)
      , perspective_(other.perspective_)
      , outline_width_(other.outline_width_)
      , order_(other.order_)
      , outline_offset_(other.outline_offset_)
      , align_self_(other.align_self_)
      , touch_action_(other.touch_action_)
      , outline_style_(other.outline_style_)
      , resize_(other.resize_)
      , flex_wrap_(other.flex_wrap_)
      , backface_visibility_(other.backface_visibility_)
  {}

ComputedStyleBase::StyleRareNonInheritedUsageLessThan13PercentData::StyleRareNonInheritedUsageLessThan13PercentData() :
      transform_(EmptyTransformOperations())
      , box_shadow_(nullptr)
      , content_(nullptr)
      , opacity_(1.0)
      , align_items_(StyleSelfAlignmentData(ItemPosition::kNormal, OverflowAlignment::kDefault))
      , justify_content_(StyleContentAlignmentData(ContentPosition::kNormal, ContentDistributionType::kDefault, OverflowAlignment::kDefault))
      , flex_direction_(static_cast<unsigned>(EFlexDirection::kRow))
      , text_overflow_(static_cast<unsigned>(ETextOverflow::kClip))
  {
    rare_non_inherited_usage_less_than_13_percent_sub_data_.Init();
    rare_non_inherited_usage_less_than_33_percent_data_.Init();
  }

ComputedStyleBase::StyleRareNonInheritedUsageLessThan13PercentData::StyleRareNonInheritedUsageLessThan13PercentData(const StyleRareNonInheritedUsageLessThan13PercentData& other) :
      rare_non_inherited_usage_less_than_13_percent_sub_data_(other.rare_non_inherited_usage_less_than_13_percent_sub_data_)
      , rare_non_inherited_usage_less_than_33_percent_data_(other.rare_non_inherited_usage_less_than_33_percent_data_)
      , transform_(other.transform_)
      , box_shadow_(MemberCopy(other.box_shadow_))
      , content_(MemberCopy(other.content_))
      , opacity_(other.opacity_)
      , align_items_(other.align_items_)
      , justify_content_(other.justify_content_)
      , flex_direction_(other.flex_direction_)
      , text_overflow_(other.text_overflow_)
  {}

ComputedStyleBase::StyleSurroundData::StyleSurroundData() :
      border_image_(NinePieceImage())
      , border_bottom_left_radius_(LengthSize(Length::Fixed(0), Length::Fixed(0)))
      , border_bottom_right_radius_(LengthSize(Length::Fixed(0), Length::Fixed(0)))
      , border_top_left_radius_(LengthSize(Length::Fixed(0), Length::Fixed(0)))
      , border_top_right_radius_(LengthSize(Length::Fixed(0), Length::Fixed(0)))
      , bottom_(Length())
      , left_(Length())
      , margin_bottom_(Length::Fixed())
      , margin_left_(Length::Fixed())
      , margin_right_(Length::Fixed())
      , margin_top_(Length::Fixed())
      , padding_bottom_(Length::Fixed())
      , padding_left_(Length::Fixed())
      , padding_right_(Length::Fixed())
      , padding_top_(Length::Fixed())
      , right_(Length())
      , top_(Length())
      , border_bottom_color_(0)
      , border_left_color_(0)
      , border_right_color_(0)
      , border_top_color_(0)
      , border_bottom_width_(LayoutUnit(3))
      , border_left_width_(LayoutUnit(3))
      , border_right_width_(LayoutUnit(3))
      , border_top_width_(LayoutUnit(3))
      , border_bottom_style_(static_cast<unsigned>(EBorderStyle::kNone))
      , border_left_style_(static_cast<unsigned>(EBorderStyle::kNone))
      , border_right_style_(static_cast<unsigned>(EBorderStyle::kNone))
      , border_top_style_(static_cast<unsigned>(EBorderStyle::kNone))
      , border_bottom_color_is_current_color_(static_cast<unsigned>(true))
      , border_left_color_is_current_color_(static_cast<unsigned>(true))
      , border_right_color_is_current_color_(static_cast<unsigned>(true))
      , border_top_color_is_current_color_(static_cast<unsigned>(true))
  {
  }

ComputedStyleBase::StyleSurroundData::StyleSurroundData(const StyleSurroundData& other) :
      border_image_(other.border_image_)
      , border_bottom_left_radius_(other.border_bottom_left_radius_)
      , border_bottom_right_radius_(other.border_bottom_right_radius_)
      , border_top_left_radius_(other.border_top_left_radius_)
      , border_top_right_radius_(other.border_top_right_radius_)
      , bottom_(other.bottom_)
      , left_(other.left_)
      , margin_bottom_(other.margin_bottom_)
      , margin_left_(other.margin_left_)
      , margin_right_(other.margin_right_)
      , margin_top_(other.margin_top_)
      , padding_bottom_(other.padding_bottom_)
      , padding_left_(other.padding_left_)
      , padding_right_(other.padding_right_)
      , padding_top_(other.padding_top_)
      , right_(other.right_)
      , top_(other.top_)
      , border_bottom_color_(other.border_bottom_color_)
      , border_left_color_(other.border_left_color_)
      , border_right_color_(other.border_right_color_)
      , border_top_color_(other.border_top_color_)
      , border_bottom_width_(other.border_bottom_width_)
      , border_left_width_(other.border_left_width_)
      , border_right_width_(other.border_right_width_)
      , border_top_width_(other.border_top_width_)
      , border_bottom_style_(other.border_bottom_style_)
      , border_left_style_(other.border_left_style_)
      , border_right_style_(other.border_right_style_)
      , border_top_style_(other.border_top_style_)
      , border_bottom_color_is_current_color_(other.border_bottom_color_is_current_color_)
      , border_left_color_is_current_color_(other.border_left_color_is_current_color_)
      , border_right_color_is_current_color_(other.border_right_color_is_current_color_)
      , border_top_color_is_current_color_(other.border_top_color_is_current_color_)
  {}

ComputedStyleBase::StyleVisualData::StyleVisualData() :
      clip_(LengthBox())
      , zoom_(1.0)
      , text_decoration_(static_cast<unsigned>(TextDecoration::kNone))
      , has_auto_clip_(static_cast<unsigned>(true))
  {
  }

ComputedStyleBase::StyleVisualData::StyleVisualData(const StyleVisualData& other) :
      clip_(other.clip_)
      , zoom_(other.zoom_)
      , text_decoration_(other.text_decoration_)
      , has_auto_clip_(other.has_auto_clip_)
  {}

ComputedStyleBase::StyleBackgroundData::StyleBackgroundData() :
      background_(FillLayer(EFillLayerType::kBackground, true))
      , background_color_(StyleColor(Color::kTransparent))
  {
  }

ComputedStyleBase::StyleBackgroundData::StyleBackgroundData(const StyleBackgroundData& other) :
      background_(other.background_)
      , background_color_(other.background_color_)
  {}

ComputedStyleBase::StyleFontData::StyleFontData() :
      font_(Font())
  {
  }

ComputedStyleBase::StyleFontData::StyleFontData(const StyleFontData& other) :
      font_(other.font_)
  {}

ComputedStyleBase::StyleInheritedData::StyleInheritedData() :
      line_height_(Length::Percent(-100.0))
      , text_autosizing_multiplier_(1.0)
      , color_(Color::kBlack)
      , visited_link_color_(Color::kBlack)
      , horizontal_border_spacing_(0)
      , vertical_border_spacing_(0)
  {
    font_data_.Init();
  }

ComputedStyleBase::StyleInheritedData::StyleInheritedData(const StyleInheritedData& other) :
      font_data_(other.font_data_)
      , line_height_(other.line_height_)
      , text_autosizing_multiplier_(other.text_autosizing_multiplier_)
      , color_(other.color_)
      , visited_link_color_(other.visited_link_color_)
      , horizontal_border_spacing_(other.horizontal_border_spacing_)
      , vertical_border_spacing_(other.vertical_border_spacing_)
  {}

ComputedStyleBase::StyleRareInheritedUsageLessThan40PercentSubData::StyleRareInheritedUsageLessThan40PercentSubData() :
      highlight_(g_null_atom)
      , hyphenation_string_(AtomicString())
      , text_emphasis_custom_mark_(AtomicString())
      , applied_text_decorations_(nullptr)
      , inherited_variables_(nullptr)
      , initial_data_(nullptr)
      , cursor_data_(nullptr)
      , text_stroke_width_(0)
      , effective_zoom_(1.0f)
      , tap_highlight_color_(LayoutTheme::TapHighlightColor())
      , text_emphasis_color_(Color())
      , text_fill_color_(Color())
      , text_stroke_color_(Color())
      , visited_link_text_stroke_color_(Color())
      , visited_link_text_fill_color_(Color())
      , visited_link_text_emphasis_color_(Color())
      , visited_link_caret_color_(Color())
      , hyphenation_limit_before_(-1)
      , hyphenation_limit_after_(-1)
      , hyphenation_limit_lines_(-1)
      , line_height_step_(0)
      , effective_touch_action_(static_cast<unsigned>(TouchAction::kTouchActionAuto))
      , line_break_(static_cast<unsigned>(LineBreak::kAuto))
      , text_emphasis_mark_(static_cast<unsigned>(TextEmphasisMark::kNone))
      , text_emphasis_position_(static_cast<unsigned>(TextEmphasisPosition::kOverRight))
      , text_security_(static_cast<unsigned>(ETextSecurity::kNone))
      , user_modify_(static_cast<unsigned>(EUserModify::kReadOnly))
      , caret_color_is_auto_(static_cast<unsigned>(true))
      , caret_color_is_current_color_(static_cast<unsigned>(false))
      , ruby_position_(static_cast<unsigned>(RubyPosition::kBefore))
      , self_or_ancestor_has_dir_auto_attribute_(static_cast<unsigned>(false))
      , subtree_is_sticky_(static_cast<unsigned>(false))
      , subtree_will_change_contents_(static_cast<unsigned>(false))
      , text_emphasis_color_is_current_color_(static_cast<unsigned>(true))
      , text_emphasis_fill_(static_cast<unsigned>(TextEmphasisFill::kFilled))
      , text_fill_color_is_current_color_(static_cast<unsigned>(true))
      , text_indent_line_(static_cast<unsigned>(TextIndentLine::kFirstLine))
      , text_indent_type_(static_cast<unsigned>(TextIndentType::kNormal))
      , text_stroke_color_is_current_color_(static_cast<unsigned>(true))
      , visited_link_caret_color_is_auto_(static_cast<unsigned>(true))
      , visited_link_caret_color_is_current_color_(static_cast<unsigned>(false))
      , visited_link_text_emphasis_color_is_current_color_(static_cast<unsigned>(true))
      , visited_link_text_fill_color_is_current_color_(static_cast<unsigned>(true))
      , visited_link_text_stroke_color_is_current_color_(static_cast<unsigned>(true))
  {
  }

ComputedStyleBase::StyleRareInheritedUsageLessThan40PercentSubData::StyleRareInheritedUsageLessThan40PercentSubData(const StyleRareInheritedUsageLessThan40PercentSubData& other) :
      highlight_(other.highlight_)
      , hyphenation_string_(other.hyphenation_string_)
      , text_emphasis_custom_mark_(other.text_emphasis_custom_mark_)
      , applied_text_decorations_(MemberCopy(other.applied_text_decorations_))
      , inherited_variables_(MemberCopy(other.inherited_variables_))
      , initial_data_(MemberCopy(other.initial_data_))
      , cursor_data_(MemberCopy(other.cursor_data_))
      , text_stroke_width_(other.text_stroke_width_)
      , effective_zoom_(other.effective_zoom_)
      , tap_highlight_color_(other.tap_highlight_color_)
      , text_emphasis_color_(other.text_emphasis_color_)
      , text_fill_color_(other.text_fill_color_)
      , text_stroke_color_(other.text_stroke_color_)
      , visited_link_text_stroke_color_(other.visited_link_text_stroke_color_)
      , visited_link_text_fill_color_(other.visited_link_text_fill_color_)
      , visited_link_text_emphasis_color_(other.visited_link_text_emphasis_color_)
      , visited_link_caret_color_(other.visited_link_caret_color_)
      , hyphenation_limit_before_(other.hyphenation_limit_before_)
      , hyphenation_limit_after_(other.hyphenation_limit_after_)
      , hyphenation_limit_lines_(other.hyphenation_limit_lines_)
      , line_height_step_(other.line_height_step_)
      , effective_touch_action_(other.effective_touch_action_)
      , line_break_(other.line_break_)
      , text_emphasis_mark_(other.text_emphasis_mark_)
      , text_emphasis_position_(other.text_emphasis_position_)
      , text_security_(other.text_security_)
      , user_modify_(other.user_modify_)
      , caret_color_is_auto_(other.caret_color_is_auto_)
      , caret_color_is_current_color_(other.caret_color_is_current_color_)
      , ruby_position_(other.ruby_position_)
      , self_or_ancestor_has_dir_auto_attribute_(other.self_or_ancestor_has_dir_auto_attribute_)
      , subtree_is_sticky_(other.subtree_is_sticky_)
      , subtree_will_change_contents_(other.subtree_will_change_contents_)
      , text_emphasis_color_is_current_color_(other.text_emphasis_color_is_current_color_)
      , text_emphasis_fill_(other.text_emphasis_fill_)
      , text_fill_color_is_current_color_(other.text_fill_color_is_current_color_)
      , text_indent_line_(other.text_indent_line_)
      , text_indent_type_(other.text_indent_type_)
      , text_stroke_color_is_current_color_(other.text_stroke_color_is_current_color_)
      , visited_link_caret_color_is_auto_(other.visited_link_caret_color_is_auto_)
      , visited_link_caret_color_is_current_color_(other.visited_link_caret_color_is_current_color_)
      , visited_link_text_emphasis_color_is_current_color_(other.visited_link_text_emphasis_color_is_current_color_)
      , visited_link_text_fill_color_is_current_color_(other.visited_link_text_fill_color_is_current_color_)
      , visited_link_text_stroke_color_is_current_color_(other.visited_link_text_stroke_color_is_current_color_)
  {}

ComputedStyleBase::StyleRareInheritedUsageLessThan100PercentData::StyleRareInheritedUsageLessThan100PercentData() :
      tab_size_(TabSize(8))
      , caret_color_(Color())
      , text_align_last_(static_cast<unsigned>(ETextAlignLast::kAuto))
      , text_underline_position_(static_cast<unsigned>(kTextUnderlinePositionAuto))
      , hyphens_(static_cast<unsigned>(Hyphens::kManual))
      , text_justify_(static_cast<unsigned>(TextJustify::kAuto))
      , text_orientation_(static_cast<unsigned>(ETextOrientation::kMixed))
      , respect_image_orientation_(static_cast<unsigned>(false))
      , text_combine_(static_cast<unsigned>(ETextCombine::kNone))
      , text_decoration_skip_ink_(static_cast<unsigned>(ETextDecorationSkipInk::kAuto))
  {
  }

ComputedStyleBase::StyleRareInheritedUsageLessThan100PercentData::StyleRareInheritedUsageLessThan100PercentData(const StyleRareInheritedUsageLessThan100PercentData& other) :
      tab_size_(other.tab_size_)
      , caret_color_(other.caret_color_)
      , text_align_last_(other.text_align_last_)
      , text_underline_position_(other.text_underline_position_)
      , hyphens_(other.hyphens_)
      , text_justify_(other.text_justify_)
      , text_orientation_(other.text_orientation_)
      , respect_image_orientation_(other.respect_image_orientation_)
      , text_combine_(other.text_combine_)
      , text_decoration_skip_ink_(other.text_decoration_skip_ink_)
  {}

ComputedStyleBase::StyleRareInheritedUsageLessThan40PercentData::StyleRareInheritedUsageLessThan40PercentData() :
      quotes_(nullptr)
      , text_shadow_(nullptr)
      , list_style_image_(nullptr)
      , text_indent_(Length::Fixed())
      , text_size_adjust_(TextSizeAdjust::AdjustAuto())
      , orphans_(2)
      , widows_(2)
      , image_rendering_(static_cast<unsigned>(EImageRendering::kAuto))
      , speak_(static_cast<unsigned>(ESpeak::kNormal))
      , user_select_(static_cast<unsigned>(EUserSelect::kAuto))
      , word_break_(static_cast<unsigned>(EWordBreak::kNormal))
      , overflow_wrap_(static_cast<unsigned>(EOverflowWrap::kNormal))
  {
    rare_inherited_usage_less_than_40_percent_sub_data_.Init();
    rare_inherited_usage_less_than_100_percent_data_.Init();
  }

ComputedStyleBase::StyleRareInheritedUsageLessThan40PercentData::StyleRareInheritedUsageLessThan40PercentData(const StyleRareInheritedUsageLessThan40PercentData& other) :
      rare_inherited_usage_less_than_40_percent_sub_data_(other.rare_inherited_usage_less_than_40_percent_sub_data_)
      , rare_inherited_usage_less_than_100_percent_data_(other.rare_inherited_usage_less_than_100_percent_data_)
      , quotes_(MemberCopy(other.quotes_))
      , text_shadow_(MemberCopy(other.text_shadow_))
      , list_style_image_(MemberCopy(other.list_style_image_))
      , text_indent_(other.text_indent_)
      , text_size_adjust_(other.text_size_adjust_)
      , orphans_(other.orphans_)
      , widows_(other.widows_)
      , image_rendering_(other.image_rendering_)
      , speak_(other.speak_)
      , user_select_(other.user_select_)
      , word_break_(other.word_break_)
      , overflow_wrap_(other.overflow_wrap_)
  {}


} // namespace blink
