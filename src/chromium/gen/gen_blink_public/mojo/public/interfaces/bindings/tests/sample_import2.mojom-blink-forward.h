// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace imported {

enum class Color : int32_t;
}  // namespace imported
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct imported_internal_Color_DataHashFn;

template <>
struct DefaultHash<::imported::Color> {
  using Hash = imported_internal_Color_DataHashFn;
};
}  // namespace WTF


namespace imported {
namespace blink {
using Color = Color;  // Alias for definition in the parent namespace.
class Size;
using SizePtr = mojo::InlinedStructPtr<Size>;

class Thing;
using ThingPtr = mojo::StructPtr<Thing>;




}  // namespace blink
}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_BLINK_FORWARD_H_