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


#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/ip_address.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace proxy_resolver {
namespace mojom {
namespace blink {


void HostResolverRequestClientInterceptorForTesting::ReportResult(int32_t error, WTF::Vector<::network::mojom::blink::IPAddressPtr> result) {
  GetForwardingInterface()->ReportResult(std::move(error), std::move(result));
}
HostResolverRequestClientAsyncWaiter::HostResolverRequestClientAsyncWaiter(
    HostResolverRequestClient* proxy) : proxy_(proxy) {}

HostResolverRequestClientAsyncWaiter::~HostResolverRequestClientAsyncWaiter() = default;




void ProxyResolverInterceptorForTesting::GetProxyForUrl(const ::blink::KURL& url, ProxyResolverRequestClientPtr client) {
  GetForwardingInterface()->GetProxyForUrl(std::move(url), std::move(client));
}
ProxyResolverAsyncWaiter::ProxyResolverAsyncWaiter(
    ProxyResolver* proxy) : proxy_(proxy) {}

ProxyResolverAsyncWaiter::~ProxyResolverAsyncWaiter() = default;




void ProxyResolverRequestClientInterceptorForTesting::ReportResult(int32_t error, ProxyInfoPtr proxy_info) {
  GetForwardingInterface()->ReportResult(std::move(error), std::move(proxy_info));
}
void ProxyResolverRequestClientInterceptorForTesting::Alert(const WTF::String& error) {
  GetForwardingInterface()->Alert(std::move(error));
}
void ProxyResolverRequestClientInterceptorForTesting::OnError(int32_t line_number, const WTF::String& error) {
  GetForwardingInterface()->OnError(std::move(line_number), std::move(error));
}
void ProxyResolverRequestClientInterceptorForTesting::ResolveDns(const WTF::String& host, HostResolveOperation operation, HostResolverRequestClientPtr client) {
  GetForwardingInterface()->ResolveDns(std::move(host), std::move(operation), std::move(client));
}
ProxyResolverRequestClientAsyncWaiter::ProxyResolverRequestClientAsyncWaiter(
    ProxyResolverRequestClient* proxy) : proxy_(proxy) {}

ProxyResolverRequestClientAsyncWaiter::~ProxyResolverRequestClientAsyncWaiter() = default;




void ProxyResolverFactoryInterceptorForTesting::CreateResolver(const WTF::String& pac_script, ProxyResolverRequest resolver, ProxyResolverFactoryRequestClientPtr client) {
  GetForwardingInterface()->CreateResolver(std::move(pac_script), std::move(resolver), std::move(client));
}
ProxyResolverFactoryAsyncWaiter::ProxyResolverFactoryAsyncWaiter(
    ProxyResolverFactory* proxy) : proxy_(proxy) {}

ProxyResolverFactoryAsyncWaiter::~ProxyResolverFactoryAsyncWaiter() = default;




void ProxyResolverFactoryRequestClientInterceptorForTesting::ReportResult(int32_t error) {
  GetForwardingInterface()->ReportResult(std::move(error));
}
void ProxyResolverFactoryRequestClientInterceptorForTesting::Alert(const WTF::String& error) {
  GetForwardingInterface()->Alert(std::move(error));
}
void ProxyResolverFactoryRequestClientInterceptorForTesting::OnError(int32_t line_number, const WTF::String& error) {
  GetForwardingInterface()->OnError(std::move(line_number), std::move(error));
}
void ProxyResolverFactoryRequestClientInterceptorForTesting::ResolveDns(const WTF::String& host, HostResolveOperation operation, HostResolverRequestClientPtr client) {
  GetForwardingInterface()->ResolveDns(std::move(host), std::move(operation), std::move(client));
}
ProxyResolverFactoryRequestClientAsyncWaiter::ProxyResolverFactoryRequestClientAsyncWaiter(
    ProxyResolverFactoryRequestClient* proxy) : proxy_(proxy) {}

ProxyResolverFactoryRequestClientAsyncWaiter::~ProxyResolverFactoryRequestClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace proxy_resolver

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif