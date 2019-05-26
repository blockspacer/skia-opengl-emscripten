// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/decryptor.mojom.h"


namespace media {
namespace mojom {


class  DecryptorInterceptorForTesting : public Decryptor {
  virtual Decryptor* GetForwardingInterface() = 0;
  void Initialize(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, mojo::ScopedDataPipeConsumerHandle decrypt_pipe, mojo::ScopedDataPipeProducerHandle decrypted_pipe) override;
  void Decrypt(media::Decryptor::StreamType stream_type, ::media::mojom::DecoderBufferPtr encrypted, DecryptCallback callback) override;
  void CancelDecrypt(media::Decryptor::StreamType stream_type) override;
  void InitializeAudioDecoder(const ::media::AudioDecoderConfig& config, InitializeAudioDecoderCallback callback) override;
  void InitializeVideoDecoder(const media::VideoDecoderConfig& config, InitializeVideoDecoderCallback callback) override;
  void DecryptAndDecodeAudio(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeAudioCallback callback) override;
  void DecryptAndDecodeVideo(::media::mojom::DecoderBufferPtr encrypted, DecryptAndDecodeVideoCallback callback) override;
  void ResetDecoder(media::Decryptor::StreamType stream_type) override;
  void DeinitializeDecoder(media::Decryptor::StreamType stream_type) override;
};
class  DecryptorAsyncWaiter {
 public:
  explicit DecryptorAsyncWaiter(Decryptor* proxy);
  ~DecryptorAsyncWaiter();
  void Decrypt(
      media::Decryptor::StreamType stream_type, ::media::mojom::DecoderBufferPtr encrypted, media::Decryptor::Status* out_status, ::media::mojom::DecoderBufferPtr* out_buffer);
  void InitializeAudioDecoder(
      const ::media::AudioDecoderConfig& config, bool* out_success);
  void InitializeVideoDecoder(
      const media::VideoDecoderConfig& config, bool* out_success);
  void DecryptAndDecodeAudio(
      ::media::mojom::DecoderBufferPtr encrypted, media::Decryptor::Status* out_status, std::vector<::media::mojom::AudioBufferPtr>* out_audio_buffers);
  void DecryptAndDecodeVideo(
      ::media::mojom::DecoderBufferPtr encrypted, media::Decryptor::Status* out_status, scoped_refptr<media::VideoFrame>* out_video_frame, FrameResourceReleaserPtr* out_releaser);

 private:
  Decryptor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DecryptorAsyncWaiter);
};


class  FrameResourceReleaserInterceptorForTesting : public FrameResourceReleaser {
  virtual FrameResourceReleaser* GetForwardingInterface() = 0;
};
class  FrameResourceReleaserAsyncWaiter {
 public:
  explicit FrameResourceReleaserAsyncWaiter(FrameResourceReleaser* proxy);
  ~FrameResourceReleaserAsyncWaiter();

 private:
  FrameResourceReleaser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameResourceReleaserAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_TEST_UTILS_H_