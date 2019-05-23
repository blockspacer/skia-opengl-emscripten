// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1826530826 value is based on sha256(salt + "FingerprintObserver1").
constexpr uint32_t kFingerprintObserver_OnRestarted_Name = 1826530826;
// The 1218409524 value is based on sha256(salt + "FingerprintObserver2").
constexpr uint32_t kFingerprintObserver_OnEnrollScanDone_Name = 1218409524;
// The 800706539 value is based on sha256(salt + "FingerprintObserver3").
constexpr uint32_t kFingerprintObserver_OnAuthScanDone_Name = 800706539;
// The 624064528 value is based on sha256(salt + "FingerprintObserver4").
constexpr uint32_t kFingerprintObserver_OnSessionFailed_Name = 624064528;
// The 899732231 value is based on sha256(salt + "Fingerprint1").
constexpr uint32_t kFingerprint_GetRecordsForUser_Name = 899732231;
// The 1741091818 value is based on sha256(salt + "Fingerprint2").
constexpr uint32_t kFingerprint_StartEnrollSession_Name = 1741091818;
// The 1884495402 value is based on sha256(salt + "Fingerprint3").
constexpr uint32_t kFingerprint_CancelCurrentEnrollSession_Name = 1884495402;
// The 281331604 value is based on sha256(salt + "Fingerprint4").
constexpr uint32_t kFingerprint_RequestRecordLabel_Name = 281331604;
// The 1424161376 value is based on sha256(salt + "Fingerprint5").
constexpr uint32_t kFingerprint_SetRecordLabel_Name = 1424161376;
// The 1039490227 value is based on sha256(salt + "Fingerprint6").
constexpr uint32_t kFingerprint_RemoveRecord_Name = 1039490227;
// The 1959627531 value is based on sha256(salt + "Fingerprint7").
constexpr uint32_t kFingerprint_StartAuthSession_Name = 1959627531;
// The 1891050844 value is based on sha256(salt + "Fingerprint8").
constexpr uint32_t kFingerprint_EndCurrentAuthSession_Name = 1891050844;
// The 427297718 value is based on sha256(salt + "Fingerprint9").
constexpr uint32_t kFingerprint_DestroyAllRecords_Name = 427297718;
// The 1331605719 value is based on sha256(salt + "Fingerprint10").
constexpr uint32_t kFingerprint_AddFingerprintObserver_Name = 1331605719;
// The 538583137 value is based on sha256(salt + "Fingerprint11").
constexpr uint32_t kFingerprint_RequestType_Name = 538583137;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_