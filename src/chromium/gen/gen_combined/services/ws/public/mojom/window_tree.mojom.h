// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/ws/public/mojom/window_tree.mojom-shared.h"
#include "services/ws/public/mojom/window_tree.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-forward.h"
#include "services/ws/public/mojom/window_manager.mojom-forward.h"
#include "services/ws/public/mojom/screen_provider_observer.mojom-forward.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-forward.h"
#include "ui/base/ime/mojo/ime.mojom-forward.h"
#include "ui/base/mojo/cursor.mojom-forward.h"
#include "ui/base/mojo/ui_base_types.mojom-forward.h"
#include "ui/events/mojo/event.mojom-forward.h"
#include "ui/events/mojo/event_constants.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
#include "ui/gfx/image/mojo/image.mojom-forward.h"
#include "ui/gfx/mojo/transform.mojom-forward.h"
#include "ui/platform_window/mojo/text_input_state.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ws {
namespace mojom {

class WindowTreeProxy;

template <typename ImplRefTraits>
class WindowTreeStub;

class WindowTreeRequestValidator;
class WindowTreeResponseValidator;


class  WindowTree
    : public WindowTreeInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WindowTreeInterfaceBase;
  using Proxy_ = WindowTreeProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeRequestValidator;
  using ResponseValidator_ = WindowTreeResponseValidator;
  enum MethodMinVersions : uint32_t {
    kNewWindowMinVersion = 0,
    kNewTopLevelWindowMinVersion = 0,
    kDeleteWindowMinVersion = 0,
    kSetCaptureMinVersion = 0,
    kReleaseCaptureMinVersion = 0,
    kObserveEventTypesMinVersion = 0,
    kSetWindowBoundsMinVersion = 0,
    kUpdateLocalSurfaceIdFromChildMinVersion = 0,
    kAllocateLocalSurfaceIdMinVersion = 0,
    kSetWindowTransformMinVersion = 0,
    kSetClientAreaMinVersion = 0,
    kSetHitTestInsetsMinVersion = 0,
    kSetShapeMinVersion = 0,
    kSetCanAcceptDropsMinVersion = 0,
    kSetWindowVisibilityMinVersion = 0,
    kSetWindowPropertyMinVersion = 0,
    kSetWindowOpacityMinVersion = 0,
    kSetWindowTransparentMinVersion = 0,
    kAttachCompositorFrameSinkMinVersion = 0,
    kAddWindowMinVersion = 0,
    kRemoveWindowFromParentMinVersion = 0,
    kAddTransientWindowMinVersion = 0,
    kRemoveTransientWindowFromParentMinVersion = 0,
    kSetModalTypeMinVersion = 0,
    kReorderWindowMinVersion = 0,
    kGetWindowTreeMinVersion = 0,
    kEmbedMinVersion = 0,
    kScheduleEmbedMinVersion = 0,
    kScheduleEmbedForExistingClientMinVersion = 0,
    kEmbedUsingTokenMinVersion = 0,
    kAttachFrameSinkIdMinVersion = 0,
    kUnattachFrameSinkIdMinVersion = 0,
    kSetFocusMinVersion = 0,
    kSetCanFocusMinVersion = 0,
    kSetCursorMinVersion = 0,
    kSetWindowTextInputStateMinVersion = 0,
    kSetImeVisibilityMinVersion = 0,
    kSetEventTargetingPolicyMinVersion = 0,
    kOnWindowInputEventAckMinVersion = 0,
    kDeactivateWindowMinVersion = 0,
    kStackAboveMinVersion = 0,
    kStackAtTopMinVersion = 0,
    kBindWindowManagerInterfaceMinVersion = 0,
    kGetCursorLocationMemoryMinVersion = 0,
    kPerformWindowMoveMinVersion = 0,
    kCancelWindowMoveMinVersion = 0,
    kPerformDragDropMinVersion = 0,
    kCancelDragDropMinVersion = 0,
    kObserveTopmostWindowMinVersion = 0,
    kStopObservingTopmostWindowMinVersion = 0,
    kSetWindowResizeShadowMinVersion = 0,
    kCancelActiveTouchesExceptMinVersion = 0,
    kCancelActiveTouchesMinVersion = 0,
    kTransferGestureEventsToMinVersion = 0,
    kTrackOcclusionStateMinVersion = 0,
    kPauseWindowOcclusionTrackingMinVersion = 0,
    kUnpauseWindowOcclusionTrackingMinVersion = 0,
    kConnectToImeEngineMinVersion = 0,
  };
  virtual ~WindowTree() {}

  
  virtual void NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) = 0;

  
  virtual void NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) = 0;

  
  virtual void DeleteWindow(uint32_t change_id, uint64_t window_id) = 0;

  
  virtual void SetCapture(uint32_t change_id, uint64_t window_id) = 0;

  
  virtual void ReleaseCapture(uint32_t change_id, uint64_t window_id) = 0;

  
  virtual void ObserveEventTypes(const std::vector<::ui::mojom::EventType>& types) = 0;

  
  virtual void SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) = 0;

  
  virtual void UpdateLocalSurfaceIdFromChild(uint64_t window_id, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) = 0;

  
  virtual void AllocateLocalSurfaceId(uint64_t window_id) = 0;

  
  virtual void SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) = 0;

  
  virtual void SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) = 0;

  
  virtual void SetHitTestInsets(uint64_t window_id, const gfx::Insets& mouse, const gfx::Insets& touch) = 0;

  
  virtual void SetShape(uint64_t window_id, const std::vector<gfx::Rect>& shape) = 0;

  
  virtual void SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) = 0;

  
  virtual void SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) = 0;

  
  virtual void SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) = 0;

  
  virtual void SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) = 0;

  
  virtual void SetWindowTransparent(uint32_t change_id, uint64_t window_id, bool transparent) = 0;

  
  virtual void AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) = 0;

  
  virtual void AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) = 0;

  
  virtual void RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) = 0;

  
  virtual void AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) = 0;

  
  virtual void RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) = 0;

  
  virtual void SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) = 0;

  
  virtual void ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) = 0;


  using GetWindowTreeCallback = base::OnceCallback<void(std::vector<::ws::mojom::WindowDataPtr>)>;
  
  virtual void GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) = 0;


  using EmbedCallback = base::OnceCallback<void(bool)>;
  
  virtual void Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) = 0;


  using ScheduleEmbedCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) = 0;


  using ScheduleEmbedForExistingClientCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) = 0;


  using EmbedUsingTokenCallback = base::OnceCallback<void(bool)>;
  
  virtual void EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) = 0;

  
  virtual void AttachFrameSinkId(uint64_t window_id, const viz::FrameSinkId& frame_sink_id) = 0;

  
  virtual void UnattachFrameSinkId(uint64_t window_id) = 0;

  
  virtual void SetFocus(uint32_t change_id, uint64_t window_id) = 0;

  
  virtual void SetCanFocus(uint64_t window_id, bool can_focus) = 0;

  
  virtual void SetCursor(uint32_t change_id, uint64_t window_id, ui::Cursor cursor) = 0;

  
  virtual void SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) = 0;

  
  virtual void SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) = 0;

  
  virtual void SetEventTargetingPolicy(uint64_t window_id, ::ws::mojom::EventTargetingPolicy policy) = 0;

  
  virtual void OnWindowInputEventAck(uint32_t event_id, ::ws::mojom::EventResult result) = 0;

  
  virtual void DeactivateWindow(uint64_t window_id) = 0;

  
  virtual void StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) = 0;

  
  virtual void StackAtTop(uint32_t change_id, uint64_t window_id) = 0;

  
  virtual void BindWindowManagerInterface(const std::string& name, ::ws::mojom::WindowManagerAssociatedRequest window_manager) = 0;


  using GetCursorLocationMemoryCallback = base::OnceCallback<void(mojo::ScopedSharedBufferHandle)>;
  
  virtual void GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) = 0;

  
  virtual void PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ws::mojom::MoveLoopSource source, const gfx::Point& cursor, int hit_test) = 0;

  
  virtual void CancelWindowMove(uint64_t window_id) = 0;

  
  virtual void PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const gfx::ImageSkia& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) = 0;

  
  virtual void CancelDragDrop(uint64_t window_id) = 0;

  
  virtual void ObserveTopmostWindow(::ws::mojom::MoveLoopSource source, uint64_t window_id) = 0;

  
  virtual void StopObservingTopmostWindow() = 0;

  
  virtual void SetWindowResizeShadow(uint64_t window_id, int hit_test) = 0;

  
  virtual void CancelActiveTouchesExcept(uint64_t not_cancelled_window_id) = 0;

  
  virtual void CancelActiveTouches(uint64_t window_id) = 0;

  
  virtual void TransferGestureEventsTo(uint64_t current_id, uint64_t new_id, bool should_cancel) = 0;

  
  virtual void TrackOcclusionState(uint64_t window_id) = 0;

  
  virtual void PauseWindowOcclusionTracking() = 0;

  
  virtual void UnpauseWindowOcclusionTracking() = 0;

  
  virtual void ConnectToImeEngine(::ime::mojom::ImeEngineRequest engine_request, ::ime::mojom::ImeEngineClientPtr client) = 0;
};

class WindowTreeClientProxy;

template <typename ImplRefTraits>
class WindowTreeClientStub;

class WindowTreeClientRequestValidator;
class WindowTreeClientResponseValidator;


class  WindowTreeClient
    : public WindowTreeClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WindowTreeClientInterfaceBase;
  using Proxy_ = WindowTreeClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeClientStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeClientRequestValidator;
  using ResponseValidator_ = WindowTreeClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnClientIdMinVersion = 0,
    kOnEmbedMinVersion = 0,
    kOnEmbedFromTokenMinVersion = 0,
    kOnEmbeddedAppDisconnectedMinVersion = 0,
    kOnUnembedMinVersion = 0,
    kOnCaptureChangedMinVersion = 0,
    kOnFrameSinkIdAllocatedMinVersion = 0,
    kOnTopLevelCreatedMinVersion = 0,
    kOnWindowBoundsChangedMinVersion = 0,
    kOnWindowTransformChangedMinVersion = 0,
    kOnTransientWindowAddedMinVersion = 0,
    kOnTransientWindowRemovedMinVersion = 0,
    kOnWindowHierarchyChangedMinVersion = 0,
    kOnWindowReorderedMinVersion = 0,
    kOnWindowDeletedMinVersion = 0,
    kOnWindowVisibilityChangedMinVersion = 0,
    kOnWindowDisplayChangedMinVersion = 0,
    kOnWindowParentDrawnStateChangedMinVersion = 0,
    kOnWindowSharedPropertyChangedMinVersion = 0,
    kOnWindowInputEventMinVersion = 0,
    kOnObservedInputEventMinVersion = 0,
    kOnWindowFocusedMinVersion = 0,
    kOnWindowCursorChangedMinVersion = 0,
    kOnDragDropStartMinVersion = 0,
    kOnDragEnterMinVersion = 0,
    kOnDragOverMinVersion = 0,
    kOnDragLeaveMinVersion = 0,
    kOnCompleteDropMinVersion = 0,
    kOnPerformDragDropCompletedMinVersion = 0,
    kOnDragDropDoneMinVersion = 0,
    kOnTopmostWindowChangedMinVersion = 0,
    kOnChangeCompletedMinVersion = 0,
    kRequestCloseMinVersion = 0,
    kGetScreenProviderObserverMinVersion = 0,
    kOnOcclusionStatesChangedMinVersion = 0,
    kCleanupGestureStateMinVersion = 0,
    kOnWindowResizeLoopStartedMinVersion = 0,
    kOnWindowResizeLoopEndedMinVersion = 0,
  };
  virtual ~WindowTreeClient() {}

  
  virtual void OnClientId(uint32_t client_id) = 0;

  
  virtual void OnEmbed(::ws::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) = 0;

  
  virtual void OnEmbedFromToken(const base::UnguessableToken& token, ::ws::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) = 0;

  
  virtual void OnEmbeddedAppDisconnected(uint64_t window) = 0;

  
  virtual void OnUnembed(uint64_t window) = 0;

  
  virtual void OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) = 0;

  
  virtual void OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) = 0;

  
  virtual void OnTopLevelCreated(uint32_t change_id, ::ws::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) = 0;

  
  virtual void OnWindowBoundsChanged(uint64_t window, const gfx::Rect& new_bounds, ui::WindowShowState state, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) = 0;

  
  virtual void OnWindowTransformChanged(uint64_t window, const gfx::Transform& new_transform) = 0;

  
  virtual void OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) = 0;

  
  virtual void OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) = 0;

  
  virtual void OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ws::mojom::WindowDataPtr> windows) = 0;

  
  virtual void OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) = 0;

  
  virtual void OnWindowDeleted(uint64_t window) = 0;

  
  virtual void OnWindowVisibilityChanged(uint64_t window, bool visible) = 0;

  
  virtual void OnWindowDisplayChanged(uint64_t window, int64_t display_id) = 0;

  
  virtual void OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) = 0;

  
  virtual void OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) = 0;

  
  virtual void OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, std::unique_ptr<ui::Event> event, bool matches_event_observer) = 0;

  
  virtual void OnObservedInputEvent(std::unique_ptr<ui::Event> event) = 0;

  
  virtual void OnWindowFocused(uint64_t focused_window_id) = 0;

  
  virtual void OnWindowCursorChanged(uint64_t window_id, ui::Cursor cursor) = 0;

  
  virtual void OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) = 0;


  using OnDragEnterCallback = base::OnceCallback<void(uint32_t)>;
  
  virtual void OnDragEnter(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragEnterCallback callback) = 0;


  using OnDragOverCallback = base::OnceCallback<void(uint32_t)>;
  
  virtual void OnDragOver(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragOverCallback callback) = 0;

  
  virtual void OnDragLeave(uint64_t window) = 0;


  using OnCompleteDropCallback = base::OnceCallback<void(uint32_t)>;
  
  virtual void OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnCompleteDropCallback callback) = 0;

  
  virtual void OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) = 0;

  
  virtual void OnDragDropDone() = 0;

  
  virtual void OnTopmostWindowChanged(const std::vector<uint64_t>& topmost_ids) = 0;

  
  virtual void OnChangeCompleted(uint32_t change_id, bool success) = 0;

  
  virtual void RequestClose(uint64_t window_id) = 0;

  
  virtual void GetScreenProviderObserver(::ws::mojom::ScreenProviderObserverAssociatedRequest observer) = 0;

  
  virtual void OnOcclusionStatesChanged(const base::flat_map<uint64_t, ::ws::mojom::OcclusionState>& occlusion_changes) = 0;

  
  virtual void CleanupGestureState(uint64_t window_id) = 0;

  
  virtual void OnWindowResizeLoopStarted(uint64_t window_id) = 0;

  
  virtual void OnWindowResizeLoopEnded(uint64_t window_id) = 0;
};

class WindowTreeFactoryProxy;

template <typename ImplRefTraits>
class WindowTreeFactoryStub;

class WindowTreeFactoryRequestValidator;


class  WindowTreeFactory
    : public WindowTreeFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WindowTreeFactoryInterfaceBase;
  using Proxy_ = WindowTreeFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeFactoryStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateWindowTreeMinVersion = 0,
  };
  virtual ~WindowTreeFactory() {}

  
  virtual void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) = 0;
};

class  WindowTreeProxy
    : public WindowTree {
 public:
  using InterfaceType = WindowTree;

  explicit WindowTreeProxy(mojo::MessageReceiverWithResponder* receiver);
  void NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) final;
  void NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) final;
  void DeleteWindow(uint32_t change_id, uint64_t window_id) final;
  void SetCapture(uint32_t change_id, uint64_t window_id) final;
  void ReleaseCapture(uint32_t change_id, uint64_t window_id) final;
  void ObserveEventTypes(const std::vector<::ui::mojom::EventType>& types) final;
  void SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) final;
  void UpdateLocalSurfaceIdFromChild(uint64_t window_id, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) final;
  void AllocateLocalSurfaceId(uint64_t window_id) final;
  void SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) final;
  void SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) final;
  void SetHitTestInsets(uint64_t window_id, const gfx::Insets& mouse, const gfx::Insets& touch) final;
  void SetShape(uint64_t window_id, const std::vector<gfx::Rect>& shape) final;
  void SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) final;
  void SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) final;
  void SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) final;
  void SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) final;
  void SetWindowTransparent(uint32_t change_id, uint64_t window_id, bool transparent) final;
  void AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) final;
  void AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) final;
  void RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) final;
  void AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) final;
  void RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) final;
  void SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) final;
  void ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) final;
  void GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) final;
  void Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) final;
  void ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) final;
  void ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) final;
  void EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) final;
  void AttachFrameSinkId(uint64_t window_id, const viz::FrameSinkId& frame_sink_id) final;
  void UnattachFrameSinkId(uint64_t window_id) final;
  void SetFocus(uint32_t change_id, uint64_t window_id) final;
  void SetCanFocus(uint64_t window_id, bool can_focus) final;
  void SetCursor(uint32_t change_id, uint64_t window_id, ui::Cursor cursor) final;
  void SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) final;
  void SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) final;
  void SetEventTargetingPolicy(uint64_t window_id, ::ws::mojom::EventTargetingPolicy policy) final;
  void OnWindowInputEventAck(uint32_t event_id, ::ws::mojom::EventResult result) final;
  void DeactivateWindow(uint64_t window_id) final;
  void StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) final;
  void StackAtTop(uint32_t change_id, uint64_t window_id) final;
  void BindWindowManagerInterface(const std::string& name, ::ws::mojom::WindowManagerAssociatedRequest window_manager) final;
  void GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) final;
  void PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ws::mojom::MoveLoopSource source, const gfx::Point& cursor, int hit_test) final;
  void CancelWindowMove(uint64_t window_id) final;
  void PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const gfx::ImageSkia& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) final;
  void CancelDragDrop(uint64_t window_id) final;
  void ObserveTopmostWindow(::ws::mojom::MoveLoopSource source, uint64_t window_id) final;
  void StopObservingTopmostWindow() final;
  void SetWindowResizeShadow(uint64_t window_id, int hit_test) final;
  void CancelActiveTouchesExcept(uint64_t not_cancelled_window_id) final;
  void CancelActiveTouches(uint64_t window_id) final;
  void TransferGestureEventsTo(uint64_t current_id, uint64_t new_id, bool should_cancel) final;
  void TrackOcclusionState(uint64_t window_id) final;
  void PauseWindowOcclusionTracking() final;
  void UnpauseWindowOcclusionTracking() final;
  void ConnectToImeEngine(::ime::mojom::ImeEngineRequest engine_request, ::ime::mojom::ImeEngineClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  WindowTreeClientProxy
    : public WindowTreeClient {
 public:
  using InterfaceType = WindowTreeClient;

  explicit WindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnClientId(uint32_t client_id) final;
  void OnEmbed(::ws::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) final;
  void OnEmbedFromToken(const base::UnguessableToken& token, ::ws::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) final;
  void OnEmbeddedAppDisconnected(uint64_t window) final;
  void OnUnembed(uint64_t window) final;
  void OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) final;
  void OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) final;
  void OnTopLevelCreated(uint32_t change_id, ::ws::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const viz::LocalSurfaceIdAllocation& local_surface_id_allocation) final;
  void OnWindowBoundsChanged(uint64_t window, const gfx::Rect& new_bounds, ui::WindowShowState state, const base::Optional<viz::LocalSurfaceIdAllocation>& local_surface_id_allocation) final;
  void OnWindowTransformChanged(uint64_t window, const gfx::Transform& new_transform) final;
  void OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) final;
  void OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) final;
  void OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ws::mojom::WindowDataPtr> windows) final;
  void OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ws::mojom::OrderDirection direction) final;
  void OnWindowDeleted(uint64_t window) final;
  void OnWindowVisibilityChanged(uint64_t window, bool visible) final;
  void OnWindowDisplayChanged(uint64_t window, int64_t display_id) final;
  void OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) final;
  void OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) final;
  void OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, std::unique_ptr<ui::Event> event, bool matches_event_observer) final;
  void OnObservedInputEvent(std::unique_ptr<ui::Event> event) final;
  void OnWindowFocused(uint64_t focused_window_id) final;
  void OnWindowCursorChanged(uint64_t window_id, ui::Cursor cursor) final;
  void OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) final;
  void OnDragEnter(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragEnterCallback callback) final;
  void OnDragOver(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnDragOverCallback callback) final;
  void OnDragLeave(uint64_t window) final;
  void OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::PointF& location_in_root, const gfx::PointF& location, uint32_t effect_bitmask, OnCompleteDropCallback callback) final;
  void OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) final;
  void OnDragDropDone() final;
  void OnTopmostWindowChanged(const std::vector<uint64_t>& topmost_ids) final;
  void OnChangeCompleted(uint32_t change_id, bool success) final;
  void RequestClose(uint64_t window_id) final;
  void GetScreenProviderObserver(::ws::mojom::ScreenProviderObserverAssociatedRequest observer) final;
  void OnOcclusionStatesChanged(const base::flat_map<uint64_t, ::ws::mojom::OcclusionState>& occlusion_changes) final;
  void CleanupGestureState(uint64_t window_id) final;
  void OnWindowResizeLoopStarted(uint64_t window_id) final;
  void OnWindowResizeLoopEnded(uint64_t window_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  WindowTreeFactoryProxy
    : public WindowTreeFactory {
 public:
  using InterfaceType = WindowTreeFactory;

  explicit WindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowTreeStubDispatch {
 public:
  static bool Accept(WindowTree* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTree* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTree>>
class WindowTreeStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeStub() {}
  ~WindowTreeStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeClientStubDispatch {
 public:
  static bool Accept(WindowTreeClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTreeClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTreeClient>>
class WindowTreeClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeClientStub() {}
  ~WindowTreeClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeFactoryStubDispatch {
 public:
  static bool Accept(WindowTreeFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTreeFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTreeFactory>>
class WindowTreeFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeFactoryStub() {}
  ~WindowTreeFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_H_