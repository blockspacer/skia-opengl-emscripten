// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_FORWARD_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_FORWARD_H_

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

enum class MediaPlaybackState : int32_t;

enum class MediaSessionAction : int32_t;

enum class MediaSessionImageType : int32_t;

enum class MediaSessionInfo_SessionState : int32_t;

enum class MediaSession_SuspendType : int32_t;
}  // namespace media_session
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_session_mojom_internal_MediaPlaybackState_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::MediaPlaybackState> {
  using Hash = media_session_mojom_internal_MediaPlaybackState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_session_mojom_internal_MediaSessionAction_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::MediaSessionAction> {
  using Hash = media_session_mojom_internal_MediaSessionAction_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_session_mojom_internal_MediaSessionImageType_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::MediaSessionImageType> {
  using Hash = media_session_mojom_internal_MediaSessionImageType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_session_mojom_internal_MediaSessionInfo_SessionState_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::MediaSessionInfo_SessionState> {
  using Hash = media_session_mojom_internal_MediaSessionInfo_SessionState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_session_mojom_internal_MediaSession_SuspendType_DataHashFn;

template <>
struct DefaultHash<::media_session::mojom::MediaSession_SuspendType> {
  using Hash = media_session_mojom_internal_MediaSession_SuspendType_DataHashFn;
};
}  // namespace WTF


namespace media_session {
namespace mojom {
namespace blink {
using MediaPlaybackState = MediaPlaybackState;  // Alias for definition in the parent namespace.
using MediaSessionAction = MediaSessionAction;  // Alias for definition in the parent namespace.
using MediaSessionImageType = MediaSessionImageType;  // Alias for definition in the parent namespace.
class MediaImage;
using MediaImagePtr = mojo::StructPtr<MediaImage>;

class MediaMetadata;
using MediaMetadataPtr = mojo::StructPtr<MediaMetadata>;

class MediaImageBitmap;
using MediaImageBitmapPtr = mojo::StructPtr<MediaImageBitmap>;

class MediaSessionInfo;
using MediaSessionInfoPtr = mojo::StructPtr<MediaSessionInfo>;

class MediaSessionDebugInfo;
using MediaSessionDebugInfoPtr = mojo::InlinedStructPtr<MediaSessionDebugInfo>;

class MediaSessionObserver;
using MediaSessionObserverPtr = mojo::InterfacePtr<MediaSessionObserver>;
using MediaSessionObserverPtrInfo = mojo::InterfacePtrInfo<MediaSessionObserver>;
using ThreadSafeMediaSessionObserverPtr =
    mojo::ThreadSafeInterfacePtr<MediaSessionObserver>;
using MediaSessionObserverRequest = mojo::InterfaceRequest<MediaSessionObserver>;
using MediaSessionObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaSessionObserver>;
using ThreadSafeMediaSessionObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaSessionObserver>;
using MediaSessionObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaSessionObserver>;
using MediaSessionObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaSessionObserver>;

class MediaSession;
using MediaSessionPtr = mojo::InterfacePtr<MediaSession>;
using MediaSessionPtrInfo = mojo::InterfacePtrInfo<MediaSession>;
using ThreadSafeMediaSessionPtr =
    mojo::ThreadSafeInterfacePtr<MediaSession>;
using MediaSessionRequest = mojo::InterfaceRequest<MediaSession>;
using MediaSessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaSession>;
using ThreadSafeMediaSessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaSession>;
using MediaSessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaSession>;
using MediaSessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaSession>;




}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_FORWARD_H_