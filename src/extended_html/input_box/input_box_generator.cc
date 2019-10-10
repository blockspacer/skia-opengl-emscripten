#include "extended_html/input_box/input_box_generator.h"

#include <algorithm>
#include <memory>

#include "base/bind.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/layout/container_box.h"
#include "cobalt/layout/letterboxed_image.h"
#include "cobalt/layout/used_style.h"
#include "cobalt/layout/white_space_processing.h"
#include "cobalt/loader/mesh/mesh_projection.h"
#include "cobalt/math/transform_2d.h"
#include "cobalt/math/vector2d_f.h"
#include "cobalt/render_tree/brush.h"
#include "cobalt/render_tree/color_rgba.h"
#include "cobalt/render_tree/filter_node.h"
#include "cobalt/render_tree/image_node.h"
#include "cobalt/render_tree/map_to_mesh_filter.h"
#include "cobalt/render_tree/punch_through_video_node.h"
#include "cobalt/render_tree/rect_node.h"
#include "cobalt/render_tree/resource_provider.h"

#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"

using namespace cobalt;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::dom;

void InputBoxGenerator::VisitKeyword(cssom::KeywordValue* keyword) {
  switch (keyword->value()) {
    case cssom::KeywordValue::kBlock:
    case cssom::KeywordValue::kFlex:
      input_box_ = WrapRefCounted(new BlockLevelInputBox(
          css_computed_style_declaration_
          //, replace_image_cb_, set_bounds_cb_,
          //, replace_input_animation_cb_
          , paragraph_, text_position_, maybe_intrinsic_width_,
          maybe_intrinsic_height_, maybe_intrinsic_ratio_,
          context_->used_style_provider,
          //, is_video_punched_out_
          content_size_,
          context_->layout_stat_tracker));
      break;
    case cssom::KeywordValue::kInline:
    case cssom::KeywordValue::kInlineBlock:
    case cssom::KeywordValue::kInlineFlex:
      input_box_ = WrapRefCounted(new InlineLevelInputBox(
          css_computed_style_declaration_,
          //replace_input_animation_cb_,
          //set_bounds_cb_,
          paragraph_, text_position_, maybe_intrinsic_width_,
          maybe_intrinsic_height_, maybe_intrinsic_ratio_,
          context_->used_style_provider, content_size_,
          context_->layout_stat_tracker));
      break;
    // The element generates no boxes and has no effect on layout.
    case cssom::KeywordValue::kNone:
      // Leave |input_box_| NULL.
      break;
    case cssom::KeywordValue::kAbsolute:
    case cssom::KeywordValue::kAlternate:
    case cssom::KeywordValue::kAlternateReverse:
    case cssom::KeywordValue::kAuto:
    case cssom::KeywordValue::kBackwards:
    case cssom::KeywordValue::kBaseline:
    case cssom::KeywordValue::kBoth:
    case cssom::KeywordValue::kBottom:
    case cssom::KeywordValue::kBreakWord:
    case cssom::KeywordValue::kCenter:
    case cssom::KeywordValue::kClip:
    case cssom::KeywordValue::kCollapse:
    case cssom::KeywordValue::kColumn:
    case cssom::KeywordValue::kColumnReverse:
    case cssom::KeywordValue::kContain:
    case cssom::KeywordValue::kContent:
    case cssom::KeywordValue::kCover:
    case cssom::KeywordValue::kCurrentColor:
    case cssom::KeywordValue::kCursive:
    case cssom::KeywordValue::kEllipsis:
    case cssom::KeywordValue::kEnd:
    case cssom::KeywordValue::kEquirectangular:
    case cssom::KeywordValue::kFantasy:
    case cssom::KeywordValue::kFixed:
    case cssom::KeywordValue::kFlexEnd:
    case cssom::KeywordValue::kFlexStart:
    case cssom::KeywordValue::kForwards:
    case cssom::KeywordValue::kHidden:
    case cssom::KeywordValue::kInfinite:
    case cssom::KeywordValue::kInherit:
    case cssom::KeywordValue::kInitial:
    case cssom::KeywordValue::kLeft:
    case cssom::KeywordValue::kLineThrough:
    case cssom::KeywordValue::kMiddle:
    case cssom::KeywordValue::kMonoscopic:
    case cssom::KeywordValue::kMonospace:
    case cssom::KeywordValue::kNoRepeat:
    case cssom::KeywordValue::kNormal:
    case cssom::KeywordValue::kNowrap:
    case cssom::KeywordValue::kPre:
    case cssom::KeywordValue::kPreLine:
    case cssom::KeywordValue::kPreWrap:
    case cssom::KeywordValue::kRelative:
    case cssom::KeywordValue::kRepeat:
    case cssom::KeywordValue::kReverse:
    case cssom::KeywordValue::kRight:
    case cssom::KeywordValue::kRow:
    case cssom::KeywordValue::kRowReverse:
    case cssom::KeywordValue::kSansSerif:
    case cssom::KeywordValue::kScroll:
    case cssom::KeywordValue::kSerif:
    case cssom::KeywordValue::kSolid:
    case cssom::KeywordValue::kSpaceAround:
    case cssom::KeywordValue::kSpaceBetween:
    case cssom::KeywordValue::kStart:
    case cssom::KeywordValue::kStatic:
    case cssom::KeywordValue::kStereoscopicLeftRight:
    case cssom::KeywordValue::kStereoscopicTopBottom:
    case cssom::KeywordValue::kStretch:
    case cssom::KeywordValue::kTop:
    case cssom::KeywordValue::kUppercase:
    case cssom::KeywordValue::kVisible:
    case cssom::KeywordValue::kWrap:
    case cssom::KeywordValue::kWrapReverse:
      NOTREACHED();
      break;
  }
}
