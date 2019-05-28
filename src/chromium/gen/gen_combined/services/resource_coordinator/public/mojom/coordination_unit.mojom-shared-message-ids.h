// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


// The 535717106 value is based on sha256(salt + "DocumentCoordinationUnit1").
constexpr uint32_t kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name = 535717106;
// The 948326248 value is based on sha256(salt + "DocumentCoordinationUnit2").
constexpr uint32_t kDocumentCoordinationUnit_SetLifecycleState_Name = 948326248;
// The 1368109841 value is based on sha256(salt + "DocumentCoordinationUnit3").
constexpr uint32_t kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name = 1368109841;
// The 1424185659 value is based on sha256(salt + "DocumentCoordinationUnit4").
constexpr uint32_t kDocumentCoordinationUnit_SetInterventionPolicy_Name = 1424185659;
// The 246093689 value is based on sha256(salt + "DocumentCoordinationUnit5").
constexpr uint32_t kDocumentCoordinationUnit_SetIsAdFrame_Name = 246093689;
// The 219257966 value is based on sha256(salt + "DocumentCoordinationUnit6").
constexpr uint32_t kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name = 219257966;
// The 75558864 value is based on sha256(salt + "ProcessCoordinationUnit1").
constexpr uint32_t kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name = 75558864;
// The 1974632308 value is based on sha256(salt + "ProcessCoordinationUnit2").
constexpr uint32_t kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name = 1974632308;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_