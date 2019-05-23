// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-params-data.h"
namespace viz {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ResourceFormat value) {
  switch(value) {
    case ResourceFormat::RGBA_8888:
      return os << "ResourceFormat::RGBA_8888";
    case ResourceFormat::RGBA_4444:
      return os << "ResourceFormat::RGBA_4444";
    case ResourceFormat::BGRA_8888:
      return os << "ResourceFormat::BGRA_8888";
    case ResourceFormat::ALPHA_8:
      return os << "ResourceFormat::ALPHA_8";
    case ResourceFormat::LUMINANCE_8:
      return os << "ResourceFormat::LUMINANCE_8";
    case ResourceFormat::RGB_565:
      return os << "ResourceFormat::RGB_565";
    case ResourceFormat::BGR_565:
      return os << "ResourceFormat::BGR_565";
    case ResourceFormat::ETC1:
      return os << "ResourceFormat::ETC1";
    case ResourceFormat::RED_8:
      return os << "ResourceFormat::RED_8";
    case ResourceFormat::RG_88:
      return os << "ResourceFormat::RG_88";
    case ResourceFormat::LUMINANCE_F16:
      return os << "ResourceFormat::LUMINANCE_F16";
    case ResourceFormat::RGBA_F16:
      return os << "ResourceFormat::RGBA_F16";
    case ResourceFormat::R16_EXT:
      return os << "ResourceFormat::R16_EXT";
    case ResourceFormat::RGBX_8888:
      return os << "ResourceFormat::RGBX_8888";
    case ResourceFormat::BGRX_8888:
      return os << "ResourceFormat::BGRX_8888";
    case ResourceFormat::RGBX_1010102:
      return os << "ResourceFormat::RGBX_1010102";
    case ResourceFormat::BGRX_1010102:
      return os << "ResourceFormat::BGRX_1010102";
    case ResourceFormat::YVU_420:
      return os << "ResourceFormat::YVU_420";
    case ResourceFormat::YUV_420_BIPLANAR:
      return os << "ResourceFormat::YUV_420_BIPLANAR";
    case ResourceFormat::UYVY_422:
      return os << "ResourceFormat::UYVY_422";
    default:
      return os << "Unknown ResourceFormat value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool TransferableResource_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TransferableResource_Data* object = static_cast<const TransferableResource_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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


  if (!::viz::mojom::internal::ResourceFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mailbox_holder, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->mailbox_holder, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_space, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  return true;
}

TransferableResource_Data::TransferableResource_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#if defined(_MSC_VER)
#pragma warning(pop)
#endif