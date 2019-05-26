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


#include "services/network/public/mojom/net_log.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/values.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void NetLogExporterInterceptorForTesting::Start(base::File destination, ::mojo_base::mojom::blink::DictionaryValuePtr extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) {
  GetForwardingInterface()->Start(std::move(destination), std::move(extra_constants), std::move(capture_mode), std::move(max_file_size), std::move(callback));
}
void NetLogExporterInterceptorForTesting::Stop(::mojo_base::mojom::blink::DictionaryValuePtr polled_values, StopCallback callback) {
  GetForwardingInterface()->Stop(std::move(polled_values), std::move(callback));
}
NetLogExporterAsyncWaiter::NetLogExporterAsyncWaiter(
    NetLogExporter* proxy) : proxy_(proxy) {}

NetLogExporterAsyncWaiter::~NetLogExporterAsyncWaiter() = default;

void NetLogExporterAsyncWaiter::Start(
    base::File destination, ::mojo_base::mojom::blink::DictionaryValuePtr extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->Start(std::move(destination),std::move(extra_constants),std::move(capture_mode),std::move(max_file_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}
void NetLogExporterAsyncWaiter::Stop(
    ::mojo_base::mojom::blink::DictionaryValuePtr polled_values, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->Stop(std::move(polled_values),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif