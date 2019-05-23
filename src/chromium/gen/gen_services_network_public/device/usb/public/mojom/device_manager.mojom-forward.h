// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_FORWARD_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_FORWARD_H_



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






namespace device {
namespace mojom {
class UsbDeviceManager;
using UsbDeviceManagerPtr = mojo::InterfacePtr<UsbDeviceManager>;
using UsbDeviceManagerPtrInfo = mojo::InterfacePtrInfo<UsbDeviceManager>;
using ThreadSafeUsbDeviceManagerPtr =
    mojo::ThreadSafeInterfacePtr<UsbDeviceManager>;
using UsbDeviceManagerRequest = mojo::InterfaceRequest<UsbDeviceManager>;
using UsbDeviceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDeviceManager>;
using ThreadSafeUsbDeviceManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDeviceManager>;
using UsbDeviceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDeviceManager>;
using UsbDeviceManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDeviceManager>;




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_FORWARD_H_