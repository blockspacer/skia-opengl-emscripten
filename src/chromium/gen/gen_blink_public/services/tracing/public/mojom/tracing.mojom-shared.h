// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_H_

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
#include "services/tracing/public/mojom/tracing.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "services/tracing/public/mojom/perfetto_service.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace tracing {
namespace mojom {


}  // namespace mojom
}  // namespace tracing

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace tracing {
namespace mojom {


enum class TraceDataType : int32_t {
  
  ARRAY,
  
  OBJECT,
  
  STRING,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(TRACING_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TraceDataType value);
inline bool IsKnownEnumValue(TraceDataType value) {
  return internal::TraceDataType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AgentRegistryInterfaceBase {};

using AgentRegistryPtrDataView =
    mojo::InterfacePtrDataView<AgentRegistryInterfaceBase>;
using AgentRegistryRequestDataView =
    mojo::InterfaceRequestDataView<AgentRegistryInterfaceBase>;
using AgentRegistryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AgentRegistryInterfaceBase>;
using AgentRegistryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AgentRegistryInterfaceBase>;
class AgentInterfaceBase {};

using AgentPtrDataView =
    mojo::InterfacePtrDataView<AgentInterfaceBase>;
using AgentRequestDataView =
    mojo::InterfaceRequestDataView<AgentInterfaceBase>;
using AgentAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AgentInterfaceBase>;
using AgentAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AgentInterfaceBase>;
class RecorderInterfaceBase {};

using RecorderPtrDataView =
    mojo::InterfacePtrDataView<RecorderInterfaceBase>;
using RecorderRequestDataView =
    mojo::InterfaceRequestDataView<RecorderInterfaceBase>;
using RecorderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RecorderInterfaceBase>;
using RecorderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RecorderInterfaceBase>;
class CoordinatorInterfaceBase {};

using CoordinatorPtrDataView =
    mojo::InterfacePtrDataView<CoordinatorInterfaceBase>;
using CoordinatorRequestDataView =
    mojo::InterfaceRequestDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CoordinatorInterfaceBase>;


}  // namespace mojom
}  // namespace tracing

namespace std {

template <>
struct hash<::tracing::mojom::TraceDataType>
    : public mojo::internal::EnumHashImpl<::tracing::mojom::TraceDataType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::tracing::mojom::TraceDataType, ::tracing::mojom::TraceDataType> {
  static ::tracing::mojom::TraceDataType ToMojom(::tracing::mojom::TraceDataType input) { return input; }
  static bool FromMojom(::tracing::mojom::TraceDataType input, ::tracing::mojom::TraceDataType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::TraceDataType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::tracing::mojom::TraceDataType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::tracing::mojom::TraceDataType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace tracing {
namespace mojom {


}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_H_