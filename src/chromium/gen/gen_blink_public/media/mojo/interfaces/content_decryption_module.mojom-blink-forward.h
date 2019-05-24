// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_FORWARD_H_

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


namespace media {
namespace mojom {
using EmeInitDataType = mojo::NativeEnum;
using CdmSessionType = mojo::NativeEnum;
using CdmMessageType = mojo::NativeEnum;

enum class CdmKeyStatus : int32_t;
using HdcpVersion = mojo::NativeEnum;
using CdmPromiseResult_Exception = mojo::NativeEnum;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_CdmKeyStatus_DataHashFn;

template <>
struct DefaultHash<::media::mojom::CdmKeyStatus> {
  using Hash = media_mojom_internal_CdmKeyStatus_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using EmeInitDataType = EmeInitDataType;  // Alias for definition in the parent namespace.
using CdmSessionType = CdmSessionType;  // Alias for definition in the parent namespace.
using CdmMessageType = CdmMessageType;  // Alias for definition in the parent namespace.
using CdmKeyStatus = CdmKeyStatus;  // Alias for definition in the parent namespace.
using HdcpVersion = HdcpVersion;  // Alias for definition in the parent namespace.
using CdmConfig = mojo::native::NativeStruct;
using CdmConfigPtr = mojo::native::NativeStructPtr;

class CdmPromiseResult;
using CdmPromiseResultPtr = mojo::InlinedStructPtr<CdmPromiseResult>;

class CdmKeyInformation;
using CdmKeyInformationPtr = mojo::StructPtr<CdmKeyInformation>;

class ContentDecryptionModule;
using ContentDecryptionModulePtr = mojo::InterfacePtr<ContentDecryptionModule>;
using ContentDecryptionModulePtrInfo = mojo::InterfacePtrInfo<ContentDecryptionModule>;
using ThreadSafeContentDecryptionModulePtr =
    mojo::ThreadSafeInterfacePtr<ContentDecryptionModule>;
using ContentDecryptionModuleRequest = mojo::InterfaceRequest<ContentDecryptionModule>;
using ContentDecryptionModuleAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentDecryptionModule>;
using ThreadSafeContentDecryptionModuleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ContentDecryptionModule>;
using ContentDecryptionModuleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentDecryptionModule>;
using ContentDecryptionModuleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentDecryptionModule>;

class ContentDecryptionModuleClient;
using ContentDecryptionModuleClientPtr = mojo::InterfacePtr<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientPtrInfo = mojo::InterfacePtrInfo<ContentDecryptionModuleClient>;
using ThreadSafeContentDecryptionModuleClientPtr =
    mojo::ThreadSafeInterfacePtr<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientRequest = mojo::InterfaceRequest<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentDecryptionModuleClient>;
using ThreadSafeContentDecryptionModuleClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentDecryptionModuleClient>;

class CdmFactory;
using CdmFactoryPtr = mojo::InterfacePtr<CdmFactory>;
using CdmFactoryPtrInfo = mojo::InterfacePtrInfo<CdmFactory>;
using ThreadSafeCdmFactoryPtr =
    mojo::ThreadSafeInterfacePtr<CdmFactory>;
using CdmFactoryRequest = mojo::InterfaceRequest<CdmFactory>;
using CdmFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmFactory>;
using ThreadSafeCdmFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmFactory>;
using CdmFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmFactory>;
using CdmFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_FORWARD_H_