// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {
class MediaLog;
using MediaLogPtr = mojo::InterfacePtr<MediaLog>;
using MediaLogPtrInfo = mojo::InterfacePtrInfo<MediaLog>;
using ThreadSafeMediaLogPtr =
    mojo::ThreadSafeInterfacePtr<MediaLog>;
using MediaLogRequest = mojo::InterfaceRequest<MediaLog>;
using MediaLogAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaLog>;
using ThreadSafeMediaLogAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaLog>;
using MediaLogAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaLog>;
using MediaLogAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaLog>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_FORWARD_H_