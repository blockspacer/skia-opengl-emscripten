// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/window_tree.mojom.h"


namespace ws {
namespace mojom {


class  WindowTreeInterceptorForTesting : public WindowTree {
  virtual WindowTree* GetForwardingInterface() = 0;
  void NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) override;
  void NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) override;
  void DeleteWindow(uint32_t change_id, uint64_t window_id) override;
  void SetCapture(uint32_t change_id, uint64_t window_id) override;
  void ReleaseCapture(uint32_t change_id, uint64_t window_id) override;
  void ObserveEventTypes(const std::vector<::ui::mojom::EventType>& types) override;
  void SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) override;
  void UpdateLocalSurfaceIdFromChild(uint64_t window_id, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) override;
  void AllocateLocalSurfaceId(uint64_t window_id) override;
  void SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) override;
  void SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) override;
  void SetHitTestInsets(uint64_t window_id, const gfx::Insets& mouse, const gfx::Insets& touch) override;
  void SetShape(uint64_t window_id, const std::vector<gfx::Rect>& shape) override;
  void SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) override;
  void SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) override;
  void SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) override;
  void SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) override;
  void SetWindowTransparent(uint32_t change_id, uint64_t window_id, bool transparent) override;
  void AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) override;
  void AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) override;
  void RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) override;
  void AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) override;
  void RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) override;
  void SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) override;
  void ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) override;
  void GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) override;
  void Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) override;
  void ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) override;
  void ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) override;
  void EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) override;
  void AttachFrameSinkId(uint64_t window_id, const viz::FrameSinkId& frame_sink_id) override;
  void UnattachFrameSinkId(uint64_t window_id) override;
  void SetFocus(uint32_t change_id, uint64_t window_id) override;
  void SetCanFocus(uint64_t window_id, bool can_focus) override;
  void SetCursor(uint32_t change_id, uint64_t window_id, ui::Cursor cursor) override;
  void SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) override;
  void SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) override;
  void SetEventTargetingPolicy(uint64_t window_id, ::ws::mojom::EventTargetingPolicy policy) override;
  void OnWindowInputEventAck(uint32_t event_id, ::ws::mojom::EventResult result) override;
  void DeactivateWindow(uint64_t window_id) override;
  void StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) override;
  void StackAtTop(uint32_t change_id, uint64_t window_id) override;
  void BindWindowManagerInterface(const std::string& name, ::ws::mojom::WindowManagerAssociatedRequest window_manager) override;
  void GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) override;
  void PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ws::mojom::MoveLoopSource source, const gfx::Point& cursor, int hit_test) override;
  void CancelWindowMove(uint64_t window_id) override;
  void PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const gfx::ImageSkia& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) override;
  void CancelDragDrop(uint64_t window_id) override;
  void ObserveTopmostWindow(::ws::mojom::MoveLoopSource source, uint64_t window_id) override;
  void StopObservingTopmostWindow() override;
  void SetWindowResizeShadow(uint64_t window_id, int hit_test) override;
  void CancelActiveTouchesExcept(uint64_t not_cancelled_window_id) override;
  void CancelActiveTouches(uint64_t window_id) override;
  void TransferGestureEventsTo(uint64_t current_id, uint64_t new_id, bool should_cancel) override;
  void TrackOcclusionState(uint64_t window_id) override;
  void PauseWindowOcclusionTracking() override;
  void UnpauseWindowOcclusionTracking() override;
  void ConnectToImeEngine(::ime::mojom::ImeEngineRequest engine_request, ::ime::mojom::ImeEngineClientPtr client) override;
};
class  WindowTreeAsyncWaiter {
 public:
  explicit WindowTreeAsyncWaiter(WindowTree* proxy);
  ~WindowTreeAsyncWaiter();
  void GetWindowTree(
      uint64_t window_id, std::vector<::ws::mojom::WindowDataPtr>* out_windows);
  void Embed(
      uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, bool* out_success);
  void ScheduleEmbed(
      WindowTreeClientPtr client, base::UnguessableToken* out_token);
  void ScheduleEmbedForExistingClient(
      uint32_t window_id, base::UnguessableToken* out_token);
  void EmbedUsingToken(
      uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, bool* out_success);
  void GetCursorLocationMemory(
      mojo::ScopedSharedBufferHandle* out_cursor_buffer);

 private:
  WindowTree* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeAsyncWaiter);
};


class  WindowTreeClientInterceptorForTesting : public WindowTreeClient {
  virtual WindowTreeClient* GetForwardingInterface() = 0;
  void OnClientId(uint32_t client_id) override;
  void OnEmbed(::ws::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) override;
  void OnEmbedFromToken(const base::UnguessableToken& token, ::ws::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) override;
  void OnEmbeddedAppDisconnected(uint64_t window) override;
  void OnUnembed(uint64_t window) override;
  void OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) override;
  void OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) override;
  void OnTopLevelCreated(uint32_t change_id, ::ws::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) override;
  void OnWindowBoundsChanged(uint64_t window, const gfx::Rect& new_bounds, ui::WindowShowState state, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) override;
  void OnWindowTransformChanged(uint64_t window, const gfx::Transform& new_transform) override;
  void OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) override;
  void OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) override;
  void OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ws::mojom::WindowDataPtr> windows) override;
  void OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) override;
  void OnWindowDeleted(uint64_t window) override;
  void OnWindowVisibilityChanged(uint64_t window, bool visible) override;
  void OnWindowDisplayChanged(uint64_t window, int64_t display_id) override;
  void OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) override;
  void OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) override;
  void OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, std::unique_ptr<ui::Event> event, bool matches_event_observer) override;
  void OnObservedInputEvent(std::unique_ptr<ui::Event> event) override;
  void OnWindowFocused(uint64_t focused_window_id) override;
  void OnWindowCursorChanged(uint64_t window_id, ui::Cursor cursor) override;
  void OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) override;
  void OnDragEnter(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragEnterCallback callback) override;
  void OnDragOver(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragOverCallback callback) override;
  void OnDragLeave(uint64_t window) override;
  void OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnCompleteDropCallback callback) override;
  void OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) override;
  void OnDragDropDone() override;
  void OnTopmostWindowChanged(const std::vector<uint64_t>& topmost_ids) override;
  void OnChangeCompleted(uint32_t change_id, bool success) override;
  void RequestClose(uint64_t window_id) override;
  void GetScreenProviderObserver(::ws::mojom::ScreenProviderObserverAssociatedRequest observer) override;
  void OnOcclusionStatesChanged(const base::flat_map<uint64_t, ::ws::mojom::OcclusionState>& occlusion_changes) override;
  void CleanupGestureState(uint64_t window_id) override;
  void OnWindowResizeLoopStarted(uint64_t window_id) override;
  void OnWindowResizeLoopEnded(uint64_t window_id) override;
};
class  WindowTreeClientAsyncWaiter {
 public:
  explicit WindowTreeClientAsyncWaiter(WindowTreeClient* proxy);
  ~WindowTreeClientAsyncWaiter();
  void OnDragEnter(
      uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask);
  void OnDragOver(
      uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask);
  void OnCompleteDrop(
      uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, uint32_t* out_action_taken);

 private:
  WindowTreeClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClientAsyncWaiter);
};


class  WindowTreeFactoryInterceptorForTesting : public WindowTreeFactory {
  virtual WindowTreeFactory* GetForwardingInterface() = 0;
  void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) override;
};
class  WindowTreeFactoryAsyncWaiter {
 public:
  explicit WindowTreeFactoryAsyncWaiter(WindowTreeFactory* proxy);
  ~WindowTreeFactoryAsyncWaiter();

 private:
  WindowTreeFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_TEST_UTILS_H_