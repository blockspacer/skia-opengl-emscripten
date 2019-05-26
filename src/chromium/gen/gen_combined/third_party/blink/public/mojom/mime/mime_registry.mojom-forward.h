// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_FORWARD_H_



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
class MimeRegistry;
using MimeRegistryPtr = mojo::InterfacePtr<MimeRegistry>;
using MimeRegistryPtrInfo = mojo::InterfacePtrInfo<MimeRegistry>;
using ThreadSafeMimeRegistryPtr =
    mojo::ThreadSafeInterfacePtr<MimeRegistry>;
using MimeRegistryRequest = mojo::InterfaceRequest<MimeRegistry>;
using MimeRegistryAssociatedPtr =
    mojo::AssociatedInterfacePtr<MimeRegistry>;
using ThreadSafeMimeRegistryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MimeRegistry>;
using MimeRegistryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MimeRegistry>;
using MimeRegistryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MimeRegistry>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_FORWARD_H_