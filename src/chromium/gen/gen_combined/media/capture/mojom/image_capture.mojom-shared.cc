// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/capture/mojom/image_capture.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/capture/mojom/image_capture.mojom-params-data.h"
namespace media {
namespace mojom {

std::ostream& operator<<(std::ostream& os, MeteringMode value) {
  switch(value) {
    case MeteringMode::NONE:
      return os << "MeteringMode::NONE";
    case MeteringMode::MANUAL:
      return os << "MeteringMode::MANUAL";
    case MeteringMode::SINGLE_SHOT:
      return os << "MeteringMode::SINGLE_SHOT";
    case MeteringMode::CONTINUOUS:
      return os << "MeteringMode::CONTINUOUS";
    default:
      return os << "Unknown MeteringMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, RedEyeReduction value) {
  switch(value) {
    case RedEyeReduction::NEVER:
      return os << "RedEyeReduction::NEVER";
    case RedEyeReduction::ALWAYS:
      return os << "RedEyeReduction::ALWAYS";
    case RedEyeReduction::CONTROLLABLE:
      return os << "RedEyeReduction::CONTROLLABLE";
    default:
      return os << "Unknown RedEyeReduction value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FillLightMode value) {
  switch(value) {
    case FillLightMode::OFF:
      return os << "FillLightMode::OFF";
    case FillLightMode::AUTO:
      return os << "FillLightMode::AUTO";
    case FillLightMode::FLASH:
      return os << "FillLightMode::FLASH";
    default:
      return os << "Unknown FillLightMode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Range_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Range_Data* object = static_cast<const Range_Data*>(data);

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

  return true;
}

Range_Data::Range_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PhotoState_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PhotoState_Data* object = static_cast<const PhotoState_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 168 }};

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
          object->supported_white_balance_modes, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_white_balance_modes_validate_params(
      0, ::media::mojom::internal::MeteringMode_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_white_balance_modes, validation_context,
                                         &supported_white_balance_modes_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::MeteringMode_Data
        ::Validate(object->current_white_balance_mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_exposure_modes, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_exposure_modes_validate_params(
      0, ::media::mojom::internal::MeteringMode_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_exposure_modes, validation_context,
                                         &supported_exposure_modes_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::MeteringMode_Data
        ::Validate(object->current_exposure_mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_focus_modes, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_focus_modes_validate_params(
      0, ::media::mojom::internal::MeteringMode_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_focus_modes, validation_context,
                                         &supported_focus_modes_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::MeteringMode_Data
        ::Validate(object->current_focus_mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->points_of_interest, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams points_of_interest_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->points_of_interest, validation_context,
                                         &points_of_interest_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->exposure_compensation, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->exposure_compensation, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->exposure_time, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->exposure_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_temperature, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_temperature, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->iso, 11, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->iso, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->brightness, 12, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->brightness, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->contrast, 13, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->contrast, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->saturation, 14, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->saturation, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sharpness, 15, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sharpness, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->focus_distance, 16, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->focus_distance, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->zoom, 17, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->zoom, validation_context))
    return false;


  if (!::media::mojom::internal::RedEyeReduction_Data
        ::Validate(object->red_eye_reduction, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->height, 21, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->height, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->width, 22, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->width, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fill_light_mode, 23, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fill_light_mode_validate_params(
      0, ::media::mojom::internal::FillLightMode_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->fill_light_mode, validation_context,
                                         &fill_light_mode_validate_params)) {
    return false;
  }

  return true;
}

PhotoState_Data::PhotoState_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Point2D_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Point2D_Data* object = static_cast<const Point2D_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  return true;
}

Point2D_Data::Point2D_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PhotoSettings_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PhotoSettings_Data* object = static_cast<const PhotoSettings_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 136 }};

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


  if (!::media::mojom::internal::MeteringMode_Data
        ::Validate(object->white_balance_mode, validation_context))
    return false;


  if (!::media::mojom::internal::MeteringMode_Data
        ::Validate(object->exposure_mode, validation_context))
    return false;


  if (!::media::mojom::internal::MeteringMode_Data
        ::Validate(object->focus_mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->points_of_interest, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams points_of_interest_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->points_of_interest, validation_context,
                                         &points_of_interest_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::FillLightMode_Data
        ::Validate(object->fill_light_mode, validation_context))
    return false;

  return true;
}

PhotoSettings_Data::PhotoSettings_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Blob_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Blob_Data* object = static_cast<const Blob_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->mime_type, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mime_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mime_type, validation_context,
                                         &mime_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->data, validation_context,
                                         &data_validate_params)) {
    return false;
  }

  return true;
}

Blob_Data::Blob_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageCapture_GetPhotoState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageCapture_GetPhotoState_Params_Data* object = static_cast<const ImageCapture_GetPhotoState_Params_Data*>(data);

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
          object->source_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_id, validation_context,
                                         &source_id_validate_params)) {
    return false;
  }

  return true;
}

ImageCapture_GetPhotoState_Params_Data::ImageCapture_GetPhotoState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageCapture_GetPhotoState_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageCapture_GetPhotoState_ResponseParams_Data* object = static_cast<const ImageCapture_GetPhotoState_ResponseParams_Data*>(data);

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
          object->state, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->state, validation_context))
    return false;

  return true;
}

ImageCapture_GetPhotoState_ResponseParams_Data::ImageCapture_GetPhotoState_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageCapture_SetOptions_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageCapture_SetOptions_Params_Data* object = static_cast<const ImageCapture_SetOptions_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->source_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_id, validation_context,
                                         &source_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->settings, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->settings, validation_context))
    return false;

  return true;
}

ImageCapture_SetOptions_Params_Data::ImageCapture_SetOptions_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageCapture_SetOptions_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageCapture_SetOptions_ResponseParams_Data* object = static_cast<const ImageCapture_SetOptions_ResponseParams_Data*>(data);

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

  return true;
}

ImageCapture_SetOptions_ResponseParams_Data::ImageCapture_SetOptions_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageCapture_TakePhoto_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageCapture_TakePhoto_Params_Data* object = static_cast<const ImageCapture_TakePhoto_Params_Data*>(data);

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
          object->source_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_id, validation_context,
                                         &source_id_validate_params)) {
    return false;
  }

  return true;
}

ImageCapture_TakePhoto_Params_Data::ImageCapture_TakePhoto_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageCapture_TakePhoto_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageCapture_TakePhoto_ResponseParams_Data* object = static_cast<const ImageCapture_TakePhoto_ResponseParams_Data*>(data);

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
          object->blob, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->blob, validation_context))
    return false;

  return true;
}

ImageCapture_TakePhoto_ResponseParams_Data::ImageCapture_TakePhoto_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif