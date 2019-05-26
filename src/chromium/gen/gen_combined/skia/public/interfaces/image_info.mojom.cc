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

#include "skia/public/interfaces/image_info.mojom.h"

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

#include "skia/public/interfaces/image_info.mojom-params-data.h"
#include "skia/public/interfaces/image_info.mojom-shared-message-ids.h"

#include "skia/public/interfaces/image_info.mojom-import-headers.h"


#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_JUMBO_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_JUMBO_H_
#endif
namespace skia {
namespace mojom {
ImageInfo::ImageInfo()
    : color_type(),
      alpha_type(),
      serialized_color_space(),
      width(),
      height() {}

ImageInfo::ImageInfo(
    ColorType color_type_in,
    AlphaType alpha_type_in,
    const std::vector<uint8_t>& serialized_color_space_in,
    uint32_t width_in,
    uint32_t height_in)
    : color_type(std::move(color_type_in)),
      alpha_type(std::move(alpha_type_in)),
      serialized_color_space(std::move(serialized_color_space_in)),
      width(std::move(width_in)),
      height(std::move(height_in)) {}

ImageInfo::~ImageInfo() = default;

bool ImageInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace skia

namespace mojo {


// static
bool StructTraits<::skia::mojom::ImageInfo::DataView, ::skia::mojom::ImageInfoPtr>::Read(
    ::skia::mojom::ImageInfo::DataView input,
    ::skia::mojom::ImageInfoPtr* output) {
  bool success = true;
  ::skia::mojom::ImageInfoPtr result(::skia::mojom::ImageInfo::New());
  
      if (!input.ReadColorType(&result->color_type))
        success = false;
      if (!input.ReadAlphaType(&result->alpha_type))
        success = false;
      if (!input.ReadSerializedColorSpace(&result->serialized_color_space))
        success = false;
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