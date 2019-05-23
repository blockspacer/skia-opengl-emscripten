// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NAME_GENERATOR_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NAME_GENERATOR_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_name_generator.mojom-shared-internal.h"

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


enum class SupportedCases : int32_t {
  
  lowerCamelCase,
  
  UpperCamelCase,
  
  snake_case,
  
  MACRO_CASE,
  
  kHungarianNotation,
  
  upperACRONYMCase,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, SupportedCases value);
inline bool IsKnownEnumValue(SupportedCases value) {
  return internal::SupportedCases_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace sample

namespace std {

template <>
struct hash<::sample::SupportedCases>
    : public mojo::internal::EnumHashImpl<::sample::SupportedCases> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::sample::SupportedCases, ::sample::SupportedCases> {
  static ::sample::SupportedCases ToMojom(::sample::SupportedCases input) { return input; }
  static bool FromMojom(::sample::SupportedCases input, ::sample::SupportedCases* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::SupportedCases, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::sample::SupportedCases, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::sample::SupportedCases>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace sample {


}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NAME_GENERATOR_MOJOM_SHARED_H_