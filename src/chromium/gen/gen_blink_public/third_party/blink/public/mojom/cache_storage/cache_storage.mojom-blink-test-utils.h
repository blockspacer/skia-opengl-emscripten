// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT CacheStorageCacheInterceptorForTesting : public CacheStorageCache {
  virtual CacheStorageCache* GetForwardingInterface() = 0;
  void Match(::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchCallback callback) override;
  void MatchAll(::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchAllCallback callback) override;
  void Keys(::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, KeysCallback callback) override;
  void Batch(WTF::Vector<BatchOperationPtr> batch_operations, int64_t trace_id, BatchCallback callback) override;
  void SetSideData(const ::blink::KURL& url, base::Time response_time, const WTF::Vector<uint8_t>& side_data, int64_t trace_id, SetSideDataCallback callback) override;
};
class PLATFORM_EXPORT CacheStorageCacheAsyncWaiter {
 public:
  explicit CacheStorageCacheAsyncWaiter(CacheStorageCache* proxy);
  ~CacheStorageCacheAsyncWaiter();
  void Match(
      ::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchResultPtr* out_result);
  void MatchAll(
      ::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, MatchAllResultPtr* out_result);
  void Keys(
      ::blink::mojom::blink::FetchAPIRequestPtr request, CacheQueryOptionsPtr query_options, int64_t trace_id, CacheKeysResultPtr* out_result);
  void Batch(
      WTF::Vector<BatchOperationPtr> batch_operations, int64_t trace_id, CacheStorageVerboseErrorPtr* out_result);
  void SetSideData(
      const ::blink::KURL& url, base::Time response_time, const WTF::Vector<uint8_t>& side_data, int64_t trace_id, CacheStorageError* out_result);

 private:
  CacheStorageCache* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageCacheAsyncWaiter);
};


class PLATFORM_EXPORT CacheStorageInterceptorForTesting : public CacheStorage {
  virtual CacheStorage* GetForwardingInterface() = 0;
  void Has(const WTF::String& cache_name, int64_t trace_id, HasCallback callback) override;
  void Delete(const WTF::String& cache_name, int64_t trace_id, DeleteCallback callback) override;
  void Keys(int64_t trace_id, KeysCallback callback) override;
  void Match(::blink::mojom::blink::FetchAPIRequestPtr request, MultiCacheQueryOptionsPtr match_options, int64_t trace_id, MatchCallback callback) override;
  void Open(const WTF::String& cache_name, int64_t trace_id, OpenCallback callback) override;
};
class PLATFORM_EXPORT CacheStorageAsyncWaiter {
 public:
  explicit CacheStorageAsyncWaiter(CacheStorage* proxy);
  ~CacheStorageAsyncWaiter();
  void Has(
      const WTF::String& cache_name, int64_t trace_id, CacheStorageError* out_result);
  void Delete(
      const WTF::String& cache_name, int64_t trace_id, CacheStorageError* out_result);
  void Keys(
      int64_t trace_id, WTF::Vector<WTF::String>* out_keys);
  void Match(
      ::blink::mojom::blink::FetchAPIRequestPtr request, MultiCacheQueryOptionsPtr match_options, int64_t trace_id, MatchResultPtr* out_result);
  void Open(
      const WTF::String& cache_name, int64_t trace_id, OpenResultPtr* out_result);

 private:
  CacheStorage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CacheStorageAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_BLINK_TEST_UTILS_H_