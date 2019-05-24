// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_FORWARD_H_

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
class WrapperStructDataView;

class DummyStructDataView;

class SmallStructDataView;

class SmallStructNonNullableUnionDataView;

class SmallObjStructDataView;

class TryNonNullStructDataView;

class ImportedUnionStructDataView;

class PodUnionDataView;
class ObjectUnionDataView;
class HandleUnionDataView;
class OldUnionDataView;
class NewUnionDataView;
class ImportedUnionUnionDataView;

enum class AnEnum : int32_t;

enum class AnExtensibleEnum : int32_t;
class WrapperStruct;
using WrapperStructPtr = mojo::StructPtr<WrapperStruct>;

class DummyStruct;
using DummyStructPtr = mojo::InlinedStructPtr<DummyStruct>;

class SmallStruct;
using SmallStructPtr = mojo::StructPtr<SmallStruct>;

class SmallStructNonNullableUnion;
using SmallStructNonNullableUnionPtr = mojo::StructPtr<SmallStructNonNullableUnion>;

class SmallObjStruct;
using SmallObjStructPtr = mojo::StructPtr<SmallObjStruct>;

class TryNonNullStruct;
using TryNonNullStructPtr = mojo::StructPtr<TryNonNullStruct>;

class ImportedUnionStruct;
using ImportedUnionStructPtr = mojo::StructPtr<ImportedUnionStruct>;

class PodUnion;

typedef mojo::InlinedStructPtr<PodUnion> PodUnionPtr;

class ObjectUnion;

typedef mojo::StructPtr<ObjectUnion> ObjectUnionPtr;

class HandleUnion;

typedef mojo::StructPtr<HandleUnion> HandleUnionPtr;

class OldUnion;

typedef mojo::InlinedStructPtr<OldUnion> OldUnionPtr;

class NewUnion;

typedef mojo::InlinedStructPtr<NewUnion> NewUnionPtr;

class ImportedUnionUnion;

typedef mojo::StructPtr<ImportedUnionUnion> ImportedUnionUnionPtr;

class SmallCache;
using SmallCachePtr = mojo::InterfacePtr<SmallCache>;
using SmallCachePtrInfo = mojo::InterfacePtrInfo<SmallCache>;
using ThreadSafeSmallCachePtr =
    mojo::ThreadSafeInterfacePtr<SmallCache>;
using SmallCacheRequest = mojo::InterfaceRequest<SmallCache>;
using SmallCacheAssociatedPtr =
    mojo::AssociatedInterfacePtr<SmallCache>;
using ThreadSafeSmallCacheAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SmallCache>;
using SmallCacheAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SmallCache>;
using SmallCacheAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SmallCache>;

class UnionInterface;
using UnionInterfacePtr = mojo::InterfacePtr<UnionInterface>;
using UnionInterfacePtrInfo = mojo::InterfacePtrInfo<UnionInterface>;
using ThreadSafeUnionInterfacePtr =
    mojo::ThreadSafeInterfacePtr<UnionInterface>;
using UnionInterfaceRequest = mojo::InterfaceRequest<UnionInterface>;
using UnionInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<UnionInterface>;
using ThreadSafeUnionInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UnionInterface>;
using UnionInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UnionInterface>;
using UnionInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UnionInterface>;




}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_FORWARD_H_