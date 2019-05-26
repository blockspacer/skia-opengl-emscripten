// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/network/public/mojom/proxy_lookup_client.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "url/mojom/url.mojom.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_JUMBO_H_
#include "services/proxy_resolver/public/cpp/mojo_host_struct_traits.h"
#include "services/proxy_resolver/public/cpp/proxy_resolver_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void ProxyLookupClientInterceptorForTesting::OnProxyLookupComplete(int32_t net_error, const base::Optional<net::ProxyInfo>& proxy_info) {
  GetForwardingInterface()->OnProxyLookupComplete(std::move(net_error), std::move(proxy_info));
}
ProxyLookupClientAsyncWaiter::ProxyLookupClientAsyncWaiter(
    ProxyLookupClient* proxy) : proxy_(proxy) {}

ProxyLookupClientAsyncWaiter::~ProxyLookupClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif