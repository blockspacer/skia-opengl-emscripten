// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/public/platform/web_common.h"


namespace media_session {
namespace mojom {

enum class EnforcementMode : int32_t;

enum class AudioFocusType : int32_t;
}  // namespace media_session
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_session_mojom_internal_EnforcementMode_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::EnforcementMode> {
  using Hash = media_session_mojom_internal_EnforcementMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_session_mojom_internal_AudioFocusType_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::AudioFocusType> {
  using Hash = media_session_mojom_internal_AudioFocusType_DataHashFn;
};
}  // namespace WTF


namespace media_session {
namespace mojom {
namespace blink {
using EnforcementMode = EnforcementMode;  // Alias for definition in the parent namespace.
using AudioFocusType = AudioFocusType;  // Alias for definition in the parent namespace.
class AudioFocusRequestState;
using AudioFocusRequestStatePtr = mojo::StructPtr<AudioFocusRequestState>;

class AudioFocusObserver;
using AudioFocusObserverPtr = mojo::InterfacePtr<AudioFocusObserver>;
using AudioFocusObserverPtrInfo = mojo::InterfacePtrInfo<AudioFocusObserver>;
using ThreadSafeAudioFocusObserverPtr =
    mojo::ThreadSafeInterfacePtr<AudioFocusObserver>;
using AudioFocusObserverRequest = mojo::InterfaceRequest<AudioFocusObserver>;
using AudioFocusObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioFocusObserver>;
using ThreadSafeAudioFocusObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioFocusObserver>;
using AudioFocusObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioFocusObserver>;
using AudioFocusObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioFocusObserver>;

class AudioFocusRequestClient;
using AudioFocusRequestClientPtr = mojo::InterfacePtr<AudioFocusRequestClient>;
using AudioFocusRequestClientPtrInfo = mojo::InterfacePtrInfo<AudioFocusRequestClient>;
using ThreadSafeAudioFocusRequestClientPtr =
    mojo::ThreadSafeInterfacePtr<AudioFocusRequestClient>;
using AudioFocusRequestClientRequest = mojo::InterfaceRequest<AudioFocusRequestClient>;
using AudioFocusRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioFocusRequestClient>;
using ThreadSafeAudioFocusRequestClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioFocusRequestClient>;
using AudioFocusRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioFocusRequestClient>;
using AudioFocusRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioFocusRequestClient>;

class AudioFocusManager;
using AudioFocusManagerPtr = mojo::InterfacePtr<AudioFocusManager>;
using AudioFocusManagerPtrInfo = mojo::InterfacePtrInfo<AudioFocusManager>;
using ThreadSafeAudioFocusManagerPtr =
    mojo::ThreadSafeInterfacePtr<AudioFocusManager>;
using AudioFocusManagerRequest = mojo::InterfaceRequest<AudioFocusManager>;
using AudioFocusManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioFocusManager>;
using ThreadSafeAudioFocusManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioFocusManager>;
using AudioFocusManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioFocusManager>;
using AudioFocusManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioFocusManager>;

class AudioFocusManagerDebug;
using AudioFocusManagerDebugPtr = mojo::InterfacePtr<AudioFocusManagerDebug>;
using AudioFocusManagerDebugPtrInfo = mojo::InterfacePtrInfo<AudioFocusManagerDebug>;
using ThreadSafeAudioFocusManagerDebugPtr =
    mojo::ThreadSafeInterfacePtr<AudioFocusManagerDebug>;
using AudioFocusManagerDebugRequest = mojo::InterfaceRequest<AudioFocusManagerDebug>;
using AudioFocusManagerDebugAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioFocusManagerDebug>;
using ThreadSafeAudioFocusManagerDebugAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioFocusManagerDebug>;
using AudioFocusManagerDebugAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioFocusManagerDebug>;
using AudioFocusManagerDebugAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioFocusManagerDebug>;




}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_BLINK_FORWARD_H_