// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 113423920 value is based on sha256(salt + "VRService1").
constexpr uint32_t kVRService_RequestDevice_Name = 113423920;
// The 1750137397 value is based on sha256(salt + "VRService2").
constexpr uint32_t kVRService_SetClient_Name = 1750137397;
// The 790633982 value is based on sha256(salt + "VRService3").
constexpr uint32_t kVRService_SetListeningForActivate_Name = 790633982;
// The 944962318 value is based on sha256(salt + "VRServiceClient1").
constexpr uint32_t kVRServiceClient_OnDeviceChanged_Name = 944962318;
// The 248119297 value is based on sha256(salt + "XRDevice1").
constexpr uint32_t kXRDevice_RequestSession_Name = 248119297;
// The 1846121284 value is based on sha256(salt + "XRDevice2").
constexpr uint32_t kXRDevice_SupportsSession_Name = 1846121284;
// The 441117970 value is based on sha256(salt + "XRDevice3").
constexpr uint32_t kXRDevice_GetImmersiveVRDisplayInfo_Name = 441117970;
// The 1898164148 value is based on sha256(salt + "XRDevice4").
constexpr uint32_t kXRDevice_ExitPresent_Name = 1898164148;
// The 1632279079 value is based on sha256(salt + "XREnvironmentIntegrationProvider1").
constexpr uint32_t kXREnvironmentIntegrationProvider_RequestHitTest_Name = 1632279079;
// The 927805092 value is based on sha256(salt + "XRFrameDataProvider1").
constexpr uint32_t kXRFrameDataProvider_GetFrameData_Name = 927805092;
// The 1249019734 value is based on sha256(salt + "XRFrameDataProvider2").
constexpr uint32_t kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name = 1249019734;
// The 2133834291 value is based on sha256(salt + "XRPresentationProvider1").
constexpr uint32_t kXRPresentationProvider_UpdateLayerBounds_Name = 2133834291;
// The 26498981 value is based on sha256(salt + "XRPresentationProvider2").
constexpr uint32_t kXRPresentationProvider_SubmitFrameMissing_Name = 26498981;
// The 1943221656 value is based on sha256(salt + "XRPresentationProvider3").
constexpr uint32_t kXRPresentationProvider_SubmitFrame_Name = 1943221656;
// The 102239880 value is based on sha256(salt + "XRPresentationProvider4").
constexpr uint32_t kXRPresentationProvider_SubmitFrameWithTextureHandle_Name = 102239880;
// The 365771954 value is based on sha256(salt + "XRPresentationProvider5").
constexpr uint32_t kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name = 365771954;
// The 268403218 value is based on sha256(salt + "XRPresentationClient1").
constexpr uint32_t kXRPresentationClient_OnSubmitFrameTransferred_Name = 268403218;
// The 1655454567 value is based on sha256(salt + "XRPresentationClient2").
constexpr uint32_t kXRPresentationClient_OnSubmitFrameRendered_Name = 1655454567;
// The 1387268678 value is based on sha256(salt + "XRPresentationClient3").
constexpr uint32_t kXRPresentationClient_OnSubmitFrameGpuFence_Name = 1387268678;
// The 370191764 value is based on sha256(salt + "XRSessionClient1").
constexpr uint32_t kXRSessionClient_OnChanged_Name = 370191764;
// The 694741196 value is based on sha256(salt + "XRSessionClient2").
constexpr uint32_t kXRSessionClient_OnExitPresent_Name = 694741196;
// The 1863103979 value is based on sha256(salt + "XRSessionClient3").
constexpr uint32_t kXRSessionClient_OnBlur_Name = 1863103979;
// The 160555955 value is based on sha256(salt + "XRSessionClient4").
constexpr uint32_t kXRSessionClient_OnFocus_Name = 160555955;
// The 450363929 value is based on sha256(salt + "VRDisplayClient1").
constexpr uint32_t kVRDisplayClient_OnActivate_Name = 450363929;
// The 1613432101 value is based on sha256(salt + "VRDisplayClient2").
constexpr uint32_t kVRDisplayClient_OnDeactivate_Name = 1613432101;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_