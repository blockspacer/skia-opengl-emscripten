// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/video_encode_accelerator.mojom.h"


namespace media {
namespace mojom {


class  VideoEncodeAcceleratorProviderInterceptorForTesting : public VideoEncodeAcceleratorProvider {
  virtual VideoEncodeAcceleratorProvider* GetForwardingInterface() = 0;
  void CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) override;
};
class  VideoEncodeAcceleratorProviderAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorProviderAsyncWaiter(VideoEncodeAcceleratorProvider* proxy);
  ~VideoEncodeAcceleratorProviderAsyncWaiter();

 private:
  VideoEncodeAcceleratorProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorProviderAsyncWaiter);
};


class  VideoEncodeAcceleratorInterceptorForTesting : public VideoEncodeAccelerator {
  virtual VideoEncodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(const media::VideoEncodeAccelerator::Config& config, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) override;
  void Encode(const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) override;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) override;
  void RequestEncodingParametersChange(const media::VideoBitrateAllocation& bitrate_allocation, uint32_t framerate) override;
};
class  VideoEncodeAcceleratorAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorAsyncWaiter(VideoEncodeAccelerator* proxy);
  ~VideoEncodeAcceleratorAsyncWaiter();
  void Initialize(
      const media::VideoEncodeAccelerator::Config& config, VideoEncodeAcceleratorClientPtr client, bool* out_result);
  void Encode(
      const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe);

 private:
  VideoEncodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorAsyncWaiter);
};


class  VideoEncodeAcceleratorClientInterceptorForTesting : public VideoEncodeAcceleratorClient {
  virtual VideoEncodeAcceleratorClient* GetForwardingInterface() = 0;
  void RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) override;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, const media::BitstreamBufferMetadata& metadata) override;
  void NotifyError(media::VideoEncodeAccelerator::Error error) override;
};
class  VideoEncodeAcceleratorClientAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorClientAsyncWaiter(VideoEncodeAcceleratorClient* proxy);
  ~VideoEncodeAcceleratorClientAsyncWaiter();

 private:
  VideoEncodeAcceleratorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_TEST_UTILS_H_