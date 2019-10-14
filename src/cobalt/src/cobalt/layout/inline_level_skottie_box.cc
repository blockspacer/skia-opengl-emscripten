// Copyright 2014 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/layout/inline_level_skottie_box.h"

#include "cobalt/layout/used_style.h"
#include "cobalt/math/size_f.h"

namespace cobalt {
namespace layout {

InlineLevelSkottieBox::InlineLevelSkottieBox(
    const scoped_refptr<cssom::CSSComputedStyleDeclaration>&
        css_computed_style_declaration,
    //const SetBoundsCB& set_bounds_cb,
#if defined(ENABLE_SKOTTIE)
    const SkottieBox::GetSkottieTimeCB& skottie_animation_time_cb,
    const SkottieBox::GetSkottieAnimCB& replace_skottie_animation_cb,
#endif // ENABLE_SKOTTIE
    const scoped_refptr<Paragraph>& paragraph, int32 text_position,
    const base::Optional<LayoutUnit>& maybe_intrinsic_width,
    const base::Optional<LayoutUnit>& maybe_intrinsic_height,
    const base::Optional<float>& maybe_intrinsic_ratio,
    UsedStyleProvider* used_style_provider,
    const math::SizeF& content_size,
    LayoutStatTracker* layout_stat_tracker)
    : SkottieBox(css_computed_style_declaration,
                  //set_bounds_cb,
#if defined(ENABLE_SKOTTIE)
                  skottie_animation_time_cb,
                  replace_skottie_animation_cb,
#endif // ENABLE_SKOTTIE
                  paragraph, text_position,
                  maybe_intrinsic_width, maybe_intrinsic_height,
                  maybe_intrinsic_ratio, used_style_provider,
                  content_size, layout_stat_tracker),
      is_hidden_by_ellipsis_(false),
      was_hidden_by_ellipsis_(false) {}

Box::Level InlineLevelSkottieBox::GetLevel() const { return kInlineLevel; }

bool InlineLevelSkottieBox::DoesFulfillEllipsisPlacementRequirement() const {
  // This box fulfills the requirement that the first character or inline-level
  // element must appear on the line before ellipsing can occur
  // (https://www.w3.org/TR/css3-ui/#propdef-text-overflow).
  return true;
}

void InlineLevelSkottieBox::DoPreEllipsisPlacementProcessing() {
  was_hidden_by_ellipsis_ = is_hidden_by_ellipsis_;
  is_hidden_by_ellipsis_ = false;
}

void InlineLevelSkottieBox::DoPostEllipsisPlacementProcessing() {
  if (was_hidden_by_ellipsis_ != is_hidden_by_ellipsis_) {
    InvalidateRenderTreeNodesOfBoxAndAncestors();
  }
}

bool InlineLevelSkottieBox::IsHiddenByEllipsis() const {
  return is_hidden_by_ellipsis_;
}

void InlineLevelSkottieBox::UpdateHorizontalMargins(
    LayoutUnit containing_block_width, LayoutUnit border_box_width,
    const base::Optional<LayoutUnit>& maybe_margin_left,
    const base::Optional<LayoutUnit>& maybe_margin_right) {
  SB_UNREFERENCED_PARAMETER(containing_block_width);
  SB_UNREFERENCED_PARAMETER(border_box_width);

  // A computed value of "auto" for "margin-left" or "margin-right" becomes
  // a used value of "0".
  //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width
  set_margin_left(maybe_margin_left.value_or(LayoutUnit()));
  set_margin_right(maybe_margin_right.value_or(LayoutUnit()));
}

#ifdef COBALT_BOX_DUMP_ENABLED

void InlineLevelSkottieBox::DumpClassName(std::ostream* stream) const {
  *stream << "InlineLevelSkottieBox ";
}

#endif  // COBALT_BOX_DUMP_ENABLED

void InlineLevelSkottieBox::DoPlaceEllipsisOrProcessPlacedEllipsis(
    BaseDirection base_direction, LayoutUnit /*desired_offset*/,
    bool* is_placement_requirement_met, bool* is_placed,
    LayoutUnit* placed_offset) {
  // If the ellipsis is already placed, then simply mark the box as hidden by
  // the ellipsis: "Implementations must hide characters and atomic inline-level
  // elements at the applicable edge(s) of the line as necessary to fit the
  // ellipsis."
  //   https://www.w3.org/TR/css3-ui/#propdef-text-overflow
  if (*is_placed) {
    is_hidden_by_ellipsis_ = true;
    // Otherwise, the box is placing the ellipsis.
  } else {
    *is_placed = true;

    // The first character or atomic inline-level element on a line must be
    // clipped rather than ellipsed.
    //   https://www.w3.org/TR/css3-ui/#propdef-text-overflow
    // If this requirement has been met, then place the ellipsis at the start
    // edge of atomic inline-level element, as it should be fully hidden.
    if (*is_placement_requirement_met) {
      *placed_offset =
          GetMarginBoxStartEdgeOffsetFromContainingBlock(base_direction);
      is_hidden_by_ellipsis_ = true;
      // Otherwise, this box is fulfilling the required first inline-level
      // element and the ellipsis must be added at the end edge.
    } else {
      *placed_offset =
          GetMarginBoxEndEdgeOffsetFromContainingBlock(base_direction);
    }
  }
}

}  // namespace layout
}  // namespace cobalt
