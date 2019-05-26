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

#include "ui/gfx/mojo/presentation_feedback.mojom-blink.h"

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

#include "ui/gfx/mojo/presentation_feedback.mojom-params-data.h"
#include "ui/gfx/mojo/presentation_feedback.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/presentation_feedback.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJO_PRESENTATION_FEEDBACK_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace gfx {
namespace mojom {
namespace blink {
PresentationFeedback::PresentationFeedback()
    : timestamp(),
      interval(),
      flags() {}

PresentationFeedback::PresentationFeedback(
    base::TimeTicks timestamp_in,
    base::TimeDelta interval_in,
    uint32_t flags_in)
    : timestamp(std::move(timestamp_in)),
      interval(std::move(interval_in)),
      flags(std::move(flags_in)) {}

PresentationFeedback::~PresentationFeedback() = default;

bool PresentationFeedback::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::PresentationFeedback::DataView, ::gfx::mojom::blink::PresentationFeedbackPtr>::Read(
    ::gfx::mojom::blink::PresentationFeedback::DataView input,
    ::gfx::mojom::blink::PresentationFeedbackPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::PresentationFeedbackPtr result(::gfx::mojom::blink::PresentationFeedback::New());
  
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadInterval(&result->interval))
        success = false;
      result->flags = input.flags();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif