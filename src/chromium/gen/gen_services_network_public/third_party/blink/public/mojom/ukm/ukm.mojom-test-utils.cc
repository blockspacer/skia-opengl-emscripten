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


#include "third_party/blink/public/mojom/ukm/ukm.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_UKM_UKM_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_UKM_UKM_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void UkmSourceIdFrameHostInterceptorForTesting::SetDocumentSourceId(int64_t source_id) {
  GetForwardingInterface()->SetDocumentSourceId(std::move(source_id));
}
UkmSourceIdFrameHostAsyncWaiter::UkmSourceIdFrameHostAsyncWaiter(
    UkmSourceIdFrameHost* proxy) : proxy_(proxy) {}

UkmSourceIdFrameHostAsyncWaiter::~UkmSourceIdFrameHostAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif