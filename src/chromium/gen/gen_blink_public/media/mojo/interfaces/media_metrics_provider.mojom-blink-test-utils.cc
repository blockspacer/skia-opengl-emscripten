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


#include "media/mojo/interfaces/media_metrics_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-blink.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void MediaMetricsProviderInterceptorForTesting::Initialize(bool is_mse, MediaURLScheme url_scheme) {
  GetForwardingInterface()->Initialize(std::move(is_mse), std::move(url_scheme));
}
void MediaMetricsProviderInterceptorForTesting::OnError(::media::mojom::blink::PipelineStatus status) {
  GetForwardingInterface()->OnError(std::move(status));
}
void MediaMetricsProviderInterceptorForTesting::SetIsAdMedia() {
  GetForwardingInterface()->SetIsAdMedia();
}
void MediaMetricsProviderInterceptorForTesting::SetIsEME() {
  GetForwardingInterface()->SetIsEME();
}
void MediaMetricsProviderInterceptorForTesting::SetTimeToMetadata(base::TimeDelta elapsed) {
  GetForwardingInterface()->SetTimeToMetadata(std::move(elapsed));
}
void MediaMetricsProviderInterceptorForTesting::SetTimeToFirstFrame(base::TimeDelta elapsed) {
  GetForwardingInterface()->SetTimeToFirstFrame(std::move(elapsed));
}
void MediaMetricsProviderInterceptorForTesting::SetTimeToPlayReady(base::TimeDelta elapsed) {
  GetForwardingInterface()->SetTimeToPlayReady(std::move(elapsed));
}
void MediaMetricsProviderInterceptorForTesting::SetContainerName(::media::mojom::blink::MediaContainerName container_name) {
  GetForwardingInterface()->SetContainerName(std::move(container_name));
}
void MediaMetricsProviderInterceptorForTesting::AcquireWatchTimeRecorder(::media::mojom::blink::PlaybackPropertiesPtr properties, ::media::mojom::blink::WatchTimeRecorderRequest recorder) {
  GetForwardingInterface()->AcquireWatchTimeRecorder(std::move(properties), std::move(recorder));
}
void MediaMetricsProviderInterceptorForTesting::AcquireVideoDecodeStatsRecorder(::media::mojom::blink::VideoDecodeStatsRecorderRequest recorder) {
  GetForwardingInterface()->AcquireVideoDecodeStatsRecorder(std::move(recorder));
}
void MediaMetricsProviderInterceptorForTesting::AddBytesReceived(uint64_t bytes_received) {
  GetForwardingInterface()->AddBytesReceived(std::move(bytes_received));
}
MediaMetricsProviderAsyncWaiter::MediaMetricsProviderAsyncWaiter(
    MediaMetricsProvider* proxy) : proxy_(proxy) {}

MediaMetricsProviderAsyncWaiter::~MediaMetricsProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif