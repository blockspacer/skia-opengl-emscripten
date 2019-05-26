// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class ConnectionType : int32_t {
  
  CONNECTION_UNKNOWN = 0,
  
  CONNECTION_ETHERNET = 1,
  
  CONNECTION_WIFI = 2,
  
  CONNECTION_2G = 3,
  
  CONNECTION_3G = 4,
  
  CONNECTION_4G = 5,
  
  CONNECTION_NONE = 6,
  
  CONNECTION_BLUETOOTH = 7,
  
  CONNECTION_LAST = ConnectionType::CONNECTION_BLUETOOTH,
  kMinValue = 0,
  kMaxValue = 7,
};

 std::ostream& operator<<(std::ostream& os, ConnectionType value);
inline bool IsKnownEnumValue(ConnectionType value) {
  return internal::ConnectionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ConnectionSubtype : int32_t {
  
  SUBTYPE_UNKNOWN = 0,
  
  SUBTYPE_NONE,
  
  SUBTYPE_OTHER,
  
  SUBTYPE_GSM,
  
  SUBTYPE_IDEN,
  
  SUBTYPE_CDMA,
  
  SUBTYPE_1XRTT,
  
  SUBTYPE_GPRS,
  
  SUBTYPE_EDGE,
  
  SUBTYPE_UMTS,
  
  SUBTYPE_EVDO_REV_0,
  
  SUBTYPE_EVDO_REV_A,
  
  SUBTYPE_HSPA,
  
  SUBTYPE_EVDO_REV_B,
  
  SUBTYPE_HSDPA,
  
  SUBTYPE_HSUPA,
  
  SUBTYPE_EHRPD,
  
  SUBTYPE_HSPAP,
  
  SUBTYPE_LTE,
  
  SUBTYPE_LTE_ADVANCED,
  
  SUBTYPE_BLUETOOTH_1_2,
  
  SUBTYPE_BLUETOOTH_2_1,
  
  SUBTYPE_BLUETOOTH_3_0,
  
  SUBTYPE_BLUETOOTH_4_0,
  
  SUBTYPE_ETHERNET,
  
  SUBTYPE_FAST_ETHERNET,
  
  SUBTYPE_GIGABIT_ETHERNET,
  
  SUBTYPE_10_GIGABIT_ETHERNET,
  
  SUBTYPE_WIFI_B,
  
  SUBTYPE_WIFI_G,
  
  SUBTYPE_WIFI_N,
  
  SUBTYPE_WIFI_AC,
  
  SUBTYPE_WIFI_AD,
  
  SUBTYPE_LAST = ConnectionSubtype::SUBTYPE_WIFI_AD,
  kMinValue = 0,
  kMaxValue = 32,
};

 std::ostream& operator<<(std::ostream& os, ConnectionSubtype value);
inline bool IsKnownEnumValue(ConnectionSubtype value) {
  return internal::ConnectionSubtype_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NetworkChangeManagerClientInterfaceBase {};

using NetworkChangeManagerClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkChangeManagerClientInterfaceBase>;
using NetworkChangeManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkChangeManagerClientInterfaceBase>;
using NetworkChangeManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkChangeManagerClientInterfaceBase>;
using NetworkChangeManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkChangeManagerClientInterfaceBase>;
class NetworkChangeManagerInterfaceBase {};

using NetworkChangeManagerPtrDataView =
    mojo::InterfacePtrDataView<NetworkChangeManagerInterfaceBase>;
using NetworkChangeManagerRequestDataView =
    mojo::InterfaceRequestDataView<NetworkChangeManagerInterfaceBase>;
using NetworkChangeManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkChangeManagerInterfaceBase>;
using NetworkChangeManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkChangeManagerInterfaceBase>;


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ConnectionType>
    : public mojo::internal::EnumHashImpl<::network::mojom::ConnectionType> {};

template <>
struct hash<::network::mojom::ConnectionSubtype>
    : public mojo::internal::EnumHashImpl<::network::mojom::ConnectionSubtype> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ConnectionType, ::network::mojom::ConnectionType> {
  static ::network::mojom::ConnectionType ToMojom(::network::mojom::ConnectionType input) { return input; }
  static bool FromMojom(::network::mojom::ConnectionType input, ::network::mojom::ConnectionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ConnectionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ConnectionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ConnectionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::ConnectionSubtype, ::network::mojom::ConnectionSubtype> {
  static ::network::mojom::ConnectionSubtype ToMojom(::network::mojom::ConnectionSubtype input) { return input; }
  static bool FromMojom(::network::mojom::ConnectionSubtype input, ::network::mojom::ConnectionSubtype* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ConnectionSubtype, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ConnectionSubtype, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ConnectionSubtype>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_H_