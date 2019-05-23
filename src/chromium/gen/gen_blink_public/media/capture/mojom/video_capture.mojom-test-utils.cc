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


#include "media/capture/mojom/video_capture.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_JUMBO_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void VideoCaptureObserverInterceptorForTesting::OnStateChanged(VideoCaptureState state) {
  GetForwardingInterface()->OnStateChanged(std::move(state));
}
void VideoCaptureObserverInterceptorForTesting::OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) {
  GetForwardingInterface()->OnNewBuffer(std::move(buffer_id), std::move(buffer_handle));
}
void VideoCaptureObserverInterceptorForTesting::OnBufferReady(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr info) {
  GetForwardingInterface()->OnBufferReady(std::move(buffer_id), std::move(info));
}
void VideoCaptureObserverInterceptorForTesting::OnBufferDestroyed(int32_t buffer_id) {
  GetForwardingInterface()->OnBufferDestroyed(std::move(buffer_id));
}
VideoCaptureObserverAsyncWaiter::VideoCaptureObserverAsyncWaiter(
    VideoCaptureObserver* proxy) : proxy_(proxy) {}

VideoCaptureObserverAsyncWaiter::~VideoCaptureObserverAsyncWaiter() = default;




void VideoCaptureHostInterceptorForTesting::Start(int32_t device_id, int32_t session_id, const media::VideoCaptureParams& params, VideoCaptureObserverPtr observer) {
  GetForwardingInterface()->Start(std::move(device_id), std::move(session_id), std::move(params), std::move(observer));
}
void VideoCaptureHostInterceptorForTesting::Stop(int32_t device_id) {
  GetForwardingInterface()->Stop(std::move(device_id));
}
void VideoCaptureHostInterceptorForTesting::Pause(int32_t device_id) {
  GetForwardingInterface()->Pause(std::move(device_id));
}
void VideoCaptureHostInterceptorForTesting::Resume(int32_t device_id, int32_t session_id, const media::VideoCaptureParams& params) {
  GetForwardingInterface()->Resume(std::move(device_id), std::move(session_id), std::move(params));
}
void VideoCaptureHostInterceptorForTesting::RequestRefreshFrame(int32_t device_id) {
  GetForwardingInterface()->RequestRefreshFrame(std::move(device_id));
}
void VideoCaptureHostInterceptorForTesting::ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) {
  GetForwardingInterface()->ReleaseBuffer(std::move(device_id), std::move(buffer_id), std::move(consumer_resource_utilization));
}
void VideoCaptureHostInterceptorForTesting::GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) {
  GetForwardingInterface()->GetDeviceSupportedFormats(std::move(device_id), std::move(session_id), std::move(callback));
}
void VideoCaptureHostInterceptorForTesting::GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) {
  GetForwardingInterface()->GetDeviceFormatsInUse(std::move(device_id), std::move(session_id), std::move(callback));
}
void VideoCaptureHostInterceptorForTesting::OnFrameDropped(int32_t device_id, media::VideoCaptureFrameDropReason reason) {
  GetForwardingInterface()->OnFrameDropped(std::move(device_id), std::move(reason));
}
void VideoCaptureHostInterceptorForTesting::OnLog(int32_t device_id, const std::string& message) {
  GetForwardingInterface()->OnLog(std::move(device_id), std::move(message));
}
VideoCaptureHostAsyncWaiter::VideoCaptureHostAsyncWaiter(
    VideoCaptureHost* proxy) : proxy_(proxy) {}

VideoCaptureHostAsyncWaiter::~VideoCaptureHostAsyncWaiter() = default;

void VideoCaptureHostAsyncWaiter::GetDeviceSupportedFormats(
    int32_t device_id, int32_t session_id, std::vector<media::VideoCaptureFormat>* out_formats_supported) {
  base::RunLoop loop;
  proxy_->GetDeviceSupportedFormats(std::move(device_id),std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::VideoCaptureFormat>* out_formats_supported
,
             const std::vector<media::VideoCaptureFormat>& formats_supported) {*out_formats_supported = std::move(formats_supported);
            loop->Quit();
          },
          &loop,
          out_formats_supported));
  loop.Run();
}
void VideoCaptureHostAsyncWaiter::GetDeviceFormatsInUse(
    int32_t device_id, int32_t session_id, std::vector<media::VideoCaptureFormat>* out_formats_in_use) {
  base::RunLoop loop;
  proxy_->GetDeviceFormatsInUse(std::move(device_id),std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::VideoCaptureFormat>* out_formats_in_use
,
             const std::vector<media::VideoCaptureFormat>& formats_in_use) {*out_formats_in_use = std::move(formats_in_use);
            loop->Quit();
          },
          &loop,
          out_formats_in_use));
  loop.Run();
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif