// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "gpu/ipc/common/gpu_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "gpu/ipc/common/gpu_info.mojom-params-data.h"
namespace gpu {
namespace mojom {

std::ostream& operator<<(std::ostream& os, VideoCodecProfile value) {
  switch(value) {
    case VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN:
      return os << "VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN";
    case VideoCodecProfile::H264PROFILE_BASELINE:
      return os << "VideoCodecProfile::H264PROFILE_BASELINE";
    case VideoCodecProfile::H264PROFILE_MAIN:
      return os << "VideoCodecProfile::H264PROFILE_MAIN";
    case VideoCodecProfile::H264PROFILE_EXTENDED:
      return os << "VideoCodecProfile::H264PROFILE_EXTENDED";
    case VideoCodecProfile::H264PROFILE_HIGH:
      return os << "VideoCodecProfile::H264PROFILE_HIGH";
    case VideoCodecProfile::H264PROFILE_HIGH10PROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH10PROFILE";
    case VideoCodecProfile::H264PROFILE_HIGH422PROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH422PROFILE";
    case VideoCodecProfile::H264PROFILE_HIGH444PREDICTIVEPROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH444PREDICTIVEPROFILE";
    case VideoCodecProfile::H264PROFILE_SCALABLEBASELINE:
      return os << "VideoCodecProfile::H264PROFILE_SCALABLEBASELINE";
    case VideoCodecProfile::H264PROFILE_SCALABLEHIGH:
      return os << "VideoCodecProfile::H264PROFILE_SCALABLEHIGH";
    case VideoCodecProfile::H264PROFILE_STEREOHIGH:
      return os << "VideoCodecProfile::H264PROFILE_STEREOHIGH";
    case VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH:
      return os << "VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH";
    case VideoCodecProfile::VP8PROFILE_ANY:
      return os << "VideoCodecProfile::VP8PROFILE_ANY";
    case VideoCodecProfile::VP9PROFILE_PROFILE0:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE0";
    case VideoCodecProfile::VP9PROFILE_PROFILE1:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE1";
    case VideoCodecProfile::VP9PROFILE_PROFILE2:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE2";
    case VideoCodecProfile::VP9PROFILE_PROFILE3:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE3";
    case VideoCodecProfile::HEVCPROFILE_MAIN:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN";
    case VideoCodecProfile::HEVCPROFILE_MAIN10:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN10";
    case VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE";
    case VideoCodecProfile::DOLBYVISION_PROFILE0:
      return os << "VideoCodecProfile::DOLBYVISION_PROFILE0";
    case VideoCodecProfile::DOLBYVISION_PROFILE4:
      return os << "VideoCodecProfile::DOLBYVISION_PROFILE4";
    case VideoCodecProfile::DOLBYVISION_PROFILE5:
      return os << "VideoCodecProfile::DOLBYVISION_PROFILE5";
    case VideoCodecProfile::DOLBYVISION_PROFILE7:
      return os << "VideoCodecProfile::DOLBYVISION_PROFILE7";
    case VideoCodecProfile::THEORAPROFILE_ANY:
      return os << "VideoCodecProfile::THEORAPROFILE_ANY";
    case VideoCodecProfile::AV1PROFILE_PROFILE_MAIN:
      return os << "VideoCodecProfile::AV1PROFILE_PROFILE_MAIN";
    case VideoCodecProfile::AV1PROFILE_PROFILE_HIGH:
      return os << "VideoCodecProfile::AV1PROFILE_PROFILE_HIGH";
    case VideoCodecProfile::AV1PROFILE_PROFILE_PRO:
      return os << "VideoCodecProfile::AV1PROFILE_PROFILE_PRO";
    default:
      return os << "Unknown VideoCodecProfile value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ImageDecodeAcceleratorType value) {
  switch(value) {
    case ImageDecodeAcceleratorType::kJpeg:
      return os << "ImageDecodeAcceleratorType::kJpeg";
    case ImageDecodeAcceleratorType::kUnknown:
      return os << "ImageDecodeAcceleratorType::kUnknown";
    default:
      return os << "Unknown ImageDecodeAcceleratorType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ImageDecodeAcceleratorSubsampling value) {
  switch(value) {
    case ImageDecodeAcceleratorSubsampling::k420:
      return os << "ImageDecodeAcceleratorSubsampling::k420";
    case ImageDecodeAcceleratorSubsampling::k422:
      return os << "ImageDecodeAcceleratorSubsampling::k422";
    case ImageDecodeAcceleratorSubsampling::k444:
      return os << "ImageDecodeAcceleratorSubsampling::k444";
    default:
      return os << "Unknown ImageDecodeAcceleratorSubsampling value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool GpuDevice_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuDevice_Data* object = static_cast<const GpuDevice_Data*>(data);

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
          object->vendor_string, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams vendor_string_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->vendor_string, validation_context,
                                         &vendor_string_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_string, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_string_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_string, validation_context,
                                         &device_string_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->driver_vendor, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams driver_vendor_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->driver_vendor, validation_context,
                                         &driver_vendor_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->driver_version, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams driver_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->driver_version, validation_context,
                                         &driver_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->driver_date, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams driver_date_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->driver_date, validation_context,
                                         &driver_date_validate_params)) {
    return false;
  }

  return true;
}

GpuDevice_Data::GpuDevice_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoDecodeAcceleratorSupportedProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoDecodeAcceleratorSupportedProfile_Data* object = static_cast<const VideoDecodeAcceleratorSupportedProfile_Data*>(data);

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


  if (!::gpu::mojom::internal::VideoCodecProfile_Data
        ::Validate(object->profile, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_resolution, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->max_resolution, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->min_resolution, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->min_resolution, validation_context))
    return false;

  return true;
}

VideoDecodeAcceleratorSupportedProfile_Data::VideoDecodeAcceleratorSupportedProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoDecodeAcceleratorCapabilities_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoDecodeAcceleratorCapabilities_Data* object = static_cast<const VideoDecodeAcceleratorCapabilities_Data*>(data);

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
          object->supported_profiles, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_profiles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->supported_profiles, validation_context,
                                         &supported_profiles_validate_params)) {
    return false;
  }

  return true;
}

VideoDecodeAcceleratorCapabilities_Data::VideoDecodeAcceleratorCapabilities_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoEncodeAcceleratorSupportedProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoEncodeAcceleratorSupportedProfile_Data* object = static_cast<const VideoEncodeAcceleratorSupportedProfile_Data*>(data);

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


  if (!::gpu::mojom::internal::VideoCodecProfile_Data
        ::Validate(object->profile, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_resolution, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->max_resolution, validation_context))
    return false;

  return true;
}

VideoEncodeAcceleratorSupportedProfile_Data::VideoEncodeAcceleratorSupportedProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageDecodeAcceleratorSupportedProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDecodeAcceleratorSupportedProfile_Data* object = static_cast<const ImageDecodeAcceleratorSupportedProfile_Data*>(data);

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


  if (!::gpu::mojom::internal::ImageDecodeAcceleratorType_Data
        ::Validate(object->image_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->min_encoded_dimensions, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->min_encoded_dimensions, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_encoded_dimensions, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->max_encoded_dimensions, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->subsamplings, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams subsamplings_validate_params(
      0, ::gpu::mojom::internal::ImageDecodeAcceleratorSubsampling_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->subsamplings, validation_context,
                                         &subsamplings_validate_params)) {
    return false;
  }

  return true;
}

ImageDecodeAcceleratorSupportedProfile_Data::ImageDecodeAcceleratorSupportedProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuInfo_Data* object = static_cast<const GpuInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 184 }};

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
          object->initialization_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->initialization_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gpu, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->gpu, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->secondary_gpus, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams secondary_gpus_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->secondary_gpus, validation_context,
                                         &secondary_gpus_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pixel_shader_version, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pixel_shader_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pixel_shader_version, validation_context,
                                         &pixel_shader_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->vertex_shader_version, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams vertex_shader_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->vertex_shader_version, validation_context,
                                         &vertex_shader_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_msaa_samples, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams max_msaa_samples_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->max_msaa_samples, validation_context,
                                         &max_msaa_samples_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->machine_model_name, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams machine_model_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->machine_model_name, validation_context,
                                         &machine_model_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->machine_model_version, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams machine_model_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->machine_model_version, validation_context,
                                         &machine_model_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_version, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_version, validation_context,
                                         &gl_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_vendor, 12, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_vendor_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_vendor, validation_context,
                                         &gl_vendor_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_renderer, 13, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_renderer_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_renderer, validation_context,
                                         &gl_renderer_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_extensions, 14, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_extensions, validation_context,
                                         &gl_extensions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_ws_vendor, 15, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_ws_vendor_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_ws_vendor, validation_context,
                                         &gl_ws_vendor_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_ws_version, 16, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_ws_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_ws_version, validation_context,
                                         &gl_ws_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_ws_extensions, 17, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_ws_extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_ws_extensions, validation_context,
                                         &gl_ws_extensions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->direct_rendering_version, 20, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams direct_rendering_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->direct_rendering_version, validation_context,
                                         &direct_rendering_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_decode_accelerator_capabilities, 25, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->video_decode_accelerator_capabilities, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_encode_accelerator_supported_profiles, 26, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_encode_accelerator_supported_profiles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_encode_accelerator_supported_profiles, validation_context,
                                         &video_encode_accelerator_supported_profiles_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->image_decode_accelerator_supported_profiles, 28, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams image_decode_accelerator_supported_profiles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->image_decode_accelerator_supported_profiles, validation_context,
                                         &image_decode_accelerator_supported_profiles_validate_params)) {
    return false;
  }

  return true;
}

GpuInfo_Data::GpuInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#if defined(_MSC_VER)
#pragma warning(pop)
#endif