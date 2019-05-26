// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 769501972 value is based on sha256(salt + "SerialService1").
constexpr uint32_t kSerialService_GetPorts_Name = 769501972;
// The 1759950013 value is based on sha256(salt + "SerialService2").
constexpr uint32_t kSerialService_RequestPort_Name = 1759950013;
// The 616929216 value is based on sha256(salt + "SerialService3").
constexpr uint32_t kSerialService_GetPort_Name = 616929216;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_