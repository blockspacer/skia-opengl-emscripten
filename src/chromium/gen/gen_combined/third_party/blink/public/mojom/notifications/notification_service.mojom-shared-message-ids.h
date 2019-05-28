// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 175937587 value is based on sha256(salt + "NonPersistentNotificationListener1").
constexpr uint32_t kNonPersistentNotificationListener_OnShow_Name = 175937587;
// The 1432238121 value is based on sha256(salt + "NonPersistentNotificationListener2").
constexpr uint32_t kNonPersistentNotificationListener_OnClick_Name = 1432238121;
// The 1994003645 value is based on sha256(salt + "NonPersistentNotificationListener3").
constexpr uint32_t kNonPersistentNotificationListener_OnClose_Name = 1994003645;
// The 1564674663 value is based on sha256(salt + "NotificationService1").
constexpr uint32_t kNotificationService_GetPermissionStatus_Name = 1564674663;
// The 1058161424 value is based on sha256(salt + "NotificationService2").
constexpr uint32_t kNotificationService_DisplayNonPersistentNotification_Name = 1058161424;
// The 1360610986 value is based on sha256(salt + "NotificationService3").
constexpr uint32_t kNotificationService_CloseNonPersistentNotification_Name = 1360610986;
// The 1031437954 value is based on sha256(salt + "NotificationService4").
constexpr uint32_t kNotificationService_DisplayPersistentNotification_Name = 1031437954;
// The 996849199 value is based on sha256(salt + "NotificationService5").
constexpr uint32_t kNotificationService_ClosePersistentNotification_Name = 996849199;
// The 1596983019 value is based on sha256(salt + "NotificationService6").
constexpr uint32_t kNotificationService_GetNotifications_Name = 1596983019;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_