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


#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/payments/mojom/payment_request_data.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_JUMBO_H_
#endif


namespace payments {
namespace mojom {


void PaymentHandlerHostInterceptorForTesting::ChangePaymentMethod(PaymentHandlerMethodDataPtr method_data, ChangePaymentMethodCallback callback) {
  GetForwardingInterface()->ChangePaymentMethod(std::move(method_data), std::move(callback));
}
PaymentHandlerHostAsyncWaiter::PaymentHandlerHostAsyncWaiter(
    PaymentHandlerHost* proxy) : proxy_(proxy) {}

PaymentHandlerHostAsyncWaiter::~PaymentHandlerHostAsyncWaiter() = default;

void PaymentHandlerHostAsyncWaiter::ChangePaymentMethod(
    PaymentHandlerMethodDataPtr method_data, PaymentMethodChangeResponsePtr* out_response_data) {
  base::RunLoop loop;
  proxy_->ChangePaymentMethod(std::move(method_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentMethodChangeResponsePtr* out_response_data
,
             PaymentMethodChangeResponsePtr response_data) {*out_response_data = std::move(response_data);
            loop->Quit();
          },
          &loop,
          out_response_data));
  loop.Run();
}





}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif