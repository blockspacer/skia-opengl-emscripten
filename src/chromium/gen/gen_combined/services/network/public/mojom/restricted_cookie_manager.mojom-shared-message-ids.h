// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1443268209 value is based on sha256(salt + "RestrictedCookieManager1").
constexpr uint32_t kRestrictedCookieManager_GetAllForUrl_Name = 1443268209;
// The 333303379 value is based on sha256(salt + "RestrictedCookieManager2").
constexpr uint32_t kRestrictedCookieManager_SetCanonicalCookie_Name = 333303379;
// The 1801518492 value is based on sha256(salt + "RestrictedCookieManager3").
constexpr uint32_t kRestrictedCookieManager_AddChangeListener_Name = 1801518492;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_