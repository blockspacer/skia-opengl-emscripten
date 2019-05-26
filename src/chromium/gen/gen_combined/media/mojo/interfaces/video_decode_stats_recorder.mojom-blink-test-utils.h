// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT VideoDecodeStatsRecorderInterceptorForTesting : public VideoDecodeStatsRecorder {
  virtual VideoDecodeStatsRecorder* GetForwardingInterface() = 0;
  void StartNewRecord(::media::mojom::blink::PredictionFeaturesPtr features) override;
  void UpdateRecord(::media::mojom::blink::PredictionTargetsPtr targets) override;
};
class BLINK_PLATFORM_EXPORT VideoDecodeStatsRecorderAsyncWaiter {
 public:
  explicit VideoDecodeStatsRecorderAsyncWaiter(VideoDecodeStatsRecorder* proxy);
  ~VideoDecodeStatsRecorderAsyncWaiter();

 private:
  VideoDecodeStatsRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeStatsRecorderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_TEST_UTILS_H_