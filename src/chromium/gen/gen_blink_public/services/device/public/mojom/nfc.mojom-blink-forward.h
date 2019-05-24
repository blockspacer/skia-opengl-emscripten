// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_FORWARD_H_

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

enum class NFCErrorType : int32_t;

enum class NDEFRecordType : int32_t;

enum class NFCPushTarget : int32_t;

enum class NFCWatchMode : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_NFCErrorType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::NFCErrorType> {
  using Hash = device_mojom_internal_NFCErrorType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_NDEFRecordType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::NDEFRecordType> {
  using Hash = device_mojom_internal_NDEFRecordType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_NFCPushTarget_DataHashFn;

template <>
struct DefaultHash<::device::mojom::NFCPushTarget> {
  using Hash = device_mojom_internal_NFCPushTarget_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_NFCWatchMode_DataHashFn;

template <>
struct DefaultHash<::device::mojom::NFCWatchMode> {
  using Hash = device_mojom_internal_NFCWatchMode_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using NFCErrorType = NFCErrorType;  // Alias for definition in the parent namespace.
using NDEFRecordType = NDEFRecordType;  // Alias for definition in the parent namespace.
using NFCPushTarget = NFCPushTarget;  // Alias for definition in the parent namespace.
using NFCWatchMode = NFCWatchMode;  // Alias for definition in the parent namespace.
class NFCError;
using NFCErrorPtr = mojo::InlinedStructPtr<NFCError>;

class NDEFRecord;
using NDEFRecordPtr = mojo::StructPtr<NDEFRecord>;

class NDEFMessage;
using NDEFMessagePtr = mojo::StructPtr<NDEFMessage>;

class NFCPushOptions;
using NFCPushOptionsPtr = mojo::InlinedStructPtr<NFCPushOptions>;

class NDEFRecordTypeFilter;
using NDEFRecordTypeFilterPtr = mojo::InlinedStructPtr<NDEFRecordTypeFilter>;

class NFCWatchOptions;
using NFCWatchOptionsPtr = mojo::StructPtr<NFCWatchOptions>;

class NFC;
using NFCPtr = mojo::InterfacePtr<NFC>;
using NFCPtrInfo = mojo::InterfacePtrInfo<NFC>;
using ThreadSafeNFCPtr =
    mojo::ThreadSafeInterfacePtr<NFC>;
using NFCRequest = mojo::InterfaceRequest<NFC>;
using NFCAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFC>;
using ThreadSafeNFCAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NFC>;
using NFCAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFC>;
using NFCAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFC>;

class NFCClient;
using NFCClientPtr = mojo::InterfacePtr<NFCClient>;
using NFCClientPtrInfo = mojo::InterfacePtrInfo<NFCClient>;
using ThreadSafeNFCClientPtr =
    mojo::ThreadSafeInterfacePtr<NFCClient>;
using NFCClientRequest = mojo::InterfaceRequest<NFCClient>;
using NFCClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFCClient>;
using ThreadSafeNFCClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NFCClient>;
using NFCClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFCClient>;
using NFCClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFCClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_FORWARD_H_