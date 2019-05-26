// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_FORWARD_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_FORWARD_H_



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






namespace ime {
namespace mojom {
class ImeEngineFactoryRegistry;
using ImeEngineFactoryRegistryPtr = mojo::InterfacePtr<ImeEngineFactoryRegistry>;
using ImeEngineFactoryRegistryPtrInfo = mojo::InterfacePtrInfo<ImeEngineFactoryRegistry>;
using ThreadSafeImeEngineFactoryRegistryPtr =
    mojo::ThreadSafeInterfacePtr<ImeEngineFactoryRegistry>;
using ImeEngineFactoryRegistryRequest = mojo::InterfaceRequest<ImeEngineFactoryRegistry>;
using ImeEngineFactoryRegistryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImeEngineFactoryRegistry>;
using ThreadSafeImeEngineFactoryRegistryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImeEngineFactoryRegistry>;
using ImeEngineFactoryRegistryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImeEngineFactoryRegistry>;
using ImeEngineFactoryRegistryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImeEngineFactoryRegistry>;




}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_FORWARD_H_