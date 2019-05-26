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


#include "media/mojo/interfaces/video_encode_accelerator.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_encode_accelerator_mojom_traits.h"
#include "media/mojo/interfaces/video_frame_struct_traits.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void VideoEncodeAcceleratorProviderInterceptorForTesting::CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) {
  GetForwardingInterface()->CreateVideoEncodeAccelerator(std::move(request));
}
VideoEncodeAcceleratorProviderAsyncWaiter::VideoEncodeAcceleratorProviderAsyncWaiter(
    VideoEncodeAcceleratorProvider* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorProviderAsyncWaiter::~VideoEncodeAcceleratorProviderAsyncWaiter() = default;




void VideoEncodeAcceleratorInterceptorForTesting::Initialize(const media::VideoEncodeAccelerator::Config& config, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(config), std::move(client), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::Encode(const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) {
  GetForwardingInterface()->Encode(std::move(frame), std::move(force_keyframe), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) {
  GetForwardingInterface()->UseOutputBitstreamBuffer(std::move(bitstream_buffer_id), std::move(buffer));
}
void VideoEncodeAcceleratorInterceptorForTesting::RequestEncodingParametersChange(const media::VideoBitrateAllocation& bitrate_allocation, uint32_t framerate) {
  GetForwardingInterface()->RequestEncodingParametersChange(std::move(bitrate_allocation), std::move(framerate));
}
VideoEncodeAcceleratorAsyncWaiter::VideoEncodeAcceleratorAsyncWaiter(
    VideoEncodeAccelerator* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorAsyncWaiter::~VideoEncodeAcceleratorAsyncWaiter() = default;

void VideoEncodeAcceleratorAsyncWaiter::Initialize(
    const media::VideoEncodeAccelerator::Config& config, VideoEncodeAcceleratorClientPtr client, bool* out_result) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(config),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void VideoEncodeAcceleratorAsyncWaiter::Encode(
    const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe) {
  base::RunLoop loop;
  proxy_->Encode(std::move(frame),std::move(force_keyframe),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void VideoEncodeAcceleratorClientInterceptorForTesting::RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) {
  GetForwardingInterface()->RequireBitstreamBuffers(std::move(input_count), std::move(input_coded_size), std::move(output_buffer_size));
}
void VideoEncodeAcceleratorClientInterceptorForTesting::BitstreamBufferReady(int32_t bitstream_buffer_id, const media::BitstreamBufferMetadata& metadata) {
  GetForwardingInterface()->BitstreamBufferReady(std::move(bitstream_buffer_id), std::move(metadata));
}
void VideoEncodeAcceleratorClientInterceptorForTesting::NotifyError(media::VideoEncodeAccelerator::Error error) {
  GetForwardingInterface()->NotifyError(std::move(error));
}
VideoEncodeAcceleratorClientAsyncWaiter::VideoEncodeAcceleratorClientAsyncWaiter(
    VideoEncodeAcceleratorClient* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorClientAsyncWaiter::~VideoEncodeAcceleratorClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif