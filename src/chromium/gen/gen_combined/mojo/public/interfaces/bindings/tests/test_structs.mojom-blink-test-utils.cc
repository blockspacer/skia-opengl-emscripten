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


#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-blink.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/bindings/tests/rect_blink_traits.h"
#include "mojo/public/cpp/bindings/tests/shared_rect_traits.h"
#endif


namespace mojo {
namespace test {
namespace blink {


void SomeInterfaceInterceptorForTesting::SomeMethod(RectPairPtr pair, SomeMethodCallback callback) {
  GetForwardingInterface()->SomeMethod(std::move(pair), std::move(callback));
}
SomeInterfaceAsyncWaiter::SomeInterfaceAsyncWaiter(
    SomeInterface* proxy) : proxy_(proxy) {}

SomeInterfaceAsyncWaiter::~SomeInterfaceAsyncWaiter() = default;

void SomeInterfaceAsyncWaiter::SomeMethod(
    RectPairPtr pair, RectPairPtr* out_other_pair) {
  base::RunLoop loop;
  proxy_->SomeMethod(std::move(pair),
      base::BindOnce(
          [](base::RunLoop* loop,
             RectPairPtr* out_other_pair
,
             RectPairPtr other_pair) {*out_other_pair = std::move(other_pair);
            loop->Quit();
          },
          &loop,
          out_other_pair));
  loop.Run();
}





}  // namespace blink
}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif