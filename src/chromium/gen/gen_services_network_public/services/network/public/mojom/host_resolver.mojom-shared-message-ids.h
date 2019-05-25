// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 854266526 value is based on sha256(salt + "ResolveHostHandle1").
constexpr uint32_t kResolveHostHandle_Cancel_Name = 854266526;
// The 1129526582 value is based on sha256(salt + "ResolveHostClient1").
constexpr uint32_t kResolveHostClient_OnComplete_Name = 1129526582;
// The 655592311 value is based on sha256(salt + "ResolveHostClient2").
constexpr uint32_t kResolveHostClient_OnTextResults_Name = 655592311;
// The 1709249587 value is based on sha256(salt + "ResolveHostClient3").
constexpr uint32_t kResolveHostClient_OnHostnameResults_Name = 1709249587;
// The 118202058 value is based on sha256(salt + "MdnsListenClient1").
constexpr uint32_t kMdnsListenClient_OnAddressResult_Name = 118202058;
// The 1812499217 value is based on sha256(salt + "MdnsListenClient2").
constexpr uint32_t kMdnsListenClient_OnTextResult_Name = 1812499217;
// The 2030249179 value is based on sha256(salt + "MdnsListenClient3").
constexpr uint32_t kMdnsListenClient_OnHostnameResult_Name = 2030249179;
// The 1628085106 value is based on sha256(salt + "MdnsListenClient4").
constexpr uint32_t kMdnsListenClient_OnUnhandledResult_Name = 1628085106;
// The 89991413 value is based on sha256(salt + "HostResolver1").
constexpr uint32_t kHostResolver_ResolveHost_Name = 89991413;
// The 2071053024 value is based on sha256(salt + "HostResolver2").
constexpr uint32_t kHostResolver_MdnsListen_Name = 2071053024;
// The 1626874524 value is based on sha256(salt + "DnsConfigChangeManagerClient1").
constexpr uint32_t kDnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Name = 1626874524;
// The 644531162 value is based on sha256(salt + "DnsConfigChangeManager1").
constexpr uint32_t kDnsConfigChangeManager_RequestNotifications_Name = 644531162;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_