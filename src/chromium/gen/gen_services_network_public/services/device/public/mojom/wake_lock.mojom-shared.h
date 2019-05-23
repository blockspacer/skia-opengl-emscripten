// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/wake_lock.mojom-shared-internal.h"

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


enum class WakeLockType : int32_t {
  
  kPreventAppSuspension = 0,
  
  kPreventDisplaySleep = 1,
  
  kPreventDisplaySleepAllowDimming = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, WakeLockType value);
inline bool IsKnownEnumValue(WakeLockType value) {
  return internal::WakeLockType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class WakeLockReason : int32_t {
  
  kAudioPlayback = 0,
  
  kVideoPlayback = 1,
  
  kOther = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, WakeLockReason value);
inline bool IsKnownEnumValue(WakeLockReason value) {
  return internal::WakeLockReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class WakeLockInterfaceBase {};

using WakeLockPtrDataView =
    mojo::InterfacePtrDataView<WakeLockInterfaceBase>;
using WakeLockRequestDataView =
    mojo::InterfaceRequestDataView<WakeLockInterfaceBase>;
using WakeLockAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WakeLockInterfaceBase>;
using WakeLockAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WakeLockInterfaceBase>;


}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::WakeLockType>
    : public mojo::internal::EnumHashImpl<::device::mojom::WakeLockType> {};

template <>
struct hash<::device::mojom::WakeLockReason>
    : public mojo::internal::EnumHashImpl<::device::mojom::WakeLockReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::WakeLockType, ::device::mojom::WakeLockType> {
  static ::device::mojom::WakeLockType ToMojom(::device::mojom::WakeLockType input) { return input; }
  static bool FromMojom(::device::mojom::WakeLockType input, ::device::mojom::WakeLockType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::WakeLockType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::WakeLockType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::WakeLockType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::WakeLockReason, ::device::mojom::WakeLockReason> {
  static ::device::mojom::WakeLockReason ToMojom(::device::mojom::WakeLockReason input) { return input; }
  static bool FromMojom(::device::mojom::WakeLockReason input, ::device::mojom::WakeLockReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::WakeLockReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::WakeLockReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::WakeLockReason>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_H_