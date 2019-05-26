// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_FORWARD_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
}  // namespace device
}  // namespace mojom


namespace device {
namespace mojom {
namespace blink {
class UsbDeviceManagerClient;
using UsbDeviceManagerClientPtr = mojo::InterfacePtr<UsbDeviceManagerClient>;
using UsbDeviceManagerClientPtrInfo = mojo::InterfacePtrInfo<UsbDeviceManagerClient>;
using ThreadSafeUsbDeviceManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<UsbDeviceManagerClient>;
using UsbDeviceManagerClientRequest = mojo::InterfaceRequest<UsbDeviceManagerClient>;
using UsbDeviceManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDeviceManagerClient>;
using ThreadSafeUsbDeviceManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDeviceManagerClient>;
using UsbDeviceManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDeviceManagerClient>;
using UsbDeviceManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDeviceManagerClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_FORWARD_H_