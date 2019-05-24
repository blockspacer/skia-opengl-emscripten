// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT MediaStreamDeviceObserverInterceptorForTesting : public MediaStreamDeviceObserver {
  virtual MediaStreamDeviceObserver* GetForwardingInterface() = 0;
  void OnDeviceStopped(const WTF::String& label, MediaStreamDevicePtr device) override;
  void OnDeviceChanged(const WTF::String& label, MediaStreamDevicePtr old_device, MediaStreamDevicePtr new_device) override;
};
class PLATFORM_EXPORT MediaStreamDeviceObserverAsyncWaiter {
 public:
  explicit MediaStreamDeviceObserverAsyncWaiter(MediaStreamDeviceObserver* proxy);
  ~MediaStreamDeviceObserverAsyncWaiter();

 private:
  MediaStreamDeviceObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDeviceObserverAsyncWaiter);
};


class PLATFORM_EXPORT MediaStreamDispatcherHostInterceptorForTesting : public MediaStreamDispatcherHost {
  virtual MediaStreamDispatcherHost* GetForwardingInterface() = 0;
  void GenerateStream(int32_t request_id, StreamControlsPtr controls, bool user_gesture, GenerateStreamCallback callback) override;
  void CancelRequest(int32_t request_id) override;
  void StopStreamDevice(const WTF::String& device_id, int32_t session_id) override;
  void OpenDevice(int32_t request_id, const WTF::String& device_id, MediaStreamType type, OpenDeviceCallback callback) override;
  void CloseDevice(const WTF::String& label) override;
  void SetCapturingLinkSecured(int32_t session_id, MediaStreamType type, bool is_secure) override;
  void OnStreamStarted(const WTF::String& label) override;
};
class PLATFORM_EXPORT MediaStreamDispatcherHostAsyncWaiter {
 public:
  explicit MediaStreamDispatcherHostAsyncWaiter(MediaStreamDispatcherHost* proxy);
  ~MediaStreamDispatcherHostAsyncWaiter();
  void GenerateStream(
      int32_t request_id, StreamControlsPtr controls, bool user_gesture, MediaStreamRequestResult* out_result, WTF::String* out_label, WTF::Vector<MediaStreamDevicePtr>* out_audio_devices, WTF::Vector<MediaStreamDevicePtr>* out_video_devices);
  void OpenDevice(
      int32_t request_id, const WTF::String& device_id, MediaStreamType type, bool* out_success, WTF::String* out_label, MediaStreamDevicePtr* out_device);

 private:
  MediaStreamDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHostAsyncWaiter);
};


class PLATFORM_EXPORT MediaStreamTrackMetricsHostInterceptorForTesting : public MediaStreamTrackMetricsHost {
  virtual MediaStreamTrackMetricsHost* GetForwardingInterface() = 0;
  void AddTrack(uint64_t id, bool is_audio, bool is_remote) override;
  void RemoveTrack(uint64_t id) override;
};
class PLATFORM_EXPORT MediaStreamTrackMetricsHostAsyncWaiter {
 public:
  explicit MediaStreamTrackMetricsHostAsyncWaiter(MediaStreamTrackMetricsHost* proxy);
  ~MediaStreamTrackMetricsHostAsyncWaiter();

 private:
  MediaStreamTrackMetricsHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamTrackMetricsHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_TEST_UTILS_H_