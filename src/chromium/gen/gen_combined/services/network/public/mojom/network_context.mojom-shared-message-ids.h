// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 479938865 value is based on sha256(salt + "CustomProxyConfigClient1").
constexpr uint32_t kCustomProxyConfigClient_OnCustomProxyConfigUpdated_Name = 479938865;
// The 1039803762 value is based on sha256(salt + "CustomProxyConfigClient2").
constexpr uint32_t kCustomProxyConfigClient_MarkProxiesAsBad_Name = 1039803762;
// The 1048748804 value is based on sha256(salt + "CustomProxyConfigClient3").
constexpr uint32_t kCustomProxyConfigClient_ClearBadProxiesCache_Name = 1048748804;
// The 818497156 value is based on sha256(salt + "TrustedHeaderClient1").
constexpr uint32_t kTrustedHeaderClient_OnBeforeSendHeaders_Name = 818497156;
// The 401515092 value is based on sha256(salt + "TrustedHeaderClient2").
constexpr uint32_t kTrustedHeaderClient_OnHeadersReceived_Name = 401515092;
// The 1004663879 value is based on sha256(salt + "TrustedURLLoaderHeaderClient1").
constexpr uint32_t kTrustedURLLoaderHeaderClient_OnLoaderCreated_Name = 1004663879;
// The 75189472 value is based on sha256(salt + "NetworkContextClient1").
constexpr uint32_t kNetworkContextClient_OnCanSendReportingReports_Name = 75189472;
// The 353386976 value is based on sha256(salt + "NetworkContextClient2").
constexpr uint32_t kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name = 353386976;
// The 498813161 value is based on sha256(salt + "NetworkContext1").
constexpr uint32_t kNetworkContext_SetClient_Name = 498813161;
// The 1867427488 value is based on sha256(salt + "NetworkContext2").
constexpr uint32_t kNetworkContext_CreateURLLoaderFactory_Name = 1867427488;
// The 910591060 value is based on sha256(salt + "NetworkContext3").
constexpr uint32_t kNetworkContext_ResetURLLoaderFactories_Name = 910591060;
// The 332687568 value is based on sha256(salt + "NetworkContext4").
constexpr uint32_t kNetworkContext_GetCookieManager_Name = 332687568;
// The 1672395556 value is based on sha256(salt + "NetworkContext5").
constexpr uint32_t kNetworkContext_GetRestrictedCookieManager_Name = 1672395556;
// The 100566203 value is based on sha256(salt + "NetworkContext6").
constexpr uint32_t kNetworkContext_ClearNetworkingHistorySince_Name = 100566203;
// The 1012352103 value is based on sha256(salt + "NetworkContext7").
constexpr uint32_t kNetworkContext_ClearHttpCache_Name = 1012352103;
// The 1782969635 value is based on sha256(salt + "NetworkContext8").
constexpr uint32_t kNetworkContext_ComputeHttpCacheSize_Name = 1782969635;
// The 679278728 value is based on sha256(salt + "NetworkContext9").
constexpr uint32_t kNetworkContext_NotifyExternalCacheHit_Name = 679278728;
// The 1467523302 value is based on sha256(salt + "NetworkContext10").
constexpr uint32_t kNetworkContext_WriteCacheMetadata_Name = 1467523302;
// The 1204440847 value is based on sha256(salt + "NetworkContext11").
constexpr uint32_t kNetworkContext_ClearHostCache_Name = 1204440847;
// The 531759974 value is based on sha256(salt + "NetworkContext12").
constexpr uint32_t kNetworkContext_ClearHttpAuthCache_Name = 531759974;
// The 1579060086 value is based on sha256(salt + "NetworkContext13").
constexpr uint32_t kNetworkContext_ClearReportingCacheReports_Name = 1579060086;
// The 2003464325 value is based on sha256(salt + "NetworkContext14").
constexpr uint32_t kNetworkContext_ClearReportingCacheClients_Name = 2003464325;
// The 232657947 value is based on sha256(salt + "NetworkContext15").
constexpr uint32_t kNetworkContext_ClearNetworkErrorLogging_Name = 232657947;
// The 1179362874 value is based on sha256(salt + "NetworkContext16").
constexpr uint32_t kNetworkContext_ClearDomainReliability_Name = 1179362874;
// The 1204676662 value is based on sha256(salt + "NetworkContext17").
constexpr uint32_t kNetworkContext_GetDomainReliabilityJSON_Name = 1204676662;
// The 1541072491 value is based on sha256(salt + "NetworkContext18").
constexpr uint32_t kNetworkContext_QueueReport_Name = 1541072491;
// The 2043044717 value is based on sha256(salt + "NetworkContext19").
constexpr uint32_t kNetworkContext_QueueSignedExchangeReport_Name = 2043044717;
// The 803937706 value is based on sha256(salt + "NetworkContext20").
constexpr uint32_t kNetworkContext_CloseAllConnections_Name = 803937706;
// The 1007862467 value is based on sha256(salt + "NetworkContext21").
constexpr uint32_t kNetworkContext_CloseIdleConnections_Name = 1007862467;
// The 337814606 value is based on sha256(salt + "NetworkContext22").
constexpr uint32_t kNetworkContext_SetNetworkConditions_Name = 337814606;
// The 1324657899 value is based on sha256(salt + "NetworkContext23").
constexpr uint32_t kNetworkContext_SetAcceptLanguage_Name = 1324657899;
// The 1173259248 value is based on sha256(salt + "NetworkContext24").
constexpr uint32_t kNetworkContext_SetEnableReferrers_Name = 1173259248;
// The 1346925527 value is based on sha256(salt + "NetworkContext25").
constexpr uint32_t kNetworkContext_SetCTPolicy_Name = 1346925527;
// The 770320964 value is based on sha256(salt + "NetworkContext26").
constexpr uint32_t kNetworkContext_AddExpectCT_Name = 770320964;
// The 1261157973 value is based on sha256(salt + "NetworkContext27").
constexpr uint32_t kNetworkContext_SetExpectCTTestReport_Name = 1261157973;
// The 446004181 value is based on sha256(salt + "NetworkContext28").
constexpr uint32_t kNetworkContext_GetExpectCTState_Name = 446004181;
// The 467484129 value is based on sha256(salt + "NetworkContext29").
constexpr uint32_t kNetworkContext_CreateUDPSocket_Name = 467484129;
// The 584821615 value is based on sha256(salt + "NetworkContext30").
constexpr uint32_t kNetworkContext_CreateTCPServerSocket_Name = 584821615;
// The 824223527 value is based on sha256(salt + "NetworkContext31").
constexpr uint32_t kNetworkContext_CreateTCPConnectedSocket_Name = 824223527;
// The 469685883 value is based on sha256(salt + "NetworkContext32").
constexpr uint32_t kNetworkContext_CreateTCPBoundSocket_Name = 469685883;
// The 1684038555 value is based on sha256(salt + "NetworkContext33").
constexpr uint32_t kNetworkContext_CreateProxyResolvingSocketFactory_Name = 1684038555;
// The 1932847169 value is based on sha256(salt + "NetworkContext34").
constexpr uint32_t kNetworkContext_LookUpProxyForURL_Name = 1932847169;
// The 1810845616 value is based on sha256(salt + "NetworkContext35").
constexpr uint32_t kNetworkContext_ForceReloadProxyConfig_Name = 1810845616;
// The 1690593236 value is based on sha256(salt + "NetworkContext36").
constexpr uint32_t kNetworkContext_ClearBadProxiesCache_Name = 1690593236;
// The 1594521301 value is based on sha256(salt + "NetworkContext37").
constexpr uint32_t kNetworkContext_CreateWebSocket_Name = 1594521301;
// The 338037154 value is based on sha256(salt + "NetworkContext38").
constexpr uint32_t kNetworkContext_CreateNetLogExporter_Name = 338037154;
// The 448339672 value is based on sha256(salt + "NetworkContext39").
constexpr uint32_t kNetworkContext_PreconnectSockets_Name = 448339672;
// The 1629592515 value is based on sha256(salt + "NetworkContext40").
constexpr uint32_t kNetworkContext_CreateP2PSocketManager_Name = 1629592515;
// The 942921071 value is based on sha256(salt + "NetworkContext41").
constexpr uint32_t kNetworkContext_CreateMdnsResponder_Name = 942921071;
// The 845359521 value is based on sha256(salt + "NetworkContext42").
constexpr uint32_t kNetworkContext_ResolveHost_Name = 845359521;
// The 1432520507 value is based on sha256(salt + "NetworkContext43").
constexpr uint32_t kNetworkContext_CreateHostResolver_Name = 1432520507;
// The 1794626557 value is based on sha256(salt + "NetworkContext44").
constexpr uint32_t kNetworkContext_VerifyCertForSignedExchange_Name = 1794626557;
// The 753381558 value is based on sha256(salt + "NetworkContext45").
constexpr uint32_t kNetworkContext_AddHSTS_Name = 753381558;
// The 1500205648 value is based on sha256(salt + "NetworkContext46").
constexpr uint32_t kNetworkContext_IsHSTSActiveForHost_Name = 1500205648;
// The 1771198657 value is based on sha256(salt + "NetworkContext47").
constexpr uint32_t kNetworkContext_GetHSTSState_Name = 1771198657;
// The 1729506213 value is based on sha256(salt + "NetworkContext48").
constexpr uint32_t kNetworkContext_SetCorsOriginAccessListsForOrigin_Name = 1729506213;
// The 2049302450 value is based on sha256(salt + "NetworkContext49").
constexpr uint32_t kNetworkContext_DeleteDynamicDataForHost_Name = 2049302450;
// The 1227205699 value is based on sha256(salt + "NetworkContext50").
constexpr uint32_t kNetworkContext_SaveHttpAuthCache_Name = 1227205699;
// The 543017110 value is based on sha256(salt + "NetworkContext51").
constexpr uint32_t kNetworkContext_LoadHttpAuthCache_Name = 543017110;
// The 1296456104 value is based on sha256(salt + "NetworkContext52").
constexpr uint32_t kNetworkContext_LookupBasicAuthCredentials_Name = 1296456104;
// The 220822488 value is based on sha256(salt + "NetworkContext53").
constexpr uint32_t kNetworkContext_EnableStaticKeyPinningForTesting_Name = 220822488;
// The 470915623 value is based on sha256(salt + "NetworkContext54").
constexpr uint32_t kNetworkContext_SetFailingHttpTransactionForTesting_Name = 470915623;
// The 1995674397 value is based on sha256(salt + "NetworkContext55").
constexpr uint32_t kNetworkContext_VerifyCertificateForTesting_Name = 1995674397;
// The 2065223153 value is based on sha256(salt + "NetworkContext56").
constexpr uint32_t kNetworkContext_AddDomainReliabilityContextForTesting_Name = 2065223153;
// The 684999313 value is based on sha256(salt + "NetworkContext57").
constexpr uint32_t kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name = 684999313;
// The 1277275310 value is based on sha256(salt + "NetworkContext58").
constexpr uint32_t kNetworkContext_GetOriginPolicyManager_Name = 1277275310;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_