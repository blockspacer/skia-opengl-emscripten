// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class BlobURLStore;
using BlobURLStorePtr = mojo::InterfacePtr<BlobURLStore>;
using BlobURLStorePtrInfo = mojo::InterfacePtrInfo<BlobURLStore>;
using ThreadSafeBlobURLStorePtr =
    mojo::ThreadSafeInterfacePtr<BlobURLStore>;
using BlobURLStoreRequest = mojo::InterfaceRequest<BlobURLStore>;
using BlobURLStoreAssociatedPtr =
    mojo::AssociatedInterfacePtr<BlobURLStore>;
using ThreadSafeBlobURLStoreAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BlobURLStore>;
using BlobURLStoreAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BlobURLStore>;
using BlobURLStoreAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BlobURLStore>;

class BlobURLToken;
using BlobURLTokenPtr = mojo::InterfacePtr<BlobURLToken>;
using BlobURLTokenPtrInfo = mojo::InterfacePtrInfo<BlobURLToken>;
using ThreadSafeBlobURLTokenPtr =
    mojo::ThreadSafeInterfacePtr<BlobURLToken>;
using BlobURLTokenRequest = mojo::InterfaceRequest<BlobURLToken>;
using BlobURLTokenAssociatedPtr =
    mojo::AssociatedInterfacePtr<BlobURLToken>;
using ThreadSafeBlobURLTokenAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BlobURLToken>;
using BlobURLTokenAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BlobURLToken>;
using BlobURLTokenAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BlobURLToken>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_FORWARD_H_