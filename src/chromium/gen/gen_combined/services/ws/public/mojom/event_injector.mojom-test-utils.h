// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/event_injector.mojom.h"


namespace ws {
namespace mojom {


class  EventInjectorInterceptorForTesting : public EventInjector {
  virtual EventInjector* GetForwardingInterface() = 0;
  void InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) override;
  void InjectEventNoAck(int64_t display_id, std::unique_ptr<ui::Event> event) override;
  void InjectEventNoAckNoRewriters(int64_t display_id, std::unique_ptr<ui::Event> event) override;
};
class  EventInjectorAsyncWaiter {
 public:
  explicit EventInjectorAsyncWaiter(EventInjector* proxy);
  ~EventInjectorAsyncWaiter();
  void InjectEvent(
      int64_t display_id, std::unique_ptr<ui::Event> event, bool* out_result);

 private:
  EventInjector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EventInjectorAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_TEST_UTILS_H_