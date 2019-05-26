// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/fingerprint.mojom-shared-internal.h"

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


enum class ScanResult : int32_t {
  
  SUCCESS = 0,
  
  PARTIAL = 1,
  
  INSUFFICIENT = 2,
  
  SENSOR_DIRTY = 3,
  
  TOO_SLOW = 4,
  
  TOO_FAST = 5,
  
  IMMOBILE = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, ScanResult value);
inline bool IsKnownEnumValue(ScanResult value) {
  return internal::ScanResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BiometricType : int32_t {
  
  UNKNOWN = 0,
  
  FINGERPRINT = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, BiometricType value);
inline bool IsKnownEnumValue(BiometricType value) {
  return internal::BiometricType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FingerprintObserverInterfaceBase {};

using FingerprintObserverPtrDataView =
    mojo::InterfacePtrDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverRequestDataView =
    mojo::InterfaceRequestDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FingerprintObserverInterfaceBase>;
using FingerprintObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FingerprintObserverInterfaceBase>;
class FingerprintInterfaceBase {};

using FingerprintPtrDataView =
    mojo::InterfacePtrDataView<FingerprintInterfaceBase>;
using FingerprintRequestDataView =
    mojo::InterfaceRequestDataView<FingerprintInterfaceBase>;
using FingerprintAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FingerprintInterfaceBase>;
using FingerprintAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FingerprintInterfaceBase>;


}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::ScanResult>
    : public mojo::internal::EnumHashImpl<::device::mojom::ScanResult> {};

template <>
struct hash<::device::mojom::BiometricType>
    : public mojo::internal::EnumHashImpl<::device::mojom::BiometricType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::ScanResult, ::device::mojom::ScanResult> {
  static ::device::mojom::ScanResult ToMojom(::device::mojom::ScanResult input) { return input; }
  static bool FromMojom(::device::mojom::ScanResult input, ::device::mojom::ScanResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::ScanResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::ScanResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::ScanResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::BiometricType, ::device::mojom::BiometricType> {
  static ::device::mojom::BiometricType ToMojom(::device::mojom::BiometricType input) { return input; }
  static bool FromMojom(::device::mojom::BiometricType input, ::device::mojom::BiometricType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BiometricType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::BiometricType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::BiometricType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_SHARED_H_