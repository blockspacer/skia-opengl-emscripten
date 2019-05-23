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


#include "services/device/public/mojom/fingerprint.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void FingerprintObserverInterceptorForTesting::OnRestarted() {
  GetForwardingInterface()->OnRestarted();
}
void FingerprintObserverInterceptorForTesting::OnEnrollScanDone(ScanResult scan_result, bool is_complete, int32_t percent_complete) {
  GetForwardingInterface()->OnEnrollScanDone(std::move(scan_result), std::move(is_complete), std::move(percent_complete));
}
void FingerprintObserverInterceptorForTesting::OnAuthScanDone(ScanResult scan_result, const base::flat_map<std::string, std::vector<std::string>>& matches) {
  GetForwardingInterface()->OnAuthScanDone(std::move(scan_result), std::move(matches));
}
void FingerprintObserverInterceptorForTesting::OnSessionFailed() {
  GetForwardingInterface()->OnSessionFailed();
}
FingerprintObserverAsyncWaiter::FingerprintObserverAsyncWaiter(
    FingerprintObserver* proxy) : proxy_(proxy) {}

FingerprintObserverAsyncWaiter::~FingerprintObserverAsyncWaiter() = default;




void FingerprintInterceptorForTesting::GetRecordsForUser(const std::string& user_id, GetRecordsForUserCallback callback) {
  GetForwardingInterface()->GetRecordsForUser(std::move(user_id), std::move(callback));
}
void FingerprintInterceptorForTesting::StartEnrollSession(const std::string& user_id, const std::string& label) {
  GetForwardingInterface()->StartEnrollSession(std::move(user_id), std::move(label));
}
void FingerprintInterceptorForTesting::CancelCurrentEnrollSession(CancelCurrentEnrollSessionCallback callback) {
  GetForwardingInterface()->CancelCurrentEnrollSession(std::move(callback));
}
void FingerprintInterceptorForTesting::RequestRecordLabel(const std::string& record_path, RequestRecordLabelCallback callback) {
  GetForwardingInterface()->RequestRecordLabel(std::move(record_path), std::move(callback));
}
void FingerprintInterceptorForTesting::SetRecordLabel(const std::string& record_path, const std::string& new_label, SetRecordLabelCallback callback) {
  GetForwardingInterface()->SetRecordLabel(std::move(record_path), std::move(new_label), std::move(callback));
}
void FingerprintInterceptorForTesting::RemoveRecord(const std::string& record_path, RemoveRecordCallback callback) {
  GetForwardingInterface()->RemoveRecord(std::move(record_path), std::move(callback));
}
void FingerprintInterceptorForTesting::StartAuthSession() {
  GetForwardingInterface()->StartAuthSession();
}
void FingerprintInterceptorForTesting::EndCurrentAuthSession(EndCurrentAuthSessionCallback callback) {
  GetForwardingInterface()->EndCurrentAuthSession(std::move(callback));
}
void FingerprintInterceptorForTesting::DestroyAllRecords(DestroyAllRecordsCallback callback) {
  GetForwardingInterface()->DestroyAllRecords(std::move(callback));
}
void FingerprintInterceptorForTesting::AddFingerprintObserver(FingerprintObserverPtr observer) {
  GetForwardingInterface()->AddFingerprintObserver(std::move(observer));
}
void FingerprintInterceptorForTesting::RequestType(RequestTypeCallback callback) {
  GetForwardingInterface()->RequestType(std::move(callback));
}
FingerprintAsyncWaiter::FingerprintAsyncWaiter(
    Fingerprint* proxy) : proxy_(proxy) {}

FingerprintAsyncWaiter::~FingerprintAsyncWaiter() = default;

void FingerprintAsyncWaiter::GetRecordsForUser(
    const std::string& user_id, base::flat_map<std::string, std::string>* out_records) {
  base::RunLoop loop;
  proxy_->GetRecordsForUser(std::move(user_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::flat_map<std::string, std::string>* out_records
,
             const base::flat_map<std::string, std::string>& records) {*out_records = std::move(records);
            loop->Quit();
          },
          &loop,
          out_records));
  loop.Run();
}
void FingerprintAsyncWaiter::CancelCurrentEnrollSession(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->CancelCurrentEnrollSession(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void FingerprintAsyncWaiter::RequestRecordLabel(
    const std::string& record_path, std::string* out_label) {
  base::RunLoop loop;
  proxy_->RequestRecordLabel(std::move(record_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_label
,
             const std::string& label) {*out_label = std::move(label);
            loop->Quit();
          },
          &loop,
          out_label));
  loop.Run();
}
void FingerprintAsyncWaiter::SetRecordLabel(
    const std::string& record_path, const std::string& new_label, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetRecordLabel(std::move(record_path),std::move(new_label),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void FingerprintAsyncWaiter::RemoveRecord(
    const std::string& record_path, bool* out_success) {
  base::RunLoop loop;
  proxy_->RemoveRecord(std::move(record_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void FingerprintAsyncWaiter::EndCurrentAuthSession(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->EndCurrentAuthSession(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void FingerprintAsyncWaiter::DestroyAllRecords(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->DestroyAllRecords(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void FingerprintAsyncWaiter::RequestType(
    BiometricType* out_type) {
  base::RunLoop loop;
  proxy_->RequestType(
      base::BindOnce(
          [](base::RunLoop* loop,
             BiometricType* out_type
,
             BiometricType type) {*out_type = std::move(type);
            loop->Quit();
          },
          &loop,
          out_type));
  loop.Run();
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif