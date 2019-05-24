// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_FORWARD_H_

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


namespace blink {
namespace mojom {

enum class WebBluetoothResult : int32_t;

enum class WebBluetoothGATTQueryQuantity : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_WebBluetoothResult_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::WebBluetoothResult> {
  using Hash = blink_mojom_internal_WebBluetoothResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_WebBluetoothGATTQueryQuantity_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::WebBluetoothGATTQueryQuantity> {
  using Hash = blink_mojom_internal_WebBluetoothGATTQueryQuantity_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using WebBluetoothResult = WebBluetoothResult;  // Alias for definition in the parent namespace.
using WebBluetoothGATTQueryQuantity = WebBluetoothGATTQueryQuantity;  // Alias for definition in the parent namespace.
class WebBluetoothLeScanFilter;
using WebBluetoothLeScanFilterPtr = mojo::StructPtr<WebBluetoothLeScanFilter>;

class WebBluetoothRequestDeviceOptions;
using WebBluetoothRequestDeviceOptionsPtr = mojo::StructPtr<WebBluetoothRequestDeviceOptions>;

class WebBluetoothRequestLEScanOptions;
using WebBluetoothRequestLEScanOptionsPtr = mojo::StructPtr<WebBluetoothRequestLEScanOptions>;

class WebBluetoothDeviceId;
using WebBluetoothDeviceIdPtr = mojo::InlinedStructPtr<WebBluetoothDeviceId>;

class WebBluetoothDevice;
using WebBluetoothDevicePtr = mojo::StructPtr<WebBluetoothDevice>;

class WebBluetoothRemoteGATTService;
using WebBluetoothRemoteGATTServicePtr = mojo::StructPtr<WebBluetoothRemoteGATTService>;

class WebBluetoothRemoteGATTCharacteristic;
using WebBluetoothRemoteGATTCharacteristicPtr = mojo::StructPtr<WebBluetoothRemoteGATTCharacteristic>;

class WebBluetoothScanResult;
using WebBluetoothScanResultPtr = mojo::StructPtr<WebBluetoothScanResult>;

class WebBluetoothRemoteGATTDescriptor;
using WebBluetoothRemoteGATTDescriptorPtr = mojo::StructPtr<WebBluetoothRemoteGATTDescriptor>;

class RequestScanningStartResult;

typedef mojo::StructPtr<RequestScanningStartResult> RequestScanningStartResultPtr;

class WebBluetoothService;
using WebBluetoothServicePtr = mojo::InterfacePtr<WebBluetoothService>;
using WebBluetoothServicePtrInfo = mojo::InterfacePtrInfo<WebBluetoothService>;
using ThreadSafeWebBluetoothServicePtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothService>;
using WebBluetoothServiceRequest = mojo::InterfaceRequest<WebBluetoothService>;
using WebBluetoothServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothService>;
using ThreadSafeWebBluetoothServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothService>;
using WebBluetoothServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothService>;
using WebBluetoothServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothService>;

class WebBluetoothServerClient;
using WebBluetoothServerClientPtr = mojo::InterfacePtr<WebBluetoothServerClient>;
using WebBluetoothServerClientPtrInfo = mojo::InterfacePtrInfo<WebBluetoothServerClient>;
using ThreadSafeWebBluetoothServerClientPtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothServerClient>;
using WebBluetoothServerClientRequest = mojo::InterfaceRequest<WebBluetoothServerClient>;
using WebBluetoothServerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothServerClient>;
using ThreadSafeWebBluetoothServerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothServerClient>;
using WebBluetoothServerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothServerClient>;
using WebBluetoothServerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothServerClient>;

class WebBluetoothCharacteristicClient;
using WebBluetoothCharacteristicClientPtr = mojo::InterfacePtr<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientPtrInfo = mojo::InterfacePtrInfo<WebBluetoothCharacteristicClient>;
using ThreadSafeWebBluetoothCharacteristicClientPtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientRequest = mojo::InterfaceRequest<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothCharacteristicClient>;
using ThreadSafeWebBluetoothCharacteristicClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothCharacteristicClient>;
using WebBluetoothCharacteristicClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothCharacteristicClient>;

class WebBluetoothScanClient;
using WebBluetoothScanClientPtr = mojo::InterfacePtr<WebBluetoothScanClient>;
using WebBluetoothScanClientPtrInfo = mojo::InterfacePtrInfo<WebBluetoothScanClient>;
using ThreadSafeWebBluetoothScanClientPtr =
    mojo::ThreadSafeInterfacePtr<WebBluetoothScanClient>;
using WebBluetoothScanClientRequest = mojo::InterfaceRequest<WebBluetoothScanClient>;
using WebBluetoothScanClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothScanClient>;
using ThreadSafeWebBluetoothScanClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebBluetoothScanClient>;
using WebBluetoothScanClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothScanClient>;
using WebBluetoothScanClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothScanClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_FORWARD_H_