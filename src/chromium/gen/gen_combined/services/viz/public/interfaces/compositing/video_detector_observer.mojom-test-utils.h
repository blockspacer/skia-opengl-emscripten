// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_TEST_UTILS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_TEST_UTILS_H_

#include "services/viz/public/interfaces/compositing/video_detector_observer.mojom.h"


namespace viz {
namespace mojom {


class  VideoDetectorObserverInterceptorForTesting : public VideoDetectorObserver {
  virtual VideoDetectorObserver* GetForwardingInterface() = 0;
  void OnVideoActivityStarted() override;
  void OnVideoActivityEnded() override;
};
class  VideoDetectorObserverAsyncWaiter {
 public:
  explicit VideoDetectorObserverAsyncWaiter(VideoDetectorObserver* proxy);
  ~VideoDetectorObserverAsyncWaiter();

 private:
  VideoDetectorObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDetectorObserverAsyncWaiter);
};




}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_TEST_UTILS_H_