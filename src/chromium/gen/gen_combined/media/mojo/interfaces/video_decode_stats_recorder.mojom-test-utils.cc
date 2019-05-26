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


#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {


void VideoDecodeStatsRecorderInterceptorForTesting::StartNewRecord(::media::mojom::PredictionFeaturesPtr features) {
  GetForwardingInterface()->StartNewRecord(std::move(features));
}
void VideoDecodeStatsRecorderInterceptorForTesting::UpdateRecord(::media::mojom::PredictionTargetsPtr targets) {
  GetForwardingInterface()->UpdateRecord(std::move(targets));
}
VideoDecodeStatsRecorderAsyncWaiter::VideoDecodeStatsRecorderAsyncWaiter(
    VideoDecodeStatsRecorder* proxy) : proxy_(proxy) {}

VideoDecodeStatsRecorderAsyncWaiter::~VideoDecodeStatsRecorderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif