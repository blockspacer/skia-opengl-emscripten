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


#include "media/mojo/interfaces/demuxer_stream.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


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
    DemuxerStream::Type* out_type, mojo::ScopedDataPipeConsumerHandle* out_pipe, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config) {
  base::RunLoop loop;
  proxy_->Initialize(
      base::BindOnce(
          [](base::RunLoop* loop,
             DemuxerStream::Type* out_type
,
             mojo::ScopedDataPipeConsumerHandle* out_pipe
,
             ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config
,
             ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config
,
             DemuxerStream::Type type,
             mojo::ScopedDataPipeConsumerHandle pipe,
             ::media::mojom::blink::AudioDecoderConfigPtr audio_config,
             ::media::mojom::blink::VideoDecoderConfigPtr video_config) {*out_type = std::move(type);*out_pipe = std::move(pipe);*out_audio_config = std::move(audio_config);*out_video_config = std::move(video_config);
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
    DemuxerStream::Status* out_status, ::media::mojom::blink::DecoderBufferPtr* out_buffer, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config) {
  base::RunLoop loop;
  proxy_->Read(
      base::BindOnce(
          [](base::RunLoop* loop,
             DemuxerStream::Status* out_status
,
             ::media::mojom::blink::DecoderBufferPtr* out_buffer
,
             ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config
,
             ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config
,
             DemuxerStream::Status status,
             ::media::mojom::blink::DecoderBufferPtr buffer,
             ::media::mojom::blink::AudioDecoderConfigPtr audio_config,
             ::media::mojom::blink::VideoDecoderConfigPtr video_config) {*out_status = std::move(status);*out_buffer = std::move(buffer);*out_audio_config = std::move(audio_config);*out_video_config = std::move(video_config);
            loop->Quit();
          },
          &loop,
          out_status,
          out_buffer,
          out_audio_config,
          out_video_config));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif