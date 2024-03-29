﻿#include "extended_html/input_box/input_node.h"

//#include "extended_html/input_box/input_box.h"

#include "extended_html/input_box/HTMLInputElement.h"

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
//#include "ui/gfx/native_input_node_widget_types.h"
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
#endif // ENABLE_BLINK_UI

#if defined(ENABLE_BLINK_UI)
namespace {

// TODO: free mem
static gfx::Font* input_node_default_font = nullptr;
static gfx::PlatformFont* input_node_customPlatformFont = nullptr;

/// \todo use fontsRegistry
// FontList for the texts except for the header.
static gfx::FontList input_node_GetTextFontList() {
  DCHECK(input_node_default_font);
  DCHECK(input_node_default_font->platform_font());
  DCHECK(input_node_default_font->platform_font()->GetFontSize());
  const int size_delta = 0; // size in pixels to add
  gfx::Font font = input_node_default_font->Derive(size_delta, gfx::Font::NORMAL,
                                       gfx::Font::Weight::NORMAL);
  return gfx::FontList(font);
}

static const char* fontPath = "./resources/fonts/FreeSans.ttf";

static const float FONT_SIZE_F = 22.0f;
//static sk_sp<SkTypeface> sktp;
static sk_sp<SkTypeface> sktpForUI;
static bool sktpForUICreated = false;

static bool input_node_prepareUIFonts() {
  bool firstInit = !sktpForUI;
  if(!sktpForUI) {
    printf("creating sktpForUI\n");

    DCHECK(!sktpForUICreated);
    sktpForUICreated = true;

    sk_sp<SkData> data = SkData::MakeFromFileName(fontPath);
    if (!data) {
      printf("failed SkData::MakeFromMalloc for font %s\n", fontPath);
      NOTREACHED();
    }
    const int index = 0;
    sktpForUI = SkTypeface::MakeFromData(data, index);
  }

  DCHECK(sktpForUI);
  // TODO: free mem
  if(!input_node_customPlatformFont) {
    printf("creating input_node_customPlatformFont\n");

    /*CHECK(sktpForUICreated);// << "sktpForUICreated required";
    CHECK(sktpForUI);// << "sktpForUI required";
    SkFont skFont3ForUI(sktpForUI, FONT_SIZE_F, 1.0f, 0.0f);
    skFont3ForUI.setEdging(SkFont::Edging::kAntiAlias);
    DCHECK(sktpForUI);
    DCHECK(skFont3ForUI.getTypeface());*/

    //gfx::PlatformFontSkia::InitFromDetails

    gfx::FontRenderParams fontRenderParams;
    //fontRenderParams.antialiasing = false;
    //fontRenderParams.use_bitmaps = true;
    input_node_customPlatformFont = new gfx::PlatformFontSkia(
      sktpForUI, /*family*/ "Arial", /*size_pixels*/ 22,
      /*style*/ gfx::Font::NORMAL,
      /*weight*/ gfx::Font::Weight::NORMAL,
      /*params*/ fontRenderParams);
  }

  if(!input_node_default_font) {
    printf("creating input_node_default_font\n");
    // TODO: free mem
    DCHECK(input_node_customPlatformFont);
    input_node_default_font = new gfx::Font(input_node_customPlatformFont);
  }

  DCHECK(input_node_default_font);
  return firstInit;
}

} // namespace
#endif // ENABLE_BLINK_UI

namespace cobalt {
namespace render_tree {

#if defined(ENABLE_SKIA)
using namespace cobalt::renderer::rasterizer::skia;
#endif // ENABLE_SKIA

void InputNode::RenderTreeNodeVisit(const NodeVisitor *render_target) {
#if defined(ENABLE_SKIA) && defined(ENABLE_BLINK_UI_VIEWS)
  if(!custom_generating_node_) {
    //NOTREACHED
    NOTIMPLEMENTED_LOG_ONCE();
    return;
  }

  DCHECK(render_target);

  // TODO: data().onDraw(skottie);

  /// TODO
  const RenderTreeNodeVisitor* skia_visitor =
    base::polymorphic_downcast<
      const RenderTreeNodeVisitor*>(render_target);

  const math::RectF math_rect = data().rect;

  SkMatrix total_matrix
    = skia_visitor->draw_state_.render_target->getTotalMatrix();

  SkRect sk_rect = SkRect::MakeXYWH(math_rect.x(), math_rect.y(),
                                      math_rect.width(), math_rect.height());
  SkRect sk_rect_transformed = sk_rect;
  SkRect transformed_rect = sk_rect;

  /*SkRect sk_rect_transformed;
  total_matrix.mapRect(&sk_rect_transformed, sk_rect);

  math::RectF transformed_rect(
      sk_rect_transformed.x(), sk_rect_transformed.y(),
      sk_rect_transformed.width(), sk_rect_transformed.height());*/

  /*const math::RectF& transformed_rect =
      skia_visitor->draw_state_.
      transform.TransformRect(math_rect);*/

  //SkRect sk_rect =
  //    SkRect::MakeXYWH(transformed_rect.x(), transformed_rect.y(),
  //      transformed_rect.width(), transformed_rect.height());

  cc::SkiaPaintCanvas cc_skia_paint_canvas(
    skia_visitor->draw_state_.render_target);
  gfx::Canvas gfx_canvas(&cc_skia_paint_canvas, 1.0f);

  bool needReinitFont = input_node_prepareUIFonts(); // see DCHECK(sktpForUI);
  DCHECK(input_node_default_font);
  const gfx::FontList& font_list = input_node_GetTextFontList();
  DCHECK(input_node_default_font);
  //

  if(!ui::ResourceBundle::HasSharedInstance()) {
    printf("input_node: creating ui::ResourceBundle\n");
    ui::ResourceBundle::InitSharedInstanceWithLocale(
        "en-US", nullptr, ui::ResourceBundle::LOAD_COMMON_RESOURCES);
  }

  DCHECK(custom_generating_node_);

  // TODO
  //std::unique_ptr<cobalt::render_tree::input_node_ContainerView>
  //  input_node_container_;
  //auto& input_node_container_
  //  = custom_generating_node_->input_node_container_;
  auto& input_node_container_
    = custom_generating_node_->input_node_container_;

  if(!input_node_container_) {
    printf("input_node: creating container\n");
    input_node_container_ = std::make_unique<input_node_ContainerView>(this);
    /*input_node_container_->SetBounds(
      sk_rect_transformed.x(), sk_rect_transformed.y(),
      sk_rect_transformed.width(), sk_rect_transformed.height());*/
    input_node_container_->SetSize(
      gfx::Size(sk_rect.width(), sk_rect.height()));
    input_node_container_->SetPreferredSize(
      gfx::Size(sk_rect.width(), sk_rect.height()));

    input_node_container_->SetLayoutManager(std::make_unique<views::FillLayout>());

    /// if(!input_node_container_->has_children) {
    ///   input_node_container_->addChildren();
    ///   input_node_container_->has_children = true;
    /// }

    // see https://github.com/blockspacer/skia-opengl-emscripten/blob/master/src/chromium/ui/views/examples/textfield_example.cc
    //auto layout_manager = std::make_unique<views::GridLayout>(input_node_container_);
    //views::ColumnSet* column_set = layout_manager->AddColumnSet(/* id */0);
    //column_set->AddColumn(views::GridLayout::LEADING, views::GridLayout::FILL,
    //                      0.2f, views::GridLayout::USE_PREF, 0, 0);
    //column_set->AddColumn(views::GridLayout::FILL, views::GridLayout::FILL,
    //                      0.8f, views::GridLayout::USE_PREF, 0, 0);
    //column_set->AddColumn(/* h_align */ views::GridLayout::FILL,
    //                      /* v_align */ views::GridLayout::FILL,
    //                      /*resize weight*/ 1.0f,
    //                      /*fixed_width*/ views::GridLayout::USE_PREF, // OR views::GridLayout::FIXED
    //                      /*min_width*/ 0,
    //                      /*is_padding*/ 0);
    //column_set->AddColumn(views::GridLayout::FILL, views::GridLayout::FILL,
    //                      0.5f, views::GridLayout::USE_PREF, 0, 0);
    //views::ColumnSet* column_set2 = layout_manager->AddColumnSet(/* id */ 1);
    //column_set2->AddColumn(views::GridLayout::FILL, views::GridLayout::FILL,
    //                      1.0f, views::GridLayout::USE_PREF, 0, 1);

    //input_node_container_->addChildren(layout_manager.get());
    //input_node_container_->SetLayoutManager(std::move(layout_manager));

    //input_node_container_->SetLayoutManager(std::make_unique<views::FillLayout>());
    //input_node_container_->SetLayoutManager(std::move(layout_manager));
  }

  // TODO
  //std::unique_ptr<views::Widget> input_node_widget_;
  auto& input_node_widget_
    = custom_generating_node_->input_node_widget_;

  if(!input_node_widget_) {
    printf("input_node: creating widget\n");
    input_node_widget_ = std::make_unique<views::Widget>();
    views::Widget::InitParams params(
      views::Widget::InitParams::TYPE_POPUP/*TYPE_WINDOW_FRAMELESS*/);

    params.bounds = gfx::Rect(transformed_rect.x(), transformed_rect.y(),
      transformed_rect.width(), transformed_rect.height());

    params.ownership = views::Widget::InitParams::WIDGET_OWNS_NATIVE_WIDGET;
    //params.delegate = input_node_container_;
    ///params.delegate =
    ///    new ExamplesWindowContents(std::move(on_close), std::move(examples));
    ///params.context = window_context;
    input_node_widget_->Init(params);
    //input_node_widget_->Show();

    input_node_widget_->SetFullscreen(/*true*/false);
    input_node_widget_->SetVisibleOnAllWorkspaces(true);

    DCHECK(input_node_container_);

    /// \TODO handle memory properly!
    input_node_widget_->SetContentsView(input_node_container_.get());

    DCHECK(input_node_widget_);
  }

    input_node_widget_->SetSize(
      gfx::Size(transformed_rect.width(), transformed_rect.height()));
    input_node_widget_->SetBounds(
      gfx::Rect(
       sk_rect_transformed.x(), sk_rect_transformed.y(),
       transformed_rect.width(), transformed_rect.height()));

  views::View* root_view = input_node_widget_->GetRootView();
  DCHECK(root_view);
  if(!root_view->Contains(input_node_container_.get())) {

    /// \TODO handle memory properly!
    root_view->AddChildView(input_node_container_.get());

    printf("added input_node_container_ to root_view\n");
  }

    input_node_container_->SetEnabled(true);

    input_node_container_->SetPreferredSize(
      gfx::Size(sk_rect.width(), sk_rect.height()));

    //input_node_container_->SetNativeTheme(nativeThemeAura);
    input_node_container_->SetBackground(views::CreateSolidBackground(
          //blink::Color(0.9f, 1.0f, 1.0f, 0.9f).Rgb()));
          SkColorSetARGB(128, 255, 128, 0)));

    //input_node_container_->SetBorder(views::CreateSolidBorder(2, SK_ColorBLUE));
    input_node_container_->
      SetFocusBehavior(views::View::FocusBehavior::ALWAYS);

    // TODO: free mem?

    input_node_container_->set_owned_by_client(); // prevents view_to_be_deleted by parent

  input_node_container_->SchedulePaint();
  input_node_container_->
    SetFocusBehavior(views::View::FocusBehavior::ALWAYS);

    DCHECK(input_node_container_->IsFocusable());
    input_node_container_->Focus();

    root_view->InvalidateLayout();
    root_view->SizeToPreferredSize();
    root_view->Layout();

    input_node_widget_->SetFullscreen(/*true*/false);
    input_node_widget_->Maximize();
    input_node_widget_->Show(); // TODO: input_node_widget_.Close();
    input_node_widget_->Activate(); // TODO: wait?

  DCHECK(root_view->GetEffectiveViewTargeter());

  //

  DCHECK(input_node_container_);
  DCHECK(custom_generating_node_);
  DCHECK(custom_generating_node_);

  //std::shared_ptr<HTMLInputElement::NodeInitData>
  HTMLInputElement::NodeInitData init_data
    = custom_generating_node_->node_init_data();
  //DCHECK(init_data);

  if(!input_node_container_->has_children) {
    input_node_container_->addChildren(
      init_data.placeholder_text_,
      init_data.initial_text_);
    input_node_container_->has_children = true;

    input_node_container_->InvalidateLayout();
    input_node_container_->SizeToPreferredSize();
    input_node_container_->Layout();
  }

  DCHECK(input_node_container_);
  DCHECK(input_node_container_->inputNode_);
  DCHECK(input_node_container_->textfield_);

  DCHECK(input_node_container_->textfield_->IsFocusable());
  input_node_container_->textfield_->Focus();

  if(needReinitFont) {
    const int size_delta = std::abs(font_list.GetFontSize() - 15); // size in pixels to add
    DCHECK(size_delta > 0);
    input_node_container_->textfield_->
        SetFontList(font_list.Derive(
            -size_delta, gfx::Font::UNDERLINE, gfx::Font::Weight::BOLD));
  }

  if(custom_generating_node_->current_controller_id_ != init_data.controller_text_
      && !init_data.controller_text_.empty()) {
    skemgl::TextfieldControllerCreator textfieldControllerCreator
      = skemgl::get_textfield_controller_creator(init_data.controller_text_);
    if(textfieldControllerCreator.create_textfield_controller_cb_) {
      if(!custom_generating_node_->input1_controller_) {
        custom_generating_node_->input1_controller_
          = textfieldControllerCreator.create_textfield_controller_cb_(
              custom_generating_node_, this);
          //= std::make_unique<Input1_controller>(
              //custom_generating_node_, this);
      }
      DCHECK(custom_generating_node_->input1_controller_);
      input_node_container_->textfield_->
        set_controller(custom_generating_node_->input1_controller_.get());
      custom_generating_node_->current_controller_id_
        = init_data.controller_text_;
      printf("current_controller_id_ %s\n",
        custom_generating_node_->current_controller_id_.c_str());
    } else {
      NOTIMPLEMENTED_LOG_ONCE();
    }
  } else {
    NOTIMPLEMENTED_LOG_ONCE();
  }

  DCHECK(input_node_widget_->GetContentsView());

  DCHECK(custom_generating_node_);
  {
    // TODO: better mutex
    std::scoped_lock lock(custom_generating_node_->scheduledEventsMutex_);

    for(HTMLInputElement::ScheduledKeyEvent& kEv :
          custom_generating_node_->
          scheduledEvents_
          .scheduledKeyEvents_)
    {
      DCHECK(input_node_widget_);
      DCHECK(input_node_widget_->GetInputMethod());

    //std::cout << "HTMLInputElement::ScheduledKeyEvent& kEv character() :" << kEv.keyEvent_.character() << std::endl;

    //std::cout << "HTMLInputElement::ScheduledKeyEvent& kEv text() :" << kEv.keyEvent_.ToString() << std::endl;
    //std::cout << "HTMLInputElement::ScheduledKeyEvent& kEv GetCharacter() :" << kEv.keyEvent_.GetCharacter() << std::endl;

      /*if(kEv.keyEvent_.type() == ui::ET_KEY_PRESSED) {
        printf("kEv.keyEvent_.type() == ui::ET_KEY_PRESSED\n");
        input_node_container_->textfield_->OnKeyPressed(kEv.keyEvent_);
      } else if(kEv.keyEvent_.type() == ui::ET_KEY_RELEASED) {
        printf("kEv.keyEvent_.type() == ui::ET_KEY_RELEASED\n");
        input_node_container_->textfield_->OnKeyReleased(kEv.keyEvent_);
      } else {
        DCHECK(false);
      }*/

      std::unique_ptr<ui::Event> event_copy = ui::Event::Clone(kEv.keyEvent_);
      DCHECK(event_copy);
      if(!kEv.is_printable_) {
        // used to support control characters, like DELETE key
        input_node_widget_->OnKeyEvent(event_copy->AsKeyEvent()); // !is_printable
        //std::cout << "!kEv.is_printable_ " << kEv.keyEvent_.GetCharacter() << std::endl;
      } else /*if(kEv.is_printable_)*/ {
        // used to support printable characters, like unicode text
        // TODO: SendEventToSink
        ui::InputMethod* im =
            input_node_widget_->GetInputMethod();
        im->DispatchKeyEvent(&kEv.keyEvent_); // is_printable
        //std::cout << "kEv.is_printable_ " << kEv.keyEvent_.GetCharacter() << std::endl;
      }
      /*ui::InputMethod* im =
        input_node_widget_->GetInputMethod();
      im->DispatchKeyEvent(&kEv.keyEvent_); // is_printable*/

      /*ui::DomKey key;
      ui::KeyboardCode key_code;
      if (DomCodeToControlCharacter(input_node_widget_->code(), flags(), &key, &key_code)) {
        input_node_widget_->OnKeyEvent(&kEv.keyEvent_); // !is_printable
      } else {
        ui::InputMethod* im =
            input_node_widget_->GetInputMethod();
        im->DispatchKeyEvent(&kEv.keyEvent_); // TODO: SendEventToSink
      }*/

      /*if(kEv.keyEvent_.GetCharacter()) { // is_printable
        ui::InputMethod* im =
            input_node_widget_->GetInputMethod();
        im->DispatchKeyEvent(&kEv.keyEvent_); // TODO: SendEventToSink
      } else {
        input_node_widget_->OnKeyEvent(&kEv.keyEvent_);
      }*/

      //views::View* root_view = input_node_widget_->GetRootView();
      //DCHECK(root_view);
      //ui::EventDispatchDetails details = root_view->OnEventFromSource(&kEv.keyEvent_);

    }
    custom_generating_node_->
      scheduledEvents_.scheduledKeyEvents_.clear();
  }

  {
    // TODO: better mutex
    std::scoped_lock lock(custom_generating_node_->scheduledEventsMutex_);

    for(HTMLInputElement::ScheduledMouseEvent& mEv :
          custom_generating_node_->
          scheduledEvents_
          .scheduledMouseEvents_)
    {
      DCHECK(input_node_widget_);
      DCHECK(input_node_widget_->GetInputMethod());

      SkRect mEv_sk_rect = SkRect::MakeXYWH(
        mEv.mouseEvent_.x(),
        mEv.mouseEvent_.y(),
        1,
        1);
      SkRect mEv_sk_rect_transformed;
      total_matrix.mapRect(&mEv_sk_rect_transformed, mEv_sk_rect);

      /*float x = mEv.mouseEvent_.x();
      float y = mEv.mouseEvent_.y();*/

      SkRect boundingClientRect_sk_rect = SkRect::MakeXYWH(
        mEv.boundingClientRect_->left(),
        mEv.boundingClientRect_->top(),
        1,
        1);

      math::RectF boundingClientRect_transformed(
          boundingClientRect_sk_rect.x(), boundingClientRect_sk_rect.y(),
          boundingClientRect_sk_rect.width(), boundingClientRect_sk_rect.height());

      float x = mEv_sk_rect_transformed.x()
        - boundingClientRect_transformed.x();
      /*if(x < 0) {
        x = mEv.mouseEvent_.x() + x;
      }*/
      float y = mEv_sk_rect_transformed.y()
        - boundingClientRect_transformed.y();
      /*if(y < 0) {
        y = mEv.mouseEvent_.y() + y;
      }*/

      // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
      gfx::Point point(x, y);
      ui::MouseEvent mEvTransformed(
                         mEv.mouseEvent_.type(),
                         point,
                         point,
                         ui::EventTimeForNow(),
                         mEv.mouseEvent_.button_flags(),
                         mEv.mouseEvent_.button_flags());

      //input_node_widget_->OnMouseEvent(&mEvTransformed);

      input_node_widget_->OnMouseEvent(&mEv.mouseEvent_);

      /*if(mEv.mouseEvent_.type() == ui::ET_MOUSE_DRAGGED) {
        printf("mEv.mouseEvent_.type() == ui::ET_MOUSE_DRAGGED\n");
        input_node_container_->textfield_->OnMouseDragged(mEv.mouseEvent_);
      } else if(mEv.mouseEvent_.type() == ui::ET_MOUSE_PRESSED) {
        printf("mEv.mouseEvent_.type() == ui::ET_MOUSE_PRESSED\n");
        input_node_container_->textfield_->OnMousePressed(mEv.mouseEvent_);
      } else if(mEv.mouseEvent_.type() == ui::ET_MOUSE_RELEASED) {
        printf("mEv.mouseEvent_.type() == ui::ET_MOUSE_RELEASED\n");
        input_node_container_->textfield_->OnMouseReleased(mEv.mouseEvent_);
      } else if(mEv.mouseEvent_.type() == ui::ET_MOUSE_MOVED) {
        printf("mEv.mouseEvent_.type() == ui::ET_MOUSE_MOVED\n");
        input_node_container_->textfield_->OnMouseMoved(mEv.mouseEvent_);
      } else {
        DCHECK(false);
      }*/
    }
    custom_generating_node_->
      scheduledEvents_.scheduledMouseEvents_.clear();
  }

  input_node_container_->InvalidateLayout();
  input_node_container_->SizeToPreferredSize();
  input_node_container_->SchedulePaint();
  input_node_container_->Layout();

  input_node_widget_->GetRootView()->SchedulePaint();
  input_node_container_->SchedulePaint();
  input_node_widget_->GetRootView()->SchedulePaint();

  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/master/src/chromium/ui/views/controls/label_unittest.cc#L61
  gfx::Rect first_paint(1, 1);
  SkBitmap bitmap;
  auto raster_scale = 1.0f;
  //auto list = base::MakeRefCounted<cc::DisplayItemList>();
  scoped_refptr<cc::DisplayItemList> list =
    base::MakeRefCounted<cc::DisplayItemList>(
        cc::DisplayItemList::kToBeReleasedAsPaintOpBuffer);
  //gfx::Size input_node_container_size(800, 800/*input_node_container_->GetPreferredSize()*/);
  gfx::Size input_node_container_size =
    root_view->GetMirroredBounds().size();

    //input_node_container_->GetMirroredBounds().size();
  DCHECK(!input_node_container_size.IsEmpty());

  ui::CanvasPainter canvasPainter =
    ui::CanvasPainter(&bitmap, input_node_container_size,
    raster_scale, //SK_ColorRED,
    SK_ColorTRANSPARENT,
     // is_pixel_canvas - if the paint commands are
    // recorded at pixel size instead of DIP.
    /*is_pixel_canvas()*/ false);

  views::PaintInfo input_node_container_paint_info = views::PaintInfo::CreateRootPaintInfo(
      ui::PaintContext(list.get(), 1.f, /* invalidation */ first_paint, /*true*/ false),
      //canvasPainter.context(),
      input_node_container_size);
  DCHECK(!input_node_container_paint_info.paint_recording_bounds().IsEmpty());
  DCHECK(input_node_container_);

  //input_node_container_->Paint(input_node_container_paint_info);
  //ui::Compositor* compositor = input_node_widget_->GetCompositor();
  //DCHECK(compositor);
  ui::PaintContext input_node_container_paint_context(
                             list.get(),
                             1.f,//compositor->device_scale_factor(),
                             //gfx::Rect(0, 0, 800, 800),//
                             gfx::Rect(input_node_container_size),
                             false /*true*/);

  //input_node_widget_->GetRootView()->OnPaintLayer(input_node_container_paint_context);
  //input_node_widget_->GetRootView()->OnPaint(&gfx_canvas);
  //input_node_widget_->GetRootView()->PaintDebugRects(input_node_container_paint_info);

  // TODO
  // DCHECK(input_node_widget_->GetCompositor());

  input_node_widget_->GetRootView()->
    PaintFromPaintRoot(input_node_container_paint_context);

  sk_sp<cc::PaintRecord> paintRecord =
    list->ReleaseAsRecord();
  //cc_skia_paint_canvas.save();
  //cc_skia_paint_canvas.drawPicture(paintRecord);
  //cc_skia_paint_canvas.restore();
  gfx::ImageSkia tmp_image(gfx::ImageSkiaRep(paintRecord,
    gfx::ScaleToCeiledSize(input_node_container_size, 1.0), 1.0));
  DCHECK(!tmp_image.isNull());
  gfx_canvas.DrawImageInt(tmp_image,
    0, 0);

#if ENABLE_FLUSH_AFTER_EVERY_NODE
  skia_visitor->draw_state_.render_target->flush();
#endif // ENABLE_FLUSH_AFTER_EVERY_NODE
#endif // ENABLE_SKIA && defined(ENABLE_BLINK_UI_VIEWS)
}

void InputNode::Accept(NodeVisitor* visitor) {
  visitor->Visit(this);
}

math::RectF InputNode::GetBounds() const { return data_.rect; }

void cobalt::render_tree::InputNode::SetCustomGeneratingNode(
  HTMLInputElement* custom_generating_node)
{
  DCHECK(custom_generating_node);
  custom_generating_node_ = custom_generating_node;
}

}  // namespace render_tree
}  // namespace cobalt
