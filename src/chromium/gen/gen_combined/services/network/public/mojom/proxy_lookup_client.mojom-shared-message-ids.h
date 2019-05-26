// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1360273327 value is based on sha256(salt + "ProxyLookupClient1").
constexpr uint32_t kProxyLookupClient_OnProxyLookupComplete_Name = 1360273327;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_