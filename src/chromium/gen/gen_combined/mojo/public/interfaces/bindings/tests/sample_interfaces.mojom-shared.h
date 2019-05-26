// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace sample {


}  // namespace sample

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace sample {


enum class Enum : int32_t {
  
  VALUE,
  kMinValue = 0,
  kMaxValue = 0,
};

 std::ostream& operator<<(std::ostream& os, Enum value);
inline bool IsKnownEnumValue(Enum value) {
  return internal::Enum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PingTestInterfaceBase {};

using PingTestPtrDataView =
    mojo::InterfacePtrDataView<PingTestInterfaceBase>;
using PingTestRequestDataView =
    mojo::InterfaceRequestDataView<PingTestInterfaceBase>;
using PingTestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PingTestInterfaceBase>;
using PingTestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PingTestInterfaceBase>;
class ProviderInterfaceBase {};

using ProviderPtrDataView =
    mojo::InterfacePtrDataView<ProviderInterfaceBase>;
using ProviderRequestDataView =
    mojo::InterfaceRequestDataView<ProviderInterfaceBase>;
using ProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProviderInterfaceBase>;
using ProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProviderInterfaceBase>;
class IntegerAccessorInterfaceBase {};

using IntegerAccessorPtrDataView =
    mojo::InterfacePtrDataView<IntegerAccessorInterfaceBase>;
using IntegerAccessorRequestDataView =
    mojo::InterfaceRequestDataView<IntegerAccessorInterfaceBase>;
using IntegerAccessorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IntegerAccessorInterfaceBase>;
using IntegerAccessorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IntegerAccessorInterfaceBase>;


}  // namespace sample

namespace std {

template <>
struct hash<::sample::Enum>
    : public mojo::internal::EnumHashImpl<::sample::Enum> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::sample::Enum, ::sample::Enum> {
  static ::sample::Enum ToMojom(::sample::Enum input) { return input; }
  static bool FromMojom(::sample::Enum input, ::sample::Enum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::Enum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::sample::Enum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::sample::Enum>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace sample {


}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_SHARED_H_