#pragma once

#include "extended_html/input_box/input_node_ContainerView.h"

#include "base/callback.h"
#include "base/compiler_specific.h"
#include "cobalt/base/type_id.h"
#include "cobalt/math/rect.h"
#include "cobalt/math/rect_f.h"
#include "cobalt/render_tree/node.h"

#include "cobalt/base/polymorphic_downcast.h"

#include "cobalt/render_tree/custom_node.h"


// Create a TYPE_DEFAULT message-loop.

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

#include <memory>

class HTMLInputElement;

/*namespace cobalt {
namespace layout {
class InputBox;
} // cobalt
} // layout*/

namespace cobalt {
namespace render_tree {

// not in spec
class InputNode final : public CustomNode {
 public:
  //typedef base::Callback<bool(const math::Rect&)> SetBoundsCB;
  //typedef base::Callback<sk_sp<skottie::Animation>()> GetSkottieAnimCB;

  struct Builder final : public CustomNode::Builder {
    explicit Builder(const Builder&) = default;
    explicit Builder(const CustomNode::Builder& customNodeBuilder)
      : CustomNode::Builder(customNodeBuilder) {
    }
    explicit Builder(const math::RectF& rect
        //, const SetBoundsCB& set_bounds_cb
        //, sk_sp<skottie::Animation> animation
        //, SkMSec animation_time
        )
        : CustomNode::Builder(), rect(rect)
        //, animation(animation)
        //, animation_time(animation_time)
        //, set_bounds_cb(set_bounds_cb)
        {}

    bool operator==(const CustomNode::Builder& other) const override {
      return rect == base::polymorphic_downcast<const Builder&>(other).rect /*&& set_bounds_cb.Equals(other.set_bounds_cb)*/;
    }

    bool operator==(const Builder& other) const {
      return rect == other.rect /*&& set_bounds_cb.Equals(other.set_bounds_cb)*/;
    }

    // The destination rectangle (size includes border).
    math::RectF rect;
  };

  // Forwarding constructor to the set of Builder constructors.
  template <typename... Args>
  explicit InputNode(Args&&... args) : data_(std::forward<Args>(args)...) {}

  void RenderTreeNodeVisit(const render_tree::NodeVisitor* render_target) override;

  void Accept(NodeVisitor* visitor) override;

  math::RectF GetBounds() const override;

  bool NodeCanRenderWithOpacity() override { return true; }

  const char* DebugTreePrintName() override { return "InputNode"; }

  CustomNode* CreateWithBuilder(CustomNode::Builder builder) override {
    InputNode::Builder input_builder(builder);
    printf("created InputNode\n");
    return new InputNode(input_builder);
  }

  /*CustomNode* CreateWithBuilder(CustomNode::Builder builder) override {
    return CreateInputNodeWithBuilder(builder);
  }*/

  base::TypeId GetTypeId() const override {
    return base::GetTypeId<InputNode>();
  }

  const Builder& data() const override { return data_; }

  /*InputNode* CreateWithBuilder(InputNode::Builder builder) override {
    return new InputNode(builder);
  }*/

  void SetCustomGeneratingNode(HTMLInputElement* custom_generating_node);

 public: // TODO
  //cobalt::layout::InputBox* custom_generating_node_ = nullptr;
  HTMLInputElement* custom_generating_node_ = nullptr;

  //std::unique_ptr<render_tree::input_node_ContainerView>
  //  input_node_container_;

  //std::unique_ptr<views::Widget> input_node_widget_;

 private:
  const Builder data_;
};

}  // namespace render_tree
}  // namespace cobalt
