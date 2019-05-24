// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/mojo/interfaces/remoting_common.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/mojo/interfaces/remoting_common.mojom-params-data.h"
namespace media {
namespace mojom {

std::ostream& operator<<(std::ostream& os, RemotingStopReason value) {
  switch(value) {
    case RemotingStopReason::ROUTE_TERMINATED:
      return os << "RemotingStopReason::ROUTE_TERMINATED";
    case RemotingStopReason::LOCAL_PLAYBACK:
      return os << "RemotingStopReason::LOCAL_PLAYBACK";
    case RemotingStopReason::SOURCE_GONE:
      return os << "RemotingStopReason::SOURCE_GONE";
    case RemotingStopReason::MESSAGE_SEND_FAILED:
      return os << "RemotingStopReason::MESSAGE_SEND_FAILED";
    case RemotingStopReason::DATA_SEND_FAILED:
      return os << "RemotingStopReason::DATA_SEND_FAILED";
    case RemotingStopReason::UNEXPECTED_FAILURE:
      return os << "RemotingStopReason::UNEXPECTED_FAILURE";
    case RemotingStopReason::SERVICE_GONE:
      return os << "RemotingStopReason::SERVICE_GONE";
    case RemotingStopReason::USER_DISABLED:
      return os << "RemotingStopReason::USER_DISABLED";
    default:
      return os << "Unknown RemotingStopReason value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, RemotingStartFailReason value) {
  switch(value) {
    case RemotingStartFailReason::CANNOT_START_MULTIPLE:
      return os << "RemotingStartFailReason::CANNOT_START_MULTIPLE";
    case RemotingStartFailReason::ROUTE_TERMINATED:
      return os << "RemotingStartFailReason::ROUTE_TERMINATED";
    case RemotingStartFailReason::SERVICE_NOT_CONNECTED:
      return os << "RemotingStartFailReason::SERVICE_NOT_CONNECTED";
    default:
      return os << "Unknown RemotingStartFailReason value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, RemotingSinkFeature value) {
  switch(value) {
    case RemotingSinkFeature::RENDERING:
      return os << "RemotingSinkFeature::RENDERING";
    case RemotingSinkFeature::CONTENT_DECRYPTION:
      return os << "RemotingSinkFeature::CONTENT_DECRYPTION";
    default:
      return os << "Unknown RemotingSinkFeature value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, RemotingSinkAudioCapability value) {
  switch(value) {
    case RemotingSinkAudioCapability::CODEC_BASELINE_SET:
      return os << "RemotingSinkAudioCapability::CODEC_BASELINE_SET";
    case RemotingSinkAudioCapability::CODEC_AAC:
      return os << "RemotingSinkAudioCapability::CODEC_AAC";
    case RemotingSinkAudioCapability::CODEC_OPUS:
      return os << "RemotingSinkAudioCapability::CODEC_OPUS";
    default:
      return os << "Unknown RemotingSinkAudioCapability value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, RemotingSinkVideoCapability value) {
  switch(value) {
    case RemotingSinkVideoCapability::SUPPORT_4K:
      return os << "RemotingSinkVideoCapability::SUPPORT_4K";
    case RemotingSinkVideoCapability::CODEC_BASELINE_SET:
      return os << "RemotingSinkVideoCapability::CODEC_BASELINE_SET";
    case RemotingSinkVideoCapability::CODEC_H264:
      return os << "RemotingSinkVideoCapability::CODEC_H264";
    case RemotingSinkVideoCapability::CODEC_VP8:
      return os << "RemotingSinkVideoCapability::CODEC_VP8";
    case RemotingSinkVideoCapability::CODEC_VP9:
      return os << "RemotingSinkVideoCapability::CODEC_VP9";
    case RemotingSinkVideoCapability::CODEC_HEVC:
      return os << "RemotingSinkVideoCapability::CODEC_HEVC";
    default:
      return os << "Unknown RemotingSinkVideoCapability value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool RemotingSinkMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RemotingSinkMetadata_Data* object = static_cast<const RemotingSinkMetadata_Data*>(data);

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
          object->features, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams features_validate_params(
      0, ::media::mojom::internal::RemotingSinkFeature_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->features, validation_context,
                                         &features_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->audio_capabilities, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams audio_capabilities_validate_params(
      0, ::media::mojom::internal::RemotingSinkAudioCapability_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->audio_capabilities, validation_context,
                                         &audio_capabilities_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_capabilities, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_capabilities_validate_params(
      0, ::media::mojom::internal::RemotingSinkVideoCapability_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->video_capabilities, validation_context,
                                         &video_capabilities_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->friendly_name, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams friendly_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->friendly_name, validation_context,
                                         &friendly_name_validate_params)) {
    return false;
  }

  return true;
}

RemotingSinkMetadata_Data::RemotingSinkMetadata_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif