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


#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_JUMBO_H_
#endif


namespace viz {
namespace mojom {


void VideoDetectorObserverInterceptorForTesting::OnVideoActivityStarted() {
  GetForwardingInterface()->OnVideoActivityStarted();
}
void VideoDetectorObserverInterceptorForTesting::OnVideoActivityEnded() {
  GetForwardingInterface()->OnVideoActivityEnded();
}
VideoDetectorObserverAsyncWaiter::VideoDetectorObserverAsyncWaiter(
    VideoDetectorObserver* proxy) : proxy_(proxy) {}

VideoDetectorObserverAsyncWaiter::~VideoDetectorObserverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif