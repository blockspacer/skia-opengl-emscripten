// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "gpu/ipc/common/gpu_feature_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "gpu/ipc/common/gpu_feature_info.mojom-params-data.h"
namespace gpu {
namespace mojom {

std::ostream& operator<<(std::ostream& os, GpuFeatureStatus value) {
  switch(value) {
    case GpuFeatureStatus::Enabled:
      return os << "GpuFeatureStatus::Enabled";
    case GpuFeatureStatus::Blacklisted:
      return os << "GpuFeatureStatus::Blacklisted";
    case GpuFeatureStatus::Disabled:
      return os << "GpuFeatureStatus::Disabled";
    case GpuFeatureStatus::Software:
      return os << "GpuFeatureStatus::Software";
    case GpuFeatureStatus::Undefined:
      return os << "GpuFeatureStatus::Undefined";
    case GpuFeatureStatus::Max:
      return os << "GpuFeatureStatus::Max";
    default:
      return os << "Unknown GpuFeatureStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AntialiasingMode value) {
  switch(value) {
    case AntialiasingMode::kUnspecified:
      return os << "AntialiasingMode::kUnspecified";
    case AntialiasingMode::kNone:
      return os << "AntialiasingMode::kNone";
    case AntialiasingMode::kMSAAImplicitResolve:
      return os << "AntialiasingMode::kMSAAImplicitResolve";
    case AntialiasingMode::kMSAAExplicitResolve:
      return os << "AntialiasingMode::kMSAAExplicitResolve";
    case AntialiasingMode::kScreenSpaceAntialiasing:
      return os << "AntialiasingMode::kScreenSpaceAntialiasing";
    default:
      return os << "Unknown AntialiasingMode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool WebglPreferences_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebglPreferences_Data* object = static_cast<const WebglPreferences_Data*>(data);

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


  if (!::gpu::mojom::internal::AntialiasingMode_Data
        ::Validate(object->anti_aliasing_mode, validation_context))
    return false;

  return true;
}

WebglPreferences_Data::WebglPreferences_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuFeatureInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuFeatureInfo_Data* object = static_cast<const GpuFeatureInfo_Data*>(data);

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
          object->status_values, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams status_values_validate_params(
      0, ::gpu::mojom::internal::GpuFeatureStatus_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->status_values, validation_context,
                                         &status_values_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->enabled_gpu_driver_bug_workarounds, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams enabled_gpu_driver_bug_workarounds_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->enabled_gpu_driver_bug_workarounds, validation_context,
                                         &enabled_gpu_driver_bug_workarounds_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->disabled_extensions, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams disabled_extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->disabled_extensions, validation_context,
                                         &disabled_extensions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->disabled_webgl_extensions, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams disabled_webgl_extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->disabled_webgl_extensions, validation_context,
                                         &disabled_webgl_extensions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->webgl_preferences, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->webgl_preferences, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->applied_gpu_blacklist_entries, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams applied_gpu_blacklist_entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->applied_gpu_blacklist_entries, validation_context,
                                         &applied_gpu_blacklist_entries_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->applied_gpu_driver_bug_list_entries, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams applied_gpu_driver_bug_list_entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->applied_gpu_driver_bug_list_entries, validation_context,
                                         &applied_gpu_driver_bug_list_entries_validate_params)) {
    return false;
  }

  return true;
}

GpuFeatureInfo_Data::GpuFeatureInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#if defined(_MSC_VER)
#pragma warning(pop)
#endif