// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_FORWARD_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_FORWARD_H_

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




namespace media_session {
namespace mojom {
class MediaImageDataView;

class MediaMetadataDataView;

class MediaImageBitmapDataView;

class MediaSessionInfoDataView;

class MediaSessionDebugInfoDataView;


enum class MediaPlaybackState : int32_t;

enum class MediaSessionAction : int32_t;

enum class MediaSessionImageType : int32_t;

enum class MediaSessionInfo_SessionState : int32_t;

enum class MediaSession_SuspendType : int32_t;
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




}  // namespace mojom
}  // namespace media_session
#include "services/media_session/public/cpp/media_image.h"
#include "services/media_session/public/cpp/media_metadata.h"
#include "third_party/skia/include/core/SkBitmap.h"

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_FORWARD_H_