// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_BLINK_FORWARD_H_



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
class A;
using APtr = mojo::InterfacePtr<A>;
using APtrInfo = mojo::InterfacePtrInfo<A>;
using ThreadSafeAPtr =
    mojo::ThreadSafeInterfacePtr<A>;
using ARequest = mojo::InterfaceRequest<A>;
using AAssociatedPtr =
    mojo::AssociatedInterfacePtr<A>;
using ThreadSafeAAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<A>;
using AAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<A>;
using AAssociatedRequest =
    mojo::AssociatedInterfaceRequest<A>;

class B;
using BPtr = mojo::InterfacePtr<B>;
using BPtrInfo = mojo::InterfacePtrInfo<B>;
using ThreadSafeBPtr =
    mojo::ThreadSafeInterfacePtr<B>;
using BRequest = mojo::InterfaceRequest<B>;
using BAssociatedPtr =
    mojo::AssociatedInterfacePtr<B>;
using ThreadSafeBAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<B>;
using BAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<B>;
using BAssociatedRequest =
    mojo::AssociatedInterfaceRequest<B>;

class C;
using CPtr = mojo::InterfacePtr<C>;
using CPtrInfo = mojo::InterfacePtrInfo<C>;
using ThreadSafeCPtr =
    mojo::ThreadSafeInterfacePtr<C>;
using CRequest = mojo::InterfaceRequest<C>;
using CAssociatedPtr =
    mojo::AssociatedInterfacePtr<C>;
using ThreadSafeCAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<C>;
using CAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<C>;
using CAssociatedRequest =
    mojo::AssociatedInterfaceRequest<C>;




}  // namespace blink
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_BLINK_FORWARD_H_