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


#include "third_party/blink/public/mojom/payments/payment_app.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/payments/mojom/payment_request_data.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom.h"
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "third_party/blink/public/common/manifest/manifest_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace payments {
namespace mojom {


void PaymentManagerInterceptorForTesting::Init(const GURL& context_url, const std::string& service_worker_scope) {
  GetForwardingInterface()->Init(std::move(context_url), std::move(service_worker_scope));
}
void PaymentManagerInterceptorForTesting::DeletePaymentInstrument(const std::string& instrument_key, DeletePaymentInstrumentCallback callback) {
  GetForwardingInterface()->DeletePaymentInstrument(std::move(instrument_key), std::move(callback));
}
void PaymentManagerInterceptorForTesting::GetPaymentInstrument(const std::string& instrument_key, GetPaymentInstrumentCallback callback) {
  GetForwardingInterface()->GetPaymentInstrument(std::move(instrument_key), std::move(callback));
}
void PaymentManagerInterceptorForTesting::KeysOfPaymentInstruments(KeysOfPaymentInstrumentsCallback callback) {
  GetForwardingInterface()->KeysOfPaymentInstruments(std::move(callback));
}
void PaymentManagerInterceptorForTesting::HasPaymentInstrument(const std::string& instrument_key, HasPaymentInstrumentCallback callback) {
  GetForwardingInterface()->HasPaymentInstrument(std::move(instrument_key), std::move(callback));
}
void PaymentManagerInterceptorForTesting::SetPaymentInstrument(const std::string& instrument_key, PaymentInstrumentPtr instrument, SetPaymentInstrumentCallback callback) {
  GetForwardingInterface()->SetPaymentInstrument(std::move(instrument_key), std::move(instrument), std::move(callback));
}
void PaymentManagerInterceptorForTesting::ClearPaymentInstruments(ClearPaymentInstrumentsCallback callback) {
  GetForwardingInterface()->ClearPaymentInstruments(std::move(callback));
}
void PaymentManagerInterceptorForTesting::SetUserHint(const std::string& user_hint) {
  GetForwardingInterface()->SetUserHint(std::move(user_hint));
}
PaymentManagerAsyncWaiter::PaymentManagerAsyncWaiter(
    PaymentManager* proxy) : proxy_(proxy) {}

PaymentManagerAsyncWaiter::~PaymentManagerAsyncWaiter() = default;

void PaymentManagerAsyncWaiter::DeletePaymentInstrument(
    const std::string& instrument_key, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->DeletePaymentInstrument(std::move(instrument_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::GetPaymentInstrument(
    const std::string& instrument_key, PaymentInstrumentPtr* out_instrument, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->GetPaymentInstrument(std::move(instrument_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentInstrumentPtr* out_instrument
,
             PaymentHandlerStatus* out_status
,
             PaymentInstrumentPtr instrument,
             PaymentHandlerStatus status) {*out_instrument = std::move(instrument);*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_instrument,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::KeysOfPaymentInstruments(
    std::vector<std::string>* out_keys, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->KeysOfPaymentInstruments(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::string>* out_keys
,
             PaymentHandlerStatus* out_status
,
             const std::vector<std::string>& keys,
             PaymentHandlerStatus status) {*out_keys = std::move(keys);*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_keys,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::HasPaymentInstrument(
    const std::string& instrument_key, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->HasPaymentInstrument(std::move(instrument_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::SetPaymentInstrument(
    const std::string& instrument_key, PaymentInstrumentPtr instrument, PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->SetPaymentInstrument(std::move(instrument_key),std::move(instrument),
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void PaymentManagerAsyncWaiter::ClearPaymentInstruments(
    PaymentHandlerStatus* out_status) {
  base::RunLoop loop;
  proxy_->ClearPaymentInstruments(
      base::BindOnce(
          [](base::RunLoop* loop,
             PaymentHandlerStatus* out_status
,
             PaymentHandlerStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}



void PaymentHandlerResponseCallbackInterceptorForTesting::OnResponseForAbortPayment(bool payment_aborted) {
  GetForwardingInterface()->OnResponseForAbortPayment(std::move(payment_aborted));
}
void PaymentHandlerResponseCallbackInterceptorForTesting::OnResponseForCanMakePayment(bool can_make_payment) {
  GetForwardingInterface()->OnResponseForCanMakePayment(std::move(can_make_payment));
}
void PaymentHandlerResponseCallbackInterceptorForTesting::OnResponseForPaymentRequest(PaymentHandlerResponsePtr response) {
  GetForwardingInterface()->OnResponseForPaymentRequest(std::move(response));
}
PaymentHandlerResponseCallbackAsyncWaiter::PaymentHandlerResponseCallbackAsyncWaiter(
    PaymentHandlerResponseCallback* proxy) : proxy_(proxy) {}

PaymentHandlerResponseCallbackAsyncWaiter::~PaymentHandlerResponseCallbackAsyncWaiter() = default;






}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif