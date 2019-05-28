// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {
class RemoterFactory;
using RemoterFactoryPtr = mojo::InterfacePtr<RemoterFactory>;
using RemoterFactoryPtrInfo = mojo::InterfacePtrInfo<RemoterFactory>;
using ThreadSafeRemoterFactoryPtr =
    mojo::ThreadSafeInterfacePtr<RemoterFactory>;
using RemoterFactoryRequest = mojo::InterfaceRequest<RemoterFactory>;
using RemoterFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemoterFactory>;
using ThreadSafeRemoterFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemoterFactory>;
using RemoterFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemoterFactory>;
using RemoterFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemoterFactory>;

class RemotingDataStreamSender;
using RemotingDataStreamSenderPtr = mojo::InterfacePtr<RemotingDataStreamSender>;
using RemotingDataStreamSenderPtrInfo = mojo::InterfacePtrInfo<RemotingDataStreamSender>;
using ThreadSafeRemotingDataStreamSenderPtr =
    mojo::ThreadSafeInterfacePtr<RemotingDataStreamSender>;
using RemotingDataStreamSenderRequest = mojo::InterfaceRequest<RemotingDataStreamSender>;
using RemotingDataStreamSenderAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemotingDataStreamSender>;
using ThreadSafeRemotingDataStreamSenderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemotingDataStreamSender>;
using RemotingDataStreamSenderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemotingDataStreamSender>;
using RemotingDataStreamSenderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemotingDataStreamSender>;

class Remoter;
using RemoterPtr = mojo::InterfacePtr<Remoter>;
using RemoterPtrInfo = mojo::InterfacePtrInfo<Remoter>;
using ThreadSafeRemoterPtr =
    mojo::ThreadSafeInterfacePtr<Remoter>;
using RemoterRequest = mojo::InterfaceRequest<Remoter>;
using RemoterAssociatedPtr =
    mojo::AssociatedInterfacePtr<Remoter>;
using ThreadSafeRemoterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Remoter>;
using RemoterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Remoter>;
using RemoterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Remoter>;

class RemotingSource;
using RemotingSourcePtr = mojo::InterfacePtr<RemotingSource>;
using RemotingSourcePtrInfo = mojo::InterfacePtrInfo<RemotingSource>;
using ThreadSafeRemotingSourcePtr =
    mojo::ThreadSafeInterfacePtr<RemotingSource>;
using RemotingSourceRequest = mojo::InterfaceRequest<RemotingSource>;
using RemotingSourceAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemotingSource>;
using ThreadSafeRemotingSourceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemotingSource>;
using RemotingSourceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemotingSource>;
using RemotingSourceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemotingSource>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_FORWARD_H_