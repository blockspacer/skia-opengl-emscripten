// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/payments/payment_request.mojom-params-data.h"
namespace payments {
namespace mojom {

std::ostream& operator<<(std::ostream& os, PaymentErrorReason value) {
  switch(value) {
    case PaymentErrorReason::UNKNOWN:
      return os << "PaymentErrorReason::UNKNOWN";
    case PaymentErrorReason::USER_CANCEL:
      return os << "PaymentErrorReason::USER_CANCEL";
    case PaymentErrorReason::NOT_SUPPORTED:
      return os << "PaymentErrorReason::NOT_SUPPORTED";
    case PaymentErrorReason::ALREADY_SHOWING:
      return os << "PaymentErrorReason::ALREADY_SHOWING";
    default:
      return os << "Unknown PaymentErrorReason value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CanMakePaymentQueryResult value) {
  switch(value) {
    case CanMakePaymentQueryResult::CAN_MAKE_PAYMENT:
      return os << "CanMakePaymentQueryResult::CAN_MAKE_PAYMENT";
    case CanMakePaymentQueryResult::CANNOT_MAKE_PAYMENT:
      return os << "CanMakePaymentQueryResult::CANNOT_MAKE_PAYMENT";
    case CanMakePaymentQueryResult::QUERY_QUOTA_EXCEEDED:
      return os << "CanMakePaymentQueryResult::QUERY_QUOTA_EXCEEDED";
    case CanMakePaymentQueryResult::WARNING_CAN_MAKE_PAYMENT:
      return os << "CanMakePaymentQueryResult::WARNING_CAN_MAKE_PAYMENT";
    case CanMakePaymentQueryResult::WARNING_CANNOT_MAKE_PAYMENT:
      return os << "CanMakePaymentQueryResult::WARNING_CANNOT_MAKE_PAYMENT";
    default:
      return os << "Unknown CanMakePaymentQueryResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, HasEnrolledInstrumentQueryResult value) {
  switch(value) {
    case HasEnrolledInstrumentQueryResult::HAS_ENROLLED_INSTRUMENT:
      return os << "HasEnrolledInstrumentQueryResult::HAS_ENROLLED_INSTRUMENT";
    case HasEnrolledInstrumentQueryResult::HAS_NO_ENROLLED_INSTRUMENT:
      return os << "HasEnrolledInstrumentQueryResult::HAS_NO_ENROLLED_INSTRUMENT";
    case HasEnrolledInstrumentQueryResult::QUERY_QUOTA_EXCEEDED:
      return os << "HasEnrolledInstrumentQueryResult::QUERY_QUOTA_EXCEEDED";
    case HasEnrolledInstrumentQueryResult::WARNING_HAS_ENROLLED_INSTRUMENT:
      return os << "HasEnrolledInstrumentQueryResult::WARNING_HAS_ENROLLED_INSTRUMENT";
    case HasEnrolledInstrumentQueryResult::WARNING_HAS_NO_ENROLLED_INSTRUMENT:
      return os << "HasEnrolledInstrumentQueryResult::WARNING_HAS_NO_ENROLLED_INSTRUMENT";
    default:
      return os << "Unknown HasEnrolledInstrumentQueryResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AndroidPayEnvironment value) {
  switch(value) {
    case AndroidPayEnvironment::PRODUCTION:
      return os << "AndroidPayEnvironment::PRODUCTION";
    case AndroidPayEnvironment::TEST:
      return os << "AndroidPayEnvironment::TEST";
    default:
      return os << "Unknown AndroidPayEnvironment value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BasicCardNetwork value) {
  switch(value) {
    case BasicCardNetwork::AMEX:
      return os << "BasicCardNetwork::AMEX";
    case BasicCardNetwork::DINERS:
      return os << "BasicCardNetwork::DINERS";
    case BasicCardNetwork::DISCOVER:
      return os << "BasicCardNetwork::DISCOVER";
    case BasicCardNetwork::JCB:
      return os << "BasicCardNetwork::JCB";
    case BasicCardNetwork::MASTERCARD:
      return os << "BasicCardNetwork::MASTERCARD";
    case BasicCardNetwork::MIR:
      return os << "BasicCardNetwork::MIR";
    case BasicCardNetwork::UNIONPAY:
      return os << "BasicCardNetwork::UNIONPAY";
    case BasicCardNetwork::VISA:
      return os << "BasicCardNetwork::VISA";
    default:
      return os << "Unknown BasicCardNetwork value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BasicCardType value) {
  switch(value) {
    case BasicCardType::CREDIT:
      return os << "BasicCardType::CREDIT";
    case BasicCardType::DEBIT:
      return os << "BasicCardType::DEBIT";
    case BasicCardType::PREPAID:
      return os << "BasicCardType::PREPAID";
    default:
      return os << "Unknown BasicCardType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PaymentShippingType value) {
  switch(value) {
    case PaymentShippingType::SHIPPING:
      return os << "PaymentShippingType::SHIPPING";
    case PaymentShippingType::DELIVERY:
      return os << "PaymentShippingType::DELIVERY";
    case PaymentShippingType::PICKUP:
      return os << "PaymentShippingType::PICKUP";
    default:
      return os << "Unknown PaymentShippingType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PaymentComplete value) {
  switch(value) {
    case PaymentComplete::FAIL:
      return os << "PaymentComplete::FAIL";
    case PaymentComplete::SUCCESS:
      return os << "PaymentComplete::SUCCESS";
    case PaymentComplete::UNKNOWN:
      return os << "PaymentComplete::UNKNOWN";
    default:
      return os << "Unknown PaymentComplete value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool PaymentResponse_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentResponse_Data* object = static_cast<const PaymentResponse_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->shipping_address, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams shipping_option_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->shipping_option, validation_context,
                                         &shipping_option_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->payer, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->payer, validation_context))
    return false;

  return true;
}

PaymentResponse_Data::PaymentResponse_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PayerDetail_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PayerDetail_Data* object = static_cast<const PayerDetail_Data*>(data);

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

  const mojo::internal::ContainerValidateParams email_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->email, validation_context,
                                         &email_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams phone_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->phone, validation_context,
                                         &phone_validate_params)) {
    return false;
  }

  return true;
}

PayerDetail_Data::PayerDetail_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentItem_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentItem_Data* object = static_cast<const PaymentItem_Data*>(data);

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
          object->label, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->amount, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->amount, validation_context))
    return false;

  return true;
}

PaymentItem_Data::PaymentItem_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentShippingOption_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentShippingOption_Data* object = static_cast<const PaymentShippingOption_Data*>(data);

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
          object->label, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams label_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->label, validation_context,
                                         &label_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->amount, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->amount, validation_context))
    return false;

  return true;
}

PaymentShippingOption_Data::PaymentShippingOption_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentMethodData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentMethodData_Data* object = static_cast<const PaymentMethodData_Data*>(data);

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
          object->supported_method, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->supported_method, validation_context,
                                         &supported_method_validate_params)) {
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


  if (!::payments::mojom::internal::AndroidPayEnvironment_Data
        ::Validate(object->environment, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_networks, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_networks_validate_params(
      0, ::payments::mojom::internal::BasicCardNetwork_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->supported_networks, validation_context,
                                         &supported_networks_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_types, 7, validation_context)) {
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

PaymentMethodData_Data::PaymentMethodData_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentDetailsModifier_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentDetailsModifier_Data* object = static_cast<const PaymentDetailsModifier_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->total, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->additional_display_items, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams additional_display_items_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->additional_display_items, validation_context,
                                         &additional_display_items_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method_data, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->method_data, validation_context))
    return false;

  return true;
}

PaymentDetailsModifier_Data::PaymentDetailsModifier_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentDetails_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentDetails_Data* object = static_cast<const PaymentDetails_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->total, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams display_items_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->display_items, validation_context,
                                         &display_items_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams shipping_options_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->shipping_options, validation_context,
                                         &shipping_options_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams modifiers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->modifiers, validation_context,
                                         &modifiers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->shipping_address_errors, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
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

PaymentDetails_Data::PaymentDetails_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentOptions_Data* object = static_cast<const PaymentOptions_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentShippingType_Data
        ::Validate(object->shipping_type, validation_context))
    return false;

  return true;
}

PaymentOptions_Data::PaymentOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnPaymentMethodChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnPaymentMethodChange_Params_Data* object = static_cast<const PaymentRequestClient_OnPaymentMethodChange_Params_Data*>(data);

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

PaymentRequestClient_OnPaymentMethodChange_Params_Data::PaymentRequestClient_OnPaymentMethodChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnShippingAddressChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnShippingAddressChange_Params_Data* object = static_cast<const PaymentRequestClient_OnShippingAddressChange_Params_Data*>(data);

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
          object->address, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->address, validation_context))
    return false;

  return true;
}

PaymentRequestClient_OnShippingAddressChange_Params_Data::PaymentRequestClient_OnShippingAddressChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnShippingOptionChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnShippingOptionChange_Params_Data* object = static_cast<const PaymentRequestClient_OnShippingOptionChange_Params_Data*>(data);

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
          object->shipping_option_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams shipping_option_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->shipping_option_id, validation_context,
                                         &shipping_option_id_validate_params)) {
    return false;
  }

  return true;
}

PaymentRequestClient_OnShippingOptionChange_Params_Data::PaymentRequestClient_OnShippingOptionChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnPayerDetailChange_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnPayerDetailChange_Params_Data* object = static_cast<const PaymentRequestClient_OnPayerDetailChange_Params_Data*>(data);

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
          object->detail, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->detail, validation_context))
    return false;

  return true;
}

PaymentRequestClient_OnPayerDetailChange_Params_Data::PaymentRequestClient_OnPayerDetailChange_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnPaymentResponse_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnPaymentResponse_Params_Data* object = static_cast<const PaymentRequestClient_OnPaymentResponse_Params_Data*>(data);

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

PaymentRequestClient_OnPaymentResponse_Params_Data::PaymentRequestClient_OnPaymentResponse_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnError_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnError_Params_Data* object = static_cast<const PaymentRequestClient_OnError_Params_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentErrorReason_Data
        ::Validate(object->error, validation_context))
    return false;

  return true;
}

PaymentRequestClient_OnError_Params_Data::PaymentRequestClient_OnError_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnComplete_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnComplete_Params_Data* object = static_cast<const PaymentRequestClient_OnComplete_Params_Data*>(data);

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

PaymentRequestClient_OnComplete_Params_Data::PaymentRequestClient_OnComplete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnAbort_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnAbort_Params_Data* object = static_cast<const PaymentRequestClient_OnAbort_Params_Data*>(data);

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

PaymentRequestClient_OnAbort_Params_Data::PaymentRequestClient_OnAbort_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnCanMakePayment_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnCanMakePayment_Params_Data* object = static_cast<const PaymentRequestClient_OnCanMakePayment_Params_Data*>(data);

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


  if (!::payments::mojom::internal::CanMakePaymentQueryResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

PaymentRequestClient_OnCanMakePayment_Params_Data::PaymentRequestClient_OnCanMakePayment_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_OnHasEnrolledInstrument_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* object = static_cast<const PaymentRequestClient_OnHasEnrolledInstrument_Params_Data*>(data);

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


  if (!::payments::mojom::internal::HasEnrolledInstrumentQueryResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

PaymentRequestClient_OnHasEnrolledInstrument_Params_Data::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequestClient_WarnNoFavicon_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequestClient_WarnNoFavicon_Params_Data* object = static_cast<const PaymentRequestClient_WarnNoFavicon_Params_Data*>(data);

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

PaymentRequestClient_WarnNoFavicon_Params_Data::PaymentRequestClient_WarnNoFavicon_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_Init_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_Init_Params_Data* object = static_cast<const PaymentRequest_Init_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method_data, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method_data, validation_context,
                                         &method_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->details, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->details, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

PaymentRequest_Init_Params_Data::PaymentRequest_Init_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_Show_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_Show_Params_Data* object = static_cast<const PaymentRequest_Show_Params_Data*>(data);

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

PaymentRequest_Show_Params_Data::PaymentRequest_Show_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_UpdateWith_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_UpdateWith_Params_Data* object = static_cast<const PaymentRequest_UpdateWith_Params_Data*>(data);

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
          object->details, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->details, validation_context))
    return false;

  return true;
}

PaymentRequest_UpdateWith_Params_Data::PaymentRequest_UpdateWith_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_NoUpdatedPaymentDetails_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_NoUpdatedPaymentDetails_Params_Data* object = static_cast<const PaymentRequest_NoUpdatedPaymentDetails_Params_Data*>(data);

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

PaymentRequest_NoUpdatedPaymentDetails_Params_Data::PaymentRequest_NoUpdatedPaymentDetails_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_Abort_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_Abort_Params_Data* object = static_cast<const PaymentRequest_Abort_Params_Data*>(data);

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

PaymentRequest_Abort_Params_Data::PaymentRequest_Abort_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_Complete_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_Complete_Params_Data* object = static_cast<const PaymentRequest_Complete_Params_Data*>(data);

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


  if (!::payments::mojom::internal::PaymentComplete_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

PaymentRequest_Complete_Params_Data::PaymentRequest_Complete_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_Retry_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_Retry_Params_Data* object = static_cast<const PaymentRequest_Retry_Params_Data*>(data);

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
          object->errors, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->errors, validation_context))
    return false;

  return true;
}

PaymentRequest_Retry_Params_Data::PaymentRequest_Retry_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_CanMakePayment_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_CanMakePayment_Params_Data* object = static_cast<const PaymentRequest_CanMakePayment_Params_Data*>(data);

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

PaymentRequest_CanMakePayment_Params_Data::PaymentRequest_CanMakePayment_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentRequest_HasEnrolledInstrument_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentRequest_HasEnrolledInstrument_Params_Data* object = static_cast<const PaymentRequest_HasEnrolledInstrument_Params_Data*>(data);

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

PaymentRequest_HasEnrolledInstrument_Params_Data::PaymentRequest_HasEnrolledInstrument_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#if defined(_MSC_VER)
#pragma warning(pop)
#endif