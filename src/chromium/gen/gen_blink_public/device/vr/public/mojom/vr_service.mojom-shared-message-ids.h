// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 902236943 value is based on sha256(salt + "VRService1").
constexpr uint32_t kVRService_RequestDevice_Name = 902236943;
// The 14841969 value is based on sha256(salt + "VRService2").
constexpr uint32_t kVRService_SetClient_Name = 14841969;
// The 2143816347 value is based on sha256(salt + "VRService3").
constexpr uint32_t kVRService_SetListeningForActivate_Name = 2143816347;
// The 737081065 value is based on sha256(salt + "VRServiceClient1").
constexpr uint32_t kVRServiceClient_OnDeviceChanged_Name = 737081065;
// The 880501626 value is based on sha256(salt + "XRDevice1").
constexpr uint32_t kXRDevice_RequestSession_Name = 880501626;
// The 2123633615 value is based on sha256(salt + "XRDevice2").
constexpr uint32_t kXRDevice_SupportsSession_Name = 2123633615;
// The 572414081 value is based on sha256(salt + "XRDevice3").
constexpr uint32_t kXRDevice_GetImmersiveVRDisplayInfo_Name = 572414081;
// The 2132501772 value is based on sha256(salt + "XRDevice4").
constexpr uint32_t kXRDevice_ExitPresent_Name = 2132501772;
// The 2016485561 value is based on sha256(salt + "XREnvironmentIntegrationProvider1").
constexpr uint32_t kXREnvironmentIntegrationProvider_RequestHitTest_Name = 2016485561;
// The 1910629501 value is based on sha256(salt + "XRFrameDataProvider1").
constexpr uint32_t kXRFrameDataProvider_GetFrameData_Name = 1910629501;
// The 772091549 value is based on sha256(salt + "XRFrameDataProvider2").
constexpr uint32_t kXRFrameDataProvider_GetEnvironmentIntegrationProvider_Name = 772091549;
// The 315593762 value is based on sha256(salt + "XRPresentationProvider1").
constexpr uint32_t kXRPresentationProvider_UpdateLayerBounds_Name = 315593762;
// The 1133267664 value is based on sha256(salt + "XRPresentationProvider2").
constexpr uint32_t kXRPresentationProvider_SubmitFrameMissing_Name = 1133267664;
// The 97121670 value is based on sha256(salt + "XRPresentationProvider3").
constexpr uint32_t kXRPresentationProvider_SubmitFrame_Name = 97121670;
// The 1377714252 value is based on sha256(salt + "XRPresentationProvider4").
constexpr uint32_t kXRPresentationProvider_SubmitFrameWithTextureHandle_Name = 1377714252;
// The 895153277 value is based on sha256(salt + "XRPresentationProvider5").
constexpr uint32_t kXRPresentationProvider_SubmitFrameDrawnIntoTexture_Name = 895153277;
// The 468403940 value is based on sha256(salt + "XRPresentationClient1").
constexpr uint32_t kXRPresentationClient_OnSubmitFrameTransferred_Name = 468403940;
// The 191602720 value is based on sha256(salt + "XRPresentationClient2").
constexpr uint32_t kXRPresentationClient_OnSubmitFrameRendered_Name = 191602720;
// The 1706424020 value is based on sha256(salt + "XRPresentationClient3").
constexpr uint32_t kXRPresentationClient_OnSubmitFrameGpuFence_Name = 1706424020;
// The 2069286769 value is based on sha256(salt + "XRSessionClient1").
constexpr uint32_t kXRSessionClient_OnChanged_Name = 2069286769;
// The 1299746026 value is based on sha256(salt + "XRSessionClient2").
constexpr uint32_t kXRSessionClient_OnExitPresent_Name = 1299746026;
// The 2099359171 value is based on sha256(salt + "XRSessionClient3").
constexpr uint32_t kXRSessionClient_OnBlur_Name = 2099359171;
// The 1366682395 value is based on sha256(salt + "XRSessionClient4").
constexpr uint32_t kXRSessionClient_OnFocus_Name = 1366682395;
// The 1995279635 value is based on sha256(salt + "VRDisplayClient1").
constexpr uint32_t kVRDisplayClient_OnActivate_Name = 1995279635;
// The 844998735 value is based on sha256(salt + "VRDisplayClient2").
constexpr uint32_t kVRDisplayClient_OnDeactivate_Name = 844998735;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_