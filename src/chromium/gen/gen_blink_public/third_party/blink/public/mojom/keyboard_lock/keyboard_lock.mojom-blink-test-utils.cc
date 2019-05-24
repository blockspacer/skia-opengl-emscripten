// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void KeyboardLockServiceInterceptorForTesting::RequestKeyboardLock(const WTF::Vector<WTF::String>& key_codes, RequestKeyboardLockCallback callback) {
  GetForwardingInterface()->RequestKeyboardLock(std::move(key_codes), std::move(callback));
}
void KeyboardLockServiceInterceptorForTesting::CancelKeyboardLock() {
  GetForwardingInterface()->CancelKeyboardLock();
}
void KeyboardLockServiceInterceptorForTesting::GetKeyboardLayoutMap(GetKeyboardLayoutMapCallback callback) {
  GetForwardingInterface()->GetKeyboardLayoutMap(std::move(callback));
}
KeyboardLockServiceAsyncWaiter::KeyboardLockServiceAsyncWaiter(
    KeyboardLockService* proxy) : proxy_(proxy) {}

KeyboardLockServiceAsyncWaiter::~KeyboardLockServiceAsyncWaiter() = default;

void KeyboardLockServiceAsyncWaiter::RequestKeyboardLock(
    const WTF::Vector<WTF::String>& key_codes, KeyboardLockRequestResult* out_result) {
  base::RunLoop loop;
  proxy_->RequestKeyboardLock(std::move(key_codes),
      base::BindOnce(
          [](base::RunLoop* loop,
             KeyboardLockRequestResult* out_result
,
             KeyboardLockRequestResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void KeyboardLockServiceAsyncWaiter::GetKeyboardLayoutMap(
    GetKeyboardLayoutMapResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->GetKeyboardLayoutMap(
      base::BindOnce(
          [](base::RunLoop* loop,
             GetKeyboardLayoutMapResultPtr* out_result
,
             GetKeyboardLayoutMapResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif