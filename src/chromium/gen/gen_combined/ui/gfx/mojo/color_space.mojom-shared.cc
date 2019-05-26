// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/gfx/mojo/color_space.mojom-params-data.h"
namespace gfx {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ColorSpacePrimaryID value) {
  switch(value) {
    case ColorSpacePrimaryID::INVALID:
      return os << "ColorSpacePrimaryID::INVALID";
    case ColorSpacePrimaryID::BT709:
      return os << "ColorSpacePrimaryID::BT709";
    case ColorSpacePrimaryID::BT470M:
      return os << "ColorSpacePrimaryID::BT470M";
    case ColorSpacePrimaryID::BT470BG:
      return os << "ColorSpacePrimaryID::BT470BG";
    case ColorSpacePrimaryID::SMPTE170M:
      return os << "ColorSpacePrimaryID::SMPTE170M";
    case ColorSpacePrimaryID::SMPTE240M:
      return os << "ColorSpacePrimaryID::SMPTE240M";
    case ColorSpacePrimaryID::FILM:
      return os << "ColorSpacePrimaryID::FILM";
    case ColorSpacePrimaryID::BT2020:
      return os << "ColorSpacePrimaryID::BT2020";
    case ColorSpacePrimaryID::SMPTEST428_1:
      return os << "ColorSpacePrimaryID::SMPTEST428_1";
    case ColorSpacePrimaryID::SMPTEST431_2:
      return os << "ColorSpacePrimaryID::SMPTEST431_2";
    case ColorSpacePrimaryID::SMPTEST432_1:
      return os << "ColorSpacePrimaryID::SMPTEST432_1";
    case ColorSpacePrimaryID::XYZ_D50:
      return os << "ColorSpacePrimaryID::XYZ_D50";
    case ColorSpacePrimaryID::ADOBE_RGB:
      return os << "ColorSpacePrimaryID::ADOBE_RGB";
    case ColorSpacePrimaryID::APPLE_GENERIC_RGB:
      return os << "ColorSpacePrimaryID::APPLE_GENERIC_RGB";
    case ColorSpacePrimaryID::WIDE_GAMUT_COLOR_SPIN:
      return os << "ColorSpacePrimaryID::WIDE_GAMUT_COLOR_SPIN";
    case ColorSpacePrimaryID::CUSTOM:
      return os << "ColorSpacePrimaryID::CUSTOM";
    default:
      return os << "Unknown ColorSpacePrimaryID value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ColorSpaceTransferID value) {
  switch(value) {
    case ColorSpaceTransferID::INVALID:
      return os << "ColorSpaceTransferID::INVALID";
    case ColorSpaceTransferID::BT709:
      return os << "ColorSpaceTransferID::BT709";
    case ColorSpaceTransferID::BT709_APPLE:
      return os << "ColorSpaceTransferID::BT709_APPLE";
    case ColorSpaceTransferID::GAMMA18:
      return os << "ColorSpaceTransferID::GAMMA18";
    case ColorSpaceTransferID::GAMMA22:
      return os << "ColorSpaceTransferID::GAMMA22";
    case ColorSpaceTransferID::GAMMA24:
      return os << "ColorSpaceTransferID::GAMMA24";
    case ColorSpaceTransferID::GAMMA28:
      return os << "ColorSpaceTransferID::GAMMA28";
    case ColorSpaceTransferID::SMPTE170M:
      return os << "ColorSpaceTransferID::SMPTE170M";
    case ColorSpaceTransferID::SMPTE240M:
      return os << "ColorSpaceTransferID::SMPTE240M";
    case ColorSpaceTransferID::LINEAR:
      return os << "ColorSpaceTransferID::LINEAR";
    case ColorSpaceTransferID::LOG:
      return os << "ColorSpaceTransferID::LOG";
    case ColorSpaceTransferID::LOG_SQRT:
      return os << "ColorSpaceTransferID::LOG_SQRT";
    case ColorSpaceTransferID::IEC61966_2_4:
      return os << "ColorSpaceTransferID::IEC61966_2_4";
    case ColorSpaceTransferID::BT1361_ECG:
      return os << "ColorSpaceTransferID::BT1361_ECG";
    case ColorSpaceTransferID::IEC61966_2_1:
      return os << "ColorSpaceTransferID::IEC61966_2_1";
    case ColorSpaceTransferID::BT2020_10:
      return os << "ColorSpaceTransferID::BT2020_10";
    case ColorSpaceTransferID::BT2020_12:
      return os << "ColorSpaceTransferID::BT2020_12";
    case ColorSpaceTransferID::SMPTEST2084:
      return os << "ColorSpaceTransferID::SMPTEST2084";
    case ColorSpaceTransferID::SMPTEST428_1:
      return os << "ColorSpaceTransferID::SMPTEST428_1";
    case ColorSpaceTransferID::ARIB_STD_B67:
      return os << "ColorSpaceTransferID::ARIB_STD_B67";
    case ColorSpaceTransferID::SMPTEST2084_NON_HDR:
      return os << "ColorSpaceTransferID::SMPTEST2084_NON_HDR";
    case ColorSpaceTransferID::IEC61966_2_1_HDR:
      return os << "ColorSpaceTransferID::IEC61966_2_1_HDR";
    case ColorSpaceTransferID::LINEAR_HDR:
      return os << "ColorSpaceTransferID::LINEAR_HDR";
    case ColorSpaceTransferID::CUSTOM:
      return os << "ColorSpaceTransferID::CUSTOM";
    default:
      return os << "Unknown ColorSpaceTransferID value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ColorSpaceMatrixID value) {
  switch(value) {
    case ColorSpaceMatrixID::INVALID:
      return os << "ColorSpaceMatrixID::INVALID";
    case ColorSpaceMatrixID::RGB:
      return os << "ColorSpaceMatrixID::RGB";
    case ColorSpaceMatrixID::BT709:
      return os << "ColorSpaceMatrixID::BT709";
    case ColorSpaceMatrixID::FCC:
      return os << "ColorSpaceMatrixID::FCC";
    case ColorSpaceMatrixID::BT470BG:
      return os << "ColorSpaceMatrixID::BT470BG";
    case ColorSpaceMatrixID::SMPTE170M:
      return os << "ColorSpaceMatrixID::SMPTE170M";
    case ColorSpaceMatrixID::SMPTE240M:
      return os << "ColorSpaceMatrixID::SMPTE240M";
    case ColorSpaceMatrixID::YCOCG:
      return os << "ColorSpaceMatrixID::YCOCG";
    case ColorSpaceMatrixID::BT2020_NCL:
      return os << "ColorSpaceMatrixID::BT2020_NCL";
    case ColorSpaceMatrixID::BT2020_CL:
      return os << "ColorSpaceMatrixID::BT2020_CL";
    case ColorSpaceMatrixID::YDZDX:
      return os << "ColorSpaceMatrixID::YDZDX";
    case ColorSpaceMatrixID::GBR:
      return os << "ColorSpaceMatrixID::GBR";
    default:
      return os << "Unknown ColorSpaceMatrixID value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ColorSpaceRangeID value) {
  switch(value) {
    case ColorSpaceRangeID::INVALID:
      return os << "ColorSpaceRangeID::INVALID";
    case ColorSpaceRangeID::LIMITED:
      return os << "ColorSpaceRangeID::LIMITED";
    case ColorSpaceRangeID::FULL:
      return os << "ColorSpaceRangeID::FULL";
    case ColorSpaceRangeID::DERIVED:
      return os << "ColorSpaceRangeID::DERIVED";
    default:
      return os << "Unknown ColorSpaceRangeID value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ColorSpace_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ColorSpace_Data* object = static_cast<const ColorSpace_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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


  if (!::gfx::mojom::internal::ColorSpacePrimaryID_Data
        ::Validate(object->primaries, validation_context))
    return false;


  if (!::gfx::mojom::internal::ColorSpaceTransferID_Data
        ::Validate(object->transfer, validation_context))
    return false;


  if (!::gfx::mojom::internal::ColorSpaceMatrixID_Data
        ::Validate(object->matrix, validation_context))
    return false;


  if (!::gfx::mojom::internal::ColorSpaceRangeID_Data
        ::Validate(object->range, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->custom_primary_matrix, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams custom_primary_matrix_validate_params(
      9, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->custom_primary_matrix, validation_context,
                                         &custom_primary_matrix_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->custom_transfer_params, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams custom_transfer_params_validate_params(
      7, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->custom_transfer_params, validation_context,
                                         &custom_transfer_params_validate_params)) {
    return false;
  }

  return true;
}

ColorSpace_Data::ColorSpace_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#if defined(_MSC_VER)
#pragma warning(pop)
#endif