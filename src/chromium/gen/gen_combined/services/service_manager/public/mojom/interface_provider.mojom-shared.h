// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {


}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {
// Interface base classes. They are used for type safety check.
class InterfaceProviderInterfaceBase {};

using InterfaceProviderPtrDataView =
    mojo::InterfacePtrDataView<InterfaceProviderInterfaceBase>;
using InterfaceProviderRequestDataView =
    mojo::InterfaceRequestDataView<InterfaceProviderInterfaceBase>;
using InterfaceProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterfaceProviderInterfaceBase>;
using InterfaceProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterfaceProviderInterfaceBase>;


}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace service_manager {
namespace mojom {


}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_SHARED_H_