// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

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


enum class ControllerServiceWorkerPurpose : int32_t {
  
  FETCH_SUB_RESOURCE,
  kMinValue = 0,
  kMaxValue = 0,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ControllerServiceWorkerPurpose value);
inline bool IsKnownEnumValue(ControllerServiceWorkerPurpose value) {
  return internal::ControllerServiceWorkerPurpose_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceWorkerContainerHostInterfaceBase {};

using ServiceWorkerContainerHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerContainerHostInterfaceBase>;
using ServiceWorkerContainerHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerContainerHostInterfaceBase>;
using ServiceWorkerContainerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerContainerHostInterfaceBase>;
using ServiceWorkerContainerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerContainerHostInterfaceBase>;
class ServiceWorkerContainerInterfaceBase {};

using ServiceWorkerContainerPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerContainerInterfaceBase>;
using ServiceWorkerContainerRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerContainerInterfaceBase>;
using ServiceWorkerContainerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerContainerInterfaceBase>;
using ServiceWorkerContainerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerContainerInterfaceBase>;


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ControllerServiceWorkerPurpose>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ControllerServiceWorkerPurpose> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ControllerServiceWorkerPurpose, ::blink::mojom::ControllerServiceWorkerPurpose> {
  static ::blink::mojom::ControllerServiceWorkerPurpose ToMojom(::blink::mojom::ControllerServiceWorkerPurpose input) { return input; }
  static bool FromMojom(::blink::mojom::ControllerServiceWorkerPurpose input, ::blink::mojom::ControllerServiceWorkerPurpose* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ControllerServiceWorkerPurpose, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ControllerServiceWorkerPurpose, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ControllerServiceWorkerPurpose>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_H_