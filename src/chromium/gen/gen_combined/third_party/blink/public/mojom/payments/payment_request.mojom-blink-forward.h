// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace payments {
namespace mojom {

enum class PaymentErrorReason : int32_t;

enum class CanMakePaymentQueryResult : int32_t;

enum class HasEnrolledInstrumentQueryResult : int32_t;

enum class AndroidPayEnvironment : int32_t;

enum class BasicCardNetwork : int32_t;

enum class BasicCardType : int32_t;

enum class PaymentShippingType : int32_t;

enum class PaymentComplete : int32_t;
}  // namespace payments
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct payments_mojom_internal_PaymentErrorReason_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::PaymentErrorReason> {
  using Hash = payments_mojom_internal_PaymentErrorReason_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_CanMakePaymentQueryResult_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::CanMakePaymentQueryResult> {
  using Hash = payments_mojom_internal_CanMakePaymentQueryResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_HasEnrolledInstrumentQueryResult_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::HasEnrolledInstrumentQueryResult> {
  using Hash = payments_mojom_internal_HasEnrolledInstrumentQueryResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_AndroidPayEnvironment_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::AndroidPayEnvironment> {
  using Hash = payments_mojom_internal_AndroidPayEnvironment_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_BasicCardNetwork_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::BasicCardNetwork> {
  using Hash = payments_mojom_internal_BasicCardNetwork_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_BasicCardType_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::BasicCardType> {
  using Hash = payments_mojom_internal_BasicCardType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_PaymentShippingType_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::PaymentShippingType> {
  using Hash = payments_mojom_internal_PaymentShippingType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct payments_mojom_internal_PaymentComplete_DataHashFn;

template <>
struct DefaultHash<::payments::mojom::PaymentComplete> {
  using Hash = payments_mojom_internal_PaymentComplete_DataHashFn;
};
}  // namespace WTF


namespace payments {
namespace mojom {
namespace blink {
using PaymentErrorReason = PaymentErrorReason;  // Alias for definition in the parent namespace.
using CanMakePaymentQueryResult = CanMakePaymentQueryResult;  // Alias for definition in the parent namespace.
using HasEnrolledInstrumentQueryResult = HasEnrolledInstrumentQueryResult;  // Alias for definition in the parent namespace.
using AndroidPayEnvironment = AndroidPayEnvironment;  // Alias for definition in the parent namespace.
using BasicCardNetwork = BasicCardNetwork;  // Alias for definition in the parent namespace.
using BasicCardType = BasicCardType;  // Alias for definition in the parent namespace.
using PaymentShippingType = PaymentShippingType;  // Alias for definition in the parent namespace.
using PaymentComplete = PaymentComplete;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_FORWARD_H_