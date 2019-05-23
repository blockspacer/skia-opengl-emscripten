// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/demuxer_stream.mojom.h"


namespace media {
namespace mojom {


class  DemuxerStreamInterceptorForTesting : public DemuxerStream {
  virtual DemuxerStream* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void Read(ReadCallback callback) override;
  void EnableBitstreamConverter() override;
};
class  DemuxerStreamAsyncWaiter {
 public:
  explicit DemuxerStreamAsyncWaiter(DemuxerStream* proxy);
  ~DemuxerStreamAsyncWaiter();
  void Initialize(
      media::DemuxerStream::Type* out_type, mojo::ScopedDataPipeConsumerHandle* out_pipe, base::Optional<::media::AudioDecoderConfig>* out_audio_config, base::Optional<media::VideoDecoderConfig>* out_video_config);
  void Read(
      media::DemuxerStream::Status* out_status, ::media::mojom::DecoderBufferPtr* out_buffer, base::Optional<::media::AudioDecoderConfig>* out_audio_config, base::Optional<media::VideoDecoderConfig>* out_video_config);

 private:
  DemuxerStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStreamAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_TEST_UTILS_H_