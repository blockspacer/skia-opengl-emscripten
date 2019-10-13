#pragma once

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

namespace cobalt {
namespace layout {
class InputBox;
} // cobalt
} // layout

namespace cobalt {
namespace render_tree {

class InputNode;

// TODO: OnPaintLayer
class input_node_ContainerView :
  public views::View,
  public views::TextfieldController,
  public views::ButtonListener {
 public:
  std::unique_ptr<views::LayoutProvider> layout_provider_ =
      std::make_unique<views::LayoutProvider>();

  explicit input_node_ContainerView(
      InputNode* inputNode
      /*ExampleBase* base,views::GridLayout* layout*/)
      : example_view_created_(false)/*,
        example_base_(base)*/
  {
    m_inputNode = inputNode;
  }

  void ContentsChanged(views::Textfield* sender,
                                          const base::string16& new_contents) override {
    printf("ContentsChanged %s\n", new_contents.c_str());
    // Set search box focused when query changes.
    ///search_box_->RequestFocus();
    //UpdateModel(true);
    ///NotifyQueryChanged();
    ///if (!new_contents.empty())
    ///  SetSearchBoxActive(true, ui::ET_KEY_PRESSED);
    ///UpdateButtonsVisisbility();

    SchedulePaint();
  }

  bool HandleMouseEvent(views::Textfield* sender,
                                           const ui::MouseEvent& mouse_event) override {
    //return OnTextfieldEvent(mouse_event.type());
    SchedulePaint();
    return true;
  }

  bool HandleGestureEvent(
      views::Textfield* sender,
      const ui::GestureEvent& gesture_event) override {
    //return OnTextfieldEvent(gesture_event.type());

    SchedulePaint();
    return true;
  }

  std::unique_ptr<views::PaintInfo> last_paint_info_;

  void PaintChildren(const views::PaintInfo& info) override {
    last_paint_info_ = std::make_unique<views::PaintInfo>(info);
    View::PaintChildren(info);
  }

  std::unique_ptr<views::PaintInfo> GetLastPaintInfo() {
    return std::move(last_paint_info_);
  }

  /*void OnPaintBackground(gfx::Canvas* canvas) override {
    cc::PaintFlags flags;
    flags.setShader(
        gfx::CreateGradientShader(0, height(), from_color_, to_color_));
    flags.setStyle(cc::PaintFlags::kFill_Style);
    canvas->DrawRect(GetLocalBounds(), flags);
  }*/

  void ButtonPressed(views::Button* sender, const ui::Event& event) override {
    printf("ButtonPressed\n");
  }

  void addChildren(const std::string& placeholder_text/*views::GridLayout* layout*/,
                   const std::string& initial_text);

 // TODO:
 //private:
 public:

  // View:
  void ViewHierarchyChanged(
      const views::ViewHierarchyChangedDetails& details) override {
    views::View::ViewHierarchyChanged(details);
    // We're not using child == this because a Widget may not be
    // available when this is added to the hierarchy.
    if (details.is_add
        && views::View::GetWidget()
        && !example_view_created_) {
      example_view_created_ = true;
      //printf("ViewHierarchyChanged: OK example_base_->CreateExampleView\n");
      /// example_base_->CreateExampleView(this);
    } else {
      //printf("ViewHierarchyChanged: FAILED example_base_->CreateExampleView\n");
    }
  }

  //const char* GetClassName() const override;

  /*void set_title(const base::string16& title) {
    DCHECK(title_);
    title_->SetText(title);
  }

  void set_message(const base::string16& message) {
    DCHECK(message_);
    message_->SetText(message);
  }*/

  // True if the example view has already been created, or false otherwise.
  bool example_view_created_;

  //ExampleBase* example_base_;

  //views::Label* title_ = nullptr;
  //views::Label* message_ = nullptr;

  views::Textfield* textfield_ = nullptr;

  //views::Textfield* textfield2_ = nullptr;

  bool has_children = false;

  InputNode* m_inputNode = nullptr;

  // TODO: AddStyleRange

  DISALLOW_COPY_AND_ASSIGN(input_node_ContainerView);
};

}  // namespace render_tree
}  // namespace cobalt
