// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_FORWARD_H_

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




namespace device {
namespace mojom {
class NFCErrorDataView;

class NDEFRecordDataView;

class NDEFMessageDataView;

class NFCPushOptionsDataView;

class NDEFRecordTypeFilterDataView;

class NFCWatchOptionsDataView;


enum class NFCErrorType : int32_t;

enum class NDEFRecordType : int32_t;

enum class NFCPushTarget : int32_t;

enum class NFCWatchMode : int32_t;
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




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_FORWARD_H_