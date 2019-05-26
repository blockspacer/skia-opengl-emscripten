// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_FORWARD_H_



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
class ProgressClient;
using ProgressClientPtr = mojo::InterfacePtr<ProgressClient>;
using ProgressClientPtrInfo = mojo::InterfacePtrInfo<ProgressClient>;
using ThreadSafeProgressClientPtr =
    mojo::ThreadSafeInterfacePtr<ProgressClient>;
using ProgressClientRequest = mojo::InterfaceRequest<ProgressClient>;
using ProgressClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProgressClient>;
using ThreadSafeProgressClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProgressClient>;
using ProgressClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProgressClient>;
using ProgressClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProgressClient>;

class BlobRegistry;
using BlobRegistryPtr = mojo::InterfacePtr<BlobRegistry>;
using BlobRegistryPtrInfo = mojo::InterfacePtrInfo<BlobRegistry>;
using ThreadSafeBlobRegistryPtr =
    mojo::ThreadSafeInterfacePtr<BlobRegistry>;
using BlobRegistryRequest = mojo::InterfaceRequest<BlobRegistry>;
using BlobRegistryAssociatedPtr =
    mojo::AssociatedInterfacePtr<BlobRegistry>;
using ThreadSafeBlobRegistryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BlobRegistry>;
using BlobRegistryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BlobRegistry>;
using BlobRegistryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BlobRegistry>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_FORWARD_H_