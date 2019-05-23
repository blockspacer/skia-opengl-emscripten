// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class GeopositionDataView;


enum class Geoposition_ErrorCode : int32_t;

constexpr double kBadLatitudeLongitude = 200;

constexpr double kBadAltitude = -10000;

constexpr double kBadAccuracy = -1;

constexpr double kBadHeading = -1;

constexpr double kBadSpeed = -1;
class Geoposition;
using GeopositionPtr = mojo::StructPtr<Geoposition>;




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_FORWARD_H_