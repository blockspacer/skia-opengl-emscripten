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


#include "services/ws/public/mojom/remoting_event_injector.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_JUMBO_H_
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace ws {
namespace mojom {


void RemotingEventInjectorInterceptorForTesting::MoveCursorToLocationInPixels(const gfx::PointF& location) {
  GetForwardingInterface()->MoveCursorToLocationInPixels(std::move(location));
}
void RemotingEventInjectorInterceptorForTesting::InjectMousePressOrRelease(InjectedMouseButtonType button, bool down) {
  GetForwardingInterface()->InjectMousePressOrRelease(std::move(button), std::move(down));
}
void RemotingEventInjectorInterceptorForTesting::InjectMouseWheelInPixels(int32_t delta_x, int32_t delta_y) {
  GetForwardingInterface()->InjectMouseWheelInPixels(std::move(delta_x), std::move(delta_y));
}
void RemotingEventInjectorInterceptorForTesting::InjectKeyEvent(int32_t native_key_code, bool down, bool suppress_auto_repeat) {
  GetForwardingInterface()->InjectKeyEvent(std::move(native_key_code), std::move(down), std::move(suppress_auto_repeat));
}
RemotingEventInjectorAsyncWaiter::RemotingEventInjectorAsyncWaiter(
    RemotingEventInjector* proxy) : proxy_(proxy) {}

RemotingEventInjectorAsyncWaiter::~RemotingEventInjectorAsyncWaiter() = default;






}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif