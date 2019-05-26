// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 2006870261 value is based on sha256(salt + "KeyboardLockService1").
constexpr uint32_t kKeyboardLockService_RequestKeyboardLock_Name = 2006870261;
// The 290809039 value is based on sha256(salt + "KeyboardLockService2").
constexpr uint32_t kKeyboardLockService_CancelKeyboardLock_Name = 290809039;
// The 1701820140 value is based on sha256(salt + "KeyboardLockService3").
constexpr uint32_t kKeyboardLockService_GetKeyboardLayoutMap_Name = 1701820140;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_