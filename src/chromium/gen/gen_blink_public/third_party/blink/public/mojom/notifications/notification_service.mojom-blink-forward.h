// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class PersistentNotificationError : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_PersistentNotificationError_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PersistentNotificationError> {
  using Hash = blink_mojom_internal_PersistentNotificationError_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using PersistentNotificationError = PersistentNotificationError;  // Alias for definition in the parent namespace.
class NonPersistentNotificationListener;
using NonPersistentNotificationListenerPtr = mojo::InterfacePtr<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerPtrInfo = mojo::InterfacePtrInfo<NonPersistentNotificationListener>;
using ThreadSafeNonPersistentNotificationListenerPtr =
    mojo::ThreadSafeInterfacePtr<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerRequest = mojo::InterfaceRequest<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<NonPersistentNotificationListener>;
using ThreadSafeNonPersistentNotificationListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NonPersistentNotificationListener>;
using NonPersistentNotificationListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NonPersistentNotificationListener>;

class NotificationService;
using NotificationServicePtr = mojo::InterfacePtr<NotificationService>;
using NotificationServicePtrInfo = mojo::InterfacePtrInfo<NotificationService>;
using ThreadSafeNotificationServicePtr =
    mojo::ThreadSafeInterfacePtr<NotificationService>;
using NotificationServiceRequest = mojo::InterfaceRequest<NotificationService>;
using NotificationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<NotificationService>;
using ThreadSafeNotificationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NotificationService>;
using NotificationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NotificationService>;
using NotificationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NotificationService>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_FORWARD_H_