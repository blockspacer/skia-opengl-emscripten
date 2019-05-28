// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-shared-internal.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace heap_profiling {
namespace mojom {


}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace heap_profiling {
namespace mojom {


enum class ProcessType : int32_t {
  
  OTHER = 0,
  
  BROWSER = 1,
  
  RENDERER = 2,
  
  GPU = 3,
  
  LAST = ProcessType::GPU,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ProcessType value);
inline bool IsKnownEnumValue(ProcessType value) {
  return internal::ProcessType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ProfilingServiceInterfaceBase {};

using ProfilingServicePtrDataView =
    mojo::InterfacePtrDataView<ProfilingServiceInterfaceBase>;
using ProfilingServiceRequestDataView =
    mojo::InterfaceRequestDataView<ProfilingServiceInterfaceBase>;
using ProfilingServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProfilingServiceInterfaceBase>;
using ProfilingServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProfilingServiceInterfaceBase>;


}  // namespace mojom
}  // namespace heap_profiling

namespace std {

template <>
struct hash<::heap_profiling::mojom::ProcessType>
    : public mojo::internal::EnumHashImpl<::heap_profiling::mojom::ProcessType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::heap_profiling::mojom::ProcessType, ::heap_profiling::mojom::ProcessType> {
  static ::heap_profiling::mojom::ProcessType ToMojom(::heap_profiling::mojom::ProcessType input) { return input; }
  static bool FromMojom(::heap_profiling::mojom::ProcessType input, ::heap_profiling::mojom::ProcessType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::heap_profiling::mojom::ProcessType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::heap_profiling::mojom::ProcessType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::heap_profiling::mojom::ProcessType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace heap_profiling {
namespace mojom {


}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_H_