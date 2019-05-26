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


#include "device/vr/public/mojom/isolated_xr_service.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "device/vr/public/mojom/vr_service.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_JUMBO_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "device/gamepad/public/cpp/gamepad_mojom_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace device {
namespace mojom {
namespace blink {


void XRSessionControllerInterceptorForTesting::SetFrameDataRestricted(bool restricted) {
  GetForwardingInterface()->SetFrameDataRestricted(std::move(restricted));
}
XRSessionControllerAsyncWaiter::XRSessionControllerAsyncWaiter(
    XRSessionController* proxy) : proxy_(proxy) {}

XRSessionControllerAsyncWaiter::~XRSessionControllerAsyncWaiter() = default;




void XRRuntimeEventListenerInterceptorForTesting::OnDisplayInfoChanged(::device::mojom::blink::VRDisplayInfoPtr display_info) {
  GetForwardingInterface()->OnDisplayInfoChanged(std::move(display_info));
}
void XRRuntimeEventListenerInterceptorForTesting::OnDeviceActivated(::device::mojom::blink::VRDisplayEventReason reason, OnDeviceActivatedCallback callback) {
  GetForwardingInterface()->OnDeviceActivated(std::move(reason), std::move(callback));
}
void XRRuntimeEventListenerInterceptorForTesting::OnDeviceIdle(::device::mojom::blink::VRDisplayEventReason reason) {
  GetForwardingInterface()->OnDeviceIdle(std::move(reason));
}
void XRRuntimeEventListenerInterceptorForTesting::OnExitPresent() {
  GetForwardingInterface()->OnExitPresent();
}
XRRuntimeEventListenerAsyncWaiter::XRRuntimeEventListenerAsyncWaiter(
    XRRuntimeEventListener* proxy) : proxy_(proxy) {}

XRRuntimeEventListenerAsyncWaiter::~XRRuntimeEventListenerAsyncWaiter() = default;

void XRRuntimeEventListenerAsyncWaiter::OnDeviceActivated(
    ::device::mojom::blink::VRDisplayEventReason reason, bool* out_will_not_present) {
  base::RunLoop loop;
  proxy_->OnDeviceActivated(std::move(reason),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_will_not_present
,
             bool will_not_present) {*out_will_not_present = std::move(will_not_present);
            loop->Quit();
          },
          &loop,
          out_will_not_present));
  loop.Run();
}



void XRRuntimeInterceptorForTesting::RequestSession(XRRuntimeSessionOptionsPtr options, RequestSessionCallback callback) {
  GetForwardingInterface()->RequestSession(std::move(options), std::move(callback));
}
void XRRuntimeInterceptorForTesting::ListenToDeviceChanges(XRRuntimeEventListenerAssociatedPtrInfo listener, ListenToDeviceChangesCallback callback) {
  GetForwardingInterface()->ListenToDeviceChanges(std::move(listener), std::move(callback));
}
void XRRuntimeInterceptorForTesting::EnsureInitialized(int32_t render_process_id, int32_t render_frame_id, EnsureInitializedCallback callback) {
  GetForwardingInterface()->EnsureInitialized(std::move(render_process_id), std::move(render_frame_id), std::move(callback));
}
void XRRuntimeInterceptorForTesting::SetListeningForActivate(bool listen_for_activation) {
  GetForwardingInterface()->SetListeningForActivate(std::move(listen_for_activation));
}
void XRRuntimeInterceptorForTesting::SetInlinePosesEnabled(bool enable) {
  GetForwardingInterface()->SetInlinePosesEnabled(std::move(enable));
}
XRRuntimeAsyncWaiter::XRRuntimeAsyncWaiter(
    XRRuntime* proxy) : proxy_(proxy) {}

XRRuntimeAsyncWaiter::~XRRuntimeAsyncWaiter() = default;

void XRRuntimeAsyncWaiter::RequestSession(
    XRRuntimeSessionOptionsPtr options, ::device::mojom::blink::XRSessionPtr* out_session, XRSessionControllerPtr* out_controller) {
  base::RunLoop loop;
  proxy_->RequestSession(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::blink::XRSessionPtr* out_session
,
             XRSessionControllerPtr* out_controller
,
             ::device::mojom::blink::XRSessionPtr session,
             XRSessionControllerPtr controller) {*out_session = std::move(session);*out_controller = std::move(controller);
            loop->Quit();
          },
          &loop,
          out_session,
          out_controller));
  loop.Run();
}
void XRRuntimeAsyncWaiter::ListenToDeviceChanges(
    XRRuntimeEventListenerAssociatedPtrInfo listener, ::device::mojom::blink::VRDisplayInfoPtr* out_display_info) {
  base::RunLoop loop;
  proxy_->ListenToDeviceChanges(std::move(listener),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::blink::VRDisplayInfoPtr* out_display_info
,
             ::device::mojom::blink::VRDisplayInfoPtr display_info) {*out_display_info = std::move(display_info);
            loop->Quit();
          },
          &loop,
          out_display_info));
  loop.Run();
}
void XRRuntimeAsyncWaiter::EnsureInitialized(
    int32_t render_process_id, int32_t render_frame_id) {
  base::RunLoop loop;
  proxy_->EnsureInitialized(std::move(render_process_id),std::move(render_frame_id),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void IsolatedXRGamepadProviderInterceptorForTesting::RequestUpdate(RequestUpdateCallback callback) {
  GetForwardingInterface()->RequestUpdate(std::move(callback));
}
IsolatedXRGamepadProviderAsyncWaiter::IsolatedXRGamepadProviderAsyncWaiter(
    IsolatedXRGamepadProvider* proxy) : proxy_(proxy) {}

IsolatedXRGamepadProviderAsyncWaiter::~IsolatedXRGamepadProviderAsyncWaiter() = default;

void IsolatedXRGamepadProviderAsyncWaiter::RequestUpdate(
    XRGamepadDataPtr* out_data) {
  base::RunLoop loop;
  proxy_->RequestUpdate(
      base::BindOnce(
          [](base::RunLoop* loop,
             XRGamepadDataPtr* out_data
,
             XRGamepadDataPtr data) {*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_data));
  loop.Run();
}



void IsolatedXRGamepadProviderFactoryInterceptorForTesting::GetIsolatedXRGamepadProvider(IsolatedXRGamepadProviderRequest provider) {
  GetForwardingInterface()->GetIsolatedXRGamepadProvider(std::move(provider));
}
IsolatedXRGamepadProviderFactoryAsyncWaiter::IsolatedXRGamepadProviderFactoryAsyncWaiter(
    IsolatedXRGamepadProviderFactory* proxy) : proxy_(proxy) {}

IsolatedXRGamepadProviderFactoryAsyncWaiter::~IsolatedXRGamepadProviderFactoryAsyncWaiter() = default;




void ImmersiveOverlayInterceptorForTesting::RequestNextOverlayPose(RequestNextOverlayPoseCallback callback) {
  GetForwardingInterface()->RequestNextOverlayPose(std::move(callback));
}
void ImmersiveOverlayInterceptorForTesting::SubmitOverlayTexture(int16_t frame_id, mojo::ScopedHandle texture, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, SubmitOverlayTextureCallback callback) {
  GetForwardingInterface()->SubmitOverlayTexture(std::move(frame_id), std::move(texture), std::move(left_bounds), std::move(right_bounds), std::move(callback));
}
void ImmersiveOverlayInterceptorForTesting::SetOverlayAndWebXRVisibility(bool overlay_visible, bool webxr_visible) {
  GetForwardingInterface()->SetOverlayAndWebXRVisibility(std::move(overlay_visible), std::move(webxr_visible));
}
void ImmersiveOverlayInterceptorForTesting::RequestNotificationOnWebXrSubmitted(RequestNotificationOnWebXrSubmittedCallback callback) {
  GetForwardingInterface()->RequestNotificationOnWebXrSubmitted(std::move(callback));
}
ImmersiveOverlayAsyncWaiter::ImmersiveOverlayAsyncWaiter(
    ImmersiveOverlay* proxy) : proxy_(proxy) {}

ImmersiveOverlayAsyncWaiter::~ImmersiveOverlayAsyncWaiter() = default;

void ImmersiveOverlayAsyncWaiter::RequestNextOverlayPose(
    ::device::mojom::blink::XRFrameDataPtr* out_pose) {
  base::RunLoop loop;
  proxy_->RequestNextOverlayPose(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::blink::XRFrameDataPtr* out_pose
,
             ::device::mojom::blink::XRFrameDataPtr pose) {*out_pose = std::move(pose);
            loop->Quit();
          },
          &loop,
          out_pose));
  loop.Run();
}
void ImmersiveOverlayAsyncWaiter::SubmitOverlayTexture(
    int16_t frame_id, mojo::ScopedHandle texture, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, bool* out_success) {
  base::RunLoop loop;
  proxy_->SubmitOverlayTexture(std::move(frame_id),std::move(texture),std::move(left_bounds),std::move(right_bounds),
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
void ImmersiveOverlayAsyncWaiter::RequestNotificationOnWebXrSubmitted(
    ) {
  base::RunLoop loop;
  proxy_->RequestNotificationOnWebXrSubmitted(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void XRCompositorHostInterceptorForTesting::CreateImmersiveOverlay(ImmersiveOverlayRequest overlay) {
  GetForwardingInterface()->CreateImmersiveOverlay(std::move(overlay));
}
XRCompositorHostAsyncWaiter::XRCompositorHostAsyncWaiter(
    XRCompositorHost* proxy) : proxy_(proxy) {}

XRCompositorHostAsyncWaiter::~XRCompositorHostAsyncWaiter() = default;




void IsolatedXRRuntimeProviderClientInterceptorForTesting::OnDeviceAdded(XRRuntimePtr runtime, IsolatedXRGamepadProviderFactoryPtr gamepad_factory, XRCompositorHostPtr compositor_host, ::device::mojom::blink::XRDeviceId device_id) {
  GetForwardingInterface()->OnDeviceAdded(std::move(runtime), std::move(gamepad_factory), std::move(compositor_host), std::move(device_id));
}
void IsolatedXRRuntimeProviderClientInterceptorForTesting::OnDeviceRemoved(::device::mojom::blink::XRDeviceId device_index) {
  GetForwardingInterface()->OnDeviceRemoved(std::move(device_index));
}
void IsolatedXRRuntimeProviderClientInterceptorForTesting::OnDevicesEnumerated() {
  GetForwardingInterface()->OnDevicesEnumerated();
}
IsolatedXRRuntimeProviderClientAsyncWaiter::IsolatedXRRuntimeProviderClientAsyncWaiter(
    IsolatedXRRuntimeProviderClient* proxy) : proxy_(proxy) {}

IsolatedXRRuntimeProviderClientAsyncWaiter::~IsolatedXRRuntimeProviderClientAsyncWaiter() = default;




void IsolatedXRRuntimeProviderInterceptorForTesting::RequestDevices(IsolatedXRRuntimeProviderClientPtr client) {
  GetForwardingInterface()->RequestDevices(std::move(client));
}
IsolatedXRRuntimeProviderAsyncWaiter::IsolatedXRRuntimeProviderAsyncWaiter(
    IsolatedXRRuntimeProvider* proxy) : proxy_(proxy) {}

IsolatedXRRuntimeProviderAsyncWaiter::~IsolatedXRRuntimeProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif