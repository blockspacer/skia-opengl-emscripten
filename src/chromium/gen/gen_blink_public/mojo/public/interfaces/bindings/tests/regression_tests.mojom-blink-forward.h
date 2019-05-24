// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_BLINK_FORWARD_H_

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


namespace regression_tests {

enum class EnumWithReference : int32_t;

enum class EnumWithLowercase : int32_t;

enum class EnumWithNumbers : int32_t;

enum class EnumWithK : int32_t;
}  // namespace regression_tests
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct regression_tests_internal_EnumWithReference_DataHashFn;

template <>
struct DefaultHash<::regression_tests::EnumWithReference> {
  using Hash = regression_tests_internal_EnumWithReference_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct regression_tests_internal_EnumWithLowercase_DataHashFn;

template <>
struct DefaultHash<::regression_tests::EnumWithLowercase> {
  using Hash = regression_tests_internal_EnumWithLowercase_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct regression_tests_internal_EnumWithNumbers_DataHashFn;

template <>
struct DefaultHash<::regression_tests::EnumWithNumbers> {
  using Hash = regression_tests_internal_EnumWithNumbers_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct regression_tests_internal_EnumWithK_DataHashFn;

template <>
struct DefaultHash<::regression_tests::EnumWithK> {
  using Hash = regression_tests_internal_EnumWithK_DataHashFn;
};
}  // namespace WTF


namespace regression_tests {
namespace blink {
using EnumWithReference = EnumWithReference;  // Alias for definition in the parent namespace.
using EnumWithLowercase = EnumWithLowercase;  // Alias for definition in the parent namespace.
using EnumWithNumbers = EnumWithNumbers;  // Alias for definition in the parent namespace.
using EnumWithK = EnumWithK;  // Alias for definition in the parent namespace.
class Edge;
using EdgePtr = mojo::StructPtr<Edge>;

class Vertex;
using VertexPtr = mojo::StructPtr<Vertex>;

class EmptyStruct;
using EmptyStructPtr = mojo::InlinedStructPtr<EmptyStruct>;

class A;
using APtr = mojo::StructPtr<A>;

class B;
using BPtr = mojo::StructPtr<B>;

class HandlesNameCollisionStruct;
using HandlesNameCollisionStructPtr = mojo::StructPtr<HandlesNameCollisionStruct>;

class HandlesHandleNameCollisionStruct;
using HandlesHandleNameCollisionStructPtr = mojo::StructPtr<HandlesHandleNameCollisionStruct>;

class HandlesUnionNameCollisionStruct;
using HandlesUnionNameCollisionStructPtr = mojo::StructPtr<HandlesUnionNameCollisionStruct>;

class HandlesNameCollisionUnion;

typedef mojo::InlinedStructPtr<HandlesNameCollisionUnion> HandlesNameCollisionUnionPtr;

class CheckMethodWithEmptyResponse;
using CheckMethodWithEmptyResponsePtr = mojo::InterfacePtr<CheckMethodWithEmptyResponse>;
using CheckMethodWithEmptyResponsePtrInfo = mojo::InterfacePtrInfo<CheckMethodWithEmptyResponse>;
using ThreadSafeCheckMethodWithEmptyResponsePtr =
    mojo::ThreadSafeInterfacePtr<CheckMethodWithEmptyResponse>;
using CheckMethodWithEmptyResponseRequest = mojo::InterfaceRequest<CheckMethodWithEmptyResponse>;
using CheckMethodWithEmptyResponseAssociatedPtr =
    mojo::AssociatedInterfacePtr<CheckMethodWithEmptyResponse>;
using ThreadSafeCheckMethodWithEmptyResponseAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CheckMethodWithEmptyResponse>;
using CheckMethodWithEmptyResponseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CheckMethodWithEmptyResponse>;
using CheckMethodWithEmptyResponseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CheckMethodWithEmptyResponse>;

class CheckNameCollision;
using CheckNameCollisionPtr = mojo::InterfacePtr<CheckNameCollision>;
using CheckNameCollisionPtrInfo = mojo::InterfacePtrInfo<CheckNameCollision>;
using ThreadSafeCheckNameCollisionPtr =
    mojo::ThreadSafeInterfacePtr<CheckNameCollision>;
using CheckNameCollisionRequest = mojo::InterfaceRequest<CheckNameCollision>;
using CheckNameCollisionAssociatedPtr =
    mojo::AssociatedInterfacePtr<CheckNameCollision>;
using ThreadSafeCheckNameCollisionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CheckNameCollision>;
using CheckNameCollisionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CheckNameCollision>;
using CheckNameCollisionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CheckNameCollision>;

class HandlesNameCollisionInterface;
using HandlesNameCollisionInterfacePtr = mojo::InterfacePtr<HandlesNameCollisionInterface>;
using HandlesNameCollisionInterfacePtrInfo = mojo::InterfacePtrInfo<HandlesNameCollisionInterface>;
using ThreadSafeHandlesNameCollisionInterfacePtr =
    mojo::ThreadSafeInterfacePtr<HandlesNameCollisionInterface>;
using HandlesNameCollisionInterfaceRequest = mojo::InterfaceRequest<HandlesNameCollisionInterface>;
using HandlesNameCollisionInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<HandlesNameCollisionInterface>;
using ThreadSafeHandlesNameCollisionInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HandlesNameCollisionInterface>;
using HandlesNameCollisionInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HandlesNameCollisionInterface>;
using HandlesNameCollisionInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HandlesNameCollisionInterface>;




}  // namespace blink
}  // namespace regression_tests

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_BLINK_FORWARD_H_