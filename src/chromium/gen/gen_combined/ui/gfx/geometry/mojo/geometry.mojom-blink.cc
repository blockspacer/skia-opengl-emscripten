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

#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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

#include "ui/gfx/geometry/mojo/geometry.mojom-params-data.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-message-ids.h"

#include "ui/gfx/geometry/mojo/geometry.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_BLINK_JUMBO_H_
#endif
namespace gfx {
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

bool Point::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointF::PointF()
    : x(),
      y() {}

PointF::PointF(
    float x_in,
    float y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

PointF::~PointF() = default;

bool PointF::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Point3F::Point3F()
    : x(),
      y(),
      z() {}

Point3F::Point3F(
    float x_in,
    float y_in,
    float z_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      z(std::move(z_in)) {}

Point3F::~Point3F() = default;
size_t Point3F::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->y);
  seed = mojo::internal::WTFHash(seed, this->z);
  return seed;
}

bool Point3F::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Size::Size()
    : width(),
      height() {}

Size::Size(
    int32_t width_in,
    int32_t height_in)
    : width(std::move(width_in)),
      height(std::move(height_in)) {}

Size::~Size() = default;

bool Size::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SizeF::SizeF()
    : width(),
      height() {}

SizeF::SizeF(
    float width_in,
    float height_in)
    : width(std::move(width_in)),
      height(std::move(height_in)) {}

SizeF::~SizeF() = default;
size_t SizeF::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->width);
  seed = mojo::internal::WTFHash(seed, this->height);
  return seed;
}

bool SizeF::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
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

bool Rect::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RectF::RectF()
    : x(),
      y(),
      width(),
      height() {}

RectF::RectF(
    float x_in,
    float y_in,
    float width_in,
    float height_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      width(std::move(width_in)),
      height(std::move(height_in)) {}

RectF::~RectF() = default;

bool RectF::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Insets::Insets()
    : top(),
      left(),
      bottom(),
      right() {}

Insets::Insets(
    int32_t top_in,
    int32_t left_in,
    int32_t bottom_in,
    int32_t right_in)
    : top(std::move(top_in)),
      left(std::move(left_in)),
      bottom(std::move(bottom_in)),
      right(std::move(right_in)) {}

Insets::~Insets() = default;
size_t Insets::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->top);
  seed = mojo::internal::WTFHash(seed, this->left);
  seed = mojo::internal::WTFHash(seed, this->bottom);
  seed = mojo::internal::WTFHash(seed, this->right);
  return seed;
}

bool Insets::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
InsetsF::InsetsF()
    : top(),
      left(),
      bottom(),
      right() {}

InsetsF::InsetsF(
    float top_in,
    float left_in,
    float bottom_in,
    float right_in)
    : top(std::move(top_in)),
      left(std::move(left_in)),
      bottom(std::move(bottom_in)),
      right(std::move(right_in)) {}

InsetsF::~InsetsF() = default;
size_t InsetsF::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->top);
  seed = mojo::internal::WTFHash(seed, this->left);
  seed = mojo::internal::WTFHash(seed, this->bottom);
  seed = mojo::internal::WTFHash(seed, this->right);
  return seed;
}

bool InsetsF::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Vector2d::Vector2d()
    : x(),
      y() {}

Vector2d::Vector2d(
    int32_t x_in,
    int32_t y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

Vector2d::~Vector2d() = default;
size_t Vector2d::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->y);
  return seed;
}

bool Vector2d::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Vector2dF::Vector2dF()
    : x(),
      y() {}

Vector2dF::Vector2dF(
    float x_in,
    float y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

Vector2dF::~Vector2dF() = default;
size_t Vector2dF::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->y);
  return seed;
}

bool Vector2dF::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Vector3dF::Vector3dF()
    : x(),
      y(),
      z() {}

Vector3dF::Vector3dF(
    float x_in,
    float y_in,
    float z_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      z(std::move(z_in)) {}

Vector3dF::~Vector3dF() = default;
size_t Vector3dF::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->y);
  seed = mojo::internal::WTFHash(seed, this->z);
  return seed;
}

bool Vector3dF::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ScrollOffset::ScrollOffset()
    : x(),
      y() {}

ScrollOffset::ScrollOffset(
    float x_in,
    float y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

ScrollOffset::~ScrollOffset() = default;
size_t ScrollOffset::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->x);
  seed = mojo::internal::WTFHash(seed, this->y);
  return seed;
}

bool ScrollOffset::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::Point::DataView, ::gfx::mojom::blink::PointPtr>::Read(
    ::gfx::mojom::blink::Point::DataView input,
    ::gfx::mojom::blink::PointPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::PointPtr result(::gfx::mojom::blink::Point::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::PointF::DataView, ::gfx::mojom::blink::PointFPtr>::Read(
    ::gfx::mojom::blink::PointF::DataView input,
    ::gfx::mojom::blink::PointFPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::PointFPtr result(::gfx::mojom::blink::PointF::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Point3F::DataView, ::gfx::mojom::blink::Point3FPtr>::Read(
    ::gfx::mojom::blink::Point3F::DataView input,
    ::gfx::mojom::blink::Point3FPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::Point3FPtr result(::gfx::mojom::blink::Point3F::New());
  
      result->x = input.x();
      result->y = input.y();
      result->z = input.z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Size::DataView, ::gfx::mojom::blink::SizePtr>::Read(
    ::gfx::mojom::blink::Size::DataView input,
    ::gfx::mojom::blink::SizePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::SizePtr result(::gfx::mojom::blink::Size::New());
  
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::SizeF::DataView, ::gfx::mojom::blink::SizeFPtr>::Read(
    ::gfx::mojom::blink::SizeF::DataView input,
    ::gfx::mojom::blink::SizeFPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::SizeFPtr result(::gfx::mojom::blink::SizeF::New());
  
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Rect::DataView, ::gfx::mojom::blink::RectPtr>::Read(
    ::gfx::mojom::blink::Rect::DataView input,
    ::gfx::mojom::blink::RectPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::RectPtr result(::gfx::mojom::blink::Rect::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::RectF::DataView, ::gfx::mojom::blink::RectFPtr>::Read(
    ::gfx::mojom::blink::RectF::DataView input,
    ::gfx::mojom::blink::RectFPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::RectFPtr result(::gfx::mojom::blink::RectF::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Insets::DataView, ::gfx::mojom::blink::InsetsPtr>::Read(
    ::gfx::mojom::blink::Insets::DataView input,
    ::gfx::mojom::blink::InsetsPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::InsetsPtr result(::gfx::mojom::blink::Insets::New());
  
      result->top = input.top();
      result->left = input.left();
      result->bottom = input.bottom();
      result->right = input.right();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::InsetsF::DataView, ::gfx::mojom::blink::InsetsFPtr>::Read(
    ::gfx::mojom::blink::InsetsF::DataView input,
    ::gfx::mojom::blink::InsetsFPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::InsetsFPtr result(::gfx::mojom::blink::InsetsF::New());
  
      result->top = input.top();
      result->left = input.left();
      result->bottom = input.bottom();
      result->right = input.right();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Vector2d::DataView, ::gfx::mojom::blink::Vector2dPtr>::Read(
    ::gfx::mojom::blink::Vector2d::DataView input,
    ::gfx::mojom::blink::Vector2dPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::Vector2dPtr result(::gfx::mojom::blink::Vector2d::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Vector2dF::DataView, ::gfx::mojom::blink::Vector2dFPtr>::Read(
    ::gfx::mojom::blink::Vector2dF::DataView input,
    ::gfx::mojom::blink::Vector2dFPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::Vector2dFPtr result(::gfx::mojom::blink::Vector2dF::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::Vector3dF::DataView, ::gfx::mojom::blink::Vector3dFPtr>::Read(
    ::gfx::mojom::blink::Vector3dF::DataView input,
    ::gfx::mojom::blink::Vector3dFPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::Vector3dFPtr result(::gfx::mojom::blink::Vector3dF::New());
  
      result->x = input.x();
      result->y = input.y();
      result->z = input.z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::ScrollOffset::DataView, ::gfx::mojom::blink::ScrollOffsetPtr>::Read(
    ::gfx::mojom::blink::ScrollOffset::DataView input,
    ::gfx::mojom::blink::ScrollOffsetPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::ScrollOffsetPtr result(::gfx::mojom::blink::ScrollOffset::New());
  
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