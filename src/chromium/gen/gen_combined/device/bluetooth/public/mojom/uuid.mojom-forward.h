// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_FORWARD_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace bluetooth {
namespace mojom {
class UUIDDataView;

class UUID;
using UUIDPtr = mojo::InlinedStructPtr<UUID>;




}  // namespace mojom
}  // namespace bluetooth
#include "device/bluetooth/bluetooth_uuid.h"

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_FORWARD_H_