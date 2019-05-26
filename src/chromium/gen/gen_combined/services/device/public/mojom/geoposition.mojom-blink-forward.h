// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {

enum class Geoposition_ErrorCode : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_Geoposition_ErrorCode_DataHashFn;

template <>
struct DefaultHash<::device::mojom::Geoposition_ErrorCode> {
  using Hash = device_mojom_internal_Geoposition_ErrorCode_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {

constexpr double kBadLatitudeLongitude = 200;

constexpr double kBadAltitude = -10000;

constexpr double kBadAccuracy = -1;

constexpr double kBadHeading = -1;

constexpr double kBadSpeed = -1;
class Geoposition;
using GeopositionPtr = mojo::StructPtr<Geoposition>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_BLINK_FORWARD_H_