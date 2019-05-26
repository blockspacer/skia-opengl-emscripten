// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_FORWARD_H_

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
class BluetoothAddressDataView;

class BluetoothDeviceInfoDataView;


enum class BluetoothDeviceInfo_ConnectionState : int32_t;

enum class BluetoothDeviceInfo_DeviceType : int32_t;

enum class BluetoothSystem_State : int32_t;

enum class BluetoothSystem_SetPoweredResult : int32_t;

enum class BluetoothSystem_ScanState : int32_t;

enum class BluetoothSystem_StartScanResult : int32_t;

enum class BluetoothSystem_StopScanResult : int32_t;
class BluetoothAddress;
using BluetoothAddressPtr = mojo::StructPtr<BluetoothAddress>;

class BluetoothDeviceInfo;
using BluetoothDeviceInfoPtr = mojo::StructPtr<BluetoothDeviceInfo>;

class BluetoothSystemFactory;
using BluetoothSystemFactoryPtr = mojo::InterfacePtr<BluetoothSystemFactory>;
using BluetoothSystemFactoryPtrInfo = mojo::InterfacePtrInfo<BluetoothSystemFactory>;
using ThreadSafeBluetoothSystemFactoryPtr =
    mojo::ThreadSafeInterfacePtr<BluetoothSystemFactory>;
using BluetoothSystemFactoryRequest = mojo::InterfaceRequest<BluetoothSystemFactory>;
using BluetoothSystemFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<BluetoothSystemFactory>;
using ThreadSafeBluetoothSystemFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BluetoothSystemFactory>;
using BluetoothSystemFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BluetoothSystemFactory>;
using BluetoothSystemFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BluetoothSystemFactory>;

class BluetoothSystem;
using BluetoothSystemPtr = mojo::InterfacePtr<BluetoothSystem>;
using BluetoothSystemPtrInfo = mojo::InterfacePtrInfo<BluetoothSystem>;
using ThreadSafeBluetoothSystemPtr =
    mojo::ThreadSafeInterfacePtr<BluetoothSystem>;
using BluetoothSystemRequest = mojo::InterfaceRequest<BluetoothSystem>;
using BluetoothSystemAssociatedPtr =
    mojo::AssociatedInterfacePtr<BluetoothSystem>;
using ThreadSafeBluetoothSystemAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BluetoothSystem>;
using BluetoothSystemAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BluetoothSystem>;
using BluetoothSystemAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BluetoothSystem>;

class BluetoothSystemClient;
using BluetoothSystemClientPtr = mojo::InterfacePtr<BluetoothSystemClient>;
using BluetoothSystemClientPtrInfo = mojo::InterfacePtrInfo<BluetoothSystemClient>;
using ThreadSafeBluetoothSystemClientPtr =
    mojo::ThreadSafeInterfacePtr<BluetoothSystemClient>;
using BluetoothSystemClientRequest = mojo::InterfaceRequest<BluetoothSystemClient>;
using BluetoothSystemClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BluetoothSystemClient>;
using ThreadSafeBluetoothSystemClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BluetoothSystemClient>;
using BluetoothSystemClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BluetoothSystemClient>;
using BluetoothSystemClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BluetoothSystemClient>;




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_FORWARD_H_