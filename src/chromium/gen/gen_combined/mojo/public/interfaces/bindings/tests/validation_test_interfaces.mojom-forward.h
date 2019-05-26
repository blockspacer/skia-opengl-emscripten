// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_FORWARD_H_

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




namespace mojo {
namespace test {
class StructADataView;

class StructBDataView;

class StructCDataView;

class StructDDataView;

class StructEDataView;

class StructFDataView;

class StructGDataView;

class BasicStructDataView;

class StructWithEnumDataView;

class RecursiveDataView;

class UnionADataView;

enum class EnumA : int32_t;

enum class EnumB : int32_t;

enum class EmptyEnum : int32_t;

enum class ExtensibleEmptyEnum : int32_t;

enum class BasicEnum : int32_t;

enum class StructWithEnum_EnumWithin : int32_t;
class StructA;
using StructAPtr = mojo::InlinedStructPtr<StructA>;

class StructB;
using StructBPtr = mojo::StructPtr<StructB>;

class StructC;
using StructCPtr = mojo::StructPtr<StructC>;

class StructD;
using StructDPtr = mojo::StructPtr<StructD>;

class StructE;
using StructEPtr = mojo::StructPtr<StructE>;

class StructF;
using StructFPtr = mojo::StructPtr<StructF>;

class StructG;
using StructGPtr = mojo::StructPtr<StructG>;

class BasicStruct;
using BasicStructPtr = mojo::InlinedStructPtr<BasicStruct>;

class StructWithEnum;
using StructWithEnumPtr = mojo::InlinedStructPtr<StructWithEnum>;

class Recursive;
using RecursivePtr = mojo::StructPtr<Recursive>;

class UnionA;

typedef mojo::StructPtr<UnionA> UnionAPtr;

class InterfaceA;
using InterfaceAPtr = mojo::InterfacePtr<InterfaceA>;
using InterfaceAPtrInfo = mojo::InterfacePtrInfo<InterfaceA>;
using ThreadSafeInterfaceAPtr =
    mojo::ThreadSafeInterfacePtr<InterfaceA>;
using InterfaceARequest = mojo::InterfaceRequest<InterfaceA>;
using InterfaceAAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterfaceA>;
using ThreadSafeInterfaceAAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InterfaceA>;
using InterfaceAAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterfaceA>;
using InterfaceAAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterfaceA>;

class BoundsCheckTestInterface;
using BoundsCheckTestInterfacePtr = mojo::InterfacePtr<BoundsCheckTestInterface>;
using BoundsCheckTestInterfacePtrInfo = mojo::InterfacePtrInfo<BoundsCheckTestInterface>;
using ThreadSafeBoundsCheckTestInterfacePtr =
    mojo::ThreadSafeInterfacePtr<BoundsCheckTestInterface>;
using BoundsCheckTestInterfaceRequest = mojo::InterfaceRequest<BoundsCheckTestInterface>;
using BoundsCheckTestInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BoundsCheckTestInterface>;
using ThreadSafeBoundsCheckTestInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BoundsCheckTestInterface>;
using BoundsCheckTestInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BoundsCheckTestInterface>;
using BoundsCheckTestInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BoundsCheckTestInterface>;

class ConformanceTestInterface;
using ConformanceTestInterfacePtr = mojo::InterfacePtr<ConformanceTestInterface>;
using ConformanceTestInterfacePtrInfo = mojo::InterfacePtrInfo<ConformanceTestInterface>;
using ThreadSafeConformanceTestInterfacePtr =
    mojo::ThreadSafeInterfacePtr<ConformanceTestInterface>;
using ConformanceTestInterfaceRequest = mojo::InterfaceRequest<ConformanceTestInterface>;
using ConformanceTestInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ConformanceTestInterface>;
using ThreadSafeConformanceTestInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ConformanceTestInterface>;
using ConformanceTestInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ConformanceTestInterface>;
using ConformanceTestInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ConformanceTestInterface>;

class IntegrationTestInterface;
using IntegrationTestInterfacePtr = mojo::InterfacePtr<IntegrationTestInterface>;
using IntegrationTestInterfacePtrInfo = mojo::InterfacePtrInfo<IntegrationTestInterface>;
using ThreadSafeIntegrationTestInterfacePtr =
    mojo::ThreadSafeInterfacePtr<IntegrationTestInterface>;
using IntegrationTestInterfaceRequest = mojo::InterfaceRequest<IntegrationTestInterface>;
using IntegrationTestInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<IntegrationTestInterface>;
using ThreadSafeIntegrationTestInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IntegrationTestInterface>;
using IntegrationTestInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IntegrationTestInterface>;
using IntegrationTestInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IntegrationTestInterface>;




}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_FORWARD_H_