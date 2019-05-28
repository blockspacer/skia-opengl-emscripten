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

#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_BLINK_JUMBO_H_
#endif
namespace test {
namespace echo_import {
namespace mojom {
namespace blink {
Point::Point()
    : x(),
      y() {}

Point::Point(
    int32_t x_in,
    int32_t y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

Point::~Point() = default;
size_t Point::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->y);
  return seed;
}

bool Point::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace echo_import
}  // namespace test

namespace mojo {


// static
bool StructTraits<::test::echo_import::mojom::blink::Point::DataView, ::test::echo_import::mojom::blink::PointPtr>::Read(
    ::test::echo_import::mojom::blink::Point::DataView input,
    ::test::echo_import::mojom::blink::PointPtr* output) {
  bool success = true;
  ::test::echo_import::mojom::blink::PointPtr result(::test::echo_import::mojom::blink::Point::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif