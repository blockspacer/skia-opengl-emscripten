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


#include "services/network/public/mojom/host_resolver.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/address_list.mojom-blink.h"
#include "services/network/public/mojom/ip_address.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/url_loader.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void ResolveHostHandleInterceptorForTesting::Cancel(int32_t result) {
  GetForwardingInterface()->Cancel(std::move(result));
}
ResolveHostHandleAsyncWaiter::ResolveHostHandleAsyncWaiter(
    ResolveHostHandle* proxy) : proxy_(proxy) {}

ResolveHostHandleAsyncWaiter::~ResolveHostHandleAsyncWaiter() = default;




void ResolveHostClientInterceptorForTesting::OnComplete(int32_t result, ::network::mojom::blink::AddressListPtr resolved_addresses) {
  GetForwardingInterface()->OnComplete(std::move(result), std::move(resolved_addresses));
}
void ResolveHostClientInterceptorForTesting::OnTextResults(const WTF::Vector<WTF::String>& text_results) {
  GetForwardingInterface()->OnTextResults(std::move(text_results));
}
void ResolveHostClientInterceptorForTesting::OnHostnameResults(WTF::Vector<::network::mojom::blink::HostPortPairPtr> hosts) {
  GetForwardingInterface()->OnHostnameResults(std::move(hosts));
}
ResolveHostClientAsyncWaiter::ResolveHostClientAsyncWaiter(
    ResolveHostClient* proxy) : proxy_(proxy) {}

ResolveHostClientAsyncWaiter::~ResolveHostClientAsyncWaiter() = default;




void MdnsListenClientInterceptorForTesting::OnAddressResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::IPEndPointPtr endpoint) {
  GetForwardingInterface()->OnAddressResult(std::move(update_type), std::move(query_type), std::move(endpoint));
}
void MdnsListenClientInterceptorForTesting::OnTextResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, const WTF::Vector<WTF::String>& text_records) {
  GetForwardingInterface()->OnTextResult(std::move(update_type), std::move(query_type), std::move(text_records));
}
void MdnsListenClientInterceptorForTesting::OnHostnameResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::HostPortPairPtr host) {
  GetForwardingInterface()->OnHostnameResult(std::move(update_type), std::move(query_type), std::move(host));
}
void MdnsListenClientInterceptorForTesting::OnUnhandledResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type) {
  GetForwardingInterface()->OnUnhandledResult(std::move(update_type), std::move(query_type));
}
MdnsListenClientAsyncWaiter::MdnsListenClientAsyncWaiter(
    MdnsListenClient* proxy) : proxy_(proxy) {}

MdnsListenClientAsyncWaiter::~MdnsListenClientAsyncWaiter() = default;




void HostResolverInterceptorForTesting::ResolveHost(::network::mojom::blink::HostPortPairPtr host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) {
  GetForwardingInterface()->ResolveHost(std::move(host), std::move(optional_parameters), std::move(response_client));
}
void HostResolverInterceptorForTesting::MdnsListen(::network::mojom::blink::HostPortPairPtr host, DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) {
  GetForwardingInterface()->MdnsListen(std::move(host), std::move(query_type), std::move(response_client), std::move(callback));
}
HostResolverAsyncWaiter::HostResolverAsyncWaiter(
    HostResolver* proxy) : proxy_(proxy) {}

HostResolverAsyncWaiter::~HostResolverAsyncWaiter() = default;

void HostResolverAsyncWaiter::MdnsListen(
    ::network::mojom::blink::HostPortPairPtr host, DnsQueryType query_type, MdnsListenClientPtr response_client, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->MdnsListen(std::move(host),std::move(query_type),std::move(response_client),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void DnsConfigChangeManagerClientInterceptorForTesting::OnSystemDnsConfigChanged() {
  GetForwardingInterface()->OnSystemDnsConfigChanged();
}
DnsConfigChangeManagerClientAsyncWaiter::DnsConfigChangeManagerClientAsyncWaiter(
    DnsConfigChangeManagerClient* proxy) : proxy_(proxy) {}

DnsConfigChangeManagerClientAsyncWaiter::~DnsConfigChangeManagerClientAsyncWaiter() = default;




void DnsConfigChangeManagerInterceptorForTesting::RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) {
  GetForwardingInterface()->RequestNotifications(std::move(client_ptr));
}
DnsConfigChangeManagerAsyncWaiter::DnsConfigChangeManagerAsyncWaiter(
    DnsConfigChangeManager* proxy) : proxy_(proxy) {}

DnsConfigChangeManagerAsyncWaiter::~DnsConfigChangeManagerAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif