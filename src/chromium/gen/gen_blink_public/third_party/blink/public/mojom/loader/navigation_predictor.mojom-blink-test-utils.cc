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


#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void AnchorElementMetricsHostInterceptorForTesting::ReportAnchorElementMetricsOnClick(AnchorElementMetricsPtr metrics) {
  GetForwardingInterface()->ReportAnchorElementMetricsOnClick(std::move(metrics));
}
void AnchorElementMetricsHostInterceptorForTesting::ReportAnchorElementMetricsOnLoad(WTF::Vector<AnchorElementMetricsPtr> metrics) {
  GetForwardingInterface()->ReportAnchorElementMetricsOnLoad(std::move(metrics));
}
AnchorElementMetricsHostAsyncWaiter::AnchorElementMetricsHostAsyncWaiter(
    AnchorElementMetricsHost* proxy) : proxy_(proxy) {}

AnchorElementMetricsHostAsyncWaiter::~AnchorElementMetricsHostAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif