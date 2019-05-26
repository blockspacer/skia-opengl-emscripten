// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/proxy_config_with_annotation.mojom.h"


namespace network {
namespace mojom {


class  ProxyConfigClientInterceptorForTesting : public ProxyConfigClient {
  virtual ProxyConfigClient* GetForwardingInterface() = 0;
  void OnProxyConfigUpdated(const net::ProxyConfigWithAnnotation& proxy_config) override;
  void FlushProxyConfig(FlushProxyConfigCallback callback) override;
};
class  ProxyConfigClientAsyncWaiter {
 public:
  explicit ProxyConfigClientAsyncWaiter(ProxyConfigClient* proxy);
  ~ProxyConfigClientAsyncWaiter();
  void FlushProxyConfig(
      );

 private:
  ProxyConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigClientAsyncWaiter);
};


class  ProxyConfigPollerClientInterceptorForTesting : public ProxyConfigPollerClient {
  virtual ProxyConfigPollerClient* GetForwardingInterface() = 0;
  void OnLazyProxyConfigPoll() override;
};
class  ProxyConfigPollerClientAsyncWaiter {
 public:
  explicit ProxyConfigPollerClientAsyncWaiter(ProxyConfigPollerClient* proxy);
  ~ProxyConfigPollerClientAsyncWaiter();

 private:
  ProxyConfigPollerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigPollerClientAsyncWaiter);
};


class  ProxyErrorClientInterceptorForTesting : public ProxyErrorClient {
  virtual ProxyErrorClient* GetForwardingInterface() = 0;
  void OnPACScriptError(int32_t line_number, const std::string& details) override;
  void OnRequestMaybeFailedDueToProxySettings(int32_t net_error) override;
};
class  ProxyErrorClientAsyncWaiter {
 public:
  explicit ProxyErrorClientAsyncWaiter(ProxyErrorClient* proxy);
  ~ProxyErrorClientAsyncWaiter();

 private:
  ProxyErrorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyErrorClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_TEST_UTILS_H_