// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class Constants_UnusedStruct_InternalDataView;


COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_CONSTANTS) extern const char kServiceName[];

constexpr uint64_t kSystemInstanceGroupHigh = 0xE90E5C501330C043ULL;

constexpr uint64_t kSystemInstanceGroupLow = 0x82B0A84F50CF8D84ULL;
class Constants_UnusedStruct_Internal;
using Constants_UnusedStruct_InternalPtr = mojo::InlinedStructPtr<Constants_UnusedStruct_Internal>;




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_FORWARD_H_