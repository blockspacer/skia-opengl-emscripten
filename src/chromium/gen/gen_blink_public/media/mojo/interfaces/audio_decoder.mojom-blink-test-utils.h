// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/audio_decoder.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT AudioDecoderInterceptorForTesting : public AudioDecoder {
  virtual AudioDecoder* GetForwardingInterface() = 0;
  void Construct(AudioDecoderClientAssociatedPtrInfo client) override;
  void Initialize(::media::mojom::blink::AudioDecoderConfigPtr config, int32_t cdm_id, InitializeCallback callback) override;
  void SetDataSource(mojo::ScopedDataPipeConsumerHandle receive_pipe) override;
  void Decode(::media::mojom::blink::DecoderBufferPtr buffer, DecodeCallback callback) override;
  void Reset(ResetCallback callback) override;
};
class BLINK_PLATFORM_EXPORT AudioDecoderAsyncWaiter {
 public:
  explicit AudioDecoderAsyncWaiter(AudioDecoder* proxy);
  ~AudioDecoderAsyncWaiter();
  void Initialize(
      ::media::mojom::blink::AudioDecoderConfigPtr config, int32_t cdm_id, bool* out_success, bool* out_needs_bitstream_conversion);
  void Decode(
      ::media::mojom::blink::DecoderBufferPtr buffer, ::media::mojom::blink::DecodeStatus* out_status);
  void Reset(
      );

 private:
  AudioDecoder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioDecoderAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT AudioDecoderClientInterceptorForTesting : public AudioDecoderClient {
  virtual AudioDecoderClient* GetForwardingInterface() = 0;
  void OnBufferDecoded(::media::mojom::blink::AudioBufferPtr buffer) override;
  void OnWaiting(::media::mojom::blink::WaitingReason reason) override;
};
class BLINK_PLATFORM_EXPORT AudioDecoderClientAsyncWaiter {
 public:
  explicit AudioDecoderClientAsyncWaiter(AudioDecoderClient* proxy);
  ~AudioDecoderClientAsyncWaiter();

 private:
  AudioDecoderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioDecoderClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_BLINK_TEST_UTILS_H_