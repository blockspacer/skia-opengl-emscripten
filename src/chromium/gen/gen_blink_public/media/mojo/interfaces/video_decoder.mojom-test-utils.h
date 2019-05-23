// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/video_decoder.mojom.h"


namespace media {
namespace mojom {


class  VideoFrameHandleReleaserInterceptorForTesting : public VideoFrameHandleReleaser {
  virtual VideoFrameHandleReleaser* GetForwardingInterface() = 0;
  void ReleaseVideoFrame(const base::UnguessableToken& release_token, const ::gpu::SyncToken& release_sync_token) override;
};
class  VideoFrameHandleReleaserAsyncWaiter {
 public:
  explicit VideoFrameHandleReleaserAsyncWaiter(VideoFrameHandleReleaser* proxy);
  ~VideoFrameHandleReleaserAsyncWaiter();

 private:
  VideoFrameHandleReleaser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoFrameHandleReleaserAsyncWaiter);
};


class  VideoDecoderInterceptorForTesting : public VideoDecoder {
  virtual VideoDecoder* GetForwardingInterface() = 0;
  void GetSupportedConfigs(GetSupportedConfigsCallback callback) override;
  void Construct(VideoDecoderClientAssociatedPtrInfo client, ::media::mojom::MediaLogAssociatedPtrInfo media_log, VideoFrameHandleReleaserRequest video_frame_handle_releaser, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe, CommandBufferIdPtr command_buffer_id, media::VideoDecoderImplementation implementation, const gfx::ColorSpace& target_color_space) override;
  void Initialize(const media::VideoDecoderConfig& config, bool low_delay, int32_t cdm_id, InitializeCallback callback) override;
  void Decode(::media::mojom::DecoderBufferPtr buffer, DecodeCallback callback) override;
  void Reset(ResetCallback callback) override;
  void OnOverlayInfoChanged(const media::OverlayInfo& overlay_info) override;
};
class  VideoDecoderAsyncWaiter {
 public:
  explicit VideoDecoderAsyncWaiter(VideoDecoder* proxy);
  ~VideoDecoderAsyncWaiter();
  void GetSupportedConfigs(
      base::flat_map<media::VideoDecoderImplementation, std::vector<media::SupportedVideoDecoderConfig>>* out_supported_configs);
  void Initialize(
      const media::VideoDecoderConfig& config, bool low_delay, int32_t cdm_id, bool* out_success, bool* out_needs_bitstream_conversion, int32_t* out_max_decode_requests);
  void Decode(
      ::media::mojom::DecoderBufferPtr buffer, media::DecodeStatus* out_status);
  void Reset(
      );

 private:
  VideoDecoder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoderAsyncWaiter);
};


class  VideoDecoderClientInterceptorForTesting : public VideoDecoderClient {
  virtual VideoDecoderClient* GetForwardingInterface() = 0;
  void OnVideoFrameDecoded(const scoped_refptr<media::VideoFrame>& frame, bool can_read_without_stalling, const base::Optional<base::UnguessableToken>& release_token) override;
  void OnWaiting(media::WaitingReason reason) override;
  void RequestOverlayInfo(bool restart_for_transitions) override;
};
class  VideoDecoderClientAsyncWaiter {
 public:
  explicit VideoDecoderClientAsyncWaiter(VideoDecoderClient* proxy);
  ~VideoDecoderClientAsyncWaiter();

 private:
  VideoDecoderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoderClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_TEST_UTILS_H_