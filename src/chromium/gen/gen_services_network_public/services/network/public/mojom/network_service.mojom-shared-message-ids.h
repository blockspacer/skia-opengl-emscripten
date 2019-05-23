// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 2091562746 value is based on sha256(salt + "SSLPrivateKey1").
constexpr uint32_t kSSLPrivateKey_Sign_Name = 2091562746;
// The 803002777 value is based on sha256(salt + "AuthChallengeResponder1").
constexpr uint32_t kAuthChallengeResponder_OnAuthCredentials_Name = 803002777;
// The 2134778091 value is based on sha256(salt + "NetworkServiceClient1").
constexpr uint32_t kNetworkServiceClient_OnAuthRequired_Name = 2134778091;
// The 308215567 value is based on sha256(salt + "NetworkServiceClient2").
constexpr uint32_t kNetworkServiceClient_OnCertificateRequested_Name = 308215567;
// The 192502943 value is based on sha256(salt + "NetworkServiceClient3").
constexpr uint32_t kNetworkServiceClient_OnSSLCertificateError_Name = 192502943;
// The 786747720 value is based on sha256(salt + "NetworkServiceClient4").
constexpr uint32_t kNetworkServiceClient_OnFileUploadRequested_Name = 786747720;
// The 1358621724 value is based on sha256(salt + "NetworkServiceClient5").
constexpr uint32_t kNetworkServiceClient_OnCookieChange_Name = 1358621724;
// The 768965358 value is based on sha256(salt + "NetworkServiceClient6").
constexpr uint32_t kNetworkServiceClient_OnCookiesRead_Name = 768965358;
// The 388470021 value is based on sha256(salt + "NetworkServiceClient7").
constexpr uint32_t kNetworkServiceClient_OnLoadingStateUpdate_Name = 388470021;
// The 1796356874 value is based on sha256(salt + "NetworkServiceClient8").
constexpr uint32_t kNetworkServiceClient_OnClearSiteData_Name = 1796356874;
// The 1892240197 value is based on sha256(salt + "NetworkServiceClient9").
constexpr uint32_t kNetworkServiceClient_OnDataUseUpdate_Name = 1892240197;
// The 706529161 value is based on sha256(salt + "NetworkService1").
constexpr uint32_t kNetworkService_SetClient_Name = 706529161;
// The 2063969046 value is based on sha256(salt + "NetworkService2").
constexpr uint32_t kNetworkService_StartNetLog_Name = 2063969046;
// The 706739164 value is based on sha256(salt + "NetworkService3").
constexpr uint32_t kNetworkService_SetSSLKeyLogFile_Name = 706739164;
// The 113219978 value is based on sha256(salt + "NetworkService4").
constexpr uint32_t kNetworkService_CreateNetworkContext_Name = 113219978;
// The 1888549968 value is based on sha256(salt + "NetworkService5").
constexpr uint32_t kNetworkService_ConfigureStubHostResolver_Name = 1888549968;
// The 31353730 value is based on sha256(salt + "NetworkService6").
constexpr uint32_t kNetworkService_DisableQuic_Name = 31353730;
// The 1283180318 value is based on sha256(salt + "NetworkService7").
constexpr uint32_t kNetworkService_SetUpHttpAuth_Name = 1283180318;
// The 1567160066 value is based on sha256(salt + "NetworkService8").
constexpr uint32_t kNetworkService_ConfigureHttpAuthPrefs_Name = 1567160066;
// The 283970788 value is based on sha256(salt + "NetworkService9").
constexpr uint32_t kNetworkService_SetRawHeadersAccess_Name = 283970788;
// The 1451416364 value is based on sha256(salt + "NetworkService10").
constexpr uint32_t kNetworkService_GetNetworkChangeManager_Name = 1451416364;
// The 1958043398 value is based on sha256(salt + "NetworkService11").
constexpr uint32_t kNetworkService_GetNetworkQualityEstimatorManager_Name = 1958043398;
// The 1955833377 value is based on sha256(salt + "NetworkService12").
constexpr uint32_t kNetworkService_GetDnsConfigChangeManager_Name = 1955833377;
// The 1045129347 value is based on sha256(salt + "NetworkService13").
constexpr uint32_t kNetworkService_GetTotalNetworkUsages_Name = 1045129347;
// The 1688932306 value is based on sha256(salt + "NetworkService14").
constexpr uint32_t kNetworkService_GetNetworkList_Name = 1688932306;
// The 1001134187 value is based on sha256(salt + "NetworkService15").
constexpr uint32_t kNetworkService_UpdateSignedTreeHead_Name = 1001134187;
// The 1542296553 value is based on sha256(salt + "NetworkService16").
constexpr uint32_t kNetworkService_UpdateCRLSet_Name = 1542296553;
// The 1435485744 value is based on sha256(salt + "NetworkService17").
constexpr uint32_t kNetworkService_OnCertDBChanged_Name = 1435485744;
// The 173842737 value is based on sha256(salt + "NetworkService18").
constexpr uint32_t kNetworkService_SetCryptConfig_Name = 173842737;
// The 1752526079 value is based on sha256(salt + "NetworkService19").
constexpr uint32_t kNetworkService_AddCorbExceptionForPlugin_Name = 1752526079;
// The 1520027722 value is based on sha256(salt + "NetworkService20").
constexpr uint32_t kNetworkService_RemoveCorbExceptionForPlugin_Name = 1520027722;
// The 1501211031 value is based on sha256(salt + "NetworkService21").
constexpr uint32_t kNetworkService_OnMemoryPressure_Name = 1501211031;
// The 337115134 value is based on sha256(salt + "NetworkService22").
constexpr uint32_t kNetworkService_SetEnvironment_Name = 337115134;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_