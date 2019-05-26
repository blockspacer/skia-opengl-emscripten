// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/ssl_config.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/ssl_config.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, SSLVersion value) {
  switch(value) {
    case SSLVersion::kTLS1:
      return os << "SSLVersion::kTLS1";
    case SSLVersion::kTLS11:
      return os << "SSLVersion::kTLS11";
    case SSLVersion::kTLS12:
      return os << "SSLVersion::kTLS12";
    case SSLVersion::kTLS13:
      return os << "SSLVersion::kTLS13";
    default:
      return os << "Unknown SSLVersion value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool SSLConfig_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SSLConfig_Data* object = static_cast<const SSLConfig_Data*>(data);

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


  if (!::network::mojom::internal::SSLVersion_Data
        ::Validate(object->version_min, validation_context))
    return false;


  if (!::network::mojom::internal::SSLVersion_Data
        ::Validate(object->version_max, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->disabled_cipher_suites, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams disabled_cipher_suites_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->disabled_cipher_suites, validation_context,
                                         &disabled_cipher_suites_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->client_cert_pooling_policy, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams client_cert_pooling_policy_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->client_cert_pooling_policy, validation_context,
                                         &client_cert_pooling_policy_validate_params)) {
    return false;
  }

  return true;
}

SSLConfig_Data::SSLConfig_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SSLConfigClient_OnSSLConfigUpdated_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SSLConfigClient_OnSSLConfigUpdated_Params_Data* object = static_cast<const SSLConfigClient_OnSSLConfigUpdated_Params_Data*>(data);

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
          object->ssl_config, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->ssl_config, validation_context))
    return false;

  return true;
}

SSLConfigClient_OnSSLConfigUpdated_Params_Data::SSLConfigClient_OnSSLConfigUpdated_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif