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


#include "media/mojo/interfaces/watch_time_recorder.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void WatchTimeRecorderInterceptorForTesting::RecordWatchTime(::media::mojom::blink::WatchTimeKey key, base::TimeDelta watch_time) {
  GetForwardingInterface()->RecordWatchTime(std::move(key), std::move(watch_time));
}
void WatchTimeRecorderInterceptorForTesting::FinalizeWatchTime(const WTF::Vector<::media::mojom::blink::WatchTimeKey>& watch_time_keys) {
  GetForwardingInterface()->FinalizeWatchTime(std::move(watch_time_keys));
}
void WatchTimeRecorderInterceptorForTesting::OnError(::media::mojom::blink::PipelineStatus status) {
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






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif