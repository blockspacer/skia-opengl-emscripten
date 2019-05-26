// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/process_id.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-blink.h"


#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_JUMBO_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace resource_coordinator {
namespace mojom {
namespace blink {


void DocumentCoordinationUnitInterceptorForTesting::SetNetworkAlmostIdle() {
  GetForwardingInterface()->SetNetworkAlmostIdle();
}
void DocumentCoordinationUnitInterceptorForTesting::SetLifecycleState(::resource_coordinator::mojom::blink::LifecycleState state) {
  GetForwardingInterface()->SetLifecycleState(std::move(state));
}
void DocumentCoordinationUnitInterceptorForTesting::SetHasNonEmptyBeforeUnload(bool has_nonempty_beforeunload) {
  GetForwardingInterface()->SetHasNonEmptyBeforeUnload(std::move(has_nonempty_beforeunload));
}
void DocumentCoordinationUnitInterceptorForTesting::SetInterventionPolicy(PolicyControlledIntervention intervention, InterventionPolicy policy) {
  GetForwardingInterface()->SetInterventionPolicy(std::move(intervention), std::move(policy));
}
void DocumentCoordinationUnitInterceptorForTesting::SetIsAdFrame() {
  GetForwardingInterface()->SetIsAdFrame();
}
void DocumentCoordinationUnitInterceptorForTesting::OnNonPersistentNotificationCreated() {
  GetForwardingInterface()->OnNonPersistentNotificationCreated();
}
DocumentCoordinationUnitAsyncWaiter::DocumentCoordinationUnitAsyncWaiter(
    DocumentCoordinationUnit* proxy) : proxy_(proxy) {}

DocumentCoordinationUnitAsyncWaiter::~DocumentCoordinationUnitAsyncWaiter() = default;




void ProcessCoordinationUnitInterceptorForTesting::SetExpectedTaskQueueingDuration(base::TimeDelta duration) {
  GetForwardingInterface()->SetExpectedTaskQueueingDuration(std::move(duration));
}
void ProcessCoordinationUnitInterceptorForTesting::SetMainThreadTaskLoadIsLow(bool main_thread_task_load_is_low) {
  GetForwardingInterface()->SetMainThreadTaskLoadIsLow(std::move(main_thread_task_load_is_low));
}
ProcessCoordinationUnitAsyncWaiter::ProcessCoordinationUnitAsyncWaiter(
    ProcessCoordinationUnit* proxy) : proxy_(proxy) {}

ProcessCoordinationUnitAsyncWaiter::~ProcessCoordinationUnitAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace resource_coordinator

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif