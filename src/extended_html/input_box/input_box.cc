#include "extended_html/input_box/input_box.h"

#include "extended_html/input_box/HTMLInputElement.h"

#include "extended_html/input_box/HTMLInputElement.h"

#include "cobalt/render_tree/node_visitor.h"

#include "cobalt/base/polymorphic_downcast.h"

#include "renderer_stub/rasterizer/skia/render_tree_node_visitor.h"

#ifdef ENABLE_COBALT
#include "cobalt/base/polymorphic_downcast.h"
#endif ENABLE_COBALT

#ifdef ENABLE_BASE

#include "base/memory/ptr_util.h"
#include "base/macros.h"
#include "base/strings/stringprintf.h"
#include "base/stl_util.h"
#include "base/strings/utf_string_conversions.h"
//#include "base/task/sequence_manager/thread_controller_with_message_pump_impl.h"
#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/memory/scoped_refptr.h"
#include "base/single_thread_task_runner.h"
#include "base/threading/thread_task_runner_handle.h"

#include "base/numerics/checked_math.h"
#include "base/numerics/clamped_math.h"
#include "base/numerics/safe_conversions.h"

#include "base/i18n/icu_string_conversions.h"
#include "base/i18n/string_compare.h"

#include "base/stl_util.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/sys_string_conversions.h"
#include "base/base_switches.h"
#include "base/command_line.h"
#include "base/containers/small_map.h"
#include "base/i18n/icu_util.h"
#include "base/i18n/rtl.h"
#include "base/allocator/partition_allocator/page_allocator.h"

#include "base/memory/scoped_refptr.h"

#include "base/i18n/rtl.h"
#include "base/stl_util.h"

#include "base/memory/ref_counted_memory.h"
#include "base/memory/read_only_shared_memory_region.h"
#include "base/stl_util.h"
#include "base/bind.h"
#include "base/memory/weak_ptr.h"
//#include "base/test/gtest_util.h"
#include "base/threading/thread.h"
#include "base/logging.h"
#include "base/system/sys_info.h"

#include "base/synchronization/waitable_event.h"

//#include "base/task/sequence_manager/sequence_manager.h"

#include "base/observer_list.h"
#include "base/synchronization/lock.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/timer/timer.h"

#include "base/callback.h"
//#include "base/containers/hash_tables.h"
#include "base/bind.h"
#include "base/callback.h"
#include "base/command_line.h"
#include "base/logging.h"
#include "base/memory/weak_ptr.h"
#include "base/message_loop/message_loop.h"
#include "base/optional.h"
#include "base/strings/stringprintf.h"
#include "base/synchronization/waitable_event.h"
//#include "base/trace_event/trace_event.h"
#include "base/bind.h"
#include "base/strings/stringprintf.h"
#include "base/trace_event/trace_event.h"
#include "base/callback.h"
////#include "base/message_loop.h"

#include "base/files/file_path.h"
#include "base/message_loop/message_loop.h"
#include "base/synchronization/waitable_event.h"
#include "base/threading/thread.h"
#include "base/threading/thread_checker.h"

#include "base/feature_list.h"
#include "cobalt/base/cobalt_token.h"

#include "cobalt/base/tokens.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_html_element.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/mouse_event_init.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/ui_event.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/math/vector2d.h"
#include "cobalt/math/vector2d_f.h"

// Create a TYPE_DEFAULT message-loop.

#endif // ENABLE_BASE

#include "blink_demo.h"

#ifdef ENABLE_BLINK_UI
#include "ui/display/display.h"
#include "ui/display/display_switches.h"
#include "ui/display/display_list.h"
#include "ui/display/display_observer.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/size.h"
#endif // ENABLE_UI

#ifdef ENABLE_BLINK_UI_NATIVE_THEME
#include "ui/native_theme/native_theme.h"
#include "ui/native_theme/native_theme_aura.h"
#include "third_party/skia/include/core/SkPath.h"

#include "ui/gfx/geometry/size.h"
#include "ui/gfx/skia_util.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/color_utils.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/vector2d.h"
//#include "ui/gfx/native_input_node_widget_types.h"
#endif // ENABLE_BLINK_UI_NATIVE_THEME

#include "ui/display/manager/default_touch_transform_setter.h"
#include "ui/display/manager/display_manager.h"
#include "ui/display/manager/test/touch_device_manager_test_api.h"
#include "ui/display/manager/touch_device_manager.h"
#include "ui/display/screen_base.h"
#include "ui/events/devices/device_data_manager.h"
#include "base/strings/string_number_conversions.h"

#include "ui/compositor/compositor.h"
//#include "ui/compositor/test/test_context_factories.h"

#include "cc/layers/layer.h"
#include "cc/trees/layer_tree_host.h"

#include "base/macros.h"
#include "ui/views/controls/button/button.h"
#include "ui/views/controls/button/label_button.h"
#include "ui/views/controls/button/radio_button.h"
#include "ui/views/controls/combobox/combobox_listener.h"
#include "ui/views/controls/textfield/textfield_controller.h"
#include "ui/views/controls/button/image_button.h"
#include "ui/views/controls/native/native_view_host.h"
#include "ui/views/controls/textfield/textfield.h"
#include "ui/views/controls/textfield/textfield_controller.h"
#include "ui/views/controls/combobox/combobox.h"
#include "ui/views/controls/label.h"
#include "ui/views/controls/textfield/textfield.h"
#include "ui/views/controls/combobox/combobox.h"
#include "ui/views/controls/label.h"
#include "ui/views/controls/throbber.h"
#include "ui/views/examples/example_base.h"
#include "base/memory/ptr_util.h"
#include "base/stl_util.h"
#include "base/strings/utf_string_conversions.h"
#include "ui/views/background.h"
#include "ui/views/border.h"
#include "ui/views/paint_info.h"
#include "ui/views/background.h"
#include "ui/views/metadata/metadata_types.h"
#include "ui/views/view_observer.h"
#include "ui/views/widget/native_widget.h"
#include "ui/views/widget/root_view.h"
#include "ui/base/ime/text_input_client.h"
#include "ui/base/ime/input_method.h"
#include "ui/base/l10n/l10n_font_util.h"
#include "ui/events/event.h"
#include "ui/events/event_utils.h"
#include "ui/views/focus/focus_manager_factory.h"
//#include "ui/views/focus/input_node_widget_focus_manager.h"
#include "ui/views/window/dialog_client_view.h"
#include "ui/views/window/dialog_delegate.h"
#include "ui/views/examples/example_combobox_model.h"
#include "ui/views/layout/box_layout.h"
#include "ui/views/layout/grid_layout.h"
#include "ui/views/layout/fill_layout.h"
#include "ui/views/view.h"
#include "ui/views/layout/layout_provider.h"
#include "ui/views/views_delegate.h"
#include "ui/views/widget/widget.h"
#include "base/macros.h"
#include "base/run_loop.h"
#include "base/strings/utf_string_conversions.h"
#include "ui/base/l10n/l10n_util.h"
#include "ui/base/models/combobox_model.h"
#include "ui/base/ui_base_paths.h"
#include "ui/views/background.h"
#include "ui/views/view_class_properties.h"

#include "ui/base/resource/data_pack.h"
#include "ui/base/resource/resource_bundle.h"

#include "ui/compositor/paint_recorder.h"
#include "ui/compositor/canvas_painter.h"

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


#include "starboard/event.h"

#include "base/bind.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "base/logging.h"
#include "base/stl_util.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/stringprintf.h"
#include "base/strings/utf_string_conversions.h"

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

#include "base/lazy_instance.h"
#include "base/strings/string_util.h"
#include "base/trace_event/trace_event.h"
#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/user_log.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/selector.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/dom_rect.h"
#include "cobalt/dom/dom_rect_list.h"
#include "cobalt/dom/dom_token_list.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/mutation_reporter.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/parser.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/serializer.h"
#include "cobalt/dom/text.h"
#include "cobalt/math/rect_f.h"
#include "nb/memory_scope.h"
#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/node.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/web_animations/animation_set.h"
#include "cobalt/dom/event_target.h"
#include "cobalt/dom_parser/html_decoder.h"
#include "cobalt/dom/attr.h"
#include "cobalt/dom/font_cache.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/error_event.h"
#include "cobalt/dom/error_event_init.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/event.h"

#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"

namespace cobalt {
namespace layout {

using render_tree::CompositionNode;
using render_tree::FilterNode;
using render_tree::ImageNode;
using render_tree::MapToMeshFilter;
using render_tree::Node;
using render_tree::InputNode;
using render_tree::RectNode;
using render_tree::SolidColorBrush;
using render_tree::animations::AnimateNode;

namespace {

// Used when intrinsic ratio cannot be determined,
// as per https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width.
const float kFallbackIntrinsicRatio = 2.0f;

// Becomes a used value of "width" if it cannot be determined by any other
// means, as per https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width.
const float kFallbackWidth = 300.0f;

const char* kEquirectangularMeshURL =
    "h5vcc-embedded://equirectangular_40_40.msh";

const char* kWarningInvalidMeshUrl =
    "Mesh specification invalid in map-to-mesh filter: "
    "must be either a valid URL or 'equirectangular'.";

const char* kWarningLoadingMeshFailed =
    "Could not load mesh specified by map-to-mesh filter.";

// Convert the parsed keyword value for a stereo mode into a stereo mode enum
// value.
render_tree::StereoMode ReadStereoMode(
    const scoped_refptr<cssom::KeywordValue>& keyword_value) {
  cssom::KeywordValue::Value value = keyword_value->value();

  if (value == cssom::KeywordValue::kMonoscopic) {
    return render_tree::kMono;
  } else if (value == cssom::KeywordValue::kStereoscopicLeftRight) {
    return render_tree::kLeftRight;
  } else if (value == cssom::KeywordValue::kStereoscopicTopBottom) {
    return render_tree::kTopBottom;
  } else {
    LOG(DFATAL) << "Stereo mode has an invalid non-NULL value, defaulting to "
                << "monoscopic";
    return render_tree::kMono;
  }
}

}  // namespace

InputBox::InputBox(
    const scoped_refptr<cssom::CSSComputedStyleDeclaration>&
        css_computed_style_declaration,
    //const SetBoundsCB& set_bounds_cb,
    //const InputBox::GetInputAnimCB& replace_input_animation_cb,
    const scoped_refptr<Paragraph>& paragraph, int32 text_position,
    const base::Optional<LayoutUnit>& maybe_intrinsic_width,
    const base::Optional<LayoutUnit>& maybe_intrinsic_height,
    const base::Optional<float>& maybe_intrinsic_ratio,
    UsedStyleProvider* used_style_provider,
    const math::SizeF& content_size,
    LayoutStatTracker* layout_stat_tracker)
    : Box(css_computed_style_declaration, used_style_provider,
          layout_stat_tracker),
      maybe_intrinsic_width_(maybe_intrinsic_width),
      maybe_intrinsic_height_(maybe_intrinsic_height),
      // Like Chromium, we assume that an element must always have an intrinsic
      // ratio, although technically it's a spec violation. For details see
      // https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width.
      intrinsic_ratio_(maybe_intrinsic_ratio.value_or(kFallbackIntrinsicRatio)),
      //set_bounds_cb_(set_bounds_cb),
      //replace_input_animation_cb_(replace_input_animation_cb),
      paragraph_(paragraph),
      text_position_(text_position),
      content_size_(content_size)
  {
    //model_ = std::make_unique<TextfieldModel>(this),
    printf("created new InputBox\n");
  }

WrapResult InputBox::TryWrapAt(
    WrapAtPolicy /*wrap_at_policy*/,
    WrapOpportunityPolicy wrap_opportunity_policy,
    bool is_line_existence_justified, LayoutUnit /*available_width*/,
    bool /*should_collapse_trailing_white_space*/) {
  // NOTE: This logic must stay in sync with
  // InlineLevelBlockContainerBox::TryWrapAt().
  DCHECK(!IsAbsolutelyPositioned());

  // Wrapping is not allowed until the line's existence is justified, meaning
  // that wrapping cannot occur before the box. Given that this box cannot be
  // split, no wrappable point is available.
  if (!is_line_existence_justified) {
    return kWrapResultNoWrap;
  }

  // Atomic inline elements participate in the inline formatting context as a
  // single opaque box. Therefore, the parent's style should be used, as the
  // internals of the atomic inline element have no impact on the formatting of
  // the line.
  // https://www.w3.org/TR/CSS21/visuren.html#inline-boxes
  if (!parent()) {
    return kWrapResultNoWrap;
  }

  bool style_allows_break_word = parent()->computed_style()->overflow_wrap() ==
                                 cssom::KeywordValue::GetBreakWord();

  if (!ShouldProcessWrapOpportunityPolicy(wrap_opportunity_policy,
                                          style_allows_break_word)) {
    return kWrapResultNoWrap;
  }

  // Even when the style prevents wrapping, wrapping can still occur before the
  // box if the line's existence has already been justified and whitespace
  // precedes it.
  if (!DoesAllowTextWrapping(parent()->computed_style()->white_space())) {
    if (text_position_ > 0 &&
        paragraph_->IsCollapsibleWhiteSpace(text_position_ - 1)) {
      return kWrapResultWrapBefore;
    } else {
      return kWrapResultNoWrap;
    }
  }

  Paragraph::BreakPolicy break_policy =
      Paragraph::GetBreakPolicyFromWrapOpportunityPolicy(
          wrap_opportunity_policy, style_allows_break_word);
  return paragraph_->IsBreakPosition(text_position_, break_policy)
             ? kWrapResultWrapBefore
             : kWrapResultNoWrap;
}

void InputBox::SplitBidiLevelRuns() {}

bool InputBox::TrySplitAtSecondBidiLevelRun() { return false; }

base::Optional<int> InputBox::GetBidiLevel() const {
  return paragraph_->GetBidiLevel(text_position_);
}

void InputBox::SetShouldCollapseLeadingWhiteSpace(
    bool /*should_collapse_leading_white_space*/) {
  // Do nothing.
}

void InputBox::SetShouldCollapseTrailingWhiteSpace(
    bool /*should_collapse_trailing_white_space*/) {
  // Do nothing.
}

bool InputBox::HasLeadingWhiteSpace() const { return false; }

bool InputBox::HasTrailingWhiteSpace() const { return false; }

bool InputBox::IsCollapsed() const { return false; }

bool InputBox::JustifiesLineExistence() const { return true; }

bool InputBox::AffectsBaselineInBlockFormattingContext() const {
  return false;
}

LayoutUnit InputBox::GetBaselineOffsetFromTopMarginEdge() const {
  return GetMarginBoxHeight();
}

namespace {

void AddLetterboxedInputToRenderTree(
    InputBox* input_box,
    const LetterboxDimensions& dimensions,
    //const InputBox::SetBoundsCB& set_bounds_cb,
    //const InputBox::GetInputAnimCB& replace_input_animation_cb,
    CompositionNode::Builder* border_node_builder) {
  DCHECK(input_box);

  if (dimensions.image_rect) {
    InputNode::Builder builder(*(dimensions.image_rect)
                                           //, set_bounds_cb
                                           );

    /*builder.animation = replace_input_animation_cb.Run();

    if (builder.animation_time == 0) {
      // Reset the animation time.
      builder.animation_time = SkTime::GetMSecs();
    }*/

   /*if (builder.animation && builder.animation->duration()) {
      const SkMSec tElapsed = SkTime::GetMSecs() - builder.animation_time;
      //EM_LOG("animate 9\n");
      const SkScalar duration = builder.animation->duration() * 1000.0;
      //EM_LOG("animate 10\n");
      const double animPos = ::std::fmod(tElapsed, duration) / duration;
      //EM_LOG("animate 11\n");
      builder.animation->seek(static_cast<SkScalar>(animPos));
    }*/

    /*DCHECK(!replace_image_cb.is_null());
    DCHECK(image_node_builder);

    image_node_builder->source = replace_image_cb.Run();
    if (image_node_builder->source) {
      image_node_builder->destination_rect =
          math::RectF(image_node_builder->source->GetSize());
    }*/

    /// \note will be called on every style change, etc.
    InputNode* newNode = new InputNode(builder);
    DCHECK(input_box);
    DCHECK(input_box->custom_generating_node_);
    newNode->SetCustomGeneratingNode(input_box->custom_generating_node_);
    border_node_builder->AddChild(newNode);





  }
}

}  // namespace

void InputBox::RenderAndAnimateContent(
    CompositionNode::Builder* border_node_builder,
    ContainerBox* /*stacking_context*/) const {
  if (computed_style()->visibility() != cssom::KeywordValue::GetVisible()) {
    return;
  }

  const cssom::MapToMeshFunction* mtm_filter_function =
      cssom::MapToMeshFunction::ExtractFromFilterList(
          computed_style()->filter().get());

  if (mtm_filter_function && mtm_filter_function->mesh_spec().mesh_type() !=
                                 cssom::MapToMeshFunction::kRectangular) {
    DCHECK(false)
        << "We currently do not support input box with map-to-mesh "
           "filters.";
  } else {
    RenderAndAnimateContentWithLetterboxing(border_node_builder);
  }
}

void InputBox::UpdateContentSizeAndMargins(
    const LayoutParams& layout_params) {
  base::Optional<LayoutUnit> maybe_width = GetUsedWidthIfNotAuto(
      computed_style(), layout_params.containing_block_size, NULL);
  base::Optional<LayoutUnit> maybe_height = GetUsedHeightIfNotAuto(
      computed_style(), layout_params.containing_block_size);
  base::Optional<LayoutUnit> maybe_left = GetUsedLeftIfNotAuto(
      computed_style(), layout_params.containing_block_size);
  base::Optional<LayoutUnit> maybe_top = GetUsedTopIfNotAuto(
      computed_style(), layout_params.containing_block_size);

  if (IsAbsolutelyPositioned()) {
    // TODO: Implement CSS section 10.3.8, see
    // https://www.w3.org/TR/CSS21/visudet.html#abs-replaced-width.
    set_left(maybe_left.value_or(LayoutUnit()));
    set_top(maybe_top.value_or(LayoutUnit()));
  }
  // Note that computed height may be "auto", even if it is specified as a
  // percentage (depending on conditions of the containing block). See details
  // in the spec. https://www.w3.org/TR/CSS22/visudet.html#the-height-property
  if (!maybe_height) {
    LOG(ERROR) << "InputBox element has computed height \"auto\"!";
  }
  if (!maybe_width) {
    LOG(ERROR) << "InputBox element has computed width \"auto\"!";
  }
  // In order for Cobalt to handle "auto" dimensions correctly for both punchout
  // and decode-to-texture we need to use the content's intrinsic dimensions &
  // ratio rather than using the content_box_size directly. Until this
  // functionality is found to be useful, we avoid the extra complexity
  // introduced by its implementation.
  if (!maybe_height || !maybe_width) {
    LOG(ERROR)
        << "Cobalt InputBox does not handle \"auto\" dimensions correctly! "
           "\"auto\" dimensions are updated using the intrinsic dimensions of "
           "the content (e.g. video width/height), which is often not what is "
           "intended.";
  }
  if (!maybe_width) {
    if (!maybe_height) {
      if (maybe_intrinsic_width_) {
        // If "height" and "width" both have computed values of "auto" and
        // the element also has an intrinsic width, then that intrinsic width
        // is the used value of "width".
        //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width
        set_width(*maybe_intrinsic_width_);
      } else if (maybe_intrinsic_height_) {
        // If "height" and "width" both have computed values of "auto" and
        // the element has no intrinsic width, but does have an intrinsic height
        // and intrinsic ratio then the used value of "width" is:
        //     (intrinsic height) * (intrinsic ratio)
        //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width
        set_width(*maybe_intrinsic_height_ * intrinsic_ratio_);
      } else {
        // Otherwise, if "width" has a computed value of "auto", but none of
        // the conditions above are met, then the used value of "width" becomes
        // 300px.
        //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width
        set_width(LayoutUnit(kFallbackWidth));
      }
    } else {
      // If "width" has a computed value of "auto", "height" has some other
      // computed value, and the element does have an intrinsic ratio then
      // the used value of "width" is:
      //     (used height) * (intrinsic ratio)
      //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width
      set_width(*maybe_height * intrinsic_ratio_);
    }
  } else {
    set_width(*maybe_width);
  }

  if (!maybe_height) {
    if (!maybe_width && maybe_intrinsic_height_) {
      // If "height" and "width" both have computed values of "auto" and
      // the element also has an intrinsic height, then that intrinsic height
      // is the used value of "height".
      //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-height
      set_height(*maybe_intrinsic_height_);
    } else {
      // Otherwise, if "height" has a computed value of "auto", and the element
      // has an intrinsic ratio then the used value of "height" is:
      //     (used width) / (intrinsic ratio)
      //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-height
      set_height(width() / intrinsic_ratio_);
    }
  } else {
    set_height(*maybe_height);
  }

  if (!maybe_width && !maybe_height) {
    // For replaced elements with an intrinsic ratio and both 'width' and
    // 'height' specified as 'auto', the algorithm is as described in
    // https://www.w3.org/TR/CSS21/visudet.html#min-max-widths.

    base::Optional<LayoutUnit> maybe_max_width = GetUsedMaxWidthIfNotNone(
        computed_style(), layout_params.containing_block_size, NULL);
    LayoutUnit min_width = GetUsedMinWidth(
        computed_style(), layout_params.containing_block_size, NULL);
    base::Optional<LayoutUnit> maybe_max_height = GetUsedMaxHeightIfNotNone(
        computed_style(), layout_params.containing_block_size, NULL);
    LayoutUnit min_height = GetUsedMinHeight(
        computed_style(), layout_params.containing_block_size, NULL);

    // The values w and h stand for the results of the width and height
    // computations ignoring the 'min-width', 'min-height', 'max-width' and
    // 'max-height' properties. Normally these are the intrinsic width and
    // height, but they may not be in the case of replaced elements with
    // intrinsic ratios.
    //   https://www.w3.org/TR/CSS21/visudet.html#min-max-widths
    LayoutUnit w = width();
    LayoutUnit h = height();

    // Take the max-width and max-height as max(min, max) so that min <= max
    // holds true.
    //   https://www.w3.org/TR/CSS21/visudet.html#min-max-widths
    base::Optional<LayoutUnit> max_height;
    bool h_greater_than_max_height = false;
    if (maybe_max_height) {
      max_height = std::max(min_height, *maybe_max_height);
      h_greater_than_max_height = h > *max_height;
    }

    base::Optional<LayoutUnit> max_width;
    bool w_greater_than_max_width = false;
    if (maybe_max_width) {
      max_width = std::max(min_width, *maybe_max_width);
      w_greater_than_max_width = w > *max_width;
    }

    // This block sets resolved width and resolved height values according to
    // the table listing a number of different constraint violations in
    // https://www.w3.org/TR/CSS21/visudet.html#min-max-widths.
    if (w_greater_than_max_width) {
      if (h_greater_than_max_height) {
        LayoutUnit max_width_ratio = *max_width / w.toFloat();
        LayoutUnit max_height_ratio = *max_height / h.toFloat();
        if (max_width_ratio > max_height_ratio) {
          // Constraint: (w > max-width) and (h > max-height), where
          // (max-width/w > max-height/h)
          set_width(
              std::max(min_width, *max_height * (w.toFloat() / h.toFloat())));
          set_height(*max_height);
        } else {
          // Constraint: (w > max-width) and (h > max-height), where
          // (max-width/w <= max-height/h)
          set_width(*max_width);
          set_height(
              std::max(min_height, *max_width * (h.toFloat() / w.toFloat())));
        }
      } else {  // not h_greater_than_max_height
        if (h < min_height) {
          // Constraint: (w > max-width) and (h < min-height)
          set_width(*max_width);
          set_height(min_height);
        } else {  // not h < min_height
          // Constraint: w > max-width
          set_width(*max_width);
          set_height(
              std::max(*max_width * (h.toFloat() / w.toFloat()), min_height));
        }
      }
    } else {  // not w_greater_than_max_width
      if (w < min_width) {
        if (h_greater_than_max_height) {
          // Constraint: (w < min-width) and (h > max-height)
          set_width(min_width);
          set_height(*max_height);
        } else {  // not h_greater_than_max_height
          if (h < min_height) {
            LayoutUnit min_width_ratio = min_width / w.toFloat();
            LayoutUnit min_height_ratio = min_height / h.toFloat();
            if (min_width_ratio > min_height_ratio) {
              // Constraint: (w < min-width) and (h < min-height), where
              // (min-width/w > min-height/h)
              set_width(min_width);
              LayoutUnit height = min_width * (h.toFloat() / w.toFloat());
              if (max_height) {
                set_height(std::min(*max_height, height));
              } else {
                set_height(height);
              }
            } else {
              // Constraint: (w < min-width) and (h < min-height), where
              // (min-width/w <= min-height/h)
              LayoutUnit width = min_height * (w.toFloat() / h.toFloat());
              if (max_width) {
                set_width(std::min(*max_width, width));
              } else {
                set_width(width);
              }
              set_height(min_height);
            }
          } else {  // not h < min-height
            // Constraint: w < min-width
            set_width(min_width);
            LayoutUnit height = min_width * (h.toFloat() / w.toFloat());
            if (max_height) {
              set_height(std::min(height, *max_height));
            } else {
              set_height(height);
            }
          }
        }
      } else {  // not w < min_width
        if (h_greater_than_max_height) {
          // Constraint: h > max-height
          set_width(
              std::max(*max_height * (w.toFloat() / h.toFloat()), min_width));
          set_height(*max_height);
        } else {  // not h_greater_than_max_height
          if (h < min_height) {
            // Constraint: h < min-height
            LayoutUnit width = min_height * (w.toFloat() / h.toFloat());
            if (max_width) {
              set_width(std::min(width, *max_width));
            } else {
              set_width(width);
            }
            set_height(min_height);
          } else {  // not h < min_height
            // Constraint: none
            // Do nothing (keep w and h).
          }
        }
      }
    }
  }

  // The horizontal margin rules are difference for block level replaced boxes
  // versus inline level replaced boxes.
  //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-width
  //   https://www.w3.org/TR/CSS21/visudet.html#block-replaced-width
  base::Optional<LayoutUnit> maybe_margin_left = GetUsedMarginLeftIfNotAuto(
      computed_style(), layout_params.containing_block_size);
  base::Optional<LayoutUnit> maybe_margin_right = GetUsedMarginRightIfNotAuto(
      computed_style(), layout_params.containing_block_size);
  LayoutUnit border_box_width = GetBorderBoxWidth();
  UpdateHorizontalMargins(layout_params.containing_block_size.width(),
                          border_box_width, maybe_margin_left,
                          maybe_margin_right);

  base::Optional<LayoutUnit> maybe_margin_top = GetUsedMarginTopIfNotAuto(
      computed_style(), layout_params.containing_block_size);
  base::Optional<LayoutUnit> maybe_margin_bottom = GetUsedMarginBottomIfNotAuto(
      computed_style(), layout_params.containing_block_size);

  // If "margin-top", or "margin-bottom" are "auto", their used value is 0.
  //   https://www.w3.org/TR/CSS21/visudet.html#inline-replaced-height
  set_margin_top(maybe_margin_top.value_or(LayoutUnit()));
  set_margin_bottom(maybe_margin_bottom.value_or(LayoutUnit()));
}

#ifdef COBALT_BOX_DUMP_ENABLED

void InputBox::DumpProperties(std::ostream* stream) const {
  Box::DumpProperties(stream);

  *stream << "text_position=" << text_position_ << " "
          << "bidi_level=" << paragraph_->GetBidiLevel(text_position_) << " ";
}

#endif  // COBALT_BOX_DUMP_ENABLED

void InputBox::RenderAndAnimateContentWithLetterboxing(
    CompositionNode::Builder* border_node_builder) const {
  CompositionNode::Builder composition_node_builder(
      math::Vector2dF((border_left_width() + padding_left()).toFloat(),
                      (border_top_width() + padding_top()).toFloat()));
  scoped_refptr<CompositionNode> composition_node =
      new CompositionNode(composition_node_builder);

  LetterboxDimensions letterbox_dims =
      GetLetterboxDimensions(content_size_, content_box_size());
  AddLetterboxedInputToRenderTree(
      const_cast<InputBox*>(this),
      letterbox_dims
      //, replace_input_animation_cb_
      //, set_bounds_cb_
        , border_node_builder);
}

void cobalt::layout::InputBox::SetCustomGeneratingNode(HTMLInputElement *custom_generating_node)
{
  DCHECK(custom_generating_node);
  custom_generating_node_ = custom_generating_node;
}

cobalt::layout::InputBox::~InputBox(){
  printf("destroyed InputBox\n");
}

#if 0
bool cobalt::layout::InputBox::keyup(const scoped_refptr<dom::Event> &event,
  scoped_refptr<cobalt::dom::Element> elem)
{
  //.............
}
#endif // 0

}  // namespace layout
}  // namespace cobalt
