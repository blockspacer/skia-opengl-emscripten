// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, FileChooserParams_Mode value) {
  switch(value) {
    case FileChooserParams_Mode::kOpen:
      return os << "FileChooserParams_Mode::kOpen";
    case FileChooserParams_Mode::kOpenMultiple:
      return os << "FileChooserParams_Mode::kOpenMultiple";
    case FileChooserParams_Mode::kUploadFolder:
      return os << "FileChooserParams_Mode::kUploadFolder";
    case FileChooserParams_Mode::kSave:
      return os << "FileChooserParams_Mode::kSave";
    default:
      return os << "Unknown FileChooserParams_Mode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool FileChooserFileInfo_Data::Validate(
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

  const FileChooserFileInfo_Data* object = static_cast<const FileChooserFileInfo_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case FileChooserFileInfo_Tag::NATIVE_FILE: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_native_file, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_native_file, validation_context))
        return false;
      return true;
    }
    case FileChooserFileInfo_Tag::FILE_SYSTEM: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_file_system, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_file_system, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in FileChooserFileInfo");
      return false;
    }
  }
}


// static
bool FileChooserParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileChooserParams_Data* object = static_cast<const FileChooserParams_Data*>(data);

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


  if (!::blink::mojom::internal::FileChooserParams_Mode_Data
        ::Validate(object->mode, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->title, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->default_file_name, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->default_file_name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->selected_files, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams selected_files_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->selected_files, validation_context,
                                         &selected_files_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->accept_types, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accept_types_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->accept_types, validation_context,
                                         &accept_types_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->requestor, 8, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->requestor, validation_context))
    return false;

  return true;
}

FileChooserParams_Data::FileChooserParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NativeFileInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NativeFileInfo_Data* object = static_cast<const NativeFileInfo_Data*>(data);

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
          object->file_path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->file_path, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->display_name, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->display_name, validation_context))
    return false;

  return true;
}

NativeFileInfo_Data::NativeFileInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileSystemFileInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileSystemFileInfo_Data* object = static_cast<const FileSystemFileInfo_Data*>(data);

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
          object->url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modification_time, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->modification_time, validation_context))
    return false;

  return true;
}

FileSystemFileInfo_Data::FileSystemFileInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileChooserResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileChooserResult_Data* object = static_cast<const FileChooserResult_Data*>(data);

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
          object->files, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->files, validation_context,
                                         &files_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->base_directory, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->base_directory, validation_context))
    return false;

  return true;
}

FileChooserResult_Data::FileChooserResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileChooser_OpenFileChooser_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileChooser_OpenFileChooser_Params_Data* object = static_cast<const FileChooser_OpenFileChooser_Params_Data*>(data);

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
          object->params, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

FileChooser_OpenFileChooser_Params_Data::FileChooser_OpenFileChooser_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileChooser_OpenFileChooser_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileChooser_OpenFileChooser_ResponseParams_Data* object = static_cast<const FileChooser_OpenFileChooser_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

FileChooser_OpenFileChooser_ResponseParams_Data::FileChooser_OpenFileChooser_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileChooser_EnumerateChosenDirectory_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileChooser_EnumerateChosenDirectory_Params_Data* object = static_cast<const FileChooser_EnumerateChosenDirectory_Params_Data*>(data);

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
          object->directory_path, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->directory_path, validation_context))
    return false;

  return true;
}

FileChooser_EnumerateChosenDirectory_Params_Data::FileChooser_EnumerateChosenDirectory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FileChooser_EnumerateChosenDirectory_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileChooser_EnumerateChosenDirectory_ResponseParams_Data* object = static_cast<const FileChooser_EnumerateChosenDirectory_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

FileChooser_EnumerateChosenDirectory_ResponseParams_Data::FileChooser_EnumerateChosenDirectory_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif