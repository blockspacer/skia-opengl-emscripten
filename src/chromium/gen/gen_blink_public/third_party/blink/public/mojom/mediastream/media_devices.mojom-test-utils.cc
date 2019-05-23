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


#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/public/common/mediastream/media_devices_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace blink {
namespace mojom {


void MediaDevicesDispatcherHostInterceptorForTesting::EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, EnumerateDevicesCallback callback) {
  GetForwardingInterface()->EnumerateDevices(std::move(request_audio_input), std::move(request_video_input), std::move(request_audio_output), std::move(request_video_input_capabilities), std::move(request_audio_input_capabilities), std::move(callback));
}
void MediaDevicesDispatcherHostInterceptorForTesting::GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) {
  GetForwardingInterface()->GetVideoInputCapabilities(std::move(callback));
}
void MediaDevicesDispatcherHostInterceptorForTesting::GetAllVideoInputDeviceFormats(const std::string& device_id, GetAllVideoInputDeviceFormatsCallback callback) {
  GetForwardingInterface()->GetAllVideoInputDeviceFormats(std::move(device_id), std::move(callback));
}
void MediaDevicesDispatcherHostInterceptorForTesting::GetAvailableVideoInputDeviceFormats(const std::string& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) {
  GetForwardingInterface()->GetAvailableVideoInputDeviceFormats(std::move(device_id), std::move(callback));
}
void MediaDevicesDispatcherHostInterceptorForTesting::GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) {
  GetForwardingInterface()->GetAudioInputCapabilities(std::move(callback));
}
void MediaDevicesDispatcherHostInterceptorForTesting::AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) {
  GetForwardingInterface()->AddMediaDevicesListener(std::move(subscribe_audio_input), std::move(subscribe_video_input), std::move(subscribe_audio_output), std::move(listener));
}
MediaDevicesDispatcherHostAsyncWaiter::MediaDevicesDispatcherHostAsyncWaiter(
    MediaDevicesDispatcherHost* proxy) : proxy_(proxy) {}

MediaDevicesDispatcherHostAsyncWaiter::~MediaDevicesDispatcherHostAsyncWaiter() = default;

void MediaDevicesDispatcherHostAsyncWaiter::EnumerateDevices(
    bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, std::vector<std::vector<blink::WebMediaDeviceInfo>>* out_enumeration, std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities, std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities) {
  base::RunLoop loop;
  proxy_->EnumerateDevices(std::move(request_audio_input),std::move(request_video_input),std::move(request_audio_output),std::move(request_video_input_capabilities),std::move(request_audio_input_capabilities),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<std::vector<blink::WebMediaDeviceInfo>>* out_enumeration
,
             std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities
,
             std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities
,
             const std::vector<std::vector<blink::WebMediaDeviceInfo>>& enumeration,
             std::vector<VideoInputDeviceCapabilitiesPtr> video_input_device_capabilities,
             std::vector<AudioInputDeviceCapabilitiesPtr> audio_input_device_capabilities) {*out_enumeration = std::move(enumeration);*out_video_input_device_capabilities = std::move(video_input_device_capabilities);*out_audio_input_device_capabilities = std::move(audio_input_device_capabilities);
            loop->Quit();
          },
          &loop,
          out_enumeration,
          out_video_input_device_capabilities,
          out_audio_input_device_capabilities));
  loop.Run();
}
void MediaDevicesDispatcherHostAsyncWaiter::GetVideoInputCapabilities(
    std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities) {
  base::RunLoop loop;
  proxy_->GetVideoInputCapabilities(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities
,
             std::vector<VideoInputDeviceCapabilitiesPtr> video_input_device_capabilities) {*out_video_input_device_capabilities = std::move(video_input_device_capabilities);
            loop->Quit();
          },
          &loop,
          out_video_input_device_capabilities));
  loop.Run();
}
void MediaDevicesDispatcherHostAsyncWaiter::GetAllVideoInputDeviceFormats(
    const std::string& device_id, std::vector<media::VideoCaptureFormat>* out_formats) {
  base::RunLoop loop;
  proxy_->GetAllVideoInputDeviceFormats(std::move(device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::VideoCaptureFormat>* out_formats
,
             const std::vector<media::VideoCaptureFormat>& formats) {*out_formats = std::move(formats);
            loop->Quit();
          },
          &loop,
          out_formats));
  loop.Run();
}
void MediaDevicesDispatcherHostAsyncWaiter::GetAvailableVideoInputDeviceFormats(
    const std::string& device_id, std::vector<media::VideoCaptureFormat>* out_formats) {
  base::RunLoop loop;
  proxy_->GetAvailableVideoInputDeviceFormats(std::move(device_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::VideoCaptureFormat>* out_formats
,
             const std::vector<media::VideoCaptureFormat>& formats) {*out_formats = std::move(formats);
            loop->Quit();
          },
          &loop,
          out_formats));
  loop.Run();
}
void MediaDevicesDispatcherHostAsyncWaiter::GetAudioInputCapabilities(
    std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities) {
  base::RunLoop loop;
  proxy_->GetAudioInputCapabilities(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities
,
             std::vector<AudioInputDeviceCapabilitiesPtr> audio_input_device_capabilities) {*out_audio_input_device_capabilities = std::move(audio_input_device_capabilities);
            loop->Quit();
          },
          &loop,
          out_audio_input_device_capabilities));
  loop.Run();
}



void MediaDevicesListenerInterceptorForTesting::OnDevicesChanged(blink::MediaDeviceType type, const std::vector<blink::WebMediaDeviceInfo>& device_infos) {
  GetForwardingInterface()->OnDevicesChanged(std::move(type), std::move(device_infos));
}
MediaDevicesListenerAsyncWaiter::MediaDevicesListenerAsyncWaiter(
    MediaDevicesListener* proxy) : proxy_(proxy) {}

MediaDevicesListenerAsyncWaiter::~MediaDevicesListenerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif