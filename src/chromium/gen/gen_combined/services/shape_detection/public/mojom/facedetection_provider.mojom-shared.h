// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_SHARED_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/shape_detection/public/mojom/facedetection_provider.mojom-shared-internal.h"
#include "services/shape_detection/public/mojom/facedetection.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace shape_detection {
namespace mojom {


}  // namespace mojom
}  // namespace shape_detection

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace shape_detection {
namespace mojom {
// Interface base classes. They are used for type safety check.
class FaceDetectionProviderInterfaceBase {};

using FaceDetectionProviderPtrDataView =
    mojo::InterfacePtrDataView<FaceDetectionProviderInterfaceBase>;
using FaceDetectionProviderRequestDataView =
    mojo::InterfaceRequestDataView<FaceDetectionProviderInterfaceBase>;
using FaceDetectionProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FaceDetectionProviderInterfaceBase>;
using FaceDetectionProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FaceDetectionProviderInterfaceBase>;


}  // namespace mojom
}  // namespace shape_detection

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace shape_detection {
namespace mojom {


}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_SHARED_H_