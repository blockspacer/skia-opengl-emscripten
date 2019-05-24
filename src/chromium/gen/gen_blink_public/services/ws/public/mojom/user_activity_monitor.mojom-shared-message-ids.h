// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 1874784751 value is based on sha256(salt + "UserActivityObserver1").
constexpr uint32_t kUserActivityObserver_OnUserActivity_Name = 1874784751;
// The 1411676584 value is based on sha256(salt + "UserIdleObserver1").
constexpr uint32_t kUserIdleObserver_OnUserIdleStateChanged_Name = 1411676584;
// The 216491479 value is based on sha256(salt + "UserActivityMonitor1").
constexpr uint32_t kUserActivityMonitor_AddUserActivityObserver_Name = 216491479;
// The 1962049322 value is based on sha256(salt + "UserActivityMonitor2").
constexpr uint32_t kUserActivityMonitor_AddUserIdleObserver_Name = 1962049322;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_