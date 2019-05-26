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


#include "media/mojo/interfaces/watch_time_recorder.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {


void WatchTimeRecorderInterceptorForTesting::RecordWatchTime(media::WatchTimeKey key, base::TimeDelta watch_time) {
  GetForwardingInterface()->RecordWatchTime(std::move(key), std::move(watch_time));
}
void WatchTimeRecorderInterceptorForTesting::FinalizeWatchTime(const std::vector<media::WatchTimeKey>& watch_time_keys) {
  GetForwardingInterface()->FinalizeWatchTime(std::move(watch_time_keys));
}
void WatchTimeRecorderInterceptorForTesting::OnError(media::PipelineStatus status) {
  GetForwardingInterface()->OnError(std::move(status));
}
void WatchTimeRecorderInterceptorForTesting::UpdateSecondaryProperties(SecondaryPlaybackPropertiesPtr secondary_properties) {
  GetForwardingInterface()->UpdateSecondaryProperties(std::move(secondary_properties));
}
void WatchTimeRecorderInterceptorForTesting::SetAutoplayInitiated(bool value) {
  GetForwardingInterface()->SetAutoplayInitiated(std::move(value));
}
void WatchTimeRecorderInterceptorForTesting::OnDurationChanged(base::TimeDelta duration) {
  GetForwardingInterface()->OnDurationChanged(std::move(duration));
}
void WatchTimeRecorderInterceptorForTesting::UpdateUnderflowCount(int32_t count) {
  GetForwardingInterface()->UpdateUnderflowCount(std::move(count));
}
WatchTimeRecorderAsyncWaiter::WatchTimeRecorderAsyncWaiter(
    WatchTimeRecorder* proxy) : proxy_(proxy) {}

WatchTimeRecorderAsyncWaiter::~WatchTimeRecorderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif