// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_FORWARD_H_



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






namespace network {
namespace mojom {
class DataPipeGetter;
using DataPipeGetterPtr = mojo::InterfacePtr<DataPipeGetter>;
using DataPipeGetterPtrInfo = mojo::InterfacePtrInfo<DataPipeGetter>;
using ThreadSafeDataPipeGetterPtr =
    mojo::ThreadSafeInterfacePtr<DataPipeGetter>;
using DataPipeGetterRequest = mojo::InterfaceRequest<DataPipeGetter>;
using DataPipeGetterAssociatedPtr =
    mojo::AssociatedInterfacePtr<DataPipeGetter>;
using ThreadSafeDataPipeGetterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DataPipeGetter>;
using DataPipeGetterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DataPipeGetter>;
using DataPipeGetterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DataPipeGetter>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_FORWARD_H_