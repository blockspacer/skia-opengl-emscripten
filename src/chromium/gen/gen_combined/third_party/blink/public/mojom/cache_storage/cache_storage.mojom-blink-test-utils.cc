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


#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void CacheStorageCacheInterceptorForTesting::Match(::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchCallback callback) {
  GetForwardingInterface()->Match(std::move(request), std::move(query_options), std::move(trace_id), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::MatchAll(::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchAllCallback callback) {
  GetForwardingInterface()->MatchAll(std::move(request), std::move(query_options), std::move(trace_id), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::Keys(::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, KeysCallback callback) {
  GetForwardingInterface()->Keys(std::move(request), std::move(query_options), std::move(trace_id), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::Batch(WTF::Vector<BatchOperationPtr> batch_operations, int64_t trace_id, BatchCallback callback) {
  GetForwardingInterface()->Batch(std::move(batch_operations), std::move(trace_id), std::move(callback));
}
void CacheStorageCacheInterceptorForTesting::SetSideData(const ::blink::KURL& url, base::Time response_time, const WTF::Vector<uint8_t>& side_data, int64_t trace_id, SetSideDataCallback callback) {
  GetForwardingInterface()->SetSideData(std::move(url), std::move(response_time), std::move(side_data), std::move(trace_id), std::move(callback));
}
CacheStorageCacheAsyncWaiter::CacheStorageCacheAsyncWaiter(
    CacheStorageCache* proxy) : proxy_(proxy) {}

CacheStorageCacheAsyncWaiter::~CacheStorageCacheAsyncWaiter() = default;

void CacheStorageCacheAsyncWaiter::Match(
    ::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Match(std::move(request),std::move(query_options),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             MatchResultPtr* out_result
,
             MatchResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::MatchAll(
    ::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchAllResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->MatchAll(std::move(request),std::move(query_options),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             MatchAllResultPtr* out_result
,
             MatchAllResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::Keys(
    ::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, CacheKeysResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Keys(std::move(request),std::move(query_options),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheKeysResultPtr* out_result
,
             CacheKeysResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::Batch(
    WTF::Vector<BatchOperationPtr> batch_operations, int64_t trace_id, CacheStorageVerboseErrorPtr* out_result) {
  base::RunLoop loop;
  proxy_->Batch(std::move(batch_operations),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageVerboseErrorPtr* out_result
,
             CacheStorageVerboseErrorPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageCacheAsyncWaiter::SetSideData(
    const ::blink::KURL& url, base::Time response_time, const WTF::Vector<uint8_t>& side_data, int64_t trace_id, CacheStorageError* out_result) {
  base::RunLoop loop;
  proxy_->SetSideData(std::move(url),std::move(response_time),std::move(side_data),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageError* out_result
,
             CacheStorageError result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void CacheStorageInterceptorForTesting::Has(const WTF::String& cache_name, int64_t trace_id, HasCallback callback) {
  GetForwardingInterface()->Has(std::move(cache_name), std::move(trace_id), std::move(callback));
}
void CacheStorageInterceptorForTesting::Delete(const WTF::String& cache_name, int64_t trace_id, DeleteCallback callback) {
  GetForwardingInterface()->Delete(std::move(cache_name), std::move(trace_id), std::move(callback));
}
void CacheStorageInterceptorForTesting::Keys(int64_t trace_id, KeysCallback callback) {
  GetForwardingInterface()->Keys(std::move(trace_id), std::move(callback));
}
void CacheStorageInterceptorForTesting::Match(::blink::mojom::blink::FetchAPIRequestPtr request, MultiCacheQueryOptionsPtr match_options, int64_t trace_id, MatchCallback callback) {
  GetForwardingInterface()->Match(std::move(request), std::move(match_options), std::move(trace_id), std::move(callback));
}
void CacheStorageInterceptorForTesting::Open(const WTF::String& cache_name, int64_t trace_id, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(cache_name), std::move(trace_id), std::move(callback));
}
CacheStorageAsyncWaiter::CacheStorageAsyncWaiter(
    CacheStorage* proxy) : proxy_(proxy) {}

CacheStorageAsyncWaiter::~CacheStorageAsyncWaiter() = default;

void CacheStorageAsyncWaiter::Has(
    const WTF::String& cache_name, int64_t trace_id, CacheStorageError* out_result) {
  base::RunLoop loop;
  proxy_->Has(std::move(cache_name),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageError* out_result
,
             CacheStorageError result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageAsyncWaiter::Delete(
    const WTF::String& cache_name, int64_t trace_id, CacheStorageError* out_result) {
  base::RunLoop loop;
  proxy_->Delete(std::move(cache_name),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CacheStorageError* out_result
,
             CacheStorageError result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageAsyncWaiter::Keys(
    int64_t trace_id, WTF::Vector<WTF::String>* out_keys) {
  base::RunLoop loop;
  proxy_->Keys(std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<WTF::String>* out_keys
,
             const WTF::Vector<WTF::String>& keys) {*out_keys = std::move(keys);
            loop->Quit();
          },
          &loop,
          out_keys));
  loop.Run();
}
void CacheStorageAsyncWaiter::Match(
    ::blink::mojom::blink::FetchAPIRequestPtr request, MultiCacheQueryOptionsPtr match_options, int64_t trace_id, MatchResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Match(std::move(request),std::move(match_options),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             MatchResultPtr* out_result
,
             MatchResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void CacheStorageAsyncWaiter::Open(
    const WTF::String& cache_name, int64_t trace_id, OpenResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->Open(std::move(cache_name),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             OpenResultPtr* out_result
,
             OpenResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
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