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


#include "media/mojo/interfaces/demuxer_stream.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/audio_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/encryption_scheme_struct_traits.h"
#include "media/mojo/interfaces/hdr_metadata_struct_traits.h"
#include "media/mojo/interfaces/video_color_space_struct_traits.h"
#include "media/mojo/interfaces/video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {


void DemuxerStreamInterceptorForTesting::Initialize(InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(callback));
}
void DemuxerStreamInterceptorForTesting::Read(ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(callback));
}
void DemuxerStreamInterceptorForTesting::EnableBitstreamConverter() {
  GetForwardingInterface()->EnableBitstreamConverter();
}
DemuxerStreamAsyncWaiter::DemuxerStreamAsyncWaiter(
    DemuxerStream* proxy) : proxy_(proxy) {}

DemuxerStreamAsyncWaiter::~DemuxerStreamAsyncWaiter() = default;

void DemuxerStreamAsyncWaiter::Initialize(
    media::DemuxerStream::Type* out_type, mojo::ScopedDataPipeConsumerHandle* out_pipe, base::Optional<::media::AudioDecoderConfig>* out_audio_config, base::Optional<media::VideoDecoderConfig>* out_video_config) {
  base::RunLoop loop;
  proxy_->Initialize(
      base::BindOnce(
          [](base::RunLoop* loop,
             media::DemuxerStream::Type* out_type
,
             mojo::ScopedDataPipeConsumerHandle* out_pipe
,
             base::Optional<::media::AudioDecoderConfig>* out_audio_config
,
             base::Optional<media::VideoDecoderConfig>* out_video_config
,
             media::DemuxerStream::Type type,
             mojo::ScopedDataPipeConsumerHandle pipe,
             const base::Optional<::media::AudioDecoderConfig>& audio_config,
             const base::Optional<media::VideoDecoderConfig>& video_config) {*out_type = std::move(type);*out_pipe = std::move(pipe);*out_audio_config = std::move(audio_config);*out_video_config = std::move(video_config);
            loop->Quit();
          },
          &loop,
          out_type,
          out_pipe,
          out_audio_config,
          out_video_config));
  loop.Run();
}
void DemuxerStreamAsyncWaiter::Read(
    media::DemuxerStream::Status* out_status, ::media::mojom::DecoderBufferPtr* out_buffer, base::Optional<::media::AudioDecoderConfig>* out_audio_config, base::Optional<media::VideoDecoderConfig>* out_video_config) {
  base::RunLoop loop;
  proxy_->Read(
      base::BindOnce(
          [](base::RunLoop* loop,
             media::DemuxerStream::Status* out_status
,
             ::media::mojom::DecoderBufferPtr* out_buffer
,
             base::Optional<::media::AudioDecoderConfig>* out_audio_config
,
             base::Optional<media::VideoDecoderConfig>* out_video_config
,
             media::DemuxerStream::Status status,
             ::media::mojom::DecoderBufferPtr buffer,
             const base::Optional<::media::AudioDecoderConfig>& audio_config,
             const base::Optional<media::VideoDecoderConfig>& video_config) {*out_status = std::move(status);*out_buffer = std::move(buffer);*out_audio_config = std::move(audio_config);*out_video_config = std::move(video_config);
            loop->Quit();
          },
          &loop,
          out_status,
          out_buffer,
          out_audio_config,
          out_video_config));
  loop.Run();
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif