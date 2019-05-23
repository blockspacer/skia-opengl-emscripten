// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/chunked_data_pipe_getter.mojom.h"


namespace network {
namespace mojom {


class  ChunkedDataPipeGetterInterceptorForTesting : public ChunkedDataPipeGetter {
  virtual ChunkedDataPipeGetter* GetForwardingInterface() = 0;
  void GetSize(GetSizeCallback callback) override;
  void StartReading(mojo::ScopedDataPipeProducerHandle pipe) override;
};
class  ChunkedDataPipeGetterAsyncWaiter {
 public:
  explicit ChunkedDataPipeGetterAsyncWaiter(ChunkedDataPipeGetter* proxy);
  ~ChunkedDataPipeGetterAsyncWaiter();
  void GetSize(
      int32_t* out_status, uint64_t* out_size);

 private:
  ChunkedDataPipeGetter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ChunkedDataPipeGetterAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_TEST_UTILS_H_