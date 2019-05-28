// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_BLINK_FORWARD_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_BLINK_FORWARD_H_

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


namespace ime {
namespace mojom {
}  // namespace ime
}  // namespace mojom


namespace ime {
namespace mojom {
namespace blink {
class EditorInfo;
using EditorInfoPtr = mojo::StructPtr<EditorInfo>;

class ImeEngine;
using ImeEnginePtr = mojo::InterfacePtr<ImeEngine>;
using ImeEnginePtrInfo = mojo::InterfacePtrInfo<ImeEngine>;
using ThreadSafeImeEnginePtr =
    mojo::ThreadSafeInterfacePtr<ImeEngine>;
using ImeEngineRequest = mojo::InterfaceRequest<ImeEngine>;
using ImeEngineAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImeEngine>;
using ThreadSafeImeEngineAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImeEngine>;
using ImeEngineAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImeEngine>;
using ImeEngineAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImeEngine>;

class ImeEngineClient;
using ImeEngineClientPtr = mojo::InterfacePtr<ImeEngineClient>;
using ImeEngineClientPtrInfo = mojo::InterfacePtrInfo<ImeEngineClient>;
using ThreadSafeImeEngineClientPtr =
    mojo::ThreadSafeInterfacePtr<ImeEngineClient>;
using ImeEngineClientRequest = mojo::InterfaceRequest<ImeEngineClient>;
using ImeEngineClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImeEngineClient>;
using ThreadSafeImeEngineClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImeEngineClient>;
using ImeEngineClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImeEngineClient>;
using ImeEngineClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImeEngineClient>;

class ImeEngineFactory;
using ImeEngineFactoryPtr = mojo::InterfacePtr<ImeEngineFactory>;
using ImeEngineFactoryPtrInfo = mojo::InterfacePtrInfo<ImeEngineFactory>;
using ThreadSafeImeEngineFactoryPtr =
    mojo::ThreadSafeInterfacePtr<ImeEngineFactory>;
using ImeEngineFactoryRequest = mojo::InterfaceRequest<ImeEngineFactory>;
using ImeEngineFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImeEngineFactory>;
using ThreadSafeImeEngineFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImeEngineFactory>;
using ImeEngineFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImeEngineFactory>;
using ImeEngineFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImeEngineFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_BLINK_FORWARD_H_