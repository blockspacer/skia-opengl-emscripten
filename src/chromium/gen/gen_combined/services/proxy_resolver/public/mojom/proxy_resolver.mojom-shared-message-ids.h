// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace proxy_resolver {
namespace mojom {

namespace internal {


// The 1927032711 value is based on sha256(salt + "HostResolverRequestClient1").
constexpr uint32_t kHostResolverRequestClient_ReportResult_Name = 1927032711;
// The 1176912614 value is based on sha256(salt + "ProxyResolver1").
constexpr uint32_t kProxyResolver_GetProxyForUrl_Name = 1176912614;
// The 128570522 value is based on sha256(salt + "ProxyResolverRequestClient1").
constexpr uint32_t kProxyResolverRequestClient_ReportResult_Name = 128570522;
// The 493350590 value is based on sha256(salt + "ProxyResolverRequestClient2").
constexpr uint32_t kProxyResolverRequestClient_Alert_Name = 493350590;
// The 278163571 value is based on sha256(salt + "ProxyResolverRequestClient3").
constexpr uint32_t kProxyResolverRequestClient_OnError_Name = 278163571;
// The 94600125 value is based on sha256(salt + "ProxyResolverRequestClient4").
constexpr uint32_t kProxyResolverRequestClient_ResolveDns_Name = 94600125;
// The 1773923640 value is based on sha256(salt + "ProxyResolverFactory1").
constexpr uint32_t kProxyResolverFactory_CreateResolver_Name = 1773923640;
// The 1376009105 value is based on sha256(salt + "ProxyResolverFactoryRequestClient1").
constexpr uint32_t kProxyResolverFactoryRequestClient_ReportResult_Name = 1376009105;
// The 700876493 value is based on sha256(salt + "ProxyResolverFactoryRequestClient2").
constexpr uint32_t kProxyResolverFactoryRequestClient_Alert_Name = 700876493;
// The 1885437821 value is based on sha256(salt + "ProxyResolverFactoryRequestClient3").
constexpr uint32_t kProxyResolverFactoryRequestClient_OnError_Name = 1885437821;
// The 392381379 value is based on sha256(salt + "ProxyResolverFactoryRequestClient4").
constexpr uint32_t kProxyResolverFactoryRequestClient_ResolveDns_Name = 392381379;

}  // namespace internal
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_MESSAGE_IDS_H_