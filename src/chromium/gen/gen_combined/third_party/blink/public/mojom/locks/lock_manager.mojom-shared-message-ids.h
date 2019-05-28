// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 489210216 value is based on sha256(salt + "LockRequest1").
constexpr uint32_t kLockRequest_Granted_Name = 489210216;
// The 1193068872 value is based on sha256(salt + "LockRequest2").
constexpr uint32_t kLockRequest_Failed_Name = 1193068872;
// The 306243247 value is based on sha256(salt + "LockRequest3").
constexpr uint32_t kLockRequest_Abort_Name = 306243247;
// The 431137131 value is based on sha256(salt + "LockManager1").
constexpr uint32_t kLockManager_RequestLock_Name = 431137131;
// The 1515675427 value is based on sha256(salt + "LockManager2").
constexpr uint32_t kLockManager_QueryState_Name = 1515675427;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_