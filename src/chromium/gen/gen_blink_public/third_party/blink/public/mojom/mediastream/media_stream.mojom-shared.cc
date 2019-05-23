// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, MediaStreamType value) {
  switch(value) {
    case MediaStreamType::MEDIA_NO_SERVICE:
      return os << "MediaStreamType::MEDIA_NO_SERVICE";
    case MediaStreamType::MEDIA_DEVICE_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DEVICE_AUDIO_CAPTURE";
    case MediaStreamType::MEDIA_DEVICE_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DEVICE_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_GUM_TAB_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_GUM_TAB_AUDIO_CAPTURE";
    case MediaStreamType::MEDIA_GUM_TAB_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_GUM_TAB_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_GUM_DESKTOP_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_GUM_DESKTOP_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_GUM_DESKTOP_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_GUM_DESKTOP_AUDIO_CAPTURE";
    case MediaStreamType::MEDIA_DISPLAY_VIDEO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DISPLAY_VIDEO_CAPTURE";
    case MediaStreamType::MEDIA_DISPLAY_AUDIO_CAPTURE:
      return os << "MediaStreamType::MEDIA_DISPLAY_AUDIO_CAPTURE";
    case MediaStreamType::NUM_MEDIA_TYPES:
      return os << "MediaStreamType::NUM_MEDIA_TYPES";
    default:
      return os << "Unknown MediaStreamType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, MediaStreamRequestResult value) {
  switch(value) {
    case MediaStreamRequestResult::OK:
      return os << "MediaStreamRequestResult::OK";
    case MediaStreamRequestResult::PERMISSION_DENIED:
      return os << "MediaStreamRequestResult::PERMISSION_DENIED";
    case MediaStreamRequestResult::PERMISSION_DISMISSED:
      return os << "MediaStreamRequestResult::PERMISSION_DISMISSED";
    case MediaStreamRequestResult::INVALID_STATE:
      return os << "MediaStreamRequestResult::INVALID_STATE";
    case MediaStreamRequestResult::NO_HARDWARE:
      return os << "MediaStreamRequestResult::NO_HARDWARE";
    case MediaStreamRequestResult::INVALID_SECURITY_ORIGIN:
      return os << "MediaStreamRequestResult::INVALID_SECURITY_ORIGIN";
    case MediaStreamRequestResult::TAB_CAPTURE_FAILURE:
      return os << "MediaStreamRequestResult::TAB_CAPTURE_FAILURE";
    case MediaStreamRequestResult::SCREEN_CAPTURE_FAILURE:
      return os << "MediaStreamRequestResult::SCREEN_CAPTURE_FAILURE";
    case MediaStreamRequestResult::CAPTURE_FAILURE:
      return os << "MediaStreamRequestResult::CAPTURE_FAILURE";
    case MediaStreamRequestResult::CONSTRAINT_NOT_SATISFIED:
      return os << "MediaStreamRequestResult::CONSTRAINT_NOT_SATISFIED";
    case MediaStreamRequestResult::TRACK_START_FAILURE_AUDIO:
      return os << "MediaStreamRequestResult::TRACK_START_FAILURE_AUDIO";
    case MediaStreamRequestResult::TRACK_START_FAILURE_VIDEO:
      return os << "MediaStreamRequestResult::TRACK_START_FAILURE_VIDEO";
    case MediaStreamRequestResult::NOT_SUPPORTED:
      return os << "MediaStreamRequestResult::NOT_SUPPORTED";
    case MediaStreamRequestResult::FAILED_DUE_TO_SHUTDOWN:
      return os << "MediaStreamRequestResult::FAILED_DUE_TO_SHUTDOWN";
    case MediaStreamRequestResult::KILL_SWITCH_ON:
      return os << "MediaStreamRequestResult::KILL_SWITCH_ON";
    case MediaStreamRequestResult::SYSTEM_PERMISSION_DENIED:
      return os << "MediaStreamRequestResult::SYSTEM_PERMISSION_DENIED";
    default:
      return os << "Unknown MediaStreamRequestResult value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool MediaStreamDevice_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDevice_Data* object = static_cast<const MediaStreamDevice_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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


  if (!::blink::mojom::internal::MediaStreamType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::VideoFacingMode_Data
        ::Validate(object->video_facing, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams group_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->group_id, validation_context,
                                         &group_id_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams matched_output_device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->matched_output_device_id, validation_context,
                                         &matched_output_device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->input, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->input, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->display_media_info, validation_context))
    return false;

  return true;
}

MediaStreamDevice_Data::MediaStreamDevice_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrackControls_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TrackControls_Data* object = static_cast<const TrackControls_Data*>(data);

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


  if (!::blink::mojom::internal::MediaStreamType_Data
        ::Validate(object->stream_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 3, validation_context)) {
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

TrackControls_Data::TrackControls_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StreamControls_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StreamControls_Data* object = static_cast<const StreamControls_Data*>(data);

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
          object->audio, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->audio, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->video, validation_context))
    return false;

  return true;
}

StreamControls_Data::StreamControls_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDeviceObserver_OnDeviceStopped_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDeviceObserver_OnDeviceStopped_Params_Data* object = static_cast<const MediaStreamDeviceObserver_OnDeviceStopped_Params_Data*>(data);

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
          object->label, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device, validation_context))
    return false;

  return true;
}

MediaStreamDeviceObserver_OnDeviceStopped_Params_Data::MediaStreamDeviceObserver_OnDeviceStopped_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDeviceObserver_OnDeviceChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDeviceObserver_OnDeviceChanged_Params_Data* object = static_cast<const MediaStreamDeviceObserver_OnDeviceChanged_Params_Data*>(data);

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
          object->label, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->old_device, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->old_device, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_device, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->new_device, validation_context))
    return false;

  return true;
}

MediaStreamDeviceObserver_OnDeviceChanged_Params_Data::MediaStreamDeviceObserver_OnDeviceChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_GenerateStream_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_GenerateStream_Params_Data* object = static_cast<const MediaStreamDispatcherHost_GenerateStream_Params_Data*>(data);

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
          object->controls, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->controls, validation_context))
    return false;

  return true;
}

MediaStreamDispatcherHost_GenerateStream_Params_Data::MediaStreamDispatcherHost_GenerateStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data* object = static_cast<const MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::MediaStreamRequestResult_Data
        ::Validate(object->result, validation_context))
    return false;

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
          object->audio_devices, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->audio_devices, validation_context,
                                         &audio_devices_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_devices, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_devices, validation_context,
                                         &video_devices_validate_params)) {
    return false;
  }

  return true;
}

MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data::MediaStreamDispatcherHost_GenerateStream_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_CancelRequest_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_CancelRequest_Params_Data* object = static_cast<const MediaStreamDispatcherHost_CancelRequest_Params_Data*>(data);

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

MediaStreamDispatcherHost_CancelRequest_Params_Data::MediaStreamDispatcherHost_CancelRequest_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_StopStreamDevice_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_StopStreamDevice_Params_Data* object = static_cast<const MediaStreamDispatcherHost_StopStreamDevice_Params_Data*>(data);

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

MediaStreamDispatcherHost_StopStreamDevice_Params_Data::MediaStreamDispatcherHost_StopStreamDevice_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_OpenDevice_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_OpenDevice_Params_Data* object = static_cast<const MediaStreamDispatcherHost_OpenDevice_Params_Data*>(data);

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
          object->device_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::MediaStreamType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

MediaStreamDispatcherHost_OpenDevice_Params_Data::MediaStreamDispatcherHost_OpenDevice_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data* object = static_cast<const MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data*>(data);

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
          object->device, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device, validation_context))
    return false;

  return true;
}

MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data::MediaStreamDispatcherHost_OpenDevice_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_CloseDevice_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_CloseDevice_Params_Data* object = static_cast<const MediaStreamDispatcherHost_CloseDevice_Params_Data*>(data);

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
          object->label, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  return true;
}

MediaStreamDispatcherHost_CloseDevice_Params_Data::MediaStreamDispatcherHost_CloseDevice_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data* object = static_cast<const MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data*>(data);

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


  if (!::blink::mojom::internal::MediaStreamType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data::MediaStreamDispatcherHost_SetCapturingLinkSecured_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamDispatcherHost_OnStreamStarted_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamDispatcherHost_OnStreamStarted_Params_Data* object = static_cast<const MediaStreamDispatcherHost_OnStreamStarted_Params_Data*>(data);

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
          object->label, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  return true;
}

MediaStreamDispatcherHost_OnStreamStarted_Params_Data::MediaStreamDispatcherHost_OnStreamStarted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamTrackMetricsHost_AddTrack_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamTrackMetricsHost_AddTrack_Params_Data* object = static_cast<const MediaStreamTrackMetricsHost_AddTrack_Params_Data*>(data);

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

MediaStreamTrackMetricsHost_AddTrack_Params_Data::MediaStreamTrackMetricsHost_AddTrack_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaStreamTrackMetricsHost_RemoveTrack_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaStreamTrackMetricsHost_RemoveTrack_Params_Data* object = static_cast<const MediaStreamTrackMetricsHost_RemoveTrack_Params_Data*>(data);

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

MediaStreamTrackMetricsHost_RemoveTrack_Params_Data::MediaStreamTrackMetricsHost_RemoveTrack_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif