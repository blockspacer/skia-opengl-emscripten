// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/renderer_preferences.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool RendererPreferences_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RendererPreferences_Data* object = static_cast<const RendererPreferences_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 96 }};

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


  if (!::gfx::mojom::internal::Hinting_Data
        ::Validate(object->hinting, validation_context))
    return false;


  if (!::gfx::mojom::internal::SubpixelRendering_Data
        ::Validate(object->subpixel_rendering, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->caret_blink_interval, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->webrtc_ip_handling_policy, 20, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams webrtc_ip_handling_policy_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->webrtc_ip_handling_policy, validation_context,
                                         &webrtc_ip_handling_policy_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->user_agent_override, 23, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams user_agent_override_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->user_agent_override, validation_context,
                                         &user_agent_override_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->accept_languages, 24, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams accept_languages_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->accept_languages, validation_context,
                                         &accept_languages_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->network_contry_iso, 27, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams network_contry_iso_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->network_contry_iso, validation_context,
                                         &network_contry_iso_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->system_font_family_name, 28, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams system_font_family_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->system_font_family_name, validation_context,
                                         &system_font_family_name_validate_params)) {
    return false;
  }

  return true;
}

RendererPreferences_Data::RendererPreferences_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif