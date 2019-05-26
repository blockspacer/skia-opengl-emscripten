// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_SHARED_H_

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
#include "services/ws/public/mojom/remoting_event_injector.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ws {
namespace mojom {


}  // namespace mojom
}  // namespace ws

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ws {
namespace mojom {


enum class InjectedMouseButtonType : int32_t {
  
  kLeft,
  
  kMiddle,
  
  kRight,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, InjectedMouseButtonType value);
inline bool IsKnownEnumValue(InjectedMouseButtonType value) {
  return internal::InjectedMouseButtonType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class RemotingEventInjectorInterfaceBase {};

using RemotingEventInjectorPtrDataView =
    mojo::InterfacePtrDataView<RemotingEventInjectorInterfaceBase>;
using RemotingEventInjectorRequestDataView =
    mojo::InterfaceRequestDataView<RemotingEventInjectorInterfaceBase>;
using RemotingEventInjectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RemotingEventInjectorInterfaceBase>;
using RemotingEventInjectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RemotingEventInjectorInterfaceBase>;


}  // namespace mojom
}  // namespace ws

namespace std {

template <>
struct hash<::ws::mojom::InjectedMouseButtonType>
    : public mojo::internal::EnumHashImpl<::ws::mojom::InjectedMouseButtonType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ws::mojom::InjectedMouseButtonType, ::ws::mojom::InjectedMouseButtonType> {
  static ::ws::mojom::InjectedMouseButtonType ToMojom(::ws::mojom::InjectedMouseButtonType input) { return input; }
  static bool FromMojom(::ws::mojom::InjectedMouseButtonType input, ::ws::mojom::InjectedMouseButtonType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::InjectedMouseButtonType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::InjectedMouseButtonType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::InjectedMouseButtonType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ws {
namespace mojom {


}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_SHARED_H_