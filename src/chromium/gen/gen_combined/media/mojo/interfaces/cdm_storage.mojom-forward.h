// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {

enum class CdmStorage_Status : int32_t;
class CdmStorage;
using CdmStoragePtr = mojo::InterfacePtr<CdmStorage>;
using CdmStoragePtrInfo = mojo::InterfacePtrInfo<CdmStorage>;
using ThreadSafeCdmStoragePtr =
    mojo::ThreadSafeInterfacePtr<CdmStorage>;
using CdmStorageRequest = mojo::InterfaceRequest<CdmStorage>;
using CdmStorageAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmStorage>;
using ThreadSafeCdmStorageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmStorage>;
using CdmStorageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmStorage>;
using CdmStorageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmStorage>;

class CdmFile;
using CdmFilePtr = mojo::InterfacePtr<CdmFile>;
using CdmFilePtrInfo = mojo::InterfacePtrInfo<CdmFile>;
using ThreadSafeCdmFilePtr =
    mojo::ThreadSafeInterfacePtr<CdmFile>;
using CdmFileRequest = mojo::InterfaceRequest<CdmFile>;
using CdmFileAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmFile>;
using ThreadSafeCdmFileAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmFile>;
using CdmFileAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmFile>;
using CdmFileAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmFile>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_FORWARD_H_