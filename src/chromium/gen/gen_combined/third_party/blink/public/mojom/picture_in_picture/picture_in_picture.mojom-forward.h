// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_FORWARD_H_



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
class PictureInPictureDelegate;
using PictureInPictureDelegatePtr = mojo::InterfacePtr<PictureInPictureDelegate>;
using PictureInPictureDelegatePtrInfo = mojo::InterfacePtrInfo<PictureInPictureDelegate>;
using ThreadSafePictureInPictureDelegatePtr =
    mojo::ThreadSafeInterfacePtr<PictureInPictureDelegate>;
using PictureInPictureDelegateRequest = mojo::InterfaceRequest<PictureInPictureDelegate>;
using PictureInPictureDelegateAssociatedPtr =
    mojo::AssociatedInterfacePtr<PictureInPictureDelegate>;
using ThreadSafePictureInPictureDelegateAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PictureInPictureDelegate>;
using PictureInPictureDelegateAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PictureInPictureDelegate>;
using PictureInPictureDelegateAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PictureInPictureDelegate>;

class PictureInPictureService;
using PictureInPictureServicePtr = mojo::InterfacePtr<PictureInPictureService>;
using PictureInPictureServicePtrInfo = mojo::InterfacePtrInfo<PictureInPictureService>;
using ThreadSafePictureInPictureServicePtr =
    mojo::ThreadSafeInterfacePtr<PictureInPictureService>;
using PictureInPictureServiceRequest = mojo::InterfaceRequest<PictureInPictureService>;
using PictureInPictureServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PictureInPictureService>;
using ThreadSafePictureInPictureServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PictureInPictureService>;
using PictureInPictureServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PictureInPictureService>;
using PictureInPictureServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PictureInPictureService>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_FORWARD_H_