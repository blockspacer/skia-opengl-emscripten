// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


// The 779153566 value is based on sha256(salt + "DocumentCoordinationUnit1").
constexpr uint32_t kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name = 779153566;
// The 900699292 value is based on sha256(salt + "DocumentCoordinationUnit2").
constexpr uint32_t kDocumentCoordinationUnit_SetLifecycleState_Name = 900699292;
// The 724434959 value is based on sha256(salt + "DocumentCoordinationUnit3").
constexpr uint32_t kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name = 724434959;
// The 2027613163 value is based on sha256(salt + "DocumentCoordinationUnit4").
constexpr uint32_t kDocumentCoordinationUnit_SetInterventionPolicy_Name = 2027613163;
// The 1397656912 value is based on sha256(salt + "DocumentCoordinationUnit5").
constexpr uint32_t kDocumentCoordinationUnit_SetIsAdFrame_Name = 1397656912;
// The 2053608518 value is based on sha256(salt + "DocumentCoordinationUnit6").
constexpr uint32_t kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name = 2053608518;
// The 1745180896 value is based on sha256(salt + "ProcessCoordinationUnit1").
constexpr uint32_t kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name = 1745180896;
// The 1046309033 value is based on sha256(salt + "ProcessCoordinationUnit2").
constexpr uint32_t kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name = 1046309033;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_