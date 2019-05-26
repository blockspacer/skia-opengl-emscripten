// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_TEST_UTILS_H_

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-blink.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) DocumentCoordinationUnitInterceptorForTesting : public DocumentCoordinationUnit {
  virtual DocumentCoordinationUnit* GetForwardingInterface() = 0;
  void SetNetworkAlmostIdle() override;
  void SetLifecycleState(::resource_coordinator::mojom::blink::LifecycleState state) override;
  void SetHasNonEmptyBeforeUnload(bool has_nonempty_beforeunload) override;
  void SetInterventionPolicy(PolicyControlledIntervention intervention, InterventionPolicy policy) override;
  void SetIsAdFrame() override;
  void OnNonPersistentNotificationCreated() override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) DocumentCoordinationUnitAsyncWaiter {
 public:
  explicit DocumentCoordinationUnitAsyncWaiter(DocumentCoordinationUnit* proxy);
  ~DocumentCoordinationUnitAsyncWaiter();

 private:
  DocumentCoordinationUnit* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DocumentCoordinationUnitAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessCoordinationUnitInterceptorForTesting : public ProcessCoordinationUnit {
  virtual ProcessCoordinationUnit* GetForwardingInterface() = 0;
  void SetExpectedTaskQueueingDuration(base::TimeDelta duration) override;
  void SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ProcessCoordinationUnitAsyncWaiter {
 public:
  explicit ProcessCoordinationUnitAsyncWaiter(ProcessCoordinationUnit* proxy);
  ~ProcessCoordinationUnitAsyncWaiter();

 private:
  ProcessCoordinationUnit* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProcessCoordinationUnitAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_TEST_UTILS_H_