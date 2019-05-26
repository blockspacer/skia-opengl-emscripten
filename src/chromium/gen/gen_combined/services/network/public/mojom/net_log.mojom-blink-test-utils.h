// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/net_log.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT NetLogExporterInterceptorForTesting : public NetLogExporter {
  virtual NetLogExporter* GetForwardingInterface() = 0;
  void Start(base::File destination, ::mojo_base::mojom::blink::DictionaryValuePtr extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) override;
  void Stop(::mojo_base::mojom::blink::DictionaryValuePtr polled_values, StopCallback callback) override;
};
class BLINK_PLATFORM_EXPORT NetLogExporterAsyncWaiter {
 public:
  explicit NetLogExporterAsyncWaiter(NetLogExporter* proxy);
  ~NetLogExporterAsyncWaiter();
  void Start(
      base::File destination, ::mojo_base::mojom::blink::DictionaryValuePtr extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, int32_t* out_net_error);
  void Stop(
      ::mojo_base::mojom::blink::DictionaryValuePtr polled_values, int32_t* out_net_error);

 private:
  NetLogExporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporterAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_TEST_UTILS_H_