// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/proxy_config_with_annotation.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ProxyConfigClientInterceptorForTesting : public ProxyConfigClient {
  virtual ProxyConfigClient* GetForwardingInterface() = 0;
  void OnProxyConfigUpdated(ProxyConfigWithAnnotationPtr proxy_config) override;
  void FlushProxyConfig(FlushProxyConfigCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ProxyConfigClientAsyncWaiter {
 public:
  explicit ProxyConfigClientAsyncWaiter(ProxyConfigClient* proxy);
  ~ProxyConfigClientAsyncWaiter();
  void FlushProxyConfig(
      );

 private:
  ProxyConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyConfigPollerClientInterceptorForTesting : public ProxyConfigPollerClient {
  virtual ProxyConfigPollerClient* GetForwardingInterface() = 0;
  void OnLazyProxyConfigPoll() override;
};
class BLINK_PLATFORM_EXPORT ProxyConfigPollerClientAsyncWaiter {
 public:
  explicit ProxyConfigPollerClientAsyncWaiter(ProxyConfigPollerClient* proxy);
  ~ProxyConfigPollerClientAsyncWaiter();

 private:
  ProxyConfigPollerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigPollerClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyErrorClientInterceptorForTesting : public ProxyErrorClient {
  virtual ProxyErrorClient* GetForwardingInterface() = 0;
  void OnPACScriptError(int32_t line_number, const WTF::String& details) override;
  void OnRequestMaybeFailedDueToProxySettings(int32_t net_error) override;
};
class BLINK_PLATFORM_EXPORT ProxyErrorClientAsyncWaiter {
 public:
  explicit ProxyErrorClientAsyncWaiter(ProxyErrorClient* proxy);
  ~ProxyErrorClientAsyncWaiter();

 private:
  ProxyErrorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyErrorClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_BLINK_TEST_UTILS_H_