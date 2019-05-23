// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_FORWARD_H_

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
class PushSubscriptionOptionsDataView;


enum class PushErrorType : int32_t;
class PushSubscriptionOptions;
using PushSubscriptionOptionsPtr = mojo::InlinedStructPtr<PushSubscriptionOptions>;

class PushMessaging;
using PushMessagingPtr = mojo::InterfacePtr<PushMessaging>;
using PushMessagingPtrInfo = mojo::InterfacePtrInfo<PushMessaging>;
using ThreadSafePushMessagingPtr =
    mojo::ThreadSafeInterfacePtr<PushMessaging>;
using PushMessagingRequest = mojo::InterfaceRequest<PushMessaging>;
using PushMessagingAssociatedPtr =
    mojo::AssociatedInterfacePtr<PushMessaging>;
using ThreadSafePushMessagingAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PushMessaging>;
using PushMessagingAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PushMessaging>;
using PushMessagingAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PushMessaging>;




}  // namespace mojom
}  // namespace blink
#include "third_party/blink/public/common/push_messaging/web_push_subscription_options.h"
#include "third_party/blink/public/platform/modules/push_messaging/web_push_error.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_FORWARD_H_