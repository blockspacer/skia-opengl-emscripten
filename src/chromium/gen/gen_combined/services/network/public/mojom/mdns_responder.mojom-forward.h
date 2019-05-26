// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_FORWARD_H_



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
class MdnsResponder;
using MdnsResponderPtr = mojo::InterfacePtr<MdnsResponder>;
using MdnsResponderPtrInfo = mojo::InterfacePtrInfo<MdnsResponder>;
using ThreadSafeMdnsResponderPtr =
    mojo::ThreadSafeInterfacePtr<MdnsResponder>;
using MdnsResponderRequest = mojo::InterfaceRequest<MdnsResponder>;
using MdnsResponderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MdnsResponder>;
using ThreadSafeMdnsResponderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MdnsResponder>;
using MdnsResponderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MdnsResponder>;
using MdnsResponderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MdnsResponder>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_FORWARD_H_