// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_FORWARD_H_

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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class SharedFileDataView;


enum class ShareError : int32_t;
class SharedFile;
using SharedFilePtr = mojo::StructPtr<SharedFile>;

class ShareService;
using ShareServicePtr = mojo::InterfacePtr<ShareService>;
using ShareServicePtrInfo = mojo::InterfacePtrInfo<ShareService>;
using ThreadSafeShareServicePtr =
    mojo::ThreadSafeInterfacePtr<ShareService>;
using ShareServiceRequest = mojo::InterfaceRequest<ShareService>;
using ShareServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ShareService>;
using ThreadSafeShareServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ShareService>;
using ShareServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ShareService>;
using ShareServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ShareService>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_FORWARD_H_