// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_BLINK_FORWARD_H_



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


namespace device {
namespace mojom {
}  // namespace device
}  // namespace mojom


namespace device {
namespace mojom {
namespace blink {
class NFCProvider;
using NFCProviderPtr = mojo::InterfacePtr<NFCProvider>;
using NFCProviderPtrInfo = mojo::InterfacePtrInfo<NFCProvider>;
using ThreadSafeNFCProviderPtr =
    mojo::ThreadSafeInterfacePtr<NFCProvider>;
using NFCProviderRequest = mojo::InterfaceRequest<NFCProvider>;
using NFCProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFCProvider>;
using ThreadSafeNFCProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NFCProvider>;
using NFCProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFCProvider>;
using NFCProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFCProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_BLINK_FORWARD_H_