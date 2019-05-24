// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_BLINK_FORWARD_H_



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




namespace mojo {
namespace test {
}  // namespace mojo
}  // namespace test


namespace mojo {
namespace test {
namespace blink {
class PingService;
using PingServicePtr = mojo::InterfacePtr<PingService>;
using PingServicePtrInfo = mojo::InterfacePtrInfo<PingService>;
using ThreadSafePingServicePtr =
    mojo::ThreadSafeInterfacePtr<PingService>;
using PingServiceRequest = mojo::InterfaceRequest<PingService>;
using PingServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PingService>;
using ThreadSafePingServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PingService>;
using PingServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PingService>;
using PingServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PingService>;

class EchoService;
using EchoServicePtr = mojo::InterfacePtr<EchoService>;
using EchoServicePtrInfo = mojo::InterfacePtrInfo<EchoService>;
using ThreadSafeEchoServicePtr =
    mojo::ThreadSafeInterfacePtr<EchoService>;
using EchoServiceRequest = mojo::InterfaceRequest<EchoService>;
using EchoServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<EchoService>;
using ThreadSafeEchoServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EchoService>;
using EchoServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EchoService>;
using EchoServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EchoService>;

class HandleTrampoline;
using HandleTrampolinePtr = mojo::InterfacePtr<HandleTrampoline>;
using HandleTrampolinePtrInfo = mojo::InterfacePtrInfo<HandleTrampoline>;
using ThreadSafeHandleTrampolinePtr =
    mojo::ThreadSafeInterfacePtr<HandleTrampoline>;
using HandleTrampolineRequest = mojo::InterfaceRequest<HandleTrampoline>;
using HandleTrampolineAssociatedPtr =
    mojo::AssociatedInterfacePtr<HandleTrampoline>;
using ThreadSafeHandleTrampolineAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HandleTrampoline>;
using HandleTrampolineAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HandleTrampoline>;
using HandleTrampolineAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HandleTrampoline>;




}  // namespace blink
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_BLINK_FORWARD_H_