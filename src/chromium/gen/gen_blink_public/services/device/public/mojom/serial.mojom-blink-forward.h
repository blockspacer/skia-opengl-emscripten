// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_BLINK_FORWARD_H_

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

enum class SerialSendError : int32_t;

enum class SerialReceiveError : int32_t;

enum class SerialDataBits : int32_t;

enum class SerialParityBit : int32_t;

enum class SerialStopBits : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_SerialSendError_DataHashFn;

template <>
struct DefaultHash<::device::mojom::SerialSendError> {
  using Hash = device_mojom_internal_SerialSendError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_SerialReceiveError_DataHashFn;

template <>
struct DefaultHash<::device::mojom::SerialReceiveError> {
  using Hash = device_mojom_internal_SerialReceiveError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_SerialDataBits_DataHashFn;

template <>
struct DefaultHash<::device::mojom::SerialDataBits> {
  using Hash = device_mojom_internal_SerialDataBits_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_SerialParityBit_DataHashFn;

template <>
struct DefaultHash<::device::mojom::SerialParityBit> {
  using Hash = device_mojom_internal_SerialParityBit_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_SerialStopBits_DataHashFn;

template <>
struct DefaultHash<::device::mojom::SerialStopBits> {
  using Hash = device_mojom_internal_SerialStopBits_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using SerialSendError = SerialSendError;  // Alias for definition in the parent namespace.
using SerialReceiveError = SerialReceiveError;  // Alias for definition in the parent namespace.
using SerialDataBits = SerialDataBits;  // Alias for definition in the parent namespace.
using SerialParityBit = SerialParityBit;  // Alias for definition in the parent namespace.
using SerialStopBits = SerialStopBits;  // Alias for definition in the parent namespace.
class SerialPortInfo;
using SerialPortInfoPtr = mojo::StructPtr<SerialPortInfo>;

class SerialConnectionOptions;
using SerialConnectionOptionsPtr = mojo::StructPtr<SerialConnectionOptions>;

class SerialConnectionInfo;
using SerialConnectionInfoPtr = mojo::StructPtr<SerialConnectionInfo>;

class SerialHostControlSignals;
using SerialHostControlSignalsPtr = mojo::InlinedStructPtr<SerialHostControlSignals>;

class SerialPortControlSignals;
using SerialPortControlSignalsPtr = mojo::InlinedStructPtr<SerialPortControlSignals>;

class SerialPortManager;
using SerialPortManagerPtr = mojo::InterfacePtr<SerialPortManager>;
using SerialPortManagerPtrInfo = mojo::InterfacePtrInfo<SerialPortManager>;
using ThreadSafeSerialPortManagerPtr =
    mojo::ThreadSafeInterfacePtr<SerialPortManager>;
using SerialPortManagerRequest = mojo::InterfaceRequest<SerialPortManager>;
using SerialPortManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialPortManager>;
using ThreadSafeSerialPortManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SerialPortManager>;
using SerialPortManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialPortManager>;
using SerialPortManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SerialPortManager>;

class SerialPort;
using SerialPortPtr = mojo::InterfacePtr<SerialPort>;
using SerialPortPtrInfo = mojo::InterfacePtrInfo<SerialPort>;
using ThreadSafeSerialPortPtr =
    mojo::ThreadSafeInterfacePtr<SerialPort>;
using SerialPortRequest = mojo::InterfaceRequest<SerialPort>;
using SerialPortAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialPort>;
using ThreadSafeSerialPortAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SerialPort>;
using SerialPortAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialPort>;
using SerialPortAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SerialPort>;

class SerialPortClient;
using SerialPortClientPtr = mojo::InterfacePtr<SerialPortClient>;
using SerialPortClientPtrInfo = mojo::InterfacePtrInfo<SerialPortClient>;
using ThreadSafeSerialPortClientPtr =
    mojo::ThreadSafeInterfacePtr<SerialPortClient>;
using SerialPortClientRequest = mojo::InterfaceRequest<SerialPortClient>;
using SerialPortClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialPortClient>;
using ThreadSafeSerialPortClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SerialPortClient>;
using SerialPortClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialPortClient>;
using SerialPortClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SerialPortClient>;

class SerialPortConnectionWatcher;
using SerialPortConnectionWatcherPtr = mojo::InterfacePtr<SerialPortConnectionWatcher>;
using SerialPortConnectionWatcherPtrInfo = mojo::InterfacePtrInfo<SerialPortConnectionWatcher>;
using ThreadSafeSerialPortConnectionWatcherPtr =
    mojo::ThreadSafeInterfacePtr<SerialPortConnectionWatcher>;
using SerialPortConnectionWatcherRequest = mojo::InterfaceRequest<SerialPortConnectionWatcher>;
using SerialPortConnectionWatcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialPortConnectionWatcher>;
using ThreadSafeSerialPortConnectionWatcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SerialPortConnectionWatcher>;
using SerialPortConnectionWatcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialPortConnectionWatcher>;
using SerialPortConnectionWatcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SerialPortConnectionWatcher>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_BLINK_FORWARD_H_