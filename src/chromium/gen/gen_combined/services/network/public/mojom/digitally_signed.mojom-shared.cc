// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/digitally_signed.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/digitally_signed.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, HashAlgorithm value) {
  switch(value) {
    case HashAlgorithm::HASH_ALGO_NONE:
      return os << "HashAlgorithm::HASH_ALGO_NONE";
    case HashAlgorithm::HASH_ALGO_MD5:
      return os << "HashAlgorithm::HASH_ALGO_MD5";
    case HashAlgorithm::HASH_ALGO_SHA1:
      return os << "HashAlgorithm::HASH_ALGO_SHA1";
    case HashAlgorithm::HASH_ALGO_SHA224:
      return os << "HashAlgorithm::HASH_ALGO_SHA224";
    case HashAlgorithm::HASH_ALGO_SHA256:
      return os << "HashAlgorithm::HASH_ALGO_SHA256";
    case HashAlgorithm::HASH_ALGO_SHA384:
      return os << "HashAlgorithm::HASH_ALGO_SHA384";
    case HashAlgorithm::HASH_ALGO_SHA512:
      return os << "HashAlgorithm::HASH_ALGO_SHA512";
    default:
      return os << "Unknown HashAlgorithm value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, SignatureAlgorithm value) {
  switch(value) {
    case SignatureAlgorithm::SIG_ALGO_ANONYMOUS:
      return os << "SignatureAlgorithm::SIG_ALGO_ANONYMOUS";
    case SignatureAlgorithm::SIG_ALGO_RSA:
      return os << "SignatureAlgorithm::SIG_ALGO_RSA";
    case SignatureAlgorithm::SIG_ALGO_DSA:
      return os << "SignatureAlgorithm::SIG_ALGO_DSA";
    case SignatureAlgorithm::SIG_ALGO_ECDSA:
      return os << "SignatureAlgorithm::SIG_ALGO_ECDSA";
    default:
      return os << "Unknown SignatureAlgorithm value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool DigitallySigned_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DigitallySigned_Data* object = static_cast<const DigitallySigned_Data*>(data);

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


  if (!::network::mojom::internal::HashAlgorithm_Data
        ::Validate(object->hash_algorithm, validation_context))
    return false;


  if (!::network::mojom::internal::SignatureAlgorithm_Data
        ::Validate(object->signature_algorithm, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signature, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams signature_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->signature, validation_context,
                                         &signature_validate_params)) {
    return false;
  }

  return true;
}

DigitallySigned_Data::DigitallySigned_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif