// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 1021960314 value is based on sha256(salt + "ServiceManagerListener1").
constexpr uint32_t kServiceManagerListener_OnInit_Name = 1021960314;
// The 1134265505 value is based on sha256(salt + "ServiceManagerListener2").
constexpr uint32_t kServiceManagerListener_OnServiceCreated_Name = 1134265505;
// The 1817064069 value is based on sha256(salt + "ServiceManagerListener3").
constexpr uint32_t kServiceManagerListener_OnServiceStarted_Name = 1817064069;
// The 184954134 value is based on sha256(salt + "ServiceManagerListener4").
constexpr uint32_t kServiceManagerListener_OnServicePIDReceived_Name = 184954134;
// The 8536406 value is based on sha256(salt + "ServiceManagerListener5").
constexpr uint32_t kServiceManagerListener_OnServiceFailedToStart_Name = 8536406;
// The 457527731 value is based on sha256(salt + "ServiceManagerListener6").
constexpr uint32_t kServiceManagerListener_OnServiceStopped_Name = 457527731;
// The 857816324 value is based on sha256(salt + "ServiceManager1").
constexpr uint32_t kServiceManager_AddListener_Name = 857816324;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_