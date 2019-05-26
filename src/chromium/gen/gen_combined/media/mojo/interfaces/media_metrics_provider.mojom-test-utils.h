// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/media_metrics_provider.mojom.h"


namespace media {
namespace mojom {


class  MediaMetricsProviderInterceptorForTesting : public MediaMetricsProvider {
  virtual MediaMetricsProvider* GetForwardingInterface() = 0;
  void Initialize(bool is_mse, MediaURLScheme url_scheme) override;
  void OnError(media::PipelineStatus status) override;
  void SetIsAdMedia() override;
  void SetIsEME() override;
  void SetTimeToMetadata(base::TimeDelta elapsed) override;
  void SetTimeToFirstFrame(base::TimeDelta elapsed) override;
  void SetTimeToPlayReady(base::TimeDelta elapsed) override;
  void SetContainerName(media::container_names::MediaContainerName container_name) override;
  void AcquireWatchTimeRecorder(::media::mojom::PlaybackPropertiesPtr properties, ::media::mojom::WatchTimeRecorderRequest recorder) override;
  void AcquireVideoDecodeStatsRecorder(::media::mojom::VideoDecodeStatsRecorderRequest recorder) override;
  void AddBytesReceived(uint64_t bytes_received) override;
};
class  MediaMetricsProviderAsyncWaiter {
 public:
  explicit MediaMetricsProviderAsyncWaiter(MediaMetricsProvider* proxy);
  ~MediaMetricsProviderAsyncWaiter();

 private:
  MediaMetricsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaMetricsProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_TEST_UTILS_H_