// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1574573456 value is based on sha256(salt + "ProxyConfigClient1").
constexpr uint32_t kProxyConfigClient_OnProxyConfigUpdated_Name = 1574573456;
// The 2063193759 value is based on sha256(salt + "ProxyConfigClient2").
constexpr uint32_t kProxyConfigClient_FlushProxyConfig_Name = 2063193759;
// The 1769283096 value is based on sha256(salt + "ProxyConfigPollerClient1").
constexpr uint32_t kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name = 1769283096;
// The 210259370 value is based on sha256(salt + "ProxyErrorClient1").
constexpr uint32_t kProxyErrorClient_OnPACScriptError_Name = 210259370;
// The 417240688 value is based on sha256(salt + "ProxyErrorClient2").
constexpr uint32_t kProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Name = 417240688;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_