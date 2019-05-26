// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-params-data.h"
namespace payments {
namespace mojom {

namespace internal {


// static
bool PaymentHandlerMethodData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerMethodData_Data* object = static_cast<const PaymentHandlerMethodData_Data*>(data);

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
          object->stringified_data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams stringified_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->stringified_data, validation_context,
                                         &stringified_data_validate_params)) {
    return false;
  }

  return true;
}

PaymentHandlerMethodData_Data::PaymentHandlerMethodData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerModifier_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerModifier_Data* object = static_cast<const PaymentHandlerModifier_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->total, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method_data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->method_data, validation_context))
    return false;

  return true;
}

PaymentHandlerModifier_Data::PaymentHandlerModifier_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentMethodChangeResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentMethodChangeResponse_Data* object = static_cast<const PaymentMethodChangeResponse_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->total, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams modifiers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->modifiers, validation_context,
                                         &modifiers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams stringified_payment_method_errors_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->stringified_payment_method_errors, validation_context,
                                         &stringified_payment_method_errors_validate_params)) {
    return false;
  }

  return true;
}

PaymentMethodChangeResponse_Data::PaymentMethodChangeResponse_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerHost_ChangePaymentMethod_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerHost_ChangePaymentMethod_Params_Data* object = static_cast<const PaymentHandlerHost_ChangePaymentMethod_Params_Data*>(data);

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
          object->method_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->method_data, validation_context))
    return false;

  return true;
}

PaymentHandlerHost_ChangePaymentMethod_Params_Data::PaymentHandlerHost_ChangePaymentMethod_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data* object = static_cast<const PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data*>(data);

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
          object->response_data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response_data, validation_context))
    return false;

  return true;
}

PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#if defined(_MSC_VER)
#pragma warning(pop)
#endif