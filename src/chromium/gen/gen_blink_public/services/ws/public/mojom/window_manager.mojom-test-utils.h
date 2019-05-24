// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/window_manager.mojom.h"


namespace ws {
namespace mojom {


class  WindowManagerInterceptorForTesting : public WindowManager {
  virtual WindowManager* GetForwardingInterface() = 0;
};
class  WindowManagerAsyncWaiter {
 public:
  explicit WindowManagerAsyncWaiter(WindowManager* proxy);
  ~WindowManagerAsyncWaiter();

 private:
  WindowManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_TEST_UTILS_H_