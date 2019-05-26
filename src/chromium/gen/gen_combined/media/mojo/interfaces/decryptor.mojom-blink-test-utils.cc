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


#include "media/mojo/interfaces/decryptor.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void DecryptorInterceptorForTesting::Initialize(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, mojo::ScopedDataPipeConsumerHandle decrypt_pipe, mojo::ScopedDataPipeProducerHandle decrypted_pipe) {
  GetForwardingInterface()->Initialize(std::move(audio_pipe), std::move(video_pipe), std::move(decrypt_pipe), std::move(decrypted_pipe));
}
void DecryptorInterceptorForTesting::Decrypt(Decryptor::StreamType stream_type, ::media::mojom::blink::DecoderBufferPtr encrypted, DecryptCallback callback) {
  GetForwardingInterface()->Decrypt(std::move(stream_type), std::move(encrypted), std::move(callback));
}
void DecryptorInterceptorForTesting::CancelDecrypt(Decryptor::StreamType stream_type) {
  GetForwardingInterface()->CancelDecrypt(std::move(stream_type));
}
void DecryptorInterceptorForTesting::InitializeAudioDecoder(::media::mojom::blink::AudioDecoderConfigPtr config, InitializeAudioDecoderCallback callback) {
  GetForwardingInterface()->InitializeAudioDecoder(std::move(config), std::move(callback));
}
void DecryptorInterceptorForTesting::InitializeVideoDecoder(::media::mojom::blink::VideoDecoderConfigPtr config, InitializeVideoDecoderCallback callback) {
  GetForwardingInterface()->InitializeVideoDecoder(std::move(config), std::move(callback));
}
void DecryptorInterceptorForTesting::DecryptAndDecodeAudio(::media::mojom::blink::DecoderBufferPtr encrypted, DecryptAndDecodeAudioCallback callback) {
  GetForwardingInterface()->DecryptAndDecodeAudio(std::move(encrypted), std::move(callback));
}
void DecryptorInterceptorForTesting::DecryptAndDecodeVideo(::media::mojom::blink::DecoderBufferPtr encrypted, DecryptAndDecodeVideoCallback callback) {
  GetForwardingInterface()->DecryptAndDecodeVideo(std::move(encrypted), std::move(callback));
}
void DecryptorInterceptorForTesting::ResetDecoder(Decryptor::StreamType stream_type) {
  GetForwardingInterface()->ResetDecoder(std::move(stream_type));
}
void DecryptorInterceptorForTesting::DeinitializeDecoder(Decryptor::StreamType stream_type) {
  GetForwardingInterface()->DeinitializeDecoder(std::move(stream_type));
}
DecryptorAsyncWaiter::DecryptorAsyncWaiter(
    Decryptor* proxy) : proxy_(proxy) {}

DecryptorAsyncWaiter::~DecryptorAsyncWaiter() = default;

void DecryptorAsyncWaiter::Decrypt(
    Decryptor::StreamType stream_type, ::media::mojom::blink::DecoderBufferPtr encrypted, Decryptor::Status* out_status, ::media::mojom::blink::DecoderBufferPtr* out_buffer) {
  base::RunLoop loop;
  proxy_->Decrypt(std::move(stream_type),std::move(encrypted),
      base::BindOnce(
          [](base::RunLoop* loop,
             Decryptor::Status* out_status
,
             ::media::mojom::blink::DecoderBufferPtr* out_buffer
,
             Decryptor::Status status,
             ::media::mojom::blink::DecoderBufferPtr buffer) {*out_status = std::move(status);*out_buffer = std::move(buffer);
            loop->Quit();
          },
          &loop,
          out_status,
          out_buffer));
  loop.Run();
}
void DecryptorAsyncWaiter::InitializeAudioDecoder(
    ::media::mojom::blink::AudioDecoderConfigPtr config, bool* out_success) {
  base::RunLoop loop;
  proxy_->InitializeAudioDecoder(std::move(config),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void DecryptorAsyncWaiter::InitializeVideoDecoder(
    ::media::mojom::blink::VideoDecoderConfigPtr config, bool* out_success) {
  base::RunLoop loop;
  proxy_->InitializeVideoDecoder(std::move(config),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void DecryptorAsyncWaiter::DecryptAndDecodeAudio(
    ::media::mojom::blink::DecoderBufferPtr encrypted, Decryptor::Status* out_status, WTF::Vector<::media::mojom::blink::AudioBufferPtr>* out_audio_buffers) {
  base::RunLoop loop;
  proxy_->DecryptAndDecodeAudio(std::move(encrypted),
      base::BindOnce(
          [](base::RunLoop* loop,
             Decryptor::Status* out_status
,
             WTF::Vector<::media::mojom::blink::AudioBufferPtr>* out_audio_buffers
,
             Decryptor::Status status,
             WTF::Vector<::media::mojom::blink::AudioBufferPtr> audio_buffers) {*out_status = std::move(status);*out_audio_buffers = std::move(audio_buffers);
            loop->Quit();
          },
          &loop,
          out_status,
          out_audio_buffers));
  loop.Run();
}
void DecryptorAsyncWaiter::DecryptAndDecodeVideo(
    ::media::mojom::blink::DecoderBufferPtr encrypted, Decryptor::Status* out_status, ::media::mojom::blink::VideoFramePtr* out_video_frame, FrameResourceReleaserPtr* out_releaser) {
  base::RunLoop loop;
  proxy_->DecryptAndDecodeVideo(std::move(encrypted),
      base::BindOnce(
          [](base::RunLoop* loop,
             Decryptor::Status* out_status
,
             ::media::mojom::blink::VideoFramePtr* out_video_frame
,
             FrameResourceReleaserPtr* out_releaser
,
             Decryptor::Status status,
             ::media::mojom::blink::VideoFramePtr video_frame,
             FrameResourceReleaserPtr releaser) {*out_status = std::move(status);*out_video_frame = std::move(video_frame);*out_releaser = std::move(releaser);
            loop->Quit();
          },
          &loop,
          out_status,
          out_video_frame,
          out_releaser));
  loop.Run();
}



FrameResourceReleaserAsyncWaiter::FrameResourceReleaserAsyncWaiter(
    FrameResourceReleaser* proxy) : proxy_(proxy) {}

FrameResourceReleaserAsyncWaiter::~FrameResourceReleaserAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif