// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/demuxer_stream.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT DemuxerStreamInterceptorForTesting : public DemuxerStream {
  virtual DemuxerStream* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void Read(ReadCallback callback) override;
  void EnableBitstreamConverter() override;
};
class BLINK_PLATFORM_EXPORT DemuxerStreamAsyncWaiter {
 public:
  explicit DemuxerStreamAsyncWaiter(DemuxerStream* proxy);
  ~DemuxerStreamAsyncWaiter();
  void Initialize(
      DemuxerStream::Type* out_type, mojo::ScopedDataPipeConsumerHandle* out_pipe, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config);
  void Read(
      DemuxerStream::Status* out_status, ::media::mojom::blink::DecoderBufferPtr* out_buffer, ::media::mojom::blink::AudioDecoderConfigPtr* out_audio_config, ::media::mojom::blink::VideoDecoderConfigPtr* out_video_config);

 private:
  DemuxerStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStreamAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_BLINK_TEST_UTILS_H_