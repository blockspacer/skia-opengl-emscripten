// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_FORWARD_H_



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


#include "content/common/content_export.h"




namespace blink {
namespace mojom {
class BroadcastChannelClient;
using BroadcastChannelClientPtr = mojo::InterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientPtrInfo = mojo::InterfacePtrInfo<BroadcastChannelClient>;
using ThreadSafeBroadcastChannelClientPtr =
    mojo::ThreadSafeInterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientRequest = mojo::InterfaceRequest<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BroadcastChannelClient>;
using ThreadSafeBroadcastChannelClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BroadcastChannelClient>;
using BroadcastChannelClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BroadcastChannelClient>;

class BroadcastChannelProvider;
using BroadcastChannelProviderPtr = mojo::InterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderPtrInfo = mojo::InterfacePtrInfo<BroadcastChannelProvider>;
using ThreadSafeBroadcastChannelProviderPtr =
    mojo::ThreadSafeInterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderRequest = mojo::InterfaceRequest<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<BroadcastChannelProvider>;
using ThreadSafeBroadcastChannelProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BroadcastChannelProvider>;
using BroadcastChannelProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BroadcastChannelProvider>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_FORWARD_H_