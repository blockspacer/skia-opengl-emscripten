// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/network/public/mojom/network_change_manager.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "services/network/public/mojom/network_change_manager.mojom-params-data.h"
namespace network {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ConnectionType value) {
  switch(value) {
    case ConnectionType::CONNECTION_UNKNOWN:
      return os << "ConnectionType::CONNECTION_UNKNOWN";
    case ConnectionType::CONNECTION_ETHERNET:
      return os << "ConnectionType::CONNECTION_ETHERNET";
    case ConnectionType::CONNECTION_WIFI:
      return os << "ConnectionType::CONNECTION_WIFI";
    case ConnectionType::CONNECTION_2G:
      return os << "ConnectionType::CONNECTION_2G";
    case ConnectionType::CONNECTION_3G:
      return os << "ConnectionType::CONNECTION_3G";
    case ConnectionType::CONNECTION_4G:
      return os << "ConnectionType::CONNECTION_4G";
    case ConnectionType::CONNECTION_NONE:
      return os << "ConnectionType::CONNECTION_NONE";
    case ConnectionType::CONNECTION_BLUETOOTH:
      return os << "ConnectionType::{CONNECTION_BLUETOOTH, CONNECTION_LAST}";
    default:
      return os << "Unknown ConnectionType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ConnectionSubtype value) {
  switch(value) {
    case ConnectionSubtype::SUBTYPE_UNKNOWN:
      return os << "ConnectionSubtype::SUBTYPE_UNKNOWN";
    case ConnectionSubtype::SUBTYPE_NONE:
      return os << "ConnectionSubtype::SUBTYPE_NONE";
    case ConnectionSubtype::SUBTYPE_OTHER:
      return os << "ConnectionSubtype::SUBTYPE_OTHER";
    case ConnectionSubtype::SUBTYPE_GSM:
      return os << "ConnectionSubtype::SUBTYPE_GSM";
    case ConnectionSubtype::SUBTYPE_IDEN:
      return os << "ConnectionSubtype::SUBTYPE_IDEN";
    case ConnectionSubtype::SUBTYPE_CDMA:
      return os << "ConnectionSubtype::SUBTYPE_CDMA";
    case ConnectionSubtype::SUBTYPE_1XRTT:
      return os << "ConnectionSubtype::SUBTYPE_1XRTT";
    case ConnectionSubtype::SUBTYPE_GPRS:
      return os << "ConnectionSubtype::SUBTYPE_GPRS";
    case ConnectionSubtype::SUBTYPE_EDGE:
      return os << "ConnectionSubtype::SUBTYPE_EDGE";
    case ConnectionSubtype::SUBTYPE_UMTS:
      return os << "ConnectionSubtype::SUBTYPE_UMTS";
    case ConnectionSubtype::SUBTYPE_EVDO_REV_0:
      return os << "ConnectionSubtype::SUBTYPE_EVDO_REV_0";
    case ConnectionSubtype::SUBTYPE_EVDO_REV_A:
      return os << "ConnectionSubtype::SUBTYPE_EVDO_REV_A";
    case ConnectionSubtype::SUBTYPE_HSPA:
      return os << "ConnectionSubtype::SUBTYPE_HSPA";
    case ConnectionSubtype::SUBTYPE_EVDO_REV_B:
      return os << "ConnectionSubtype::SUBTYPE_EVDO_REV_B";
    case ConnectionSubtype::SUBTYPE_HSDPA:
      return os << "ConnectionSubtype::SUBTYPE_HSDPA";
    case ConnectionSubtype::SUBTYPE_HSUPA:
      return os << "ConnectionSubtype::SUBTYPE_HSUPA";
    case ConnectionSubtype::SUBTYPE_EHRPD:
      return os << "ConnectionSubtype::SUBTYPE_EHRPD";
    case ConnectionSubtype::SUBTYPE_HSPAP:
      return os << "ConnectionSubtype::SUBTYPE_HSPAP";
    case ConnectionSubtype::SUBTYPE_LTE:
      return os << "ConnectionSubtype::SUBTYPE_LTE";
    case ConnectionSubtype::SUBTYPE_LTE_ADVANCED:
      return os << "ConnectionSubtype::SUBTYPE_LTE_ADVANCED";
    case ConnectionSubtype::SUBTYPE_BLUETOOTH_1_2:
      return os << "ConnectionSubtype::SUBTYPE_BLUETOOTH_1_2";
    case ConnectionSubtype::SUBTYPE_BLUETOOTH_2_1:
      return os << "ConnectionSubtype::SUBTYPE_BLUETOOTH_2_1";
    case ConnectionSubtype::SUBTYPE_BLUETOOTH_3_0:
      return os << "ConnectionSubtype::SUBTYPE_BLUETOOTH_3_0";
    case ConnectionSubtype::SUBTYPE_BLUETOOTH_4_0:
      return os << "ConnectionSubtype::SUBTYPE_BLUETOOTH_4_0";
    case ConnectionSubtype::SUBTYPE_ETHERNET:
      return os << "ConnectionSubtype::SUBTYPE_ETHERNET";
    case ConnectionSubtype::SUBTYPE_FAST_ETHERNET:
      return os << "ConnectionSubtype::SUBTYPE_FAST_ETHERNET";
    case ConnectionSubtype::SUBTYPE_GIGABIT_ETHERNET:
      return os << "ConnectionSubtype::SUBTYPE_GIGABIT_ETHERNET";
    case ConnectionSubtype::SUBTYPE_10_GIGABIT_ETHERNET:
      return os << "ConnectionSubtype::SUBTYPE_10_GIGABIT_ETHERNET";
    case ConnectionSubtype::SUBTYPE_WIFI_B:
      return os << "ConnectionSubtype::SUBTYPE_WIFI_B";
    case ConnectionSubtype::SUBTYPE_WIFI_G:
      return os << "ConnectionSubtype::SUBTYPE_WIFI_G";
    case ConnectionSubtype::SUBTYPE_WIFI_N:
      return os << "ConnectionSubtype::SUBTYPE_WIFI_N";
    case ConnectionSubtype::SUBTYPE_WIFI_AC:
      return os << "ConnectionSubtype::SUBTYPE_WIFI_AC";
    case ConnectionSubtype::SUBTYPE_WIFI_AD:
      return os << "ConnectionSubtype::{SUBTYPE_WIFI_AD, SUBTYPE_LAST}";
    default:
      return os << "Unknown ConnectionSubtype value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool NetworkChangeManagerClient_OnInitialConnectionType_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkChangeManagerClient_OnInitialConnectionType_Params_Data* object = static_cast<const NetworkChangeManagerClient_OnInitialConnectionType_Params_Data*>(data);

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


  if (!::network::mojom::internal::ConnectionType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

NetworkChangeManagerClient_OnInitialConnectionType_Params_Data::NetworkChangeManagerClient_OnInitialConnectionType_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetworkChangeManagerClient_OnNetworkChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkChangeManagerClient_OnNetworkChanged_Params_Data* object = static_cast<const NetworkChangeManagerClient_OnNetworkChanged_Params_Data*>(data);

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


  if (!::network::mojom::internal::ConnectionType_Data
        ::Validate(object->type, validation_context))
    return false;

  return true;
}

NetworkChangeManagerClient_OnNetworkChanged_Params_Data::NetworkChangeManagerClient_OnNetworkChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool NetworkChangeManager_RequestNotifications_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkChangeManager_RequestNotifications_Params_Data* object = static_cast<const NetworkChangeManager_RequestNotifications_Params_Data*>(data);

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
          object->client_ptr, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client_ptr,
                                                 validation_context)) {
    return false;
  }

  return true;
}

NetworkChangeManager_RequestNotifications_Params_Data::NetworkChangeManager_RequestNotifications_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

#if defined(_MSC_VER)
#pragma warning(pop)
#endif