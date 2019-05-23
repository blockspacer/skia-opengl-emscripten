// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_FAMILY_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_FAMILY_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/address_family.mojom-shared-internal.h"

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


enum class AddressFamily : int32_t {
  
  UNSPECIFIED,
  
  IPV4,
  
  IPV6,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AddressFamily value);
inline bool IsKnownEnumValue(AddressFamily value) {
  return internal::AddressFamily_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::AddressFamily>
    : public mojo::internal::EnumHashImpl<::network::mojom::AddressFamily> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::AddressFamily, ::network::mojom::AddressFamily> {
  static ::network::mojom::AddressFamily ToMojom(::network::mojom::AddressFamily input) { return input; }
  static bool FromMojom(::network::mojom::AddressFamily input, ::network::mojom::AddressFamily* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::AddressFamily, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::AddressFamily, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::AddressFamily>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_FAMILY_MOJOM_SHARED_H_