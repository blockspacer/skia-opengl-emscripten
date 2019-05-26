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


#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void OomInterventionHostInterceptorForTesting::OnHighMemoryUsage() {
  GetForwardingInterface()->OnHighMemoryUsage();
}
OomInterventionHostAsyncWaiter::OomInterventionHostAsyncWaiter(
    OomInterventionHost* proxy) : proxy_(proxy) {}

OomInterventionHostAsyncWaiter::~OomInterventionHostAsyncWaiter() = default;




void OomInterventionInterceptorForTesting::StartDetection(OomInterventionHostPtr host, DetectionArgsPtr detection_args, bool renderer_pause_enabled, bool navigate_ads_enabled, bool purge_v8_memory_enabled) {
  GetForwardingInterface()->StartDetection(std::move(host), std::move(detection_args), std::move(renderer_pause_enabled), std::move(navigate_ads_enabled), std::move(purge_v8_memory_enabled));
}
OomInterventionAsyncWaiter::OomInterventionAsyncWaiter(
    OomIntervention* proxy) : proxy_(proxy) {}

OomInterventionAsyncWaiter::~OomInterventionAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif