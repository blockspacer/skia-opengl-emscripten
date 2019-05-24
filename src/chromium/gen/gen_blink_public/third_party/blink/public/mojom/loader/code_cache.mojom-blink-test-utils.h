// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/loader/code_cache.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT CodeCacheHostInterceptorForTesting : public CodeCacheHost {
  virtual CodeCacheHost* GetForwardingInterface() = 0;
  void DidGenerateCacheableMetadata(CodeCacheType cache_type, const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data) override;
  void FetchCachedCode(CodeCacheType cache_type, const ::blink::KURL& url, FetchCachedCodeCallback callback) override;
  void ClearCodeCacheEntry(CodeCacheType cache_type, const ::blink::KURL& url) override;
  void DidGenerateCacheableMetadataInCacheStorage(const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data, const scoped_refptr<const ::blink::SecurityOrigin>& cache_storage_origin, const WTF::String& cache_storage_cache_name) override;
};
class PLATFORM_EXPORT CodeCacheHostAsyncWaiter {
 public:
  explicit CodeCacheHostAsyncWaiter(CodeCacheHost* proxy);
  ~CodeCacheHostAsyncWaiter();
  void FetchCachedCode(
      CodeCacheType cache_type, const ::blink::KURL& url, base::Time* out_response_time, mojo_base::BigBuffer* out_data);

 private:
  CodeCacheHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CodeCacheHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_TEST_UTILS_H_