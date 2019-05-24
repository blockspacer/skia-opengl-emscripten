// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
}  // namespace media
}  // namespace mojom


namespace media {
namespace mojom {
namespace blink {
class ProvisionFetcher;
using ProvisionFetcherPtr = mojo::InterfacePtr<ProvisionFetcher>;
using ProvisionFetcherPtrInfo = mojo::InterfacePtrInfo<ProvisionFetcher>;
using ThreadSafeProvisionFetcherPtr =
    mojo::ThreadSafeInterfacePtr<ProvisionFetcher>;
using ProvisionFetcherRequest = mojo::InterfaceRequest<ProvisionFetcher>;
using ProvisionFetcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProvisionFetcher>;
using ThreadSafeProvisionFetcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProvisionFetcher>;
using ProvisionFetcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProvisionFetcher>;
using ProvisionFetcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProvisionFetcher>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_BLINK_FORWARD_H_