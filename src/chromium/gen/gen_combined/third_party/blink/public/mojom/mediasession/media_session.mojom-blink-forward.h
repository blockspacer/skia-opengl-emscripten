// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class MediaSessionPlaybackState : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_MediaSessionPlaybackState_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::MediaSessionPlaybackState> {
  using Hash = blink_mojom_internal_MediaSessionPlaybackState_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using MediaSessionPlaybackState = MediaSessionPlaybackState;  // Alias for definition in the parent namespace.
class SpecMediaMetadata;
using SpecMediaMetadataPtr = mojo::StructPtr<SpecMediaMetadata>;

class MediaSessionClient;
using MediaSessionClientPtr = mojo::InterfacePtr<MediaSessionClient>;
using MediaSessionClientPtrInfo = mojo::InterfacePtrInfo<MediaSessionClient>;
using ThreadSafeMediaSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<MediaSessionClient>;
using MediaSessionClientRequest = mojo::InterfaceRequest<MediaSessionClient>;
using MediaSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaSessionClient>;
using ThreadSafeMediaSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaSessionClient>;
using MediaSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaSessionClient>;
using MediaSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaSessionClient>;

class MediaSessionService;
using MediaSessionServicePtr = mojo::InterfacePtr<MediaSessionService>;
using MediaSessionServicePtrInfo = mojo::InterfacePtrInfo<MediaSessionService>;
using ThreadSafeMediaSessionServicePtr =
    mojo::ThreadSafeInterfacePtr<MediaSessionService>;
using MediaSessionServiceRequest = mojo::InterfaceRequest<MediaSessionService>;
using MediaSessionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaSessionService>;
using ThreadSafeMediaSessionServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaSessionService>;
using MediaSessionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaSessionService>;
using MediaSessionServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaSessionService>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_FORWARD_H_