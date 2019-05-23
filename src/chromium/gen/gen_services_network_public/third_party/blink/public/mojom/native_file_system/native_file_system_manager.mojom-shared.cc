// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ChooseFileSystemEntryType value) {
  switch(value) {
    case ChooseFileSystemEntryType::kOpenFile:
      return os << "ChooseFileSystemEntryType::kOpenFile";
    case ChooseFileSystemEntryType::kOpenMultipleFiles:
      return os << "ChooseFileSystemEntryType::kOpenMultipleFiles";
    case ChooseFileSystemEntryType::kSaveFile:
      return os << "ChooseFileSystemEntryType::kSaveFile";
    case ChooseFileSystemEntryType::kOpenDirectory:
      return os << "ChooseFileSystemEntryType::kOpenDirectory";
    default:
      return os << "Unknown ChooseFileSystemEntryType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ChooseFileSystemEntryAcceptsOption_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ChooseFileSystemEntryAcceptsOption_Data* object = static_cast<const ChooseFileSystemEntryAcceptsOption_Data*>(data);

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
          object->description, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->description, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->mime_types, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mime_types_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->mime_types, validation_context,
                                         &mime_types_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->extensions, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams extensions_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->extensions, validation_context,
                                         &extensions_validate_params)) {
    return false;
  }

  return true;
}

ChooseFileSystemEntryAcceptsOption_Data::ChooseFileSystemEntryAcceptsOption_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativeFileSystemManager_GetSandboxedFileSystem_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativeFileSystemManager_GetSandboxedFileSystem_Params_Data* object = static_cast<const NativeFileSystemManager_GetSandboxedFileSystem_Params_Data*>(data);

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

NativeFileSystemManager_GetSandboxedFileSystem_Params_Data::NativeFileSystemManager_GetSandboxedFileSystem_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data* object = static_cast<const NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->directory,
                                                 validation_context)) {
    return false;
  }

  return true;
}

NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data::NativeFileSystemManager_GetSandboxedFileSystem_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativeFileSystemManager_ChooseEntries_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativeFileSystemManager_ChooseEntries_Params_Data* object = static_cast<const NativeFileSystemManager_ChooseEntries_Params_Data*>(data);

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


  if (!::blink::mojom::internal::ChooseFileSystemEntryType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->accepts, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accepts_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->accepts, validation_context,
                                         &accepts_validate_params)) {
    return false;
  }

  return true;
}

NativeFileSystemManager_ChooseEntries_Params_Data::NativeFileSystemManager_ChooseEntries_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativeFileSystemManager_ChooseEntries_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativeFileSystemManager_ChooseEntries_ResponseParams_Data* object = static_cast<const NativeFileSystemManager_ChooseEntries_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->entries, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->entries, validation_context,
                                         &entries_validate_params)) {
    return false;
  }

  return true;
}

NativeFileSystemManager_ChooseEntries_ResponseParams_Data::NativeFileSystemManager_ChooseEntries_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif