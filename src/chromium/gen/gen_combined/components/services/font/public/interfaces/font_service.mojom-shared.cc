// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/services/font/public/interfaces/font_service.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "components/services/font/public/interfaces/font_service.mojom-params-data.h"
namespace font_service {
namespace mojom {

std::ostream& operator<<(std::ostream& os, TypefaceSlant value) {
  switch(value) {
    case TypefaceSlant::ROMAN:
      return os << "TypefaceSlant::ROMAN";
    case TypefaceSlant::ITALIC:
      return os << "TypefaceSlant::ITALIC";
    case TypefaceSlant::OBLIQUE:
      return os << "TypefaceSlant::OBLIQUE";
    default:
      return os << "Unknown TypefaceSlant value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, RenderStyleSwitch value) {
  switch(value) {
    case RenderStyleSwitch::OFF:
      return os << "RenderStyleSwitch::OFF";
    case RenderStyleSwitch::ON:
      return os << "RenderStyleSwitch::ON";
    case RenderStyleSwitch::NO_PREFERENCE:
      return os << "RenderStyleSwitch::NO_PREFERENCE";
    default:
      return os << "Unknown RenderStyleSwitch value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool TypefaceStyle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TypefaceStyle_Data* object = static_cast<const TypefaceStyle_Data*>(data);

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


  if (!::font_service::mojom::internal::TypefaceSlant_Data
        ::Validate(object->slant, validation_context))
    return false;

  return true;
}

TypefaceStyle_Data::TypefaceStyle_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontIdentity_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontIdentity_Data* object = static_cast<const FontIdentity_Data*>(data);

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
          object->str_representation, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams str_representation_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->str_representation, validation_context,
                                         &str_representation_validate_params)) {
    return false;
  }

  return true;
}

FontIdentity_Data::FontIdentity_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontRenderStyle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontRenderStyle_Data* object = static_cast<const FontRenderStyle_Data*>(data);

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


  if (!::font_service::mojom::internal::RenderStyleSwitch_Data
        ::Validate(object->use_bitmaps, validation_context))
    return false;


  if (!::font_service::mojom::internal::RenderStyleSwitch_Data
        ::Validate(object->use_autohint, validation_context))
    return false;


  if (!::font_service::mojom::internal::RenderStyleSwitch_Data
        ::Validate(object->use_hinting, validation_context))
    return false;


  if (!::font_service::mojom::internal::RenderStyleSwitch_Data
        ::Validate(object->use_antialias, validation_context))
    return false;


  if (!::font_service::mojom::internal::RenderStyleSwitch_Data
        ::Validate(object->use_subpixel_rendering, validation_context))
    return false;


  if (!::font_service::mojom::internal::RenderStyleSwitch_Data
        ::Validate(object->use_subpixel_positioning, validation_context))
    return false;

  return true;
}

FontRenderStyle_Data::FontRenderStyle_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_MatchFamilyName_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_MatchFamilyName_Params_Data* object = static_cast<const FontService_MatchFamilyName_Params_Data*>(data);

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
          object->family_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams family_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->family_name, validation_context,
                                         &family_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->style, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->style, validation_context))
    return false;

  return true;
}

FontService_MatchFamilyName_Params_Data::FontService_MatchFamilyName_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_MatchFamilyName_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_MatchFamilyName_ResponseParams_Data* object = static_cast<const FontService_MatchFamilyName_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->identity, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->family_name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams family_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->family_name, validation_context,
                                         &family_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->style, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->style, validation_context))
    return false;

  return true;
}

FontService_MatchFamilyName_ResponseParams_Data::FontService_MatchFamilyName_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_OpenStream_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_OpenStream_Params_Data* object = static_cast<const FontService_OpenStream_Params_Data*>(data);

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

  return true;
}

FontService_OpenStream_Params_Data::FontService_OpenStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_OpenStream_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_OpenStream_ResponseParams_Data* object = static_cast<const FontService_OpenStream_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->font_handle, validation_context))
    return false;

  return true;
}

FontService_OpenStream_ResponseParams_Data::FontService_OpenStream_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_FallbackFontForCharacter_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_FallbackFontForCharacter_Params_Data* object = static_cast<const FontService_FallbackFontForCharacter_Params_Data*>(data);

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
          object->locale, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams locale_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->locale, validation_context,
                                         &locale_validate_params)) {
    return false;
  }

  return true;
}

FontService_FallbackFontForCharacter_Params_Data::FontService_FallbackFontForCharacter_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_FallbackFontForCharacter_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_FallbackFontForCharacter_ResponseParams_Data* object = static_cast<const FontService_FallbackFontForCharacter_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->identity, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->family_name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams family_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->family_name, validation_context,
                                         &family_name_validate_params)) {
    return false;
  }

  return true;
}

FontService_FallbackFontForCharacter_ResponseParams_Data::FontService_FallbackFontForCharacter_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_FontRenderStyleForStrike_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_FontRenderStyleForStrike_Params_Data* object = static_cast<const FontService_FontRenderStyleForStrike_Params_Data*>(data);

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
          object->family, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams family_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->family, validation_context,
                                         &family_validate_params)) {
    return false;
  }

  return true;
}

FontService_FontRenderStyleForStrike_Params_Data::FontService_FontRenderStyleForStrike_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_FontRenderStyleForStrike_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_FontRenderStyleForStrike_ResponseParams_Data* object = static_cast<const FontService_FontRenderStyleForStrike_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->font_render_style, validation_context))
    return false;

  return true;
}

FontService_FontRenderStyleForStrike_ResponseParams_Data::FontService_FontRenderStyleForStrike_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data* object = static_cast<const FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data*>(data);

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
          object->postscript_name_or_full_font_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams postscript_name_or_full_font_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->postscript_name_or_full_font_name, validation_context,
                                         &postscript_name_or_full_font_name_validate_params)) {
    return false;
  }

  return true;
}

FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data* object = static_cast<const FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->identity, validation_context))
    return false;

  return true;
}

FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_MatchFontWithFallback_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_MatchFontWithFallback_Params_Data* object = static_cast<const FontService_MatchFontWithFallback_Params_Data*>(data);

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
          object->family, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams family_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->family, validation_context,
                                         &family_validate_params)) {
    return false;
  }

  return true;
}

FontService_MatchFontWithFallback_Params_Data::FontService_MatchFontWithFallback_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FontService_MatchFontWithFallback_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FontService_MatchFontWithFallback_ResponseParams_Data* object = static_cast<const FontService_MatchFontWithFallback_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->font_file_handle, validation_context))
    return false;

  return true;
}

FontService_MatchFontWithFallback_ResponseParams_Data::FontService_MatchFontWithFallback_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace font_service

#if defined(_MSC_VER)
#pragma warning(pop)
#endif