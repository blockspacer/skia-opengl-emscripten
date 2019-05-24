// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/shape_detection/public/mojom/barcodedetection.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/shape_detection/public/mojom/barcodedetection.mojom-params-data.h"
namespace shape_detection {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BarcodeFormat value) {
  switch(value) {
    case BarcodeFormat::AZTEC:
      return os << "BarcodeFormat::AZTEC";
    case BarcodeFormat::CODE_128:
      return os << "BarcodeFormat::CODE_128";
    case BarcodeFormat::CODE_39:
      return os << "BarcodeFormat::CODE_39";
    case BarcodeFormat::CODE_93:
      return os << "BarcodeFormat::CODE_93";
    case BarcodeFormat::CODABAR:
      return os << "BarcodeFormat::CODABAR";
    case BarcodeFormat::DATA_MATRIX:
      return os << "BarcodeFormat::DATA_MATRIX";
    case BarcodeFormat::EAN_13:
      return os << "BarcodeFormat::EAN_13";
    case BarcodeFormat::EAN_8:
      return os << "BarcodeFormat::EAN_8";
    case BarcodeFormat::ITF:
      return os << "BarcodeFormat::ITF";
    case BarcodeFormat::PDF417:
      return os << "BarcodeFormat::PDF417";
    case BarcodeFormat::QR_CODE:
      return os << "BarcodeFormat::QR_CODE";
    case BarcodeFormat::UNKNOWN:
      return os << "BarcodeFormat::UNKNOWN";
    case BarcodeFormat::UPC_A:
      return os << "BarcodeFormat::UPC_A";
    case BarcodeFormat::UPC_E:
      return os << "BarcodeFormat::UPC_E";
    default:
      return os << "Unknown BarcodeFormat value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool BarcodeDetectionResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BarcodeDetectionResult_Data* object = static_cast<const BarcodeDetectionResult_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->raw_value, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams raw_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->raw_value, validation_context,
                                         &raw_value_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bounding_box, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bounding_box, validation_context))
    return false;


  if (!::shape_detection::mojom::internal::BarcodeFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->corner_points, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams corner_points_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->corner_points, validation_context,
                                         &corner_points_validate_params)) {
    return false;
  }

  return true;
}

BarcodeDetectionResult_Data::BarcodeDetectionResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BarcodeDetection_Detect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BarcodeDetection_Detect_Params_Data* object = static_cast<const BarcodeDetection_Detect_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->bitmap_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bitmap_data, validation_context))
    return false;

  return true;
}

BarcodeDetection_Detect_Params_Data::BarcodeDetection_Detect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BarcodeDetection_Detect_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BarcodeDetection_Detect_ResponseParams_Data* object = static_cast<const BarcodeDetection_Detect_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->results, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->results, validation_context,
                                         &results_validate_params)) {
    return false;
  }

  return true;
}

BarcodeDetection_Detect_ResponseParams_Data::BarcodeDetection_Detect_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace shape_detection

#if defined(_MSC_VER)
#pragma warning(pop)
#endif