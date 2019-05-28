// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_IMPORT_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_IMPORT_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace mojo {
namespace test {
namespace test_import {
}  // namespace mojo
}  // namespace test
}  // namespace test_import


namespace mojo {
namespace test {
namespace test_import {
namespace blink {
class ImportingStruct;
using ImportingStructPtr = mojo::StructPtr<ImportingStruct>;




}  // namespace blink
}  // namespace test_import
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_IMPORT_MOJOM_BLINK_FORWARD_H_