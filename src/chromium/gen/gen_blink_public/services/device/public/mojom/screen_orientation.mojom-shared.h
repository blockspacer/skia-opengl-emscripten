// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/screen_orientation.mojom-shared-internal.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared.h"

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
class ScreenOrientationInterfaceBase {};

using ScreenOrientationPtrDataView =
    mojo::InterfacePtrDataView<ScreenOrientationInterfaceBase>;
using ScreenOrientationRequestDataView =
    mojo::InterfaceRequestDataView<ScreenOrientationInterfaceBase>;
using ScreenOrientationAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ScreenOrientationInterfaceBase>;
using ScreenOrientationAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ScreenOrientationInterfaceBase>;
class ScreenOrientationListenerInterfaceBase {};

using ScreenOrientationListenerPtrDataView =
    mojo::InterfacePtrDataView<ScreenOrientationListenerInterfaceBase>;
using ScreenOrientationListenerRequestDataView =
    mojo::InterfaceRequestDataView<ScreenOrientationListenerInterfaceBase>;
using ScreenOrientationListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ScreenOrientationListenerInterfaceBase>;
using ScreenOrientationListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ScreenOrientationListenerInterfaceBase>;


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

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_H_