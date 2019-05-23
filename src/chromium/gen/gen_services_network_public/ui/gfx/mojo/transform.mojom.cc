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

#include "ui/gfx/mojo/transform.mojom.h"

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

#include "ui/gfx/mojo/transform.mojom-params-data.h"
#include "ui/gfx/mojo/transform.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/transform.mojom-import-headers.h"


#ifndef UI_GFX_MOJO_TRANSFORM_MOJOM_JUMBO_H_
#define UI_GFX_MOJO_TRANSFORM_MOJOM_JUMBO_H_
#endif
namespace gfx {
namespace mojom {
Transform::Transform()
    : matrix() {}

Transform::Transform(
    const base::Optional<std::vector<float>>& matrix_in)
    : matrix(std::move(matrix_in)) {}

Transform::~Transform() = default;

bool Transform::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::Transform::DataView, ::gfx::mojom::TransformPtr>::Read(
    ::gfx::mojom::Transform::DataView input,
    ::gfx::mojom::TransformPtr* output) {
  bool success = true;
  ::gfx::mojom::TransformPtr result(::gfx::mojom::Transform::New());
  
      if (!input.ReadMatrix(&result->matrix))
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