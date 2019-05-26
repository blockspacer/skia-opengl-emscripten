// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_REFERRER_POLICY_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_REFERRER_POLICY_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/referrer_policy.mojom-shared-internal.h"

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


enum class ReferrerPolicy : int32_t {
  
  kAlways,
  
  kDefault,
  
  kNoReferrerWhenDowngrade,
  
  kNever,
  
  kOrigin,
  
  kOriginWhenCrossOrigin,
  
  kNoReferrerWhenDowngradeOriginWhenCrossOrigin,
  
  kSameOrigin,
  
  kStrictOrigin,
  
  kLast = ReferrerPolicy::kStrictOrigin,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, ReferrerPolicy value);
inline bool IsKnownEnumValue(ReferrerPolicy value) {
  return internal::ReferrerPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ReferrerPolicy>
    : public mojo::internal::EnumHashImpl<::network::mojom::ReferrerPolicy> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ReferrerPolicy, ::network::mojom::ReferrerPolicy> {
  static ::network::mojom::ReferrerPolicy ToMojom(::network::mojom::ReferrerPolicy input) { return input; }
  static bool FromMojom(::network::mojom::ReferrerPolicy input, ::network::mojom::ReferrerPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ReferrerPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ReferrerPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ReferrerPolicy>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_REFERRER_POLICY_MOJOM_SHARED_H_