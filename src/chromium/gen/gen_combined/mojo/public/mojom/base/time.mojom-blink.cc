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

#include "mojo/public/mojom/base/time.mojom-blink.h"

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

#include "mojo/public/mojom/base/time.mojom-params-data.h"
#include "mojo/public/mojom/base/time.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/time.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_JUMBO_H_
#endif
namespace mojo_base {
namespace mojom {
namespace blink {
Time::Time()
    : internal_value() {}

Time::Time(
    int64_t internal_value_in)
    : internal_value(std::move(internal_value_in)) {}

Time::~Time() = default;

bool Time::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TimeDelta::TimeDelta()
    : microseconds() {}

TimeDelta::TimeDelta(
    int64_t microseconds_in)
    : microseconds(std::move(microseconds_in)) {}

TimeDelta::~TimeDelta() = default;

bool TimeDelta::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TimeTicks::TimeTicks()
    : internal_value() {}

TimeTicks::TimeTicks(
    int64_t internal_value_in)
    : internal_value(std::move(internal_value_in)) {}

TimeTicks::~TimeTicks() = default;

bool TimeTicks::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::blink::Time::DataView, ::mojo_base::mojom::blink::TimePtr>::Read(
    ::mojo_base::mojom::blink::Time::DataView input,
    ::mojo_base::mojom::blink::TimePtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::TimePtr result(::mojo_base::mojom::blink::Time::New());
  
      result->internal_value = input.internal_value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::blink::TimeDelta::DataView, ::mojo_base::mojom::blink::TimeDeltaPtr>::Read(
    ::mojo_base::mojom::blink::TimeDelta::DataView input,
    ::mojo_base::mojom::blink::TimeDeltaPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::TimeDeltaPtr result(::mojo_base::mojom::blink::TimeDelta::New());
  
      result->microseconds = input.microseconds();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::blink::TimeTicks::DataView, ::mojo_base::mojom::blink::TimeTicksPtr>::Read(
    ::mojo_base::mojom::blink::TimeTicks::DataView input,
    ::mojo_base::mojom::blink::TimeTicksPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::TimeTicksPtr result(::mojo_base::mojom::blink::TimeTicks::New());
  
      result->internal_value = input.internal_value();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif