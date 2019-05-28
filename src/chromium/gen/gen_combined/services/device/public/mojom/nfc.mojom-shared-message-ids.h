// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 2072531216 value is based on sha256(salt + "NFC1").
constexpr uint32_t kNFC_SetClient_Name = 2072531216;
// The 2019705342 value is based on sha256(salt + "NFC2").
constexpr uint32_t kNFC_Push_Name = 2019705342;
// The 330760796 value is based on sha256(salt + "NFC3").
constexpr uint32_t kNFC_CancelPush_Name = 330760796;
// The 353988790 value is based on sha256(salt + "NFC4").
constexpr uint32_t kNFC_Watch_Name = 353988790;
// The 1751843370 value is based on sha256(salt + "NFC5").
constexpr uint32_t kNFC_CancelWatch_Name = 1751843370;
// The 1743498203 value is based on sha256(salt + "NFC6").
constexpr uint32_t kNFC_CancelAllWatches_Name = 1743498203;
// The 1676559123 value is based on sha256(salt + "NFC7").
constexpr uint32_t kNFC_SuspendNFCOperations_Name = 1676559123;
// The 907852626 value is based on sha256(salt + "NFC8").
constexpr uint32_t kNFC_ResumeNFCOperations_Name = 907852626;
// The 1368025403 value is based on sha256(salt + "NFCClient1").
constexpr uint32_t kNFCClient_OnWatch_Name = 1368025403;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_MESSAGE_IDS_H_