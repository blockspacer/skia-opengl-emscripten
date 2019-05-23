// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-shared-internal.h"

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


enum class PushDeliveryStatus : int32_t {
  
  SUCCESS = 0,
  
  UNKNOWN_APP_ID = 2,
  
  PERMISSION_DENIED = 3,
  
  NO_SERVICE_WORKER = 4,
  
  SERVICE_WORKER_ERROR = 5,
  
  EVENT_WAITUNTIL_REJECTED = 6,
  
  TIMEOUT = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushDeliveryStatus value);
inline bool IsKnownEnumValue(PushDeliveryStatus value) {
  return internal::PushDeliveryStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PushGetRegistrationStatus : int32_t {
  
  SUCCESS = 0,
  
  SERVICE_NOT_AVAILABLE = 1,
  
  STORAGE_ERROR = 2,
  
  REGISTRATION_NOT_FOUND = 3,
  
  INCOGNITO_REGISTRATION_NOT_FOUND = 4,
  
  STORAGE_CORRUPT = 6,
  
  RENDERER_SHUTDOWN = 7,
  
  NO_LIVE_SERVICE_WORKER = 8,
  kMinValue = 0,
  kMaxValue = 8,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushGetRegistrationStatus value);
inline bool IsKnownEnumValue(PushGetRegistrationStatus value) {
  return internal::PushGetRegistrationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PushRegistrationStatus : int32_t {
  
  SUCCESS_FROM_PUSH_SERVICE = 0,
  
  NO_SERVICE_WORKER = 1,
  
  SERVICE_NOT_AVAILABLE = 2,
  
  LIMIT_REACHED = 3,
  
  PERMISSION_DENIED = 4,
  
  SERVICE_ERROR = 5,
  
  NO_SENDER_ID = 6,
  
  STORAGE_ERROR = 7,
  
  SUCCESS_FROM_CACHE = 8,
  
  NETWORK_ERROR = 9,
  
  INCOGNITO_PERMISSION_DENIED = 10,
  
  PUBLIC_KEY_UNAVAILABLE = 11,
  
  MANIFEST_EMPTY_OR_MISSING = 12,
  
  SENDER_ID_MISMATCH = 13,
  
  STORAGE_CORRUPT = 14,
  
  RENDERER_SHUTDOWN = 15,
  
  SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE = 16,
  kMinValue = 0,
  kMaxValue = 16,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushRegistrationStatus value);
inline bool IsKnownEnumValue(PushRegistrationStatus value) {
  return internal::PushRegistrationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PushUnregistrationReason : int32_t {
  
  UNKNOWN = 0,
  
  JAVASCRIPT_API = 1,
  
  PERMISSION_REVOKED = 2,
  
  DELIVERY_UNKNOWN_APP_ID = 3,
  
  DELIVERY_PERMISSION_DENIED = 4,
  
  DELIVERY_NO_SERVICE_WORKER = 5,
  
  GCM_STORE_RESET = 6,
  
  SERVICE_WORKER_UNREGISTERED = 7,
  
  SUBSCRIBE_STORAGE_CORRUPT = 8,
  
  GET_SUBSCRIPTION_STORAGE_CORRUPT = 9,
  
  SERVICE_WORKER_DATABASE_WIPED = 10,
  kMinValue = 0,
  kMaxValue = 10,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushUnregistrationReason value);
inline bool IsKnownEnumValue(PushUnregistrationReason value) {
  return internal::PushUnregistrationReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PushUnregistrationStatus : int32_t {
  
  SUCCESS_UNREGISTERED = 0,
  
  SUCCESS_WAS_NOT_REGISTERED = 1,
  
  PENDING_NETWORK_ERROR = 2,
  
  NO_SERVICE_WORKER = 3,
  
  SERVICE_NOT_AVAILABLE = 4,
  
  PENDING_SERVICE_ERROR = 5,
  
  STORAGE_ERROR = 6,
  
  NETWORK_ERROR = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushUnregistrationStatus value);
inline bool IsKnownEnumValue(PushUnregistrationStatus value) {
  return internal::PushUnregistrationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PushUserVisibleStatus : int32_t {
  
  REQUIRED_AND_SHOWN = 0,
  
  NOT_REQUIRED_BUT_SHOWN = 1,
  
  NOT_REQUIRED_AND_NOT_SHOWN = 2,
  
  REQUIRED_BUT_NOT_SHOWN_USED_GRACE = 3,
  
  REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushUserVisibleStatus value);
inline bool IsKnownEnumValue(PushUserVisibleStatus value) {
  return internal::PushUserVisibleStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PushDeliveryStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushDeliveryStatus> {};

template <>
struct hash<::blink::mojom::PushGetRegistrationStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushGetRegistrationStatus> {};

template <>
struct hash<::blink::mojom::PushRegistrationStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushRegistrationStatus> {};

template <>
struct hash<::blink::mojom::PushUnregistrationReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushUnregistrationReason> {};

template <>
struct hash<::blink::mojom::PushUnregistrationStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushUnregistrationStatus> {};

template <>
struct hash<::blink::mojom::PushUserVisibleStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushUserVisibleStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PushDeliveryStatus, ::blink::mojom::PushDeliveryStatus> {
  static ::blink::mojom::PushDeliveryStatus ToMojom(::blink::mojom::PushDeliveryStatus input) { return input; }
  static bool FromMojom(::blink::mojom::PushDeliveryStatus input, ::blink::mojom::PushDeliveryStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushDeliveryStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushDeliveryStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushDeliveryStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PushGetRegistrationStatus, ::blink::mojom::PushGetRegistrationStatus> {
  static ::blink::mojom::PushGetRegistrationStatus ToMojom(::blink::mojom::PushGetRegistrationStatus input) { return input; }
  static bool FromMojom(::blink::mojom::PushGetRegistrationStatus input, ::blink::mojom::PushGetRegistrationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushGetRegistrationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushGetRegistrationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushGetRegistrationStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PushRegistrationStatus, ::blink::mojom::PushRegistrationStatus> {
  static ::blink::mojom::PushRegistrationStatus ToMojom(::blink::mojom::PushRegistrationStatus input) { return input; }
  static bool FromMojom(::blink::mojom::PushRegistrationStatus input, ::blink::mojom::PushRegistrationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushRegistrationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushRegistrationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushRegistrationStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PushUnregistrationReason, ::blink::mojom::PushUnregistrationReason> {
  static ::blink::mojom::PushUnregistrationReason ToMojom(::blink::mojom::PushUnregistrationReason input) { return input; }
  static bool FromMojom(::blink::mojom::PushUnregistrationReason input, ::blink::mojom::PushUnregistrationReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushUnregistrationReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushUnregistrationReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushUnregistrationReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PushUnregistrationStatus, ::blink::mojom::PushUnregistrationStatus> {
  static ::blink::mojom::PushUnregistrationStatus ToMojom(::blink::mojom::PushUnregistrationStatus input) { return input; }
  static bool FromMojom(::blink::mojom::PushUnregistrationStatus input, ::blink::mojom::PushUnregistrationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushUnregistrationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushUnregistrationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushUnregistrationStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PushUserVisibleStatus, ::blink::mojom::PushUserVisibleStatus> {
  static ::blink::mojom::PushUserVisibleStatus ToMojom(::blink::mojom::PushUserVisibleStatus input) { return input; }
  static bool FromMojom(::blink::mojom::PushUserVisibleStatus input, ::blink::mojom::PushUserVisibleStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushUserVisibleStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushUserVisibleStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushUserVisibleStatus>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_STATUS_MOJOM_SHARED_H_