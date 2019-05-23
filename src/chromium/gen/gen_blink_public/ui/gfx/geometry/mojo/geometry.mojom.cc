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

#include "ui/gfx/geometry/mojo/geometry.mojom.h"

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

#include "ui/gfx/geometry/mojo/geometry.mojom-import-headers.h"


#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_JUMBO_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_JUMBO_H_
#endif
namespace gfx {
namespace mojom {
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

bool ScrollOffset::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::Point::DataView, ::gfx::mojom::PointPtr>::Read(
    ::gfx::mojom::Point::DataView input,
    ::gfx::mojom::PointPtr* output) {
  bool success = true;
  ::gfx::mojom::PointPtr result(::gfx::mojom::Point::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::PointF::DataView, ::gfx::mojom::PointFPtr>::Read(
    ::gfx::mojom::PointF::DataView input,
    ::gfx::mojom::PointFPtr* output) {
  bool success = true;
  ::gfx::mojom::PointFPtr result(::gfx::mojom::PointF::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Point3F::DataView, ::gfx::mojom::Point3FPtr>::Read(
    ::gfx::mojom::Point3F::DataView input,
    ::gfx::mojom::Point3FPtr* output) {
  bool success = true;
  ::gfx::mojom::Point3FPtr result(::gfx::mojom::Point3F::New());
  
      result->x = input.x();
      result->y = input.y();
      result->z = input.z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Size::DataView, ::gfx::mojom::SizePtr>::Read(
    ::gfx::mojom::Size::DataView input,
    ::gfx::mojom::SizePtr* output) {
  bool success = true;
  ::gfx::mojom::SizePtr result(::gfx::mojom::Size::New());
  
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::SizeF::DataView, ::gfx::mojom::SizeFPtr>::Read(
    ::gfx::mojom::SizeF::DataView input,
    ::gfx::mojom::SizeFPtr* output) {
  bool success = true;
  ::gfx::mojom::SizeFPtr result(::gfx::mojom::SizeF::New());
  
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Rect::DataView, ::gfx::mojom::RectPtr>::Read(
    ::gfx::mojom::Rect::DataView input,
    ::gfx::mojom::RectPtr* output) {
  bool success = true;
  ::gfx::mojom::RectPtr result(::gfx::mojom::Rect::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::RectF::DataView, ::gfx::mojom::RectFPtr>::Read(
    ::gfx::mojom::RectF::DataView input,
    ::gfx::mojom::RectFPtr* output) {
  bool success = true;
  ::gfx::mojom::RectFPtr result(::gfx::mojom::RectF::New());
  
      result->x = input.x();
      result->y = input.y();
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Insets::DataView, ::gfx::mojom::InsetsPtr>::Read(
    ::gfx::mojom::Insets::DataView input,
    ::gfx::mojom::InsetsPtr* output) {
  bool success = true;
  ::gfx::mojom::InsetsPtr result(::gfx::mojom::Insets::New());
  
      result->top = input.top();
      result->left = input.left();
      result->bottom = input.bottom();
      result->right = input.right();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::InsetsF::DataView, ::gfx::mojom::InsetsFPtr>::Read(
    ::gfx::mojom::InsetsF::DataView input,
    ::gfx::mojom::InsetsFPtr* output) {
  bool success = true;
  ::gfx::mojom::InsetsFPtr result(::gfx::mojom::InsetsF::New());
  
      result->top = input.top();
      result->left = input.left();
      result->bottom = input.bottom();
      result->right = input.right();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Vector2d::DataView, ::gfx::mojom::Vector2dPtr>::Read(
    ::gfx::mojom::Vector2d::DataView input,
    ::gfx::mojom::Vector2dPtr* output) {
  bool success = true;
  ::gfx::mojom::Vector2dPtr result(::gfx::mojom::Vector2d::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Vector2dF::DataView, ::gfx::mojom::Vector2dFPtr>::Read(
    ::gfx::mojom::Vector2dF::DataView input,
    ::gfx::mojom::Vector2dFPtr* output) {
  bool success = true;
  ::gfx::mojom::Vector2dFPtr result(::gfx::mojom::Vector2dF::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::Vector3dF::DataView, ::gfx::mojom::Vector3dFPtr>::Read(
    ::gfx::mojom::Vector3dF::DataView input,
    ::gfx::mojom::Vector3dFPtr* output) {
  bool success = true;
  ::gfx::mojom::Vector3dFPtr result(::gfx::mojom::Vector3dF::New());
  
      result->x = input.x();
      result->y = input.y();
      result->z = input.z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::ScrollOffset::DataView, ::gfx::mojom::ScrollOffsetPtr>::Read(
    ::gfx::mojom::ScrollOffset::DataView input,
    ::gfx::mojom::ScrollOffsetPtr* output) {
  bool success = true;
  ::gfx::mojom::ScrollOffsetPtr result(::gfx::mojom::ScrollOffset::New());
  
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