// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_FORWARD_H_

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
class BarDataView;

class FooDataView;

class DefaultsTestDataView;

class StructWithHoleV1DataView;

class StructWithHoleV2DataView;


enum class Bar_Type : int32_t;

enum class Service_BazOptions : int32_t;

constexpr uint8_t kTwelve = 12U;
class Bar;
using BarPtr = mojo::InlinedStructPtr<Bar>;

class Foo;
using FooPtr = mojo::StructPtr<Foo>;

class DefaultsTest;
using DefaultsTestPtr = mojo::StructPtr<DefaultsTest>;

class StructWithHoleV1;
using StructWithHoleV1Ptr = mojo::InlinedStructPtr<StructWithHoleV1>;

class StructWithHoleV2;
using StructWithHoleV2Ptr = mojo::InlinedStructPtr<StructWithHoleV2>;

class Service;
using ServicePtr = mojo::InterfacePtr<Service>;
using ServicePtrInfo = mojo::InterfacePtrInfo<Service>;
using ThreadSafeServicePtr =
    mojo::ThreadSafeInterfacePtr<Service>;
using ServiceRequest = mojo::InterfaceRequest<Service>;
using ServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Service>;
using ThreadSafeServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Service>;
using ServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Service>;
using ServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Service>;

class Port;
using PortPtr = mojo::InterfacePtr<Port>;
using PortPtrInfo = mojo::InterfacePtrInfo<Port>;
using ThreadSafePortPtr =
    mojo::ThreadSafeInterfacePtr<Port>;
using PortRequest = mojo::InterfaceRequest<Port>;
using PortAssociatedPtr =
    mojo::AssociatedInterfacePtr<Port>;
using ThreadSafePortAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Port>;
using PortAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Port>;
using PortAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Port>;




}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_FORWARD_H_