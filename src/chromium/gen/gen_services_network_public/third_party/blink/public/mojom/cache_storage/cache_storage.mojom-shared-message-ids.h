// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 249937768 value is based on sha256(salt + "CacheStorageCache1").
constexpr uint32_t kCacheStorageCache_Match_Name = 249937768;
// The 678541535 value is based on sha256(salt + "CacheStorageCache2").
constexpr uint32_t kCacheStorageCache_MatchAll_Name = 678541535;
// The 1825968636 value is based on sha256(salt + "CacheStorageCache3").
constexpr uint32_t kCacheStorageCache_Keys_Name = 1825968636;
// The 607453295 value is based on sha256(salt + "CacheStorageCache4").
constexpr uint32_t kCacheStorageCache_Batch_Name = 607453295;
// The 672988623 value is based on sha256(salt + "CacheStorageCache5").
constexpr uint32_t kCacheStorageCache_SetSideData_Name = 672988623;
// The 1660597607 value is based on sha256(salt + "CacheStorage1").
constexpr uint32_t kCacheStorage_Has_Name = 1660597607;
// The 1532911004 value is based on sha256(salt + "CacheStorage2").
constexpr uint32_t kCacheStorage_Delete_Name = 1532911004;
// The 663516477 value is based on sha256(salt + "CacheStorage3").
constexpr uint32_t kCacheStorage_Keys_Name = 663516477;
// The 408666967 value is based on sha256(salt + "CacheStorage4").
constexpr uint32_t kCacheStorage_Match_Name = 408666967;
// The 822470675 value is based on sha256(salt + "CacheStorage5").
constexpr uint32_t kCacheStorage_Open_Name = 822470675;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_