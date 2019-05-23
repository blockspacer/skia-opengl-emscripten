// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_FORWARD_H_



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
class VibrationManager;
using VibrationManagerPtr = mojo::InterfacePtr<VibrationManager>;
using VibrationManagerPtrInfo = mojo::InterfacePtrInfo<VibrationManager>;
using ThreadSafeVibrationManagerPtr =
    mojo::ThreadSafeInterfacePtr<VibrationManager>;
using VibrationManagerRequest = mojo::InterfaceRequest<VibrationManager>;
using VibrationManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<VibrationManager>;
using ThreadSafeVibrationManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VibrationManager>;
using VibrationManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VibrationManager>;
using VibrationManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VibrationManager>;




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_FORWARD_H_