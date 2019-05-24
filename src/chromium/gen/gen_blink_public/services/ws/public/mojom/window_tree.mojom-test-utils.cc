// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/ws/public/mojom/window_tree.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom.h"
#include "services/ws/public/mojom/window_manager.mojom.h"
#include "services/ws/public/mojom/screen_provider_observer.mojom.h"
#include "services/ws/public/mojom/window_tree_constants.mojom.h"
#include "ui/base/ime/mojo/ime.mojom.h"
#include "ui/base/mojo/cursor.mojom.h"
#include "ui/base/mojo/ui_base_types.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/image/mojo/image.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include "ui/platform_window/mojo/text_input_state.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_allocation_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#include "ui/base/mojo/cursor_struct_traits.h"
#include "ui/base/mojo/ui_base_types_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/image/mojo/image_skia_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif


namespace ws {
namespace mojom {


void WindowTreeInterceptorForTesting::NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) {
  GetForwardingInterface()->NewWindow(std::move(change_id), std::move(window_id), std::move(properties));
}
void WindowTreeInterceptorForTesting::NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) {
  GetForwardingInterface()->NewTopLevelWindow(std::move(change_id), std::move(window_id), std::move(properties));
}
void WindowTreeInterceptorForTesting::DeleteWindow(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->DeleteWindow(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::SetCapture(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->SetCapture(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::ReleaseCapture(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->ReleaseCapture(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::ObserveEventTypes(const std::vector<::ui::mojom::EventType>& types) {
  GetForwardingInterface()->ObserveEventTypes(std::move(types));
}
void WindowTreeInterceptorForTesting::SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) {
  GetForwardingInterface()->SetWindowBounds(std::move(change_id), std::move(window_id), std::move(bounds), std::move(local_surface_id_allocation));
}
void WindowTreeInterceptorForTesting::UpdateLocalSurfaceIdFromChild(uint64_t window_id, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) {
  GetForwardingInterface()->UpdateLocalSurfaceIdFromChild(std::move(window_id), std::move(local_surface_id_allocation));
}
void WindowTreeInterceptorForTesting::AllocateLocalSurfaceId(uint64_t window_id) {
  GetForwardingInterface()->AllocateLocalSurfaceId(std::move(window_id));
}
void WindowTreeInterceptorForTesting::SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) {
  GetForwardingInterface()->SetWindowTransform(std::move(change_id), std::move(window_id), std::move(transform));
}
void WindowTreeInterceptorForTesting::SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) {
  GetForwardingInterface()->SetClientArea(std::move(window_id), std::move(insets), std::move(additional_client_areas));
}
void WindowTreeInterceptorForTesting::SetHitTestInsets(uint64_t window_id, const gfx::Insets& mouse, const gfx::Insets& touch) {
  GetForwardingInterface()->SetHitTestInsets(std::move(window_id), std::move(mouse), std::move(touch));
}
void WindowTreeInterceptorForTesting::SetShape(uint64_t window_id, const std::vector<gfx::Rect>& shape) {
  GetForwardingInterface()->SetShape(std::move(window_id), std::move(shape));
}
void WindowTreeInterceptorForTesting::SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) {
  GetForwardingInterface()->SetCanAcceptDrops(std::move(window_id), std::move(accepts_drops));
}
void WindowTreeInterceptorForTesting::SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) {
  GetForwardingInterface()->SetWindowVisibility(std::move(change_id), std::move(window_id), std::move(visible));
}
void WindowTreeInterceptorForTesting::SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) {
  GetForwardingInterface()->SetWindowProperty(std::move(change_id), std::move(window_id), std::move(name), std::move(value));
}
void WindowTreeInterceptorForTesting::SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) {
  GetForwardingInterface()->SetWindowOpacity(std::move(change_id), std::move(window_id), std::move(opacity));
}
void WindowTreeInterceptorForTesting::SetWindowTransparent(uint32_t change_id, uint64_t window_id, bool transparent) {
  GetForwardingInterface()->SetWindowTransparent(std::move(change_id), std::move(window_id), std::move(transparent));
}
void WindowTreeInterceptorForTesting::AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) {
  GetForwardingInterface()->AttachCompositorFrameSink(std::move(window_id), std::move(compositor_frame_sink), std::move(client));
}
void WindowTreeInterceptorForTesting::AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) {
  GetForwardingInterface()->AddWindow(std::move(change_id), std::move(parent), std::move(child));
}
void WindowTreeInterceptorForTesting::RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->RemoveWindowFromParent(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) {
  GetForwardingInterface()->AddTransientWindow(std::move(change_id), std::move(window_id), std::move(transient_window_id));
}
void WindowTreeInterceptorForTesting::RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) {
  GetForwardingInterface()->RemoveTransientWindowFromParent(std::move(change_id), std::move(transient_window_id));
}
void WindowTreeInterceptorForTesting::SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) {
  GetForwardingInterface()->SetModalType(std::move(change_id), std::move(window_id), std::move(type));
}
void WindowTreeInterceptorForTesting::ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) {
  GetForwardingInterface()->ReorderWindow(std::move(change_id), std::move(window_id), std::move(relative_window_id), std::move(direction));
}
void WindowTreeInterceptorForTesting::GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) {
  GetForwardingInterface()->GetWindowTree(std::move(window_id), std::move(callback));
}
void WindowTreeInterceptorForTesting::Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) {
  GetForwardingInterface()->Embed(std::move(window_id), std::move(client), std::move(embed_flags), std::move(callback));
}
void WindowTreeInterceptorForTesting::ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) {
  GetForwardingInterface()->ScheduleEmbed(std::move(client), std::move(callback));
}
void WindowTreeInterceptorForTesting::ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) {
  GetForwardingInterface()->ScheduleEmbedForExistingClient(std::move(window_id), std::move(callback));
}
void WindowTreeInterceptorForTesting::EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) {
  GetForwardingInterface()->EmbedUsingToken(std::move(window_id), std::move(token), std::move(embed_flags), std::move(callback));
}
void WindowTreeInterceptorForTesting::AttachFrameSinkId(uint64_t window_id, const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->AttachFrameSinkId(std::move(window_id), std::move(frame_sink_id));
}
void WindowTreeInterceptorForTesting::UnattachFrameSinkId(uint64_t window_id) {
  GetForwardingInterface()->UnattachFrameSinkId(std::move(window_id));
}
void WindowTreeInterceptorForTesting::SetFocus(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->SetFocus(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::SetCanFocus(uint64_t window_id, bool can_focus) {
  GetForwardingInterface()->SetCanFocus(std::move(window_id), std::move(can_focus));
}
void WindowTreeInterceptorForTesting::SetCursor(uint32_t change_id, uint64_t window_id, ui::Cursor cursor) {
  GetForwardingInterface()->SetCursor(std::move(change_id), std::move(window_id), std::move(cursor));
}
void WindowTreeInterceptorForTesting::SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) {
  GetForwardingInterface()->SetWindowTextInputState(std::move(window_id), std::move(state));
}
void WindowTreeInterceptorForTesting::SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) {
  GetForwardingInterface()->SetImeVisibility(std::move(window_id), std::move(visible), std::move(state));
}
void WindowTreeInterceptorForTesting::SetEventTargetingPolicy(uint64_t window_id, ::ws::mojom::EventTargetingPolicy policy) {
  GetForwardingInterface()->SetEventTargetingPolicy(std::move(window_id), std::move(policy));
}
void WindowTreeInterceptorForTesting::OnWindowInputEventAck(uint32_t event_id, ::ws::mojom::EventResult result) {
  GetForwardingInterface()->OnWindowInputEventAck(std::move(event_id), std::move(result));
}
void WindowTreeInterceptorForTesting::DeactivateWindow(uint64_t window_id) {
  GetForwardingInterface()->DeactivateWindow(std::move(window_id));
}
void WindowTreeInterceptorForTesting::StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) {
  GetForwardingInterface()->StackAbove(std::move(change_id), std::move(above_id), std::move(below_id));
}
void WindowTreeInterceptorForTesting::StackAtTop(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->StackAtTop(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::BindWindowManagerInterface(const std::string& name, ::ws::mojom::WindowManagerAssociatedRequest window_manager) {
  GetForwardingInterface()->BindWindowManagerInterface(std::move(name), std::move(window_manager));
}
void WindowTreeInterceptorForTesting::GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) {
  GetForwardingInterface()->GetCursorLocationMemory(std::move(callback));
}
void WindowTreeInterceptorForTesting::PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ws::mojom::MoveLoopSource source, const gfx::Point& cursor, int hit_test) {
  GetForwardingInterface()->PerformWindowMove(std::move(change_id), std::move(window_id), std::move(source), std::move(cursor), std::move(hit_test));
}
void WindowTreeInterceptorForTesting::CancelWindowMove(uint64_t window_id) {
  GetForwardingInterface()->CancelWindowMove(std::move(window_id));
}
void WindowTreeInterceptorForTesting::PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const gfx::ImageSkia& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) {
  GetForwardingInterface()->PerformDragDrop(std::move(change_id), std::move(source_window_id), std::move(screen_location), std::move(drag_data), std::move(drag_image), std::move(drag_image_offset), std::move(drag_operation), std::move(source));
}
void WindowTreeInterceptorForTesting::CancelDragDrop(uint64_t window_id) {
  GetForwardingInterface()->CancelDragDrop(std::move(window_id));
}
void WindowTreeInterceptorForTesting::ObserveTopmostWindow(::ws::mojom::MoveLoopSource source, uint64_t window_id) {
  GetForwardingInterface()->ObserveTopmostWindow(std::move(source), std::move(window_id));
}
void WindowTreeInterceptorForTesting::StopObservingTopmostWindow() {
  GetForwardingInterface()->StopObservingTopmostWindow();
}
void WindowTreeInterceptorForTesting::SetWindowResizeShadow(uint64_t window_id, int hit_test) {
  GetForwardingInterface()->SetWindowResizeShadow(std::move(window_id), std::move(hit_test));
}
void WindowTreeInterceptorForTesting::CancelActiveTouchesExcept(uint64_t not_cancelled_window_id) {
  GetForwardingInterface()->CancelActiveTouchesExcept(std::move(not_cancelled_window_id));
}
void WindowTreeInterceptorForTesting::CancelActiveTouches(uint64_t window_id) {
  GetForwardingInterface()->CancelActiveTouches(std::move(window_id));
}
void WindowTreeInterceptorForTesting::TransferGestureEventsTo(uint64_t current_id, uint64_t new_id, bool should_cancel) {
  GetForwardingInterface()->TransferGestureEventsTo(std::move(current_id), std::move(new_id), std::move(should_cancel));
}
void WindowTreeInterceptorForTesting::TrackOcclusionState(uint64_t window_id) {
  GetForwardingInterface()->TrackOcclusionState(std::move(window_id));
}
void WindowTreeInterceptorForTesting::PauseWindowOcclusionTracking() {
  GetForwardingInterface()->PauseWindowOcclusionTracking();
}
void WindowTreeInterceptorForTesting::UnpauseWindowOcclusionTracking() {
  GetForwardingInterface()->UnpauseWindowOcclusionTracking();
}
void WindowTreeInterceptorForTesting::ConnectToImeEngine(::ime::mojom::ImeEngineRequest engine_request, ::ime::mojom::ImeEngineClientPtr client) {
  GetForwardingInterface()->ConnectToImeEngine(std::move(engine_request), std::move(client));
}
WindowTreeAsyncWaiter::WindowTreeAsyncWaiter(
    WindowTree* proxy) : proxy_(proxy) {}

WindowTreeAsyncWaiter::~WindowTreeAsyncWaiter() = default;

void WindowTreeAsyncWaiter::GetWindowTree(
    uint64_t window_id, std::vector<::ws::mojom::WindowDataPtr>* out_windows) {
  base::RunLoop loop;
  proxy_->GetWindowTree(std::move(window_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::ws::mojom::WindowDataPtr>* out_windows
,
             std::vector<::ws::mojom::WindowDataPtr> windows) {*out_windows = std::move(windows);
            loop->Quit();
          },
          &loop,
          out_windows));
  loop.Run();
}
void WindowTreeAsyncWaiter::Embed(
    uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, bool* out_success) {
  base::RunLoop loop;
  proxy_->Embed(std::move(window_id),std::move(client),std::move(embed_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void WindowTreeAsyncWaiter::ScheduleEmbed(
    WindowTreeClientPtr client, base::UnguessableToken* out_token) {
  base::RunLoop loop;
  proxy_->ScheduleEmbed(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_token
,
             const base::UnguessableToken& token) {*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_token));
  loop.Run();
}
void WindowTreeAsyncWaiter::ScheduleEmbedForExistingClient(
    uint32_t window_id, base::UnguessableToken* out_token) {
  base::RunLoop loop;
  proxy_->ScheduleEmbedForExistingClient(std::move(window_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_token
,
             const base::UnguessableToken& token) {*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_token));
  loop.Run();
}
void WindowTreeAsyncWaiter::EmbedUsingToken(
    uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, bool* out_success) {
  base::RunLoop loop;
  proxy_->EmbedUsingToken(std::move(window_id),std::move(token),std::move(embed_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void WindowTreeAsyncWaiter::GetCursorLocationMemory(
    mojo::ScopedSharedBufferHandle* out_cursor_buffer) {
  base::RunLoop loop;
  proxy_->GetCursorLocationMemory(
      base::BindOnce(
          [](base::RunLoop* loop,
             mojo::ScopedSharedBufferHandle* out_cursor_buffer
,
             mojo::ScopedSharedBufferHandle cursor_buffer) {*out_cursor_buffer = std::move(cursor_buffer);
            loop->Quit();
          },
          &loop,
          out_cursor_buffer));
  loop.Run();
}



void WindowTreeClientInterceptorForTesting::OnClientId(uint32_t client_id) {
  GetForwardingInterface()->OnClientId(std::move(client_id));
}
void WindowTreeClientInterceptorForTesting::OnEmbed(::ws::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) {
  GetForwardingInterface()->OnEmbed(std::move(root), std::move(tree), std::move(display_id), std::move(focused_window), std::move(parent_drawn), std::move(local_surface_id_allocation));
}
void WindowTreeClientInterceptorForTesting::OnEmbedFromToken(const base::UnguessableToken& token, ::ws::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) {
  GetForwardingInterface()->OnEmbedFromToken(std::move(token), std::move(root), std::move(display_id), std::move(local_surface_id_allocation));
}
void WindowTreeClientInterceptorForTesting::OnEmbeddedAppDisconnected(uint64_t window) {
  GetForwardingInterface()->OnEmbeddedAppDisconnected(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnUnembed(uint64_t window) {
  GetForwardingInterface()->OnUnembed(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) {
  GetForwardingInterface()->OnCaptureChanged(std::move(new_capture), std::move(old_capture));
}
void WindowTreeClientInterceptorForTesting::OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->OnFrameSinkIdAllocated(std::move(window), std::move(frame_sink_id));
}
void WindowTreeClientInterceptorForTesting::OnTopLevelCreated(uint32_t change_id, ::ws::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) {
  GetForwardingInterface()->OnTopLevelCreated(std::move(change_id), std::move(data), std::move(display_id), std::move(parent_drawn), std::move(local_surface_id_allocation));
}
void WindowTreeClientInterceptorForTesting::OnWindowBoundsChanged(uint64_t window, const gfx::Rect& new_bounds, ui::WindowShowState state, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) {
  GetForwardingInterface()->OnWindowBoundsChanged(std::move(window), std::move(new_bounds), std::move(state), std::move(local_surface_id_allocation));
}
void WindowTreeClientInterceptorForTesting::OnWindowTransformChanged(uint64_t window, const gfx::Transform& new_transform) {
  GetForwardingInterface()->OnWindowTransformChanged(std::move(window), std::move(new_transform));
}
void WindowTreeClientInterceptorForTesting::OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) {
  GetForwardingInterface()->OnTransientWindowAdded(std::move(window_id), std::move(transient_window_id));
}
void WindowTreeClientInterceptorForTesting::OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) {
  GetForwardingInterface()->OnTransientWindowRemoved(std::move(window_id), std::move(transient_window_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ws::mojom::WindowDataPtr> windows) {
  GetForwardingInterface()->OnWindowHierarchyChanged(std::move(window), std::move(old_parent), std::move(new_parent), std::move(windows));
}
void WindowTreeClientInterceptorForTesting::OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) {
  GetForwardingInterface()->OnWindowReordered(std::move(window_id), std::move(relative_window_id), std::move(direction));
}
void WindowTreeClientInterceptorForTesting::OnWindowDeleted(uint64_t window) {
  GetForwardingInterface()->OnWindowDeleted(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnWindowVisibilityChanged(uint64_t window, bool visible) {
  GetForwardingInterface()->OnWindowVisibilityChanged(std::move(window), std::move(visible));
}
void WindowTreeClientInterceptorForTesting::OnWindowDisplayChanged(uint64_t window, int64_t display_id) {
  GetForwardingInterface()->OnWindowDisplayChanged(std::move(window), std::move(display_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) {
  GetForwardingInterface()->OnWindowParentDrawnStateChanged(std::move(window), std::move(drawn));
}
void WindowTreeClientInterceptorForTesting::OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) {
  GetForwardingInterface()->OnWindowSharedPropertyChanged(std::move(window), std::move(name), std::move(new_data));
}
void WindowTreeClientInterceptorForTesting::OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, std::unique_ptr<ui::Event> event, bool matches_event_observer) {
  GetForwardingInterface()->OnWindowInputEvent(std::move(event_id), std::move(window), std::move(display_id), std::move(event), std::move(matches_event_observer));
}
void WindowTreeClientInterceptorForTesting::OnObservedInputEvent(std::unique_ptr<ui::Event> event) {
  GetForwardingInterface()->OnObservedInputEvent(std::move(event));
}
void WindowTreeClientInterceptorForTesting::OnWindowFocused(uint64_t focused_window_id) {
  GetForwardingInterface()->OnWindowFocused(std::move(focused_window_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowCursorChanged(uint64_t window_id, ui::Cursor cursor) {
  GetForwardingInterface()->OnWindowCursorChanged(std::move(window_id), std::move(cursor));
}
void WindowTreeClientInterceptorForTesting::OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) {
  GetForwardingInterface()->OnDragDropStart(std::move(drag_data));
}
void WindowTreeClientInterceptorForTesting::OnDragEnter(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragEnterCallback callback) {
  GetForwardingInterface()->OnDragEnter(std::move(window), std::move(key_state), std::move(location_in_root), std::move(location), std::move(effect_bitmask), std::move(callback));
}
void WindowTreeClientInterceptorForTesting::OnDragOver(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragOverCallback callback) {
  GetForwardingInterface()->OnDragOver(std::move(window), std::move(key_state), std::move(location_in_root), std::move(location), std::move(effect_bitmask), std::move(callback));
}
void WindowTreeClientInterceptorForTesting::OnDragLeave(uint64_t window) {
  GetForwardingInterface()->OnDragLeave(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnCompleteDropCallback callback) {
  GetForwardingInterface()->OnCompleteDrop(std::move(window), std::move(key_state), std::move(location_in_root), std::move(location), std::move(effect_bitmask), std::move(callback));
}
void WindowTreeClientInterceptorForTesting::OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) {
  GetForwardingInterface()->OnPerformDragDropCompleted(std::move(change_id), std::move(success), std::move(action_taken));
}
void WindowTreeClientInterceptorForTesting::OnDragDropDone() {
  GetForwardingInterface()->OnDragDropDone();
}
void WindowTreeClientInterceptorForTesting::OnTopmostWindowChanged(const std::vector<uint64_t>& topmost_ids) {
  GetForwardingInterface()->OnTopmostWindowChanged(std::move(topmost_ids));
}
void WindowTreeClientInterceptorForTesting::OnChangeCompleted(uint32_t change_id, bool success) {
  GetForwardingInterface()->OnChangeCompleted(std::move(change_id), std::move(success));
}
void WindowTreeClientInterceptorForTesting::RequestClose(uint64_t window_id) {
  GetForwardingInterface()->RequestClose(std::move(window_id));
}
void WindowTreeClientInterceptorForTesting::GetScreenProviderObserver(::ws::mojom::ScreenProviderObserverAssociatedRequest observer) {
  GetForwardingInterface()->GetScreenProviderObserver(std::move(observer));
}
void WindowTreeClientInterceptorForTesting::OnOcclusionStatesChanged(const base::flat_map<uint64_t, ::ws::mojom::OcclusionState>& occlusion_changes) {
  GetForwardingInterface()->OnOcclusionStatesChanged(std::move(occlusion_changes));
}
void WindowTreeClientInterceptorForTesting::CleanupGestureState(uint64_t window_id) {
  GetForwardingInterface()->CleanupGestureState(std::move(window_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowResizeLoopStarted(uint64_t window_id) {
  GetForwardingInterface()->OnWindowResizeLoopStarted(std::move(window_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowResizeLoopEnded(uint64_t window_id) {
  GetForwardingInterface()->OnWindowResizeLoopEnded(std::move(window_id));
}
WindowTreeClientAsyncWaiter::WindowTreeClientAsyncWaiter(
    WindowTreeClient* proxy) : proxy_(proxy) {}

WindowTreeClientAsyncWaiter::~WindowTreeClientAsyncWaiter() = default;

void WindowTreeClientAsyncWaiter::OnDragEnter(
    uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask) {
  base::RunLoop loop;
  proxy_->OnDragEnter(std::move(window),std::move(key_state),std::move(location_in_root),std::move(location),std::move(effect_bitmask),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_supported_op_bitmask
,
             uint32_t supported_op_bitmask) {*out_supported_op_bitmask = std::move(supported_op_bitmask);
            loop->Quit();
          },
          &loop,
          out_supported_op_bitmask));
  loop.Run();
}
void WindowTreeClientAsyncWaiter::OnDragOver(
    uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask) {
  base::RunLoop loop;
  proxy_->OnDragOver(std::move(window),std::move(key_state),std::move(location_in_root),std::move(location),std::move(effect_bitmask),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_supported_op_bitmask
,
             uint32_t supported_op_bitmask) {*out_supported_op_bitmask = std::move(supported_op_bitmask);
            loop->Quit();
          },
          &loop,
          out_supported_op_bitmask));
  loop.Run();
}
void WindowTreeClientAsyncWaiter::OnCompleteDrop(
    uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, uint32_t* out_action_taken) {
  base::RunLoop loop;
  proxy_->OnCompleteDrop(std::move(window),std::move(key_state),std::move(location_in_root),std::move(location),std::move(effect_bitmask),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_action_taken
,
             uint32_t action_taken) {*out_action_taken = std::move(action_taken);
            loop->Quit();
          },
          &loop,
          out_action_taken));
  loop.Run();
}



void WindowTreeFactoryInterceptorForTesting::CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) {
  GetForwardingInterface()->CreateWindowTree(std::move(tree_request), std::move(client));
}
WindowTreeFactoryAsyncWaiter::WindowTreeFactoryAsyncWaiter(
    WindowTreeFactory* proxy) : proxy_(proxy) {}

WindowTreeFactoryAsyncWaiter::~WindowTreeFactoryAsyncWaiter() = default;






}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif