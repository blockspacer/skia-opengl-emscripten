// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_FORWARD_H_



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
class AudioDecoder;
using AudioDecoderPtr = mojo::InterfacePtr<AudioDecoder>;
using AudioDecoderPtrInfo = mojo::InterfacePtrInfo<AudioDecoder>;
using ThreadSafeAudioDecoderPtr =
    mojo::ThreadSafeInterfacePtr<AudioDecoder>;
using AudioDecoderRequest = mojo::InterfaceRequest<AudioDecoder>;
using AudioDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioDecoder>;
using ThreadSafeAudioDecoderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioDecoder>;
using AudioDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioDecoder>;
using AudioDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioDecoder>;

class AudioDecoderClient;
using AudioDecoderClientPtr = mojo::InterfacePtr<AudioDecoderClient>;
using AudioDecoderClientPtrInfo = mojo::InterfacePtrInfo<AudioDecoderClient>;
using ThreadSafeAudioDecoderClientPtr =
    mojo::ThreadSafeInterfacePtr<AudioDecoderClient>;
using AudioDecoderClientRequest = mojo::InterfaceRequest<AudioDecoderClient>;
using AudioDecoderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioDecoderClient>;
using ThreadSafeAudioDecoderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioDecoderClient>;
using AudioDecoderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioDecoderClient>;
using AudioDecoderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioDecoderClient>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_FORWARD_H_