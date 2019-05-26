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


#include "services/metrics/public/mojom/ukm_interface.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_JUMBO_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_JUMBO_H_
#endif


namespace ukm {
namespace mojom {
namespace blink {


void UkmRecorderInterfaceInterceptorForTesting::AddEntry(UkmEntryPtr entry) {
  GetForwardingInterface()->AddEntry(std::move(entry));
}
void UkmRecorderInterfaceInterceptorForTesting::UpdateSourceURL(int64_t source_id, const WTF::String& url) {
  GetForwardingInterface()->UpdateSourceURL(std::move(source_id), std::move(url));
}
UkmRecorderInterfaceAsyncWaiter::UkmRecorderInterfaceAsyncWaiter(
    UkmRecorderInterface* proxy) : proxy_(proxy) {}

UkmRecorderInterfaceAsyncWaiter::~UkmRecorderInterfaceAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace ukm

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif