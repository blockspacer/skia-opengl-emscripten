// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT MediaStreamDeviceObserverInterceptorForTesting : public MediaStreamDeviceObserver {
  virtual MediaStreamDeviceObserver* GetForwardingInterface() = 0;
  void OnDeviceStopped(const std::string& label, const blink::MediaStreamDevice& device) override;
  void OnDeviceChanged(const std::string& label, const blink::MediaStreamDevice& old_device, const blink::MediaStreamDevice& new_device) override;
};
class BLINK_COMMON_EXPORT MediaStreamDeviceObserverAsyncWaiter {
 public:
  explicit MediaStreamDeviceObserverAsyncWaiter(MediaStreamDeviceObserver* proxy);
  ~MediaStreamDeviceObserverAsyncWaiter();

 private:
  MediaStreamDeviceObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDeviceObserverAsyncWaiter);
};


class BLINK_COMMON_EXPORT MediaStreamDispatcherHostInterceptorForTesting : public MediaStreamDispatcherHost {
  virtual MediaStreamDispatcherHost* GetForwardingInterface() = 0;
  void GenerateStream(int32_t request_id, const blink::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) override;
  void CancelRequest(int32_t request_id) override;
  void StopStreamDevice(const std::string& device_id, int32_t session_id) override;
  void OpenDevice(int32_t request_id, const std::string& device_id, blink::MediaStreamType type, OpenDeviceCallback callback) override;
  void CloseDevice(const std::string& label) override;
  void SetCapturingLinkSecured(int32_t session_id, blink::MediaStreamType type, bool is_secure) override;
  void OnStreamStarted(const std::string& label) override;
};
class BLINK_COMMON_EXPORT MediaStreamDispatcherHostAsyncWaiter {
 public:
  explicit MediaStreamDispatcherHostAsyncWaiter(MediaStreamDispatcherHost* proxy);
  ~MediaStreamDispatcherHostAsyncWaiter();
  void GenerateStream(
      int32_t request_id, const blink::StreamControls& controls, bool user_gesture, blink::MediaStreamRequestResult* out_result, std::string* out_label, std::vector<blink::MediaStreamDevice>* out_audio_devices, std::vector<blink::MediaStreamDevice>* out_video_devices);
  void OpenDevice(
      int32_t request_id, const std::string& device_id, blink::MediaStreamType type, bool* out_success, std::string* out_label, blink::MediaStreamDevice* out_device);

 private:
  MediaStreamDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT MediaStreamTrackMetricsHostInterceptorForTesting : public MediaStreamTrackMetricsHost {
  virtual MediaStreamTrackMetricsHost* GetForwardingInterface() = 0;
  void AddTrack(uint64_t id, bool is_audio, bool is_remote) override;
  void RemoveTrack(uint64_t id) override;
};
class BLINK_COMMON_EXPORT MediaStreamTrackMetricsHostAsyncWaiter {
 public:
  explicit MediaStreamTrackMetricsHostAsyncWaiter(MediaStreamTrackMetricsHost* proxy);
  ~MediaStreamTrackMetricsHostAsyncWaiter();

 private:
  MediaStreamTrackMetricsHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamTrackMetricsHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_TEST_UTILS_H_