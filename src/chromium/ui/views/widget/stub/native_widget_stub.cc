// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/views/widget/stub/native_widget_stub.h"

#include <memory>
#include <utility>

#include "base/bind.h"
#include "base/location.h"
#include "base/single_thread_task_runner.h"
#include "base/strings/string_util.h"
#include "base/threading/thread_task_runner_handle.h"
#include "build/build_config.h"
#include "ui/base/class_property.h"
#if !defined(UI_VIEWS_PORT)
#include "ui/base/dragdrop/os_exchange_data.h"
#endif // UI_VIEWS_PORT
#include "ui/base/ui_base_types.h"
#include "ui/compositor/layer.h"
#include "ui/display/display.h"
#include "ui/display/screen.h"
#include "ui/events/event.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/font_list.h"
#include "ui/native_theme/native_theme_aura.h"
#include "ui/views/drag_utils.h"
#include "ui/views/views_delegate.h"
#include "ui/views/widget/drop_helper.h"
#include "ui/views/widget/focus_manager_event_handler.h"
#include "ui/views/widget/native_widget_delegate.h"
#include "ui/views/widget/root_view.h"
#include "ui/views/widget/tooltip_manager_aura.h"
#include "ui/views/widget/widget_aura_utils.h"
#include "ui/views/widget/widget_delegate.h"
#include "ui/views/widget/window_reorderer.h"

DEFINE_UI_CLASS_PROPERTY_TYPE(views::internal::NativeWidgetPrivate*)

namespace views {

namespace {

DEFINE_UI_CLASS_PROPERTY_KEY(internal::NativeWidgetPrivate*,
                             kNativeWidgetPrivateKey,
                             nullptr)

}  // namespace

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, public:

NativeWidgetAura::NativeWidgetAura(internal::NativeWidgetDelegate* delegate,
                                   bool is_parallel_widget_in_window_manager)
    : delegate_(delegate),
      is_parallel_widget_in_window_manager_(
          is_parallel_widget_in_window_manager),
      //window_(new aura::Window(this, aura::client::WINDOW_TYPE_UNKNOWN, env)),
      ownership_(Widget::InitParams::NATIVE_WIDGET_OWNS_WIDGET),
      destroying_(false),
      cursor_(/*gfx::kNullCursor*/),
      close_widget_factory_(this) {
  //aura::client::SetFocusChangeObserver(window_, this);
  //wm::SetActivationChangeObserver(window_, this);
}

// static
void NativeWidgetAura::RegisterNativeWidgetForWindow(
      internal::NativeWidgetPrivate* native_widget) {
}

// static
void NativeWidgetAura::AssignIconToAuraWindow(
                                              const gfx::ImageSkia& window_icon,
                                              const gfx::ImageSkia& app_icon) {
}

// static
void NativeWidgetAura::SetShadowElevationFromInitParams(
    const Widget::InitParams& params) {
}

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, internal::NativeWidgetPrivate implementation:

void NativeWidgetAura::InitNativeWidget(const Widget::InitParams& params) {
  // See Widget::InitParams::context for details.
  //DCHECK(params.parent || params.context);

  ownership_ = params.ownership;

  SetLayer(std::make_unique<ui::Layer>(params.layer_type));
  //port_->OnPreInit(this);
  //layer()->SetColor(SK_ColorGREEN); // if type_ == LAYER_SOLID_COLOR
  layer()->SetVisible(true);
  layer()->set_delegate(this);
  //UpdateLayerName();
  layer()->SetFillsBoundsOpaquely(true);
  //env_->NotifyWindowInitialized(this);

  delegate_->OnNativeWidgetCreated();

  gfx::Rect window_bounds = params.bounds;
  gfx::NativeView parent = params.parent;
  gfx::NativeView context = params.context;
  if (!params.child) {
    // SetAlwaysOnTop before SetParent so that always-on-top container is used.
    SetAlwaysOnTop(params.keep_on_top);
  }

  // Set properties before adding to the parent so that its layout manager sees
  // the correct values.
  OnSizeConstraintsChanged();
}

void NativeWidgetAura::OnWidgetInitDone() {}

NonClientFrameView* NativeWidgetAura::CreateNonClientFrameView() {
  return nullptr;
}

bool NativeWidgetAura::ShouldUseNativeFrame() const {
  // There is only one frame type for aura.
  return true;
}

bool NativeWidgetAura::ShouldWindowContentsBeTransparent() const {
  return false;
}

void NativeWidgetAura::FrameTypeChanged() {
  // This is called when the Theme has changed; forward the event to the root
  // widget.
  GetWidget()->ThemeChanged();
  GetWidget()->GetRootView()->SchedulePaint();
}

Widget* NativeWidgetAura::GetWidget() {
  return delegate_->AsWidget();
}

const Widget* NativeWidgetAura::GetWidget() const {
  return delegate_->AsWidget();
}

gfx::NativeView NativeWidgetAura::GetNativeView() const {
  return nullptr;
}

gfx::NativeWindow NativeWidgetAura::GetNativeWindow() const {
  return nullptr;
}

Widget* NativeWidgetAura::GetTopLevelWidget() {
  NativeWidgetPrivate* native_widget = GetTopLevelNativeWidget(GetNativeView());
  return native_widget ? native_widget->GetWidget() : nullptr;
}

const ui::Compositor* NativeWidgetAura::GetCompositor() const {
  return layer()->GetCompositor();
}

const ui::Layer* NativeWidgetAura::GetLayer() const {
  return layer();
}

void NativeWidgetAura::ReorderNativeViews() {
}

void NativeWidgetAura::ViewRemoved(View* view) {
}

void NativeWidgetAura::SetNativeWindowProperty(const char* name, void* value) {
}

void* NativeWidgetAura::GetNativeWindowProperty(const char* name) const {
  return nullptr;
}

TooltipManager* NativeWidgetAura::GetTooltipManager() const {
  return nullptr;
}

void NativeWidgetAura::SetCapture() {
}

void NativeWidgetAura::ReleaseCapture() {
}

bool NativeWidgetAura::HasCapture() const {
  return true;
}

ui::InputMethod* NativeWidgetAura::GetInputMethod() {
  printf("NativeWidgetAura::GetInputMethod()\n");
  return nullptr;
}

void NativeWidgetAura::CenterWindow(const gfx::Size& size) {
}

void NativeWidgetAura::GetWindowPlacement(
    gfx::Rect* bounds,
    ui::WindowShowState* show_state) const {
  *bounds = bounds_;
  *show_state = ui::WindowShowState::SHOW_STATE_FULLSCREEN;
}

bool NativeWidgetAura::SetWindowTitle(const base::string16& title) {
  return true;
}

void NativeWidgetAura::SetWindowIcons(const gfx::ImageSkia& window_icon,
                                      const gfx::ImageSkia& app_icon) {
}

void NativeWidgetAura::InitModalType(ui::ModalType modal_type) {
}

gfx::Rect NativeWidgetAura::GetWindowBoundsInScreen() const {
  return bounds_;
}

gfx::Rect NativeWidgetAura::GetClientAreaBoundsInScreen() const {
  // View-to-screen coordinate system transformations depend on this returning
  // the full window bounds, for example View::ConvertPointToScreen().
  return bounds_;
}

gfx::Rect NativeWidgetAura::GetRestoredBounds() const {
  return bounds_;
}

std::string NativeWidgetAura::GetWorkspace() const {
  return std::string();
}

void NativeWidgetAura::SetBounds(const gfx::Rect& bounds) {
  bounds_ = bounds;
  OnBoundsChanged(bounds, bounds_);
}

void NativeWidgetAura::SetBoundsConstrained(const gfx::Rect& bounds) {
  bounds_ = bounds;
  OnBoundsChanged(bounds, bounds_);
}

void NativeWidgetAura::SetSize(const gfx::Size& size) {
  SetBounds(gfx::Rect(0, 0, size.width(), size.height()));
}

void NativeWidgetAura::StackAbove(gfx::NativeView native_view) {
}

void NativeWidgetAura::StackAtTop() {
}

void NativeWidgetAura::SetShape(std::unique_ptr<Widget::ShapeRects> shape) {
}

void NativeWidgetAura::Close() {
}

void NativeWidgetAura::CloseNow() {
}

void NativeWidgetAura::Show(ui::WindowShowState show_state,
                            const gfx::Rect& restore_bounds) {
}

void NativeWidgetAura::Hide() {
}

bool NativeWidgetAura::IsVisible() const {
  return true;
}

void NativeWidgetAura::Activate() {
}

void NativeWidgetAura::Deactivate() {
}

bool NativeWidgetAura::IsActive() const {
  return true;
}

void NativeWidgetAura::SetAlwaysOnTop(bool on_top) {
}

bool NativeWidgetAura::IsAlwaysOnTop() const {
  return true;
}

void NativeWidgetAura::SetVisibleOnAllWorkspaces(bool always_visible) {
  // Not implemented on chromeos or for child widgets.
  layer()->SetVisible(true);
}

bool NativeWidgetAura::IsVisibleOnAllWorkspaces() const {
  return true;
}

void NativeWidgetAura::Maximize() {
}

void NativeWidgetAura::Minimize() {
}

bool NativeWidgetAura::IsMaximized() const {
  return true;
}

bool NativeWidgetAura::IsMinimized() const {
  return false;
}

void NativeWidgetAura::Restore() {
}

void NativeWidgetAura::SetFullscreen(bool fullscreen) {
}

bool NativeWidgetAura::IsFullscreen() const {
  return false;
}

void NativeWidgetAura::SetCanAppearInExistingFullscreenSpaces(
    bool can_appear_in_existing_fullscreen_spaces) {}

void NativeWidgetAura::SetOpacity(float opacity) {
}

void NativeWidgetAura::SetAspectRatio(const gfx::SizeF& aspect_ratio) {
}

void NativeWidgetAura::FlashFrame(bool flash) {
}

#if !defined(UI_VIEWS_PORT)
void NativeWidgetAura::RunShellDrag(View* view,
                                    const ui::OSExchangeData& data,
                                    const gfx::Point& location,
                                    int operation,
                                    ui::DragDropTypes::DragEventSource source) {
  if (window_)
    views::RunShellDrag(window_, data, location, operation, source);
}
#endif // UI_VIEWS_PORT


void NativeWidgetAura::OnPaintLayer(const ui::PaintContext& context) {
  //Paint(context);
  // delegate_->OnPaint(context);
  //delegate_->OnPaint(context);
}

void NativeWidgetAura::OnLayerBoundsChanged(const gfx::Rect& old_bounds,
                                  ui::PropertyChangeReason reason) {
  /*WindowOcclusionTracker::ScopedPause pause_occlusion_tracking(env_);

  bounds_ = layer()->bounds();

  // Use |bounds_| as that is the bounds before any animations, which is what
  // mus wants.
  port_->OnDidChangeBounds(old_bounds, bounds_);

  if (layout_manager_)
    layout_manager_->OnWindowResized();
  if (delegate_)
    delegate_->OnBoundsChanged(old_bounds, bounds_);
  for (auto& observer : observers_)
    observer.OnWindowBoundsChanged(this, old_bounds, bounds_, reason);
  */
}

void NativeWidgetAura::OnLayerOpacityChanged(ui::PropertyChangeReason reason) {
  /*WindowOcclusionTracker::ScopedPause pause_occlusion_tracking(env_);
  for (WindowObserver& observer : observers_)
    observer.OnWindowOpacitySet(this, reason);*/
}

void NativeWidgetAura::OnLayerAlphaShapeChanged() {
  /*WindowOcclusionTracker::ScopedPause pause_occlusion_tracking(env_);
  for (WindowObserver& observer : observers_)
    observer.OnWindowAlphaShapeSet(this);*/
}

void NativeWidgetAura::OnLayerFillsBoundsOpaquelyChanged() {
  // Let observers know that this window's transparent status has changed.
  // Transparent status can affect the occlusion computed for windows.
  /*WindowOcclusionTracker::ScopedPause pause_occlusion_tracking(env_);

  // Non-transparent windows should not have opaque regions for occlusion set.
  if (!transparent())
    DCHECK(opaque_regions_for_occlusion_.empty());

  for (WindowObserver& observer : observers_)
    observer.OnWindowTransparentChanged(this);*/
}

void NativeWidgetAura::OnLayerTransformed(const gfx::Transform& old_transform,
                                ui::PropertyChangeReason reason) {
  /*port_->OnDidChangeTransform(old_transform, layer()->transform());
  WindowOcclusionTracker::ScopedPause pause_occlusion_tracking(env_);
  for (WindowObserver& observer : observers_)
    observer.OnWindowTransformed(this, reason);*/
}

void NativeWidgetAura::SchedulePaintInRect(const gfx::Rect& rect) {
  layer()->SchedulePaint(rect);
}

void NativeWidgetAura::ScheduleLayout() {
  layer()->ScheduleDraw();
}

void NativeWidgetAura::SetCursor(gfx::NativeCursor cursor) {
}

bool NativeWidgetAura::IsMouseEventsEnabled() const {
  return true;
}

bool NativeWidgetAura::IsMouseButtonDown() const {
  return true;
}

void NativeWidgetAura::ClearNativeFocus() {
}

gfx::Rect NativeWidgetAura::GetWorkAreaBoundsInScreen() const {
  return bounds_;
}

Widget::MoveLoopResult NativeWidgetAura::RunMoveLoop(
    const gfx::Vector2d& drag_offset,
    Widget::MoveLoopSource source,
    Widget::MoveLoopEscapeBehavior escape_behavior) {
  return Widget::MOVE_LOOP_SUCCESSFUL;
}

void NativeWidgetAura::EndMoveLoop() {
}

void NativeWidgetAura::SetVisibilityChangedAnimationsEnabled(bool value) {
}

void NativeWidgetAura::SetVisibilityAnimationDuration(
    const base::TimeDelta& duration) {
}

void NativeWidgetAura::SetVisibilityAnimationTransition(
    Widget::VisibilityTransition transition) {
}

bool NativeWidgetAura::IsTranslucentWindowOpacitySupported() const {
  return false;
}

ui::GestureRecognizer* NativeWidgetAura::GetGestureRecognizer() {
  return nullptr;
}

void NativeWidgetAura::OnSizeConstraintsChanged() {
}

std::string NativeWidgetAura::GetName() const {
  return std::string();
}

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, aura::WindowDelegate implementation:

/*gfx::Size NativeWidgetAura::GetMinimumSize() const {
  return delegate_->GetMinimumSize();
}*/

/*gfx::Size NativeWidgetAura::GetMaximumSize() const {
  return delegate_->GetMaximumSize();
}*/

void NativeWidgetAura::OnBoundsChanged(const gfx::Rect& old_bounds,
                                       const gfx::Rect& new_bounds) {
  // Assume that if the old bounds was completely empty a move happened. This
  // handles the case of a maximize animation acquiring the layer (acquiring a
  // layer results in clearing the bounds).
  if (old_bounds.origin() != new_bounds.origin() ||
      (old_bounds == gfx::Rect(0, 0, 0, 0) && !new_bounds.IsEmpty())) {
    delegate_->OnNativeWidgetMove();
  }
  if (old_bounds.size() != new_bounds.size())
    delegate_->OnNativeWidgetSizeChanged(new_bounds.size());

  layer()->SetBounds(new_bounds);
}

/*gfx::NativeCursor NativeWidgetAura::GetCursor(const gfx::Point& point) {
  return cursor_;
}*/

/*int NativeWidgetAura::GetNonClientComponent(const gfx::Point& point) const {
  return delegate_->GetNonClientComponent(point);
}

bool NativeWidgetAura::ShouldDescendIntoChildForEventHandling(
      const gfx::Point& location) {
  return false;
}

bool NativeWidgetAura::CanFocus() {
  return ShouldActivate();
}

void NativeWidgetAura::OnCaptureLost() {
  delegate_->OnMouseCaptureLost();
}*/

/*void NativeWidgetAura::OnPaint(const ui::PaintContext& context) {
  delegate_->OnNativeWidgetPaint(context);
}*/

void NativeWidgetAura::OnDeviceScaleFactorChanged(
    float old_device_scale_factor,
    float new_device_scale_factor) {
  DCHECK(GetWidget());
  GetWidget()->DeviceScaleFactorChanged(old_device_scale_factor,
                                        new_device_scale_factor);
}

/*void NativeWidgetAura::OnWindowDestroying() {
}

void NativeWidgetAura::OnWindowDestroyed() {
}

void NativeWidgetAura::OnWindowTargetVisibilityChanged(bool visible) {
  delegate_->OnNativeWidgetVisibilityChanged(visible);
}

bool NativeWidgetAura::HasHitTestMask() const {
  return delegate_->HasHitTestMask();
}

void NativeWidgetAura::GetHitTestMask(SkPath* mask) const {
  DCHECK(mask);
  delegate_->GetHitTestMask(mask);
}

void NativeWidgetAura::UpdateVisualState() {
  delegate_->LayoutRootViewIfNecessary();
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, aura::WindowObserver implementation:

/*void NativeWidgetAura::OnWindowPropertyChanged(
                                               const void* key,
                                               intptr_t old) {
}

void NativeWidgetAura::OnResizeLoopStarted() {
  delegate_->OnNativeWidgetBeginUserBoundsChange();
}

void NativeWidgetAura::OnResizeLoopEnded() {
  delegate_->OnNativeWidgetEndUserBoundsChange();
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, ui::EventHandler implementation:

/*void NativeWidgetAura::OnKeyEvent(ui::KeyEvent* event) {
  delegate_->OnKeyEvent(event);
}

void NativeWidgetAura::OnMouseEvent(ui::MouseEvent* event) {
  if (event->type() == ui::ET_MOUSEWHEEL) {
    delegate_->OnMouseEvent(event);
    return;
  }

  TooltipManagerAura::UpdateTooltipManagerForCapture(GetWidget());
  delegate_->OnMouseEvent(event);
}

void NativeWidgetAura::OnScrollEvent(ui::ScrollEvent* event) {
  delegate_->OnScrollEvent(event);
}

void NativeWidgetAura::OnGestureEvent(ui::GestureEvent* event) {
  delegate_->OnGestureEvent(event);
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, wm::ActivationDelegate implementation:

/*bool NativeWidgetAura::ShouldActivate() const {
  return delegate_->CanActivate();
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, wm::ActivationChangeObserver implementation:

/*void NativeWidgetAura::OnWindowActivated() {
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, aura::client::FocusChangeObserver:

/*void NativeWidgetAura::OnWindowFocused() {
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, aura::WindowDragDropDelegate implementation:

/*void NativeWidgetAura::OnDragEntered(const ui::DropTargetEvent& event) {
  DCHECK(drop_helper_.get() != nullptr);
  last_drop_operation_ = drop_helper_->OnDragOver(event.data(),
      event.location(), event.source_operations());
}

int NativeWidgetAura::OnDragUpdated(const ui::DropTargetEvent& event) {
  DCHECK(drop_helper_.get() != nullptr);
  last_drop_operation_ = drop_helper_->OnDragOver(event.data(),
      event.location(), event.source_operations());
  return last_drop_operation_;
}*/

/*void NativeWidgetAura::OnDragExited() {
}*/

/*int NativeWidgetAura::OnPerformDrop(const ui::DropTargetEvent& event) {
  DCHECK(drop_helper_.get() != nullptr);
  return drop_helper_->OnDrop(event.data(), event.location(),
      last_drop_operation_);
}*/

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, protected:

NativeWidgetAura::~NativeWidgetAura() {
  destroying_ = true;
  if (ownership_ == Widget::InitParams::NATIVE_WIDGET_OWNS_WIDGET)
    delete delegate_;
  else
    CloseNow();
}

////////////////////////////////////////////////////////////////////////////////
// NativeWidgetAura, private:

void NativeWidgetAura::SetInitialFocus(ui::WindowShowState show_state) {
}

////////////////////////////////////////////////////////////////////////////////
// Widget, public:

namespace {
#if defined(OS_WIN) || defined(USE_X11)
void CloseWindow(aura::Window* window) {
  if (window) {
    Widget* widget = Widget::GetWidgetForNativeView(window);
    if (widget && widget->is_secondary_widget())
      // To avoid the delay in shutdown caused by using Close which may wait
      // for animations, use CloseNow. Because this is only used on secondary
      // widgets it seems relatively safe to skip the extra processing of
      // Close.
      widget->CloseNow();
  }
}
#endif

#if defined(OS_WIN)
BOOL CALLBACK WindowCallbackProc(HWND hwnd, LPARAM lParam) {
  aura::Window* root_window =
      DesktopWindowTreeHostWin::GetContentWindowForHWND(hwnd);
  CloseWindow(root_window);
  return TRUE;
}
#endif
}  // namespace

// static
void Widget::CloseAllSecondaryWidgets() {
}

const ui::NativeTheme* Widget::GetNativeTheme() const {
  return ui::NativeTheme::GetInstanceForNativeUi();
}

namespace internal {

////////////////////////////////////////////////////////////////////////////////
// internal::NativeWidgetPrivate, public:

// static
NativeWidgetPrivate* NativeWidgetPrivate::CreateNativeWidget(
    const Widget::InitParams& init_params,
    internal::NativeWidgetDelegate* delegate) {
  return new NativeWidgetAura(
      delegate, /*is_parallel_widget_in_window_manager*/ false);
}

// static
NativeWidgetPrivate* NativeWidgetPrivate::GetNativeWidgetForNativeView(
    gfx::NativeView native_view) {
  return nullptr;
}

// static
NativeWidgetPrivate* NativeWidgetPrivate::GetNativeWidgetForNativeWindow(
    gfx::NativeWindow native_window) {
  return nullptr;
}

// static
NativeWidgetPrivate* NativeWidgetPrivate::GetTopLevelNativeWidget(
    gfx::NativeView native_view) {
  return nullptr;
}

// static
void NativeWidgetPrivate::GetAllChildWidgets(gfx::NativeView native_view,
                                             Widget::Widgets* children) {
  {
    // Code expects widget for |native_view| to be added to |children|.
    NativeWidgetPrivate* native_widget = static_cast<NativeWidgetPrivate*>(
        GetNativeWidgetForNativeView(native_view));
    if (native_widget && native_widget->GetWidget())
      children->insert(native_widget->GetWidget());
  }
}

// static
void NativeWidgetPrivate::GetAllOwnedWidgets(gfx::NativeView native_view,
                                             Widget::Widgets* owned) {
}

// static
void NativeWidgetPrivate::ReparentNativeView(gfx::NativeView native_view,
                                             gfx::NativeView new_parent) {
}

// static
gfx::FontList NativeWidgetPrivate::GetWindowTitleFontList() {
#if defined(OS_WIN)
  return gfx::FontList(gfx::win::GetSystemFont(gfx::win::SystemFont::kCaption));
#else
  return gfx::FontList();
#endif
}

// static
gfx::NativeView NativeWidgetPrivate::GetGlobalCapture(
    gfx::NativeView native_view) {
  return nullptr;
}

}  // namespace internal
}  // namespace views
