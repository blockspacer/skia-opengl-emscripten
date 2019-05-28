// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace proxy_resolver {
namespace mojom {

namespace internal {


// The 206433190 value is based on sha256(salt + "HostResolverRequestClient1").
constexpr uint32_t kHostResolverRequestClient_ReportResult_Name = 206433190;
// The 142752572 value is based on sha256(salt + "ProxyResolver1").
constexpr uint32_t kProxyResolver_GetProxyForUrl_Name = 142752572;
// The 526704908 value is based on sha256(salt + "ProxyResolverRequestClient1").
constexpr uint32_t kProxyResolverRequestClient_ReportResult_Name = 526704908;
// The 184252021 value is based on sha256(salt + "ProxyResolverRequestClient2").
constexpr uint32_t kProxyResolverRequestClient_Alert_Name = 184252021;
// The 344334524 value is based on sha256(salt + "ProxyResolverRequestClient3").
constexpr uint32_t kProxyResolverRequestClient_OnError_Name = 344334524;
// The 1315077102 value is based on sha256(salt + "ProxyResolverRequestClient4").
constexpr uint32_t kProxyResolverRequestClient_ResolveDns_Name = 1315077102;
// The 1216449540 value is based on sha256(salt + "ProxyResolverFactory1").
constexpr uint32_t kProxyResolverFactory_CreateResolver_Name = 1216449540;
// The 703314032 value is based on sha256(salt + "ProxyResolverFactoryRequestClient1").
constexpr uint32_t kProxyResolverFactoryRequestClient_ReportResult_Name = 703314032;
// The 2088108240 value is based on sha256(salt + "ProxyResolverFactoryRequestClient2").
constexpr uint32_t kProxyResolverFactoryRequestClient_Alert_Name = 2088108240;
// The 1462885417 value is based on sha256(salt + "ProxyResolverFactoryRequestClient3").
constexpr uint32_t kProxyResolverFactoryRequestClient_OnError_Name = 1462885417;
// The 1452503178 value is based on sha256(salt + "ProxyResolverFactoryRequestClient4").
constexpr uint32_t kProxyResolverFactoryRequestClient_ResolveDns_Name = 1452503178;

}  // namespace internal
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_