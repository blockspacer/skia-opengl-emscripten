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


#include "services/network/public/mojom/data_pipe_getter.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_JUMBO_H_
#endif


namespace network {
namespace mojom {


void DataPipeGetterInterceptorForTesting::Read(mojo::ScopedDataPipeProducerHandle pipe, ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(pipe), std::move(callback));
}
void DataPipeGetterInterceptorForTesting::Clone(DataPipeGetterRequest request) {
  GetForwardingInterface()->Clone(std::move(request));
}
DataPipeGetterAsyncWaiter::DataPipeGetterAsyncWaiter(
    DataPipeGetter* proxy) : proxy_(proxy) {}

DataPipeGetterAsyncWaiter::~DataPipeGetterAsyncWaiter() = default;

void DataPipeGetterAsyncWaiter::Read(
    mojo::ScopedDataPipeProducerHandle pipe, int32_t* out_status, uint64_t* out_size) {
  base::RunLoop loop;
  proxy_->Read(std::move(pipe),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_status
,
             uint64_t* out_size
,
             int32_t status,
             uint64_t size) {*out_status = std::move(status);*out_size = std::move(size);
            loop->Quit();
          },
          &loop,
          out_status,
          out_size));
  loop.Run();
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif