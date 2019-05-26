// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/manifest/manifest.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ManifestImageResource_Purpose value) {
  switch(value) {
    case ManifestImageResource_Purpose::ANY:
      return os << "ManifestImageResource_Purpose::ANY";
    case ManifestImageResource_Purpose::BADGE:
      return os << "ManifestImageResource_Purpose::BADGE";
    case ManifestImageResource_Purpose::MASKABLE:
      return os << "ManifestImageResource_Purpose::MASKABLE";
    default:
      return os << "Unknown ManifestImageResource_Purpose value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ManifestShareTarget_Method value) {
  switch(value) {
    case ManifestShareTarget_Method::kGet:
      return os << "ManifestShareTarget_Method::kGet";
    case ManifestShareTarget_Method::kPost:
      return os << "ManifestShareTarget_Method::kPost";
    default:
      return os << "Unknown ManifestShareTarget_Method value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ManifestShareTarget_Enctype value) {
  switch(value) {
    case ManifestShareTarget_Enctype::kApplication:
      return os << "ManifestShareTarget_Enctype::kApplication";
    case ManifestShareTarget_Enctype::kMultipart:
      return os << "ManifestShareTarget_Enctype::kMultipart";
    default:
      return os << "Unknown ManifestShareTarget_Enctype value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Manifest_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Manifest_Data* object = static_cast<const Manifest_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 112 }};

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

  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->short_name, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->start_url, validation_context))
    return false;


  if (!::blink::mojom::internal::DisplayMode_Data
        ::Validate(object->display, validation_context))
    return false;


  if (!::device::mojom::internal::ScreenOrientationLockType_Data
        ::Validate(object->orientation, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams icons_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->icons, validation_context,
                                         &icons_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->share_target, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->file_handler, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams related_applications_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->related_applications, validation_context,
                                         &related_applications_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->splash_screen_url, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->gcm_sender_id, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->scope, validation_context))
    return false;

  return true;
}

Manifest_Data::Manifest_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestImageResource_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestImageResource_Data* object = static_cast<const ManifestImageResource_Data*>(data);

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
          object->src, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->src, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sizes, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sizes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sizes, validation_context,
                                         &sizes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->purpose, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams purpose_validate_params(
      0, ::blink::mojom::internal::ManifestImageResource_Purpose_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->purpose, validation_context,
                                         &purpose_validate_params)) {
    return false;
  }

  return true;
}

ManifestImageResource_Data::ManifestImageResource_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestFileFilter_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestFileFilter_Data* object = static_cast<const ManifestFileFilter_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->name, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->accept, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accept_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->accept, validation_context,
                                         &accept_validate_params)) {
    return false;
  }

  return true;
}

ManifestFileFilter_Data::ManifestFileFilter_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestRelatedApplication_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestRelatedApplication_Data* object = static_cast<const ManifestRelatedApplication_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->platform, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  return true;
}

ManifestRelatedApplication_Data::ManifestRelatedApplication_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestShareTargetParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestShareTargetParams_Data* object = static_cast<const ManifestShareTargetParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->title, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->text, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->files, validation_context,
                                         &files_validate_params)) {
    return false;
  }

  return true;
}

ManifestShareTargetParams_Data::ManifestShareTargetParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestShareTarget_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestShareTarget_Data* object = static_cast<const ManifestShareTarget_Data*>(data);

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
          object->action, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->action, validation_context))
    return false;


  if (!::blink::mojom::internal::ManifestShareTarget_Method_Data
        ::Validate(object->method, validation_context))
    return false;


  if (!::blink::mojom::internal::ManifestShareTarget_Enctype_Data
        ::Validate(object->enctype, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->params, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, validation_context))
    return false;

  return true;
}

ManifestShareTarget_Data::ManifestShareTarget_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestFileHandler_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestFileHandler_Data* object = static_cast<const ManifestFileHandler_Data*>(data);

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
          object->action, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->action, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->files, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->files, validation_context,
                                         &files_validate_params)) {
    return false;
  }

  return true;
}

ManifestFileHandler_Data::ManifestFileHandler_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestDebugInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestDebugInfo_Data* object = static_cast<const ManifestDebugInfo_Data*>(data);

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
          object->errors, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams errors_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->errors, validation_context,
                                         &errors_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->raw_manifest, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams raw_manifest_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->raw_manifest, validation_context,
                                         &raw_manifest_validate_params)) {
    return false;
  }

  return true;
}

ManifestDebugInfo_Data::ManifestDebugInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ManifestError_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ManifestError_Data* object = static_cast<const ManifestError_Data*>(data);

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
          object->message, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

ManifestError_Data::ManifestError_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif