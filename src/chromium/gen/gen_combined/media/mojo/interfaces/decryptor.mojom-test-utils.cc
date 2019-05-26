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


#include "media/mojo/interfaces/decryptor.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/audio_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/encryption_scheme_struct_traits.h"
#include "media/mojo/interfaces/hdr_metadata_struct_traits.h"
#include "media/mojo/interfaces/video_color_space_struct_traits.h"
#include "media/mojo/interfaces/video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_frame_struct_traits.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void DecryptorInterceptorForTesting::Initialize(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, mojo::ScopedDataPipeConsumerHandle decrypt_pipe, mojo::ScopedDataPipeProducerHandle decrypted_pipe) {
  GetForwardingInterface()->Initialize(std::move(audio_pipe), std::move(video_pipe), std::move(decrypt_pipe), std::move(decrypted_pipe));
}
void DecryptorInterceptorForTesting::Decrypt(media::Decryptor::StreamType stream_type, ::media::mojom::DecoderBufferPtr encrypted, DecryptCallback callback) {
  GetForwardingInterface()->Decrypt(std::move(stream_type), std::move(encrypted), std::move(callback));
}
void DecryptorInterceptorForTesting::CancelDecrypt(media::Decryptor::StreamType stream_type) {
  GetForwardingInterface()->CancelDecrypt(std::move(stream_type));
}
void DecryptorInterceptorForTesting::InitializeAudioDecoder(const ::media::AudioDecoderConfig& config, InitializeAudioDecoderCallback callback) {
  GetForwardingInterface()->InitializeAudioDecoder(std::move(config), std::move(callback));
}
void DecryptorInterceptorForTesting::InitializeVideoDecoder(const media::VideoDecoderConfig& config, InitializeVideoDecoderCallback callback) {
  GetForwardingInterface()->InitializeVideoDecoder(std::move(config), std::move(callback));
}
void DecryptorInterceptorForTesting::DecryptAndDecodeAudio(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeAudioCallback callback) {
  GetForwardingInterface()->DecryptAndDecodeAudio(std::move(encrypted), std::move(callback));
}
void DecryptorInterceptorForTesting::DecryptAndDecodeVideo(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeVideoCallback callback) {
  GetForwardingInterface()->DecryptAndDecodeVideo(std::move(encrypted), std::move(callback));
}
void DecryptorInterceptorForTesting::ResetDecoder(media::Decryptor::StreamType stream_type) {
  GetForwardingInterface()->ResetDecoder(std::move(stream_type));
}
void DecryptorInterceptorForTesting::DeinitializeDecoder(media::Decryptor::StreamType stream_type) {
  GetForwardingInterface()->DeinitializeDecoder(std::move(stream_type));
}
DecryptorAsyncWaiter::DecryptorAsyncWaiter(
    Decryptor* proxy) : proxy_(proxy) {}

DecryptorAsyncWaiter::~DecryptorAsyncWaiter() = default;

void DecryptorAsyncWaiter::Decrypt(
    media::Decryptor::StreamType stream_type, ::media::mojom::DecoderBufferPtr encrypted, media::Decryptor::Status* out_status, ::media::mojom::DecoderBufferPtr* out_buffer) {
  base::RunLoop loop;
  proxy_->Decrypt(std::move(stream_type),std::move(encrypted),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::Decryptor::Status* out_status
,
             ::media::mojom::DecoderBufferPtr* out_buffer
,
             media::Decryptor::Status status,
             ::media::mojom::DecoderBufferPtr buffer) {*out_status = std::move(status);*out_buffer = std::move(buffer);
            loop->Quit();
          },
          &loop,
          out_status,
          out_buffer));
  loop.Run();
}
void DecryptorAsyncWaiter::InitializeAudioDecoder(
    const ::media::AudioDecoderConfig& config, bool* out_success) {
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
    const media::VideoDecoderConfig& config, bool* out_success) {
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
    ::media::mojom::DecoderBufferPtr encrypted, media::Decryptor::Status* out_status, std::vector<::media::mojom::AudioBufferPtr>* out_audio_buffers) {
  base::RunLoop loop;
  proxy_->DecryptAndDecodeAudio(std::move(encrypted),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::Decryptor::Status* out_status
,
             std::vector<::media::mojom::AudioBufferPtr>* out_audio_buffers
,
             media::Decryptor::Status status,
             std::vector<::media::mojom::AudioBufferPtr> audio_buffers) {*out_status = std::move(status);*out_audio_buffers = std::move(audio_buffers);
            loop->Quit();
          },
          &loop,
          out_status,
          out_audio_buffers));
  loop.Run();
}
void DecryptorAsyncWaiter::DecryptAndDecodeVideo(
    ::media::mojom::DecoderBufferPtr encrypted, media::Decryptor::Status* out_status, scoped_refptr<media::VideoFrame>* out_video_frame, FrameResourceReleaserPtr* out_releaser) {
  base::RunLoop loop;
  proxy_->DecryptAndDecodeVideo(std::move(encrypted),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::Decryptor::Status* out_status
,
             scoped_refptr<media::VideoFrame>* out_video_frame
,
             FrameResourceReleaserPtr* out_releaser
,
             media::Decryptor::Status status,
             const scoped_refptr<media::VideoFrame>& video_frame,
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






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif