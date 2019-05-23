// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_FORWARD_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class UsbDeviceFilterDataView;

class UsbEnumerationOptionsDataView;

class UsbDeviceFilter;
using UsbDeviceFilterPtr = mojo::StructPtr<UsbDeviceFilter>;

class UsbEnumerationOptions;
using UsbEnumerationOptionsPtr = mojo::StructPtr<UsbEnumerationOptions>;




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_FORWARD_H_