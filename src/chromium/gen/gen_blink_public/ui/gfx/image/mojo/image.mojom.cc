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

#include "ui/gfx/image/mojo/image.mojom.h"

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

#include "ui/gfx/image/mojo/image.mojom-params-data.h"
#include "ui/gfx/image/mojo/image.mojom-shared-message-ids.h"

#include "ui/gfx/image/mojo/image.mojom-import-headers.h"


#ifndef UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_JUMBO_H_
#define UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/image/mojo/image_skia_struct_traits.h"
#endif
namespace gfx {
namespace mojom {
ImageSkiaRep::ImageSkiaRep()
    : bitmap(),
      scale() {}

ImageSkiaRep::ImageSkiaRep(
    const SkBitmap& bitmap_in,
    float scale_in)
    : bitmap(std::move(bitmap_in)),
      scale(std::move(scale_in)) {}

ImageSkiaRep::~ImageSkiaRep() = default;

bool ImageSkiaRep::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ImageSkia::ImageSkia()
    : image_reps() {}

ImageSkia::ImageSkia(
    const std::vector<gfx::ImageSkiaRep>& image_reps_in)
    : image_reps(std::move(image_reps_in)) {}

ImageSkia::~ImageSkia() = default;

bool ImageSkia::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::ImageSkiaRep::DataView, ::gfx::mojom::ImageSkiaRepPtr>::Read(
    ::gfx::mojom::ImageSkiaRep::DataView input,
    ::gfx::mojom::ImageSkiaRepPtr* output) {
  bool success = true;
  ::gfx::mojom::ImageSkiaRepPtr result(::gfx::mojom::ImageSkiaRep::New());
  
      if (!input.ReadBitmap(&result->bitmap))
        success = false;
      result->scale = input.scale();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::ImageSkia::DataView, ::gfx::mojom::ImageSkiaPtr>::Read(
    ::gfx::mojom::ImageSkia::DataView input,
    ::gfx::mojom::ImageSkiaPtr* output) {
  bool success = true;
  ::gfx::mojom::ImageSkiaPtr result(::gfx::mojom::ImageSkia::New());
  
      if (!input.ReadImageReps(&result->image_reps))
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