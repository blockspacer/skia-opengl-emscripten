// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 115511792 value is based on sha256(salt + "AppCacheBackend1").
constexpr uint32_t kAppCacheBackend_RegisterHost_Name = 115511792;
// The 915395368 value is based on sha256(salt + "AppCacheHost1").
constexpr uint32_t kAppCacheHost_SetSpawningHostId_Name = 915395368;
// The 685865606 value is based on sha256(salt + "AppCacheHost2").
constexpr uint32_t kAppCacheHost_SelectCache_Name = 685865606;
// The 336192064 value is based on sha256(salt + "AppCacheHost3").
constexpr uint32_t kAppCacheHost_SelectCacheForSharedWorker_Name = 336192064;
// The 1738420868 value is based on sha256(salt + "AppCacheHost4").
constexpr uint32_t kAppCacheHost_MarkAsForeignEntry_Name = 1738420868;
// The 1584436439 value is based on sha256(salt + "AppCacheHost5").
constexpr uint32_t kAppCacheHost_GetStatus_Name = 1584436439;
// The 498815600 value is based on sha256(salt + "AppCacheHost6").
constexpr uint32_t kAppCacheHost_StartUpdate_Name = 498815600;
// The 1116684853 value is based on sha256(salt + "AppCacheHost7").
constexpr uint32_t kAppCacheHost_SwapCache_Name = 1116684853;
// The 906812161 value is based on sha256(salt + "AppCacheHost8").
constexpr uint32_t kAppCacheHost_GetResourceList_Name = 906812161;
// The 295958508 value is based on sha256(salt + "AppCacheFrontend1").
constexpr uint32_t kAppCacheFrontend_CacheSelected_Name = 295958508;
// The 355191545 value is based on sha256(salt + "AppCacheFrontend2").
constexpr uint32_t kAppCacheFrontend_EventRaised_Name = 355191545;
// The 2043458529 value is based on sha256(salt + "AppCacheFrontend3").
constexpr uint32_t kAppCacheFrontend_ProgressEventRaised_Name = 2043458529;
// The 642936094 value is based on sha256(salt + "AppCacheFrontend4").
constexpr uint32_t kAppCacheFrontend_ErrorEventRaised_Name = 642936094;
// The 395287934 value is based on sha256(salt + "AppCacheFrontend5").
constexpr uint32_t kAppCacheFrontend_LogMessage_Name = 395287934;
// The 18871285 value is based on sha256(salt + "AppCacheFrontend6").
constexpr uint32_t kAppCacheFrontend_SetSubresourceFactory_Name = 18871285;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_