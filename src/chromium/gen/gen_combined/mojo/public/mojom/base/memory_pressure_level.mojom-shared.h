// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_MEMORY_PRESSURE_LEVEL_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_MEMORY_PRESSURE_LEVEL_MOJOM_SHARED_H_

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
#include "mojo/public/mojom/base/memory_pressure_level.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {


enum class MemoryPressureLevel : int32_t {
  
  NONE,
  
  MODERATE,
  
  CRITICAL,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJO_BASE_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, MemoryPressureLevel value);
inline bool IsKnownEnumValue(MemoryPressureLevel value) {
  return internal::MemoryPressureLevel_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace mojo_base

namespace std {

template <>
struct hash<::mojo_base::mojom::MemoryPressureLevel>
    : public mojo::internal::EnumHashImpl<::mojo_base::mojom::MemoryPressureLevel> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo_base::mojom::MemoryPressureLevel, ::mojo_base::mojom::MemoryPressureLevel> {
  static ::mojo_base::mojom::MemoryPressureLevel ToMojom(::mojo_base::mojom::MemoryPressureLevel input) { return input; }
  static bool FromMojom(::mojo_base::mojom::MemoryPressureLevel input, ::mojo_base::mojom::MemoryPressureLevel* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::MemoryPressureLevel, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo_base::mojom::MemoryPressureLevel, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo_base::mojom::MemoryPressureLevel>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {


}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_MEMORY_PRESSURE_LEVEL_MOJOM_SHARED_H_