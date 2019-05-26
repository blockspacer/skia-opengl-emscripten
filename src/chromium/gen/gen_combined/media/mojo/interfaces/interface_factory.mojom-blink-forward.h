// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_FORWARD_H_



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
class InterfaceFactory;
using InterfaceFactoryPtr = mojo::InterfacePtr<InterfaceFactory>;
using InterfaceFactoryPtrInfo = mojo::InterfacePtrInfo<InterfaceFactory>;
using ThreadSafeInterfaceFactoryPtr =
    mojo::ThreadSafeInterfacePtr<InterfaceFactory>;
using InterfaceFactoryRequest = mojo::InterfaceRequest<InterfaceFactory>;
using InterfaceFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<InterfaceFactory>;
using ThreadSafeInterfaceFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InterfaceFactory>;
using InterfaceFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InterfaceFactory>;
using InterfaceFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InterfaceFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_BLINK_FORWARD_H_