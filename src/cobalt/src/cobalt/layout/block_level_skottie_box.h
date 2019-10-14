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
#include "base/memory/ref_counted.h"
#include "base/optional.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_transition_set.h"
#include "cobalt/layout/box.h"
#include "cobalt/layout/paragraph.h"
#include "cobalt/layout/skottie_box.h"
#include "cobalt/math/size_f.h"

namespace cobalt {
namespace layout {

class BlockLevelSkottieBox : public SkottieBox {
 public:
  BlockLevelSkottieBox(
      const scoped_refptr<cssom::CSSComputedStyleDeclaration>&
          css_computed_style_declaration,
#if defined(ENABLE_SKOTTIE)
      //const ReplaceImageCB& replace_image_cb, const SetBoundsCB& set_bounds_cb,
      const SkottieBox::GetSkottieTimeCB& skottie_animation_time_cb,
      const SkottieBox::GetSkottieAnimCB& replace_skottie_animation_cb,
#endif // ENABLE_SKOTTIE
      const scoped_refptr<Paragraph>& paragraph, int32 text_position,
      const base::Optional<LayoutUnit>& maybe_intrinsic_width,
      const base::Optional<LayoutUnit>& maybe_intrinsic_height,
      const base::Optional<float>& maybe_intrinsic_ratio,
      UsedStyleProvider* used_style_provider
      // , base::Optional<bool> is_video_punched_out
      , const math::SizeF& content_size, LayoutStatTracker* layout_stat_tracker);

  // From |Box|.
  Level GetLevel() const override;

 protected:
  // From |Box|.
#ifdef COBALT_BOX_DUMP_ENABLED
  void DumpClassName(std::ostream* stream) const override;
#endif  // COBALT_BOX_DUMP_ENABLED

  // From |SkottieBox|.
  void UpdateHorizontalMargins(
      LayoutUnit containing_block_width, LayoutUnit border_box_width,
      const base::Optional<LayoutUnit>& maybe_margin_left,
      const base::Optional<LayoutUnit>& maybe_margin_right) override;
};

}  // namespace layout
}  // namespace cobalt
