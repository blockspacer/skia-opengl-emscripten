// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/remoting_event_injector.mojom.h"


namespace ws {
namespace mojom {


class  RemotingEventInjectorInterceptorForTesting : public RemotingEventInjector {
  virtual RemotingEventInjector* GetForwardingInterface() = 0;
  void MoveCursorToLocationInPixels(const gfx::PointF& location) override;
  void InjectMousePressOrRelease(InjectedMouseButtonType button, bool down) override;
  void InjectMouseWheelInPixels(int32_t delta_x, int32_t delta_y) override;
  void InjectKeyEvent(int32_t native_key_code, bool down, bool suppress_auto_repeat) override;
};
class  RemotingEventInjectorAsyncWaiter {
 public:
  explicit RemotingEventInjectorAsyncWaiter(RemotingEventInjector* proxy);
  ~RemotingEventInjectorAsyncWaiter();

 private:
  RemotingEventInjector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemotingEventInjectorAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_TEST_UTILS_H_