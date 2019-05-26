// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/mojo/interfaces/media_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/mojo/interfaces/media_types.mojom-params-data.h"
namespace media {
namespace mojom {

namespace internal {
// static
bool VideoFrameData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const VideoFrameData_Data* object = static_cast<const VideoFrameData_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case VideoFrameData_Tag::EOS_DATA: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_eos_data, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_eos_data, validation_context))
        return false;
      return true;
    }
    case VideoFrameData_Tag::SHARED_BUFFER_DATA: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_shared_buffer_data, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_shared_buffer_data, validation_context))
        return false;
      return true;
    }
    case VideoFrameData_Tag::MAILBOX_DATA: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_mailbox_data, 3, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_mailbox_data, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in VideoFrameData");
      return false;
    }
  }
}


// static
bool VideoTransformation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoTransformation_Data* object = static_cast<const VideoTransformation_Data*>(data);

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


  if (!::media::mojom::internal::VideoRotation_Data
        ::Validate(object->rotation, validation_context))
    return false;

  return true;
}

VideoTransformation_Data::VideoTransformation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EncryptionPattern_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EncryptionPattern_Data* object = static_cast<const EncryptionPattern_Data*>(data);

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

EncryptionPattern_Data::EncryptionPattern_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EncryptionScheme_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EncryptionScheme_Data* object = static_cast<const EncryptionScheme_Data*>(data);

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


  if (!::media::mojom::internal::EncryptionScheme_CipherMode_Data
        ::Validate(object->mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pattern, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pattern, validation_context))
    return false;

  return true;
}

EncryptionScheme_Data::EncryptionScheme_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoColorSpace_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoColorSpace_Data* object = static_cast<const VideoColorSpace_Data*>(data);

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


  if (!::media::mojom::internal::VideoColorSpace_PrimaryID_Data
        ::Validate(object->primaries, validation_context))
    return false;


  if (!::media::mojom::internal::VideoColorSpace_TransferID_Data
        ::Validate(object->transfer, validation_context))
    return false;


  if (!::media::mojom::internal::VideoColorSpace_MatrixID_Data
        ::Validate(object->matrix, validation_context))
    return false;


  if (!::media::mojom::internal::VideoColorSpace_RangeID_Data
        ::Validate(object->range, validation_context))
    return false;

  return true;
}

VideoColorSpace_Data::VideoColorSpace_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MasteringMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MasteringMetadata_Data* object = static_cast<const MasteringMetadata_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->primary_r, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->primary_r, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->primary_g, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->primary_g, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->primary_b, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->primary_b, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->white_point, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->white_point, validation_context))
    return false;

  return true;
}

MasteringMetadata_Data::MasteringMetadata_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HDRMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HDRMetadata_Data* object = static_cast<const HDRMetadata_Data*>(data);

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
          object->mastering_metadata, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->mastering_metadata, validation_context))
    return false;

  return true;
}

HDRMetadata_Data::HDRMetadata_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioDecoderConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AudioDecoderConfig_Data* object = static_cast<const AudioDecoderConfig_Data*>(data);

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


  if (!::media::mojom::internal::AudioCodec_Data
        ::Validate(object->codec, validation_context))
    return false;


  if (!::media::mojom::internal::SampleFormat_Data
        ::Validate(object->sample_format, validation_context))
    return false;


  if (!::media::mojom::internal::ChannelLayout_Data
        ::Validate(object->channel_layout, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->extra_data, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams extra_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->extra_data, validation_context,
                                         &extra_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->seek_preroll, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->seek_preroll, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->encryption_scheme, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->encryption_scheme, validation_context))
    return false;

  return true;
}

AudioDecoderConfig_Data::AudioDecoderConfig_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoDecoderConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoDecoderConfig_Data* object = static_cast<const VideoDecoderConfig_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 88 }};

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


  if (!::media::mojom::internal::VideoCodec_Data
        ::Validate(object->codec, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCodecProfile_Data
        ::Validate(object->profile, validation_context))
    return false;


  if (!::media::mojom::internal::VideoPixelFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->transformation, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->transformation, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->coded_size, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->coded_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_rect, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->natural_size, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->natural_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->extra_data, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams extra_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->extra_data, validation_context,
                                         &extra_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->encryption_scheme, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->encryption_scheme, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_space_info, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_space_info, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->hdr_metadata, validation_context))
    return false;

  return true;
}

VideoDecoderConfig_Data::VideoDecoderConfig_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DecryptConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DecryptConfig_Data* object = static_cast<const DecryptConfig_Data*>(data);

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


  if (!::media::mojom::internal::EncryptionMode_Data
        ::Validate(object->encryption_mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_id, validation_context,
                                         &key_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->iv, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams iv_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->iv, validation_context,
                                         &iv_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->subsamples, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams subsamples_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->subsamples, validation_context,
                                         &subsamples_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->encryption_pattern, validation_context))
    return false;

  return true;
}

DecryptConfig_Data::DecryptConfig_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DecoderBuffer_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DecoderBuffer_Data* object = static_cast<const DecoderBuffer_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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
          object->timestamp, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->duration, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->duration, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->side_data, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams side_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->side_data, validation_context,
                                         &side_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->decrypt_config, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->front_discard, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->front_discard, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->back_discard, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->back_discard, validation_context))
    return false;

  return true;
}

DecoderBuffer_Data::DecoderBuffer_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AudioBuffer_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AudioBuffer_Data* object = static_cast<const AudioBuffer_Data*>(data);

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


  if (!::media::mojom::internal::SampleFormat_Data
        ::Validate(object->sample_format, validation_context))
    return false;


  if (!::media::mojom::internal::ChannelLayout_Data
        ::Validate(object->channel_layout, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 8, validation_context)) {
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

AudioBuffer_Data::AudioBuffer_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoFrame_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoFrame_Data* object = static_cast<const VideoFrame_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 80 }};

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


  if (!::media::mojom::internal::VideoPixelFormat_Data
        ::Validate(object->format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->coded_size, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->coded_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_rect, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_rect, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->natural_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->natural_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 6, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->metadata, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->metadata, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->color_space, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->color_space, validation_context))
    return false;

  return true;
}

VideoFrame_Data::VideoFrame_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool EosVideoFrameData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EosVideoFrameData_Data* object = static_cast<const EosVideoFrameData_Data*>(data);

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

EosVideoFrameData_Data::EosVideoFrameData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SharedBufferVideoFrameData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SharedBufferVideoFrameData_Data* object = static_cast<const SharedBufferVideoFrameData_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->frame_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->frame_data,
                                                 validation_context)) {
    return false;
  }

  return true;
}

SharedBufferVideoFrameData_Data::SharedBufferVideoFrameData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MailboxVideoFrameData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MailboxVideoFrameData_Data* object = static_cast<const MailboxVideoFrameData_Data*>(data);

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
          object->mailbox_holder, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mailbox_holder_validate_params(
      4, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mailbox_holder, validation_context,
                                         &mailbox_holder_validate_params)) {
    return false;
  }

  return true;
}

MailboxVideoFrameData_Data::MailboxVideoFrameData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PipelineStatistics_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PipelineStatistics_Data* object = static_cast<const PipelineStatistics_Data*>(data);

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

  return true;
}

PipelineStatistics_Data::PipelineStatistics_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PredictionFeatures_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PredictionFeatures_Data* object = static_cast<const PredictionFeatures_Data*>(data);

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


  if (!::media::mojom::internal::VideoCodecProfile_Data
        ::Validate(object->profile, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_size, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->video_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_system, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_system_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_system, validation_context,
                                         &key_system_validate_params)) {
    return false;
  }

  return true;
}

PredictionFeatures_Data::PredictionFeatures_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PredictionTargets_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PredictionTargets_Data* object = static_cast<const PredictionTargets_Data*>(data);

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

PredictionTargets_Data::PredictionTargets_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif