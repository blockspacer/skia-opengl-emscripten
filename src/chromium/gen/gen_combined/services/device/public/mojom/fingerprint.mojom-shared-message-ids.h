// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1631377691 value is based on sha256(salt + "FingerprintObserver1").
constexpr uint32_t kFingerprintObserver_OnRestarted_Name = 1631377691;
// The 2021001093 value is based on sha256(salt + "FingerprintObserver2").
constexpr uint32_t kFingerprintObserver_OnEnrollScanDone_Name = 2021001093;
// The 1888414137 value is based on sha256(salt + "FingerprintObserver3").
constexpr uint32_t kFingerprintObserver_OnAuthScanDone_Name = 1888414137;
// The 727001380 value is based on sha256(salt + "FingerprintObserver4").
constexpr uint32_t kFingerprintObserver_OnSessionFailed_Name = 727001380;
// The 1779125878 value is based on sha256(salt + "Fingerprint1").
constexpr uint32_t kFingerprint_GetRecordsForUser_Name = 1779125878;
// The 503312070 value is based on sha256(salt + "Fingerprint2").
constexpr uint32_t kFingerprint_StartEnrollSession_Name = 503312070;
// The 2083032038 value is based on sha256(salt + "Fingerprint3").
constexpr uint32_t kFingerprint_CancelCurrentEnrollSession_Name = 2083032038;
// The 771009314 value is based on sha256(salt + "Fingerprint4").
constexpr uint32_t kFingerprint_RequestRecordLabel_Name = 771009314;
// The 1268796464 value is based on sha256(salt + "Fingerprint5").
constexpr uint32_t kFingerprint_SetRecordLabel_Name = 1268796464;
// The 108984818 value is based on sha256(salt + "Fingerprint6").
constexpr uint32_t kFingerprint_RemoveRecord_Name = 108984818;
// The 1112532661 value is based on sha256(salt + "Fingerprint7").
constexpr uint32_t kFingerprint_StartAuthSession_Name = 1112532661;
// The 1788063795 value is based on sha256(salt + "Fingerprint8").
constexpr uint32_t kFingerprint_EndCurrentAuthSession_Name = 1788063795;
// The 814859909 value is based on sha256(salt + "Fingerprint9").
constexpr uint32_t kFingerprint_DestroyAllRecords_Name = 814859909;
// The 1399159622 value is based on sha256(salt + "Fingerprint10").
constexpr uint32_t kFingerprint_AddFingerprintObserver_Name = 1399159622;
// The 1926203185 value is based on sha256(salt + "Fingerprint11").
constexpr uint32_t kFingerprint_RequestType_Name = 1926203185;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_MESSAGE_IDS_H_