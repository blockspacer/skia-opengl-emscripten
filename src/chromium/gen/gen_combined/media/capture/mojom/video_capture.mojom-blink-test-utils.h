// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/capture/mojom/video_capture.mojom-blink.h"


namespace media {
namespace mojom {
namespace blink {


class  VideoCaptureObserverInterceptorForTesting : public VideoCaptureObserver {
  virtual VideoCaptureObserver* GetForwardingInterface() = 0;
  void OnStateChanged(VideoCaptureState state) override;
  void OnNewBuffer(int32_t buffer_id, ::media::mojom::blink::VideoBufferHandlePtr buffer_handle) override;
  void OnBufferReady(int32_t buffer_id, ::media::mojom::blink::VideoFrameInfoPtr info) override;
  void OnBufferDestroyed(int32_t buffer_id) override;
};
class  VideoCaptureObserverAsyncWaiter {
 public:
  explicit VideoCaptureObserverAsyncWaiter(VideoCaptureObserver* proxy);
  ~VideoCaptureObserverAsyncWaiter();

 private:
  VideoCaptureObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoCaptureObserverAsyncWaiter);
};


class  VideoCaptureHostInterceptorForTesting : public VideoCaptureHost {
  virtual VideoCaptureHost* GetForwardingInterface() = 0;
  void Start(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params, VideoCaptureObserverPtr observer) override;
  void Stop(int32_t device_id) override;
  void Pause(int32_t device_id) override;
  void Resume(int32_t device_id, int32_t session_id, ::media::mojom::blink::VideoCaptureParamsPtr params) override;
  void RequestRefreshFrame(int32_t device_id) override;
  void ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) override;
  void GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) override;
  void GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) override;
  void OnFrameDropped(int32_t device_id, ::media::mojom::blink::VideoCaptureFrameDropReason reason) override;
  void OnLog(int32_t device_id, const WTF::String& message) override;
};
class  VideoCaptureHostAsyncWaiter {
 public:
  explicit VideoCaptureHostAsyncWaiter(VideoCaptureHost* proxy);
  ~VideoCaptureHostAsyncWaiter();
  void GetDeviceSupportedFormats(
      int32_t device_id, int32_t session_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats_supported);
  void GetDeviceFormatsInUse(
      int32_t device_id, int32_t session_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats_in_use);

 private:
  VideoCaptureHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoCaptureHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_TEST_UTILS_H_