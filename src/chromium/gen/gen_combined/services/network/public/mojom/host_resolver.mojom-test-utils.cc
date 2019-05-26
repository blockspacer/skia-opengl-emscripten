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


#include "services/network/public/mojom/host_resolver.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/network/public/mojom/address_list.mojom.h"
#include "services/network/public/mojom/ip_address.mojom.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/address_list_mojom_traits.h"
#include "services/network/public/cpp/host_resolver_mojom_traits.h"
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void ResolveHostHandleInterceptorForTesting::Cancel(int32_t result) {
  GetForwardingInterface()->Cancel(std::move(result));
}
ResolveHostHandleAsyncWaiter::ResolveHostHandleAsyncWaiter(
    ResolveHostHandle* proxy) : proxy_(proxy) {}

ResolveHostHandleAsyncWaiter::~ResolveHostHandleAsyncWaiter() = default;




void ResolveHostClientInterceptorForTesting::OnComplete(int32_t result, const base::Optional<net::AddressList>& resolved_addresses) {
  GetForwardingInterface()->OnComplete(std::move(result), std::move(resolved_addresses));
}
void ResolveHostClientInterceptorForTesting::OnTextResults(const std::vector<std::string>& text_results) {
  GetForwardingInterface()->OnTextResults(std::move(text_results));
}
void ResolveHostClientInterceptorForTesting::OnHostnameResults(const std::vector<net::HostPortPair>& hosts) {
  GetForwardingInterface()->OnHostnameResults(std::move(hosts));
}
ResolveHostClientAsyncWaiter::ResolveHostClientAsyncWaiter(
    ResolveHostClient* proxy) : proxy_(proxy) {}

ResolveHostClientAsyncWaiter::~ResolveHostClientAsyncWaiter() = default;




void MdnsListenClientInterceptorForTesting::OnAddressResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::IPEndPoint& endpoint) {
  GetForwardingInterface()->OnAddressResult(std::move(update_type), std::move(query_type), std::move(endpoint));
}
void MdnsListenClientInterceptorForTesting::OnTextResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const std::vector<std::string>& text_records) {
  GetForwardingInterface()->OnTextResult(std::move(update_type), std::move(query_type), std::move(text_records));
}
void MdnsListenClientInterceptorForTesting::OnHostnameResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::HostPortPair& host) {
  GetForwardingInterface()->OnHostnameResult(std::move(update_type), std::move(query_type), std::move(host));
}
void MdnsListenClientInterceptorForTesting::OnUnhandledResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type) {
  GetForwardingInterface()->OnUnhandledResult(std::move(update_type), std::move(query_type));
}
MdnsListenClientAsyncWaiter::MdnsListenClientAsyncWaiter(
    MdnsListenClient* proxy) : proxy_(proxy) {}

MdnsListenClientAsyncWaiter::~MdnsListenClientAsyncWaiter() = default;




void HostResolverInterceptorForTesting::ResolveHost(const net::HostPortPair& host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) {
  GetForwardingInterface()->ResolveHost(std::move(host), std::move(optional_parameters), std::move(response_client));
}
void HostResolverInterceptorForTesting::MdnsListen(const net::HostPortPair& host, net::DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) {
  GetForwardingInterface()->MdnsListen(std::move(host), std::move(query_type), std::move(response_client), std::move(callback));
}
HostResolverAsyncWaiter::HostResolverAsyncWaiter(
    HostResolver* proxy) : proxy_(proxy) {}

HostResolverAsyncWaiter::~HostResolverAsyncWaiter() = default;

void HostResolverAsyncWaiter::MdnsListen(
    const net::HostPortPair& host, net::DnsQueryType query_type, MdnsListenClientPtr response_client, int32_t* out_result) {
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






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif