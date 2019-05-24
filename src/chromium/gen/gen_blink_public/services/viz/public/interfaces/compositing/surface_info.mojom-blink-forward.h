// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {
}  // namespace viz
}  // namespace mojom


namespace viz {
namespace mojom {
namespace blink {
class SurfaceInfo;
using SurfaceInfoPtr = mojo::StructPtr<SurfaceInfo>;




}  // namespace blink
}  // namespace mojom
}  // namespace viz
#include "components/viz/common/surfaces/surface_info.h"

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_FORWARD_H_