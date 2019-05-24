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

#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_BLINK_JUMBO_H_
#endif
namespace imported {
namespace blink {
Size::Size()
    : width(),
      height() {}

Size::Size(
    int32_t width_in,
    int32_t height_in)
    : width(std::move(width_in)),
      height(std::move(height_in)) {}

Size::~Size() = default;
size_t Size::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->width);
  seed = mojo::internal::WTFHash(seed, this->height);
  return seed;
}

bool Size::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Thing::Thing()
    : shape(::imported::blink::Shape::RECTANGLE),
      color(Color::BLACK),
      location(),
      size() {}

Thing::Thing(
    ::imported::blink::Shape shape_in,
    Color color_in,
    ::imported::blink::PointPtr location_in,
    SizePtr size_in)
    : shape(std::move(shape_in)),
      color(std::move(color_in)),
      location(std::move(location_in)),
      size(std::move(size_in)) {}

Thing::~Thing() = default;
size_t Thing::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->shape);
  seed = mojo::internal::WTFHash(seed, this->color);
  seed = mojo::internal::WTFHash(seed, this->location);
  seed = mojo::internal::WTFHash(seed, this->size);
  return seed;
}

bool Thing::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace imported

namespace mojo {


// static
bool StructTraits<::imported::blink::Size::DataView, ::imported::blink::SizePtr>::Read(
    ::imported::blink::Size::DataView input,
    ::imported::blink::SizePtr* output) {
  bool success = true;
  ::imported::blink::SizePtr result(::imported::blink::Size::New());
  
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::imported::blink::Thing::DataView, ::imported::blink::ThingPtr>::Read(
    ::imported::blink::Thing::DataView input,
    ::imported::blink::ThingPtr* output) {
  bool success = true;
  ::imported::blink::ThingPtr result(::imported::blink::Thing::New());
  
      if (!input.ReadShape(&result->shape))
        success = false;
      if (!input.ReadColor(&result->color))
        success = false;
      if (!input.ReadLocation(&result->location))
        success = false;
      if (!input.ReadSize(&result->size))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif