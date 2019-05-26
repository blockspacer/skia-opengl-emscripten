// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_SHARED_H_

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
#include "device/usb/public/mojom/device_manager_client.mojom-shared-internal.h"
#include "device/usb/public/mojom/device.mojom-shared.h"

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
class UsbDeviceManagerClientInterfaceBase {};

using UsbDeviceManagerClientPtrDataView =
    mojo::InterfacePtrDataView<UsbDeviceManagerClientInterfaceBase>;
using UsbDeviceManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<UsbDeviceManagerClientInterfaceBase>;
using UsbDeviceManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UsbDeviceManagerClientInterfaceBase>;
using UsbDeviceManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UsbDeviceManagerClientInterfaceBase>;


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

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_SHARED_H_