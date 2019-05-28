// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 222619063 value is based on sha256(salt + "XRSessionController1").
constexpr uint32_t kXRSessionController_SetFrameDataRestricted_Name = 222619063;
// The 965701056 value is based on sha256(salt + "XRRuntimeEventListener1").
constexpr uint32_t kXRRuntimeEventListener_OnDisplayInfoChanged_Name = 965701056;
// The 706011998 value is based on sha256(salt + "XRRuntimeEventListener2").
constexpr uint32_t kXRRuntimeEventListener_OnDeviceActivated_Name = 706011998;
// The 519417290 value is based on sha256(salt + "XRRuntimeEventListener3").
constexpr uint32_t kXRRuntimeEventListener_OnDeviceIdle_Name = 519417290;
// The 1441533533 value is based on sha256(salt + "XRRuntimeEventListener4").
constexpr uint32_t kXRRuntimeEventListener_OnExitPresent_Name = 1441533533;
// The 832493644 value is based on sha256(salt + "XRRuntime1").
constexpr uint32_t kXRRuntime_RequestSession_Name = 832493644;
// The 2023728136 value is based on sha256(salt + "XRRuntime2").
constexpr uint32_t kXRRuntime_ListenToDeviceChanges_Name = 2023728136;
// The 241056557 value is based on sha256(salt + "XRRuntime3").
constexpr uint32_t kXRRuntime_EnsureInitialized_Name = 241056557;
// The 1102674249 value is based on sha256(salt + "XRRuntime4").
constexpr uint32_t kXRRuntime_SetListeningForActivate_Name = 1102674249;
// The 994342417 value is based on sha256(salt + "XRRuntime5").
constexpr uint32_t kXRRuntime_SetInlinePosesEnabled_Name = 994342417;
// The 131920208 value is based on sha256(salt + "IsolatedXRGamepadProvider1").
constexpr uint32_t kIsolatedXRGamepadProvider_RequestUpdate_Name = 131920208;
// The 573581014 value is based on sha256(salt + "IsolatedXRGamepadProviderFactory1").
constexpr uint32_t kIsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Name = 573581014;
// The 1385614965 value is based on sha256(salt + "ImmersiveOverlay1").
constexpr uint32_t kImmersiveOverlay_RequestNextOverlayPose_Name = 1385614965;
// The 1099165017 value is based on sha256(salt + "ImmersiveOverlay2").
constexpr uint32_t kImmersiveOverlay_SubmitOverlayTexture_Name = 1099165017;
// The 942281262 value is based on sha256(salt + "ImmersiveOverlay3").
constexpr uint32_t kImmersiveOverlay_SetOverlayAndWebXRVisibility_Name = 942281262;
// The 690209537 value is based on sha256(salt + "ImmersiveOverlay4").
constexpr uint32_t kImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Name = 690209537;
// The 1741951931 value is based on sha256(salt + "XRCompositorHost1").
constexpr uint32_t kXRCompositorHost_CreateImmersiveOverlay_Name = 1741951931;
// The 1157340379 value is based on sha256(salt + "IsolatedXRRuntimeProviderClient1").
constexpr uint32_t kIsolatedXRRuntimeProviderClient_OnDeviceAdded_Name = 1157340379;
// The 2129123880 value is based on sha256(salt + "IsolatedXRRuntimeProviderClient2").
constexpr uint32_t kIsolatedXRRuntimeProviderClient_OnDeviceRemoved_Name = 2129123880;
// The 2060723773 value is based on sha256(salt + "IsolatedXRRuntimeProviderClient3").
constexpr uint32_t kIsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Name = 2060723773;
// The 266048505 value is based on sha256(salt + "IsolatedXRRuntimeProvider1").
constexpr uint32_t kIsolatedXRRuntimeProvider_RequestDevices_Name = 266048505;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_