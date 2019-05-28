// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 895638527 value is based on sha256(salt + "ServiceManagerListener1").
constexpr uint32_t kServiceManagerListener_OnInit_Name = 895638527;
// The 1763257956 value is based on sha256(salt + "ServiceManagerListener2").
constexpr uint32_t kServiceManagerListener_OnServiceCreated_Name = 1763257956;
// The 1364910006 value is based on sha256(salt + "ServiceManagerListener3").
constexpr uint32_t kServiceManagerListener_OnServiceStarted_Name = 1364910006;
// The 2119397245 value is based on sha256(salt + "ServiceManagerListener4").
constexpr uint32_t kServiceManagerListener_OnServicePIDReceived_Name = 2119397245;
// The 1293492739 value is based on sha256(salt + "ServiceManagerListener5").
constexpr uint32_t kServiceManagerListener_OnServiceFailedToStart_Name = 1293492739;
// The 1686346282 value is based on sha256(salt + "ServiceManagerListener6").
constexpr uint32_t kServiceManagerListener_OnServiceStopped_Name = 1686346282;
// The 1708168831 value is based on sha256(salt + "ServiceManager1").
constexpr uint32_t kServiceManager_AddListener_Name = 1708168831;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_