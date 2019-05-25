// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 43716397 value is based on sha256(salt + "EventInjector1").
constexpr uint32_t kEventInjector_InjectEvent_Name = 43716397;
// The 1104531165 value is based on sha256(salt + "EventInjector2").
constexpr uint32_t kEventInjector_InjectEventNoAck_Name = 1104531165;
// The 750326354 value is based on sha256(salt + "EventInjector3").
constexpr uint32_t kEventInjector_InjectEventNoAckNoRewriters_Name = 750326354;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_