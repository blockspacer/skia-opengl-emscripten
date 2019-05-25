// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1105166250 value is based on sha256(salt + "ProxyResolvingSocket1").
constexpr uint32_t kProxyResolvingSocket_UpgradeToTLS_Name = 1105166250;
// The 36894035 value is based on sha256(salt + "ProxyResolvingSocketFactory1").
constexpr uint32_t kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name = 36894035;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_