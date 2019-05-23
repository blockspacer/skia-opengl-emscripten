// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/fingerprint.mojom.h"


namespace device {
namespace mojom {


class  FingerprintObserverInterceptorForTesting : public FingerprintObserver {
  virtual FingerprintObserver* GetForwardingInterface() = 0;
  void OnRestarted() override;
  void OnEnrollScanDone(ScanResult scan_result, bool is_complete, int32_t percent_complete) override;
  void OnAuthScanDone(ScanResult scan_result, const base::flat_map<std::string, std::vector<std::string>>& matches) override;
  void OnSessionFailed() override;
};
class  FingerprintObserverAsyncWaiter {
 public:
  explicit FingerprintObserverAsyncWaiter(FingerprintObserver* proxy);
  ~FingerprintObserverAsyncWaiter();

 private:
  FingerprintObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FingerprintObserverAsyncWaiter);
};


class  FingerprintInterceptorForTesting : public Fingerprint {
  virtual Fingerprint* GetForwardingInterface() = 0;
  void GetRecordsForUser(const std::string& user_id, GetRecordsForUserCallback callback) override;
  void StartEnrollSession(const std::string& user_id, const std::string& label) override;
  void CancelCurrentEnrollSession(CancelCurrentEnrollSessionCallback callback) override;
  void RequestRecordLabel(const std::string& record_path, RequestRecordLabelCallback callback) override;
  void SetRecordLabel(const std::string& record_path, const std::string& new_label, SetRecordLabelCallback callback) override;
  void RemoveRecord(const std::string& record_path, RemoveRecordCallback callback) override;
  void StartAuthSession() override;
  void EndCurrentAuthSession(EndCurrentAuthSessionCallback callback) override;
  void DestroyAllRecords(DestroyAllRecordsCallback callback) override;
  void AddFingerprintObserver(FingerprintObserverPtr observer) override;
  void RequestType(RequestTypeCallback callback) override;
};
class  FingerprintAsyncWaiter {
 public:
  explicit FingerprintAsyncWaiter(Fingerprint* proxy);
  ~FingerprintAsyncWaiter();
  void GetRecordsForUser(
      const std::string& user_id, base::flat_map<std::string, std::string>* out_records);
  void CancelCurrentEnrollSession(
      bool* out_success);
  void RequestRecordLabel(
      const std::string& record_path, std::string* out_label);
  void SetRecordLabel(
      const std::string& record_path, const std::string& new_label, bool* out_success);
  void RemoveRecord(
      const std::string& record_path, bool* out_success);
  void EndCurrentAuthSession(
      bool* out_success);
  void DestroyAllRecords(
      bool* out_success);
  void RequestType(
      BiometricType* out_type);

 private:
  Fingerprint* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FingerprintAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_TEST_UTILS_H_