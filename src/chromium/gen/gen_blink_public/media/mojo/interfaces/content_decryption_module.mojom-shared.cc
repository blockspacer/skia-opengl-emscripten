// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "media/mojo/interfaces/content_decryption_module.mojom-params-data.h"
namespace media {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CdmKeyStatus value) {
  switch(value) {
    case CdmKeyStatus::USABLE:
      return os << "CdmKeyStatus::USABLE";
    case CdmKeyStatus::INTERNAL_ERROR:
      return os << "CdmKeyStatus::INTERNAL_ERROR";
    case CdmKeyStatus::EXPIRED:
      return os << "CdmKeyStatus::EXPIRED";
    case CdmKeyStatus::OUTPUT_RESTRICTED:
      return os << "CdmKeyStatus::OUTPUT_RESTRICTED";
    case CdmKeyStatus::OUTPUT_DOWNSCALED:
      return os << "CdmKeyStatus::OUTPUT_DOWNSCALED";
    case CdmKeyStatus::KEY_STATUS_PENDING:
      return os << "CdmKeyStatus::KEY_STATUS_PENDING";
    case CdmKeyStatus::RELEASED:
      return os << "CdmKeyStatus::RELEASED";
    default:
      return os << "Unknown CdmKeyStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool CdmPromiseResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CdmPromiseResult_Data* object = static_cast<const CdmPromiseResult_Data*>(data);

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


  if (!::media::mojom::internal::CdmPromiseResult_Exception_Data
        ::Validate(object->exception, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

CdmPromiseResult_Data::CdmPromiseResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CdmKeyInformation_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CdmKeyInformation_Data* object = static_cast<const CdmKeyInformation_Data*>(data);

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
          object->key_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_id, validation_context,
                                         &key_id_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::CdmKeyStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

CdmKeyInformation_Data::CdmKeyInformation_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_SetClient_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_SetClient_Params_Data* object = static_cast<const ContentDecryptionModule_SetClient_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_SetClient_Params_Data::ContentDecryptionModule_SetClient_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_Initialize_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_Initialize_Params_Data* object = static_cast<const ContentDecryptionModule_Initialize_Params_Data*>(data);

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
          object->key_system, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_system_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_system, validation_context,
                                         &key_system_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->security_origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->security_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cdm_config, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->cdm_config, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_Initialize_Params_Data::ContentDecryptionModule_Initialize_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_Initialize_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_Initialize_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_Initialize_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterface(object->decryptor,
                                                 validation_context)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_Initialize_ResponseParams_Data::ContentDecryptionModule_Initialize_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_SetServerCertificate_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_SetServerCertificate_Params_Data* object = static_cast<const ContentDecryptionModule_SetServerCertificate_Params_Data*>(data);

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
          object->certificate_data, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams certificate_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->certificate_data, validation_context,
                                         &certificate_data_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_SetServerCertificate_Params_Data::ContentDecryptionModule_SetServerCertificate_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_SetServerCertificate_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_SetServerCertificate_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_SetServerCertificate_ResponseParams_Data::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_GetStatusForPolicy_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_GetStatusForPolicy_Params_Data* object = static_cast<const ContentDecryptionModule_GetStatusForPolicy_Params_Data*>(data);

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


  if (!::media::mojom::internal::HdcpVersion_Data
        ::Validate(object->min_hdcp_version, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_GetStatusForPolicy_Params_Data::ContentDecryptionModule_GetStatusForPolicy_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;


  if (!::media::mojom::internal::CdmKeyStatus_Data
        ::Validate(object->key_status, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* object = static_cast<const ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data*>(data);

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


  if (!::media::mojom::internal::CdmSessionType_Data
        ::Validate(object->session_type, validation_context))
    return false;


  if (!::media::mojom::internal::EmeInitDataType_Data
        ::Validate(object->init_data_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->init_data, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams init_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->init_data, validation_context,
                                         &init_data_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_LoadSession_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_LoadSession_Params_Data* object = static_cast<const ContentDecryptionModule_LoadSession_Params_Data*>(data);

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


  if (!::media::mojom::internal::CdmSessionType_Data
        ::Validate(object->session_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_LoadSession_Params_Data::ContentDecryptionModule_LoadSession_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_LoadSession_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_LoadSession_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_LoadSession_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->session_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_LoadSession_ResponseParams_Data::ContentDecryptionModule_LoadSession_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_UpdateSession_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_UpdateSession_Params_Data* object = static_cast<const ContentDecryptionModule_UpdateSession_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams response_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->response, validation_context,
                                         &response_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_UpdateSession_Params_Data::ContentDecryptionModule_UpdateSession_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_UpdateSession_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_UpdateSession_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_UpdateSession_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_UpdateSession_ResponseParams_Data::ContentDecryptionModule_UpdateSession_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_CloseSession_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_CloseSession_Params_Data* object = static_cast<const ContentDecryptionModule_CloseSession_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_CloseSession_Params_Data::ContentDecryptionModule_CloseSession_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_CloseSession_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_CloseSession_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_CloseSession_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_CloseSession_ResponseParams_Data::ContentDecryptionModule_CloseSession_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_RemoveSession_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_RemoveSession_Params_Data* object = static_cast<const ContentDecryptionModule_RemoveSession_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModule_RemoveSession_Params_Data::ContentDecryptionModule_RemoveSession_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModule_RemoveSession_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModule_RemoveSession_ResponseParams_Data* object = static_cast<const ContentDecryptionModule_RemoveSession_ResponseParams_Data*>(data);

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
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

ContentDecryptionModule_RemoveSession_ResponseParams_Data::ContentDecryptionModule_RemoveSession_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModuleClient_OnSessionMessage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModuleClient_OnSessionMessage_Params_Data* object = static_cast<const ContentDecryptionModuleClient_OnSessionMessage_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::CdmMessageType_Data
        ::Validate(object->message_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->message, validation_context,
                                         &message_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModuleClient_OnSessionMessage_Params_Data::ContentDecryptionModuleClient_OnSessionMessage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModuleClient_OnSessionClosed_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModuleClient_OnSessionClosed_Params_Data* object = static_cast<const ContentDecryptionModuleClient_OnSessionClosed_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModuleClient_OnSessionClosed_Params_Data::ContentDecryptionModuleClient_OnSessionClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* object = static_cast<const ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->keys_info, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_info_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keys_info, validation_context,
                                         &keys_info_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* object = static_cast<const ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data*>(data);

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
          object->session_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams session_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->session_id, validation_context,
                                         &session_id_validate_params)) {
    return false;
  }

  return true;
}

ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CdmFactory_CreateCdm_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CdmFactory_CreateCdm_Params_Data* object = static_cast<const CdmFactory_CreateCdm_Params_Data*>(data);

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
          object->key_system, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_system_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_system, validation_context,
                                         &key_system_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->cdm, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->cdm,
                                                 validation_context)) {
    return false;
  }

  return true;
}

CdmFactory_CreateCdm_Params_Data::CdmFactory_CreateCdm_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif