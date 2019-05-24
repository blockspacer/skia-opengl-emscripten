// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_H_

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
#include "services/ws/public/mojom/user_activity_monitor.mojom-shared-internal.h"

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


enum class UserIdleObserver_IdleState : int32_t {
  
  ACTIVE,
  
  IDLE,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, UserIdleObserver_IdleState value);
inline bool IsKnownEnumValue(UserIdleObserver_IdleState value) {
  return internal::UserIdleObserver_IdleState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class UserActivityObserverInterfaceBase {};

using UserActivityObserverPtrDataView =
    mojo::InterfacePtrDataView<UserActivityObserverInterfaceBase>;
using UserActivityObserverRequestDataView =
    mojo::InterfaceRequestDataView<UserActivityObserverInterfaceBase>;
using UserActivityObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UserActivityObserverInterfaceBase>;
using UserActivityObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UserActivityObserverInterfaceBase>;
class UserIdleObserverInterfaceBase {};

using UserIdleObserverPtrDataView =
    mojo::InterfacePtrDataView<UserIdleObserverInterfaceBase>;
using UserIdleObserverRequestDataView =
    mojo::InterfaceRequestDataView<UserIdleObserverInterfaceBase>;
using UserIdleObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UserIdleObserverInterfaceBase>;
using UserIdleObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UserIdleObserverInterfaceBase>;
class UserActivityMonitorInterfaceBase {};

using UserActivityMonitorPtrDataView =
    mojo::InterfacePtrDataView<UserActivityMonitorInterfaceBase>;
using UserActivityMonitorRequestDataView =
    mojo::InterfaceRequestDataView<UserActivityMonitorInterfaceBase>;
using UserActivityMonitorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UserActivityMonitorInterfaceBase>;
using UserActivityMonitorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UserActivityMonitorInterfaceBase>;


}  // namespace mojom
}  // namespace ws

namespace std {

template <>
struct hash<::ws::mojom::UserIdleObserver_IdleState>
    : public mojo::internal::EnumHashImpl<::ws::mojom::UserIdleObserver_IdleState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ws::mojom::UserIdleObserver_IdleState, ::ws::mojom::UserIdleObserver_IdleState> {
  static ::ws::mojom::UserIdleObserver_IdleState ToMojom(::ws::mojom::UserIdleObserver_IdleState input) { return input; }
  static bool FromMojom(::ws::mojom::UserIdleObserver_IdleState input, ::ws::mojom::UserIdleObserver_IdleState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ws::mojom::UserIdleObserver_IdleState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ws::mojom::UserIdleObserver_IdleState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ws::mojom::UserIdleObserver_IdleState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ws {
namespace mojom {


}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_SHARED_H_