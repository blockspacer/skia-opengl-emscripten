#pragma once

#if 0

#include "base/basictypes.h"
#include "base/memory/ref_counted.h"
#include "base/optional.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_transition_set.h"
#include "cobalt/layout/box.h"
#include "cobalt/layout/paragraph.h"
#include "cobalt/math/size_f.h"

#include "extended_html/component/component.h"

namespace cobalt {
namespace layout {

class BlockLevelComponent : public Component {
 public:
  BlockLevelComponent(
      const scoped_refptr<cssom::CSSComputedStyleDeclaration>&
          css_computed_style_declaration,
      //const ReplaceImageCB& replace_image_cb, const SetBoundsCB& set_bounds_cb,
      //const Component::GetInputAnimCB& replace_input_animation_cb,
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

  // From |Component|.
  void UpdateHorizontalMargins(
      LayoutUnit containing_block_width, LayoutUnit border_box_width,
      const base::Optional<LayoutUnit>& maybe_margin_left,
      const base::Optional<LayoutUnit>& maybe_margin_right) override;
};

}  // namespace layout
}  // namespace cobalt

#endif // 0
