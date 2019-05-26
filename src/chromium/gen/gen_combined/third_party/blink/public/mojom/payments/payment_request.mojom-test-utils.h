// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/payments/payment_request.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace payments {
namespace mojom {


class BLINK_COMMON_EXPORT PaymentRequestClientInterceptorForTesting : public PaymentRequestClient {
  virtual PaymentRequestClient* GetForwardingInterface() = 0;
  void OnPaymentMethodChange(const std::string& method_name, const std::string& stringified_details) override;
  void OnShippingAddressChange(::payments::mojom::PaymentAddressPtr address) override;
  void OnShippingOptionChange(const std::string& shipping_option_id) override;
  void OnPayerDetailChange(PayerDetailPtr detail) override;
  void OnPaymentResponse(PaymentResponsePtr response) override;
  void OnError(PaymentErrorReason error) override;
  void OnComplete() override;
  void OnAbort(bool aborted_successfully) override;
  void OnCanMakePayment(CanMakePaymentQueryResult result) override;
  void OnHasEnrolledInstrument(HasEnrolledInstrumentQueryResult result) override;
  void WarnNoFavicon() override;
};
class BLINK_COMMON_EXPORT PaymentRequestClientAsyncWaiter {
 public:
  explicit PaymentRequestClientAsyncWaiter(PaymentRequestClient* proxy);
  ~PaymentRequestClientAsyncWaiter();

 private:
  PaymentRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PaymentRequestClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT PaymentRequestInterceptorForTesting : public PaymentRequest {
  virtual PaymentRequest* GetForwardingInterface() = 0;
  void Init(PaymentRequestClientPtr client, std::vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) override;
  void Show(bool is_user_gesture, bool wait_for_updated_details) override;
  void UpdateWith(PaymentDetailsPtr details) override;
  void NoUpdatedPaymentDetails() override;
  void Abort() override;
  void Complete(PaymentComplete result) override;
  void Retry(::payments::mojom::PaymentValidationErrorsPtr errors) override;
  void CanMakePayment(bool legacy_mode) override;
  void HasEnrolledInstrument(bool per_method_quota) override;
};
class BLINK_COMMON_EXPORT PaymentRequestAsyncWaiter {
 public:
  explicit PaymentRequestAsyncWaiter(PaymentRequest* proxy);
  ~PaymentRequestAsyncWaiter();

 private:
  PaymentRequest* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PaymentRequestAsyncWaiter);
};




}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_TEST_UTILS_H_