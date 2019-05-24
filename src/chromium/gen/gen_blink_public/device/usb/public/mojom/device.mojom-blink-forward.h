// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_FORWARD_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_FORWARD_H_

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

enum class UsbOpenDeviceError : int32_t;

enum class UsbTransferDirection : int32_t;

enum class UsbControlTransferType : int32_t;

enum class UsbControlTransferRecipient : int32_t;

enum class UsbTransferType : int32_t;

enum class UsbSynchronizationType : int32_t;

enum class UsbUsageType : int32_t;

enum class UsbTransferStatus : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_UsbOpenDeviceError_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbOpenDeviceError> {
  using Hash = device_mojom_internal_UsbOpenDeviceError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbTransferDirection_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbTransferDirection> {
  using Hash = device_mojom_internal_UsbTransferDirection_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbControlTransferType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbControlTransferType> {
  using Hash = device_mojom_internal_UsbControlTransferType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbControlTransferRecipient_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbControlTransferRecipient> {
  using Hash = device_mojom_internal_UsbControlTransferRecipient_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbTransferType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbTransferType> {
  using Hash = device_mojom_internal_UsbTransferType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbSynchronizationType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbSynchronizationType> {
  using Hash = device_mojom_internal_UsbSynchronizationType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbUsageType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbUsageType> {
  using Hash = device_mojom_internal_UsbUsageType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_UsbTransferStatus_DataHashFn;

template <>
struct DefaultHash<::device::mojom::UsbTransferStatus> {
  using Hash = device_mojom_internal_UsbTransferStatus_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using UsbOpenDeviceError = UsbOpenDeviceError;  // Alias for definition in the parent namespace.
using UsbTransferDirection = UsbTransferDirection;  // Alias for definition in the parent namespace.
using UsbControlTransferType = UsbControlTransferType;  // Alias for definition in the parent namespace.
using UsbControlTransferRecipient = UsbControlTransferRecipient;  // Alias for definition in the parent namespace.
using UsbTransferType = UsbTransferType;  // Alias for definition in the parent namespace.
using UsbSynchronizationType = UsbSynchronizationType;  // Alias for definition in the parent namespace.
using UsbUsageType = UsbUsageType;  // Alias for definition in the parent namespace.
using UsbTransferStatus = UsbTransferStatus;  // Alias for definition in the parent namespace.
class UsbEndpointInfo;
using UsbEndpointInfoPtr = mojo::StructPtr<UsbEndpointInfo>;

class UsbAlternateInterfaceInfo;
using UsbAlternateInterfaceInfoPtr = mojo::StructPtr<UsbAlternateInterfaceInfo>;

class UsbInterfaceInfo;
using UsbInterfaceInfoPtr = mojo::StructPtr<UsbInterfaceInfo>;

class UsbConfigurationInfo;
using UsbConfigurationInfoPtr = mojo::StructPtr<UsbConfigurationInfo>;

class UsbDeviceInfo;
using UsbDeviceInfoPtr = mojo::StructPtr<UsbDeviceInfo>;

class UsbControlTransferParams;
using UsbControlTransferParamsPtr = mojo::StructPtr<UsbControlTransferParams>;

class UsbIsochronousPacket;
using UsbIsochronousPacketPtr = mojo::InlinedStructPtr<UsbIsochronousPacket>;

class UsbDevice;
using UsbDevicePtr = mojo::InterfacePtr<UsbDevice>;
using UsbDevicePtrInfo = mojo::InterfacePtrInfo<UsbDevice>;
using ThreadSafeUsbDevicePtr =
    mojo::ThreadSafeInterfacePtr<UsbDevice>;
using UsbDeviceRequest = mojo::InterfaceRequest<UsbDevice>;
using UsbDeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDevice>;
using ThreadSafeUsbDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDevice>;
using UsbDeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDevice>;
using UsbDeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDevice>;

class UsbDeviceClient;
using UsbDeviceClientPtr = mojo::InterfacePtr<UsbDeviceClient>;
using UsbDeviceClientPtrInfo = mojo::InterfacePtrInfo<UsbDeviceClient>;
using ThreadSafeUsbDeviceClientPtr =
    mojo::ThreadSafeInterfacePtr<UsbDeviceClient>;
using UsbDeviceClientRequest = mojo::InterfaceRequest<UsbDeviceClient>;
using UsbDeviceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbDeviceClient>;
using ThreadSafeUsbDeviceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UsbDeviceClient>;
using UsbDeviceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbDeviceClient>;
using UsbDeviceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbDeviceClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_FORWARD_H_