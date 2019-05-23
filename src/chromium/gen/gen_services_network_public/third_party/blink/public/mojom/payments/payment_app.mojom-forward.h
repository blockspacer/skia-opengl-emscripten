// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_FORWARD_H_

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
class PaymentInstrumentDataView;

class CanMakePaymentEventDataDataView;

class PaymentRequestEventDataDataView;

class PaymentHandlerResponseDataView;


enum class PaymentHandlerStatus : int32_t;
class PaymentInstrument;
using PaymentInstrumentPtr = mojo::StructPtr<PaymentInstrument>;

class CanMakePaymentEventData;
using CanMakePaymentEventDataPtr = mojo::StructPtr<CanMakePaymentEventData>;

class PaymentRequestEventData;
using PaymentRequestEventDataPtr = mojo::StructPtr<PaymentRequestEventData>;

class PaymentHandlerResponse;
using PaymentHandlerResponsePtr = mojo::InlinedStructPtr<PaymentHandlerResponse>;

class PaymentManager;
using PaymentManagerPtr = mojo::InterfacePtr<PaymentManager>;
using PaymentManagerPtrInfo = mojo::InterfacePtrInfo<PaymentManager>;
using ThreadSafePaymentManagerPtr =
    mojo::ThreadSafeInterfacePtr<PaymentManager>;
using PaymentManagerRequest = mojo::InterfaceRequest<PaymentManager>;
using PaymentManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentManager>;
using ThreadSafePaymentManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PaymentManager>;
using PaymentManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentManager>;
using PaymentManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentManager>;

class PaymentHandlerResponseCallback;
using PaymentHandlerResponseCallbackPtr = mojo::InterfacePtr<PaymentHandlerResponseCallback>;
using PaymentHandlerResponseCallbackPtrInfo = mojo::InterfacePtrInfo<PaymentHandlerResponseCallback>;
using ThreadSafePaymentHandlerResponseCallbackPtr =
    mojo::ThreadSafeInterfacePtr<PaymentHandlerResponseCallback>;
using PaymentHandlerResponseCallbackRequest = mojo::InterfaceRequest<PaymentHandlerResponseCallback>;
using PaymentHandlerResponseCallbackAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentHandlerResponseCallback>;
using ThreadSafePaymentHandlerResponseCallbackAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PaymentHandlerResponseCallback>;
using PaymentHandlerResponseCallbackAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentHandlerResponseCallback>;
using PaymentHandlerResponseCallbackAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentHandlerResponseCallback>;




}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_FORWARD_H_