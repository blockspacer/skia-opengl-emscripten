// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 784588878 value is based on sha256(salt + "CodeCacheHost1").
constexpr uint32_t kCodeCacheHost_DidGenerateCacheableMetadata_Name = 784588878;
// The 797117116 value is based on sha256(salt + "CodeCacheHost2").
constexpr uint32_t kCodeCacheHost_FetchCachedCode_Name = 797117116;
// The 1382416780 value is based on sha256(salt + "CodeCacheHost3").
constexpr uint32_t kCodeCacheHost_ClearCodeCacheEntry_Name = 1382416780;
// The 87547772 value is based on sha256(salt + "CodeCacheHost4").
constexpr uint32_t kCodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Name = 87547772;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_