// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1608057314 value is based on sha256(salt + "KeyboardLockService1").
constexpr uint32_t kKeyboardLockService_RequestKeyboardLock_Name = 1608057314;
// The 1986634332 value is based on sha256(salt + "KeyboardLockService2").
constexpr uint32_t kKeyboardLockService_CancelKeyboardLock_Name = 1986634332;
// The 1883693847 value is based on sha256(salt + "KeyboardLockService3").
constexpr uint32_t kKeyboardLockService_GetKeyboardLayoutMap_Name = 1883693847;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_