// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {

enum class SensorType : int32_t;

enum class ReportingMode : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_SensorType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::SensorType> {
  using Hash = device_mojom_internal_SensorType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_ReportingMode_DataHashFn;

template <>
struct DefaultHash<::device::mojom::ReportingMode> {
  using Hash = device_mojom_internal_ReportingMode_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using SensorType = SensorType;  // Alias for definition in the parent namespace.
using ReportingMode = ReportingMode;  // Alias for definition in the parent namespace.
class SensorConfiguration;
using SensorConfigurationPtr = mojo::InlinedStructPtr<SensorConfiguration>;

class Sensor;
using SensorPtr = mojo::InterfacePtr<Sensor>;
using SensorPtrInfo = mojo::InterfacePtrInfo<Sensor>;
using ThreadSafeSensorPtr =
    mojo::ThreadSafeInterfacePtr<Sensor>;
using SensorRequest = mojo::InterfaceRequest<Sensor>;
using SensorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Sensor>;
using ThreadSafeSensorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Sensor>;
using SensorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Sensor>;
using SensorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Sensor>;

class SensorClient;
using SensorClientPtr = mojo::InterfacePtr<SensorClient>;
using SensorClientPtrInfo = mojo::InterfacePtrInfo<SensorClient>;
using ThreadSafeSensorClientPtr =
    mojo::ThreadSafeInterfacePtr<SensorClient>;
using SensorClientRequest = mojo::InterfaceRequest<SensorClient>;
using SensorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SensorClient>;
using ThreadSafeSensorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SensorClient>;
using SensorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SensorClient>;
using SensorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SensorClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_BLINK_FORWARD_H_