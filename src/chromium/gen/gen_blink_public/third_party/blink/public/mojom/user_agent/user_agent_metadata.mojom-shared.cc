// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-params-data.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool UserAgentMetadata_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UserAgentMetadata_Data* object = static_cast<const UserAgentMetadata_Data*>(data);

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
          object->brand, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams brand_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->brand, validation_context,
                                         &brand_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->full_version, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams full_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->full_version, validation_context,
                                         &full_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->major_version, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams major_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->major_version, validation_context,
                                         &major_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->platform, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams platform_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->platform, validation_context,
                                         &platform_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->architecture, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams architecture_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->architecture, validation_context,
                                         &architecture_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->model, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams model_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->model, validation_context,
                                         &model_validate_params)) {
    return false;
  }

  return true;
}

UserAgentMetadata_Data::UserAgentMetadata_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif