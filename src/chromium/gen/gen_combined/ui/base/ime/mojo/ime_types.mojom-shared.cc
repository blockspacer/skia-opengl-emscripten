// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/base/ime/mojo/ime_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/base/ime/mojo/ime_types.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, TextInputType value) {
  switch(value) {
    case TextInputType::NONE:
      return os << "TextInputType::NONE";
    case TextInputType::TEXT:
      return os << "TextInputType::TEXT";
    case TextInputType::PASSWORD:
      return os << "TextInputType::PASSWORD";
    case TextInputType::SEARCH:
      return os << "TextInputType::SEARCH";
    case TextInputType::EMAIL:
      return os << "TextInputType::EMAIL";
    case TextInputType::NUMBER:
      return os << "TextInputType::NUMBER";
    case TextInputType::TELEPHONE:
      return os << "TextInputType::TELEPHONE";
    case TextInputType::URL:
      return os << "TextInputType::URL";
    case TextInputType::DATE:
      return os << "TextInputType::DATE";
    case TextInputType::DATE_TIME:
      return os << "TextInputType::DATE_TIME";
    case TextInputType::DATE_TIME_LOCAL:
      return os << "TextInputType::DATE_TIME_LOCAL";
    case TextInputType::MONTH:
      return os << "TextInputType::MONTH";
    case TextInputType::TIME:
      return os << "TextInputType::TIME";
    case TextInputType::WEEK:
      return os << "TextInputType::WEEK";
    case TextInputType::TEXT_AREA:
      return os << "TextInputType::TEXT_AREA";
    case TextInputType::CONTENT_EDITABLE:
      return os << "TextInputType::CONTENT_EDITABLE";
    case TextInputType::DATE_TIME_FIELD:
      return os << "TextInputType::{DATE_TIME_FIELD, MAX}";
    default:
      return os << "Unknown TextInputType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextInputMode value) {
  switch(value) {
    case TextInputMode::kDefault:
      return os << "TextInputMode::kDefault";
    case TextInputMode::kNone:
      return os << "TextInputMode::kNone";
    case TextInputMode::kText:
      return os << "TextInputMode::kText";
    case TextInputMode::kTel:
      return os << "TextInputMode::kTel";
    case TextInputMode::kUrl:
      return os << "TextInputMode::kUrl";
    case TextInputMode::kEmail:
      return os << "TextInputMode::kEmail";
    case TextInputMode::kNumeric:
      return os << "TextInputMode::kNumeric";
    case TextInputMode::kDecimal:
      return os << "TextInputMode::kDecimal";
    case TextInputMode::kSearch:
      return os << "TextInputMode::kSearch";
    default:
      return os << "Unknown TextInputMode value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextInputFlag value) {
  switch(value) {
    case TextInputFlag::NONE:
      return os << "TextInputFlag::NONE";
    case TextInputFlag::AUTOCOMPLETE_ON:
      return os << "TextInputFlag::AUTOCOMPLETE_ON";
    case TextInputFlag::AUTOCOMPLETE_OFF:
      return os << "TextInputFlag::AUTOCOMPLETE_OFF";
    case TextInputFlag::AUTOCORRECT_ON:
      return os << "TextInputFlag::AUTOCORRECT_ON";
    case TextInputFlag::AUTOCORRECT_OFF:
      return os << "TextInputFlag::AUTOCORRECT_OFF";
    case TextInputFlag::SPELLCHECK_ON:
      return os << "TextInputFlag::SPELLCHECK_ON";
    case TextInputFlag::SPELLCHECK_OFF:
      return os << "TextInputFlag::SPELLCHECK_OFF";
    case TextInputFlag::AUTOCAPITALIZE_NONE:
      return os << "TextInputFlag::AUTOCAPITALIZE_NONE";
    case TextInputFlag::AUTOCAPITALIZE_CHARACTERS:
      return os << "TextInputFlag::AUTOCAPITALIZE_CHARACTERS";
    case TextInputFlag::AUTOCAPITALIZE_WORDS:
      return os << "TextInputFlag::AUTOCAPITALIZE_WORDS";
    case TextInputFlag::AUTOCAPITALIZE_SENTENCES:
      return os << "TextInputFlag::AUTOCAPITALIZE_SENTENCES";
    case TextInputFlag::ALL:
      return os << "TextInputFlag::ALL";
    default:
      return os << "Unknown TextInputFlag value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ImeTextSpanType value) {
  switch(value) {
    case ImeTextSpanType::kComposition:
      return os << "ImeTextSpanType::kComposition";
    case ImeTextSpanType::kSuggestion:
      return os << "ImeTextSpanType::kSuggestion";
    case ImeTextSpanType::kMisspellingSuggestion:
      return os << "ImeTextSpanType::kMisspellingSuggestion";
    default:
      return os << "Unknown ImeTextSpanType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ImeTextSpanThickness value) {
  switch(value) {
    case ImeTextSpanThickness::kNone:
      return os << "ImeTextSpanThickness::kNone";
    case ImeTextSpanThickness::kThin:
      return os << "ImeTextSpanThickness::kThin";
    case ImeTextSpanThickness::kThick:
      return os << "ImeTextSpanThickness::kThick";
    default:
      return os << "Unknown ImeTextSpanThickness value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FocusReason value) {
  switch(value) {
    case FocusReason::kNone:
      return os << "FocusReason::kNone";
    case FocusReason::kMouse:
      return os << "FocusReason::kMouse";
    case FocusReason::kTouch:
      return os << "FocusReason::kTouch";
    case FocusReason::kPen:
      return os << "FocusReason::kPen";
    case FocusReason::kOther:
      return os << "FocusReason::kOther";
    default:
      return os << "Unknown FocusReason value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool ImeTextSpan_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImeTextSpan_Data* object = static_cast<const ImeTextSpan_Data*>(data);

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


  if (!::ui::mojom::internal::ImeTextSpanType_Data
        ::Validate(object->type, validation_context))
    return false;


  if (!::ui::mojom::internal::ImeTextSpanThickness_Data
        ::Validate(object->thickness, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->suggestions, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams suggestions_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->suggestions, validation_context,
                                         &suggestions_validate_params)) {
    return false;
  }

  return true;
}

ImeTextSpan_Data::ImeTextSpan_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CompositionText_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CompositionText_Data* object = static_cast<const CompositionText_Data*>(data);

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
          object->text, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->text, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ime_text_spans, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams ime_text_spans_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->ime_text_spans, validation_context,
                                         &ime_text_spans_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->selection, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->selection, validation_context))
    return false;

  return true;
}

CompositionText_Data::CompositionText_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif