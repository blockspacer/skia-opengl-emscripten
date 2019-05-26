// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/payments/payment_app.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/payments/payment_app.mojom-params-data.h"
namespace payments {
namespace mojom {

std::ostream& operator<<(std::ostream& os, PaymentHandlerStatus value) {
  switch(value) {
    case PaymentHandlerStatus::SUCCESS:
      return os << "PaymentHandlerStatus::SUCCESS";
    case PaymentHandlerStatus::NOT_FOUND:
      return os << "PaymentHandlerStatus::NOT_FOUND";
    case PaymentHandlerStatus::NO_ACTIVE_WORKER:
      return os << "PaymentHandlerStatus::NO_ACTIVE_WORKER";
    case PaymentHandlerStatus::STORAGE_OPERATION_FAILED:
      return os << "PaymentHandlerStatus::STORAGE_OPERATION_FAILED";
    case PaymentHandlerStatus::FETCH_INSTRUMENT_ICON_FAILED:
      return os << "PaymentHandlerStatus::FETCH_INSTRUMENT_ICON_FAILED";
    case PaymentHandlerStatus::FETCH_PAYMENT_APP_INFO_FAILED:
      return os << "PaymentHandlerStatus::FETCH_PAYMENT_APP_INFO_FAILED";
    default:
      return os << "Unknown PaymentHandlerStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool PaymentInstrument_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentInstrument_Data* object = static_cast<const PaymentInstrument_Data*>(data);

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
          object->icons, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams icons_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->icons, validation_context,
                                         &icons_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method, validation_context,
                                         &method_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stringified_capabilities, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams stringified_capabilities_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->stringified_capabilities, validation_context,
                                         &stringified_capabilities_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_networks, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_networks_validate_params(
      0, ::payments::mojom::internal::BasicCardNetwork_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_networks, validation_context,
                                         &supported_networks_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_types, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_types_validate_params(
      0, ::payments::mojom::internal::BasicCardType_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_types, validation_context,
                                         &supported_types_validate_params)) {
    return false;
  }

  return true;
}

PaymentInstrument_Data::PaymentInstrument_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CanMakePaymentEventData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CanMakePaymentEventData_Data* object = static_cast<const CanMakePaymentEventData_Data*>(data);

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
          object->top_origin, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->top_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->payment_request_origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->payment_request_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method_data, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method_data, validation_context,
                                         &method_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modifiers, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams modifiers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->modifiers, validation_context,
                                         &modifiers_validate_params)) {
    return false;
  }

  return true;
}

CanMakePaymentEventData_Data::CanMakePaymentEventData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestEventData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestEventData_Data* object = static_cast<const PaymentRequestEventData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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
          object->top_origin, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->top_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->payment_request_origin, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->payment_request_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->payment_request_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams payment_request_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->payment_request_id, validation_context,
                                         &payment_request_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method_data, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method_data, validation_context,
                                         &method_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->total, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->total, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->modifiers, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams modifiers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->modifiers, validation_context,
                                         &modifiers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->instrument_key, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instrument_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instrument_key, validation_context,
                                         &instrument_key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->payment_handler_host,
                                                 validation_context)) {
    return false;
  }

  return true;
}

PaymentRequestEventData_Data::PaymentRequestEventData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerResponse_Data* object = static_cast<const PaymentHandlerResponse_Data*>(data);

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
          object->method_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method_name, validation_context,
                                         &method_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stringified_details, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams stringified_details_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->stringified_details, validation_context,
                                         &stringified_details_validate_params)) {
    return false;
  }

  return true;
}

PaymentHandlerResponse_Data::PaymentHandlerResponse_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_Init_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_Init_Params_Data* object = static_cast<const PaymentManager_Init_Params_Data*>(data);

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
          object->context_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->context_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_worker_scope, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_worker_scope_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_worker_scope, validation_context,
                                         &service_worker_scope_validate_params)) {
    return false;
  }

  return true;
}

PaymentManager_Init_Params_Data::PaymentManager_Init_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_DeletePaymentInstrument_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_DeletePaymentInstrument_Params_Data* object = static_cast<const PaymentManager_DeletePaymentInstrument_Params_Data*>(data);

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
          object->instrument_key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instrument_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instrument_key, validation_context,
                                         &instrument_key_validate_params)) {
    return false;
  }

  return true;
}

PaymentManager_DeletePaymentInstrument_Params_Data::PaymentManager_DeletePaymentInstrument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_DeletePaymentInstrument_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_DeletePaymentInstrument_ResponseParams_Data* object = static_cast<const PaymentManager_DeletePaymentInstrument_ResponseParams_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentHandlerStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PaymentManager_DeletePaymentInstrument_ResponseParams_Data::PaymentManager_DeletePaymentInstrument_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_GetPaymentInstrument_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_GetPaymentInstrument_Params_Data* object = static_cast<const PaymentManager_GetPaymentInstrument_Params_Data*>(data);

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
          object->instrument_key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instrument_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instrument_key, validation_context,
                                         &instrument_key_validate_params)) {
    return false;
  }

  return true;
}

PaymentManager_GetPaymentInstrument_Params_Data::PaymentManager_GetPaymentInstrument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_GetPaymentInstrument_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_GetPaymentInstrument_ResponseParams_Data* object = static_cast<const PaymentManager_GetPaymentInstrument_ResponseParams_Data*>(data);

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
          object->instrument, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->instrument, validation_context))
    return false;


  if (!::payments::mojom::internal::PaymentHandlerStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PaymentManager_GetPaymentInstrument_ResponseParams_Data::PaymentManager_GetPaymentInstrument_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_KeysOfPaymentInstruments_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_KeysOfPaymentInstruments_Params_Data* object = static_cast<const PaymentManager_KeysOfPaymentInstruments_Params_Data*>(data);

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

PaymentManager_KeysOfPaymentInstruments_Params_Data::PaymentManager_KeysOfPaymentInstruments_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* object = static_cast<const PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data*>(data);

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
          object->keys, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->keys, validation_context,
                                         &keys_validate_params)) {
    return false;
  }


  if (!::payments::mojom::internal::PaymentHandlerStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_HasPaymentInstrument_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_HasPaymentInstrument_Params_Data* object = static_cast<const PaymentManager_HasPaymentInstrument_Params_Data*>(data);

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
          object->instrument_key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instrument_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instrument_key, validation_context,
                                         &instrument_key_validate_params)) {
    return false;
  }

  return true;
}

PaymentManager_HasPaymentInstrument_Params_Data::PaymentManager_HasPaymentInstrument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_HasPaymentInstrument_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_HasPaymentInstrument_ResponseParams_Data* object = static_cast<const PaymentManager_HasPaymentInstrument_ResponseParams_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentHandlerStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PaymentManager_HasPaymentInstrument_ResponseParams_Data::PaymentManager_HasPaymentInstrument_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_SetPaymentInstrument_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_SetPaymentInstrument_Params_Data* object = static_cast<const PaymentManager_SetPaymentInstrument_Params_Data*>(data);

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
          object->instrument_key, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instrument_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instrument_key, validation_context,
                                         &instrument_key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->instrument, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->instrument, validation_context))
    return false;

  return true;
}

PaymentManager_SetPaymentInstrument_Params_Data::PaymentManager_SetPaymentInstrument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_SetPaymentInstrument_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_SetPaymentInstrument_ResponseParams_Data* object = static_cast<const PaymentManager_SetPaymentInstrument_ResponseParams_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentHandlerStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PaymentManager_SetPaymentInstrument_ResponseParams_Data::PaymentManager_SetPaymentInstrument_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_ClearPaymentInstruments_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_ClearPaymentInstruments_Params_Data* object = static_cast<const PaymentManager_ClearPaymentInstruments_Params_Data*>(data);

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

PaymentManager_ClearPaymentInstruments_Params_Data::PaymentManager_ClearPaymentInstruments_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_ClearPaymentInstruments_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_ClearPaymentInstruments_ResponseParams_Data* object = static_cast<const PaymentManager_ClearPaymentInstruments_ResponseParams_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentHandlerStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

PaymentManager_ClearPaymentInstruments_ResponseParams_Data::PaymentManager_ClearPaymentInstruments_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentManager_SetUserHint_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentManager_SetUserHint_Params_Data* object = static_cast<const PaymentManager_SetUserHint_Params_Data*>(data);

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
          object->user_hint, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams user_hint_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->user_hint, validation_context,
                                         &user_hint_validate_params)) {
    return false;
  }

  return true;
}

PaymentManager_SetUserHint_Params_Data::PaymentManager_SetUserHint_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* object = static_cast<const PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data*>(data);

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

PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* object = static_cast<const PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data*>(data);

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

PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* object = static_cast<const PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data*>(data);

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
          object->response, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, validation_context))
    return false;

  return true;
}

PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#if defined(_MSC_VER)
#pragma warning(pop)
#endif