// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "components/payments/mojom/payment_request_data.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "components/payments/mojom/payment_request_data.mojom-params-data.h"
namespace payments {
namespace mojom {

namespace internal {


// static
bool PaymentAddress_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentAddress_Data* object = static_cast<const PaymentAddress_Data*>(data);

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
          object->country, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams country_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->country, validation_context,
                                         &country_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->address_line, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams address_line_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->address_line, validation_context,
                                         &address_line_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->region, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams region_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->region, validation_context,
                                         &region_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->city, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams city_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->city, validation_context,
                                         &city_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dependent_locality, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams dependent_locality_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->dependent_locality, validation_context,
                                         &dependent_locality_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->postal_code, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams postal_code_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->postal_code, validation_context,
                                         &postal_code_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sorting_code, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sorting_code_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sorting_code, validation_context,
                                         &sorting_code_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->organization, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams organization_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->organization, validation_context,
                                         &organization_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->recipient, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams recipient_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->recipient, validation_context,
                                         &recipient_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->phone, 10, validation_context)) {
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

PaymentAddress_Data::PaymentAddress_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentCurrencyAmount_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentCurrencyAmount_Data* object = static_cast<const PaymentCurrencyAmount_Data*>(data);

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
          object->currency, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams currency_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->currency, validation_context,
                                         &currency_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

PaymentCurrencyAmount_Data::PaymentCurrencyAmount_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PaymentValidationErrors_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PaymentValidationErrors_Data* object = static_cast<const PaymentValidationErrors_Data*>(data);

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
          object->error, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error, validation_context,
                                         &error_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->payer, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->payer, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->shipping_address, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->shipping_address, validation_context))
    return false;

  return true;
}

PaymentValidationErrors_Data::PaymentValidationErrors_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool PayerErrors_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PayerErrors_Data* object = static_cast<const PayerErrors_Data*>(data);

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
          object->email, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams email_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->email, validation_context,
                                         &email_validate_params)) {
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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->phone, 3, validation_context)) {
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

PayerErrors_Data::PayerErrors_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool AddressErrors_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AddressErrors_Data* object = static_cast<const AddressErrors_Data*>(data);

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
          object->address_line, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams address_line_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->address_line, validation_context,
                                         &address_line_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->city, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams city_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->city, validation_context,
                                         &city_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->country, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams country_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->country, validation_context,
                                         &country_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dependent_locality, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams dependent_locality_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->dependent_locality, validation_context,
                                         &dependent_locality_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->organization, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams organization_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->organization, validation_context,
                                         &organization_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->phone, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams phone_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->phone, validation_context,
                                         &phone_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->postal_code, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams postal_code_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->postal_code, validation_context,
                                         &postal_code_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->recipient, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams recipient_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->recipient, validation_context,
                                         &recipient_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->region, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams region_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->region, validation_context,
                                         &region_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sorting_code, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams sorting_code_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->sorting_code, validation_context,
                                         &sorting_code_validate_params)) {
    return false;
  }

  return true;
}

AddressErrors_Data::AddressErrors_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#if defined(_MSC_VER)
#pragma warning(pop)
#endif