// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class LocalSurfaceIdAllocationDataView;

class LocalSurfaceIdAllocation;
using LocalSurfaceIdAllocationPtr = mojo::StructPtr<LocalSurfaceIdAllocation>;




}  // namespace mojom
}  // namespace viz
#include "components/viz/common/surfaces/local_surface_id_allocation.h"

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_FORWARD_H_