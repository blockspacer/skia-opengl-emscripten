// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"




namespace mojo {
namespace native {
class SerializedHandleDataView;

class NativeStructDataView;


enum class SerializedHandleType : int32_t;
class SerializedHandle;
using SerializedHandlePtr = mojo::StructPtr<SerializedHandle>;

class NativeStruct;
using NativeStructPtr = mojo::StructPtr<NativeStruct>;




}  // namespace native
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_FORWARD_H_