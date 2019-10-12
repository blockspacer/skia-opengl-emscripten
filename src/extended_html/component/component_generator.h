#pragma once

#include "base/callback.h"
#include "base/compiler_specific.h"
#include "cobalt/base/type_id.h"
#include "cobalt/math/rect.h"
#include "cobalt/math/rect_f.h"
#include "cobalt/render_tree/node.h"
#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/render_tree/custom_node.h"
#include "cobalt/css_parser/parser.h"
#include "cobalt/cssom/selector_tree.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/specificity.h"
#include "cobalt/cssom/css_rule_list.h"
#include "cobalt/cssom/css_font_face_rule.h"
#include "cobalt/cssom/css_media_rule.h"
#include "cobalt/cssom/css_rule_style_declaration.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/media_list.h"

#include "cobalt/cssom/active_pseudo_class.h"
#include "cobalt/cssom/after_pseudo_element.h"
#include "cobalt/cssom/attribute_selector.h"
#include "cobalt/cssom/before_pseudo_element.h"
#include "cobalt/cssom/child_combinator.h"
#include "cobalt/cssom/class_selector.h"
#include "cobalt/cssom/cobalt_ui_nav_focus_transform_function.h"
#include "cobalt/cssom/cobalt_ui_nav_spotlight_transform_function.h"
#include "cobalt/cssom/complex_selector.h"
#include "cobalt/cssom/compound_selector.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_font_face_declaration_data.h"
#include "cobalt/cssom/css_font_face_rule.h"
#include "cobalt/cssom/css_keyframe_rule.h"
#include "cobalt/cssom/css_keyframes_rule.h"
#include "cobalt/cssom/css_rule_list.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/css_style_sheet.h"
#include "cobalt/cssom/descendant_combinator.h"
#include "cobalt/cssom/empty_pseudo_class.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/focus_pseudo_class.h"
#include "cobalt/cssom/following_sibling_combinator.h"
#include "cobalt/cssom/font_style_value.h"
#include "cobalt/cssom/font_weight_value.h"
#include "cobalt/cssom/hover_pseudo_class.h"
#include "cobalt/cssom/id_selector.h"
#include "cobalt/cssom/integer_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/length_value.h"
#include "cobalt/cssom/linear_gradient_value.h"
#include "cobalt/cssom/local_src_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/cssom/matrix_function.h"
#include "cobalt/cssom/media_list.h"
#include "cobalt/cssom/media_query.h"
#include "cobalt/cssom/next_sibling_combinator.h"
#include "cobalt/cssom/not_pseudo_class.h"
#include "cobalt/cssom/number_value.h"
#include "cobalt/cssom/percentage_value.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/property_key_list_value.h"
#include "cobalt/cssom/property_list_value.h"
#include "cobalt/cssom/property_value_visitor.h"
#include "cobalt/cssom/radial_gradient_value.h"
#include "cobalt/cssom/rgba_color_value.h"
#include "cobalt/cssom/rotate_function.h"
#include "cobalt/cssom/scale_function.h"
#include "cobalt/cssom/shadow_value.h"
#include "cobalt/cssom/simple_selector.h"
#include "cobalt/cssom/string_value.h"
#include "cobalt/cssom/time_list_value.h"
#include "cobalt/cssom/timing_function.h"
#include "cobalt/cssom/timing_function_list_value.h"
#include "cobalt/cssom/transform_function_list_value.h"
#include "cobalt/cssom/translate_function.h"
#include "cobalt/cssom/type_selector.h"
#include "cobalt/cssom/unicode_range_value.h"
#include "cobalt/cssom/universal_selector.h"
#include "cobalt/cssom/url_src_value.h"
#include "cobalt/cssom/url_value.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/on_screen_keyboard_bridge.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/input/input_device_manager.h"
#include "cobalt/layout/layout_manager.h"
#include "cobalt/layout/box_generator.h"

#include "extended_html/component/block_level_component.h"
#include "extended_html/component/inline_level_component.h"
#include "extended_html/component/component.h"
#include "extended_html/component/component_node.h"

class ComponentGenerator : public cobalt::cssom::NotReachedPropertyValueVisitor {
 public:
 enum CloseParagraph {
     kDoNotCloseParagraph,
     kCloseParagraph,
 };

  ComponentGenerator(cobalt::dom::Directionality directionality,
                        const scoped_refptr<cobalt::cssom::CSSComputedStyleDeclaration>&
                           css_computed_style_declaration,
                       //const Component::GetComponentAnimCB& replace_input_animation_cb,
                       scoped_refptr<cobalt::layout::Paragraph>* paragraph,
                       int32 text_position,
                       const base::Optional<cobalt::layout::LayoutUnit>& maybe_intrinsic_width,
                       const base::Optional<cobalt::layout::LayoutUnit>& maybe_intrinsic_height,
                       const base::Optional<float>& maybe_intrinsic_ratio,
                       const cobalt::layout::BoxGenerator::Context* context,
                       cobalt::math::SizeF content_size)
      : css_computed_style_declaration_(css_computed_style_declaration),
        directionality_(directionality),
        // set_bounds_cb_(set_bounds_cb),
        //replace_input_animation_cb_(replace_input_animation_cb),
        paragraph_(paragraph),
        has_scoped_directional_embedding_(false),
        text_position_(text_position),
        maybe_intrinsic_width_(maybe_intrinsic_width),
        maybe_intrinsic_height_(maybe_intrinsic_height),
        maybe_intrinsic_ratio_(maybe_intrinsic_ratio),
        context_(context),
        content_size_(content_size),
        paragraph_scoped_(false) {}

  void CreateScopedParagraph(
      CloseParagraph close_prior_paragraph);

  void VisitKeyword(cobalt::cssom::KeywordValue* keyword) override;

  const scoped_refptr<cobalt::layout::ContainerBox>& component() { return container_box_; }

 private:
  const scoped_refptr<cobalt::cssom::CSSComputedStyleDeclaration>
      css_computed_style_declaration_;
  //const SkottieBox::SetBoundsCB set_bounds_cb_;
  //const Component::GetInputAnimCB replace_input_animation_cb_;
  scoped_refptr<cobalt::layout::Paragraph>* paragraph_;
  const int32 text_position_;
  const base::Optional<cobalt::layout::LayoutUnit> maybe_intrinsic_width_;
  const base::Optional<cobalt::layout::LayoutUnit> maybe_intrinsic_height_;
  const base::Optional<float> maybe_intrinsic_ratio_;
  const cobalt::layout::BoxGenerator::Context* context_;
  cobalt::math::SizeF content_size_;
  const cobalt::dom::Directionality directionality_;
  bool paragraph_scoped_;
  scoped_refptr<cobalt::layout::Paragraph> prior_paragraph_;

  // If a directional embedding was added to the paragraph by this container box
  // and needs to be popped in the destructor:
  // http://unicode.org/reports/tr9/#Explicit_Directional_Embeddings
  bool has_scoped_directional_embedding_;

  scoped_refptr<cobalt::layout::ContainerBox> container_box_;
};

