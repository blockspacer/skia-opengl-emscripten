// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/media_metrics_provider.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaMetricsProviderInterceptorForTesting : public MediaMetricsProvider {
  virtual MediaMetricsProvider* GetForwardingInterface() = 0;
  void Initialize(bool is_mse, MediaURLScheme url_scheme) override;
  void OnError(::media::mojom::blink::PipelineStatus status) override;
  void SetIsAdMedia() override;
  void SetIsEME() override;
  void SetTimeToMetadata(base::TimeDelta elapsed) override;
  void SetTimeToFirstFrame(base::TimeDelta elapsed) override;
  void SetTimeToPlayReady(base::TimeDelta elapsed) override;
  void SetContainerName(::media::mojom::blink::MediaContainerName container_name) override;
  void AcquireWatchTimeRecorder(::media::mojom::blink::PlaybackPropertiesPtr properties, ::media::mojom::blink::WatchTimeRecorderRequest recorder) override;
  void AcquireVideoDecodeStatsRecorder(::media::mojom::blink::VideoDecodeStatsRecorderRequest recorder) override;
  void AddBytesReceived(uint64_t bytes_received) override;
};
class BLINK_PLATFORM_EXPORT MediaMetricsProviderAsyncWaiter {
 public:
  explicit MediaMetricsProviderAsyncWaiter(MediaMetricsProvider* proxy);
  ~MediaMetricsProviderAsyncWaiter();

 private:
  MediaMetricsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaMetricsProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_