// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool PluginMimeType_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PluginMimeType_Data* object = static_cast<const PluginMimeType_Data*>(data);

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
          object->description, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->description, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->file_extensions, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams file_extensions_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->file_extensions, validation_context,
                                         &file_extensions_validate_params)) {
    return false;
  }

  return true;
}

PluginMimeType_Data::PluginMimeType_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PluginInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PluginInfo_Data* object = static_cast<const PluginInfo_Data*>(data);

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
          object->name, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->description, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->filename, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filename, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mime_types, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mime_types_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mime_types, validation_context,
                                         &mime_types_validate_params)) {
    return false;
  }

  return true;
}

PluginInfo_Data::PluginInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PluginRegistry_GetPlugins_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PluginRegistry_GetPlugins_Params_Data* object = static_cast<const PluginRegistry_GetPlugins_Params_Data*>(data);

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
          object->main_frame_origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->main_frame_origin, validation_context))
    return false;

  return true;
}

PluginRegistry_GetPlugins_Params_Data::PluginRegistry_GetPlugins_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PluginRegistry_GetPlugins_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PluginRegistry_GetPlugins_ResponseParams_Data* object = static_cast<const PluginRegistry_GetPlugins_ResponseParams_Data*>(data);

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
          object->plugins, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams plugins_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->plugins, validation_context,
                                         &plugins_validate_params)) {
    return false;
  }

  return true;
}

PluginRegistry_GetPlugins_ResponseParams_Data::PluginRegistry_GetPlugins_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif