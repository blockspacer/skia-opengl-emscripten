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


#include "media/mojo/interfaces/media_metrics_provider.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void MediaMetricsProviderInterceptorForTesting::Initialize(bool is_mse, MediaURLScheme url_scheme) {
  GetForwardingInterface()->Initialize(std::move(is_mse), std::move(url_scheme));
}
void MediaMetricsProviderInterceptorForTesting::OnError(media::PipelineStatus status) {
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
void MediaMetricsProviderInterceptorForTesting::SetContainerName(media::container_names::MediaContainerName container_name) {
  GetForwardingInterface()->SetContainerName(std::move(container_name));
}
void MediaMetricsProviderInterceptorForTesting::AcquireWatchTimeRecorder(::media::mojom::PlaybackPropertiesPtr properties, ::media::mojom::WatchTimeRecorderRequest recorder) {
  GetForwardingInterface()->AcquireWatchTimeRecorder(std::move(properties), std::move(recorder));
}
void MediaMetricsProviderInterceptorForTesting::AcquireVideoDecodeStatsRecorder(::media::mojom::VideoDecodeStatsRecorderRequest recorder) {
  GetForwardingInterface()->AcquireVideoDecodeStatsRecorder(std::move(recorder));
}
void MediaMetricsProviderInterceptorForTesting::AddBytesReceived(uint64_t bytes_received) {
  GetForwardingInterface()->AddBytesReceived(std::move(bytes_received));
}
MediaMetricsProviderAsyncWaiter::MediaMetricsProviderAsyncWaiter(
    MediaMetricsProvider* proxy) : proxy_(proxy) {}

MediaMetricsProviderAsyncWaiter::~MediaMetricsProviderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif