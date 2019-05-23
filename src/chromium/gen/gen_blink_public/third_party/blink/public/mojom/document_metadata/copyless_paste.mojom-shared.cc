// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-params-data.h"
namespace blink {
namespace mojom {
namespace document_metadata {

namespace internal {
// static
bool Values_Data::Validate(
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

  const Values_Data* object = static_cast<const Values_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case Values_Tag::BOOL_VALUES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_bool_values, 1, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams bool_values_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_bool_values, validation_context,
                                             &bool_values_validate_params)) {
        return false;
      }
      return true;
    }
    case Values_Tag::LONG_VALUES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_long_values, 2, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams long_values_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_long_values, validation_context,
                                             &long_values_validate_params)) {
        return false;
      }
      return true;
    }
    case Values_Tag::STRING_VALUES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_string_values, 3, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams string_values_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      if (!mojo::internal::ValidateContainer(object->data.f_string_values, validation_context,
                                             &string_values_validate_params)) {
        return false;
      }
      return true;
    }
    case Values_Tag::ENTITY_VALUES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_entity_values, 4, validation_context)) {
        return false;
      }
      const mojo::internal::ContainerValidateParams entity_values_validate_params(
          0, false, nullptr);
      if (!mojo::internal::ValidateContainer(object->data.f_entity_values, validation_context,
                                             &entity_values_validate_params)) {
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in Values");
      return false;
    }
  }
}


// static
bool Property_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Property_Data* object = static_cast<const Property_Data*>(data);

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
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->values, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->values, validation_context))
    return false;

  return true;
}

Property_Data::Property_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Entity_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Entity_Data* object = static_cast<const Entity_Data*>(data);

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
          object->type, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->type, validation_context,
                                         &type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->properties, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams properties_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->properties, validation_context,
                                         &properties_validate_params)) {
    return false;
  }

  return true;
}

Entity_Data::Entity_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebPage_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebPage_Data* object = static_cast<const WebPage_Data*>(data);

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
          object->title, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->title, validation_context,
                                         &title_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->entities, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams entities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->entities, validation_context,
                                         &entities_validate_params)) {
    return false;
  }

  return true;
}

WebPage_Data::WebPage_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CopylessPaste_GetEntities_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CopylessPaste_GetEntities_Params_Data* object = static_cast<const CopylessPaste_GetEntities_Params_Data*>(data);

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

CopylessPaste_GetEntities_Params_Data::CopylessPaste_GetEntities_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CopylessPaste_GetEntities_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CopylessPaste_GetEntities_ResponseParams_Data* object = static_cast<const CopylessPaste_GetEntities_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->page, validation_context))
    return false;

  return true;
}

CopylessPaste_GetEntities_ResponseParams_Data::CopylessPaste_GetEntities_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif