// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/notifications/notification_service.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom-shared.h"
#include "third_party/blink/public/mojom/permissions/permission_status.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class PersistentNotificationError : int32_t {
  
  NONE,
  
  INTERNAL_ERROR,
  
  PERMISSION_DENIED,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PersistentNotificationError value);
inline bool IsKnownEnumValue(PersistentNotificationError value) {
  return internal::PersistentNotificationError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NonPersistentNotificationListenerInterfaceBase {};

using NonPersistentNotificationListenerPtrDataView =
    mojo::InterfacePtrDataView<NonPersistentNotificationListenerInterfaceBase>;
using NonPersistentNotificationListenerRequestDataView =
    mojo::InterfaceRequestDataView<NonPersistentNotificationListenerInterfaceBase>;
using NonPersistentNotificationListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NonPersistentNotificationListenerInterfaceBase>;
using NonPersistentNotificationListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NonPersistentNotificationListenerInterfaceBase>;
class NotificationServiceInterfaceBase {};

using NotificationServicePtrDataView =
    mojo::InterfacePtrDataView<NotificationServiceInterfaceBase>;
using NotificationServiceRequestDataView =
    mojo::InterfaceRequestDataView<NotificationServiceInterfaceBase>;
using NotificationServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NotificationServiceInterfaceBase>;
using NotificationServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NotificationServiceInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PersistentNotificationError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PersistentNotificationError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PersistentNotificationError, ::blink::mojom::PersistentNotificationError> {
  static ::blink::mojom::PersistentNotificationError ToMojom(::blink::mojom::PersistentNotificationError input) { return input; }
  static bool FromMojom(::blink::mojom::PersistentNotificationError input, ::blink::mojom::PersistentNotificationError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PersistentNotificationError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PersistentNotificationError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PersistentNotificationError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_SHARED_H_