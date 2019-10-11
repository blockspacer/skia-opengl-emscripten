#include "extended_html/input_box/input_node.h"

//#include "extended_html/input_box/input_box.h"

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

static void input_node_prepareUIFonts() {
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
}

}

namespace cobalt {
namespace render_tree {

using namespace cobalt::renderer::rasterizer::skia;

void InputNode::RenderTreeNodeVisit(const NodeVisitor *render_target) {
  if(!custom_generating_node_) {
    //NOTREACHED
    NOTIMPLEMENTED_LOG_ONCE();
    return;
  }

  DCHECK(render_target);
  /// TODO
  const RenderTreeNodeVisitor* skia_visitor =
  base::polymorphic_downcast<const RenderTreeNodeVisitor*>(render_target);

  const math::RectF math_rect = data().rect;

  SkMatrix total_matrix
    = skia_visitor->draw_state_.render_target->getTotalMatrix();

  SkRect sk_rect = SkRect::MakeXYWH(math_rect.x(), math_rect.y(),
                                      math_rect.width(), math_rect.height());
  SkRect sk_rect_transformed;
  total_matrix.mapRect(&sk_rect_transformed, sk_rect);

  math::RectF transformed_rect(
      sk_rect_transformed.x(), sk_rect_transformed.y(),
      sk_rect_transformed.width(), sk_rect_transformed.height());

  /*const math::RectF& transformed_rect =
      skia_visitor->draw_state_.
      transform.TransformRect(math_rect);*/

  //SkRect sk_rect =
  //    SkRect::MakeXYWH(transformed_rect.x(), transformed_rect.y(),
  //      transformed_rect.width(), transformed_rect.height());

  cc::SkiaPaintCanvas cc_skia_paint_canvas(
    skia_visitor->draw_state_.render_target);
  gfx::Canvas gfx_canvas(&cc_skia_paint_canvas, 1.0f);

  input_node_prepareUIFonts(); // see DCHECK(sktpForUI);
  DCHECK(input_node_default_font);

  const gfx::FontList& font_list = input_node_GetTextFontList();
  DCHECK(input_node_default_font);
  const int size_delta = std::abs(font_list.GetFontSize() - 15); // size in pixels to add
  DCHECK(size_delta > 0);

  //


  if(!ui::ResourceBundle::HasSharedInstance()) {
    printf("input_node: creating ui::ResourceBundle\n");
    ui::ResourceBundle::InitSharedInstanceWithLocale(
        "en-US", NULL, ui::ResourceBundle::LOAD_COMMON_RESOURCES);
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
  }

  DCHECK(input_node_widget_);

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
  DCHECK(root_view->GetEffectiveViewTargeter());

  //input_node_container_->SetVisible(true);
  input_node_container_->SetEnabled(true);

  /*input_node_container_->SetBounds(
    sk_rect_transformed.x(), sk_rect_transformed.y(),
    sk_rect_transformed.width(), sk_rect_transformed.height());
  input_node_container_->SetSize(
    gfx::Size(sk_rect_transformed.width(), sk_rect_transformed.height()));*/
  input_node_container_->SetPreferredSize(
    gfx::Size(sk_rect.width(), sk_rect.height()));

  //input_node_container_->SetNativeTheme(nativeThemeAura);
  input_node_container_->SetBackground(views::CreateSolidBackground(
        blink::Color(0.9f, 1.0f, 1.0f, 0.9f).Rgb()));

  //input_node_container_->SetBorder(views::CreateSolidBorder(2, SK_ColorBLUE));
  const gfx::Insets child_margins(1, 1);
  // TODO: free mem?
  //input_node_container_->SetProperty(views::kMarginsKey,
  //  new gfx::Insets(child_margins));

  //cc::layer_tree_host()

  //input_node_container_->SetPaintToLayer(ui::LAYER_TEXTURED);

  //blink::Path path;
  //path.AddRect({0, 0, 800, 800});
  //input_node_container_->set_clip_path(path.GetSkPath());

  input_node_container_->set_owned_by_client(); // prevents view_to_be_deleted by parent

  //input_node_container_->InvalidateLayout();
  //input_node_container_->SizeToPreferredSize();
  //input_node_container_->Layout();
  //DCHECK(input_node_container_->GetLocalBounds() == gfx::Rect(0, 0, 800, 800));
  input_node_container_->SchedulePaint();
  input_node_container_->
    SetFocusBehavior(views::View::FocusBehavior::ALWAYS);
  DCHECK(input_node_container_->IsFocusable());

  //root_view->SetBoundsRect(input_node_container_->GetLocalBounds());

  /*root_view->SetBounds(
    sk_rect_transformed.x(), sk_rect_transformed.y(),
    sk_rect_transformed.width(), sk_rect_transformed.height());*/

  root_view->InvalidateLayout();
  root_view->SizeToPreferredSize();
  root_view->Layout();

  /*widget->non_client_view()->SetFrameView(frame);  // Owns |frame|.
  WidgetAutoclosePtr widget(CreateTopLevelFramelessPlatformWidget());
  widget->GetRootView()->AddChildView(view);
  widget->SetBounds(gfx::Rect(0, 0, 100, 80));
  widget->Show();
  widget->SetFullscreen(false);
  widget->Show();
  widget->Maximize();*/

  input_node_widget_->SetFullscreen(/*true*/false);
  input_node_widget_->Maximize();
  input_node_widget_->Show(); // TODO: input_node_widget_.Close();
  input_node_widget_->Activate(); // TODO: wait?

  //

  DCHECK(input_node_container_);
  DCHECK(custom_generating_node_);
  DCHECK(custom_generating_node_);
  if(!input_node_container_->has_children) {
    input_node_container_->addChildren(
      custom_generating_node_->placeholder_text_);
    input_node_container_->has_children = true;
  }

  DCHECK(input_node_container_);
  DCHECK(input_node_container_->m_inputNode);
  DCHECK(input_node_container_->textfield_);
  input_node_container_->textfield_->
    SetFontList(font_list.Derive(
      -size_delta, gfx::Font::UNDERLINE, gfx::Font::Weight::BOLD));

  input_node_container_->textfield_->SetColor(
    blink::Color(0.0f, 1.0f, 0.5f, 0.5f).Rgb());
  /*input_node_container_->textfield_->GetRenderTextForSelectionController()->
    SetElideBehavior(gfx::ELIDE_TAIL);*/
  input_node_container_->textfield_->GetRenderTextForSelectionController()->
    set_selection_background_focused_color(
      SkColorSetARGB(150, 0, 188, 112));
  input_node_container_->textfield_->GetRenderTextForSelectionController()->
    set_selection_color(
      blink::Color(0.0f, 0.0f, 1.0f, 0.5f).Rgb()
  );
  //input_node_container_->textfield_->GetRenderTextForSelectionController()->
  //  SetSelectable(true);
  input_node_container_->textfield_->SetSelectionBackgroundColor(
    blink::Color(0.1f, 0.2f, 0.0f, 0.5f).Rgb());
  input_node_container_->textfield_->SetSelectionTextColor(
    blink::Color(0.4f, 0.4f, 0.9f, 0.5f).Rgb());

  input_node_container_->textfield_->ChangeTextDirectionAndLayoutAlignment(
    base::i18n::LEFT_TO_RIGHT);

  /*gfx::Range text_range, selection_range;
  base::string16 text;
  if (input_node_container_->textfield_->
        GetTextRange(&text_range) &&
      input_node_container_->textfield_->
        GetTextFromRange(text_range, &text) &&
      input_node_container_->textfield_->
        GetEditableSelectionRange(&selection_range))
  {
    // Select some text such that one handle is hidden.
    input_node_container_->textfield_->SelectRange(text_range);
  }*/

  /// TODO
  //printf("draw rect %s\n", math_rect.ToString().c_str());

  /*SkRect sk_rect = SkRect::MakeXYWH(math_rect.x(), math_rect.y(),
                                    math_rect.width(), math_rect.height());
  SkMatrix total_matrix = skia_visitor->draw_state_.render_target->getTotalMatrix();

  SkRect sk_rect_transformed;
  total_matrix.mapRect(&sk_rect_transformed, sk_rect);

  math::RectF transformed_rectf(
      sk_rect_transformed.x(), sk_rect_transformed.y(),
      sk_rect_transformed.width(), sk_rect_transformed.height());
  math::Rect transformed_rect = math::Rect::RoundFromRectF(transformed_rectf);
  //data().set_bounds_cb.Run(transformed_rect);*/

  //SkPaint paint;

  // TODO:
  /*[520:577:1010/170521.733238:1804929624749:FATAL:weak_ptr.cc(28)] Check
  failed: (sequence_checker_).CalledOnValidSequence().  WeakPtrs must be
  checked on the same sequenced thread*/
  /*cobalt::dom::Document* document
    = custom_generating_node_->
        AsElement()->node_document();
  if (document->active_element().get()
      == custom_generating_node_->AsElement())
  {
    paint.setColor(SK_ColorRED); // TODO
#if ENABLE_FLUSH_AFTER_EVERY_NODE
  skia_visitor->draw_state_.render_target->flush();
#endif
    //return; // TODO <<<
  } else {
    paint.setColor(SK_ColorBLUE); // TODO
  }*/
  //paint.setColor(SkAlpha);

  //skia_visitor->draw_state_.render_target->drawRect(sk_rect, paint);

  //animation->render(/*SkCanvas*/draw_state_.render_target, &dstR);

  //skia_visitor->draw_state_.render_target->drawOval(sk_rect, paint);

  DCHECK(input_node_widget_->GetContentsView());

  DCHECK(custom_generating_node_);
  {
    // TODO: better mutex
    std::scoped_lock lock(custom_generating_node_->scheduledEventsMutex_);

    /*if(custom_generating_node_->
       scheduledEvents_
       .scheduledKeyEvents_.size())
    {
      //printf("HTMLInputElementID_ = %i\n",
      //    custom_generating_node_->
      //    HTMLInputElementID_);

      printf("math_rect %f , %f , %f , %f \n",
        math_rect.x(),
        math_rect.y(),
        math_rect.width(),
        math_rect.height()
      );
      printf("transformed_rect %f , %f , %f , %f \n",
        transformed_rect.x(),
        transformed_rect.y(),
        transformed_rect.width(),
        transformed_rect.height()
      );
    }*/

    for(ui::KeyEvent& kEv :
          custom_generating_node_->
          scheduledEvents_
          .scheduledKeyEvents_)
    {
      DCHECK(input_node_widget_);
      DCHECK(input_node_widget_->GetInputMethod());
      ui::InputMethod* im =
          input_node_widget_->GetInputMethod();
      im->DispatchKeyEvent(&kEv);
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
        mEv.mouseEvent_.x(), mEv.mouseEvent_.y(), 1, 1);
      SkRect mEv_sk_rect_transformed;
      total_matrix.mapRect(&mEv_sk_rect_transformed, mEv_sk_rect);

      SkRect boundingClientRect_sk_rect = SkRect::MakeXYWH(
        mEv.boundingClientRect_->x(), mEv.boundingClientRect_->y(), 1, 1);

      math::RectF boundingClientRect_transformed(
          boundingClientRect_sk_rect.x(), boundingClientRect_sk_rect.y(),
          boundingClientRect_sk_rect.width(), boundingClientRect_sk_rect.height());

      float x = mEv_sk_rect_transformed.x()
        - boundingClientRect_transformed.x();
      if(x < 0) {
        x = mEv.mouseEvent_.x() + x;
      }
      float y = mEv_sk_rect_transformed.y()
        - boundingClientRect_transformed.y();
      if(y < 0) {
        y = mEv.mouseEvent_.y() + y;
      }

      // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
      gfx::Point point(x, y);
      ui::MouseEvent mEvTransformed(
                         mEv.mouseEvent_.type(),
                         point,
                         point,
                         ui::EventTimeForNow(),
                         mEv.mouseEvent_.button_flags(),
                         mEv.mouseEvent_.button_flags());

      input_node_widget_->OnMouseEvent(&mEvTransformed);
    }
    custom_generating_node_->
      scheduledEvents_.scheduledMouseEvents_.clear();
  }

      /*// see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/views/controls/textfield/textfield_unittest.cc#L673
      {
        gfx::Point point(screen_->GetCursorScreenPoint());
        ui::MouseEvent click(ui::ET_MOUSE_PRESSED, point, point,
                             ui::EventTimeForNow(), ui::EF_LEFT_MOUSE_BUTTON,
                             ui::EF_LEFT_MOUSE_BUTTON);
        container_->OnMousePressed(click);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        DCHECK(widget_);
        widget_->OnMouseEvent(&click);

        ui::MouseEvent release(ui::ET_MOUSE_RELEASED, point, point,
                               ui::EventTimeForNow(), ui::EF_LEFT_MOUSE_BUTTON,
                               ui::EF_LEFT_MOUSE_BUTTON);
        container_->OnMouseReleased(release);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        DCHECK(widget_);
        widget_->OnMouseEvent(&release);
    }*/

  input_node_container_->InvalidateLayout();
  input_node_container_->SizeToPreferredSize();
  input_node_container_->SchedulePaint();
  input_node_container_->Layout();

  input_node_widget_->GetRootView()->SchedulePaint();
  input_node_container_->SchedulePaint();
  input_node_widget_->GetRootView()->SchedulePaint();

  /*views::View* root_view = input_node_widget_->GetRootView();
  DCHECK(root_view);
  if(!root_view->Contains(input_node_container_)) {
    root_view->AddChildView(input_node_container_);
    printf("added input_node_container_ to root_view\n");
  }
  DCHECK(root_view->GetEffectiveViewTargeter());*/

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
#endif
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
