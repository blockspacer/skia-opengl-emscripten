// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <string>

#include "base/macros.h"
#include "base/memory/weak_ptr.h"
#include "ui/base/cursor/cursor.h"
#include "ui/events/event_constants.h"
#include "ui/views/views_export.h"
#include "ui/views/widget/native_widget_private.h"

#include "base/compiler_specific.h"
#include "base/containers/flat_set.h"
#include "base/macros.h"
#include "base/observer_list.h"
#include "base/optional.h"
#include "base/strings/string16.h"
#include "base/time/time.h"
#include "components/viz/common/surfaces/local_surface_id_allocation.h"
#include "components/viz/common/surfaces/scoped_surface_id_allocator.h"
#include "ui/base/class_property.h"
#include "ui/compositor/layer_animator.h"
#include "ui/compositor/layer_delegate.h"
#include "ui/compositor/layer_owner.h"
#include "ui/events/event_constants.h"
#include "ui/events/event_target.h"
#include "ui/events/event_targeter.h"
#include "ui/events/gestures/gesture_types.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/native_widget_types.h"
#include "ui/gfx/canvas.h"
#include "ui/gfx/scoped_canvas.h"
#include "ui/base/ui_base_features.h"
#include "ui/compositor/compositor.h"
#include "ui/compositor/layer.h"
#include "ui/compositor/layer_animator.h"
#include "ui/display/display.h"
#include "ui/display/screen.h"

#include <stddef.h>

#include <algorithm>
#include <utility>

#include "base/auto_reset.h"
#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/callback.h"
#include "base/logging.h"
#include "base/macros.h"
#include "base/stl_util.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/string_util.h"
#include "base/strings/stringprintf.h"
#include "cc/trees/layer_tree_frame_sink.h"
#include "third_party/skia/include/core/SkPath.h"

namespace views {

class VIEWS_EXPORT NativeWidgetAura :
  public internal::NativeWidgetPrivate,
  public ui::LayerDelegate,
  public ui::LayerOwner//,
  //public ui::EventTarget,
  //public ui::GestureConsumer,
  //public ui::PropertyHandler
  {
 public:
  // |is_parallel_widget_in_window_manager| is true only when this
  // NativeWidgetAura is created in the window manager to represent a client
  // window, in all other cases it's false.
  explicit NativeWidgetAura(internal::NativeWidgetDelegate* delegate,
                            bool is_parallel_widget_in_window_manager = false);

  // Called internally by NativeWidgetAura and DesktopNativeWidgetAura to
  // associate |native_widget| with |window|.
  static void RegisterNativeWidgetForWindow(
      internal::NativeWidgetPrivate* native_widget);

  // Assign an icon to aura window.
  static void AssignIconToAuraWindow(
                                     const gfx::ImageSkia& window_icon,
                                     const gfx::ImageSkia& app_icon);

  // If necessary, sets the ShadowElevation of |window| from |params|.
  static void SetShadowElevationFromInitParams(
      const Widget::InitParams& params);

  // Overridden from ui::LayerDelegate:
  void OnPaintLayer(const ui::PaintContext& context) override;
  void OnLayerBoundsChanged(const gfx::Rect& old_bounds,
                            ui::PropertyChangeReason reason) override;
  void OnLayerTransformed(const gfx::Transform& old_transform,
                          ui::PropertyChangeReason reason) override;
  void OnLayerOpacityChanged(ui::PropertyChangeReason reason) override;
  void OnLayerAlphaShapeChanged() override;
  void OnLayerFillsBoundsOpaquelyChanged() override;

  // Overridden from internal::NativeWidgetPrivate:
  void InitNativeWidget(const Widget::InitParams& params) override;
  void OnWidgetInitDone() override;
  NonClientFrameView* CreateNonClientFrameView() override;
  bool ShouldUseNativeFrame() const override;
  bool ShouldWindowContentsBeTransparent() const override;
  void FrameTypeChanged() override;
  Widget* GetWidget() override;
  const Widget* GetWidget() const override;
  gfx::NativeView GetNativeView() const override;
  gfx::NativeWindow GetNativeWindow() const override;
  Widget* GetTopLevelWidget() override;
  const ui::Compositor* GetCompositor() const override;
  const ui::Layer* GetLayer() const override;
  void ReorderNativeViews() override;
  void ViewRemoved(View* view) override;
  void SetNativeWindowProperty(const char* name, void* value) override;
  void* GetNativeWindowProperty(const char* name) const override;
  TooltipManager* GetTooltipManager() const override;
  void SetCapture() override;
  void ReleaseCapture() override;
  bool HasCapture() const override;
  ui::InputMethod* GetInputMethod() override;
  void CenterWindow(const gfx::Size& size) override;
  void GetWindowPlacement(gfx::Rect* bounds,
                          ui::WindowShowState* maximized) const override;
  bool SetWindowTitle(const base::string16& title) override;
  void SetWindowIcons(const gfx::ImageSkia& window_icon,
                      const gfx::ImageSkia& app_icon) override;
  void InitModalType(ui::ModalType modal_type) override;
  gfx::Rect GetWindowBoundsInScreen() const override;
  gfx::Rect GetClientAreaBoundsInScreen() const override;
  gfx::Rect GetRestoredBounds() const override;
  std::string GetWorkspace() const override;
  void SetBounds(const gfx::Rect& bounds) override;
  void SetBoundsConstrained(const gfx::Rect& bounds) override;
  void SetSize(const gfx::Size& size) override;
  void StackAbove(gfx::NativeView native_view) override;
  void StackAtTop() override;
  void SetShape(std::unique_ptr<Widget::ShapeRects> shape) override;
  void Close() override;
  void CloseNow() override;
  void Show(ui::WindowShowState show_state,
            const gfx::Rect& restore_bounds) override;
  void Hide() override;
  bool IsVisible() const override;
  void Activate() override;
  void Deactivate() override;
  bool IsActive() const override;
  void SetAlwaysOnTop(bool always_on_top) override;
  bool IsAlwaysOnTop() const override;
  void SetVisibleOnAllWorkspaces(bool always_visible) override;
  bool IsVisibleOnAllWorkspaces() const override;
  void Maximize() override;
  void Minimize() override;
  bool IsMaximized() const override;
  bool IsMinimized() const override;
  void Restore() override;
  void SetFullscreen(bool fullscreen) override;
  bool IsFullscreen() const override;
  void SetCanAppearInExistingFullscreenSpaces(
      bool can_appear_in_existing_fullscreen_spaces) override;
  void SetOpacity(float opacity) override;
  void SetAspectRatio(const gfx::SizeF& aspect_ratio) override;
  void FlashFrame(bool flash_frame) override;
#if !defined(UI_VIEWS_PORT)
  void RunShellDrag(View* view,
                    const ui::OSExchangeData& data,
                    const gfx::Point& location,
                    int operation,
                    ui::DragDropTypes::DragEventSource source) override;
#endif // UI_VIEWS_PORT
  void SchedulePaintInRect(const gfx::Rect& rect) override;
  void ScheduleLayout() override;
  void SetCursor(gfx::NativeCursor cursor) override;
  bool IsMouseEventsEnabled() const override;
  bool IsMouseButtonDown() const override;
  void ClearNativeFocus() override;
  gfx::Rect GetWorkAreaBoundsInScreen() const override;
  Widget::MoveLoopResult RunMoveLoop(
      const gfx::Vector2d& drag_offset,
      Widget::MoveLoopSource source,
      Widget::MoveLoopEscapeBehavior escape_behavior) override;
  void EndMoveLoop() override;
  void SetVisibilityChangedAnimationsEnabled(bool value) override;
  void SetVisibilityAnimationDuration(const base::TimeDelta& duration) override;
  void SetVisibilityAnimationTransition(
      Widget::VisibilityTransition transition) override;
  bool IsTranslucentWindowOpacitySupported() const override;
  ui::GestureRecognizer* GetGestureRecognizer() override;
  void OnSizeConstraintsChanged() override;
  std::string GetName() const override;

  // Overridden from aura::WindowDelegate:
  ///gfx::Size GetMinimumSize() const override;
  ///gfx::Size GetMaximumSize() const override;
  void OnBoundsChanged(const gfx::Rect& old_bounds,
                       const gfx::Rect& new_bounds) /*override*/;
  ///gfx::NativeCursor GetCursor(const gfx::Point& point) override;
  ///int GetNonClientComponent(const gfx::Point& point) const override;
  ///bool ShouldDescendIntoChildForEventHandling(
  ///    const gfx::Point& location) override;
  ///bool CanFocus() override;
  ///void OnCaptureLost() override;
  ///void OnPaint(const ui::PaintContext& context) override;
  void OnDeviceScaleFactorChanged(float old_device_scale_factor,
                                  float new_device_scale_factor) override;
  ///void OnWindowDestroying() override;
  ///void OnWindowDestroyed() override;
  ///void OnWindowTargetVisibilityChanged(bool visible) override;
  ///bool HasHitTestMask() const override;
  ///void GetHitTestMask(SkPath* mask) const override;
  ///void UpdateVisualState() override;

  // Overridden from aura::WindowObserver:
  ///void OnWindowPropertyChanged(
  ///                             const void* key,
  ///                             intptr_t old) override;
  ///void OnResizeLoopStarted() override;
  ///void OnResizeLoopEnded() override;
  ///
  ///// Overridden from ui::EventHandler:
  ///void OnKeyEvent(ui::KeyEvent* event) override;
  ///void OnMouseEvent(ui::MouseEvent* event) override;
  ///void OnScrollEvent(ui::ScrollEvent* event) override;
  ///void OnGestureEvent(ui::GestureEvent* event) override;
  ///
  ///// Overridden from wm::ActivationDelegate:
  ///bool ShouldActivate() const override;
  ///
  ///// Overridden from wm::ActivationChangeObserver:
  ///void OnWindowActivated() override;
  ///
  ///// Overridden from aura::client::FocusChangeObserver:
  ///void OnWindowFocused() override;
  ///
  ///// Overridden from aura::client::DragDropDelegate:
  /////void OnDragEntered(const ui::DropTargetEvent& event) override;
  /////int OnDragUpdated(const ui::DropTargetEvent& event) override;
  ///void OnDragExited() override;
  /////int OnPerformDrop(const ui::DropTargetEvent& event) override;



 protected:
  ~NativeWidgetAura() override;

  internal::NativeWidgetDelegate* delegate() { return delegate_; }

 private:
  void SetInitialFocus(ui::WindowShowState show_state);

  internal::NativeWidgetDelegate* delegate_;

  // True if the Widget is created in the window-manager and another client is
  // embedded in it. When true certain operations are not performed.
  const bool is_parallel_widget_in_window_manager_;

  // WARNING: set to NULL when destroyed. As the Widget is not necessarily
  // destroyed along with |window_| all usage of |window_| should first verify
  // non-NULL.
  //aura::Window* window_;

  // See class documentation for Widget in widget.h for a note about ownership.
  Widget::InitParams::Ownership ownership_;

  // Are we in the destructor?
  bool destroying_;

  gfx::NativeCursor cursor_;

  //std::unique_ptr<TooltipManagerAura> tooltip_manager_;

  // Reorders child windows of |window_| associated with a view based on the
  // order of the associated views in the widget's view hierarchy.
  //std::unique_ptr<WindowReorderer> window_reorderer_;

  //std::unique_ptr<DropHelper> drop_helper_;
  int last_drop_operation_;

  // Native widget's handler to receive events before the event target.
  //std::unique_ptr<FocusManagerEventHandler> focus_manager_event_handler_;

  // The following factory is used for calls to close the NativeWidgetAura
  // instance.
  base::WeakPtrFactory<NativeWidgetAura> close_widget_factory_;

  gfx::Rect bounds_;

  DISALLOW_COPY_AND_ASSIGN(NativeWidgetAura);
};

}  // namespace views
