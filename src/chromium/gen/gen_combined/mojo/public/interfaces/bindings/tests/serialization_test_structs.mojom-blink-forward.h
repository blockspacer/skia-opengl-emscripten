// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojo {
namespace test {
}  // namespace mojo
}  // namespace test


namespace mojo {
namespace test {
namespace blink {
class Struct1;
using Struct1Ptr = mojo::InlinedStructPtr<Struct1>;

class Struct2;
using Struct2Ptr = mojo::StructPtr<Struct2>;

class Struct3;
using Struct3Ptr = mojo::StructPtr<Struct3>;

class Struct4;
using Struct4Ptr = mojo::StructPtr<Struct4>;

class Struct5;
using Struct5Ptr = mojo::StructPtr<Struct5>;

class Struct6;
using Struct6Ptr = mojo::InlinedStructPtr<Struct6>;

class StructOfNullables;
using StructOfNullablesPtr = mojo::StructPtr<StructOfNullables>;




}  // namespace blink
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_FORWARD_H_