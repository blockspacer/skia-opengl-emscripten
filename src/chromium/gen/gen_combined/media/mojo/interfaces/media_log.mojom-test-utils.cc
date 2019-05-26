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


#include "media/mojo/interfaces/media_log.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/media_types.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void MediaLogInterceptorForTesting::AddEvent(const media::MediaLogEvent& event) {
  GetForwardingInterface()->AddEvent(std::move(event));
}
MediaLogAsyncWaiter::MediaLogAsyncWaiter(
    MediaLog* proxy) : proxy_(proxy) {}

MediaLogAsyncWaiter::~MediaLogAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif