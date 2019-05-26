// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class ServiceFilterDataView;

class ServiceFilter;
using ServiceFilterPtr = mojo::StructPtr<ServiceFilter>;




}  // namespace mojom
}  // namespace service_manager
#include "services/service_manager/public/cpp/service_filter.h"

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_FORWARD_H_