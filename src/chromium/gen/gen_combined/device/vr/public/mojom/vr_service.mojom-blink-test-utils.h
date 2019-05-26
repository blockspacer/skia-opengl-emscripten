// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "device/vr/public/mojom/vr_service.mojom-blink.h"
#include "base/component_export.h"


namespace device {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceInterceptorForTesting : public VRService {
  virtual VRService* GetForwardingInterface() = 0;
  void RequestDevice(RequestDeviceCallback callback) override;
  void SetClient(VRServiceClientPtr client) override;
  void SetListeningForActivate(VRDisplayClientPtr client) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceAsyncWaiter {
 public:
  explicit VRServiceAsyncWaiter(VRService* proxy);
  ~VRServiceAsyncWaiter();
  void RequestDevice(
      XRDevicePtr* out_device);

 private:
  VRService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRServiceAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceClientInterceptorForTesting : public VRServiceClient {
  virtual VRServiceClient* GetForwardingInterface() = 0;
  void OnDeviceChanged() override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceClientAsyncWaiter {
 public:
  explicit VRServiceClientAsyncWaiter(VRServiceClient* proxy);
  ~VRServiceClientAsyncWaiter();

 private:
  VRServiceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRServiceClientAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDeviceInterceptorForTesting : public XRDevice {
  virtual XRDevice* GetForwardingInterface() = 0;
  void RequestSession(XRSessionOptionsPtr options, bool triggered_by_displayactive, RequestSessionCallback callback) override;
  void SupportsSession(XRSessionOptionsPtr options, SupportsSessionCallback callback) override;
  void GetImmersiveVRDisplayInfo(GetImmersiveVRDisplayInfoCallback callback) override;
  void ExitPresent() override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDeviceAsyncWaiter {
 public:
  explicit XRDeviceAsyncWaiter(XRDevice* proxy);
  ~XRDeviceAsyncWaiter();
  void RequestSession(
      XRSessionOptionsPtr options, bool triggered_by_displayactive, XRSessionPtr* out_session);
  void SupportsSession(
      XRSessionOptionsPtr options, bool* out_supports_session);
  void GetImmersiveVRDisplayInfo(
      VRDisplayInfoPtr* out_info);

 private:
  XRDevice* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRDeviceAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProviderInterceptorForTesting : public XREnvironmentIntegrationProvider {
  virtual XREnvironmentIntegrationProvider* GetForwardingInterface() = 0;
  void RequestHitTest(XRRayPtr ray, RequestHitTestCallback callback) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProviderAsyncWaiter {
 public:
  explicit XREnvironmentIntegrationProviderAsyncWaiter(XREnvironmentIntegrationProvider* proxy);
  ~XREnvironmentIntegrationProviderAsyncWaiter();
  void RequestHitTest(
      XRRayPtr ray, base::Optional<WTF::Vector<XRHitResultPtr>>* out_results);

 private:
  XREnvironmentIntegrationProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XREnvironmentIntegrationProviderAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProviderInterceptorForTesting : public XRFrameDataProvider {
  virtual XRFrameDataProvider* GetForwardingInterface() = 0;
  void GetFrameData(XRFrameDataRequestOptionsPtr options, GetFrameDataCallback callback) override;
  void GetEnvironmentIntegrationProvider(XREnvironmentIntegrationProviderAssociatedRequest environment_provider) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProviderAsyncWaiter {
 public:
  explicit XRFrameDataProviderAsyncWaiter(XRFrameDataProvider* proxy);
  ~XRFrameDataProviderAsyncWaiter();
  void GetFrameData(
      XRFrameDataRequestOptionsPtr options, XRFrameDataPtr* out_frame_data);

 private:
  XRFrameDataProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRFrameDataProviderAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationProviderInterceptorForTesting : public XRPresentationProvider {
  virtual XRPresentationProvider* GetForwardingInterface() = 0;
  void UpdateLayerBounds(int16_t frame_id, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, const ::blink::WebSize& source_size) override;
  void SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) override;
  void SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) override;
  void SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) override;
  void SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationProviderAsyncWaiter {
 public:
  explicit XRPresentationProviderAsyncWaiter(XRPresentationProvider* proxy);
  ~XRPresentationProviderAsyncWaiter();

 private:
  XRPresentationProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRPresentationProviderAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationClientInterceptorForTesting : public XRPresentationClient {
  virtual XRPresentationClient* GetForwardingInterface() = 0;
  void OnSubmitFrameTransferred(bool success) override;
  void OnSubmitFrameRendered() override;
  void OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationClientAsyncWaiter {
 public:
  explicit XRPresentationClientAsyncWaiter(XRPresentationClient* proxy);
  ~XRPresentationClientAsyncWaiter();

 private:
  XRPresentationClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRPresentationClientAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionClientInterceptorForTesting : public XRSessionClient {
  virtual XRSessionClient* GetForwardingInterface() = 0;
  void OnChanged(VRDisplayInfoPtr display) override;
  void OnExitPresent() override;
  void OnBlur() override;
  void OnFocus() override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionClientAsyncWaiter {
 public:
  explicit XRSessionClientAsyncWaiter(XRSessionClient* proxy);
  ~XRSessionClientAsyncWaiter();

 private:
  XRSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRSessionClientAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClientInterceptorForTesting : public VRDisplayClient {
  virtual VRDisplayClient* GetForwardingInterface() = 0;
  void OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) override;
  void OnDeactivate(VRDisplayEventReason reason) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClientAsyncWaiter {
 public:
  explicit VRDisplayClientAsyncWaiter(VRDisplayClient* proxy);
  ~VRDisplayClientAsyncWaiter();
  void OnActivate(
      VRDisplayEventReason reason, bool* out_will_not_present);

 private:
  VRDisplayClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VRDisplayClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_TEST_UTILS_H_