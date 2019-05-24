// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_FORWARD_H_



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
class PlatformVerification;
using PlatformVerificationPtr = mojo::InterfacePtr<PlatformVerification>;
using PlatformVerificationPtrInfo = mojo::InterfacePtrInfo<PlatformVerification>;
using ThreadSafePlatformVerificationPtr =
    mojo::ThreadSafeInterfacePtr<PlatformVerification>;
using PlatformVerificationRequest = mojo::InterfaceRequest<PlatformVerification>;
using PlatformVerificationAssociatedPtr =
    mojo::AssociatedInterfacePtr<PlatformVerification>;
using ThreadSafePlatformVerificationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PlatformVerification>;
using PlatformVerificationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PlatformVerification>;
using PlatformVerificationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PlatformVerification>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_FORWARD_H_