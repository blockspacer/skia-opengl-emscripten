// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 2137771495 value is based on sha256(salt + "SSLPrivateKey1").
constexpr uint32_t kSSLPrivateKey_Sign_Name = 2137771495;
// The 1367267794 value is based on sha256(salt + "AuthChallengeResponder1").
constexpr uint32_t kAuthChallengeResponder_OnAuthCredentials_Name = 1367267794;
// The 1705426500 value is based on sha256(salt + "NetworkServiceClient1").
constexpr uint32_t kNetworkServiceClient_OnAuthRequired_Name = 1705426500;
// The 835945195 value is based on sha256(salt + "NetworkServiceClient2").
constexpr uint32_t kNetworkServiceClient_OnCertificateRequested_Name = 835945195;
// The 1891822514 value is based on sha256(salt + "NetworkServiceClient3").
constexpr uint32_t kNetworkServiceClient_OnSSLCertificateError_Name = 1891822514;
// The 1817442685 value is based on sha256(salt + "NetworkServiceClient4").
constexpr uint32_t kNetworkServiceClient_OnFileUploadRequested_Name = 1817442685;
// The 1660539750 value is based on sha256(salt + "NetworkServiceClient5").
constexpr uint32_t kNetworkServiceClient_OnCookieChange_Name = 1660539750;
// The 1146683997 value is based on sha256(salt + "NetworkServiceClient6").
constexpr uint32_t kNetworkServiceClient_OnCookiesRead_Name = 1146683997;
// The 630306365 value is based on sha256(salt + "NetworkServiceClient7").
constexpr uint32_t kNetworkServiceClient_OnLoadingStateUpdate_Name = 630306365;
// The 1889204462 value is based on sha256(salt + "NetworkServiceClient8").
constexpr uint32_t kNetworkServiceClient_OnClearSiteData_Name = 1889204462;
// The 2089106771 value is based on sha256(salt + "NetworkServiceClient9").
constexpr uint32_t kNetworkServiceClient_OnDataUseUpdate_Name = 2089106771;
// The 1674175 value is based on sha256(salt + "NetworkService1").
constexpr uint32_t kNetworkService_SetClient_Name = 1674175;
// The 1917916206 value is based on sha256(salt + "NetworkService2").
constexpr uint32_t kNetworkService_StartNetLog_Name = 1917916206;
// The 1449022714 value is based on sha256(salt + "NetworkService3").
constexpr uint32_t kNetworkService_SetSSLKeyLogFile_Name = 1449022714;
// The 84835222 value is based on sha256(salt + "NetworkService4").
constexpr uint32_t kNetworkService_CreateNetworkContext_Name = 84835222;
// The 2075585068 value is based on sha256(salt + "NetworkService5").
constexpr uint32_t kNetworkService_ConfigureStubHostResolver_Name = 2075585068;
// The 1256410445 value is based on sha256(salt + "NetworkService6").
constexpr uint32_t kNetworkService_DisableQuic_Name = 1256410445;
// The 554917739 value is based on sha256(salt + "NetworkService7").
constexpr uint32_t kNetworkService_SetUpHttpAuth_Name = 554917739;
// The 1414761310 value is based on sha256(salt + "NetworkService8").
constexpr uint32_t kNetworkService_ConfigureHttpAuthPrefs_Name = 1414761310;
// The 1916713378 value is based on sha256(salt + "NetworkService9").
constexpr uint32_t kNetworkService_SetRawHeadersAccess_Name = 1916713378;
// The 2000867837 value is based on sha256(salt + "NetworkService10").
constexpr uint32_t kNetworkService_GetNetworkChangeManager_Name = 2000867837;
// The 787610724 value is based on sha256(salt + "NetworkService11").
constexpr uint32_t kNetworkService_GetNetworkQualityEstimatorManager_Name = 787610724;
// The 533188507 value is based on sha256(salt + "NetworkService12").
constexpr uint32_t kNetworkService_GetDnsConfigChangeManager_Name = 533188507;
// The 2009279916 value is based on sha256(salt + "NetworkService13").
constexpr uint32_t kNetworkService_GetTotalNetworkUsages_Name = 2009279916;
// The 787558799 value is based on sha256(salt + "NetworkService14").
constexpr uint32_t kNetworkService_GetNetworkList_Name = 787558799;
// The 2102996689 value is based on sha256(salt + "NetworkService15").
constexpr uint32_t kNetworkService_UpdateSignedTreeHead_Name = 2102996689;
// The 1509595056 value is based on sha256(salt + "NetworkService16").
constexpr uint32_t kNetworkService_UpdateCRLSet_Name = 1509595056;
// The 1600629254 value is based on sha256(salt + "NetworkService17").
constexpr uint32_t kNetworkService_OnCertDBChanged_Name = 1600629254;
// The 1234779093 value is based on sha256(salt + "NetworkService18").
constexpr uint32_t kNetworkService_SetCryptConfig_Name = 1234779093;
// The 620234166 value is based on sha256(salt + "NetworkService19").
constexpr uint32_t kNetworkService_AddCorbExceptionForPlugin_Name = 620234166;
// The 636798922 value is based on sha256(salt + "NetworkService20").
constexpr uint32_t kNetworkService_RemoveCorbExceptionForPlugin_Name = 636798922;
// The 1451169018 value is based on sha256(salt + "NetworkService21").
constexpr uint32_t kNetworkService_OnMemoryPressure_Name = 1451169018;
// The 220637423 value is based on sha256(salt + "NetworkService22").
constexpr uint32_t kNetworkService_SetEnvironment_Name = 220637423;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_