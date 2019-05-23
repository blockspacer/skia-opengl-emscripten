// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/no_module.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"







namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo




enum class EnumWithoutModule : int32_t {
  
  A,
  kMinValue = 0,
  kMaxValue = 0,
};

 std::ostream& operator<<(std::ostream& os, EnumWithoutModule value);
inline bool IsKnownEnumValue(EnumWithoutModule value) {
  return internal::EnumWithoutModule_Data::IsKnownValue(
      static_cast<int32_t>(value));
}



namespace std {

template <>
struct hash<::EnumWithoutModule>
    : public mojo::internal::EnumHashImpl<::EnumWithoutModule> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::EnumWithoutModule, ::EnumWithoutModule> {
  static ::EnumWithoutModule ToMojom(::EnumWithoutModule input) { return input; }
  static bool FromMojom(::EnumWithoutModule input, ::EnumWithoutModule* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::EnumWithoutModule, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::EnumWithoutModule, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::EnumWithoutModule>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo





#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_SHARED_H_