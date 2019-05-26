// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/service_manager/public/mojom/connector.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/service_manager/public/mojom/connector.mojom-params-data.h"
namespace service_manager {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ConnectResult value) {
  switch(value) {
    case ConnectResult::SUCCEEDED:
      return os << "ConnectResult::SUCCEEDED";
    case ConnectResult::INVALID_ARGUMENT:
      return os << "ConnectResult::INVALID_ARGUMENT";
    case ConnectResult::ACCESS_DENIED:
      return os << "ConnectResult::ACCESS_DENIED";
    default:
      return os << "Unknown ConnectResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BindInterfacePriority value) {
  switch(value) {
    case BindInterfacePriority::kImportant:
      return os << "BindInterfacePriority::kImportant";
    case BindInterfacePriority::kBestEffort:
      return os << "BindInterfacePriority::kBestEffort";
    default:
      return os << "Unknown BindInterfacePriority value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Identity_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Identity_Data* object = static_cast<const Identity_Data*>(data);

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
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->instance_group, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->instance_group, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->instance_id, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->instance_id, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->globally_unique_id, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->globally_unique_id, validation_context))
    return false;

  return true;
}

Identity_Data::Identity_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceInfo_Data* object = static_cast<const ServiceInfo_Data*>(data);

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
          object->sandbox_type, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sandbox_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sandbox_type, validation_context,
                                         &sandbox_type_validate_params)) {
    return false;
  }

  return true;
}

ServiceInfo_Data::ServiceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ProcessMetadata_SetPID_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProcessMetadata_SetPID_Params_Data* object = static_cast<const ProcessMetadata_SetPID_Params_Data*>(data);

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
          object->pid, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->pid, validation_context))
    return false;

  return true;
}

ProcessMetadata_SetPID_Params_Data::ProcessMetadata_SetPID_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_BindInterface_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_BindInterface_Params_Data* object = static_cast<const Connector_BindInterface_Params_Data*>(data);

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
          object->filter, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filter, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->interface_name, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams interface_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->interface_name, validation_context,
                                         &interface_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->interface_pipe, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->interface_pipe,
                                                 validation_context)) {
    return false;
  }


  if (!::service_manager::mojom::internal::BindInterfacePriority_Data
        ::Validate(object->priority, validation_context))
    return false;

  return true;
}

Connector_BindInterface_Params_Data::Connector_BindInterface_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_BindInterface_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_BindInterface_ResponseParams_Data* object = static_cast<const Connector_BindInterface_ResponseParams_Data*>(data);

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


  if (!::service_manager::mojom::internal::ConnectResult_Data
        ::Validate(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->identity, validation_context))
    return false;

  return true;
}

Connector_BindInterface_ResponseParams_Data::Connector_BindInterface_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_QueryService_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_QueryService_Params_Data* object = static_cast<const Connector_QueryService_Params_Data*>(data);

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
          object->service_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_name, validation_context,
                                         &service_name_validate_params)) {
    return false;
  }

  return true;
}

Connector_QueryService_Params_Data::Connector_QueryService_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_QueryService_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_QueryService_ResponseParams_Data* object = static_cast<const Connector_QueryService_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  return true;
}

Connector_QueryService_ResponseParams_Data::Connector_QueryService_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_WarmService_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_WarmService_Params_Data* object = static_cast<const Connector_WarmService_Params_Data*>(data);

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
          object->filter, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filter, validation_context))
    return false;

  return true;
}

Connector_WarmService_Params_Data::Connector_WarmService_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_WarmService_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_WarmService_ResponseParams_Data* object = static_cast<const Connector_WarmService_ResponseParams_Data*>(data);

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


  if (!::service_manager::mojom::internal::ConnectResult_Data
        ::Validate(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->identity, validation_context))
    return false;

  return true;
}

Connector_WarmService_ResponseParams_Data::Connector_WarmService_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_RegisterServiceInstance_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_RegisterServiceInstance_Params_Data* object = static_cast<const Connector_RegisterServiceInstance_Params_Data*>(data);

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
          object->identity, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->identity, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->service, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->service,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->metadata_receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Connector_RegisterServiceInstance_Params_Data::Connector_RegisterServiceInstance_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_RegisterServiceInstance_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_RegisterServiceInstance_ResponseParams_Data* object = static_cast<const Connector_RegisterServiceInstance_ResponseParams_Data*>(data);

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


  if (!::service_manager::mojom::internal::ConnectResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

Connector_RegisterServiceInstance_ResponseParams_Data::Connector_RegisterServiceInstance_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_Clone_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_Clone_Params_Data* object = static_cast<const Connector_Clone_Params_Data*>(data);

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
          object->request, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->request,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Connector_Clone_Params_Data::Connector_Clone_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Connector_FilterInterfaces_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connector_FilterInterfaces_Params_Data* object = static_cast<const Connector_FilterInterfaces_Params_Data*>(data);

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
          object->spec, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams spec_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->spec, validation_context,
                                         &spec_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->source, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->source, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->source_request, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->source_request,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->target, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->target,
                                                 validation_context)) {
    return false;
  }

  return true;
}

Connector_FilterInterfaces_Params_Data::Connector_FilterInterfaces_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#if defined(_MSC_VER)
#pragma warning(pop)
#endif