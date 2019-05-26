// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1853184845 value is based on sha256(salt + "XRSessionController1").
constexpr uint32_t kXRSessionController_SetFrameDataRestricted_Name = 1853184845;
// The 189613172 value is based on sha256(salt + "XRRuntimeEventListener1").
constexpr uint32_t kXRRuntimeEventListener_OnDisplayInfoChanged_Name = 189613172;
// The 702079444 value is based on sha256(salt + "XRRuntimeEventListener2").
constexpr uint32_t kXRRuntimeEventListener_OnDeviceActivated_Name = 702079444;
// The 744277075 value is based on sha256(salt + "XRRuntimeEventListener3").
constexpr uint32_t kXRRuntimeEventListener_OnDeviceIdle_Name = 744277075;
// The 334640856 value is based on sha256(salt + "XRRuntimeEventListener4").
constexpr uint32_t kXRRuntimeEventListener_OnExitPresent_Name = 334640856;
// The 1828679307 value is based on sha256(salt + "XRRuntime1").
constexpr uint32_t kXRRuntime_RequestSession_Name = 1828679307;
// The 14474628 value is based on sha256(salt + "XRRuntime2").
constexpr uint32_t kXRRuntime_ListenToDeviceChanges_Name = 14474628;
// The 815926492 value is based on sha256(salt + "XRRuntime3").
constexpr uint32_t kXRRuntime_EnsureInitialized_Name = 815926492;
// The 1764274441 value is based on sha256(salt + "XRRuntime4").
constexpr uint32_t kXRRuntime_SetListeningForActivate_Name = 1764274441;
// The 36366 value is based on sha256(salt + "XRRuntime5").
constexpr uint32_t kXRRuntime_SetInlinePosesEnabled_Name = 36366;
// The 1331842210 value is based on sha256(salt + "IsolatedXRGamepadProvider1").
constexpr uint32_t kIsolatedXRGamepadProvider_RequestUpdate_Name = 1331842210;
// The 1023619283 value is based on sha256(salt + "IsolatedXRGamepadProviderFactory1").
constexpr uint32_t kIsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Name = 1023619283;
// The 97595389 value is based on sha256(salt + "ImmersiveOverlay1").
constexpr uint32_t kImmersiveOverlay_RequestNextOverlayPose_Name = 97595389;
// The 1799502284 value is based on sha256(salt + "ImmersiveOverlay2").
constexpr uint32_t kImmersiveOverlay_SubmitOverlayTexture_Name = 1799502284;
// The 1414339399 value is based on sha256(salt + "ImmersiveOverlay3").
constexpr uint32_t kImmersiveOverlay_SetOverlayAndWebXRVisibility_Name = 1414339399;
// The 2137672999 value is based on sha256(salt + "ImmersiveOverlay4").
constexpr uint32_t kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name = 2137672999;
// The 1886391680 value is based on sha256(salt + "XRCompositorHost1").
constexpr uint32_t kXRCompositorHost_CreateImmersiveOverlay_Name = 1886391680;
// The 1860116312 value is based on sha256(salt + "IsolatedXRRuntimeProviderClient1").
constexpr uint32_t kIsolatedXRRuntimeProviderClient_OnDeviceAdded_Name = 1860116312;
// The 552217746 value is based on sha256(salt + "IsolatedXRRuntimeProviderClient2").
constexpr uint32_t kIsolatedXRRuntimeProviderClient_OnDeviceRemoved_Name = 552217746;
// The 1984689492 value is based on sha256(salt + "IsolatedXRRuntimeProviderClient3").
constexpr uint32_t kIsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Name = 1984689492;
// The 1118977451 value is based on sha256(salt + "IsolatedXRRuntimeProvider1").
constexpr uint32_t kIsolatedXRRuntimeProvider_RequestDevices_Name = 1118977451;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_