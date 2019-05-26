// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT MediaDevicesDispatcherHostInterceptorForTesting : public MediaDevicesDispatcherHost {
  virtual MediaDevicesDispatcherHost* GetForwardingInterface() = 0;
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, EnumerateDevicesCallback callback) override;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) override;
  void GetAllVideoInputDeviceFormats(const std::string& device_id, GetAllVideoInputDeviceFormatsCallback callback) override;
  void GetAvailableVideoInputDeviceFormats(const std::string& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) override;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) override;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) override;
};
class BLINK_COMMON_EXPORT MediaDevicesDispatcherHostAsyncWaiter {
 public:
  explicit MediaDevicesDispatcherHostAsyncWaiter(MediaDevicesDispatcherHost* proxy);
  ~MediaDevicesDispatcherHostAsyncWaiter();
  void EnumerateDevices(
      bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, std::vector<std::vector<blink::WebMediaDeviceInfo>>* out_enumeration, std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities, std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities);
  void GetVideoInputCapabilities(
      std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities);
  void GetAllVideoInputDeviceFormats(
      const std::string& device_id, std::vector<media::VideoCaptureFormat>* out_formats);
  void GetAvailableVideoInputDeviceFormats(
      const std::string& device_id, std::vector<media::VideoCaptureFormat>* out_formats);
  void GetAudioInputCapabilities(
      std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities);

 private:
  MediaDevicesDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT MediaDevicesListenerInterceptorForTesting : public MediaDevicesListener {
  virtual MediaDevicesListener* GetForwardingInterface() = 0;
  void OnDevicesChanged(blink::MediaDeviceType type, const std::vector<blink::WebMediaDeviceInfo>& device_infos) override;
};
class BLINK_COMMON_EXPORT MediaDevicesListenerAsyncWaiter {
 public:
  explicit MediaDevicesListenerAsyncWaiter(MediaDevicesListener* proxy);
  ~MediaDevicesListenerAsyncWaiter();

 private:
  MediaDevicesListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesListenerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_TEST_UTILS_H_