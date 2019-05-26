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


#include "media/mojo/interfaces/video_decode_perf_history.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void VideoDecodePerfHistoryInterceptorForTesting::GetPerfInfo(::media::mojom::blink::PredictionFeaturesPtr features, GetPerfInfoCallback callback) {
  GetForwardingInterface()->GetPerfInfo(std::move(features), std::move(callback));
}
VideoDecodePerfHistoryAsyncWaiter::VideoDecodePerfHistoryAsyncWaiter(
    VideoDecodePerfHistory* proxy) : proxy_(proxy) {}

VideoDecodePerfHistoryAsyncWaiter::~VideoDecodePerfHistoryAsyncWaiter() = default;

void VideoDecodePerfHistoryAsyncWaiter::GetPerfInfo(
    ::media::mojom::blink::PredictionFeaturesPtr features, bool* out_is_smooth, bool* out_is_power_efficient) {
  base::RunLoop loop;
  proxy_->GetPerfInfo(std::move(features),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_is_smooth
,
             bool* out_is_power_efficient
,
             bool is_smooth,
             bool is_power_efficient) {*out_is_smooth = std::move(is_smooth);*out_is_power_efficient = std::move(is_power_efficient);
            loop->Quit();
          },
          &loop,
          out_is_smooth,
          out_is_power_efficient));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif