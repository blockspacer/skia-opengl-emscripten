// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_FORWARD_H_



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


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class BlobReaderClient;
using BlobReaderClientPtr = mojo::InterfacePtr<BlobReaderClient>;
using BlobReaderClientPtrInfo = mojo::InterfacePtrInfo<BlobReaderClient>;
using ThreadSafeBlobReaderClientPtr =
    mojo::ThreadSafeInterfacePtr<BlobReaderClient>;
using BlobReaderClientRequest = mojo::InterfaceRequest<BlobReaderClient>;
using BlobReaderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BlobReaderClient>;
using ThreadSafeBlobReaderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BlobReaderClient>;
using BlobReaderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BlobReaderClient>;
using BlobReaderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BlobReaderClient>;

class Blob;
using BlobPtr = mojo::InterfacePtr<Blob>;
using BlobPtrInfo = mojo::InterfacePtrInfo<Blob>;
using ThreadSafeBlobPtr =
    mojo::ThreadSafeInterfacePtr<Blob>;
using BlobRequest = mojo::InterfaceRequest<Blob>;
using BlobAssociatedPtr =
    mojo::AssociatedInterfacePtr<Blob>;
using ThreadSafeBlobAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Blob>;
using BlobAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Blob>;
using BlobAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Blob>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_FORWARD_H_