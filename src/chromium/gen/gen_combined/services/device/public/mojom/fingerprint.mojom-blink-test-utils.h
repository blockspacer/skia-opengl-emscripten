// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/fingerprint.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT FingerprintObserverInterceptorForTesting : public FingerprintObserver {
  virtual FingerprintObserver* GetForwardingInterface() = 0;
  void OnRestarted() override;
  void OnEnrollScanDone(ScanResult scan_result, bool is_complete, int32_t percent_complete) override;
  void OnAuthScanDone(ScanResult scan_result, const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& matches) override;
  void OnSessionFailed() override;
};
class BLINK_PLATFORM_EXPORT FingerprintObserverAsyncWaiter {
 public:
  explicit FingerprintObserverAsyncWaiter(FingerprintObserver* proxy);
  ~FingerprintObserverAsyncWaiter();

 private:
  FingerprintObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FingerprintObserverAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT FingerprintInterceptorForTesting : public Fingerprint {
  virtual Fingerprint* GetForwardingInterface() = 0;
  void GetRecordsForUser(const WTF::String& user_id, GetRecordsForUserCallback callback) override;
  void StartEnrollSession(const WTF::String& user_id, const WTF::String& label) override;
  void CancelCurrentEnrollSession(CancelCurrentEnrollSessionCallback callback) override;
  void RequestRecordLabel(const WTF::String& record_path, RequestRecordLabelCallback callback) override;
  void SetRecordLabel(const WTF::String& record_path, const WTF::String& new_label, SetRecordLabelCallback callback) override;
  void RemoveRecord(const WTF::String& record_path, RemoveRecordCallback callback) override;
  void StartAuthSession() override;
  void EndCurrentAuthSession(EndCurrentAuthSessionCallback callback) override;
  void DestroyAllRecords(DestroyAllRecordsCallback callback) override;
  void AddFingerprintObserver(FingerprintObserverPtr observer) override;
  void RequestType(RequestTypeCallback callback) override;
};
class BLINK_PLATFORM_EXPORT FingerprintAsyncWaiter {
 public:
  explicit FingerprintAsyncWaiter(Fingerprint* proxy);
  ~FingerprintAsyncWaiter();
  void GetRecordsForUser(
      const WTF::String& user_id, WTF::HashMap<WTF::String, WTF::String>* out_records);
  void CancelCurrentEnrollSession(
      bool* out_success);
  void RequestRecordLabel(
      const WTF::String& record_path, WTF::String* out_label);
  void SetRecordLabel(
      const WTF::String& record_path, const WTF::String& new_label, bool* out_success);
  void RemoveRecord(
      const WTF::String& record_path, bool* out_success);
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




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_TEST_UTILS_H_