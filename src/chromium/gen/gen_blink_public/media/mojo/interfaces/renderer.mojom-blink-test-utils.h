// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/renderer.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT RendererInterceptorForTesting : public Renderer {
  virtual Renderer* GetForwardingInterface() = 0;
  void Initialize(RendererClientAssociatedPtrInfo client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> streams, const base::Optional<::blink::KURL>& media_url, const base::Optional<::blink::KURL>& first_party_for_cookies, bool allow_credentials, InitializeCallback callback) override;
  void Flush(FlushCallback callback) override;
  void StartPlayingFrom(base::TimeDelta time) override;
  void SetPlaybackRate(double playback_rate) override;
  void SetVolume(float volume) override;
  void SetCdm(int32_t cdm_id, SetCdmCallback callback) override;
};
class BLINK_PLATFORM_EXPORT RendererAsyncWaiter {
 public:
  explicit RendererAsyncWaiter(Renderer* proxy);
  ~RendererAsyncWaiter();
  void Initialize(
      RendererClientAssociatedPtrInfo client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> streams, const base::Optional<::blink::KURL>& media_url, const base::Optional<::blink::KURL>& first_party_for_cookies, bool allow_credentials, bool* out_success);
  void Flush(
      );
  void SetCdm(
      int32_t cdm_id, bool* out_success);

 private:
  Renderer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT RendererClientInterceptorForTesting : public RendererClient {
  virtual RendererClient* GetForwardingInterface() = 0;
  void OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time, base::TimeTicks capture_time) override;
  void OnBufferingStateChange(::media::mojom::blink::BufferingState state) override;
  void OnEnded() override;
  void OnError() override;
  void OnAudioConfigChange(::media::mojom::blink::AudioDecoderConfigPtr config) override;
  void OnVideoConfigChange(::media::mojom::blink::VideoDecoderConfigPtr config) override;
  void OnVideoNaturalSizeChange(const ::blink::WebSize& size) override;
  void OnVideoOpacityChange(bool opaque) override;
  void OnStatisticsUpdate(::media::mojom::blink::PipelineStatisticsPtr stats) override;
  void OnWaiting(::media::mojom::blink::WaitingReason reason) override;
};
class BLINK_PLATFORM_EXPORT RendererClientAsyncWaiter {
 public:
  explicit RendererClientAsyncWaiter(RendererClient* proxy);
  ~RendererClientAsyncWaiter();

 private:
  RendererClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_BLINK_TEST_UTILS_H_