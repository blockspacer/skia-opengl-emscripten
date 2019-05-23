// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/device/public/mojom/bluetooth_system.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/device/public/mojom/bluetooth_system.mojom-params-data.h"
namespace device {
namespace mojom {

std::ostream& operator<<(std::ostream& os, BluetoothDeviceInfo_ConnectionState value) {
  switch(value) {
    case BluetoothDeviceInfo_ConnectionState::kNotConnected:
      return os << "BluetoothDeviceInfo_ConnectionState::kNotConnected";
    case BluetoothDeviceInfo_ConnectionState::kConnecting:
      return os << "BluetoothDeviceInfo_ConnectionState::kConnecting";
    case BluetoothDeviceInfo_ConnectionState::kConnected:
      return os << "BluetoothDeviceInfo_ConnectionState::kConnected";
    default:
      return os << "Unknown BluetoothDeviceInfo_ConnectionState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BluetoothDeviceInfo_DeviceType value) {
  switch(value) {
    case BluetoothDeviceInfo_DeviceType::kUnknown:
      return os << "BluetoothDeviceInfo_DeviceType::kUnknown";
    case BluetoothDeviceInfo_DeviceType::kComputer:
      return os << "BluetoothDeviceInfo_DeviceType::kComputer";
    case BluetoothDeviceInfo_DeviceType::kPhone:
      return os << "BluetoothDeviceInfo_DeviceType::kPhone";
    case BluetoothDeviceInfo_DeviceType::kModem:
      return os << "BluetoothDeviceInfo_DeviceType::kModem";
    case BluetoothDeviceInfo_DeviceType::kAudio:
      return os << "BluetoothDeviceInfo_DeviceType::kAudio";
    case BluetoothDeviceInfo_DeviceType::kCarAudio:
      return os << "BluetoothDeviceInfo_DeviceType::kCarAudio";
    case BluetoothDeviceInfo_DeviceType::kVideo:
      return os << "BluetoothDeviceInfo_DeviceType::kVideo";
    case BluetoothDeviceInfo_DeviceType::kPeripheral:
      return os << "BluetoothDeviceInfo_DeviceType::kPeripheral";
    case BluetoothDeviceInfo_DeviceType::kJoystick:
      return os << "BluetoothDeviceInfo_DeviceType::kJoystick";
    case BluetoothDeviceInfo_DeviceType::kGamepad:
      return os << "BluetoothDeviceInfo_DeviceType::kGamepad";
    case BluetoothDeviceInfo_DeviceType::kKeyboard:
      return os << "BluetoothDeviceInfo_DeviceType::kKeyboard";
    case BluetoothDeviceInfo_DeviceType::kMouse:
      return os << "BluetoothDeviceInfo_DeviceType::kMouse";
    case BluetoothDeviceInfo_DeviceType::kTablet:
      return os << "BluetoothDeviceInfo_DeviceType::kTablet";
    case BluetoothDeviceInfo_DeviceType::kKeyboardMouseCombo:
      return os << "BluetoothDeviceInfo_DeviceType::kKeyboardMouseCombo";
    default:
      return os << "Unknown BluetoothDeviceInfo_DeviceType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BluetoothSystem_State value) {
  switch(value) {
    case BluetoothSystem_State::kUnsupported:
      return os << "BluetoothSystem_State::kUnsupported";
    case BluetoothSystem_State::kUnavailable:
      return os << "BluetoothSystem_State::kUnavailable";
    case BluetoothSystem_State::kPoweredOff:
      return os << "BluetoothSystem_State::kPoweredOff";
    case BluetoothSystem_State::kTransitioning:
      return os << "BluetoothSystem_State::kTransitioning";
    case BluetoothSystem_State::kPoweredOn:
      return os << "BluetoothSystem_State::kPoweredOn";
    default:
      return os << "Unknown BluetoothSystem_State value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BluetoothSystem_SetPoweredResult value) {
  switch(value) {
    case BluetoothSystem_SetPoweredResult::kSuccess:
      return os << "BluetoothSystem_SetPoweredResult::kSuccess";
    case BluetoothSystem_SetPoweredResult::kFailedUnknownReason:
      return os << "BluetoothSystem_SetPoweredResult::kFailedUnknownReason";
    case BluetoothSystem_SetPoweredResult::kFailedBluetoothUnavailable:
      return os << "BluetoothSystem_SetPoweredResult::kFailedBluetoothUnavailable";
    case BluetoothSystem_SetPoweredResult::kFailedInProgress:
      return os << "BluetoothSystem_SetPoweredResult::kFailedInProgress";
    default:
      return os << "Unknown BluetoothSystem_SetPoweredResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BluetoothSystem_ScanState value) {
  switch(value) {
    case BluetoothSystem_ScanState::kNotScanning:
      return os << "BluetoothSystem_ScanState::kNotScanning";
    case BluetoothSystem_ScanState::kTransitioning:
      return os << "BluetoothSystem_ScanState::kTransitioning";
    case BluetoothSystem_ScanState::kScanning:
      return os << "BluetoothSystem_ScanState::kScanning";
    default:
      return os << "Unknown BluetoothSystem_ScanState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BluetoothSystem_StartScanResult value) {
  switch(value) {
    case BluetoothSystem_StartScanResult::kSuccess:
      return os << "BluetoothSystem_StartScanResult::kSuccess";
    case BluetoothSystem_StartScanResult::kFailedUnknownReason:
      return os << "BluetoothSystem_StartScanResult::kFailedUnknownReason";
    case BluetoothSystem_StartScanResult::kFailedBluetoothUnavailable:
      return os << "BluetoothSystem_StartScanResult::kFailedBluetoothUnavailable";
    default:
      return os << "Unknown BluetoothSystem_StartScanResult value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BluetoothSystem_StopScanResult value) {
  switch(value) {
    case BluetoothSystem_StopScanResult::kSuccess:
      return os << "BluetoothSystem_StopScanResult::kSuccess";
    case BluetoothSystem_StopScanResult::kFailedUnknownReason:
      return os << "BluetoothSystem_StopScanResult::kFailedUnknownReason";
    case BluetoothSystem_StopScanResult::kFailedBluetoothUnavailable:
      return os << "BluetoothSystem_StopScanResult::kFailedBluetoothUnavailable";
    default:
      return os << "Unknown BluetoothSystem_StopScanResult value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool BluetoothAddress_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothAddress_Data* object = static_cast<const BluetoothAddress_Data*>(data);

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
  const mojo::internal::ContainerValidateParams address_validate_params(
      6, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->address, validation_context,
                                         &address_validate_params)) {
    return false;
  }

  return true;
}

BluetoothAddress_Data::BluetoothAddress_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothDeviceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothDeviceInfo_Data* object = static_cast<const BluetoothDeviceInfo_Data*>(data);

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
          object->address, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->address, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }


  if (!::device::mojom::internal::BluetoothDeviceInfo_ConnectionState_Data
        ::Validate(object->connection_state, validation_context))
    return false;


  if (!::device::mojom::internal::BluetoothDeviceInfo_DeviceType_Data
        ::Validate(object->device_type, validation_context))
    return false;

  return true;
}

BluetoothDeviceInfo_Data::BluetoothDeviceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystemFactory_Create_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystemFactory_Create_Params_Data* object = static_cast<const BluetoothSystemFactory_Create_Params_Data*>(data);

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
          object->system, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->system,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->system_client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->system_client,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BluetoothSystemFactory_Create_Params_Data::BluetoothSystemFactory_Create_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_GetState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_GetState_Params_Data* object = static_cast<const BluetoothSystem_GetState_Params_Data*>(data);

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

BluetoothSystem_GetState_Params_Data::BluetoothSystem_GetState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_GetState_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_GetState_ResponseParams_Data* object = static_cast<const BluetoothSystem_GetState_ResponseParams_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_State_Data
        ::Validate(object->state, validation_context))
    return false;

  return true;
}

BluetoothSystem_GetState_ResponseParams_Data::BluetoothSystem_GetState_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_SetPowered_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_SetPowered_Params_Data* object = static_cast<const BluetoothSystem_SetPowered_Params_Data*>(data);

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

BluetoothSystem_SetPowered_Params_Data::BluetoothSystem_SetPowered_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_SetPowered_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_SetPowered_ResponseParams_Data* object = static_cast<const BluetoothSystem_SetPowered_ResponseParams_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_SetPoweredResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

BluetoothSystem_SetPowered_ResponseParams_Data::BluetoothSystem_SetPowered_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_GetScanState_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_GetScanState_Params_Data* object = static_cast<const BluetoothSystem_GetScanState_Params_Data*>(data);

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

BluetoothSystem_GetScanState_Params_Data::BluetoothSystem_GetScanState_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_GetScanState_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_GetScanState_ResponseParams_Data* object = static_cast<const BluetoothSystem_GetScanState_ResponseParams_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_ScanState_Data
        ::Validate(object->scan_state, validation_context))
    return false;

  return true;
}

BluetoothSystem_GetScanState_ResponseParams_Data::BluetoothSystem_GetScanState_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_StartScan_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_StartScan_Params_Data* object = static_cast<const BluetoothSystem_StartScan_Params_Data*>(data);

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

BluetoothSystem_StartScan_Params_Data::BluetoothSystem_StartScan_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_StartScan_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_StartScan_ResponseParams_Data* object = static_cast<const BluetoothSystem_StartScan_ResponseParams_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_StartScanResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

BluetoothSystem_StartScan_ResponseParams_Data::BluetoothSystem_StartScan_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_StopScan_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_StopScan_Params_Data* object = static_cast<const BluetoothSystem_StopScan_Params_Data*>(data);

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

BluetoothSystem_StopScan_Params_Data::BluetoothSystem_StopScan_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_StopScan_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_StopScan_ResponseParams_Data* object = static_cast<const BluetoothSystem_StopScan_ResponseParams_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_StopScanResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

BluetoothSystem_StopScan_ResponseParams_Data::BluetoothSystem_StopScan_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_GetAvailableDevices_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_GetAvailableDevices_Params_Data* object = static_cast<const BluetoothSystem_GetAvailableDevices_Params_Data*>(data);

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

BluetoothSystem_GetAvailableDevices_Params_Data::BluetoothSystem_GetAvailableDevices_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystem_GetAvailableDevices_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystem_GetAvailableDevices_ResponseParams_Data* object = static_cast<const BluetoothSystem_GetAvailableDevices_ResponseParams_Data*>(data);

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
          object->devices, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->devices, validation_context,
                                         &devices_validate_params)) {
    return false;
  }

  return true;
}

BluetoothSystem_GetAvailableDevices_ResponseParams_Data::BluetoothSystem_GetAvailableDevices_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystemClient_OnStateChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystemClient_OnStateChanged_Params_Data* object = static_cast<const BluetoothSystemClient_OnStateChanged_Params_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_State_Data
        ::Validate(object->new_state, validation_context))
    return false;

  return true;
}

BluetoothSystemClient_OnStateChanged_Params_Data::BluetoothSystemClient_OnStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BluetoothSystemClient_OnScanStateChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BluetoothSystemClient_OnScanStateChanged_Params_Data* object = static_cast<const BluetoothSystemClient_OnScanStateChanged_Params_Data*>(data);

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


  if (!::device::mojom::internal::BluetoothSystem_ScanState_Data
        ::Validate(object->new_state, validation_context))
    return false;

  return true;
}

BluetoothSystemClient_OnScanStateChanged_Params_Data::BluetoothSystemClient_OnScanStateChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace device

#if defined(_MSC_VER)
#pragma warning(pop)
#endif