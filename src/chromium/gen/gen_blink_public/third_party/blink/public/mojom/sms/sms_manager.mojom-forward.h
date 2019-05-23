// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_FORWARD_H_

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




namespace blink {
namespace mojom {
class SmsMessageDataView;


enum class SmsStatus : int32_t;
class SmsMessage;
using SmsMessagePtr = mojo::InlinedStructPtr<SmsMessage>;

class SmsManager;
using SmsManagerPtr = mojo::InterfacePtr<SmsManager>;
using SmsManagerPtrInfo = mojo::InterfacePtrInfo<SmsManager>;
using ThreadSafeSmsManagerPtr =
    mojo::ThreadSafeInterfacePtr<SmsManager>;
using SmsManagerRequest = mojo::InterfaceRequest<SmsManager>;
using SmsManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SmsManager>;
using ThreadSafeSmsManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SmsManager>;
using SmsManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SmsManager>;
using SmsManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SmsManager>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_FORWARD_H_