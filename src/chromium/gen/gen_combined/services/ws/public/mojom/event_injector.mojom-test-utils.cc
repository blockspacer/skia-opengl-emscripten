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


#include "services/ws/public/mojom/event_injector.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "ui/events/mojo/event.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif


namespace ws {
namespace mojom {


void EventInjectorInterceptorForTesting::InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) {
  GetForwardingInterface()->InjectEvent(std::move(display_id), std::move(event), std::move(callback));
}
void EventInjectorInterceptorForTesting::InjectEventNoAck(int64_t display_id, std::unique_ptr<ui::Event> event) {
  GetForwardingInterface()->InjectEventNoAck(std::move(display_id), std::move(event));
}
void EventInjectorInterceptorForTesting::InjectEventNoAckNoRewriters(int64_t display_id, std::unique_ptr<ui::Event> event) {
  GetForwardingInterface()->InjectEventNoAckNoRewriters(std::move(display_id), std::move(event));
}
EventInjectorAsyncWaiter::EventInjectorAsyncWaiter(
    EventInjector* proxy) : proxy_(proxy) {}

EventInjectorAsyncWaiter::~EventInjectorAsyncWaiter() = default;

void EventInjectorAsyncWaiter::InjectEvent(
    int64_t display_id, std::unique_ptr<ui::Event> event, bool* out_result) {
  base::RunLoop loop;
  proxy_->InjectEvent(std::move(display_id),std::move(event),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif