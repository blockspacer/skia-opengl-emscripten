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


#include "third_party/blink/public/mojom/blob/blob.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-blink.h"
#include "services/network/public/mojom/http_request_headers.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void BlobReaderClientInterceptorForTesting::OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) {
  GetForwardingInterface()->OnCalculatedSize(std::move(total_size), std::move(expected_content_size));
}
void BlobReaderClientInterceptorForTesting::OnComplete(int32_t status, uint64_t data_length) {
  GetForwardingInterface()->OnComplete(std::move(status), std::move(data_length));
}
BlobReaderClientAsyncWaiter::BlobReaderClientAsyncWaiter(
    BlobReaderClient* proxy) : proxy_(proxy) {}

BlobReaderClientAsyncWaiter::~BlobReaderClientAsyncWaiter() = default;




void BlobInterceptorForTesting::Clone(BlobRequest blob) {
  GetForwardingInterface()->Clone(std::move(blob));
}
void BlobInterceptorForTesting::AsDataPipeGetter(::network::mojom::blink::DataPipeGetterRequest data_pipe_getter) {
  GetForwardingInterface()->AsDataPipeGetter(std::move(data_pipe_getter));
}
void BlobInterceptorForTesting::ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) {
  GetForwardingInterface()->ReadAll(std::move(pipe), std::move(client));
}
void BlobInterceptorForTesting::ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) {
  GetForwardingInterface()->ReadRange(std::move(offset), std::move(length), std::move(pipe), std::move(client));
}
void BlobInterceptorForTesting::ReadSideData(ReadSideDataCallback callback) {
  GetForwardingInterface()->ReadSideData(std::move(callback));
}
void BlobInterceptorForTesting::GetInternalUUID(GetInternalUUIDCallback callback) {
  GetForwardingInterface()->GetInternalUUID(std::move(callback));
}
BlobAsyncWaiter::BlobAsyncWaiter(
    Blob* proxy) : proxy_(proxy) {}

BlobAsyncWaiter::~BlobAsyncWaiter() = default;

void BlobAsyncWaiter::ReadSideData(
    base::Optional<mojo_base::BigBuffer>* out_data) {
  base::RunLoop loop;
  proxy_->ReadSideData(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<mojo_base::BigBuffer>* out_data
,
             base::Optional<mojo_base::BigBuffer> data) {*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_data));
  loop.Run();
}
void BlobAsyncWaiter::GetInternalUUID(
    WTF::String* out_uuid) {
  base::RunLoop loop;
  proxy_->GetInternalUUID(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_uuid
,
             const WTF::String& uuid) {*out_uuid = std::move(uuid);
            loop->Quit();
          },
          &loop,
          out_uuid));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif