// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class RectDataView;

class TypemappedRectDataView;

class SharedTypemappedRectDataView;

class Rect;
using RectPtr = mojo::InlinedStructPtr<Rect>;

class TypemappedRect;
using TypemappedRectPtr = mojo::InlinedStructPtr<TypemappedRect>;

class SharedTypemappedRect;
using SharedTypemappedRectPtr = mojo::InlinedStructPtr<SharedTypemappedRect>;




}  // namespace test
}  // namespace mojo
#include "mojo/public/cpp/bindings/tests/rect_chromium.h"
#include "mojo/public/cpp/bindings/tests/shared_rect.h"

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_RECT_MOJOM_FORWARD_H_