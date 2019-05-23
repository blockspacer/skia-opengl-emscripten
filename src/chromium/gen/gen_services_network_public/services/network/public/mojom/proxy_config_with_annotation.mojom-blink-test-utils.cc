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


#include "services/network/public/mojom/proxy_config_with_annotation.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"
#include "services/network/public/mojom/proxy_config.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/big_string_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void ProxyConfigClientInterceptorForTesting::OnProxyConfigUpdated(ProxyConfigWithAnnotationPtr proxy_config) {
  GetForwardingInterface()->OnProxyConfigUpdated(std::move(proxy_config));
}
void ProxyConfigClientInterceptorForTesting::FlushProxyConfig(FlushProxyConfigCallback callback) {
  GetForwardingInterface()->FlushProxyConfig(std::move(callback));
}
ProxyConfigClientAsyncWaiter::ProxyConfigClientAsyncWaiter(
    ProxyConfigClient* proxy) : proxy_(proxy) {}

ProxyConfigClientAsyncWaiter::~ProxyConfigClientAsyncWaiter() = default;

void ProxyConfigClientAsyncWaiter::FlushProxyConfig(
    ) {
  base::RunLoop loop;
  proxy_->FlushProxyConfig(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void ProxyConfigPollerClientInterceptorForTesting::OnLazyProxyConfigPoll() {
  GetForwardingInterface()->OnLazyProxyConfigPoll();
}
ProxyConfigPollerClientAsyncWaiter::ProxyConfigPollerClientAsyncWaiter(
    ProxyConfigPollerClient* proxy) : proxy_(proxy) {}

ProxyConfigPollerClientAsyncWaiter::~ProxyConfigPollerClientAsyncWaiter() = default;




void ProxyErrorClientInterceptorForTesting::OnPACScriptError(int32_t line_number, const WTF::String& details) {
  GetForwardingInterface()->OnPACScriptError(std::move(line_number), std::move(details));
}
void ProxyErrorClientInterceptorForTesting::OnRequestMaybeFailedDueToProxySettings(int32_t net_error) {
  GetForwardingInterface()->OnRequestMaybeFailedDueToProxySettings(std::move(net_error));
}
ProxyErrorClientAsyncWaiter::ProxyErrorClientAsyncWaiter(
    ProxyErrorClient* proxy) : proxy_(proxy) {}

ProxyErrorClientAsyncWaiter::~ProxyErrorClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif