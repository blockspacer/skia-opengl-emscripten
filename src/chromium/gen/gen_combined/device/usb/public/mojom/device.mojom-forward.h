// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_FORWARD_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

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


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class UsbEndpointInfoDataView;

class UsbAlternateInterfaceInfoDataView;

class UsbInterfaceInfoDataView;

class UsbConfigurationInfoDataView;

class UsbDeviceInfoDataView;

class UsbControlTransferParamsDataView;

class UsbIsochronousPacketDataView;


enum class UsbOpenDeviceError : int32_t;

enum class UsbTransferDirection : int32_t;

enum class UsbControlTransferType : int32_t;

enum class UsbControlTransferRecipient : int32_t;

enum class UsbTransferType : int32_t;

enum class UsbSynchronizationType : int32_t;

enum class UsbUsageType : int32_t;

enum class UsbTransferStatus : int32_t;
class UsbEndpointInfo;
using UsbEndpointInfoPtr = mojo::StructPtr<UsbEndpointInfo>;

class UsbAlternateInterfaceInfo;
using UsbAlternateInterfaceInfoPtr = mojo::StructPtr<UsbAlternateInterfaceInfo>;

class UsbInterfaceInfo;
using UsbInterfaceInfoPtr = mojo::StructPtr<UsbInterfaceInfo>;

class UsbConfigurationInfo;
using UsbConfigurationInfoPtr = mojo::StructPtr<UsbConfigurationInfo>;

class UsbDeviceInfo;
using UsbDeviceInfoPtr = mojo::StructPtr<UsbDeviceInfo>;

class UsbControlTransferParams;
using UsbControlTransferParamsPtr = mojo::StructPtr<UsbControlTransferParams>;

class UsbIsochronousPacket;
using UsbIsochronousPacketPtr = mojo::InlinedStructPtr<UsbIsochronousPacket>;

class UsbDevice;
using UsbDevicePtr = mojo::InterfacePtr<UsbDevice>;
using UsbDevicePtrInfo = mojo::InterfacePtrInfo<UsbDevice>;
using ThreadSafeUsbDevicePtr =
    mojo::ThreadSafeInterfacePtr<UsbDevice>;
using UsbDeviceRequest = mojo::InterfaceRequest<UsbDevice>;
using UsbDeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDevice>;
using ThreadSafeUsbDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDevice>;
using UsbDeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDevice>;
using UsbDeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDevice>;

class UsbDeviceClient;
using UsbDeviceClientPtr = mojo::InterfacePtr<UsbDeviceClient>;
using UsbDeviceClientPtrInfo = mojo::InterfacePtrInfo<UsbDeviceClient>;
using ThreadSafeUsbDeviceClientPtr =
    mojo::ThreadSafeInterfacePtr<UsbDeviceClient>;
using UsbDeviceClientRequest = mojo::InterfaceRequest<UsbDeviceClient>;
using UsbDeviceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDeviceClient>;
using ThreadSafeUsbDeviceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDeviceClient>;
using UsbDeviceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDeviceClient>;
using UsbDeviceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDeviceClient>;




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_FORWARD_H_