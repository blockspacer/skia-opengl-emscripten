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


#include "third_party/blink/public/mojom/blob/data_element.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void BytesProviderInterceptorForTesting::RequestAsReply(RequestAsReplyCallback callback) {
  GetForwardingInterface()->RequestAsReply(std::move(callback));
}
void BytesProviderInterceptorForTesting::RequestAsStream(mojo::ScopedDataPipeProducerHandle pipe) {
  GetForwardingInterface()->RequestAsStream(std::move(pipe));
}
void BytesProviderInterceptorForTesting::RequestAsFile(uint64_t source_offset, uint64_t source_size, base::File file, uint64_t file_offset, RequestAsFileCallback callback) {
  GetForwardingInterface()->RequestAsFile(std::move(source_offset), std::move(source_size), std::move(file), std::move(file_offset), std::move(callback));
}
BytesProviderAsyncWaiter::BytesProviderAsyncWaiter(
    BytesProvider* proxy) : proxy_(proxy) {}

BytesProviderAsyncWaiter::~BytesProviderAsyncWaiter() = default;

void BytesProviderAsyncWaiter::RequestAsReply(
    std::vector<uint8_t>* out_data) {
  base::RunLoop loop;
  proxy_->RequestAsReply(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<uint8_t>* out_data
,
             const std::vector<uint8_t>& data) {*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_data));
  loop.Run();
}
void BytesProviderAsyncWaiter::RequestAsFile(
    uint64_t source_offset, uint64_t source_size, base::File file, uint64_t file_offset, base::Optional<base::Time>* out_time_file_modified) {
  base::RunLoop loop;
  proxy_->RequestAsFile(std::move(source_offset),std::move(source_size),std::move(file),std::move(file_offset),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<base::Time>* out_time_file_modified
,
             base::Optional<base::Time> time_file_modified) {*out_time_file_modified = std::move(time_file_modified);
            loop->Quit();
          },
          &loop,
          out_time_file_modified));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif