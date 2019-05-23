// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/proxy_lookup_client.mojom.h"


namespace network {
namespace mojom {


class  ProxyLookupClientInterceptorForTesting : public ProxyLookupClient {
  virtual ProxyLookupClient* GetForwardingInterface() = 0;
  void OnProxyLookupComplete(int32_t net_error, const base::Optional<net::ProxyInfo>& proxy_info) override;
};
class  ProxyLookupClientAsyncWaiter {
 public:
  explicit ProxyLookupClientAsyncWaiter(ProxyLookupClient* proxy);
  ~ProxyLookupClientAsyncWaiter();

 private:
  ProxyLookupClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyLookupClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_TEST_UTILS_H_