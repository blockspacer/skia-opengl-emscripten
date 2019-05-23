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


#include "media/mojo/interfaces/video_decoder.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "media/mojo/interfaces/media_log.mojom.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/color_space.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/encryption_scheme_struct_traits.h"
#include "media/mojo/interfaces/hdr_metadata_struct_traits.h"
#include "media/mojo/interfaces/supported_video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_color_space_struct_traits.h"
#include "media/mojo/interfaces/video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_frame_struct_traits.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void VideoFrameHandleReleaserInterceptorForTesting::ReleaseVideoFrame(const base::UnguessableToken& release_token, const ::gpu::SyncToken& release_sync_token) {
  GetForwardingInterface()->ReleaseVideoFrame(std::move(release_token), std::move(release_sync_token));
}
VideoFrameHandleReleaserAsyncWaiter::VideoFrameHandleReleaserAsyncWaiter(
    VideoFrameHandleReleaser* proxy) : proxy_(proxy) {}

VideoFrameHandleReleaserAsyncWaiter::~VideoFrameHandleReleaserAsyncWaiter() = default;




void VideoDecoderInterceptorForTesting::GetSupportedConfigs(GetSupportedConfigsCallback callback) {
  GetForwardingInterface()->GetSupportedConfigs(std::move(callback));
}
void VideoDecoderInterceptorForTesting::Construct(VideoDecoderClientAssociatedPtrInfo client, ::media::mojom::MediaLogAssociatedPtrInfo media_log, VideoFrameHandleReleaserRequest video_frame_handle_releaser, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe, CommandBufferIdPtr command_buffer_id, media::VideoDecoderImplementation implementation, const gfx::ColorSpace& target_color_space) {
  GetForwardingInterface()->Construct(std::move(client), std::move(media_log), std::move(video_frame_handle_releaser), std::move(decoder_buffer_pipe), std::move(command_buffer_id), std::move(implementation), std::move(target_color_space));
}
void VideoDecoderInterceptorForTesting::Initialize(const media::VideoDecoderConfig& config, bool low_delay, int32_t cdm_id, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(config), std::move(low_delay), std::move(cdm_id), std::move(callback));
}
void VideoDecoderInterceptorForTesting::Decode(::media::mojom::DecoderBufferPtr buffer, DecodeCallback callback) {
  GetForwardingInterface()->Decode(std::move(buffer), std::move(callback));
}
void VideoDecoderInterceptorForTesting::Reset(ResetCallback callback) {
  GetForwardingInterface()->Reset(std::move(callback));
}
void VideoDecoderInterceptorForTesting::OnOverlayInfoChanged(const media::OverlayInfo& overlay_info) {
  GetForwardingInterface()->OnOverlayInfoChanged(std::move(overlay_info));
}
VideoDecoderAsyncWaiter::VideoDecoderAsyncWaiter(
    VideoDecoder* proxy) : proxy_(proxy) {}

VideoDecoderAsyncWaiter::~VideoDecoderAsyncWaiter() = default;

void VideoDecoderAsyncWaiter::GetSupportedConfigs(
    base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>>* out_supported_configs) {
  base::RunLoop loop;
  proxy_->GetSupportedConfigs(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>>* out_supported_configs
,
             const base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>>& supported_configs) {*out_supported_configs = std::move(supported_configs);
            loop->Quit();
          },
          &loop,
          out_supported_configs));
  loop.Run();
}
void VideoDecoderAsyncWaiter::Initialize(
    const media::VideoDecoderConfig& config, bool low_delay, int32_t cdm_id, bool* out_success, bool* out_needs_bitstream_conversion, int32_t* out_max_decode_requests) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(config),std::move(low_delay),std::move(cdm_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool* out_needs_bitstream_conversion
,
             int32_t* out_max_decode_requests
,
             bool success,
             bool needs_bitstream_conversion,
             int32_t max_decode_requests) {*out_success = std::move(success);*out_needs_bitstream_conversion = std::move(needs_bitstream_conversion);*out_max_decode_requests = std::move(max_decode_requests);
            loop->Quit();
          },
          &loop,
          out_success,
          out_needs_bitstream_conversion,
          out_max_decode_requests));
  loop.Run();
}
void VideoDecoderAsyncWaiter::Decode(
    ::media::mojom::DecoderBufferPtr buffer, media::DecodeStatus* out_status) {
  base::RunLoop loop;
  proxy_->Decode(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::DecodeStatus* out_status
,
             media::DecodeStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void VideoDecoderAsyncWaiter::Reset(
    ) {
  base::RunLoop loop;
  proxy_->Reset(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void VideoDecoderClientInterceptorForTesting::OnVideoFrameDecoded(const scoped_refptr<media::VideoFrame>& frame, bool can_read_without_stalling, const base::Optional<base::UnguessableToken>& release_token) {
  GetForwardingInterface()->OnVideoFrameDecoded(std::move(frame), std::move(can_read_without_stalling), std::move(release_token));
}
void VideoDecoderClientInterceptorForTesting::OnWaiting(media::WaitingReason reason) {
  GetForwardingInterface()->OnWaiting(std::move(reason));
}
void VideoDecoderClientInterceptorForTesting::RequestOverlayInfo(bool restart_for_transitions) {
  GetForwardingInterface()->RequestOverlayInfo(std::move(restart_for_transitions));
}
VideoDecoderClientAsyncWaiter::VideoDecoderClientAsyncWaiter(
    VideoDecoderClient* proxy) : proxy_(proxy) {}

VideoDecoderClientAsyncWaiter::~VideoDecoderClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif