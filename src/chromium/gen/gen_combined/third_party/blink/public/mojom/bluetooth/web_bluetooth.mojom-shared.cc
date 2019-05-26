// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WebBluetoothResult value) {
  switch(value) {
    case WebBluetoothResult::SUCCESS:
      return os << "WebBluetoothResult::SUCCESS";
    case WebBluetoothResult::GATT_INVALID_ATTRIBUTE_LENGTH:
      return os << "WebBluetoothResult::GATT_INVALID_ATTRIBUTE_LENGTH";
    case WebBluetoothResult::SERVICE_NO_LONGER_EXISTS:
      return os << "WebBluetoothResult::SERVICE_NO_LONGER_EXISTS";
    case WebBluetoothResult::CHARACTERISTIC_NO_LONGER_EXISTS:
      return os << "WebBluetoothResult::CHARACTERISTIC_NO_LONGER_EXISTS";
    case WebBluetoothResult::PROMPT_CANCELED:
      return os << "WebBluetoothResult::PROMPT_CANCELED";
    case WebBluetoothResult::CONNECT_ALREADY_IN_PROGRESS:
      return os << "WebBluetoothResult::CONNECT_ALREADY_IN_PROGRESS";
    case WebBluetoothResult::CONNECT_AUTH_CANCELED:
      return os << "WebBluetoothResult::CONNECT_AUTH_CANCELED";
    case WebBluetoothResult::CONNECT_AUTH_FAILED:
      return os << "WebBluetoothResult::CONNECT_AUTH_FAILED";
    case WebBluetoothResult::CONNECT_AUTH_REJECTED:
      return os << "WebBluetoothResult::CONNECT_AUTH_REJECTED";
    case WebBluetoothResult::CONNECT_AUTH_TIMEOUT:
      return os << "WebBluetoothResult::CONNECT_AUTH_TIMEOUT";
    case WebBluetoothResult::CONNECT_UNKNOWN_ERROR:
      return os << "WebBluetoothResult::CONNECT_UNKNOWN_ERROR";
    case WebBluetoothResult::CONNECT_UNKNOWN_FAILURE:
      return os << "WebBluetoothResult::CONNECT_UNKNOWN_FAILURE";
    case WebBluetoothResult::CONNECT_UNSUPPORTED_DEVICE:
      return os << "WebBluetoothResult::CONNECT_UNSUPPORTED_DEVICE";
    case WebBluetoothResult::DEVICE_NO_LONGER_IN_RANGE:
      return os << "WebBluetoothResult::DEVICE_NO_LONGER_IN_RANGE";
    case WebBluetoothResult::GATT_NOT_PAIRED:
      return os << "WebBluetoothResult::GATT_NOT_PAIRED";
    case WebBluetoothResult::GATT_OPERATION_IN_PROGRESS:
      return os << "WebBluetoothResult::GATT_OPERATION_IN_PROGRESS";
    case WebBluetoothResult::NO_BLUETOOTH_ADAPTER:
      return os << "WebBluetoothResult::NO_BLUETOOTH_ADAPTER";
    case WebBluetoothResult::CHOSEN_DEVICE_VANISHED:
      return os << "WebBluetoothResult::CHOSEN_DEVICE_VANISHED";
    case WebBluetoothResult::CHOOSER_CANCELLED:
      return os << "WebBluetoothResult::CHOOSER_CANCELLED";
    case WebBluetoothResult::CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED:
      return os << "WebBluetoothResult::CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED";
    case WebBluetoothResult::CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED:
      return os << "WebBluetoothResult::CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED";
    case WebBluetoothResult::CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN:
      return os << "WebBluetoothResult::CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN";
    case WebBluetoothResult::SERVICE_NOT_FOUND:
      return os << "WebBluetoothResult::SERVICE_NOT_FOUND";
    case WebBluetoothResult::NO_SERVICES_FOUND:
      return os << "WebBluetoothResult::NO_SERVICES_FOUND";
    case WebBluetoothResult::CHARACTERISTIC_NOT_FOUND:
      return os << "WebBluetoothResult::CHARACTERISTIC_NOT_FOUND";
    case WebBluetoothResult::NO_CHARACTERISTICS_FOUND:
      return os << "WebBluetoothResult::NO_CHARACTERISTICS_FOUND";
    case WebBluetoothResult::DESCRIPTOR_NOT_FOUND:
      return os << "WebBluetoothResult::DESCRIPTOR_NOT_FOUND";
    case WebBluetoothResult::NO_DESCRIPTORS_FOUND:
      return os << "WebBluetoothResult::NO_DESCRIPTORS_FOUND";
    case WebBluetoothResult::WEB_BLUETOOTH_NOT_SUPPORTED:
      return os << "WebBluetoothResult::WEB_BLUETOOTH_NOT_SUPPORTED";
    case WebBluetoothResult::BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE:
      return os << "WebBluetoothResult::BLUETOOTH_LOW_ENERGY_NOT_AVAILABLE";
    case WebBluetoothResult::GATT_UNKNOWN_ERROR:
      return os << "WebBluetoothResult::GATT_UNKNOWN_ERROR";
    case WebBluetoothResult::GATT_UNKNOWN_FAILURE:
      return os << "WebBluetoothResult::GATT_UNKNOWN_FAILURE";
    case WebBluetoothResult::GATT_NOT_PERMITTED:
      return os << "WebBluetoothResult::GATT_NOT_PERMITTED";
    case WebBluetoothResult::GATT_NOT_SUPPORTED:
      return os << "WebBluetoothResult::GATT_NOT_SUPPORTED";
    case WebBluetoothResult::GATT_UNTRANSLATED_ERROR_CODE:
      return os << "WebBluetoothResult::GATT_UNTRANSLATED_ERROR_CODE";
    case WebBluetoothResult::GATT_NOT_AUTHORIZED:
      return os << "WebBluetoothResult::GATT_NOT_AUTHORIZED";
    case WebBluetoothResult::BLOCKLISTED_DESCRIPTOR_UUID:
      return os << "WebBluetoothResult::BLOCKLISTED_DESCRIPTOR_UUID";
    case WebBluetoothResult::BLOCKLISTED_CHARACTERISTIC_UUID:
      return os << "WebBluetoothResult::BLOCKLISTED_CHARACTERISTIC_UUID";
    case WebBluetoothResult::BLOCKLISTED_READ:
      return os << "WebBluetoothResult::BLOCKLISTED_READ";
    case WebBluetoothResult::BLOCKLISTED_WRITE:
      return os << "WebBluetoothResult::BLOCKLISTED_WRITE";
    case WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_ANY_SERVICE:
      return os << "WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_ANY_SERVICE";
    case WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_SERVICE:
      return os << "WebBluetoothResult::NOT_ALLOWED_TO_ACCESS_SERVICE";
    case WebBluetoothResult::REQUEST_DEVICE_WITH_BLOCKLISTED_UUID:
      return os << "WebBluetoothResult::REQUEST_DEVICE_WITH_BLOCKLISTED_UUID";
    case WebBluetoothResult::REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME:
      return os << "WebBluetoothResult::REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME";
    case WebBluetoothResult::DESCRIPTOR_NO_LONGER_EXISTS:
      return os << "WebBluetoothResult::DESCRIPTOR_NO_LONGER_EXISTS";
    case WebBluetoothResult::SCANNING_BLOCKED:
      return os << "WebBluetoothResult::SCANNING_BLOCKED";
    default:
      return os << "Unknown WebBluetoothResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, WebBluetoothGATTQueryQuantity value) {
  switch(value) {
    case WebBluetoothGATTQueryQuantity::SINGLE:
      return os << "WebBluetoothGATTQueryQuantity::SINGLE";
    case WebBluetoothGATTQueryQuantity::MULTIPLE:
      return os << "WebBluetoothGATTQueryQuantity::MULTIPLE";
    default:
      return os << "Unknown WebBluetoothGATTQueryQuantity value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool RequestScanningStartResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const RequestScanningStartResult_Data* object = static_cast<const RequestScanningStartResult_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case RequestScanningStartResult_Tag::ERROR_RESULT: {


      if (!::blink::mojom::internal::WebBluetoothResult_Data
            ::Validate(object->data.f_error_result, validation_context))
        return false;
      return true;
    }
    case RequestScanningStartResult_Tag::OPTIONS: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_options, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_options, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in RequestScanningStartResult");
      return false;
    }
  }
}


// static
bool WebBluetoothLeScanFilter_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothLeScanFilter_Data* object = static_cast<const WebBluetoothLeScanFilter_Data*>(data);

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

  const mojo::internal::ContainerValidateParams services_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->services, validation_context,
                                         &services_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams name_prefix_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name_prefix, validation_context,
                                         &name_prefix_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothLeScanFilter_Data::WebBluetoothLeScanFilter_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothRequestDeviceOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothRequestDeviceOptions_Data* object = static_cast<const WebBluetoothRequestDeviceOptions_Data*>(data);

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

  const mojo::internal::ContainerValidateParams filters_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->filters, validation_context,
                                         &filters_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->optional_services, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams optional_services_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->optional_services, validation_context,
                                         &optional_services_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothRequestDeviceOptions_Data::WebBluetoothRequestDeviceOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothRequestLEScanOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothRequestLEScanOptions_Data* object = static_cast<const WebBluetoothRequestLEScanOptions_Data*>(data);

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

  const mojo::internal::ContainerValidateParams filters_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->filters, validation_context,
                                         &filters_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothRequestLEScanOptions_Data::WebBluetoothRequestLEScanOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothDeviceId_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothDeviceId_Data* object = static_cast<const WebBluetoothDeviceId_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothDeviceId_Data::WebBluetoothDeviceId_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothDevice_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothDevice_Data* object = static_cast<const WebBluetoothDevice_Data*>(data);

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
          object->id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->id, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothDevice_Data::WebBluetoothDevice_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothRemoteGATTService_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothRemoteGATTService_Data* object = static_cast<const WebBluetoothRemoteGATTService_Data*>(data);

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
          object->instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instance_id, validation_context,
                                         &instance_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuid, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->uuid, validation_context))
    return false;

  return true;
}

WebBluetoothRemoteGATTService_Data::WebBluetoothRemoteGATTService_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothRemoteGATTCharacteristic_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothRemoteGATTCharacteristic_Data* object = static_cast<const WebBluetoothRemoteGATTCharacteristic_Data*>(data);

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
          object->instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instance_id, validation_context,
                                         &instance_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuid, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->uuid, validation_context))
    return false;

  return true;
}

WebBluetoothRemoteGATTCharacteristic_Data::WebBluetoothRemoteGATTCharacteristic_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothScanResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothScanResult_Data* object = static_cast<const WebBluetoothScanResult_Data*>(data);

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
          object->device, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuids, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams uuids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->uuids, validation_context,
                                         &uuids_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->manufacturer_data, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams manufacturer_data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->manufacturer_data, validation_context,
                                         &manufacturer_data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_data, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->service_data, validation_context,
                                         &service_data_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothScanResult_Data::WebBluetoothScanResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothRemoteGATTDescriptor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothRemoteGATTDescriptor_Data* object = static_cast<const WebBluetoothRemoteGATTDescriptor_Data*>(data);

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
          object->instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->instance_id, validation_context,
                                         &instance_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuid, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->uuid, validation_context))
    return false;

  return true;
}

WebBluetoothRemoteGATTDescriptor_Data::WebBluetoothRemoteGATTDescriptor_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RequestDevice_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RequestDevice_Params_Data* object = static_cast<const WebBluetoothService_RequestDevice_Params_Data*>(data);

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

WebBluetoothService_RequestDevice_Params_Data::WebBluetoothService_RequestDevice_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RequestDevice_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RequestDevice_ResponseParams_Data* object = static_cast<const WebBluetoothService_RequestDevice_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->device, validation_context))
    return false;

  return true;
}

WebBluetoothService_RequestDevice_ResponseParams_Data::WebBluetoothService_RequestDevice_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServerConnect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServerConnect_Params_Data* object = static_cast<const WebBluetoothService_RemoteServerConnect_Params_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device_id, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteServerConnect_Params_Data::WebBluetoothService_RemoteServerConnect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServerConnect_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServerConnect_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteServerConnect_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteServerConnect_ResponseParams_Data::WebBluetoothService_RemoteServerConnect_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServerDisconnect_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServerDisconnect_Params_Data* object = static_cast<const WebBluetoothService_RemoteServerDisconnect_Params_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device_id, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteServerDisconnect_Params_Data::WebBluetoothService_RemoteServerDisconnect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* object = static_cast<const WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data*>(data);

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
          object->device_id, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device_id, validation_context))
    return false;


  if (!::blink::mojom::internal::WebBluetoothGATTQueryQuantity_Data
        ::Validate(object->quantity, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->services_uuid, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams services_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->services, validation_context,
                                         &services_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* object = static_cast<const WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data*>(data);

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
          object->service_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_instance_id, validation_context,
                                         &service_instance_id_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::WebBluetoothGATTQueryQuantity_Data
        ::Validate(object->quantity, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->characteristics_uuid, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams characteristics_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristics, validation_context,
                                         &characteristics_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicReadValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicReadValue_Params_Data*>(data);

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
          object->characteristic_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_instance_id, validation_context,
                                         &characteristic_instance_id_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteCharacteristicReadValue_Params_Data::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data*>(data);

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
          object->characteristic_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_instance_id, validation_context,
                                         &characteristic_instance_id_validate_params)) {
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

WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data*>(data);

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
          object->characteristic_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_instance_id, validation_context,
                                         &characteristic_instance_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data*>(data);

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
          object->characteristic_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_instance_id, validation_context,
                                         &characteristic_instance_id_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data*>(data);

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

WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data*>(data);

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
          object->characteristics_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristics_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristics_instance_id, validation_context,
                                         &characteristics_instance_id_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::WebBluetoothGATTQueryQuantity_Data
        ::Validate(object->quantity, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->descriptor_uuid, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams descriptors_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptors, validation_context,
                                         &descriptors_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteDescriptorReadValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteDescriptorReadValue_Params_Data* object = static_cast<const WebBluetoothService_RemoteDescriptorReadValue_Params_Data*>(data);

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
          object->descriptor_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams descriptor_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptor_instance_id, validation_context,
                                         &descriptor_instance_id_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteDescriptorReadValue_Params_Data::WebBluetoothService_RemoteDescriptorReadValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteDescriptorWriteValue_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* object = static_cast<const WebBluetoothService_RemoteDescriptorWriteValue_Params_Data*>(data);

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
          object->descriptor_instance_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams descriptor_instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptor_instance_id, validation_context,
                                         &descriptor_instance_id_validate_params)) {
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

WebBluetoothService_RemoteDescriptorWriteValue_Params_Data::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* object = static_cast<const WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data*>(data);

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


  if (!::blink::mojom::internal::WebBluetoothResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RequestScanningStart_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RequestScanningStart_Params_Data* object = static_cast<const WebBluetoothService_RequestScanningStart_Params_Data*>(data);

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

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

WebBluetoothService_RequestScanningStart_Params_Data::WebBluetoothService_RequestScanningStart_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothService_RequestScanningStart_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothService_RequestScanningStart_ResponseParams_Data* object = static_cast<const WebBluetoothService_RequestScanningStart_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->result, validation_context))
    return false;

  return true;
}

WebBluetoothService_RequestScanningStart_ResponseParams_Data::WebBluetoothService_RequestScanningStart_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothServerClient_GATTServerDisconnected_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothServerClient_GATTServerDisconnected_Params_Data* object = static_cast<const WebBluetoothServerClient_GATTServerDisconnected_Params_Data*>(data);

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

WebBluetoothServerClient_GATTServerDisconnected_Params_Data::WebBluetoothServerClient_GATTServerDisconnected_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* object = static_cast<const WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data*>(data);

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
          object->value, 1, validation_context)) {
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

WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebBluetoothScanClient_ScanEvent_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebBluetoothScanClient_ScanEvent_Params_Data* object = static_cast<const WebBluetoothScanClient_ScanEvent_Params_Data*>(data);

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

WebBluetoothScanClient_ScanEvent_Params_Data::WebBluetoothScanClient_ScanEvent_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif