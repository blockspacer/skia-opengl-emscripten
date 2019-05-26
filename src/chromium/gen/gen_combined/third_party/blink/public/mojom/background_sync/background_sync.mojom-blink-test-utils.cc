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


#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void BackgroundSyncServiceInterceptorForTesting::Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(options), std::move(service_worker_registration_id), std::move(callback));
}
void BackgroundSyncServiceInterceptorForTesting::DidResolveRegistration(BackgroundSyncRegistrationInfoPtr registration_info) {
  GetForwardingInterface()->DidResolveRegistration(std::move(registration_info));
}
void BackgroundSyncServiceInterceptorForTesting::GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) {
  GetForwardingInterface()->GetRegistrations(std::move(service_worker_registration_id), std::move(callback));
}
BackgroundSyncServiceAsyncWaiter::BackgroundSyncServiceAsyncWaiter(
    BackgroundSyncService* proxy) : proxy_(proxy) {}

BackgroundSyncServiceAsyncWaiter::~BackgroundSyncServiceAsyncWaiter() = default;

void BackgroundSyncServiceAsyncWaiter::Register(
    SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, BackgroundSyncError* out_err, SyncRegistrationOptionsPtr* out_options) {
  base::RunLoop loop;
  proxy_->Register(std::move(options),std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundSyncError* out_err
,
             SyncRegistrationOptionsPtr* out_options
,
             BackgroundSyncError err,
             SyncRegistrationOptionsPtr options) {*out_err = std::move(err);*out_options = std::move(options);
            loop->Quit();
          },
          &loop,
          out_err,
          out_options));
  loop.Run();
}
void BackgroundSyncServiceAsyncWaiter::GetRegistrations(
    int64_t service_worker_registration_id, BackgroundSyncError* out_err, WTF::Vector<SyncRegistrationOptionsPtr>* out_registrations) {
  base::RunLoop loop;
  proxy_->GetRegistrations(std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundSyncError* out_err
,
             WTF::Vector<SyncRegistrationOptionsPtr>* out_registrations
,
             BackgroundSyncError err,
             WTF::Vector<SyncRegistrationOptionsPtr> registrations) {*out_err = std::move(err);*out_registrations = std::move(registrations);
            loop->Quit();
          },
          &loop,
          out_err,
          out_registrations));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif