// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_REQUEST_CONTEXT_FRAME_TYPE_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_REQUEST_CONTEXT_FRAME_TYPE_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/request_context_frame_type.mojom-shared-internal.h"

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


enum class RequestContextFrameType : int32_t {
  
  kAuxiliary,
  
  kNested,
  
  kNone,
  
  kTopLevel,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, RequestContextFrameType value);
inline bool IsKnownEnumValue(RequestContextFrameType value) {
  return internal::RequestContextFrameType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::RequestContextFrameType>
    : public mojo::internal::EnumHashImpl<::network::mojom::RequestContextFrameType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::RequestContextFrameType, ::network::mojom::RequestContextFrameType> {
  static ::network::mojom::RequestContextFrameType ToMojom(::network::mojom::RequestContextFrameType input) { return input; }
  static bool FromMojom(::network::mojom::RequestContextFrameType input, ::network::mojom::RequestContextFrameType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::RequestContextFrameType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::RequestContextFrameType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::RequestContextFrameType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_REQUEST_CONTEXT_FRAME_TYPE_MOJOM_SHARED_H_