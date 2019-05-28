// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 642725703 value is based on sha256(salt + "PermissionObserver1").
constexpr uint32_t kPermissionObserver_OnPermissionStatusChange_Name = 642725703;
// The 1751383447 value is based on sha256(salt + "PermissionService1").
constexpr uint32_t kPermissionService_HasPermission_Name = 1751383447;
// The 1630399486 value is based on sha256(salt + "PermissionService2").
constexpr uint32_t kPermissionService_RequestPermission_Name = 1630399486;
// The 1291109403 value is based on sha256(salt + "PermissionService3").
constexpr uint32_t kPermissionService_RequestPermissions_Name = 1291109403;
// The 101037080 value is based on sha256(salt + "PermissionService4").
constexpr uint32_t kPermissionService_RevokePermission_Name = 101037080;
// The 938060142 value is based on sha256(salt + "PermissionService5").
constexpr uint32_t kPermissionService_AddPermissionObserver_Name = 938060142;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_