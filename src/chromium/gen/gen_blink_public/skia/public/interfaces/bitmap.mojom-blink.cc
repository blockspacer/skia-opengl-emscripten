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

#include "skia/public/interfaces/bitmap.mojom-blink.h"

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

#include "skia/public/interfaces/bitmap.mojom-params-data.h"
#include "skia/public/interfaces/bitmap.mojom-shared-message-ids.h"

#include "skia/public/interfaces/bitmap.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_BLINK_JUMBO_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#endif
namespace skia {
namespace mojom {
namespace blink {
Bitmap::Bitmap()
    : image_info(),
      row_bytes(),
      pixel_data() {}

Bitmap::Bitmap(
    ::skia::mojom::blink::ImageInfoPtr image_info_in,
    uint64_t row_bytes_in,
    mojo_base::BigBuffer pixel_data_in)
    : image_info(std::move(image_info_in)),
      row_bytes(std::move(row_bytes_in)),
      pixel_data(std::move(pixel_data_in)) {}

Bitmap::~Bitmap() = default;

bool Bitmap::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
InlineBitmap::InlineBitmap()
    : image_info(),
      row_bytes(),
      pixel_data() {}

InlineBitmap::InlineBitmap(
    ::skia::mojom::blink::ImageInfoPtr image_info_in,
    uint64_t row_bytes_in,
    const WTF::Vector<uint8_t>& pixel_data_in)
    : image_info(std::move(image_info_in)),
      row_bytes(std::move(row_bytes_in)),
      pixel_data(std::move(pixel_data_in)) {}

InlineBitmap::~InlineBitmap() = default;

bool InlineBitmap::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace skia

namespace mojo {


// static
bool StructTraits<::skia::mojom::blink::Bitmap::DataView, ::skia::mojom::blink::BitmapPtr>::Read(
    ::skia::mojom::blink::Bitmap::DataView input,
    ::skia::mojom::blink::BitmapPtr* output) {
  bool success = true;
  ::skia::mojom::blink::BitmapPtr result(::skia::mojom::blink::Bitmap::New());
  
      if (!input.ReadImageInfo(&result->image_info))
        success = false;
      result->row_bytes = input.row_bytes();
      if (!input.ReadPixelData(&result->pixel_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::skia::mojom::blink::InlineBitmap::DataView, ::skia::mojom::blink::InlineBitmapPtr>::Read(
    ::skia::mojom::blink::InlineBitmap::DataView input,
    ::skia::mojom::blink::InlineBitmapPtr* output) {
  bool success = true;
  ::skia::mojom::blink::InlineBitmapPtr result(::skia::mojom::blink::InlineBitmap::New());
  
      if (!input.ReadImageInfo(&result->image_info))
        success = false;
      result->row_bytes = input.row_bytes();
      if (!input.ReadPixelData(&result->pixel_data))
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