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


#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void LeakDetectorInterceptorForTesting::PerformLeakDetection(PerformLeakDetectionCallback callback) {
  GetForwardingInterface()->PerformLeakDetection(std::move(callback));
}
LeakDetectorAsyncWaiter::LeakDetectorAsyncWaiter(
    LeakDetector* proxy) : proxy_(proxy) {}

LeakDetectorAsyncWaiter::~LeakDetectorAsyncWaiter() = default;

void LeakDetectorAsyncWaiter::PerformLeakDetection(
    LeakDetectionResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->PerformLeakDetection(
      base::BindOnce(
          [](base::RunLoop* loop,
             LeakDetectionResultPtr* out_result
,
             LeakDetectionResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif