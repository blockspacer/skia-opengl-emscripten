// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_FORWARD_H_
#define IPC_IPC_MOJOM_FORWARD_H_

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
#include "base/component_export.h"


#if defined(ENABLE_GIPC)
namespace IPC {
namespace mojom {
class MessageDataView;

class Message;
using MessagePtr = mojo::StructPtr<Message>;

class GenericInterface;
using GenericInterfacePtr = mojo::InterfacePtr<GenericInterface>;
using GenericInterfacePtrInfo = mojo::InterfacePtrInfo<GenericInterface>;
using ThreadSafeGenericInterfacePtr =
    mojo::ThreadSafeInterfacePtr<GenericInterface>;
using GenericInterfaceRequest = mojo::InterfaceRequest<GenericInterface>;
using GenericInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GenericInterface>;
using ThreadSafeGenericInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GenericInterface>;
using GenericInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GenericInterface>;
using GenericInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GenericInterface>;

class Channel;
using ChannelPtr = mojo::InterfacePtr<Channel>;
using ChannelPtrInfo = mojo::InterfacePtrInfo<Channel>;
using ThreadSafeChannelPtr =
    mojo::ThreadSafeInterfacePtr<Channel>;
using ChannelRequest = mojo::InterfaceRequest<Channel>;
using ChannelAssociatedPtr =
    mojo::AssociatedInterfacePtr<Channel>;
using ThreadSafeChannelAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Channel>;
using ChannelAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Channel>;
using ChannelAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Channel>;

class ChannelBootstrap;
using ChannelBootstrapPtr = mojo::InterfacePtr<ChannelBootstrap>;
using ChannelBootstrapPtrInfo = mojo::InterfacePtrInfo<ChannelBootstrap>;
using ThreadSafeChannelBootstrapPtr =
    mojo::ThreadSafeInterfacePtr<ChannelBootstrap>;
using ChannelBootstrapRequest = mojo::InterfaceRequest<ChannelBootstrap>;
using ChannelBootstrapAssociatedPtr =
    mojo::AssociatedInterfacePtr<ChannelBootstrap>;
using ThreadSafeChannelBootstrapAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ChannelBootstrap>;
using ChannelBootstrapAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ChannelBootstrap>;
using ChannelBootstrapAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ChannelBootstrap>;




}  // namespace mojom
}  // namespace IPC
#include "ipc/message_view.h"
#endif // ENABLE_GIPC

#endif  // IPC_IPC_MOJOM_FORWARD_H_
