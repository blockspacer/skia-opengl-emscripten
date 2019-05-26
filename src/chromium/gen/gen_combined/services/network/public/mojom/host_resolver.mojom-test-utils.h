// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/host_resolver.mojom.h"


namespace network {
namespace mojom {


class  ResolveHostHandleInterceptorForTesting : public ResolveHostHandle {
  virtual ResolveHostHandle* GetForwardingInterface() = 0;
  void Cancel(int32_t result) override;
};
class  ResolveHostHandleAsyncWaiter {
 public:
  explicit ResolveHostHandleAsyncWaiter(ResolveHostHandle* proxy);
  ~ResolveHostHandleAsyncWaiter();

 private:
  ResolveHostHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResolveHostHandleAsyncWaiter);
};


class  ResolveHostClientInterceptorForTesting : public ResolveHostClient {
  virtual ResolveHostClient* GetForwardingInterface() = 0;
  void OnComplete(int32_t result, const base::Optional<net::AddressList>& resolved_addresses) override;
  void OnTextResults(const std::vector<std::string>& text_results) override;
  void OnHostnameResults(const std::vector<net::HostPortPair>& hosts) override;
};
class  ResolveHostClientAsyncWaiter {
 public:
  explicit ResolveHostClientAsyncWaiter(ResolveHostClient* proxy);
  ~ResolveHostClientAsyncWaiter();

 private:
  ResolveHostClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResolveHostClientAsyncWaiter);
};


class  MdnsListenClientInterceptorForTesting : public MdnsListenClient {
  virtual MdnsListenClient* GetForwardingInterface() = 0;
  void OnAddressResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::IPEndPoint& endpoint) override;
  void OnTextResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const std::vector<std::string>& text_records) override;
  void OnHostnameResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type, const net::HostPortPair& host) override;
  void OnUnhandledResult(net::HostResolver::MdnsListener::Delegate::UpdateType update_type, net::DnsQueryType query_type) override;
};
class  MdnsListenClientAsyncWaiter {
 public:
  explicit MdnsListenClientAsyncWaiter(MdnsListenClient* proxy);
  ~MdnsListenClientAsyncWaiter();

 private:
  MdnsListenClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MdnsListenClientAsyncWaiter);
};


class  HostResolverInterceptorForTesting : public HostResolver {
  virtual HostResolver* GetForwardingInterface() = 0;
  void ResolveHost(const net::HostPortPair& host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) override;
  void MdnsListen(const net::HostPortPair& host, net::DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) override;
};
class  HostResolverAsyncWaiter {
 public:
  explicit HostResolverAsyncWaiter(HostResolver* proxy);
  ~HostResolverAsyncWaiter();
  void MdnsListen(
      const net::HostPortPair& host, net::DnsQueryType query_type, MdnsListenClientPtr response_client, int32_t* out_result);

 private:
  HostResolver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HostResolverAsyncWaiter);
};


class  DnsConfigChangeManagerClientInterceptorForTesting : public DnsConfigChangeManagerClient {
  virtual DnsConfigChangeManagerClient* GetForwardingInterface() = 0;
  void OnSystemDnsConfigChanged() override;
};
class  DnsConfigChangeManagerClientAsyncWaiter {
 public:
  explicit DnsConfigChangeManagerClientAsyncWaiter(DnsConfigChangeManagerClient* proxy);
  ~DnsConfigChangeManagerClientAsyncWaiter();

 private:
  DnsConfigChangeManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DnsConfigChangeManagerClientAsyncWaiter);
};


class  DnsConfigChangeManagerInterceptorForTesting : public DnsConfigChangeManager {
  virtual DnsConfigChangeManager* GetForwardingInterface() = 0;
  void RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) override;
};
class  DnsConfigChangeManagerAsyncWaiter {
 public:
  explicit DnsConfigChangeManagerAsyncWaiter(DnsConfigChangeManager* proxy);
  ~DnsConfigChangeManagerAsyncWaiter();

 private:
  DnsConfigChangeManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DnsConfigChangeManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_TEST_UTILS_H_