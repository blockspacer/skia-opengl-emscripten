// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "skia/public/interfaces/image_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "skia/public/interfaces/image_info.mojom-params-data.h"
namespace skia {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ColorType value) {
  switch(value) {
    case ColorType::UNKNOWN:
      return os << "ColorType::UNKNOWN";
    case ColorType::ALPHA_8:
      return os << "ColorType::ALPHA_8";
    case ColorType::RGB_565:
      return os << "ColorType::RGB_565";
    case ColorType::ARGB_4444:
      return os << "ColorType::ARGB_4444";
    case ColorType::RGBA_8888:
      return os << "ColorType::RGBA_8888";
    case ColorType::BGRA_8888:
      return os << "ColorType::BGRA_8888";
    case ColorType::INDEX_8:
      return os << "ColorType::INDEX_8";
    case ColorType::GRAY_8:
      return os << "ColorType::GRAY_8";
    default:
      return os << "Unknown ColorType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AlphaType value) {
  switch(value) {
    case AlphaType::UNKNOWN:
      return os << "AlphaType::UNKNOWN";
    case AlphaType::ALPHA_TYPE_OPAQUE:
      return os << "AlphaType::ALPHA_TYPE_OPAQUE";
    case AlphaType::PREMUL:
      return os << "AlphaType::PREMUL";
    case AlphaType::UNPREMUL:
      return os << "AlphaType::UNPREMUL";
    default:
      return os << "Unknown AlphaType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ImageInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageInfo_Data* object = static_cast<const ImageInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }


  if (!::skia::mojom::internal::ColorType_Data
        ::Validate(object->color_type, validation_context))
    return false;


  if (!::skia::mojom::internal::AlphaType_Data
        ::Validate(object->alpha_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->serialized_color_space, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams serialized_color_space_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->serialized_color_space, validation_context,
                                         &serialized_color_space_validate_params)) {
    return false;
  }

  return true;
}

ImageInfo_Data::ImageInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace skia

#if defined(_MSC_VER)
#pragma warning(pop)
#endif