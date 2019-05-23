// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/notifications/notification_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom.h"
#include "third_party/blink/public/mojom/permissions/permission_status.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/notifications/notification_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void NonPersistentNotificationListenerInterceptorForTesting::OnShow() {
  GetForwardingInterface()->OnShow();
}
void NonPersistentNotificationListenerInterceptorForTesting::OnClick(OnClickCallback callback) {
  GetForwardingInterface()->OnClick(std::move(callback));
}
void NonPersistentNotificationListenerInterceptorForTesting::OnClose(OnCloseCallback callback) {
  GetForwardingInterface()->OnClose(std::move(callback));
}
NonPersistentNotificationListenerAsyncWaiter::NonPersistentNotificationListenerAsyncWaiter(
    NonPersistentNotificationListener* proxy) : proxy_(proxy) {}

NonPersistentNotificationListenerAsyncWaiter::~NonPersistentNotificationListenerAsyncWaiter() = default;

void NonPersistentNotificationListenerAsyncWaiter::OnClick(
    ) {
  base::RunLoop loop;
  proxy_->OnClick(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NonPersistentNotificationListenerAsyncWaiter::OnClose(
    ) {
  base::RunLoop loop;
  proxy_->OnClose(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void NotificationServiceInterceptorForTesting::GetPermissionStatus(GetPermissionStatusCallback callback) {
  GetForwardingInterface()->GetPermissionStatus(std::move(callback));
}
void NotificationServiceInterceptorForTesting::DisplayNonPersistentNotification(const std::string& token, const blink::PlatformNotificationData& notification_data, const blink::NotificationResources& notification_resources, NonPersistentNotificationListenerPtr event_listener) {
  GetForwardingInterface()->DisplayNonPersistentNotification(std::move(token), std::move(notification_data), std::move(notification_resources), std::move(event_listener));
}
void NotificationServiceInterceptorForTesting::CloseNonPersistentNotification(const std::string& token) {
  GetForwardingInterface()->CloseNonPersistentNotification(std::move(token));
}
void NotificationServiceInterceptorForTesting::DisplayPersistentNotification(int64_t service_worker_registration_id, const blink::PlatformNotificationData& notification_data, const blink::NotificationResources& notification_resources, DisplayPersistentNotificationCallback callback) {
  GetForwardingInterface()->DisplayPersistentNotification(std::move(service_worker_registration_id), std::move(notification_data), std::move(notification_resources), std::move(callback));
}
void NotificationServiceInterceptorForTesting::ClosePersistentNotification(const std::string& notification_id) {
  GetForwardingInterface()->ClosePersistentNotification(std::move(notification_id));
}
void NotificationServiceInterceptorForTesting::GetNotifications(int64_t service_worker_registration_id, const std::string& filter_tag, bool include_triggered, GetNotificationsCallback callback) {
  GetForwardingInterface()->GetNotifications(std::move(service_worker_registration_id), std::move(filter_tag), std::move(include_triggered), std::move(callback));
}
NotificationServiceAsyncWaiter::NotificationServiceAsyncWaiter(
    NotificationService* proxy) : proxy_(proxy) {}

NotificationServiceAsyncWaiter::~NotificationServiceAsyncWaiter() = default;

void NotificationServiceAsyncWaiter::GetPermissionStatus(
    ::blink::mojom::PermissionStatus* out_status) {
  base::RunLoop loop;
  proxy_->GetPermissionStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::PermissionStatus* out_status
,
             ::blink::mojom::PermissionStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void NotificationServiceAsyncWaiter::DisplayPersistentNotification(
    int64_t service_worker_registration_id, const blink::PlatformNotificationData& notification_data, const blink::NotificationResources& notification_resources, PersistentNotificationError* out_error) {
  base::RunLoop loop;
  proxy_->DisplayPersistentNotification(std::move(service_worker_registration_id),std::move(notification_data),std::move(notification_resources),
      base::BindOnce(
          [](base::RunLoop* loop,
             PersistentNotificationError* out_error
,
             PersistentNotificationError error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void NotificationServiceAsyncWaiter::GetNotifications(
    int64_t service_worker_registration_id, const std::string& filter_tag, bool include_triggered, std::vector<std::string>* out_notification_ids, std::vector<blink::PlatformNotificationData>* out_notification_datas) {
  base::RunLoop loop;
  proxy_->GetNotifications(std::move(service_worker_registration_id),std::move(filter_tag),std::move(include_triggered),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::string>* out_notification_ids
,
             std::vector<blink::PlatformNotificationData>* out_notification_datas
,
             const std::vector<std::string>& notification_ids,
             const std::vector<blink::PlatformNotificationData>& notification_datas) {*out_notification_ids = std::move(notification_ids);*out_notification_datas = std::move(notification_datas);
            loop->Quit();
          },
          &loop,
          out_notification_ids,
          out_notification_datas));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif