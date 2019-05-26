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


#include "media/mojo/interfaces/audio_decoder.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void AudioDecoderInterceptorForTesting::Construct(AudioDecoderClientAssociatedPtrInfo client) {
  GetForwardingInterface()->Construct(std::move(client));
}
void AudioDecoderInterceptorForTesting::Initialize(::media::mojom::blink::AudioDecoderConfigPtr config, int32_t cdm_id, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(config), std::move(cdm_id), std::move(callback));
}
void AudioDecoderInterceptorForTesting::SetDataSource(mojo::ScopedDataPipeConsumerHandle receive_pipe) {
  GetForwardingInterface()->SetDataSource(std::move(receive_pipe));
}
void AudioDecoderInterceptorForTesting::Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) {
  GetForwardingInterface()->Decode(std::move(buffer), std::move(callback));
}
void AudioDecoderInterceptorForTesting::Reset(ResetCallback callback) {
  GetForwardingInterface()->Reset(std::move(callback));
}
AudioDecoderAsyncWaiter::AudioDecoderAsyncWaiter(
    AudioDecoder* proxy) : proxy_(proxy) {}

AudioDecoderAsyncWaiter::~AudioDecoderAsyncWaiter() = default;

void AudioDecoderAsyncWaiter::Initialize(
    ::media::mojom::blink::AudioDecoderConfigPtr config, int32_t cdm_id, bool* out_success, bool* out_needs_bitstream_conversion) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(config),std::move(cdm_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool* out_needs_bitstream_conversion
,
             bool success,
             bool needs_bitstream_conversion) {*out_success = std::move(success);*out_needs_bitstream_conversion = std::move(needs_bitstream_conversion);
            loop->Quit();
          },
          &loop,
          out_success,
          out_needs_bitstream_conversion));
  loop.Run();
}
void AudioDecoderAsyncWaiter::Decode(
    ::media::mojom::blink::DecoderBufferPtr buffer, ::media::mojom::blink::DecodeStatus* out_status) {
  base::RunLoop loop;
  proxy_->Decode(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media::mojom::blink::DecodeStatus* out_status
,
             ::media::mojom::blink::DecodeStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void AudioDecoderAsyncWaiter::Reset(
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



void AudioDecoderClientInterceptorForTesting::OnBufferDecoded(::media::mojom::blink::AudioBufferPtr buffer) {
  GetForwardingInterface()->OnBufferDecoded(std::move(buffer));
}
void AudioDecoderClientInterceptorForTesting::OnWaiting(::media::mojom::blink::WaitingReason reason) {
  GetForwardingInterface()->OnWaiting(std::move(reason));
}
AudioDecoderClientAsyncWaiter::AudioDecoderClientAsyncWaiter(
    AudioDecoderClient* proxy) : proxy_(proxy) {}

AudioDecoderClientAsyncWaiter::~AudioDecoderClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif