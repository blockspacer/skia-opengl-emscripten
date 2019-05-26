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


#include "services/ws/public/mojom/window_server_test.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "ui/events/mojo/event.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_JUMBO_H_
#endif


namespace ws {
namespace mojom {


void WindowServerTestInterceptorForTesting::EnsureClientHasDrawnWindow(const std::string& client_name, EnsureClientHasDrawnWindowCallback callback) {
  GetForwardingInterface()->EnsureClientHasDrawnWindow(std::move(client_name), std::move(callback));
}
WindowServerTestAsyncWaiter::WindowServerTestAsyncWaiter(
    WindowServerTest* proxy) : proxy_(proxy) {}

WindowServerTestAsyncWaiter::~WindowServerTestAsyncWaiter() = default;

void WindowServerTestAsyncWaiter::EnsureClientHasDrawnWindow(
    const std::string& client_name, bool* out_success) {
  base::RunLoop loop;
  proxy_->EnsureClientHasDrawnWindow(std::move(client_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}





}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif