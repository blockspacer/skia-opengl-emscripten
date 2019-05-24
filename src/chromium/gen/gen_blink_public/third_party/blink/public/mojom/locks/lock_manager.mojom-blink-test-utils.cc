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


#include "third_party/blink/public/mojom/locks/lock_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


LockHandleAsyncWaiter::LockHandleAsyncWaiter(
    LockHandle* proxy) : proxy_(proxy) {}

LockHandleAsyncWaiter::~LockHandleAsyncWaiter() = default;




void LockRequestInterceptorForTesting::Granted(LockHandleAssociatedPtrInfo lock_handle) {
  GetForwardingInterface()->Granted(std::move(lock_handle));
}
void LockRequestInterceptorForTesting::Failed() {
  GetForwardingInterface()->Failed();
}
void LockRequestInterceptorForTesting::Abort(const WTF::String& reason) {
  GetForwardingInterface()->Abort(std::move(reason));
}
LockRequestAsyncWaiter::LockRequestAsyncWaiter(
    LockRequest* proxy) : proxy_(proxy) {}

LockRequestAsyncWaiter::~LockRequestAsyncWaiter() = default;




void LockManagerInterceptorForTesting::RequestLock(const WTF::String& name, LockMode mode, LockManager::WaitMode wait, LockRequestAssociatedPtrInfo request) {
  GetForwardingInterface()->RequestLock(std::move(name), std::move(mode), std::move(wait), std::move(request));
}
void LockManagerInterceptorForTesting::QueryState(QueryStateCallback callback) {
  GetForwardingInterface()->QueryState(std::move(callback));
}
LockManagerAsyncWaiter::LockManagerAsyncWaiter(
    LockManager* proxy) : proxy_(proxy) {}

LockManagerAsyncWaiter::~LockManagerAsyncWaiter() = default;

void LockManagerAsyncWaiter::QueryState(
    WTF::Vector<LockInfoPtr>* out_requested, WTF::Vector<LockInfoPtr>* out_held) {
  base::RunLoop loop;
  proxy_->QueryState(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<LockInfoPtr>* out_requested
,
             WTF::Vector<LockInfoPtr>* out_held
,
             WTF::Vector<LockInfoPtr> requested,
             WTF::Vector<LockInfoPtr> held) {*out_requested = std::move(requested);*out_held = std::move(held);
            loop->Quit();
          },
          &loop,
          out_requested,
          out_held));
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