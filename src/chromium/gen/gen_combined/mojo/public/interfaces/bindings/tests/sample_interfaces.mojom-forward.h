// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_FORWARD_H_



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






namespace sample {

enum class Enum : int32_t;

constexpr uint64_t kLong = 4405ULL;
class PingTest;
using PingTestPtr = mojo::InterfacePtr<PingTest>;
using PingTestPtrInfo = mojo::InterfacePtrInfo<PingTest>;
using ThreadSafePingTestPtr =
    mojo::ThreadSafeInterfacePtr<PingTest>;
using PingTestRequest = mojo::InterfaceRequest<PingTest>;
using PingTestAssociatedPtr =
    mojo::AssociatedInterfacePtr<PingTest>;
using ThreadSafePingTestAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PingTest>;
using PingTestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PingTest>;
using PingTestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PingTest>;

class Provider;
using ProviderPtr = mojo::InterfacePtr<Provider>;
using ProviderPtrInfo = mojo::InterfacePtrInfo<Provider>;
using ThreadSafeProviderPtr =
    mojo::ThreadSafeInterfacePtr<Provider>;
using ProviderRequest = mojo::InterfaceRequest<Provider>;
using ProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<Provider>;
using ThreadSafeProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Provider>;
using ProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Provider>;
using ProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Provider>;

class IntegerAccessor;
using IntegerAccessorPtr = mojo::InterfacePtr<IntegerAccessor>;
using IntegerAccessorPtrInfo = mojo::InterfacePtrInfo<IntegerAccessor>;
using ThreadSafeIntegerAccessorPtr =
    mojo::ThreadSafeInterfacePtr<IntegerAccessor>;
using IntegerAccessorRequest = mojo::InterfaceRequest<IntegerAccessor>;
using IntegerAccessorAssociatedPtr =
    mojo::AssociatedInterfacePtr<IntegerAccessor>;
using ThreadSafeIntegerAccessorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IntegerAccessor>;
using IntegerAccessorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IntegerAccessor>;
using IntegerAccessorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IntegerAccessor>;




}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_FORWARD_H_