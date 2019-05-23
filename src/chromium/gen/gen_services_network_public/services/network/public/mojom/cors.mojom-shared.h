// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/cors.mojom-shared-internal.h"

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


enum class CorsPreflightPolicy : int32_t {
  
  kConsiderPreflight,
  
  kPreventPreflight,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, CorsPreflightPolicy value);
inline bool IsKnownEnumValue(CorsPreflightPolicy value) {
  return internal::CorsPreflightPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CorsError : int32_t {
  
  kDisallowedByMode,
  
  kInvalidResponse,
  
  kWildcardOriginNotAllowed,
  
  kMissingAllowOriginHeader,
  
  kMultipleAllowOriginValues,
  
  kInvalidAllowOriginValue,
  
  kAllowOriginMismatch,
  
  kInvalidAllowCredentials,
  
  kCorsDisabledScheme,
  
  kPreflightInvalidStatus,
  
  kPreflightDisallowedRedirect,
  
  kPreflightWildcardOriginNotAllowed,
  
  kPreflightMissingAllowOriginHeader,
  
  kPreflightMultipleAllowOriginValues,
  
  kPreflightInvalidAllowOriginValue,
  
  kPreflightAllowOriginMismatch,
  
  kPreflightInvalidAllowCredentials,
  
  kPreflightMissingAllowExternal,
  
  kPreflightInvalidAllowExternal,
  
  kInvalidAllowMethodsPreflightResponse,
  
  kInvalidAllowHeadersPreflightResponse,
  
  kMethodDisallowedByPreflightResponse,
  
  kHeaderDisallowedByPreflightResponse,
  
  kRedirectContainsCredentials,
  kMinValue = 0,
  kMaxValue = 23,
};

 std::ostream& operator<<(std::ostream& os, CorsError value);
inline bool IsKnownEnumValue(CorsError value) {
  return internal::CorsError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::CorsPreflightPolicy>
    : public mojo::internal::EnumHashImpl<::network::mojom::CorsPreflightPolicy> {};

template <>
struct hash<::network::mojom::CorsError>
    : public mojo::internal::EnumHashImpl<::network::mojom::CorsError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::CorsPreflightPolicy, ::network::mojom::CorsPreflightPolicy> {
  static ::network::mojom::CorsPreflightPolicy ToMojom(::network::mojom::CorsPreflightPolicy input) { return input; }
  static bool FromMojom(::network::mojom::CorsPreflightPolicy input, ::network::mojom::CorsPreflightPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CorsPreflightPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CorsPreflightPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CorsPreflightPolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CorsError, ::network::mojom::CorsError> {
  static ::network::mojom::CorsError ToMojom(::network::mojom::CorsError input) { return input; }
  static bool FromMojom(::network::mojom::CorsError input, ::network::mojom::CorsError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CorsError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CorsError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CorsError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {


}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_SHARED_H_