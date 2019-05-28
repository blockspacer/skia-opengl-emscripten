// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_FORWARD_H_

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
class TestWTFCodeGenerationDataView;

class TestWTFStructDataView;

class TestWTFStructWrapperDataView;

class TestWTFCodeGeneration2DataView;

enum class TopLevelEnum : int32_t;

enum class TestWTFStruct_NestedEnum : int32_t;

enum class TestWTF_NestedEnum : int32_t;
class TestWTFCodeGeneration;
using TestWTFCodeGenerationPtr = mojo::StructPtr<TestWTFCodeGeneration>;

class TestWTFStruct;
using TestWTFStructPtr = mojo::InlinedStructPtr<TestWTFStruct>;

class TestWTFStructWrapper;
using TestWTFStructWrapperPtr = mojo::StructPtr<TestWTFStructWrapper>;

class TestWTFCodeGeneration2;

typedef mojo::StructPtr<TestWTFCodeGeneration2> TestWTFCodeGeneration2Ptr;

class TestWTF;
using TestWTFPtr = mojo::InterfacePtr<TestWTF>;
using TestWTFPtrInfo = mojo::InterfacePtrInfo<TestWTF>;
using ThreadSafeTestWTFPtr =
    mojo::ThreadSafeInterfacePtr<TestWTF>;
using TestWTFRequest = mojo::InterfaceRequest<TestWTF>;
using TestWTFAssociatedPtr =
    mojo::AssociatedInterfacePtr<TestWTF>;
using ThreadSafeTestWTFAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TestWTF>;
using TestWTFAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TestWTF>;
using TestWTFAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TestWTF>;




}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_FORWARD_H_