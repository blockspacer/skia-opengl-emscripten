// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_FORWARD_H_

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




namespace media {
namespace mojom {
using CdmConfigDataView = mojo::native::NativeStructDataView;

class CdmPromiseResultDataView;

class CdmKeyInformationDataView;

using EmeInitDataType = mojo::NativeEnum;
using CdmSessionType = mojo::NativeEnum;
using CdmMessageType = mojo::NativeEnum;

enum class CdmKeyStatus : int32_t;
using HdcpVersion = mojo::NativeEnum;
using CdmPromiseResult_Exception = mojo::NativeEnum;
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




}  // namespace mojom
}  // namespace media
#include "media/base/cdm_config.h"
#include "media/base/cdm_key_information.h"
#include "media/base/cdm_promise.h"
#include "media/base/content_decryption_module.h"
#include "media/base/eme_constants.h"

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_FORWARD_H_