// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, MediaDeviceType value) {
  switch(value) {
    case MediaDeviceType::MEDIA_AUDIO_INPUT:
      return os << "MediaDeviceType::MEDIA_AUDIO_INPUT";
    case MediaDeviceType::MEDIA_VIDEO_INPUT:
      return os << "MediaDeviceType::MEDIA_VIDEO_INPUT";
    case MediaDeviceType::MEDIA_AUDIO_OUTPUT:
      return os << "MediaDeviceType::MEDIA_AUDIO_OUTPUT";
    case MediaDeviceType::NUM_MEDIA_DEVICE_TYPES:
      return os << "MediaDeviceType::NUM_MEDIA_DEVICE_TYPES";
    default:
      return os << "Unknown MediaDeviceType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FacingMode value) {
  switch(value) {
    case FacingMode::NONE:
      return os << "FacingMode::NONE";
    case FacingMode::USER:
      return os << "FacingMode::USER";
    case FacingMode::ENVIRONMENT:
      return os << "FacingMode::ENVIRONMENT";
    case FacingMode::LEFT:
      return os << "FacingMode::LEFT";
    case FacingMode::RIGHT:
      return os << "FacingMode::RIGHT";
    default:
      return os << "Unknown FacingMode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool MediaDeviceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDeviceInfo_Data* object = static_cast<const MediaDeviceInfo_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->label, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  return true;
}

MediaDeviceInfo_Data::MediaDeviceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoInputDeviceCapabilities_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoInputDeviceCapabilities_Data* object = static_cast<const VideoInputDeviceCapabilities_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->formats, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->formats, validation_context,
                                         &formats_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::FacingMode_Data
        ::Validate(object->facing_mode, validation_context))
    return false;

  return true;
}

VideoInputDeviceCapabilities_Data::VideoInputDeviceCapabilities_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioInputDeviceCapabilities_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AudioInputDeviceCapabilities_Data* object = static_cast<const AudioInputDeviceCapabilities_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->parameters, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parameters, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->latency, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->latency, validation_context))
    return false;

  return true;
}

AudioInputDeviceCapabilities_Data::AudioInputDeviceCapabilities_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_EnumerateDevices_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_EnumerateDevices_Params_Data* object = static_cast<const MediaDevicesDispatcherHost_EnumerateDevices_Params_Data*>(data);

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

MediaDevicesDispatcherHost_EnumerateDevices_Params_Data::MediaDevicesDispatcherHost_EnumerateDevices_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data* object = static_cast<const MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->enumeration, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams enumeration_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->enumeration, validation_context,
                                         &enumeration_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_input_device_capabilities, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_input_device_capabilities, validation_context,
                                         &video_input_device_capabilities_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->audio_input_device_capabilities, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->audio_input_device_capabilities, validation_context,
                                         &audio_input_device_capabilities_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data::MediaDevicesDispatcherHost_EnumerateDevices_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data* object = static_cast<const MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data::MediaDevicesDispatcherHost_GetVideoInputCapabilities_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data* object = static_cast<const MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data*>(data);

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
          object->video_input_device_capabilities, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_input_device_capabilities, validation_context,
                                         &video_input_device_capabilities_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data::MediaDevicesDispatcherHost_GetVideoInputCapabilities_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data* object = static_cast<const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data* object = static_cast<const MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data*>(data);

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
          object->formats, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->formats, validation_context,
                                         &formats_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data::MediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data* object = static_cast<const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data* object = static_cast<const MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data*>(data);

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
          object->formats, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->formats, validation_context,
                                         &formats_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data::MediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data* object = static_cast<const MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data::MediaDevicesDispatcherHost_GetAudioInputCapabilities_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data* object = static_cast<const MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data*>(data);

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
          object->audio_input_device_capabilities, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_input_device_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->audio_input_device_capabilities, validation_context,
                                         &audio_input_device_capabilities_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data::MediaDevicesDispatcherHost_GetAudioInputCapabilities_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data* object = static_cast<const MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->listener, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->listener,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data::MediaDevicesDispatcherHost_AddMediaDevicesListener_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaDevicesListener_OnDevicesChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaDevicesListener_OnDevicesChanged_Params_Data* object = static_cast<const MediaDevicesListener_OnDevicesChanged_Params_Data*>(data);

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


  if (!::blink::mojom::internal::MediaDeviceType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_infos, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_infos_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_infos, validation_context,
                                         &device_infos_validate_params)) {
    return false;
  }

  return true;
}

MediaDevicesListener_OnDevicesChanged_Params_Data::MediaDevicesListener_OnDevicesChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif