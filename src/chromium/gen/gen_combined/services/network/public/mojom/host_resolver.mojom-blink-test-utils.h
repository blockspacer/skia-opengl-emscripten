// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/host_resolver.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ResolveHostHandleInterceptorForTesting : public ResolveHostHandle {
  virtual ResolveHostHandle* GetForwardingInterface() = 0;
  void Cancel(int32_t result) override;
};
class BLINK_PLATFORM_EXPORT ResolveHostHandleAsyncWaiter {
 public:
  explicit ResolveHostHandleAsyncWaiter(ResolveHostHandle* proxy);
  ~ResolveHostHandleAsyncWaiter();

 private:
  ResolveHostHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResolveHostHandleAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ResolveHostClientInterceptorForTesting : public ResolveHostClient {
  virtual ResolveHostClient* GetForwardingInterface() = 0;
  void OnComplete(int32_t result, ::network::mojom::blink::AddressListPtr resolved_addresses) override;
  void OnTextResults(const WTF::Vector<WTF::String>& text_results) override;
  void OnHostnameResults(WTF::Vector<::network::mojom::blink::HostPortPairPtr> hosts) override;
};
class BLINK_PLATFORM_EXPORT ResolveHostClientAsyncWaiter {
 public:
  explicit ResolveHostClientAsyncWaiter(ResolveHostClient* proxy);
  ~ResolveHostClientAsyncWaiter();

 private:
  ResolveHostClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ResolveHostClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT MdnsListenClientInterceptorForTesting : public MdnsListenClient {
  virtual MdnsListenClient* GetForwardingInterface() = 0;
  void OnAddressResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::IPEndPointPtr endpoint) override;
  void OnTextResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, const WTF::Vector<WTF::String>& text_records) override;
  void OnHostnameResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::HostPortPairPtr host) override;
  void OnUnhandledResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type) override;
};
class BLINK_PLATFORM_EXPORT MdnsListenClientAsyncWaiter {
 public:
  explicit MdnsListenClientAsyncWaiter(MdnsListenClient* proxy);
  ~MdnsListenClientAsyncWaiter();

 private:
  MdnsListenClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MdnsListenClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT HostResolverInterceptorForTesting : public HostResolver {
  virtual HostResolver* GetForwardingInterface() = 0;
  void ResolveHost(::network::mojom::blink::HostPortPairPtr host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) override;
  void MdnsListen(::network::mojom::blink::HostPortPairPtr host, DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) override;
};
class BLINK_PLATFORM_EXPORT HostResolverAsyncWaiter {
 public:
  explicit HostResolverAsyncWaiter(HostResolver* proxy);
  ~HostResolverAsyncWaiter();
  void MdnsListen(
      ::network::mojom::blink::HostPortPairPtr host, DnsQueryType query_type, MdnsListenClientPtr response_client, int32_t* out_result);

 private:
  HostResolver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HostResolverAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerClientInterceptorForTesting : public DnsConfigChangeManagerClient {
  virtual DnsConfigChangeManagerClient* GetForwardingInterface() = 0;
  void OnSystemDnsConfigChanged() override;
};
class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerClientAsyncWaiter {
 public:
  explicit DnsConfigChangeManagerClientAsyncWaiter(DnsConfigChangeManagerClient* proxy);
  ~DnsConfigChangeManagerClientAsyncWaiter();

 private:
  DnsConfigChangeManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DnsConfigChangeManagerClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerInterceptorForTesting : public DnsConfigChangeManager {
  virtual DnsConfigChangeManager* GetForwardingInterface() = 0;
  void RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) override;
};
class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerAsyncWaiter {
 public:
  explicit DnsConfigChangeManagerAsyncWaiter(DnsConfigChangeManager* proxy);
  ~DnsConfigChangeManagerAsyncWaiter();

 private:
  DnsConfigChangeManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DnsConfigChangeManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_TEST_UTILS_H_