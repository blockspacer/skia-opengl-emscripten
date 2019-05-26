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


#include "third_party/blink/public/mojom/idle/idle_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void IdleMonitorInterceptorForTesting::Update(IdleStatePtr state) {
  GetForwardingInterface()->Update(std::move(state));
}
IdleMonitorAsyncWaiter::IdleMonitorAsyncWaiter(
    IdleMonitor* proxy) : proxy_(proxy) {}

IdleMonitorAsyncWaiter::~IdleMonitorAsyncWaiter() = default;




void IdleManagerInterceptorForTesting::AddMonitor(base::TimeDelta threshold, IdleMonitorPtr monitor, AddMonitorCallback callback) {
  GetForwardingInterface()->AddMonitor(std::move(threshold), std::move(monitor), std::move(callback));
}
IdleManagerAsyncWaiter::IdleManagerAsyncWaiter(
    IdleManager* proxy) : proxy_(proxy) {}

IdleManagerAsyncWaiter::~IdleManagerAsyncWaiter() = default;

void IdleManagerAsyncWaiter::AddMonitor(
    base::TimeDelta threshold, IdleMonitorPtr monitor, IdleStatePtr* out_state) {
  base::RunLoop loop;
  proxy_->AddMonitor(std::move(threshold),std::move(monitor),
      base::BindOnce(
          [](base::RunLoop* loop,
             IdleStatePtr* out_state
,
             IdleStatePtr state) {*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_state));
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