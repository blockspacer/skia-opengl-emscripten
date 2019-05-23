// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_ERROR_TYPE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_ERROR_TYPE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ServiceWorkerErrorType : int32_t {
  
  kNone = 0,
  
  kAbort,
  
  kActivate,
  
  kDisabled,
  
  kInstall,
  
  kNavigation,
  
  kNetwork,
  
  kNotFound,
  
  kScriptEvaluateFailed,
  
  kSecurity,
  
  kState,
  
  kTimeout,
  
  kType,
  
  kUnknown,
  kMinValue = 0,
  kMaxValue = 13,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ServiceWorkerErrorType value);
inline bool IsKnownEnumValue(ServiceWorkerErrorType value) {
  return internal::ServiceWorkerErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ServiceWorkerResponseError : int32_t {
  
  kUnknown = 0,
  
  kPromiseRejected = 1,
  
  kDefaultPrevented = 2,
  
  kNoV8Instance = 3,
  
  kResponseTypeError = 4,
  
  kResponseTypeOpaque = 5,
  
  kResponseTypeNotBasicOrDefault = 6,
  
  kBodyUsed = 7,
  
  kResponseTypeOpaqueForClientRequest = 8,
  
  kResponseTypeOpaqueRedirect = 9,
  
  kBodyLocked = 10,
  
  kRedirectedResponseForNotFollowRequest = 14,
  
  kDataPipeCreationFailed = 15,
  
  kResponseTypeCorsForRequestModeSameOrigin = 16,
  
  kResponseBodyBroken = 17,
  kMinValue = 0,
  kMaxValue = 17,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ServiceWorkerResponseError value);
inline bool IsKnownEnumValue(ServiceWorkerResponseError value) {
  return internal::ServiceWorkerResponseError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ServiceWorkerErrorType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ServiceWorkerErrorType> {};

template <>
struct hash<::blink::mojom::ServiceWorkerResponseError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ServiceWorkerResponseError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ServiceWorkerErrorType, ::blink::mojom::ServiceWorkerErrorType> {
  static ::blink::mojom::ServiceWorkerErrorType ToMojom(::blink::mojom::ServiceWorkerErrorType input) { return input; }
  static bool FromMojom(::blink::mojom::ServiceWorkerErrorType input, ::blink::mojom::ServiceWorkerErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ServiceWorkerErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ServiceWorkerErrorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ServiceWorkerResponseError, ::blink::mojom::ServiceWorkerResponseError> {
  static ::blink::mojom::ServiceWorkerResponseError ToMojom(::blink::mojom::ServiceWorkerResponseError input) { return input; }
  static bool FromMojom(::blink::mojom::ServiceWorkerResponseError input, ::blink::mojom::ServiceWorkerResponseError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerResponseError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ServiceWorkerResponseError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ServiceWorkerResponseError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_ERROR_TYPE_MOJOM_SHARED_H_