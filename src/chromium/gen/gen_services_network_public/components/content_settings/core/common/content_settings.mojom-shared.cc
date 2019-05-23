// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/content_settings/core/common/content_settings.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "components/content_settings/core/common/content_settings.mojom-params-data.h"
namespace content_settings {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ContentSetting value) {
  switch(value) {
    case ContentSetting::DEFAULT:
      return os << "ContentSetting::DEFAULT";
    case ContentSetting::ALLOW:
      return os << "ContentSetting::ALLOW";
    case ContentSetting::BLOCK:
      return os << "ContentSetting::BLOCK";
    case ContentSetting::ASK:
      return os << "ContentSetting::ASK";
    case ContentSetting::SESSION_ONLY:
      return os << "ContentSetting::SESSION_ONLY";
    case ContentSetting::DETECT_IMPORTANT_CONTENT:
      return os << "ContentSetting::DETECT_IMPORTANT_CONTENT";
    default:
      return os << "Unknown ContentSetting value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool PatternParts_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PatternParts_Data* object = static_cast<const PatternParts_Data*>(data);

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
          object->scheme, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams scheme_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->scheme, validation_context,
                                         &scheme_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->host, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->host, validation_context,
                                         &host_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->port, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams port_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->port, validation_context,
                                         &port_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->path, validation_context,
                                         &path_validate_params)) {
    return false;
  }

  return true;
}

PatternParts_Data::PatternParts_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentSettingsPattern_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentSettingsPattern_Data* object = static_cast<const ContentSettingsPattern_Data*>(data);

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
          object->parts, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->parts, validation_context))
    return false;

  return true;
}

ContentSettingsPattern_Data::ContentSettingsPattern_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentSettingPatternSource_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentSettingPatternSource_Data* object = static_cast<const ContentSettingPatternSource_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->primary_pattern, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->primary_pattern, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->secondary_pattern, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->secondary_pattern, validation_context))
    return false;

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->setting_value, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->setting_value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->source, validation_context,
                                         &source_validate_params)) {
    return false;
  }

  return true;
}

ContentSettingPatternSource_Data::ContentSettingPatternSource_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RendererContentSettingRules_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RendererContentSettingRules_Data* object = static_cast<const RendererContentSettingRules_Data*>(data);

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
          object->image_rules, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams image_rules_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->image_rules, validation_context,
                                         &image_rules_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->script_rules, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams script_rules_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->script_rules, validation_context,
                                         &script_rules_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->autoplay_rules, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams autoplay_rules_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->autoplay_rules, validation_context,
                                         &autoplay_rules_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->client_hints_rules, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams client_hints_rules_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_hints_rules, validation_context,
                                         &client_hints_rules_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->popup_redirect_rules, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams popup_redirect_rules_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->popup_redirect_rules, validation_context,
                                         &popup_redirect_rules_validate_params)) {
    return false;
  }

  return true;
}

RendererContentSettingRules_Data::RendererContentSettingRules_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content_settings

#if defined(_MSC_VER)
#pragma warning(pop)
#endif