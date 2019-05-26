// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/notifications/notification_service.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT NonPersistentNotificationListenerInterceptorForTesting : public NonPersistentNotificationListener {
  virtual NonPersistentNotificationListener* GetForwardingInterface() = 0;
  void OnShow() override;
  void OnClick(OnClickCallback callback) override;
  void OnClose(OnCloseCallback callback) override;
};
class BLINK_COMMON_EXPORT NonPersistentNotificationListenerAsyncWaiter {
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


class BLINK_COMMON_EXPORT NotificationServiceInterceptorForTesting : public NotificationService {
  virtual NotificationService* GetForwardingInterface() = 0;
  void GetPermissionStatus(GetPermissionStatusCallback callback) override;
  void DisplayNonPersistentNotification(const std::string& token, const blink::PlatformNotificationData& notification_data, const blink::NotificationResources& notification_resources, NonPersistentNotificationListenerPtr event_listener) override;
  void CloseNonPersistentNotification(const std::string& token) override;
  void DisplayPersistentNotification(int64_t service_worker_registration_id, const blink::PlatformNotificationData& notification_data, const blink::NotificationResources& notification_resources, DisplayPersistentNotificationCallback callback) override;
  void ClosePersistentNotification(const std::string& notification_id) override;
  void GetNotifications(int64_t service_worker_registration_id, const std::string& filter_tag, bool include_triggered, GetNotificationsCallback callback) override;
};
class BLINK_COMMON_EXPORT NotificationServiceAsyncWaiter {
 public:
  explicit NotificationServiceAsyncWaiter(NotificationService* proxy);
  ~NotificationServiceAsyncWaiter();
  void GetPermissionStatus(
      ::blink::mojom::PermissionStatus* out_status);
  void DisplayPersistentNotification(
      int64_t service_worker_registration_id, const blink::PlatformNotificationData& notification_data, const blink::NotificationResources& notification_resources, PersistentNotificationError* out_error);
  void GetNotifications(
      int64_t service_worker_registration_id, const std::string& filter_tag, bool include_triggered, std::vector<std::string>* out_notification_ids, std::vector<blink::PlatformNotificationData>* out_notification_datas);

 private:
  NotificationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NotificationServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_TEST_UTILS_H_