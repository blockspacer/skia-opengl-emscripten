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


#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_BLINK_JUMBO_H_
#endif


namespace network {
namespace mojom {
namespace blink {


void ChunkedDataPipeGetterInterceptorForTesting::GetSize(GetSizeCallback callback) {
  GetForwardingInterface()->GetSize(std::move(callback));
}
void ChunkedDataPipeGetterInterceptorForTesting::StartReading(mojo::ScopedDataPipeProducerHandle pipe) {
  GetForwardingInterface()->StartReading(std::move(pipe));
}
ChunkedDataPipeGetterAsyncWaiter::ChunkedDataPipeGetterAsyncWaiter(
    ChunkedDataPipeGetter* proxy) : proxy_(proxy) {}

ChunkedDataPipeGetterAsyncWaiter::~ChunkedDataPipeGetterAsyncWaiter() = default;

void ChunkedDataPipeGetterAsyncWaiter::GetSize(
    int32_t* out_status, uint64_t* out_size) {
  base::RunLoop loop;
  proxy_->GetSize(
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





}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif