// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1344501565 value is based on sha256(salt + "AppCacheBackend1").
constexpr uint32_t kAppCacheBackend_RegisterHost_Name = 1344501565;
// The 1648968775 value is based on sha256(salt + "AppCacheHost1").
constexpr uint32_t kAppCacheHost_SetSpawningHostId_Name = 1648968775;
// The 695587991 value is based on sha256(salt + "AppCacheHost2").
constexpr uint32_t kAppCacheHost_SelectCache_Name = 695587991;
// The 1886092291 value is based on sha256(salt + "AppCacheHost3").
constexpr uint32_t kAppCacheHost_SelectCacheForSharedWorker_Name = 1886092291;
// The 1177529532 value is based on sha256(salt + "AppCacheHost4").
constexpr uint32_t kAppCacheHost_MarkAsForeignEntry_Name = 1177529532;
// The 2006481578 value is based on sha256(salt + "AppCacheHost5").
constexpr uint32_t kAppCacheHost_GetStatus_Name = 2006481578;
// The 1949564794 value is based on sha256(salt + "AppCacheHost6").
constexpr uint32_t kAppCacheHost_StartUpdate_Name = 1949564794;
// The 600650076 value is based on sha256(salt + "AppCacheHost7").
constexpr uint32_t kAppCacheHost_SwapCache_Name = 600650076;
// The 865315570 value is based on sha256(salt + "AppCacheHost8").
constexpr uint32_t kAppCacheHost_GetResourceList_Name = 865315570;
// The 805746362 value is based on sha256(salt + "AppCacheFrontend1").
constexpr uint32_t kAppCacheFrontend_CacheSelected_Name = 805746362;
// The 637174979 value is based on sha256(salt + "AppCacheFrontend2").
constexpr uint32_t kAppCacheFrontend_EventRaised_Name = 637174979;
// The 351038781 value is based on sha256(salt + "AppCacheFrontend3").
constexpr uint32_t kAppCacheFrontend_ProgressEventRaised_Name = 351038781;
// The 509295304 value is based on sha256(salt + "AppCacheFrontend4").
constexpr uint32_t kAppCacheFrontend_ErrorEventRaised_Name = 509295304;
// The 1295053433 value is based on sha256(salt + "AppCacheFrontend5").
constexpr uint32_t kAppCacheFrontend_LogMessage_Name = 1295053433;
// The 909817482 value is based on sha256(salt + "AppCacheFrontend6").
constexpr uint32_t kAppCacheFrontend_SetSubresourceFactory_Name = 909817482;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_