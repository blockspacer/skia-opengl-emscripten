// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "device/vr/public/mojom/isolated_xr_service.mojom-blink.h"
#include "base/component_export.h"


namespace device {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionControllerInterceptorForTesting : public XRSessionController {
  virtual XRSessionController* GetForwardingInterface() = 0;
  void SetFrameDataRestricted(bool restricted) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionControllerAsyncWaiter {
 public:
  explicit XRSessionControllerAsyncWaiter(XRSessionController* proxy);
  ~XRSessionControllerAsyncWaiter();

 private:
  XRSessionController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRSessionControllerAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListenerInterceptorForTesting : public XRRuntimeEventListener {
  virtual XRRuntimeEventListener* GetForwardingInterface() = 0;
  void OnDisplayInfoChanged(::device::mojom::blink::VRDisplayInfoPtr display_info) override;
  void OnDeviceActivated(::device::mojom::blink::VRDisplayEventReason reason, OnDeviceActivatedCallback callback) override;
  void OnDeviceIdle(::device::mojom::blink::VRDisplayEventReason reason) override;
  void OnExitPresent() override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListenerAsyncWaiter {
 public:
  explicit XRRuntimeEventListenerAsyncWaiter(XRRuntimeEventListener* proxy);
  ~XRRuntimeEventListenerAsyncWaiter();
  void OnDeviceActivated(
      ::device::mojom::blink::VRDisplayEventReason reason, bool* out_will_not_present);

 private:
  XRRuntimeEventListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRRuntimeEventListenerAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeInterceptorForTesting : public XRRuntime {
  virtual XRRuntime* GetForwardingInterface() = 0;
  void RequestSession(XRRuntimeSessionOptionsPtr options, RequestSessionCallback callback) override;
  void ListenToDeviceChanges(XRRuntimeEventListenerAssociatedPtrInfo listener, ListenToDeviceChangesCallback callback) override;
  void EnsureInitialized(int32_t render_process_id, int32_t render_frame_id, EnsureInitializedCallback callback) override;
  void SetListeningForActivate(bool listen_for_activation) override;
  void SetInlinePosesEnabled(bool enable) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeAsyncWaiter {
 public:
  explicit XRRuntimeAsyncWaiter(XRRuntime* proxy);
  ~XRRuntimeAsyncWaiter();
  void RequestSession(
      XRRuntimeSessionOptionsPtr options, ::device::mojom::blink::XRSessionPtr* out_session, XRSessionControllerPtr* out_controller);
  void ListenToDeviceChanges(
      XRRuntimeEventListenerAssociatedPtrInfo listener, ::device::mojom::blink::VRDisplayInfoPtr* out_display_info);
  void EnsureInitialized(
      int32_t render_process_id, int32_t render_frame_id);

 private:
  XRRuntime* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRRuntimeAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderInterceptorForTesting : public IsolatedXRGamepadProvider {
  virtual IsolatedXRGamepadProvider* GetForwardingInterface() = 0;
  void RequestUpdate(RequestUpdateCallback callback) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderAsyncWaiter {
 public:
  explicit IsolatedXRGamepadProviderAsyncWaiter(IsolatedXRGamepadProvider* proxy);
  ~IsolatedXRGamepadProviderAsyncWaiter();
  void RequestUpdate(
      XRGamepadDataPtr* out_data);

 private:
  IsolatedXRGamepadProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IsolatedXRGamepadProviderAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderFactoryInterceptorForTesting : public IsolatedXRGamepadProviderFactory {
  virtual IsolatedXRGamepadProviderFactory* GetForwardingInterface() = 0;
  void GetIsolatedXRGamepadProvider(IsolatedXRGamepadProviderRequest provider) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderFactoryAsyncWaiter {
 public:
  explicit IsolatedXRGamepadProviderFactoryAsyncWaiter(IsolatedXRGamepadProviderFactory* proxy);
  ~IsolatedXRGamepadProviderFactoryAsyncWaiter();

 private:
  IsolatedXRGamepadProviderFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IsolatedXRGamepadProviderFactoryAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlayInterceptorForTesting : public ImmersiveOverlay {
  virtual ImmersiveOverlay* GetForwardingInterface() = 0;
  void RequestNextOverlayPose(RequestNextOverlayPoseCallback callback) override;
  void SubmitOverlayTexture(int16_t frame_id, mojo::ScopedHandle texture, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, SubmitOverlayTextureCallback callback) override;
  void SetOverlayAndWebXRVisibility(bool overlay_visible, bool webxr_visible) override;
  void RequestNotificationOnWebXrSubmitted(RequestNotificationOnWebXrSubmittedCallback callback) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlayAsyncWaiter {
 public:
  explicit ImmersiveOverlayAsyncWaiter(ImmersiveOverlay* proxy);
  ~ImmersiveOverlayAsyncWaiter();
  void RequestNextOverlayPose(
      ::device::mojom::blink::XRFrameDataPtr* out_pose);
  void SubmitOverlayTexture(
      int16_t frame_id, mojo::ScopedHandle texture, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, bool* out_success);
  void RequestNotificationOnWebXrSubmitted(
      );

 private:
  ImmersiveOverlay* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImmersiveOverlayAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRCompositorHostInterceptorForTesting : public XRCompositorHost {
  virtual XRCompositorHost* GetForwardingInterface() = 0;
  void CreateImmersiveOverlay(ImmersiveOverlayRequest overlay) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRCompositorHostAsyncWaiter {
 public:
  explicit XRCompositorHostAsyncWaiter(XRCompositorHost* proxy);
  ~XRCompositorHostAsyncWaiter();

 private:
  XRCompositorHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XRCompositorHostAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderClientInterceptorForTesting : public IsolatedXRRuntimeProviderClient {
  virtual IsolatedXRRuntimeProviderClient* GetForwardingInterface() = 0;
  void OnDeviceAdded(XRRuntimePtr runtime, IsolatedXRGamepadProviderFactoryPtr gamepad_factory, XRCompositorHostPtr compositor_host, ::device::mojom::blink::XRDeviceId device_id) override;
  void OnDeviceRemoved(::device::mojom::blink::XRDeviceId device_index) override;
  void OnDevicesEnumerated() override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderClientAsyncWaiter {
 public:
  explicit IsolatedXRRuntimeProviderClientAsyncWaiter(IsolatedXRRuntimeProviderClient* proxy);
  ~IsolatedXRRuntimeProviderClientAsyncWaiter();

 private:
  IsolatedXRRuntimeProviderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IsolatedXRRuntimeProviderClientAsyncWaiter);
};


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderInterceptorForTesting : public IsolatedXRRuntimeProvider {
  virtual IsolatedXRRuntimeProvider* GetForwardingInterface() = 0;
  void RequestDevices(IsolatedXRRuntimeProviderClientPtr client) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderAsyncWaiter {
 public:
  explicit IsolatedXRRuntimeProviderAsyncWaiter(IsolatedXRRuntimeProvider* proxy);
  ~IsolatedXRRuntimeProviderAsyncWaiter();

 private:
  IsolatedXRRuntimeProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IsolatedXRRuntimeProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_TEST_UTILS_H_