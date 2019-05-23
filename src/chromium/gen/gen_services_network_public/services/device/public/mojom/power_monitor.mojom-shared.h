// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/power_monitor.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PowerMonitorInterfaceBase {};

using PowerMonitorPtrDataView =
    mojo::InterfacePtrDataView<PowerMonitorInterfaceBase>;
using PowerMonitorRequestDataView =
    mojo::InterfaceRequestDataView<PowerMonitorInterfaceBase>;
using PowerMonitorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PowerMonitorInterfaceBase>;
using PowerMonitorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PowerMonitorInterfaceBase>;
class PowerMonitorClientInterfaceBase {};

using PowerMonitorClientPtrDataView =
    mojo::InterfacePtrDataView<PowerMonitorClientInterfaceBase>;
using PowerMonitorClientRequestDataView =
    mojo::InterfaceRequestDataView<PowerMonitorClientInterfaceBase>;
using PowerMonitorClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PowerMonitorClientInterfaceBase>;
using PowerMonitorClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PowerMonitorClientInterfaceBase>;


}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_H_