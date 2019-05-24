// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/notifications/notification_service.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT NonPersistentNotificationListenerInterceptorForTesting : public NonPersistentNotificationListener {
  virtual NonPersistentNotificationListener* GetForwardingInterface() = 0;
  void OnShow() override;
  void OnClick(OnClickCallback callback) override;
  void OnClose(OnCloseCallback callback) override;
};
class PLATFORM_EXPORT NonPersistentNotificationListenerAsyncWaiter {
 public:
  explicit NonPersistentNotificationListenerAsyncWaiter(NonPersistentNotificationListener* proxy);
  ~NonPersistentNotificationListenerAsyncWaiter();
  void OnClick(
      );
  void OnClose(
      );

 private:
  NonPersistentNotificationListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NonPersistentNotificationListenerAsyncWaiter);
};


class PLATFORM_EXPORT NotificationServiceInterceptorForTesting : public NotificationService {
  virtual NotificationService* GetForwardingInterface() = 0;
  void GetPermissionStatus(GetPermissionStatusCallback callback) override;
  void DisplayNonPersistentNotification(const WTF::String& token, ::blink::mojom::blink::NotificationDataPtr notification_data, ::blink::mojom::blink::NotificationResourcesPtr notification_resources, NonPersistentNotificationListenerPtr event_listener) override;
  void CloseNonPersistentNotification(const WTF::String& token) override;
  void DisplayPersistentNotification(int64_t service_worker_registration_id, ::blink::mojom::blink::NotificationDataPtr notification_data, ::blink::mojom::blink::NotificationResourcesPtr notification_resources, DisplayPersistentNotificationCallback callback) override;
  void ClosePersistentNotification(const WTF::String& notification_id) override;
  void GetNotifications(int64_t service_worker_registration_id, const WTF::String& filter_tag, bool include_triggered, GetNotificationsCallback callback) override;
};
class PLATFORM_EXPORT NotificationServiceAsyncWaiter {
 public:
  explicit NotificationServiceAsyncWaiter(NotificationService* proxy);
  ~NotificationServiceAsyncWaiter();
  void GetPermissionStatus(
      ::blink::mojom::blink::PermissionStatus* out_status);
  void DisplayPersistentNotification(
      int64_t service_worker_registration_id, ::blink::mojom::blink::NotificationDataPtr notification_data, ::blink::mojom::blink::NotificationResourcesPtr notification_resources, PersistentNotificationError* out_error);
  void GetNotifications(
      int64_t service_worker_registration_id, const WTF::String& filter_tag, bool include_triggered, WTF::Vector<WTF::String>* out_notification_ids, WTF::Vector<::blink::mojom::blink::NotificationDataPtr>* out_notification_datas);

 private:
  NotificationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NotificationServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_BLINK_TEST_UTILS_H_