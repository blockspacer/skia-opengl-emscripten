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


#include "third_party/blink/public/mojom/loader/code_cache.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void CodeCacheHostInterceptorForTesting::DidGenerateCacheableMetadata(CodeCacheType cache_type, const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data) {
  GetForwardingInterface()->DidGenerateCacheableMetadata(std::move(cache_type), std::move(url), std::move(expected_response_time), std::move(data));
}
void CodeCacheHostInterceptorForTesting::FetchCachedCode(CodeCacheType cache_type, const ::blink::KURL& url, FetchCachedCodeCallback callback) {
  GetForwardingInterface()->FetchCachedCode(std::move(cache_type), std::move(url), std::move(callback));
}
void CodeCacheHostInterceptorForTesting::ClearCodeCacheEntry(CodeCacheType cache_type, const ::blink::KURL& url) {
  GetForwardingInterface()->ClearCodeCacheEntry(std::move(cache_type), std::move(url));
}
void CodeCacheHostInterceptorForTesting::DidGenerateCacheableMetadataInCacheStorage(const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data, const scoped_refptr<const ::blink::SecurityOrigin>& cache_storage_origin, const WTF::String& cache_storage_cache_name) {
  GetForwardingInterface()->DidGenerateCacheableMetadataInCacheStorage(std::move(url), std::move(expected_response_time), std::move(data), std::move(cache_storage_origin), std::move(cache_storage_cache_name));
}
CodeCacheHostAsyncWaiter::CodeCacheHostAsyncWaiter(
    CodeCacheHost* proxy) : proxy_(proxy) {}

CodeCacheHostAsyncWaiter::~CodeCacheHostAsyncWaiter() = default;

void CodeCacheHostAsyncWaiter::FetchCachedCode(
    CodeCacheType cache_type, const ::blink::KURL& url, base::Time* out_response_time, mojo_base::BigBuffer* out_data) {
  base::RunLoop loop;
  proxy_->FetchCachedCode(std::move(cache_type),std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Time* out_response_time
,
             mojo_base::BigBuffer* out_data
,
             base::Time response_time,
             mojo_base::BigBuffer data) {*out_response_time = std::move(response_time);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_response_time,
          out_data));
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