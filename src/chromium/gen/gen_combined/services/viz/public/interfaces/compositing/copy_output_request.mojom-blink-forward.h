// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_FORWARD_H_

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


namespace viz {
namespace mojom {
}  // namespace viz
}  // namespace mojom


namespace viz {
namespace mojom {
namespace blink {
class CopyOutputRequest;
using CopyOutputRequestPtr = mojo::StructPtr<CopyOutputRequest>;

class CopyOutputResultSender;
using CopyOutputResultSenderPtr = mojo::InterfacePtr<CopyOutputResultSender>;
using CopyOutputResultSenderPtrInfo = mojo::InterfacePtrInfo<CopyOutputResultSender>;
using ThreadSafeCopyOutputResultSenderPtr =
    mojo::ThreadSafeInterfacePtr<CopyOutputResultSender>;
using CopyOutputResultSenderRequest = mojo::InterfaceRequest<CopyOutputResultSender>;
using CopyOutputResultSenderAssociatedPtr =
    mojo::AssociatedInterfacePtr<CopyOutputResultSender>;
using ThreadSafeCopyOutputResultSenderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CopyOutputResultSender>;
using CopyOutputResultSenderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CopyOutputResultSender>;
using CopyOutputResultSenderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CopyOutputResultSender>;




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_FORWARD_H_