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


#include "device/vr/public/mojom/vr_service.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "device/gamepad/public/mojom/gamepad.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "gpu/ipc/common/mailbox_holder.mojom-blink.h"
#include "gpu/ipc/common/sync_token.mojom-blink.h"
#include "ui/display/mojo/display.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-blink.h"
#include "ui/gfx/mojo/transform.mojom-blink.h"


#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_JUMBO_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "device/gamepad/public/cpp/gamepad_mojom_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/gpu_fence_handle_struct_traits.h"
#endif


namespace device {
namespace mojom {
namespace blink {


void VRServiceInterceptorForTesting::RequestDevice(RequestDeviceCallback callback) {
  GetForwardingInterface()->RequestDevice(std::move(callback));
}
void VRServiceInterceptorForTesting::SetClient(VRServiceClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void VRServiceInterceptorForTesting::SetListeningForActivate(VRDisplayClientPtr client) {
  GetForwardingInterface()->SetListeningForActivate(std::move(client));
}
VRServiceAsyncWaiter::VRServiceAsyncWaiter(
    VRService* proxy) : proxy_(proxy) {}

VRServiceAsyncWaiter::~VRServiceAsyncWaiter() = default;

void VRServiceAsyncWaiter::RequestDevice(
    XRDevicePtr* out_device) {
  base::RunLoop loop;
  proxy_->RequestDevice(
      base::BindOnce(
          [](base::RunLoop* loop,
             XRDevicePtr* out_device
,
             XRDevicePtr device) {*out_device = std::move(device);
            loop->Quit();
          },
          &loop,
          out_device));
  loop.Run();
}



void VRServiceClientInterceptorForTesting::OnDeviceChanged() {
  GetForwardingInterface()->OnDeviceChanged();
}
VRServiceClientAsyncWaiter::VRServiceClientAsyncWaiter(
    VRServiceClient* proxy) : proxy_(proxy) {}

VRServiceClientAsyncWaiter::~VRServiceClientAsyncWaiter() = default;




void XRDeviceInterceptorForTesting::RequestSession(XRSessionOptionsPtr options, bool triggered_by_displayactive, RequestSessionCallback callback) {
  GetForwardingInterface()->RequestSession(std::move(options), std::move(triggered_by_displayactive), std::move(callback));
}
void XRDeviceInterceptorForTesting::SupportsSession(XRSessionOptionsPtr options, SupportsSessionCallback callback) {
  GetForwardingInterface()->SupportsSession(std::move(options), std::move(callback));
}
void XRDeviceInterceptorForTesting::GetImmersiveVRDisplayInfo(GetImmersiveVRDisplayInfoCallback callback) {
  GetForwardingInterface()->GetImmersiveVRDisplayInfo(std::move(callback));
}
void XRDeviceInterceptorForTesting::ExitPresent() {
  GetForwardingInterface()->ExitPresent();
}
XRDeviceAsyncWaiter::XRDeviceAsyncWaiter(
    XRDevice* proxy) : proxy_(proxy) {}

XRDeviceAsyncWaiter::~XRDeviceAsyncWaiter() = default;

void XRDeviceAsyncWaiter::RequestSession(
    XRSessionOptionsPtr options, bool triggered_by_displayactive, XRSessionPtr* out_session) {
  base::RunLoop loop;
  proxy_->RequestSession(std::move(options),std::move(triggered_by_displayactive),
      base::BindOnce(
          [](base::RunLoop* loop,
             XRSessionPtr* out_session
,
             XRSessionPtr session) {*out_session = std::move(session);
            loop->Quit();
          },
          &loop,
          out_session));
  loop.Run();
}
void XRDeviceAsyncWaiter::SupportsSession(
    XRSessionOptionsPtr options, bool* out_supports_session) {
  base::RunLoop loop;
  proxy_->SupportsSession(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_supports_session
,
             bool supports_session) {*out_supports_session = std::move(supports_session);
            loop->Quit();
          },
          &loop,
          out_supports_session));
  loop.Run();
}
void XRDeviceAsyncWaiter::GetImmersiveVRDisplayInfo(
    VRDisplayInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetImmersiveVRDisplayInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             VRDisplayInfoPtr* out_info
,
             VRDisplayInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}



void XREnvironmentIntegrationProviderInterceptorForTesting::RequestHitTest(XRRayPtr ray, RequestHitTestCallback callback) {
  GetForwardingInterface()->RequestHitTest(std::move(ray), std::move(callback));
}
XREnvironmentIntegrationProviderAsyncWaiter::XREnvironmentIntegrationProviderAsyncWaiter(
    XREnvironmentIntegrationProvider* proxy) : proxy_(proxy) {}

XREnvironmentIntegrationProviderAsyncWaiter::~XREnvironmentIntegrationProviderAsyncWaiter() = default;

void XREnvironmentIntegrationProviderAsyncWaiter::RequestHitTest(
    XRRayPtr ray, base::Optional<WTF::Vector<XRHitResultPtr>>* out_results) {
  base::RunLoop loop;
  proxy_->RequestHitTest(std::move(ray),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<WTF::Vector<XRHitResultPtr>>* out_results
,
             base::Optional<WTF::Vector<XRHitResultPtr>> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}



void XRFrameDataProviderInterceptorForTesting::GetFrameData(XRFrameDataRequestOptionsPtr options, GetFrameDataCallback callback) {
  GetForwardingInterface()->GetFrameData(std::move(options), std::move(callback));
}
void XRFrameDataProviderInterceptorForTesting::GetEnvironmentIntegrationProvider(XREnvironmentIntegrationProviderAssociatedRequest environment_provider) {
  GetForwardingInterface()->GetEnvironmentIntegrationProvider(std::move(environment_provider));
}
XRFrameDataProviderAsyncWaiter::XRFrameDataProviderAsyncWaiter(
    XRFrameDataProvider* proxy) : proxy_(proxy) {}

XRFrameDataProviderAsyncWaiter::~XRFrameDataProviderAsyncWaiter() = default;

void XRFrameDataProviderAsyncWaiter::GetFrameData(
    XRFrameDataRequestOptionsPtr options, XRFrameDataPtr* out_frame_data) {
  base::RunLoop loop;
  proxy_->GetFrameData(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             XRFrameDataPtr* out_frame_data
,
             XRFrameDataPtr frame_data) {*out_frame_data = std::move(frame_data);
            loop->Quit();
          },
          &loop,
          out_frame_data));
  loop.Run();
}



void XRPresentationProviderInterceptorForTesting::UpdateLayerBounds(int16_t frame_id, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, const ::blink::WebSize& source_size) {
  GetForwardingInterface()->UpdateLayerBounds(std::move(frame_id), std::move(left_bounds), std::move(right_bounds), std::move(source_size));
}
void XRPresentationProviderInterceptorForTesting::SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) {
  GetForwardingInterface()->SubmitFrameMissing(std::move(frame_id), std::move(sync_token));
}
void XRPresentationProviderInterceptorForTesting::SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) {
  GetForwardingInterface()->SubmitFrame(std::move(frame_id), std::move(mailbox_holder), std::move(time_waited));
}
void XRPresentationProviderInterceptorForTesting::SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) {
  GetForwardingInterface()->SubmitFrameWithTextureHandle(std::move(frameId), std::move(texture));
}
void XRPresentationProviderInterceptorForTesting::SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) {
  GetForwardingInterface()->SubmitFrameDrawnIntoTexture(std::move(frameId), std::move(sync_token), std::move(time_waited));
}
XRPresentationProviderAsyncWaiter::XRPresentationProviderAsyncWaiter(
    XRPresentationProvider* proxy) : proxy_(proxy) {}

XRPresentationProviderAsyncWaiter::~XRPresentationProviderAsyncWaiter() = default;




void XRPresentationClientInterceptorForTesting::OnSubmitFrameTransferred(bool success) {
  GetForwardingInterface()->OnSubmitFrameTransferred(std::move(success));
}
void XRPresentationClientInterceptorForTesting::OnSubmitFrameRendered() {
  GetForwardingInterface()->OnSubmitFrameRendered();
}
void XRPresentationClientInterceptorForTesting::OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) {
  GetForwardingInterface()->OnSubmitFrameGpuFence(std::move(gpu_fence_handle));
}
XRPresentationClientAsyncWaiter::XRPresentationClientAsyncWaiter(
    XRPresentationClient* proxy) : proxy_(proxy) {}

XRPresentationClientAsyncWaiter::~XRPresentationClientAsyncWaiter() = default;




void XRSessionClientInterceptorForTesting::OnChanged(VRDisplayInfoPtr display) {
  GetForwardingInterface()->OnChanged(std::move(display));
}
void XRSessionClientInterceptorForTesting::OnExitPresent() {
  GetForwardingInterface()->OnExitPresent();
}
void XRSessionClientInterceptorForTesting::OnBlur() {
  GetForwardingInterface()->OnBlur();
}
void XRSessionClientInterceptorForTesting::OnFocus() {
  GetForwardingInterface()->OnFocus();
}
XRSessionClientAsyncWaiter::XRSessionClientAsyncWaiter(
    XRSessionClient* proxy) : proxy_(proxy) {}

XRSessionClientAsyncWaiter::~XRSessionClientAsyncWaiter() = default;




void VRDisplayClientInterceptorForTesting::OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) {
  GetForwardingInterface()->OnActivate(std::move(reason), std::move(callback));
}
void VRDisplayClientInterceptorForTesting::OnDeactivate(VRDisplayEventReason reason) {
  GetForwardingInterface()->OnDeactivate(std::move(reason));
}
VRDisplayClientAsyncWaiter::VRDisplayClientAsyncWaiter(
    VRDisplayClient* proxy) : proxy_(proxy) {}

VRDisplayClientAsyncWaiter::~VRDisplayClientAsyncWaiter() = default;

void VRDisplayClientAsyncWaiter::OnActivate(
    VRDisplayEventReason reason, bool* out_will_not_present) {
  base::RunLoop loop;
  proxy_->OnActivate(std::move(reason),
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





}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif