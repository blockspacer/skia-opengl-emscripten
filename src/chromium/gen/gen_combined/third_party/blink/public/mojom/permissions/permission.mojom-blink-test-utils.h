// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/permissions/permission.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT PermissionObserverInterceptorForTesting : public PermissionObserver {
  virtual PermissionObserver* GetForwardingInterface() = 0;
  void OnPermissionStatusChange(::blink::mojom::blink::PermissionStatus status) override;
};
class PLATFORM_EXPORT PermissionObserverAsyncWaiter {
 public:
  explicit PermissionObserverAsyncWaiter(PermissionObserver* proxy);
  ~PermissionObserverAsyncWaiter();

 private:
  PermissionObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PermissionObserverAsyncWaiter);
};


class PLATFORM_EXPORT PermissionServiceInterceptorForTesting : public PermissionService {
  virtual PermissionService* GetForwardingInterface() = 0;
  void HasPermission(PermissionDescriptorPtr permission, HasPermissionCallback callback) override;
  void RequestPermission(PermissionDescriptorPtr permission, bool user_gesture, RequestPermissionCallback callback) override;
  void RequestPermissions(WTF::Vector<PermissionDescriptorPtr> permission, bool user_gesture, RequestPermissionsCallback callback) override;
  void RevokePermission(PermissionDescriptorPtr permission, RevokePermissionCallback callback) override;
  void AddPermissionObserver(PermissionDescriptorPtr permission, ::blink::mojom::blink::PermissionStatus last_known_status, PermissionObserverPtr observer) override;
};
class PLATFORM_EXPORT PermissionServiceAsyncWaiter {
 public:
  explicit PermissionServiceAsyncWaiter(PermissionService* proxy);
  ~PermissionServiceAsyncWaiter();
  void HasPermission(
      PermissionDescriptorPtr permission, ::blink::mojom::blink::PermissionStatus* out_status);
  void RequestPermission(
      PermissionDescriptorPtr permission, bool user_gesture, ::blink::mojom::blink::PermissionStatus* out_status);
  void RequestPermissions(
      WTF::Vector<PermissionDescriptorPtr> permission, bool user_gesture, WTF::Vector<::blink::mojom::blink::PermissionStatus>* out_statuses);
  void RevokePermission(
      PermissionDescriptorPtr permission, ::blink::mojom::blink::PermissionStatus* out_status);

 private:
  PermissionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PermissionServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_TEST_UTILS_H_