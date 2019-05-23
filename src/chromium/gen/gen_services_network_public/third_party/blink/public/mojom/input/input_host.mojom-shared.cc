// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/input/input_host.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/input/input_host.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool SpellCheckSuggestion_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SpellCheckSuggestion_Data* object = static_cast<const SpellCheckSuggestion_Data*>(data);

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
          object->suggestion, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams suggestion_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->suggestion, validation_context,
                                         &suggestion_validate_params)) {
    return false;
  }

  return true;
}

SpellCheckSuggestion_Data::SpellCheckSuggestion_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TextSuggestion_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TextSuggestion_Data* object = static_cast<const TextSuggestion_Data*>(data);

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
          object->prefix, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams prefix_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->prefix, validation_context,
                                         &prefix_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->suggestion, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams suggestion_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->suggestion, validation_context,
                                         &suggestion_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->suffix, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams suffix_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->suffix, validation_context,
                                         &suffix_validate_params)) {
    return false;
  }

  return true;
}

TextSuggestion_Data::TextSuggestion_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TextSuggestionHost_StartSuggestionMenuTimer_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TextSuggestionHost_StartSuggestionMenuTimer_Params_Data* object = static_cast<const TextSuggestionHost_StartSuggestionMenuTimer_Params_Data*>(data);

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

TextSuggestionHost_StartSuggestionMenuTimer_Params_Data::TextSuggestionHost_StartSuggestionMenuTimer_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data* object = static_cast<const TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data*>(data);

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
          object->marked_text, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams marked_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->marked_text, validation_context,
                                         &marked_text_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->suggestions, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams suggestions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->suggestions, validation_context,
                                         &suggestions_validate_params)) {
    return false;
  }

  return true;
}

TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data::TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TextSuggestionHost_ShowTextSuggestionMenu_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TextSuggestionHost_ShowTextSuggestionMenu_Params_Data* object = static_cast<const TextSuggestionHost_ShowTextSuggestionMenu_Params_Data*>(data);

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
          object->marked_text, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams marked_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->marked_text, validation_context,
                                         &marked_text_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->suggestions, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams suggestions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->suggestions, validation_context,
                                         &suggestions_validate_params)) {
    return false;
  }

  return true;
}

TextSuggestionHost_ShowTextSuggestionMenu_Params_Data::TextSuggestionHost_ShowTextSuggestionMenu_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif