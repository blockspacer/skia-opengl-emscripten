// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/renderer.mojom.h"


namespace media {
namespace mojom {


class  RendererInterceptorForTesting : public Renderer {
  virtual Renderer* GetForwardingInterface() = 0;
  void Initialize(RendererClientAssociatedPtrInfo client, base::Optional<std::vector<::media::mojom::DemuxerStreamPtrInfo>> streams, const base::Optional<GURL>& media_url, const base::Optional<GURL>& first_party_for_cookies, bool allow_credentials, InitializeCallback callback) override;
  void Flush(FlushCallback callback) override;
  void StartPlayingFrom(base::TimeDelta time) override;
  void SetPlaybackRate(double playback_rate) override;
  void SetVolume(float volume) override;
  void SetCdm(int32_t cdm_id, SetCdmCallback callback) override;
};
class  RendererAsyncWaiter {
 public:
  explicit RendererAsyncWaiter(Renderer* proxy);
  ~RendererAsyncWaiter();
  void Initialize(
      RendererClientAssociatedPtrInfo client, base::Optional<std::vector<::media::mojom::DemuxerStreamPtrInfo>> streams, const base::Optional<GURL>& media_url, const base::Optional<GURL>& first_party_for_cookies, bool allow_credentials, bool* out_success);
  void Flush(
      );
  void SetCdm(
      int32_t cdm_id, bool* out_success);

 private:
  Renderer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererAsyncWaiter);
};


class  RendererClientInterceptorForTesting : public RendererClient {
  virtual RendererClient* GetForwardingInterface() = 0;
  void OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time, base::TimeTicks capture_time) override;
  void OnBufferingStateChange(media::BufferingState state) override;
  void OnEnded() override;
  void OnError() override;
  void OnAudioConfigChange(const ::media::AudioDecoderConfig& config) override;
  void OnVideoConfigChange(const media::VideoDecoderConfig& config) override;
  void OnVideoNaturalSizeChange(const gfx::Size& size) override;
  void OnVideoOpacityChange(bool opaque) override;
  void OnStatisticsUpdate(const media::PipelineStatistics& stats) override;
  void OnWaiting(media::WaitingReason reason) override;
};
class  RendererClientAsyncWaiter {
 public:
  explicit RendererClientAsyncWaiter(RendererClient* proxy);
  ~RendererClientAsyncWaiter();

 private:
  RendererClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_TEST_UTILS_H_