// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/data_pipe_getter.mojom.h"


namespace network {
namespace mojom {


class  DataPipeGetterInterceptorForTesting : public DataPipeGetter {
  virtual DataPipeGetter* GetForwardingInterface() = 0;
  void Read(mojo::ScopedDataPipeProducerHandle pipe, ReadCallback callback) override;
  void Clone(DataPipeGetterRequest request) override;
};
class  DataPipeGetterAsyncWaiter {
 public:
  explicit DataPipeGetterAsyncWaiter(DataPipeGetter* proxy);
  ~DataPipeGetterAsyncWaiter();
  void Read(
      mojo::ScopedDataPipeProducerHandle pipe, int32_t* out_status, uint64_t* out_size);

 private:
  DataPipeGetter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DataPipeGetterAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_TEST_UTILS_H_