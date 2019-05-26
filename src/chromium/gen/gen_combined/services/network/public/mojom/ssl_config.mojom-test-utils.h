// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/ssl_config.mojom.h"


namespace network {
namespace mojom {


class  SSLConfigClientInterceptorForTesting : public SSLConfigClient {
  virtual SSLConfigClient* GetForwardingInterface() = 0;
  void OnSSLConfigUpdated(SSLConfigPtr ssl_config) override;
};
class  SSLConfigClientAsyncWaiter {
 public:
  explicit SSLConfigClientAsyncWaiter(SSLConfigClient* proxy);
  ~SSLConfigClientAsyncWaiter();

 private:
  SSLConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SSLConfigClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_TEST_UTILS_H_