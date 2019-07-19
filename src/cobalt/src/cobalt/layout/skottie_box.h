// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#pragma once

#include "base/basictypes.h"
#include "base/callback.h"
#include "base/memory/ref_counted.h"
#include "base/optional.h"
#include "base/time/time.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/layout/box.h"
#include "cobalt/layout/paragraph.h"
#include "cobalt/math/rect.h"
#include "cobalt/math/size_f.h"
#include "cobalt/render_tree/image.h"
#include "cobalt/render_tree/skottie_node.h"

namespace cobalt {
namespace layout {

// The class represents a Replaced element in the layout tree. It is used to
// render elements like embed, iframe or video. Currently it renders the element
// as an image retrieved from a callback passed into its ctor.
//   https://www.w3.org/TR/html5/rendering.html#replaced-elements
//
// TODO: Make ReplacedBox support elements other than media element.
class SkottieBox : public Box {
 public:
  //typedef render_tree::SkottieNode::SetBoundsCB SetBoundsCB;
#if defined(ENABLE_SKOTTIE)
  typedef render_tree::SkottieNode::GetSkottieAnimCB GetSkottieAnimCB;
#endif // ENABLE_SKOTTIE

  SkottieBox(const scoped_refptr<cssom::CSSComputedStyleDeclaration>&
                  css_computed_style_declaration,
              //const SetBoundsCB& set_bounds_cb,
#if defined(ENABLE_SKOTTIE)
              const SkottieBox::GetSkottieAnimCB& replace_skottie_animation_cb,
#endif // ENABLE_SKOTTIE
              const scoped_refptr<Paragraph>& paragraph, int32 text_position,
              const base::Optional<LayoutUnit>& maybe_intrinsic_width,
              const base::Optional<LayoutUnit>& maybe_intrinsic_height,
              const base::Optional<float>& maybe_intrinsic_ratio,
              UsedStyleProvider* used_style_provider,
              const math::SizeF& content_size,
              LayoutStatTracker* layout_stat_tracker);

  // From |Box|.
  WrapResult TryWrapAt(WrapAtPolicy wrap_at_policy,
                       WrapOpportunityPolicy wrap_opportunity_policy,
                       bool is_line_existence_justified,
                       LayoutUnit available_width,
                       bool should_collapse_trailing_white_space) override;

  void SplitBidiLevelRuns() override;
  bool TrySplitAtSecondBidiLevelRun() override;
  base::Optional<int> GetBidiLevel() const override;

  void SetShouldCollapseLeadingWhiteSpace(
      bool should_collapse_leading_white_space) override;
  void SetShouldCollapseTrailingWhiteSpace(
      bool should_collapse_trailing_white_space) override;
  bool HasLeadingWhiteSpace() const override;
  bool HasTrailingWhiteSpace() const override;
  bool IsCollapsed() const override;

  bool JustifiesLineExistence() const override;
  bool AffectsBaselineInBlockFormattingContext() const override;
  LayoutUnit GetBaselineOffsetFromTopMarginEdge() const override;

 protected:
  // From |Box|.
  void UpdateContentSizeAndMargins(const LayoutParams& layout_params) override;

  void RenderAndAnimateContent(
      render_tree::CompositionNode::Builder* border_node_builder,
      ContainerBox* stacking_context) const override;

  bool IsTransformable() const override { return true; }

#ifdef COBALT_BOX_DUMP_ENABLED
  void DumpProperties(std::ostream* stream) const override;
#endif  // COBALT_BOX_DUMP_ENABLED

  // Rest of the protected methods.

  // Updates used values of "margin-left" and "margin-right" properties based on
  // https://www.w3.org/TR/CSS21/visudet.html#block-replaced-width and
  // https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width.
  virtual void UpdateHorizontalMargins(
      LayoutUnit containing_block_width, LayoutUnit border_box_width,
      const base::Optional<LayoutUnit>& maybe_margin_left,
      const base::Optional<LayoutUnit>& maybe_margin_right) = 0;

  // TODO: Make private.
  const base::Optional<LayoutUnit> maybe_intrinsic_width_;
  const base::Optional<LayoutUnit> maybe_intrinsic_height_;
  const float intrinsic_ratio_;

 private:
  void RenderAndAnimateContentWithLetterboxing(
      render_tree::CompositionNode::Builder* border_node_builder) const;

  //const SetBoundsCB set_bounds_cb_;
#if defined(ENABLE_SKOTTIE)
  const SkottieBox::GetSkottieAnimCB replace_skottie_animation_cb_;
#endif // ENABLE_SKOTTIE

  const scoped_refptr<Paragraph> paragraph_;
  int32 text_position_;
  math::SizeF content_size_;
};

}  // namespace layout
}  // namespace cobalt
