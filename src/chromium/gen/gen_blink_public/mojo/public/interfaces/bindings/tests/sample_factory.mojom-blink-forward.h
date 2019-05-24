// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_BLINK_FORWARD_H_

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


namespace sample {
}  // namespace sample


namespace sample {
namespace blink {
class Request;
using RequestPtr = mojo::StructPtr<Request>;

class Response;
using ResponsePtr = mojo::StructPtr<Response>;

class NamedObject;
using NamedObjectPtr = mojo::InterfacePtr<NamedObject>;
using NamedObjectPtrInfo = mojo::InterfacePtrInfo<NamedObject>;
using ThreadSafeNamedObjectPtr =
    mojo::ThreadSafeInterfacePtr<NamedObject>;
using NamedObjectRequest = mojo::InterfaceRequest<NamedObject>;
using NamedObjectAssociatedPtr =
    mojo::AssociatedInterfacePtr<NamedObject>;
using ThreadSafeNamedObjectAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NamedObject>;
using NamedObjectAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NamedObject>;
using NamedObjectAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NamedObject>;

class Factory;
using FactoryPtr = mojo::InterfacePtr<Factory>;
using FactoryPtrInfo = mojo::InterfacePtrInfo<Factory>;
using ThreadSafeFactoryPtr =
    mojo::ThreadSafeInterfacePtr<Factory>;
using FactoryRequest = mojo::InterfaceRequest<Factory>;
using FactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<Factory>;
using ThreadSafeFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Factory>;
using FactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Factory>;
using FactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Factory>;




}  // namespace blink
}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_BLINK_FORWARD_H_