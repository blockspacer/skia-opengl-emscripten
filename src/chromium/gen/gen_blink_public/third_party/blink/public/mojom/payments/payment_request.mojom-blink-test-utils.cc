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


#include "third_party/blink/public/mojom/payments/payment_request.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "components/payments/mojom/payment_request_data.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_JUMBO_H_
#endif


namespace payments {
namespace mojom {
namespace blink {


void PaymentRequestClientInterceptorForTesting::OnPaymentMethodChange(const WTF::String& method_name, const WTF::String& stringified_details) {
  GetForwardingInterface()->OnPaymentMethodChange(std::move(method_name), std::move(stringified_details));
}
void PaymentRequestClientInterceptorForTesting::OnShippingAddressChange(::payments::mojom::blink::PaymentAddressPtr address) {
  GetForwardingInterface()->OnShippingAddressChange(std::move(address));
}
void PaymentRequestClientInterceptorForTesting::OnShippingOptionChange(const WTF::String& shipping_option_id) {
  GetForwardingInterface()->OnShippingOptionChange(std::move(shipping_option_id));
}
void PaymentRequestClientInterceptorForTesting::OnPayerDetailChange(PayerDetailPtr detail) {
  GetForwardingInterface()->OnPayerDetailChange(std::move(detail));
}
void PaymentRequestClientInterceptorForTesting::OnPaymentResponse(PaymentResponsePtr response) {
  GetForwardingInterface()->OnPaymentResponse(std::move(response));
}
void PaymentRequestClientInterceptorForTesting::OnError(PaymentErrorReason error) {
  GetForwardingInterface()->OnError(std::move(error));
}
void PaymentRequestClientInterceptorForTesting::OnComplete() {
  GetForwardingInterface()->OnComplete();
}
void PaymentRequestClientInterceptorForTesting::OnAbort(bool aborted_successfully) {
  GetForwardingInterface()->OnAbort(std::move(aborted_successfully));
}
void PaymentRequestClientInterceptorForTesting::OnCanMakePayment(CanMakePaymentQueryResult result) {
  GetForwardingInterface()->OnCanMakePayment(std::move(result));
}
void PaymentRequestClientInterceptorForTesting::OnHasEnrolledInstrument(HasEnrolledInstrumentQueryResult result) {
  GetForwardingInterface()->OnHasEnrolledInstrument(std::move(result));
}
void PaymentRequestClientInterceptorForTesting::WarnNoFavicon() {
  GetForwardingInterface()->WarnNoFavicon();
}
PaymentRequestClientAsyncWaiter::PaymentRequestClientAsyncWaiter(
    PaymentRequestClient* proxy) : proxy_(proxy) {}

PaymentRequestClientAsyncWaiter::~PaymentRequestClientAsyncWaiter() = default;




void PaymentRequestInterceptorForTesting::Init(PaymentRequestClientPtr client, WTF::Vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) {
  GetForwardingInterface()->Init(std::move(client), std::move(method_data), std::move(details), std::move(options));
}
void PaymentRequestInterceptorForTesting::Show(bool is_user_gesture, bool wait_for_updated_details) {
  GetForwardingInterface()->Show(std::move(is_user_gesture), std::move(wait_for_updated_details));
}
void PaymentRequestInterceptorForTesting::UpdateWith(PaymentDetailsPtr details) {
  GetForwardingInterface()->UpdateWith(std::move(details));
}
void PaymentRequestInterceptorForTesting::NoUpdatedPaymentDetails() {
  GetForwardingInterface()->NoUpdatedPaymentDetails();
}
void PaymentRequestInterceptorForTesting::Abort() {
  GetForwardingInterface()->Abort();
}
void PaymentRequestInterceptorForTesting::Complete(PaymentComplete result) {
  GetForwardingInterface()->Complete(std::move(result));
}
void PaymentRequestInterceptorForTesting::Retry(::payments::mojom::blink::PaymentValidationErrorsPtr errors) {
  GetForwardingInterface()->Retry(std::move(errors));
}
void PaymentRequestInterceptorForTesting::CanMakePayment(bool legacy_mode) {
  GetForwardingInterface()->CanMakePayment(std::move(legacy_mode));
}
void PaymentRequestInterceptorForTesting::HasEnrolledInstrument(bool per_method_quota) {
  GetForwardingInterface()->HasEnrolledInstrument(std::move(per_method_quota));
}
PaymentRequestAsyncWaiter::PaymentRequestAsyncWaiter(
    PaymentRequest* proxy) : proxy_(proxy) {}

PaymentRequestAsyncWaiter::~PaymentRequestAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif