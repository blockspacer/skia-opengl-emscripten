// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 695148997 value is based on sha256(salt + "CustomProxyConfigClient1").
constexpr uint32_t kCustomProxyConfigClient_OnCustomProxyConfigUpdated_Name = 695148997;
// The 1740823646 value is based on sha256(salt + "CustomProxyConfigClient2").
constexpr uint32_t kCustomProxyConfigClient_MarkProxiesAsBad_Name = 1740823646;
// The 1583711582 value is based on sha256(salt + "CustomProxyConfigClient3").
constexpr uint32_t kCustomProxyConfigClient_ClearBadProxiesCache_Name = 1583711582;
// The 1719720251 value is based on sha256(salt + "TrustedHeaderClient1").
constexpr uint32_t kTrustedHeaderClient_OnBeforeSendHeaders_Name = 1719720251;
// The 2064127330 value is based on sha256(salt + "TrustedHeaderClient2").
constexpr uint32_t kTrustedHeaderClient_OnHeadersReceived_Name = 2064127330;
// The 624280709 value is based on sha256(salt + "TrustedURLLoaderHeaderClient1").
constexpr uint32_t kTrustedURLLoaderHeaderClient_OnLoaderCreated_Name = 624280709;
// The 1930818096 value is based on sha256(salt + "NetworkContextClient1").
constexpr uint32_t kNetworkContextClient_OnCanSendReportingReports_Name = 1930818096;
// The 1153126240 value is based on sha256(salt + "NetworkContextClient2").
constexpr uint32_t kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name = 1153126240;
// The 475064419 value is based on sha256(salt + "NetworkContext1").
constexpr uint32_t kNetworkContext_SetClient_Name = 475064419;
// The 838045671 value is based on sha256(salt + "NetworkContext2").
constexpr uint32_t kNetworkContext_CreateURLLoaderFactory_Name = 838045671;
// The 1276718019 value is based on sha256(salt + "NetworkContext3").
constexpr uint32_t kNetworkContext_ResetURLLoaderFactories_Name = 1276718019;
// The 1480004863 value is based on sha256(salt + "NetworkContext4").
constexpr uint32_t kNetworkContext_GetCookieManager_Name = 1480004863;
// The 1001792092 value is based on sha256(salt + "NetworkContext5").
constexpr uint32_t kNetworkContext_GetRestrictedCookieManager_Name = 1001792092;
// The 1556460619 value is based on sha256(salt + "NetworkContext6").
constexpr uint32_t kNetworkContext_ClearNetworkingHistorySince_Name = 1556460619;
// The 390539801 value is based on sha256(salt + "NetworkContext7").
constexpr uint32_t kNetworkContext_ClearHttpCache_Name = 390539801;
// The 845714122 value is based on sha256(salt + "NetworkContext8").
constexpr uint32_t kNetworkContext_ComputeHttpCacheSize_Name = 845714122;
// The 2106950122 value is based on sha256(salt + "NetworkContext9").
constexpr uint32_t kNetworkContext_NotifyExternalCacheHit_Name = 2106950122;
// The 1595697018 value is based on sha256(salt + "NetworkContext10").
constexpr uint32_t kNetworkContext_WriteCacheMetadata_Name = 1595697018;
// The 576427898 value is based on sha256(salt + "NetworkContext11").
constexpr uint32_t kNetworkContext_ClearHostCache_Name = 576427898;
// The 926261576 value is based on sha256(salt + "NetworkContext12").
constexpr uint32_t kNetworkContext_ClearHttpAuthCache_Name = 926261576;
// The 79121636 value is based on sha256(salt + "NetworkContext13").
constexpr uint32_t kNetworkContext_ClearReportingCacheReports_Name = 79121636;
// The 1528846765 value is based on sha256(salt + "NetworkContext14").
constexpr uint32_t kNetworkContext_ClearReportingCacheClients_Name = 1528846765;
// The 741374910 value is based on sha256(salt + "NetworkContext15").
constexpr uint32_t kNetworkContext_ClearNetworkErrorLogging_Name = 741374910;
// The 1896336157 value is based on sha256(salt + "NetworkContext16").
constexpr uint32_t kNetworkContext_ClearDomainReliability_Name = 1896336157;
// The 1920009367 value is based on sha256(salt + "NetworkContext17").
constexpr uint32_t kNetworkContext_GetDomainReliabilityJSON_Name = 1920009367;
// The 361387321 value is based on sha256(salt + "NetworkContext18").
constexpr uint32_t kNetworkContext_QueueReport_Name = 361387321;
// The 1801283688 value is based on sha256(salt + "NetworkContext19").
constexpr uint32_t kNetworkContext_QueueSignedExchangeReport_Name = 1801283688;
// The 688565063 value is based on sha256(salt + "NetworkContext20").
constexpr uint32_t kNetworkContext_CloseAllConnections_Name = 688565063;
// The 1992575566 value is based on sha256(salt + "NetworkContext21").
constexpr uint32_t kNetworkContext_CloseIdleConnections_Name = 1992575566;
// The 1448312656 value is based on sha256(salt + "NetworkContext22").
constexpr uint32_t kNetworkContext_SetNetworkConditions_Name = 1448312656;
// The 1704056439 value is based on sha256(salt + "NetworkContext23").
constexpr uint32_t kNetworkContext_SetAcceptLanguage_Name = 1704056439;
// The 1110846905 value is based on sha256(salt + "NetworkContext24").
constexpr uint32_t kNetworkContext_SetEnableReferrers_Name = 1110846905;
// The 675527880 value is based on sha256(salt + "NetworkContext25").
constexpr uint32_t kNetworkContext_SetCTPolicy_Name = 675527880;
// The 530002162 value is based on sha256(salt + "NetworkContext26").
constexpr uint32_t kNetworkContext_AddExpectCT_Name = 530002162;
// The 1882047643 value is based on sha256(salt + "NetworkContext27").
constexpr uint32_t kNetworkContext_SetExpectCTTestReport_Name = 1882047643;
// The 401541743 value is based on sha256(salt + "NetworkContext28").
constexpr uint32_t kNetworkContext_GetExpectCTState_Name = 401541743;
// The 54613202 value is based on sha256(salt + "NetworkContext29").
constexpr uint32_t kNetworkContext_CreateUDPSocket_Name = 54613202;
// The 1796638874 value is based on sha256(salt + "NetworkContext30").
constexpr uint32_t kNetworkContext_CreateTCPServerSocket_Name = 1796638874;
// The 1848339227 value is based on sha256(salt + "NetworkContext31").
constexpr uint32_t kNetworkContext_CreateTCPConnectedSocket_Name = 1848339227;
// The 1858959526 value is based on sha256(salt + "NetworkContext32").
constexpr uint32_t kNetworkContext_CreateTCPBoundSocket_Name = 1858959526;
// The 703663142 value is based on sha256(salt + "NetworkContext33").
constexpr uint32_t kNetworkContext_CreateProxyResolvingSocketFactory_Name = 703663142;
// The 1690510577 value is based on sha256(salt + "NetworkContext34").
constexpr uint32_t kNetworkContext_LookUpProxyForURL_Name = 1690510577;
// The 1990305686 value is based on sha256(salt + "NetworkContext35").
constexpr uint32_t kNetworkContext_ForceReloadProxyConfig_Name = 1990305686;
// The 937519530 value is based on sha256(salt + "NetworkContext36").
constexpr uint32_t kNetworkContext_ClearBadProxiesCache_Name = 937519530;
// The 649297210 value is based on sha256(salt + "NetworkContext37").
constexpr uint32_t kNetworkContext_CreateWebSocket_Name = 649297210;
// The 919131450 value is based on sha256(salt + "NetworkContext38").
constexpr uint32_t kNetworkContext_CreateNetLogExporter_Name = 919131450;
// The 1248960624 value is based on sha256(salt + "NetworkContext39").
constexpr uint32_t kNetworkContext_PreconnectSockets_Name = 1248960624;
// The 256816022 value is based on sha256(salt + "NetworkContext40").
constexpr uint32_t kNetworkContext_CreateP2PSocketManager_Name = 256816022;
// The 876531537 value is based on sha256(salt + "NetworkContext41").
constexpr uint32_t kNetworkContext_CreateMdnsResponder_Name = 876531537;
// The 1183212608 value is based on sha256(salt + "NetworkContext42").
constexpr uint32_t kNetworkContext_ResolveHost_Name = 1183212608;
// The 785705299 value is based on sha256(salt + "NetworkContext43").
constexpr uint32_t kNetworkContext_CreateHostResolver_Name = 785705299;
// The 1841088073 value is based on sha256(salt + "NetworkContext44").
constexpr uint32_t kNetworkContext_VerifyCertForSignedExchange_Name = 1841088073;
// The 1064666699 value is based on sha256(salt + "NetworkContext45").
constexpr uint32_t kNetworkContext_AddHSTS_Name = 1064666699;
// The 2042845086 value is based on sha256(salt + "NetworkContext46").
constexpr uint32_t kNetworkContext_IsHSTSActiveForHost_Name = 2042845086;
// The 544463716 value is based on sha256(salt + "NetworkContext47").
constexpr uint32_t kNetworkContext_GetHSTSState_Name = 544463716;
// The 851912345 value is based on sha256(salt + "NetworkContext48").
constexpr uint32_t kNetworkContext_SetCorsOriginAccessListsForOrigin_Name = 851912345;
// The 191916403 value is based on sha256(salt + "NetworkContext49").
constexpr uint32_t kNetworkContext_DeleteDynamicDataForHost_Name = 191916403;
// The 1982955768 value is based on sha256(salt + "NetworkContext50").
constexpr uint32_t kNetworkContext_SaveHttpAuthCache_Name = 1982955768;
// The 562065894 value is based on sha256(salt + "NetworkContext51").
constexpr uint32_t kNetworkContext_LoadHttpAuthCache_Name = 562065894;
// The 1750106658 value is based on sha256(salt + "NetworkContext52").
constexpr uint32_t kNetworkContext_LookupBasicAuthCredentials_Name = 1750106658;
// The 232536178 value is based on sha256(salt + "NetworkContext53").
constexpr uint32_t kNetworkContext_EnableStaticKeyPinningForTesting_Name = 232536178;
// The 984303330 value is based on sha256(salt + "NetworkContext54").
constexpr uint32_t kNetworkContext_SetFailingHttpTransactionForTesting_Name = 984303330;
// The 120902576 value is based on sha256(salt + "NetworkContext55").
constexpr uint32_t kNetworkContext_VerifyCertificateForTesting_Name = 120902576;
// The 1546753634 value is based on sha256(salt + "NetworkContext56").
constexpr uint32_t kNetworkContext_AddDomainReliabilityContextForTesting_Name = 1546753634;
// The 1649059776 value is based on sha256(salt + "NetworkContext57").
constexpr uint32_t kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name = 1649059776;
// The 218575874 value is based on sha256(salt + "NetworkContext58").
constexpr uint32_t kNetworkContext_GetOriginPolicyManager_Name = 218575874;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_