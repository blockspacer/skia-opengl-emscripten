// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1689590988 value is based on sha256(salt + "ProxyConfigClient1").
constexpr uint32_t kProxyConfigClient_OnProxyConfigUpdated_Name = 1689590988;
// The 989442573 value is based on sha256(salt + "ProxyConfigClient2").
constexpr uint32_t kProxyConfigClient_FlushProxyConfig_Name = 989442573;
// The 2118360331 value is based on sha256(salt + "ProxyConfigPollerClient1").
constexpr uint32_t kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name = 2118360331;
// The 350651665 value is based on sha256(salt + "ProxyErrorClient1").
constexpr uint32_t kProxyErrorClient_OnPACScriptError_Name = 350651665;
// The 1411500430 value is based on sha256(salt + "ProxyErrorClient2").
constexpr uint32_t kProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Name = 1411500430;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_