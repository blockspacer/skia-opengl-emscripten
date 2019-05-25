// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 911855857 value is based on sha256(salt + "CookieChangeListener1").
constexpr uint32_t kCookieChangeListener_OnCookieChange_Name = 911855857;
// The 1750281044 value is based on sha256(salt + "CookieManager1").
constexpr uint32_t kCookieManager_GetAllCookies_Name = 1750281044;
// The 611336926 value is based on sha256(salt + "CookieManager2").
constexpr uint32_t kCookieManager_GetCookieList_Name = 611336926;
// The 23634077 value is based on sha256(salt + "CookieManager3").
constexpr uint32_t kCookieManager_SetCanonicalCookie_Name = 23634077;
// The 1130465441 value is based on sha256(salt + "CookieManager4").
constexpr uint32_t kCookieManager_DeleteCanonicalCookie_Name = 1130465441;
// The 676658851 value is based on sha256(salt + "CookieManager5").
constexpr uint32_t kCookieManager_DeleteCookies_Name = 676658851;
// The 1205555324 value is based on sha256(salt + "CookieManager6").
constexpr uint32_t kCookieManager_AddCookieChangeListener_Name = 1205555324;
// The 1256587154 value is based on sha256(salt + "CookieManager7").
constexpr uint32_t kCookieManager_AddGlobalChangeListener_Name = 1256587154;
// The 472464707 value is based on sha256(salt + "CookieManager8").
constexpr uint32_t kCookieManager_CloneInterface_Name = 472464707;
// The 1975053483 value is based on sha256(salt + "CookieManager9").
constexpr uint32_t kCookieManager_FlushCookieStore_Name = 1975053483;
// The 747251505 value is based on sha256(salt + "CookieManager10").
constexpr uint32_t kCookieManager_AllowFileSchemeCookies_Name = 747251505;
// The 681183414 value is based on sha256(salt + "CookieManager11").
constexpr uint32_t kCookieManager_SetContentSettings_Name = 681183414;
// The 1978218536 value is based on sha256(salt + "CookieManager12").
constexpr uint32_t kCookieManager_SetForceKeepSessionState_Name = 1978218536;
// The 1739627641 value is based on sha256(salt + "CookieManager13").
constexpr uint32_t kCookieManager_BlockThirdPartyCookies_Name = 1739627641;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_