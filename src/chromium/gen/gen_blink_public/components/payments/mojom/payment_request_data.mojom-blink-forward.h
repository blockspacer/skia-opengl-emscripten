// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_FORWARD_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace payments {
namespace mojom {
}  // namespace payments
}  // namespace mojom


namespace payments {
namespace mojom {
namespace blink {
class PaymentAddress;
using PaymentAddressPtr = mojo::StructPtr<PaymentAddress>;

class PaymentCurrencyAmount;
using PaymentCurrencyAmountPtr = mojo::InlinedStructPtr<PaymentCurrencyAmount>;

class PaymentValidationErrors;
using PaymentValidationErrorsPtr = mojo::StructPtr<PaymentValidationErrors>;

class PayerErrors;
using PayerErrorsPtr = mojo::InlinedStructPtr<PayerErrors>;

class AddressErrors;
using AddressErrorsPtr = mojo::StructPtr<AddressErrors>;




}  // namespace blink
}  // namespace mojom
}  // namespace payments

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_FORWARD_H_