// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_FORWARD_H_



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

enum class AudioOutputStreamObserver_DisconnectReason : int32_t;
class AudioOutputStream;
using AudioOutputStreamPtr = mojo::InterfacePtr<AudioOutputStream>;
using AudioOutputStreamPtrInfo = mojo::InterfacePtrInfo<AudioOutputStream>;
using ThreadSafeAudioOutputStreamPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStream>;
using AudioOutputStreamRequest = mojo::InterfaceRequest<AudioOutputStream>;
using AudioOutputStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStream>;
using ThreadSafeAudioOutputStreamAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStream>;
using AudioOutputStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStream>;
using AudioOutputStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStream>;

class AudioOutputStreamObserver;
using AudioOutputStreamObserverPtr = mojo::InterfacePtr<AudioOutputStreamObserver>;
using AudioOutputStreamObserverPtrInfo = mojo::InterfacePtrInfo<AudioOutputStreamObserver>;
using ThreadSafeAudioOutputStreamObserverPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStreamObserver>;
using AudioOutputStreamObserverRequest = mojo::InterfaceRequest<AudioOutputStreamObserver>;
using AudioOutputStreamObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStreamObserver>;
using ThreadSafeAudioOutputStreamObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStreamObserver>;
using AudioOutputStreamObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStreamObserver>;
using AudioOutputStreamObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStreamObserver>;

class AudioOutputStreamProvider;
using AudioOutputStreamProviderPtr = mojo::InterfacePtr<AudioOutputStreamProvider>;
using AudioOutputStreamProviderPtrInfo = mojo::InterfacePtrInfo<AudioOutputStreamProvider>;
using ThreadSafeAudioOutputStreamProviderPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStreamProvider>;
using AudioOutputStreamProviderRequest = mojo::InterfaceRequest<AudioOutputStreamProvider>;
using AudioOutputStreamProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStreamProvider>;
using ThreadSafeAudioOutputStreamProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStreamProvider>;
using AudioOutputStreamProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStreamProvider>;
using AudioOutputStreamProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStreamProvider>;

class AudioOutputStreamProviderClient;
using AudioOutputStreamProviderClientPtr = mojo::InterfacePtr<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientPtrInfo = mojo::InterfacePtrInfo<AudioOutputStreamProviderClient>;
using ThreadSafeAudioOutputStreamProviderClientPtr =
    mojo::ThreadSafeInterfacePtr<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientRequest = mojo::InterfaceRequest<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioOutputStreamProviderClient>;
using ThreadSafeAudioOutputStreamProviderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioOutputStreamProviderClient>;
using AudioOutputStreamProviderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioOutputStreamProviderClient>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_FORWARD_H_