// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 217892390 value is based on sha256(salt + "ResolveHostHandle1").
constexpr uint32_t kResolveHostHandle_Cancel_Name = 217892390;
// The 662719290 value is based on sha256(salt + "ResolveHostClient1").
constexpr uint32_t kResolveHostClient_OnComplete_Name = 662719290;
// The 53854941 value is based on sha256(salt + "ResolveHostClient2").
constexpr uint32_t kResolveHostClient_OnTextResults_Name = 53854941;
// The 1406650475 value is based on sha256(salt + "ResolveHostClient3").
constexpr uint32_t kResolveHostClient_OnHostnameResults_Name = 1406650475;
// The 685662165 value is based on sha256(salt + "MdnsListenClient1").
constexpr uint32_t kMdnsListenClient_OnAddressResult_Name = 685662165;
// The 387164458 value is based on sha256(salt + "MdnsListenClient2").
constexpr uint32_t kMdnsListenClient_OnTextResult_Name = 387164458;
// The 780336468 value is based on sha256(salt + "MdnsListenClient3").
constexpr uint32_t kMdnsListenClient_OnHostnameResult_Name = 780336468;
// The 1942363120 value is based on sha256(salt + "MdnsListenClient4").
constexpr uint32_t kMdnsListenClient_OnUnhandledResult_Name = 1942363120;
// The 1778637427 value is based on sha256(salt + "HostResolver1").
constexpr uint32_t kHostResolver_ResolveHost_Name = 1778637427;
// The 1764103053 value is based on sha256(salt + "HostResolver2").
constexpr uint32_t kHostResolver_MdnsListen_Name = 1764103053;
// The 1655486551 value is based on sha256(salt + "DnsConfigChangeManagerClient1").
constexpr uint32_t kDnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Name = 1655486551;
// The 1438759503 value is based on sha256(salt + "DnsConfigChangeManager1").
constexpr uint32_t kDnsConfigChangeManager_RequestNotifications_Name = 1438759503;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_