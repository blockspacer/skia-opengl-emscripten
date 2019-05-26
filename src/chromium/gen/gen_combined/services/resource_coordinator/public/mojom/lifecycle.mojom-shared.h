// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_LIFECYCLE_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_LIFECYCLE_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {


enum class LifecycleState : int32_t {
  
  kRunning,
  
  kFrozen,
  
  kDiscarded,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, LifecycleState value);
inline bool IsKnownEnumValue(LifecycleState value) {
  return internal::LifecycleState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

template <>
struct hash<::resource_coordinator::mojom::LifecycleState>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::LifecycleState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::resource_coordinator::mojom::LifecycleState, ::resource_coordinator::mojom::LifecycleState> {
  static ::resource_coordinator::mojom::LifecycleState ToMojom(::resource_coordinator::mojom::LifecycleState input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::LifecycleState input, ::resource_coordinator::mojom::LifecycleState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::LifecycleState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::LifecycleState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::LifecycleState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_LIFECYCLE_MOJOM_SHARED_H_