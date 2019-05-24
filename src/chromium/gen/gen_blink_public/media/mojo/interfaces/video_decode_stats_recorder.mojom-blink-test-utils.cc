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


#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void VideoDecodeStatsRecorderInterceptorForTesting::StartNewRecord(::media::mojom::blink::PredictionFeaturesPtr features) {
  GetForwardingInterface()->StartNewRecord(std::move(features));
}
void VideoDecodeStatsRecorderInterceptorForTesting::UpdateRecord(::media::mojom::blink::PredictionTargetsPtr targets) {
  GetForwardingInterface()->UpdateRecord(std::move(targets));
}
VideoDecodeStatsRecorderAsyncWaiter::VideoDecodeStatsRecorderAsyncWaiter(
    VideoDecodeStatsRecorder* proxy) : proxy_(proxy) {}

VideoDecodeStatsRecorderAsyncWaiter::~VideoDecodeStatsRecorderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif