// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, AuthenticatorStatus value) {
  switch(value) {
    case AuthenticatorStatus::SUCCESS:
      return os << "AuthenticatorStatus::SUCCESS";
    case AuthenticatorStatus::PENDING_REQUEST:
      return os << "AuthenticatorStatus::PENDING_REQUEST";
    case AuthenticatorStatus::NOT_ALLOWED_ERROR:
      return os << "AuthenticatorStatus::NOT_ALLOWED_ERROR";
    case AuthenticatorStatus::INVALID_DOMAIN:
      return os << "AuthenticatorStatus::INVALID_DOMAIN";
    case AuthenticatorStatus::CREDENTIAL_EXCLUDED:
      return os << "AuthenticatorStatus::CREDENTIAL_EXCLUDED";
    case AuthenticatorStatus::CREDENTIAL_NOT_RECOGNIZED:
      return os << "AuthenticatorStatus::CREDENTIAL_NOT_RECOGNIZED";
    case AuthenticatorStatus::NOT_IMPLEMENTED:
      return os << "AuthenticatorStatus::NOT_IMPLEMENTED";
    case AuthenticatorStatus::NOT_FOCUSED:
      return os << "AuthenticatorStatus::NOT_FOCUSED";
    case AuthenticatorStatus::RESIDENT_CREDENTIALS_UNSUPPORTED:
      return os << "AuthenticatorStatus::RESIDENT_CREDENTIALS_UNSUPPORTED";
    case AuthenticatorStatus::USER_VERIFICATION_UNSUPPORTED:
      return os << "AuthenticatorStatus::USER_VERIFICATION_UNSUPPORTED";
    case AuthenticatorStatus::ALGORITHM_UNSUPPORTED:
      return os << "AuthenticatorStatus::ALGORITHM_UNSUPPORTED";
    case AuthenticatorStatus::EMPTY_ALLOW_CREDENTIALS:
      return os << "AuthenticatorStatus::EMPTY_ALLOW_CREDENTIALS";
    case AuthenticatorStatus::ANDROID_NOT_SUPPORTED_ERROR:
      return os << "AuthenticatorStatus::ANDROID_NOT_SUPPORTED_ERROR";
    case AuthenticatorStatus::PROTECTION_POLICY_INCONSISTENT:
      return os << "AuthenticatorStatus::PROTECTION_POLICY_INCONSISTENT";
    case AuthenticatorStatus::ABORT_ERROR:
      return os << "AuthenticatorStatus::ABORT_ERROR";
    case AuthenticatorStatus::UNKNOWN_ERROR:
      return os << "AuthenticatorStatus::UNKNOWN_ERROR";
    default:
      return os << "Unknown AuthenticatorStatus value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AuthenticatorTransport value) {
  switch(value) {
    case AuthenticatorTransport::USB:
      return os << "AuthenticatorTransport::USB";
    case AuthenticatorTransport::NFC:
      return os << "AuthenticatorTransport::NFC";
    case AuthenticatorTransport::BLE:
      return os << "AuthenticatorTransport::BLE";
    case AuthenticatorTransport::CABLE:
      return os << "AuthenticatorTransport::CABLE";
    case AuthenticatorTransport::INTERNAL:
      return os << "AuthenticatorTransport::INTERNAL";
    default:
      return os << "Unknown AuthenticatorTransport value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, UserVerificationRequirement value) {
  switch(value) {
    case UserVerificationRequirement::PREFERRED:
      return os << "UserVerificationRequirement::PREFERRED";
    case UserVerificationRequirement::REQUIRED:
      return os << "UserVerificationRequirement::REQUIRED";
    case UserVerificationRequirement::DISCOURAGED:
      return os << "UserVerificationRequirement::DISCOURAGED";
    default:
      return os << "Unknown UserVerificationRequirement value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AttestationConveyancePreference value) {
  switch(value) {
    case AttestationConveyancePreference::NONE:
      return os << "AttestationConveyancePreference::NONE";
    case AttestationConveyancePreference::INDIRECT:
      return os << "AttestationConveyancePreference::INDIRECT";
    case AttestationConveyancePreference::DIRECT:
      return os << "AttestationConveyancePreference::DIRECT";
    case AttestationConveyancePreference::ENTERPRISE:
      return os << "AttestationConveyancePreference::ENTERPRISE";
    default:
      return os << "Unknown AttestationConveyancePreference value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AuthenticatorAttachment value) {
  switch(value) {
    case AuthenticatorAttachment::NO_PREFERENCE:
      return os << "AuthenticatorAttachment::NO_PREFERENCE";
    case AuthenticatorAttachment::PLATFORM:
      return os << "AuthenticatorAttachment::PLATFORM";
    case AuthenticatorAttachment::CROSS_PLATFORM:
      return os << "AuthenticatorAttachment::CROSS_PLATFORM";
    default:
      return os << "Unknown AuthenticatorAttachment value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ProtectionPolicy value) {
  switch(value) {
    case ProtectionPolicy::UNSPECIFIED:
      return os << "ProtectionPolicy::UNSPECIFIED";
    case ProtectionPolicy::NONE:
      return os << "ProtectionPolicy::NONE";
    case ProtectionPolicy::UV_OR_CRED_ID_REQUIRED:
      return os << "ProtectionPolicy::UV_OR_CRED_ID_REQUIRED";
    case ProtectionPolicy::UV_REQUIRED:
      return os << "ProtectionPolicy::UV_REQUIRED";
    default:
      return os << "Unknown ProtectionPolicy value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PublicKeyCredentialType value) {
  switch(value) {
    case PublicKeyCredentialType::PUBLIC_KEY:
      return os << "PublicKeyCredentialType::PUBLIC_KEY";
    default:
      return os << "Unknown PublicKeyCredentialType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CommonCredentialInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CommonCredentialInfo_Data* object = static_cast<const CommonCredentialInfo_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->raw_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams raw_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->raw_id, validation_context,
                                         &raw_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->client_data_json, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams client_data_json_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_data_json, validation_context,
                                         &client_data_json_validate_params)) {
    return false;
  }

  return true;
}

CommonCredentialInfo_Data::CommonCredentialInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MakeCredentialAuthenticatorResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MakeCredentialAuthenticatorResponse_Data* object = static_cast<const MakeCredentialAuthenticatorResponse_Data*>(data);

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
          object->info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->attestation_object, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams attestation_object_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->attestation_object, validation_context,
                                         &attestation_object_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->transports, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams transports_validate_params(
      0, ::blink::mojom::internal::AuthenticatorTransport_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->transports, validation_context,
                                         &transports_validate_params)) {
    return false;
  }

  return true;
}

MakeCredentialAuthenticatorResponse_Data::MakeCredentialAuthenticatorResponse_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GetAssertionAuthenticatorResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GetAssertionAuthenticatorResponse_Data* object = static_cast<const GetAssertionAuthenticatorResponse_Data*>(data);

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
          object->info, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->authenticator_data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams authenticator_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->authenticator_data, validation_context,
                                         &authenticator_data_validate_params)) {
    return false;
  }

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

  const mojo::internal::ContainerValidateParams user_handle_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->user_handle, validation_context,
                                         &user_handle_validate_params)) {
    return false;
  }

  return true;
}

GetAssertionAuthenticatorResponse_Data::GetAssertionAuthenticatorResponse_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PublicKeyCredentialRpEntity_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PublicKeyCredentialRpEntity_Data* object = static_cast<const PublicKeyCredentialRpEntity_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  return true;
}

PublicKeyCredentialRpEntity_Data::PublicKeyCredentialRpEntity_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PublicKeyCredentialUserEntity_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PublicKeyCredentialUserEntity_Data* object = static_cast<const PublicKeyCredentialUserEntity_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->icon, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->display_name, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams display_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->display_name, validation_context,
                                         &display_name_validate_params)) {
    return false;
  }

  return true;
}

PublicKeyCredentialUserEntity_Data::PublicKeyCredentialUserEntity_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PublicKeyCredentialParameters_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PublicKeyCredentialParameters_Data* object = static_cast<const PublicKeyCredentialParameters_Data*>(data);

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


  if (!::blink::mojom::internal::PublicKeyCredentialType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

PublicKeyCredentialParameters_Data::PublicKeyCredentialParameters_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CableAuthentication_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CableAuthentication_Data* object = static_cast<const CableAuthentication_Data*>(data);

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
          object->client_eid, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams client_eid_validate_params(
      16, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_eid, validation_context,
                                         &client_eid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->authenticator_eid, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams authenticator_eid_validate_params(
      16, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->authenticator_eid, validation_context,
                                         &authenticator_eid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_pre_key, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_pre_key_validate_params(
      32, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_pre_key, validation_context,
                                         &session_pre_key_validate_params)) {
    return false;
  }

  return true;
}

CableAuthentication_Data::CableAuthentication_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CableRegistration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CableRegistration_Data* object = static_cast<const CableRegistration_Data*>(data);

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
          object->versions, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams versions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->versions, validation_context,
                                         &versions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->relying_party_public_key, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams relying_party_public_key_validate_params(
      65, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->relying_party_public_key, validation_context,
                                         &relying_party_public_key_validate_params)) {
    return false;
  }

  return true;
}

CableRegistration_Data::CableRegistration_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PublicKeyCredentialRequestOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PublicKeyCredentialRequestOptions_Data* object = static_cast<const PublicKeyCredentialRequestOptions_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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
          object->challenge, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams challenge_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->challenge, validation_context,
                                         &challenge_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->adjusted_timeout, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->adjusted_timeout, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->relying_party_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams relying_party_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->relying_party_id, validation_context,
                                         &relying_party_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allow_credentials, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams allow_credentials_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->allow_credentials, validation_context,
                                         &allow_credentials_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::UserVerificationRequirement_Data
        ::Validate(object->user_verification, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams appid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->appid, validation_context,
                                         &appid_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cable_authentication_data, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cable_authentication_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->cable_authentication_data, validation_context,
                                         &cable_authentication_data_validate_params)) {
    return false;
  }

  return true;
}

PublicKeyCredentialRequestOptions_Data::PublicKeyCredentialRequestOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AuthenticatorSelectionCriteria_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AuthenticatorSelectionCriteria_Data* object = static_cast<const AuthenticatorSelectionCriteria_Data*>(data);

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


  if (!::blink::mojom::internal::AuthenticatorAttachment_Data
        ::Validate(object->authenticator_attachment, validation_context))
    return false;


  if (!::blink::mojom::internal::UserVerificationRequirement_Data
        ::Validate(object->user_verification, validation_context))
    return false;

  return true;
}

AuthenticatorSelectionCriteria_Data::AuthenticatorSelectionCriteria_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PublicKeyCredentialCreationOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PublicKeyCredentialCreationOptions_Data* object = static_cast<const PublicKeyCredentialCreationOptions_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 88 }};

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
          object->relying_party, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->relying_party, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->user, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->user, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->challenge, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams challenge_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->challenge, validation_context,
                                         &challenge_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->public_key_parameters, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams public_key_parameters_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->public_key_parameters, validation_context,
                                         &public_key_parameters_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->adjusted_timeout, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->adjusted_timeout, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->exclude_credentials, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams exclude_credentials_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->exclude_credentials, validation_context,
                                         &exclude_credentials_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->authenticator_selection, validation_context))
    return false;


  if (!::blink::mojom::internal::AttestationConveyancePreference_Data
        ::Validate(object->attestation, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->cable_registration_data, validation_context))
    return false;


  if (!::blink::mojom::internal::ProtectionPolicy_Data
        ::Validate(object->protection_policy, validation_context))
    return false;

  return true;
}

PublicKeyCredentialCreationOptions_Data::PublicKeyCredentialCreationOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PublicKeyCredentialDescriptor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PublicKeyCredentialDescriptor_Data* object = static_cast<const PublicKeyCredentialDescriptor_Data*>(data);

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


  if (!::blink::mojom::internal::PublicKeyCredentialType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->transports, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams transports_validate_params(
      0, ::blink::mojom::internal::AuthenticatorTransport_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->transports, validation_context,
                                         &transports_validate_params)) {
    return false;
  }

  return true;
}

PublicKeyCredentialDescriptor_Data::PublicKeyCredentialDescriptor_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_MakeCredential_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_MakeCredential_Params_Data* object = static_cast<const Authenticator_MakeCredential_Params_Data*>(data);

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
          object->options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

Authenticator_MakeCredential_Params_Data::Authenticator_MakeCredential_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_MakeCredential_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_MakeCredential_ResponseParams_Data* object = static_cast<const Authenticator_MakeCredential_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::AuthenticatorStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->credential, validation_context))
    return false;

  return true;
}

Authenticator_MakeCredential_ResponseParams_Data::Authenticator_MakeCredential_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_GetAssertion_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_GetAssertion_Params_Data* object = static_cast<const Authenticator_GetAssertion_Params_Data*>(data);

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
          object->options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

Authenticator_GetAssertion_Params_Data::Authenticator_GetAssertion_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_GetAssertion_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_GetAssertion_ResponseParams_Data* object = static_cast<const Authenticator_GetAssertion_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::AuthenticatorStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->credential, validation_context))
    return false;

  return true;
}

Authenticator_GetAssertion_ResponseParams_Data::Authenticator_GetAssertion_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data* object = static_cast<const Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data*>(data);

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

Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data* object = static_cast<const Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data*>(data);

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

Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Authenticator_Cancel_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Authenticator_Cancel_Params_Data* object = static_cast<const Authenticator_Cancel_Params_Data*>(data);

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

Authenticator_Cancel_Params_Data::Authenticator_Cancel_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif