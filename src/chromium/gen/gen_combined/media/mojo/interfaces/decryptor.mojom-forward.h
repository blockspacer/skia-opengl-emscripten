// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_FORWARD_H_



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
using Decryptor_Status = mojo::NativeEnum;
using Decryptor_StreamType = mojo::NativeEnum;
class Decryptor;
using DecryptorPtr = mojo::InterfacePtr<Decryptor>;
using DecryptorPtrInfo = mojo::InterfacePtrInfo<Decryptor>;
using ThreadSafeDecryptorPtr =
    mojo::ThreadSafeInterfacePtr<Decryptor>;
using DecryptorRequest = mojo::InterfaceRequest<Decryptor>;
using DecryptorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Decryptor>;
using ThreadSafeDecryptorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Decryptor>;
using DecryptorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Decryptor>;
using DecryptorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Decryptor>;

class FrameResourceReleaser;
using FrameResourceReleaserPtr = mojo::InterfacePtr<FrameResourceReleaser>;
using FrameResourceReleaserPtrInfo = mojo::InterfacePtrInfo<FrameResourceReleaser>;
using ThreadSafeFrameResourceReleaserPtr =
    mojo::ThreadSafeInterfacePtr<FrameResourceReleaser>;
using FrameResourceReleaserRequest = mojo::InterfaceRequest<FrameResourceReleaser>;
using FrameResourceReleaserAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameResourceReleaser>;
using ThreadSafeFrameResourceReleaserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameResourceReleaser>;
using FrameResourceReleaserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameResourceReleaser>;
using FrameResourceReleaserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameResourceReleaser>;




}  // namespace mojom
}  // namespace media
#include "media/base/decryptor.h"

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_FORWARD_H_