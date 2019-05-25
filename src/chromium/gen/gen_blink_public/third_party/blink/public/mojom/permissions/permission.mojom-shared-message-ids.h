// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 560216712 value is based on sha256(salt + "PermissionObserver1").
constexpr uint32_t kPermissionObserver_OnPermissionStatusChange_Name = 560216712;
// The 551443720 value is based on sha256(salt + "PermissionService1").
constexpr uint32_t kPermissionService_HasPermission_Name = 551443720;
// The 892763706 value is based on sha256(salt + "PermissionService2").
constexpr uint32_t kPermissionService_RequestPermission_Name = 892763706;
// The 101797188 value is based on sha256(salt + "PermissionService3").
constexpr uint32_t kPermissionService_RequestPermissions_Name = 101797188;
// The 1003750104 value is based on sha256(salt + "PermissionService4").
constexpr uint32_t kPermissionService_RevokePermission_Name = 1003750104;
// The 1139640687 value is based on sha256(salt + "PermissionService5").
constexpr uint32_t kPermissionService_AddPermissionObserver_Name = 1139640687;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_