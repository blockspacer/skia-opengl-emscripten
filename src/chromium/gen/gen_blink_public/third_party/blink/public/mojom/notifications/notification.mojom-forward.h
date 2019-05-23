// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class NotificationActionDataView;

class NotificationDataDataView;

class NotificationResourcesDataView;


enum class NotificationDirection : int32_t;

enum class NotificationActionType : int32_t;
class NotificationAction;
using NotificationActionPtr = mojo::StructPtr<NotificationAction>;

class NotificationData;
using NotificationDataPtr = mojo::StructPtr<NotificationData>;

class NotificationResources;
using NotificationResourcesPtr = mojo::StructPtr<NotificationResources>;




}  // namespace mojom
}  // namespace blink
#include "third_party/blink/public/common/notifications/notification_resources.h"
#include "third_party/blink/public/common/notifications/platform_notification_data.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_FORWARD_H_