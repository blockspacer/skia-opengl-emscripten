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


#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "media/mojo/interfaces/display_media_information.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "third_party/blink/public/common/mediastream/media_stream_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void MediaStreamDeviceObserverInterceptorForTesting::OnDeviceStopped(const std::string& label, const blink::MediaStreamDevice& device) {
  GetForwardingInterface()->OnDeviceStopped(std::move(label), std::move(device));
}
void MediaStreamDeviceObserverInterceptorForTesting::OnDeviceChanged(const std::string& label, const blink::MediaStreamDevice& old_device, const blink::MediaStreamDevice& new_device) {
  GetForwardingInterface()->OnDeviceChanged(std::move(label), std::move(old_device), std::move(new_device));
}
MediaStreamDeviceObserverAsyncWaiter::MediaStreamDeviceObserverAsyncWaiter(
    MediaStreamDeviceObserver* proxy) : proxy_(proxy) {}

MediaStreamDeviceObserverAsyncWaiter::~MediaStreamDeviceObserverAsyncWaiter() = default;




void MediaStreamDispatcherHostInterceptorForTesting::GenerateStream(int32_t request_id, const blink::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) {
  GetForwardingInterface()->GenerateStream(std::move(request_id), std::move(controls), std::move(user_gesture), std::move(callback));
}
void MediaStreamDispatcherHostInterceptorForTesting::CancelRequest(int32_t request_id) {
  GetForwardingInterface()->CancelRequest(std::move(request_id));
}
void MediaStreamDispatcherHostInterceptorForTesting::StopStreamDevice(const std::string& device_id, int32_t session_id) {
  GetForwardingInterface()->StopStreamDevice(std::move(device_id), std::move(session_id));
}
void MediaStreamDispatcherHostInterceptorForTesting::OpenDevice(int32_t request_id, const std::string& device_id, blink::MediaStreamType type, OpenDeviceCallback callback) {
  GetForwardingInterface()->OpenDevice(std::move(request_id), std::move(device_id), std::move(type), std::move(callback));
}
void MediaStreamDispatcherHostInterceptorForTesting::CloseDevice(const std::string& label) {
  GetForwardingInterface()->CloseDevice(std::move(label));
}
void MediaStreamDispatcherHostInterceptorForTesting::SetCapturingLinkSecured(int32_t session_id, blink::MediaStreamType type, bool is_secure) {
  GetForwardingInterface()->SetCapturingLinkSecured(std::move(session_id), std::move(type), std::move(is_secure));
}
void MediaStreamDispatcherHostInterceptorForTesting::OnStreamStarted(const std::string& label) {
  GetForwardingInterface()->OnStreamStarted(std::move(label));
}
MediaStreamDispatcherHostAsyncWaiter::MediaStreamDispatcherHostAsyncWaiter(
    MediaStreamDispatcherHost* proxy) : proxy_(proxy) {}

MediaStreamDispatcherHostAsyncWaiter::~MediaStreamDispatcherHostAsyncWaiter() = default;

void MediaStreamDispatcherHostAsyncWaiter::GenerateStream(
    int32_t request_id, const blink::StreamControls& controls, bool user_gesture, blink::MediaStreamRequestResult* out_result, std::string* out_label, std::vector<blink::MediaStreamDevice>* out_audio_devices, std::vector<blink::MediaStreamDevice>* out_video_devices) {
  base::RunLoop loop;
  proxy_->GenerateStream(std::move(request_id),std::move(controls),std::move(user_gesture),
      base::BindOnce(
          [](base::RunLoop* loop,
             blink::MediaStreamRequestResult* out_result
,
             std::string* out_label
,
             std::vector<blink::MediaStreamDevice>* out_audio_devices
,
             std::vector<blink::MediaStreamDevice>* out_video_devices
,
             blink::MediaStreamRequestResult result,
             const std::string& label,
             const std::vector<blink::MediaStreamDevice>& audio_devices,
             const std::vector<blink::MediaStreamDevice>& video_devices) {*out_result = std::move(result);*out_label = std::move(label);*out_audio_devices = std::move(audio_devices);*out_video_devices = std::move(video_devices);
            loop->Quit();
          },
          &loop,
          out_result,
          out_label,
          out_audio_devices,
          out_video_devices));
  loop.Run();
}
void MediaStreamDispatcherHostAsyncWaiter::OpenDevice(
    int32_t request_id, const std::string& device_id, blink::MediaStreamType type, bool* out_success, std::string* out_label, blink::MediaStreamDevice* out_device) {
  base::RunLoop loop;
  proxy_->OpenDevice(std::move(request_id),std::move(device_id),std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             std::string* out_label
,
             blink::MediaStreamDevice* out_device
,
             bool success,
             const std::string& label,
             const blink::MediaStreamDevice& device) {*out_success = std::move(success);*out_label = std::move(label);*out_device = std::move(device);
            loop->Quit();
          },
          &loop,
          out_success,
          out_label,
          out_device));
  loop.Run();
}



void MediaStreamTrackMetricsHostInterceptorForTesting::AddTrack(uint64_t id, bool is_audio, bool is_remote) {
  GetForwardingInterface()->AddTrack(std::move(id), std::move(is_audio), std::move(is_remote));
}
void MediaStreamTrackMetricsHostInterceptorForTesting::RemoveTrack(uint64_t id) {
  GetForwardingInterface()->RemoveTrack(std::move(id));
}
MediaStreamTrackMetricsHostAsyncWaiter::MediaStreamTrackMetricsHostAsyncWaiter(
    MediaStreamTrackMetricsHost* proxy) : proxy_(proxy) {}

MediaStreamTrackMetricsHostAsyncWaiter::~MediaStreamTrackMetricsHostAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif