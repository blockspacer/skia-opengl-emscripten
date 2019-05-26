// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/signed_tree_head.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/signed_tree_head.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, SignedTreeHeadVersion value) {
  switch(value) {
    case SignedTreeHeadVersion::V1:
      return os << "SignedTreeHeadVersion::V1";
    default:
      return os << "Unknown SignedTreeHeadVersion value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool SignedTreeHead_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SignedTreeHead_Data* object = static_cast<const SignedTreeHead_Data*>(data);

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


  if (!::network::mojom::internal::SignedTreeHeadVersion_Data
        ::Validate(object->version, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->timestamp, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sha256_root_hash, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sha256_root_hash_validate_params(
      32, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sha256_root_hash, validation_context,
                                         &sha256_root_hash_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signature, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->signature, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->log_id, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams log_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->log_id, validation_context,
                                         &log_id_validate_params)) {
    return false;
  }

  return true;
}

SignedTreeHead_Data::SignedTreeHead_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif