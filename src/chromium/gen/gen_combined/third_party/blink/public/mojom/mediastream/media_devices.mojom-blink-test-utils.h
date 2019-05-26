// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT MediaDevicesDispatcherHostInterceptorForTesting : public MediaDevicesDispatcherHost {
  virtual MediaDevicesDispatcherHost* GetForwardingInterface() = 0;
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, EnumerateDevicesCallback callback) override;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) override;
  void GetAllVideoInputDeviceFormats(const WTF::String& device_id, GetAllVideoInputDeviceFormatsCallback callback) override;
  void GetAvailableVideoInputDeviceFormats(const WTF::String& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) override;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) override;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) override;
};
class PLATFORM_EXPORT MediaDevicesDispatcherHostAsyncWaiter {
 public:
  explicit MediaDevicesDispatcherHostAsyncWaiter(MediaDevicesDispatcherHost* proxy);
  ~MediaDevicesDispatcherHostAsyncWaiter();
  void EnumerateDevices(
      bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, WTF::Vector<WTF::Vector<MediaDeviceInfoPtr>>* out_enumeration, WTF::Vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities, WTF::Vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities);
  void GetVideoInputCapabilities(
      WTF::Vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities);
  void GetAllVideoInputDeviceFormats(
      const WTF::String& device_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats);
  void GetAvailableVideoInputDeviceFormats(
      const WTF::String& device_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats);
  void GetAudioInputCapabilities(
      WTF::Vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities);

 private:
  MediaDevicesDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHostAsyncWaiter);
};


class PLATFORM_EXPORT MediaDevicesListenerInterceptorForTesting : public MediaDevicesListener {
  virtual MediaDevicesListener* GetForwardingInterface() = 0;
  void OnDevicesChanged(MediaDeviceType type, WTF::Vector<MediaDeviceInfoPtr> device_infos) override;
};
class PLATFORM_EXPORT MediaDevicesListenerAsyncWaiter {
 public:
  explicit MediaDevicesListenerAsyncWaiter(MediaDevicesListener* proxy);
  ~MediaDevicesListenerAsyncWaiter();

 private:
  MediaDevicesListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesListenerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_TEST_UTILS_H_