#include "extended_html/input_box/input_node.h"

#include "extended_html/input_box/input_box.h"

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

namespace cobalt {
namespace render_tree {

using namespace cobalt::renderer::rasterizer::skia;

void input_node_ContainerView::addChildren(
  const std::string& placeholder_text,
  const std::string& initial_text)
{
  //DCHECK(!textfield_);
  DCHECK(m_inputNode);
  if(!textfield_) {
    textfield_ = new views::Textfield();

    //textfield_->SetSize(gfx::Size(800, 60));

    textfield_->SetBorder(
          views::CreateSolidBorder(2, SK_ColorGRAY));
    textfield_->SetColor(
          blink::Color(1.0f, 0.0f, 1.0f, 0.5f).Rgb());
    textfield_->SetTextInputType(ui::TEXT_INPUT_TYPE_TEXT);
    if(!placeholder_text.empty()) {
      textfield_->set_placeholder_text(
            base::UTF8ToUTF16(placeholder_text));
    }
    //textfield_->SetSize(gfx::Size(100, 100));
    textfield_->SetBorder(
        views::CreateSolidBorder(2, SK_ColorGRAY));
    textfield_->SetColor(
        blink::Color(1.0f, 0.0f, 1.0f, 0.5f).Rgb());
    textfield_->SetTextInputType(ui::TEXT_INPUT_TYPE_TEXT);
    if(!initial_text.empty()) {
      textfield_->SetText(base::UTF8ToUTF16(initial_text));
    }
    textfield_->SetReadOnly(false);
    textfield_->SetEnabled(true);
    textfield_->SetVisible(true);
    textfield_->UseDefaultSelectionBackgroundColor();
#if 0
    textfield_->set_controller(this);
#endif // 0
    //AddChildView(textfield_);
  }

#if 0
  title_ = new views::Label();
  title_->SetFontList(font_list);
  title_->SetHorizontalAlignment(gfx::ALIGN_LEFT);
  title_->SetEnabledColor(
        blink::Color(1.0f, 0.5f, 0.5f, 0.5f).Rgb());
  title_->SelectRange({0, 4});
  title_->SetBackgroundColor(
        blink::Color(1.0f, 1.0f, 1.0f, 1.0f).Rgb());
  title_->SetBorder(views::CreateSolidBorder(2, SK_ColorWHITE));
  set_title(base::UTF8ToUTF16("title_ ! title_ ! title_ !"));
  //AddChildView(title_);

  message_ = new views::Label();
  message_->SetFontList(font_list);
  message_->SetHorizontalAlignment(gfx::ALIGN_RIGHT);
  message_->SetObscured(false);
  message_->SetSelectable(true);
  message_->SetSelectionBackgroundColor(
        blink::Color(0.1f, 0.2f, 0.0f, 0.5f).Rgb());
  message_->SetSelectionTextColor(
        blink::Color(0.4f, 0.4f, 0.9f, 0.5f).Rgb());
  message_->SetBackgroundColor(
        blink::Color(0.9f, 0.0f, 0.9f, 0.5f).Rgb());
  message_->SetElideBehavior(gfx::ELIDE_TAIL);
  message_->SetEnabledColor(
        blink::Color(1.0f, 0.0f, 1.0f, 0.5f).Rgb());
  set_message(base::UTF8ToUTF16("message_ ! message_ ! message_ !"));
  message_->SelectRange({0, 4});
  //message_->RecalculateFont();
  message_->SetBorder(views::CreateSolidBorder(2, SK_ColorCYAN));
  message_->SetHorizontalAlignment(gfx::ALIGN_TO_HEAD);
  //AddChildView(message_);

  DCHECK(!textfield2_);
  textfield2_ = new views::Textfield();
  textfield2_->SetFontList(font_list);

  //textfield2_->SetSize(gfx::Size(100, 100));

  textfield2_->SetBorder(
        views::CreateSolidBorder(2, SK_ColorGRAY));
  textfield2_->SetColor(
        blink::Color(1.0f, 0.0f, 1.0f, 0.5f).Rgb());
  textfield2_->SetTextInputType(ui::TEXT_INPUT_TYPE_TEXT);
  textfield2_->set_placeholder_text(
        base::ASCIIToUTF16("TEXT_2"));
  textfield2_->set_controller(this);
  //

  auto MakeRow = [layout](int column_set_id, View* view1) {
    //DCHECK(view1);
    //DCHECK(view2);
    // GridLayout |resize_percent| constants.
    const float kFixed = 0.f;
    const float kStretchy = 1.f;
    layout->StartRowWithPadding(
          /* vertical_resize */ kFixed,
          /* column_set_id */ column_set_id,
          /* padding_resize */ kFixed,
          /* padding */ 0);
    if (view1)
      layout->AddView(view1);
  };

  // id 0
  //MakeRow(0, title_, textfield_);
  MakeRow(0, textfield_);
  MakeRow(0, textfield2_);
  //MakeRow(0, nullptr, nullptr);
  //MakeRow(0, nullptr, textfield2_);
  MakeRow(0, title_);
  MakeRow(0, message_);
#endif // 0

  DCHECK(m_inputNode);
  DCHECK(m_inputNode->custom_generating_node_);
  DCHECK(textfield_);
  AddChildView(textfield_);

  //views::View* root_view = input_node_widget_->GetRootView();
  //DCHECK(root_view);
  //DCHECK(root_view->GetInputMethod());
  DCHECK(GetInputMethod());
  textfield_->SetTextInputType(ui::TEXT_INPUT_TYPE_TEXT);
  DCHECK(textfield_->GetTextInputType()
          == ui::TEXT_INPUT_TYPE_TEXT);
  /*DCHECK(textfield_->GetInputMethod()->GetTextInputType()
          == ui::TEXT_INPUT_TYPE_TEXT);*/
  DCHECK(textfield_->GetInputMethod());
  DCHECK(textfield_->IsFocusable());
  DCHECK(textfield_->GetEnabled());
  DCHECK(textfield_->IsDrawn());
  textfield_->SetCursorEnabled(true);
  textfield_->RequestFocus();
  textfield_->SetReadOnly(false);

  //views::View::OnFocus();
  //InvalidateLayout();
  //SchedulePaint();

  // TODO:
  // https://github.com/blockspacer/skia-opengl-emscripten/blob/master/src/chromium/ui/message_center/views/notification_view_md.cc
  // AddPreTargetHandler(click_activator_.get());
}

}  // namespace render_tree
}  // namespace cobalt
