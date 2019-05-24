// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT KeyboardLockServiceInterceptorForTesting : public KeyboardLockService {
  virtual KeyboardLockService* GetForwardingInterface() = 0;
  void RequestKeyboardLock(const WTF::Vector<WTF::String>& key_codes, RequestKeyboardLockCallback callback) override;
  void CancelKeyboardLock() override;
  void GetKeyboardLayoutMap(GetKeyboardLayoutMapCallback callback) override;
};
class PLATFORM_EXPORT KeyboardLockServiceAsyncWaiter {
 public:
  explicit KeyboardLockServiceAsyncWaiter(KeyboardLockService* proxy);
  ~KeyboardLockServiceAsyncWaiter();
  void RequestKeyboardLock(
      const WTF::Vector<WTF::String>& key_codes, KeyboardLockRequestResult* out_result);
  void GetKeyboardLayoutMap(
      GetKeyboardLayoutMapResultPtr* out_result);

 private:
  KeyboardLockService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(KeyboardLockServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_TEST_UTILS_H_