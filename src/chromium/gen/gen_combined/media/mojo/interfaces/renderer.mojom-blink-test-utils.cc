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


#include "media/mojo/interfaces/renderer.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/demuxer_stream.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void RendererInterceptorForTesting::Initialize(RendererClientAssociatedPtrInfo client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> streams, const base::Optional<::blink::KURL>& media_url, const base::Optional<::blink::KURL>& first_party_for_cookies, bool allow_credentials, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(client), std::move(streams), std::move(media_url), std::move(first_party_for_cookies), std::move(allow_credentials), std::move(callback));
}
void RendererInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
void RendererInterceptorForTesting::StartPlayingFrom(base::TimeDelta time) {
  GetForwardingInterface()->StartPlayingFrom(std::move(time));
}
void RendererInterceptorForTesting::SetPlaybackRate(double playback_rate) {
  GetForwardingInterface()->SetPlaybackRate(std::move(playback_rate));
}
void RendererInterceptorForTesting::SetVolume(float volume) {
  GetForwardingInterface()->SetVolume(std::move(volume));
}
void RendererInterceptorForTesting::SetCdm(int32_t cdm_id, SetCdmCallback callback) {
  GetForwardingInterface()->SetCdm(std::move(cdm_id), std::move(callback));
}
RendererAsyncWaiter::RendererAsyncWaiter(
    Renderer* proxy) : proxy_(proxy) {}

RendererAsyncWaiter::~RendererAsyncWaiter() = default;

void RendererAsyncWaiter::Initialize(
    RendererClientAssociatedPtrInfo client, base::Optional<WTF::Vector<::media::mojom::blink::DemuxerStreamPtrInfo>> streams, const base::Optional<::blink::KURL>& media_url, const base::Optional<::blink::KURL>& first_party_for_cookies, bool allow_credentials, bool* out_success) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(client),std::move(streams),std::move(media_url),std::move(first_party_for_cookies),std::move(allow_credentials),
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
void RendererAsyncWaiter::Flush(
    ) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void RendererAsyncWaiter::SetCdm(
    int32_t cdm_id, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetCdm(std::move(cdm_id),
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



void RendererClientInterceptorForTesting::OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time, base::TimeTicks capture_time) {
  GetForwardingInterface()->OnTimeUpdate(std::move(time), std::move(max_time), std::move(capture_time));
}
void RendererClientInterceptorForTesting::OnBufferingStateChange(::media::mojom::blink::BufferingState state) {
  GetForwardingInterface()->OnBufferingStateChange(std::move(state));
}
void RendererClientInterceptorForTesting::OnEnded() {
  GetForwardingInterface()->OnEnded();
}
void RendererClientInterceptorForTesting::OnError() {
  GetForwardingInterface()->OnError();
}
void RendererClientInterceptorForTesting::OnAudioConfigChange(::media::mojom::blink::AudioDecoderConfigPtr config) {
  GetForwardingInterface()->OnAudioConfigChange(std::move(config));
}
void RendererClientInterceptorForTesting::OnVideoConfigChange(::media::mojom::blink::VideoDecoderConfigPtr config) {
  GetForwardingInterface()->OnVideoConfigChange(std::move(config));
}
void RendererClientInterceptorForTesting::OnVideoNaturalSizeChange(const ::blink::WebSize& size) {
  GetForwardingInterface()->OnVideoNaturalSizeChange(std::move(size));
}
void RendererClientInterceptorForTesting::OnVideoOpacityChange(bool opaque) {
  GetForwardingInterface()->OnVideoOpacityChange(std::move(opaque));
}
void RendererClientInterceptorForTesting::OnStatisticsUpdate(::media::mojom::blink::PipelineStatisticsPtr stats) {
  GetForwardingInterface()->OnStatisticsUpdate(std::move(stats));
}
void RendererClientInterceptorForTesting::OnWaiting(::media::mojom::blink::WaitingReason reason) {
  GetForwardingInterface()->OnWaiting(std::move(reason));
}
RendererClientAsyncWaiter::RendererClientAsyncWaiter(
    RendererClient* proxy) : proxy_(proxy) {}

RendererClientAsyncWaiter::~RendererClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif