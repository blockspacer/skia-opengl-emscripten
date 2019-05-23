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

#include "mojo/public/interfaces/bindings/tests/rect.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/rect.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/rect.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace test {
Rect::Rect()
    : x(),
      y(),
      width(),
      height() {}

Rect::Rect(
    int32_t x_in,
    int32_t y_in,
    int32_t width_in,
    int32_t height_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      width(std::move(width_in)),
      height(std::move(height_in)) {}

Rect::~Rect() = default;
size_t Rect::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->x);
  seed = mojo::internal::Hash(seed, this->y);
  seed = mojo::internal::Hash(seed, this->width);
  seed = mojo::internal::Hash(seed, this->height);
  return seed;
}

bool Rect::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TypemappedRect::TypemappedRect()
    : x(),
      y(),
      width(),
      height() {}

TypemappedRect::TypemappedRect(
    int32_t x_in,
    int32_t y_in,
    int32_t width_in,
    int32_t height_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      width(std::move(width_in)),
      height(std::move(height_in)) {}

TypemappedRect::~TypemappedRect() = default;
size_t TypemappedRect::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->x);
  seed = mojo::internal::Hash(seed, this->y);
  seed = mojo::internal::Hash(seed, this->width);
  seed = mojo::internal::Hash(seed, this->height);
  return seed;
}

bool TypemappedRect::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SharedTypemappedRect::SharedTypemappedRect()
    : x(),
      y(),
      width(),
      height() {}

SharedTypemappedRect::SharedTypemappedRect(
    int32_t x_in,
    int32_t y_in,
    int32_t width_in,
    int32_t height_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      width(std::move(width_in)),
      height(std::move(height_in)) {}

SharedTypemappedRect::~SharedTypemappedRect() = default;

bool SharedTypemappedRect::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace test
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::test::Rect::DataView, ::mojo::test::RectPtr>::Read(
    ::mojo::test::Rect::DataView input,
    ::mojo::test::RectPtr* output) {
  bool success = true;
  ::mojo::test::RectPtr result(::mojo::test::Rect::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::TypemappedRect::DataView, ::mojo::test::TypemappedRectPtr>::Read(
    ::mojo::test::TypemappedRect::DataView input,
    ::mojo::test::TypemappedRectPtr* output) {
  bool success = true;
  ::mojo::test::TypemappedRectPtr result(::mojo::test::TypemappedRect::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::SharedTypemappedRect::DataView, ::mojo::test::SharedTypemappedRectPtr>::Read(
    ::mojo::test::SharedTypemappedRect::DataView input,
    ::mojo::test::SharedTypemappedRectPtr* output) {
  bool success = true;
  ::mojo::test::SharedTypemappedRectPtr result(::mojo::test::SharedTypemappedRect::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif