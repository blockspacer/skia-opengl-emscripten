// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace mojo_base {
namespace mojom {
}  // namespace mojo_base
}  // namespace mojom


namespace mojo_base {
namespace mojom {
namespace blink {
class DictionaryValue;
using DictionaryValuePtr = mojo::StructPtr<DictionaryValue>;

class ListValue;
using ListValuePtr = mojo::StructPtr<ListValue>;

class Value;

typedef mojo::StructPtr<Value> ValuePtr;




}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_BLINK_FORWARD_H_