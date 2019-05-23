// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_FORWARD_H_

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
class StructWithConstantsDataView;


constexpr bool kBoolValue = true;

constexpr int8_t kInt8Value = -2;

constexpr uint8_t kUint8Value = 128U;

constexpr int16_t kInt16Value = -233;

constexpr uint16_t kUint16Value = 44204U;

constexpr int32_t kInt32Value = -44204;

constexpr uint32_t kUint32Value = 4294967295U;

constexpr int64_t kInt64Value = -9223372036854775807;

constexpr uint64_t kUint64Value = 9999999999999999999ULL;

constexpr double kDoubleValue = 3.14159;

constexpr double kDoubleInfinity = std::numeric_limits<double>::infinity();

constexpr double kDoubleNegativeInfinity = -std::numeric_limits<double>::infinity();

constexpr double kDoubleNaN = std::numeric_limits<double>::quiet_NaN();

constexpr float kFloatValue = 2.71828f;

constexpr float kFloatInfinity = std::numeric_limits<float>::infinity();

constexpr float kFloatNegativeInfinity = -std::numeric_limits<float>::infinity();

constexpr float kFloatNaN = std::numeric_limits<float>::quiet_NaN();

extern const char kStringValue[];
class StructWithConstants;
using StructWithConstantsPtr = mojo::InlinedStructPtr<StructWithConstants>;

class InterfaceWithConstants;
using InterfaceWithConstantsPtr = mojo::InterfacePtr<InterfaceWithConstants>;
using InterfaceWithConstantsPtrInfo = mojo::InterfacePtrInfo<InterfaceWithConstants>;
using ThreadSafeInterfaceWithConstantsPtr =
    mojo::ThreadSafeInterfacePtr<InterfaceWithConstants>;
using InterfaceWithConstantsRequest = mojo::InterfaceRequest<InterfaceWithConstants>;
using InterfaceWithConstantsAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterfaceWithConstants>;
using ThreadSafeInterfaceWithConstantsAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InterfaceWithConstants>;
using InterfaceWithConstantsAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterfaceWithConstants>;
using InterfaceWithConstantsAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterfaceWithConstants>;




}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_FORWARD_H_