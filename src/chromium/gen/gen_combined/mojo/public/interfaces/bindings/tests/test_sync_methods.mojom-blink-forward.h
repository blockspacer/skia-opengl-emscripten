// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_FORWARD_H_



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
class TestSyncCodeGeneration;
using TestSyncCodeGenerationPtr = mojo::InterfacePtr<TestSyncCodeGeneration>;
using TestSyncCodeGenerationPtrInfo = mojo::InterfacePtrInfo<TestSyncCodeGeneration>;
using ThreadSafeTestSyncCodeGenerationPtr =
    mojo::ThreadSafeInterfacePtr<TestSyncCodeGeneration>;
using TestSyncCodeGenerationRequest = mojo::InterfaceRequest<TestSyncCodeGeneration>;
using TestSyncCodeGenerationAssociatedPtr =
    mojo::AssociatedInterfacePtr<TestSyncCodeGeneration>;
using ThreadSafeTestSyncCodeGenerationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TestSyncCodeGeneration>;
using TestSyncCodeGenerationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TestSyncCodeGeneration>;
using TestSyncCodeGenerationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TestSyncCodeGeneration>;

class TestSync;
using TestSyncPtr = mojo::InterfacePtr<TestSync>;
using TestSyncPtrInfo = mojo::InterfacePtrInfo<TestSync>;
using ThreadSafeTestSyncPtr =
    mojo::ThreadSafeInterfacePtr<TestSync>;
using TestSyncRequest = mojo::InterfaceRequest<TestSync>;
using TestSyncAssociatedPtr =
    mojo::AssociatedInterfacePtr<TestSync>;
using ThreadSafeTestSyncAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TestSync>;
using TestSyncAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TestSync>;
using TestSyncAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TestSync>;

class TestSyncMaster;
using TestSyncMasterPtr = mojo::InterfacePtr<TestSyncMaster>;
using TestSyncMasterPtrInfo = mojo::InterfacePtrInfo<TestSyncMaster>;
using ThreadSafeTestSyncMasterPtr =
    mojo::ThreadSafeInterfacePtr<TestSyncMaster>;
using TestSyncMasterRequest = mojo::InterfaceRequest<TestSyncMaster>;
using TestSyncMasterAssociatedPtr =
    mojo::AssociatedInterfacePtr<TestSyncMaster>;
using ThreadSafeTestSyncMasterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TestSyncMaster>;
using TestSyncMasterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TestSyncMaster>;
using TestSyncMasterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TestSyncMaster>;




}  // namespace blink
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_FORWARD_H_