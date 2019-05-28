// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1177342048 value is based on sha256(salt + "CookieChangeListener1").
constexpr uint32_t kCookieChangeListener_OnCookieChange_Name = 1177342048;
// The 1611900934 value is based on sha256(salt + "CookieManager1").
constexpr uint32_t kCookieManager_GetAllCookies_Name = 1611900934;
// The 1016822756 value is based on sha256(salt + "CookieManager2").
constexpr uint32_t kCookieManager_GetCookieList_Name = 1016822756;
// The 1367876489 value is based on sha256(salt + "CookieManager3").
constexpr uint32_t kCookieManager_SetCanonicalCookie_Name = 1367876489;
// The 1056131695 value is based on sha256(salt + "CookieManager4").
constexpr uint32_t kCookieManager_DeleteCanonicalCookie_Name = 1056131695;
// The 1770855346 value is based on sha256(salt + "CookieManager5").
constexpr uint32_t kCookieManager_DeleteCookies_Name = 1770855346;
// The 387382897 value is based on sha256(salt + "CookieManager6").
constexpr uint32_t kCookieManager_AddCookieChangeListener_Name = 387382897;
// The 1860665604 value is based on sha256(salt + "CookieManager7").
constexpr uint32_t kCookieManager_AddGlobalChangeListener_Name = 1860665604;
// The 1560199413 value is based on sha256(salt + "CookieManager8").
constexpr uint32_t kCookieManager_CloneInterface_Name = 1560199413;
// The 1646110027 value is based on sha256(salt + "CookieManager9").
constexpr uint32_t kCookieManager_FlushCookieStore_Name = 1646110027;
// The 1924025700 value is based on sha256(salt + "CookieManager10").
constexpr uint32_t kCookieManager_AllowFileSchemeCookies_Name = 1924025700;
// The 1892087187 value is based on sha256(salt + "CookieManager11").
constexpr uint32_t kCookieManager_SetContentSettings_Name = 1892087187;
// The 1629048011 value is based on sha256(salt + "CookieManager12").
constexpr uint32_t kCookieManager_SetForceKeepSessionState_Name = 1629048011;
// The 892714311 value is based on sha256(salt + "CookieManager13").
constexpr uint32_t kCookieManager_BlockThirdPartyCookies_Name = 892714311;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_