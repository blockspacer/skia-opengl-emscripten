// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1074758481 value is based on sha256(salt + "CacheStorageCache1").
constexpr uint32_t kCacheStorageCache_Match_Name = 1074758481;
// The 1101056674 value is based on sha256(salt + "CacheStorageCache2").
constexpr uint32_t kCacheStorageCache_MatchAll_Name = 1101056674;
// The 2045684113 value is based on sha256(salt + "CacheStorageCache3").
constexpr uint32_t kCacheStorageCache_Keys_Name = 2045684113;
// The 954457232 value is based on sha256(salt + "CacheStorageCache4").
constexpr uint32_t kCacheStorageCache_Batch_Name = 954457232;
// The 1883225341 value is based on sha256(salt + "CacheStorageCache5").
constexpr uint32_t kCacheStorageCache_SetSideData_Name = 1883225341;
// The 2071719964 value is based on sha256(salt + "CacheStorage1").
constexpr uint32_t kCacheStorage_Has_Name = 2071719964;
// The 680193429 value is based on sha256(salt + "CacheStorage2").
constexpr uint32_t kCacheStorage_Delete_Name = 680193429;
// The 270038537 value is based on sha256(salt + "CacheStorage3").
constexpr uint32_t kCacheStorage_Keys_Name = 270038537;
// The 1220913224 value is based on sha256(salt + "CacheStorage4").
constexpr uint32_t kCacheStorage_Match_Name = 1220913224;
// The 1042965062 value is based on sha256(salt + "CacheStorage5").
constexpr uint32_t kCacheStorage_Open_Name = 1042965062;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_