// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_FORWARD_H_

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
class InputDeviceInfoDataView;


enum class InputDeviceSubsystem : int32_t;

enum class InputDeviceType : int32_t;
class InputDeviceInfo;
using InputDeviceInfoPtr = mojo::StructPtr<InputDeviceInfo>;

class InputDeviceManagerClient;
using InputDeviceManagerClientPtr = mojo::InterfacePtr<InputDeviceManagerClient>;
using InputDeviceManagerClientPtrInfo = mojo::InterfacePtrInfo<InputDeviceManagerClient>;
using ThreadSafeInputDeviceManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<InputDeviceManagerClient>;
using InputDeviceManagerClientRequest = mojo::InterfaceRequest<InputDeviceManagerClient>;
using InputDeviceManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputDeviceManagerClient>;
using ThreadSafeInputDeviceManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputDeviceManagerClient>;
using InputDeviceManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputDeviceManagerClient>;
using InputDeviceManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputDeviceManagerClient>;

class InputDeviceManager;
using InputDeviceManagerPtr = mojo::InterfacePtr<InputDeviceManager>;
using InputDeviceManagerPtrInfo = mojo::InterfacePtrInfo<InputDeviceManager>;
using ThreadSafeInputDeviceManagerPtr =
    mojo::ThreadSafeInterfacePtr<InputDeviceManager>;
using InputDeviceManagerRequest = mojo::InterfaceRequest<InputDeviceManager>;
using InputDeviceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputDeviceManager>;
using ThreadSafeInputDeviceManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputDeviceManager>;
using InputDeviceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputDeviceManager>;
using InputDeviceManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputDeviceManager>;




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_FORWARD_H_