// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/service_control.mojom-shared-internal.h"

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
class ServiceControlInterfaceBase {};

using ServiceControlPtrDataView =
    mojo::InterfacePtrDataView<ServiceControlInterfaceBase>;
using ServiceControlRequestDataView =
    mojo::InterfaceRequestDataView<ServiceControlInterfaceBase>;
using ServiceControlAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceControlInterfaceBase>;
using ServiceControlAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceControlInterfaceBase>;


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

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_SHARED_H_