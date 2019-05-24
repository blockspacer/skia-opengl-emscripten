// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace imported {
class SizeDataView;

class ThingDataView;


enum class Color : int32_t;
class Size;
using SizePtr = mojo::InlinedStructPtr<Size>;

class Thing;
using ThingPtr = mojo::StructPtr<Thing>;




}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_FORWARD_H_