// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 485323635 value is based on sha256(salt + "RemotingEventInjector1").
constexpr uint32_t kRemotingEventInjector_MoveCursorToLocationInPixels_Name = 485323635;
// The 1369277126 value is based on sha256(salt + "RemotingEventInjector2").
constexpr uint32_t kRemotingEventInjector_InjectMousePressOrRelease_Name = 1369277126;
// The 319694528 value is based on sha256(salt + "RemotingEventInjector3").
constexpr uint32_t kRemotingEventInjector_InjectMouseWheelInPixels_Name = 319694528;
// The 386917056 value is based on sha256(salt + "RemotingEventInjector4").
constexpr uint32_t kRemotingEventInjector_InjectKeyEvent_Name = 386917056;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_SHARED_MESSAGE_IDS_H_