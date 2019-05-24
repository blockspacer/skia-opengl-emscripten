// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_FORWARD_H_

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

enum class ScopedConstants_EType : int32_t;
}  // namespace mojo
}  // namespace test
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct mojo_test_internal_ScopedConstants_EType_DataHashFn;

template <>
struct DefaultHash<::mojo::test::ScopedConstants_EType> {
  using Hash = mojo_test_internal_ScopedConstants_EType_DataHashFn;
};
}  // namespace WTF


namespace mojo {
namespace test {
namespace blink {
class NamedRegion;
using NamedRegionPtr = mojo::StructPtr<NamedRegion>;

class RectPair;
using RectPairPtr = mojo::StructPtr<RectPair>;

class EmptyStruct;
using EmptyStructPtr = mojo::InlinedStructPtr<EmptyStruct>;

using UnmappedNativeStruct = mojo::native::NativeStruct;
using UnmappedNativeStructPtr = mojo::native::NativeStructPtr;

class NoDefaultFieldValues;
using NoDefaultFieldValuesPtr = mojo::StructPtr<NoDefaultFieldValues>;

class DefaultFieldValues;
using DefaultFieldValuesPtr = mojo::StructPtr<DefaultFieldValues>;

class ScopedConstants;
using ScopedConstantsPtr = mojo::StructPtr<ScopedConstants>;

class MapKeyTypes;
using MapKeyTypesPtr = mojo::StructPtr<MapKeyTypes>;

class MapValueTypes;
using MapValueTypesPtr = mojo::StructPtr<MapValueTypes>;

class ArrayValueTypes;
using ArrayValueTypesPtr = mojo::StructPtr<ArrayValueTypes>;

class FloatNumberValues;
using FloatNumberValuesPtr = mojo::StructPtr<FloatNumberValues>;

class IntegerNumberValues;
using IntegerNumberValuesPtr = mojo::StructPtr<IntegerNumberValues>;

class UnsignedNumberValues;
using UnsignedNumberValuesPtr = mojo::StructPtr<UnsignedNumberValues>;

class BitArrayValues;
using BitArrayValuesPtr = mojo::StructPtr<BitArrayValues>;

class MultiVersionStruct;
using MultiVersionStructPtr = mojo::StructPtr<MultiVersionStruct>;

class MultiVersionStructV0;
using MultiVersionStructV0Ptr = mojo::InlinedStructPtr<MultiVersionStructV0>;

class MultiVersionStructV1;
using MultiVersionStructV1Ptr = mojo::StructPtr<MultiVersionStructV1>;

class MultiVersionStructV3;
using MultiVersionStructV3Ptr = mojo::StructPtr<MultiVersionStructV3>;

class MultiVersionStructV5;
using MultiVersionStructV5Ptr = mojo::StructPtr<MultiVersionStructV5>;

class MultiVersionStructV7;
using MultiVersionStructV7Ptr = mojo::StructPtr<MultiVersionStructV7>;

class ReorderedStruct;
using ReorderedStructPtr = mojo::InlinedStructPtr<ReorderedStruct>;

class ContainsInterface;
using ContainsInterfacePtr = mojo::StructPtr<ContainsInterface>;

class ContainsOther;
using ContainsOtherPtr = mojo::InlinedStructPtr<ContainsOther>;

class ContainsInterfaceRequest;
using ContainsInterfaceRequestPtr = mojo::StructPtr<ContainsInterfaceRequest>;

class SingleBoolStruct;
using SingleBoolStructPtr = mojo::InlinedStructPtr<SingleBoolStruct>;

class ContainsHashable;
using ContainsHashablePtr = mojo::StructPtr<ContainsHashable>;

class SimpleNestedStruct;
using SimpleNestedStructPtr = mojo::StructPtr<SimpleNestedStruct>;

class SomeInterface;
using SomeInterfacePtr = mojo::InterfacePtr<SomeInterface>;
using SomeInterfacePtrInfo = mojo::InterfacePtrInfo<SomeInterface>;
using ThreadSafeSomeInterfacePtr =
    mojo::ThreadSafeInterfacePtr<SomeInterface>;
using SomeInterfaceRequest = mojo::InterfaceRequest<SomeInterface>;
using SomeInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<SomeInterface>;
using ThreadSafeSomeInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SomeInterface>;
using SomeInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SomeInterface>;
using SomeInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SomeInterface>;




}  // namespace blink
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_FORWARD_H_