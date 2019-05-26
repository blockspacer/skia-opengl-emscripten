// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class ScreenOrientationLockResult : int32_t {
  
  SCREEN_ORIENTATION_LOCK_RESULT_SUCCESS,
  
  SCREEN_ORIENTATION_LOCK_RESULT_ERROR_NOT_AVAILABLE,
  
  SCREEN_ORIENTATION_LOCK_RESULT_ERROR_FULLSCREEN_REQUIRED,
  
  SCREEN_ORIENTATION_LOCK_RESULT_ERROR_CANCELED,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ScreenOrientationLockResult value);
inline bool IsKnownEnumValue(ScreenOrientationLockResult value) {
  return internal::ScreenOrientationLockResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ScreenOrientationLockType : int32_t {
  
  DEFAULT = 0,
  
  PORTRAIT_PRIMARY,
  
  PORTRAIT_SECONDARY,
  
  LANDSCAPE_PRIMARY,
  
  LANDSCAPE_SECONDARY,
  
  ANY,
  
  LANDSCAPE,
  
  PORTRAIT,
  
  NATURAL,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, ScreenOrientationLockType value);
inline bool IsKnownEnumValue(ScreenOrientationLockType value) {
  return internal::ScreenOrientationLockType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::ScreenOrientationLockResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::ScreenOrientationLockResult> {};

template <>
struct hash<::device::mojom::ScreenOrientationLockType>
    : public mojo::internal::EnumHashImpl<::device::mojom::ScreenOrientationLockType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::ScreenOrientationLockResult, ::device::mojom::ScreenOrientationLockResult> {
  static ::device::mojom::ScreenOrientationLockResult ToMojom(::device::mojom::ScreenOrientationLockResult input) { return input; }
  static bool FromMojom(::device::mojom::ScreenOrientationLockResult input, ::device::mojom::ScreenOrientationLockResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::ScreenOrientationLockResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::ScreenOrientationLockResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::ScreenOrientationLockResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::ScreenOrientationLockType, ::device::mojom::ScreenOrientationLockType> {
  static ::device::mojom::ScreenOrientationLockType ToMojom(::device::mojom::ScreenOrientationLockType input) { return input; }
  static bool FromMojom(::device::mojom::ScreenOrientationLockType input, ::device::mojom::ScreenOrientationLockType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::ScreenOrientationLockType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::ScreenOrientationLockType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::ScreenOrientationLockType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_LOCK_TYPES_MOJOM_SHARED_H_