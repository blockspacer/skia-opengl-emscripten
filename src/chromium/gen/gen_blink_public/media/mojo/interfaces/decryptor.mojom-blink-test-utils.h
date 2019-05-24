// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/decryptor.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT DecryptorInterceptorForTesting : public Decryptor {
  virtual Decryptor* GetForwardingInterface() = 0;
  void Initialize(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, mojo::ScopedDataPipeConsumerHandle decrypt_pipe, mojo::ScopedDataPipeProducerHandle decrypted_pipe) override;
  void Decrypt(Decryptor::StreamType stream_type, ::media::mojom::blink::DecoderBufferPtr encrypted, DecryptCallback callback) override;
  void CancelDecrypt(Decryptor::StreamType stream_type) override;
  void InitializeAudioDecoder(::media::mojom::blink::AudioDecoderConfigPtr config, InitializeAudioDecoderCallback callback) override;
  void InitializeVideoDecoder(::media::mojom::blink::VideoDecoderConfigPtr config, InitializeVideoDecoderCallback callback) override;
  void DecryptAndDecodeAudio(::media::mojom::blink::DecoderBufferPtr encrypted, DecryptAndDecodeAudioCallback callback) override;
  void DecryptAndDecodeVideo(::media::mojom::blink::DecoderBufferPtr encrypted, DecryptAndDecodeVideoCallback callback) override;
  void ResetDecoder(Decryptor::StreamType stream_type) override;
  void DeinitializeDecoder(Decryptor::StreamType stream_type) override;
};
class BLINK_PLATFORM_EXPORT DecryptorAsyncWaiter {
 public:
  explicit DecryptorAsyncWaiter(Decryptor* proxy);
  ~DecryptorAsyncWaiter();
  void Decrypt(
      Decryptor::StreamType stream_type, ::media::mojom::blink::DecoderBufferPtr encrypted, Decryptor::Status* out_status, ::media::mojom::blink::DecoderBufferPtr* out_buffer);
  void InitializeAudioDecoder(
      ::media::mojom::blink::AudioDecoderConfigPtr config, bool* out_success);
  void InitializeVideoDecoder(
      ::media::mojom::blink::VideoDecoderConfigPtr config, bool* out_success);
  void DecryptAndDecodeAudio(
      ::media::mojom::blink::DecoderBufferPtr encrypted, Decryptor::Status* out_status, WTF::Vector<::media::mojom::blink::AudioBufferPtr>* out_audio_buffers);
  void DecryptAndDecodeVideo(
      ::media::mojom::blink::DecoderBufferPtr encrypted, Decryptor::Status* out_status, ::media::mojom::blink::VideoFramePtr* out_video_frame, FrameResourceReleaserPtr* out_releaser);

 private:
  Decryptor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DecryptorAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT FrameResourceReleaserInterceptorForTesting : public FrameResourceReleaser {
  virtual FrameResourceReleaser* GetForwardingInterface() = 0;
};
class BLINK_PLATFORM_EXPORT FrameResourceReleaserAsyncWaiter {
 public:
  explicit FrameResourceReleaserAsyncWaiter(FrameResourceReleaser* proxy);
  ~FrameResourceReleaserAsyncWaiter();

 private:
  FrameResourceReleaser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameResourceReleaserAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_BLINK_TEST_UTILS_H_