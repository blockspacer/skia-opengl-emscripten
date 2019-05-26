// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "services/viz/public/interfaces/compositing/frame_deadline.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace viz {
namespace mojom {
FrameDeadline::FrameDeadline()
    : frame_start_time(),
      deadline_in_frames(),
      frame_interval(),
      use_default_lower_bound_deadline() {}

FrameDeadline::FrameDeadline(
    base::TimeTicks frame_start_time_in,
    uint32_t deadline_in_frames_in,
    base::TimeDelta frame_interval_in,
    bool use_default_lower_bound_deadline_in)
    : frame_start_time(std::move(frame_start_time_in)),
      deadline_in_frames(std::move(deadline_in_frames_in)),
      frame_interval(std::move(frame_interval_in)),
      use_default_lower_bound_deadline(std::move(use_default_lower_bound_deadline_in)) {}

FrameDeadline::~FrameDeadline() = default;

bool FrameDeadline::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::FrameDeadline::DataView, ::viz::mojom::FrameDeadlinePtr>::Read(
    ::viz::mojom::FrameDeadline::DataView input,
    ::viz::mojom::FrameDeadlinePtr* output) {
  bool success = true;
  ::viz::mojom::FrameDeadlinePtr result(::viz::mojom::FrameDeadline::New());
  
      if (!input.ReadFrameStartTime(&result->frame_start_time))
        success = false;
      result->deadline_in_frames = input.deadline_in_frames();
      if (!input.ReadFrameInterval(&result->frame_interval))
        success = false;
      result->use_default_lower_bound_deadline = input.use_default_lower_bound_deadline();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif