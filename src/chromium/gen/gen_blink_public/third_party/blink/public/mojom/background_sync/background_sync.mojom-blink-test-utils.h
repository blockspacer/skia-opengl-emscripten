// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT BackgroundSyncServiceInterceptorForTesting : public BackgroundSyncService {
  virtual BackgroundSyncService* GetForwardingInterface() = 0;
  void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) override;
  void DidResolveRegistration(BackgroundSyncRegistrationInfoPtr registration_info) override;
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) override;
};
class PLATFORM_EXPORT BackgroundSyncServiceAsyncWaiter {
 public:
  explicit BackgroundSyncServiceAsyncWaiter(BackgroundSyncService* proxy);
  ~BackgroundSyncServiceAsyncWaiter();
  void Register(
      SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, BackgroundSyncError* out_err, SyncRegistrationOptionsPtr* out_options);
  void GetRegistrations(
      int64_t service_worker_registration_id, BackgroundSyncError* out_err, WTF::Vector<SyncRegistrationOptionsPtr>* out_registrations);

 private:
  BackgroundSyncService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_TEST_UTILS_H_