// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 2125636149 value is based on sha256(salt + "UserActivityObserver1").
constexpr uint32_t kUserActivityObserver_OnUserActivity_Name = 2125636149;
// The 399051699 value is based on sha256(salt + "UserIdleObserver1").
constexpr uint32_t kUserIdleObserver_OnUserIdleStateChanged_Name = 399051699;
// The 455151356 value is based on sha256(salt + "UserActivityMonitor1").
constexpr uint32_t kUserActivityMonitor_AddUserActivityObserver_Name = 455151356;
// The 1599932083 value is based on sha256(salt + "UserActivityMonitor2").
constexpr uint32_t kUserActivityMonitor_AddUserIdleObserver_Name = 1599932083;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_