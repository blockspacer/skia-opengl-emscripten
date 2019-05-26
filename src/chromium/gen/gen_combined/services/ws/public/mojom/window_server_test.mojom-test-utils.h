// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/window_server_test.mojom.h"


namespace ws {
namespace mojom {


class  WindowServerTestInterceptorForTesting : public WindowServerTest {
  virtual WindowServerTest* GetForwardingInterface() = 0;
  void EnsureClientHasDrawnWindow(const std::string& client_name, EnsureClientHasDrawnWindowCallback callback) override;
};
class  WindowServerTestAsyncWaiter {
 public:
  explicit WindowServerTestAsyncWaiter(WindowServerTest* proxy);
  ~WindowServerTestAsyncWaiter();
  void EnsureClientHasDrawnWindow(
      const std::string& client_name, bool* out_success);

 private:
  WindowServerTest* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowServerTestAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_TEST_UTILS_H_