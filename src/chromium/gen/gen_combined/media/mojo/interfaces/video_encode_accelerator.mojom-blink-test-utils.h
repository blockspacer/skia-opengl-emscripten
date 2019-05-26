// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/video_encode_accelerator.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT VideoEncodeAcceleratorProviderInterceptorForTesting : public VideoEncodeAcceleratorProvider {
  virtual VideoEncodeAcceleratorProvider* GetForwardingInterface() = 0;
  void CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) override;
};
class BLINK_PLATFORM_EXPORT VideoEncodeAcceleratorProviderAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorProviderAsyncWaiter(VideoEncodeAcceleratorProvider* proxy);
  ~VideoEncodeAcceleratorProviderAsyncWaiter();

 private:
  VideoEncodeAcceleratorProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorProviderAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT VideoEncodeAcceleratorInterceptorForTesting : public VideoEncodeAccelerator {
  virtual VideoEncodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(VideoEncodeAcceleratorConfigPtr config, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) override;
  void Encode(::media::mojom::blink::VideoFramePtr frame, bool force_keyframe, EncodeCallback callback) override;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) override;
  void RequestEncodingParametersChange(VideoBitrateAllocationPtr bitrate_allocation, uint32_t framerate) override;
};
class BLINK_PLATFORM_EXPORT VideoEncodeAcceleratorAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorAsyncWaiter(VideoEncodeAccelerator* proxy);
  ~VideoEncodeAcceleratorAsyncWaiter();
  void Initialize(
      VideoEncodeAcceleratorConfigPtr config, VideoEncodeAcceleratorClientPtr client, bool* out_result);
  void Encode(
      ::media::mojom::blink::VideoFramePtr frame, bool force_keyframe);

 private:
  VideoEncodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT VideoEncodeAcceleratorClientInterceptorForTesting : public VideoEncodeAcceleratorClient {
  virtual VideoEncodeAcceleratorClient* GetForwardingInterface() = 0;
  void RequireBitstreamBuffers(uint32_t input_count, const ::blink::WebSize& input_coded_size, uint32_t output_buffer_size) override;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, BitstreamBufferMetadataPtr metadata) override;
  void NotifyError(VideoEncodeAccelerator::Error error) override;
};
class BLINK_PLATFORM_EXPORT VideoEncodeAcceleratorClientAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorClientAsyncWaiter(VideoEncodeAcceleratorClient* proxy);
  ~VideoEncodeAcceleratorClientAsyncWaiter();

 private:
  VideoEncodeAcceleratorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAcceleratorClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_BLINK_TEST_UTILS_H_