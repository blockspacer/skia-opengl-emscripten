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


#include "mojo/public/cpp/test/module.test-mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_JUMBO_H_
#endif


namespace test_module {


void InterfaceInterceptorForTesting::DoSomething() {
  GetForwardingInterface()->DoSomething();
}
void InterfaceInterceptorForTesting::DoSomethingElse(StructPtr s, DoSomethingElseCallback callback) {
  GetForwardingInterface()->DoSomethingElse(std::move(s), std::move(callback));
}
InterfaceAsyncWaiter::InterfaceAsyncWaiter(
    Interface* proxy) : proxy_(proxy) {}

InterfaceAsyncWaiter::~InterfaceAsyncWaiter() = default;

void InterfaceAsyncWaiter::DoSomethingElse(
    StructPtr s, GlobalEnum* out_e) {
  base::RunLoop loop;
  proxy_->DoSomethingElse(std::move(s),
      base::BindOnce(
          [](base::RunLoop* loop,
             GlobalEnum* out_e
,
             GlobalEnum e) {*out_e = std::move(e);
            loop->Quit();
          },
          &loop,
          out_e));
  loop.Run();
}





}  // namespace test_module

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif