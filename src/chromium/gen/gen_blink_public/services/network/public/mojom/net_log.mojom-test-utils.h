// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/net_log.mojom.h"


namespace network {
namespace mojom {


class  NetLogExporterInterceptorForTesting : public NetLogExporter {
  virtual NetLogExporter* GetForwardingInterface() = 0;
  void Start(base::File destination, base::Value extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, StartCallback callback) override;
  void Stop(base::Value polled_values, StopCallback callback) override;
};
class  NetLogExporterAsyncWaiter {
 public:
  explicit NetLogExporterAsyncWaiter(NetLogExporter* proxy);
  ~NetLogExporterAsyncWaiter();
  void Start(
      base::File destination, base::Value extra_constants, NetLogCaptureMode capture_mode, uint64_t max_file_size, int32_t* out_net_error);
  void Stop(
      base::Value polled_values, int32_t* out_net_error);

 private:
  NetLogExporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetLogExporterAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_TEST_UTILS_H_