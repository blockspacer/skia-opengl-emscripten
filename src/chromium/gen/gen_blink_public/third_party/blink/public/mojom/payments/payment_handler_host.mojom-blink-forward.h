// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_BLINK_FORWARD_H_

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
}  // namespace payments
}  // namespace mojom


namespace payments {
namespace mojom {
namespace blink {
class PaymentHandlerMethodData;
using PaymentHandlerMethodDataPtr = mojo::InlinedStructPtr<PaymentHandlerMethodData>;

class PaymentHandlerModifier;
using PaymentHandlerModifierPtr = mojo::StructPtr<PaymentHandlerModifier>;

class PaymentMethodChangeResponse;
using PaymentMethodChangeResponsePtr = mojo::StructPtr<PaymentMethodChangeResponse>;

class PaymentHandlerHost;
using PaymentHandlerHostPtr = mojo::InterfacePtr<PaymentHandlerHost>;
using PaymentHandlerHostPtrInfo = mojo::InterfacePtrInfo<PaymentHandlerHost>;
using ThreadSafePaymentHandlerHostPtr =
    mojo::ThreadSafeInterfacePtr<PaymentHandlerHost>;
using PaymentHandlerHostRequest = mojo::InterfaceRequest<PaymentHandlerHost>;
using PaymentHandlerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentHandlerHost>;
using ThreadSafePaymentHandlerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PaymentHandlerHost>;
using PaymentHandlerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentHandlerHost>;
using PaymentHandlerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentHandlerHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_BLINK_FORWARD_H_