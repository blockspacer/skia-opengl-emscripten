// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_FORWARD_H_



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

enum class AudioInputStreamObserver_DisconnectReason : int32_t;
class AudioInputStream;
using AudioInputStreamPtr = mojo::InterfacePtr<AudioInputStream>;
using AudioInputStreamPtrInfo = mojo::InterfacePtrInfo<AudioInputStream>;
using ThreadSafeAudioInputStreamPtr =
    mojo::ThreadSafeInterfacePtr<AudioInputStream>;
using AudioInputStreamRequest = mojo::InterfaceRequest<AudioInputStream>;
using AudioInputStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioInputStream>;
using ThreadSafeAudioInputStreamAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioInputStream>;
using AudioInputStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioInputStream>;
using AudioInputStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioInputStream>;

class AudioInputStreamClient;
using AudioInputStreamClientPtr = mojo::InterfacePtr<AudioInputStreamClient>;
using AudioInputStreamClientPtrInfo = mojo::InterfacePtrInfo<AudioInputStreamClient>;
using ThreadSafeAudioInputStreamClientPtr =
    mojo::ThreadSafeInterfacePtr<AudioInputStreamClient>;
using AudioInputStreamClientRequest = mojo::InterfaceRequest<AudioInputStreamClient>;
using AudioInputStreamClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioInputStreamClient>;
using ThreadSafeAudioInputStreamClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioInputStreamClient>;
using AudioInputStreamClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioInputStreamClient>;
using AudioInputStreamClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioInputStreamClient>;

class AudioInputStreamObserver;
using AudioInputStreamObserverPtr = mojo::InterfacePtr<AudioInputStreamObserver>;
using AudioInputStreamObserverPtrInfo = mojo::InterfacePtrInfo<AudioInputStreamObserver>;
using ThreadSafeAudioInputStreamObserverPtr =
    mojo::ThreadSafeInterfacePtr<AudioInputStreamObserver>;
using AudioInputStreamObserverRequest = mojo::InterfaceRequest<AudioInputStreamObserver>;
using AudioInputStreamObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioInputStreamObserver>;
using ThreadSafeAudioInputStreamObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioInputStreamObserver>;
using AudioInputStreamObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioInputStreamObserver>;
using AudioInputStreamObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioInputStreamObserver>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_FORWARD_H_