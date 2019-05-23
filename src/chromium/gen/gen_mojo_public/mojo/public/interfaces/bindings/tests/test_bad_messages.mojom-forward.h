// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_FORWARD_H_



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
class TestBadMessages;
using TestBadMessagesPtr = mojo::InterfacePtr<TestBadMessages>;
using TestBadMessagesPtrInfo = mojo::InterfacePtrInfo<TestBadMessages>;
using ThreadSafeTestBadMessagesPtr =
    mojo::ThreadSafeInterfacePtr<TestBadMessages>;
using TestBadMessagesRequest = mojo::InterfaceRequest<TestBadMessages>;
using TestBadMessagesAssociatedPtr =
    mojo::AssociatedInterfacePtr<TestBadMessages>;
using ThreadSafeTestBadMessagesAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TestBadMessages>;
using TestBadMessagesAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TestBadMessages>;
using TestBadMessagesAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TestBadMessages>;




}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_FORWARD_H_