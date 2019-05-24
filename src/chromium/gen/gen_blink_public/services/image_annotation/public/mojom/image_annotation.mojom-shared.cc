// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/image_annotation/public/mojom/image_annotation.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/image_annotation/public/mojom/image_annotation.mojom-params-data.h"
namespace image_annotation {
namespace mojom {

std::ostream& operator<<(std::ostream& os, AnnotateImageError value) {
  switch(value) {
    case AnnotateImageError::kCanceled:
      return os << "AnnotateImageError::kCanceled";
    case AnnotateImageError::kFailure:
      return os << "AnnotateImageError::kFailure";
    case AnnotateImageError::kAdult:
      return os << "AnnotateImageError::kAdult";
    default:
      return os << "Unknown AnnotateImageError value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AnnotationType value) {
  switch(value) {
    case AnnotationType::kOcr:
      return os << "AnnotationType::kOcr";
    case AnnotationType::kLabel:
      return os << "AnnotationType::kLabel";
    case AnnotationType::kCaption:
      return os << "AnnotationType::kCaption";
    default:
      return os << "Unknown AnnotationType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool AnnotateImageResult_Data::Validate(
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

  const AnnotateImageResult_Data* object = static_cast<const AnnotateImageResult_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case AnnotateImageResult_Tag::ERROR_CODE: {


      if (!::image_annotation::mojom::internal::AnnotateImageError_Data
            ::Validate(object->data.f_error_code, validation_context))
        return false;
      return true;
    }
    case AnnotateImageResult_Tag::ANNOTATIONS: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_annotations, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams annotations_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_annotations, validation_context,
                                             &annotations_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in AnnotateImageResult");
      return false;
    }
  }
}


// static
bool Annotation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Annotation_Data* object = static_cast<const Annotation_Data*>(data);

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


  if (!::image_annotation::mojom::internal::AnnotationType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->text, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->text, validation_context,
                                         &text_validate_params)) {
    return false;
  }

  return true;
}

Annotation_Data::Annotation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageProcessor_GetJpgImageData_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageProcessor_GetJpgImageData_Params_Data* object = static_cast<const ImageProcessor_GetJpgImageData_Params_Data*>(data);

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

ImageProcessor_GetJpgImageData_Params_Data::ImageProcessor_GetJpgImageData_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageProcessor_GetJpgImageData_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageProcessor_GetJpgImageData_ResponseParams_Data* object = static_cast<const ImageProcessor_GetJpgImageData_ResponseParams_Data*>(data);

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
          object->bytes, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams bytes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->bytes, validation_context,
                                         &bytes_validate_params)) {
    return false;
  }

  return true;
}

ImageProcessor_GetJpgImageData_ResponseParams_Data::ImageProcessor_GetJpgImageData_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Annotator_AnnotateImage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Annotator_AnnotateImage_Params_Data* object = static_cast<const Annotator_AnnotateImage_Params_Data*>(data);

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
          object->source_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source_id, validation_context,
                                         &source_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description_language_tag, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams description_language_tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->description_language_tag, validation_context,
                                         &description_language_tag_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->image_processor, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->image_processor,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Annotator_AnnotateImage_Params_Data::Annotator_AnnotateImage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Annotator_AnnotateImage_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Annotator_AnnotateImage_ResponseParams_Data* object = static_cast<const Annotator_AnnotateImage_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

Annotator_AnnotateImage_ResponseParams_Data::Annotator_AnnotateImage_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace image_annotation

#if defined(_MSC_VER)
#pragma warning(pop)
#endif