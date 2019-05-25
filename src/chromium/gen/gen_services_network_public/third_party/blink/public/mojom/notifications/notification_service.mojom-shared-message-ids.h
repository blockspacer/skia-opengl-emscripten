// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 949021318 value is based on sha256(salt + "NonPersistentNotificationListener1").
constexpr uint32_t kNonPersistentNotificationListener_OnShow_Name = 949021318;
// The 2081437977 value is based on sha256(salt + "NonPersistentNotificationListener2").
constexpr uint32_t kNonPersistentNotificationListener_OnClick_Name = 2081437977;
// The 988847160 value is based on sha256(salt + "NonPersistentNotificationListener3").
constexpr uint32_t kNonPersistentNotificationListener_OnClose_Name = 988847160;
// The 1047804765 value is based on sha256(salt + "NotificationService1").
constexpr uint32_t kNotificationService_GetPermissionStatus_Name = 1047804765;
// The 116153708 value is based on sha256(salt + "NotificationService2").
constexpr uint32_t kNotificationService_DisplayNonPersistentNotification_Name = 116153708;
// The 1007893543 value is based on sha256(salt + "NotificationService3").
constexpr uint32_t kNotificationService_CloseNonPersistentNotification_Name = 1007893543;
// The 287582317 value is based on sha256(salt + "NotificationService4").
constexpr uint32_t kNotificationService_DisplayPersistentNotification_Name = 287582317;
// The 1764900306 value is based on sha256(salt + "NotificationService5").
constexpr uint32_t kNotificationService_ClosePersistentNotification_Name = 1764900306;
// The 59750742 value is based on sha256(salt + "NotificationService6").
constexpr uint32_t kNotificationService_GetNotifications_Name = 59750742;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_