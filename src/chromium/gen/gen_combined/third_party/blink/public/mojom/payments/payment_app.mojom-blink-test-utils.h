// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/payments/payment_app.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace payments {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT PaymentManagerInterceptorForTesting : public PaymentManager {
  virtual PaymentManager* GetForwardingInterface() = 0;
  void Init(const ::blink::KURL& context_url, const WTF::String& service_worker_scope) override;
  void DeletePaymentInstrument(const WTF::String& instrument_key, DeletePaymentInstrumentCallback callback) override;
  void GetPaymentInstrument(const WTF::String& instrument_key, GetPaymentInstrumentCallback callback) override;
  void KeysOfPaymentInstruments(KeysOfPaymentInstrumentsCallback callback) override;
  void HasPaymentInstrument(const WTF::String& instrument_key, HasPaymentInstrumentCallback callback) override;
  void SetPaymentInstrument(const WTF::String& instrument_key, PaymentInstrumentPtr instrument, SetPaymentInstrumentCallback callback) override;
  void ClearPaymentInstruments(ClearPaymentInstrumentsCallback callback) override;
  void SetUserHint(const WTF::String& user_hint) override;
};
class PLATFORM_EXPORT PaymentManagerAsyncWaiter {
 public:
  explicit PaymentManagerAsyncWaiter(PaymentManager* proxy);
  ~PaymentManagerAsyncWaiter();
  void DeletePaymentInstrument(
      const WTF::String& instrument_key, PaymentHandlerStatus* out_status);
  void GetPaymentInstrument(
      const WTF::String& instrument_key, PaymentInstrumentPtr* out_instrument, PaymentHandlerStatus* out_status);
  void KeysOfPaymentInstruments(
      WTF::Vector<WTF::String>* out_keys, PaymentHandlerStatus* out_status);
  void HasPaymentInstrument(
      const WTF::String& instrument_key, PaymentHandlerStatus* out_status);
  void SetPaymentInstrument(
      const WTF::String& instrument_key, PaymentInstrumentPtr instrument, PaymentHandlerStatus* out_status);
  void ClearPaymentInstruments(
      PaymentHandlerStatus* out_status);

 private:
  PaymentManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PaymentManagerAsyncWaiter);
};


class PLATFORM_EXPORT PaymentHandlerResponseCallbackInterceptorForTesting : public PaymentHandlerResponseCallback {
  virtual PaymentHandlerResponseCallback* GetForwardingInterface() = 0;
  void OnResponseForAbortPayment(bool payment_aborted) override;
  void OnResponseForCanMakePayment(bool can_make_payment) override;
  void OnResponseForPaymentRequest(PaymentHandlerResponsePtr response) override;
};
class PLATFORM_EXPORT PaymentHandlerResponseCallbackAsyncWaiter {
 public:
  explicit PaymentHandlerResponseCallbackAsyncWaiter(PaymentHandlerResponseCallback* proxy);
  ~PaymentHandlerResponseCallbackAsyncWaiter();

 private:
  PaymentHandlerResponseCallback* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PaymentHandlerResponseCallbackAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_BLINK_TEST_UTILS_H_