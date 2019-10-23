#pragma once

#include "components/custom_web_components.h"

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
#include "cobalt/dom/html_custom_element.h"


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

#if defined(ENABLE_BLINK_UI)
#include "ui/views/controls/textfield/textfield_controller.h"
#include "ui/views/controls/textfield/textfield_model.h"
#endif // ENABLE_BLINK_UI

#include "cobalt/render_tree/node_visitor.h"

#include "cobalt/base/polymorphic_downcast.h"

#if defined(ENABLE_SKIA)
#include "renderer_stub/rasterizer/skia/render_tree_node_visitor.h"
#endif // ENABLE_SKIA

#ifdef ENABLE_COBALT
#include "cobalt/base/polymorphic_downcast.h"
#endif // ENABLE_COBALT

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
#include "cobalt/base/token.h"

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
//#include "ui/gfx/native_component_node_widget_types.h"
#endif // ENABLE_BLINK_UI_NATIVE_THEME

#ifdef ENABLE_BLINK_UI
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
//#include "ui/views/focus/component_node_widget_focus_manager.h"
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
#endif // ENABLE_BLINK_UI

#include <algorithm>
#include <memory>
#include <mutex>
#include <thread>
#include <iostream>
#include <vector>
#include <functional>
#include <chrono>
#include <string>

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

#if defined(ENABLE_SKIA)
#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"
#endif // ENABLE_SKIA

#include "extended_html/component/block_level_component.h"
#include "extended_html/component/inline_level_component.h"
#include "extended_html/component/component.h"
#include "extended_html/component/component_node.h"
#include "extended_html/component/component_generator.h"

class HTMLComponentElement : public cobalt::dom::HTMLCustomElement {
 public:

#if defined(ENABLE_BLINK_UI)
  struct ScheduledMouseEvent {
    ui::MouseEvent mouseEvent_;
    scoped_refptr<cobalt::dom::DOMRect> boundingClientRect_{};
  };

  struct ScheduledEvents {
    std::vector<ui::KeyEvent> scheduledKeyEvents_{};
    std::vector<ScheduledMouseEvent> scheduledMouseEvents_{};
  };
#endif // ENABLE_BLINK_UI

  static const char kTagName[];

  static const char kAttrNameDataSource[];

  static const char kAttrNameWidth[];

  static const char kAttrNameHeight[];

  explicit HTMLComponentElement(cobalt::dom::Document* document);
  ~HTMLComponentElement() override;

  cobalt::math::SizeF GetSize() const;

  uint32 width() const;

  uint32 height() const;

  std::string data_source() const;

  void onBoxGeneratorVisit(cobalt::layout::BoxGenerator& box_gen,
    cobalt::dom::HTMLCustomElement* custom_element) override;

  // Custom, not in any spec.
  scoped_refptr<HTMLCustomElement> AsHTMLCustomElement() override {
    return this;
  }

  std::shared_ptr<skemgl::WebComponent> get_component();

  // From Element.
  void OnSetAttribute(const std::string& name,
                      const std::string& value) override;

  // From Element.
  void OnRemoveAttribute(const std::string& name) override;

  //if (document->active_element().get() == this->AsElement()) {}
  //void Blur() override {
  //  cobalt::dom::HTMLCustomElement::Blur();
  //}
 public: // TODO
  // TODO
  //std::unique_ptr<render_tree::component_node_ContainerView>
  //  component_node_container_;

  std::string current_data_source_{};

  std::shared_ptr<skemgl::WebComponent> loaded_web_component_ = nullptr;

#if defined(ENABLE_BLINK_UI)
  // TODO: thread safety
  std::unique_ptr<views::Widget> component_node_widget_;

  // TODO: thread safety
  /*std::unique_ptr<cobalt::render_tree::component_node_ContainerView> component_node_container_;

  std::mutex scheduledEventsMutex_;
  ScheduledEvents scheduledEvents_{};
*/
#endif // ENABLE_BLINK_UI

  int HTMLComponentElementID_ = 0;

  // TODO: thread safety
  std::string placeholder_text_{};

  //std::unique_ptr<TextfieldModel> model_;
  //views::TextfieldModel* model_ = nullptr;
  //views::Textfield* textfield_ = nullptr;

  // TODO: loading events for remote data source
  //  as in https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/cobalt/src/cobalt/dom/html_image_element.h#L64

  DISALLOW_COPY_AND_ASSIGN(HTMLComponentElement);
};

