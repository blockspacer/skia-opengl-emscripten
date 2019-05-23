// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1266521516 value is based on sha256(salt + "CodeCacheHost1").
constexpr uint32_t kCodeCacheHost_DidGenerateCacheableMetadata_Name = 1266521516;
// The 1682745866 value is based on sha256(salt + "CodeCacheHost2").
constexpr uint32_t kCodeCacheHost_FetchCachedCode_Name = 1682745866;
// The 1870441415 value is based on sha256(salt + "CodeCacheHost3").
constexpr uint32_t kCodeCacheHost_ClearCodeCacheEntry_Name = 1870441415;
// The 1846680171 value is based on sha256(salt + "CodeCacheHost4").
constexpr uint32_t kCodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Name = 1846680171;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_