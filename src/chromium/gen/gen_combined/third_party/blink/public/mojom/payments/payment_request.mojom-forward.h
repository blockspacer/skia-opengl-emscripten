// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace payments {
namespace mojom {
class PaymentResponseDataView;

class PayerDetailDataView;

class PaymentItemDataView;

class PaymentShippingOptionDataView;

class PaymentMethodDataDataView;

class PaymentDetailsModifierDataView;

class PaymentDetailsDataView;

class PaymentOptionsDataView;


enum class PaymentErrorReason : int32_t;

enum class CanMakePaymentQueryResult : int32_t;

enum class HasEnrolledInstrumentQueryResult : int32_t;

enum class AndroidPayEnvironment : int32_t;

enum class BasicCardNetwork : int32_t;

enum class BasicCardType : int32_t;

enum class PaymentShippingType : int32_t;

enum class PaymentComplete : int32_t;
class PaymentResponse;
using PaymentResponsePtr = mojo::StructPtr<PaymentResponse>;

class PayerDetail;
using PayerDetailPtr = mojo::InlinedStructPtr<PayerDetail>;

class PaymentItem;
using PaymentItemPtr = mojo::StructPtr<PaymentItem>;

class PaymentShippingOption;
using PaymentShippingOptionPtr = mojo::StructPtr<PaymentShippingOption>;

class PaymentMethodData;
using PaymentMethodDataPtr = mojo::StructPtr<PaymentMethodData>;

class PaymentDetailsModifier;
using PaymentDetailsModifierPtr = mojo::StructPtr<PaymentDetailsModifier>;

class PaymentDetails;
using PaymentDetailsPtr = mojo::StructPtr<PaymentDetails>;

class PaymentOptions;
using PaymentOptionsPtr = mojo::StructPtr<PaymentOptions>;

class PaymentRequestClient;
using PaymentRequestClientPtr = mojo::InterfacePtr<PaymentRequestClient>;
using PaymentRequestClientPtrInfo = mojo::InterfacePtrInfo<PaymentRequestClient>;
using ThreadSafePaymentRequestClientPtr =
    mojo::ThreadSafeInterfacePtr<PaymentRequestClient>;
using PaymentRequestClientRequest = mojo::InterfaceRequest<PaymentRequestClient>;
using PaymentRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentRequestClient>;
using ThreadSafePaymentRequestClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PaymentRequestClient>;
using PaymentRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentRequestClient>;
using PaymentRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentRequestClient>;

class PaymentRequest;
using PaymentRequestPtr = mojo::InterfacePtr<PaymentRequest>;
using PaymentRequestPtrInfo = mojo::InterfacePtrInfo<PaymentRequest>;
using ThreadSafePaymentRequestPtr =
    mojo::ThreadSafeInterfacePtr<PaymentRequest>;
using PaymentRequestRequest = mojo::InterfaceRequest<PaymentRequest>;
using PaymentRequestAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentRequest>;
using ThreadSafePaymentRequestAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PaymentRequest>;
using PaymentRequestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentRequest>;
using PaymentRequestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentRequest>;




}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_FORWARD_H_