// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/net_log.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

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


enum class NetLogCaptureMode : int32_t {
  
  DEFAULT,
  
  INCLUDE_COOKIES_AND_CREDENTIALS,
  
  INCLUDE_SOCKET_BYTES,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, NetLogCaptureMode value);
inline bool IsKnownEnumValue(NetLogCaptureMode value) {
  return internal::NetLogCaptureMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NetLogExporterInterfaceBase {};

using NetLogExporterPtrDataView =
    mojo::InterfacePtrDataView<NetLogExporterInterfaceBase>;
using NetLogExporterRequestDataView =
    mojo::InterfaceRequestDataView<NetLogExporterInterfaceBase>;
using NetLogExporterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetLogExporterInterfaceBase>;
using NetLogExporterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetLogExporterInterfaceBase>;


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::NetLogCaptureMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::NetLogCaptureMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::NetLogCaptureMode, ::network::mojom::NetLogCaptureMode> {
  static ::network::mojom::NetLogCaptureMode ToMojom(::network::mojom::NetLogCaptureMode input) { return input; }
  static bool FromMojom(::network::mojom::NetLogCaptureMode input, ::network::mojom::NetLogCaptureMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetLogCaptureMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::NetLogCaptureMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::NetLogCaptureMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_SHARED_H_