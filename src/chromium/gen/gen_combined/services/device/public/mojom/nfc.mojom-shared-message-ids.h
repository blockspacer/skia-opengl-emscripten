// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 958691849 value is based on sha256(salt + "NFC1").
constexpr uint32_t kNFC_SetClient_Name = 958691849;
// The 1675377128 value is based on sha256(salt + "NFC2").
constexpr uint32_t kNFC_Push_Name = 1675377128;
// The 1537316278 value is based on sha256(salt + "NFC3").
constexpr uint32_t kNFC_CancelPush_Name = 1537316278;
// The 685492090 value is based on sha256(salt + "NFC4").
constexpr uint32_t kNFC_Watch_Name = 685492090;
// The 1159638965 value is based on sha256(salt + "NFC5").
constexpr uint32_t kNFC_CancelWatch_Name = 1159638965;
// The 1597510763 value is based on sha256(salt + "NFC6").
constexpr uint32_t kNFC_CancelAllWatches_Name = 1597510763;
// The 689830907 value is based on sha256(salt + "NFC7").
constexpr uint32_t kNFC_SuspendNFCOperations_Name = 689830907;
// The 382866667 value is based on sha256(salt + "NFC8").
constexpr uint32_t kNFC_ResumeNFCOperations_Name = 382866667;
// The 694119851 value is based on sha256(salt + "NFCClient1").
constexpr uint32_t kNFCClient_OnWatch_Name = 694119851;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_