// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_FORWARD_H_

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

enum class MediaStreamType : int32_t;

enum class MediaStreamRequestResult : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_MediaStreamType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::MediaStreamType> {
  using Hash = blink_mojom_internal_MediaStreamType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_MediaStreamRequestResult_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::MediaStreamRequestResult> {
  using Hash = blink_mojom_internal_MediaStreamRequestResult_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using MediaStreamType = MediaStreamType;  // Alias for definition in the parent namespace.
using MediaStreamRequestResult = MediaStreamRequestResult;  // Alias for definition in the parent namespace.
class MediaStreamDevice;
using MediaStreamDevicePtr = mojo::StructPtr<MediaStreamDevice>;

class TrackControls;
using TrackControlsPtr = mojo::InlinedStructPtr<TrackControls>;

class StreamControls;
using StreamControlsPtr = mojo::StructPtr<StreamControls>;

class MediaStreamDeviceObserver;
using MediaStreamDeviceObserverPtr = mojo::InterfacePtr<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverPtrInfo = mojo::InterfacePtrInfo<MediaStreamDeviceObserver>;
using ThreadSafeMediaStreamDeviceObserverPtr =
    mojo::ThreadSafeInterfacePtr<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverRequest = mojo::InterfaceRequest<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStreamDeviceObserver>;
using ThreadSafeMediaStreamDeviceObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStreamDeviceObserver>;

class MediaStreamDispatcherHost;
using MediaStreamDispatcherHostPtr = mojo::InterfacePtr<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostPtrInfo = mojo::InterfacePtrInfo<MediaStreamDispatcherHost>;
using ThreadSafeMediaStreamDispatcherHostPtr =
    mojo::ThreadSafeInterfacePtr<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostRequest = mojo::InterfaceRequest<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStreamDispatcherHost>;
using ThreadSafeMediaStreamDispatcherHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStreamDispatcherHost>;

class MediaStreamTrackMetricsHost;
using MediaStreamTrackMetricsHostPtr = mojo::InterfacePtr<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostPtrInfo = mojo::InterfacePtrInfo<MediaStreamTrackMetricsHost>;
using ThreadSafeMediaStreamTrackMetricsHostPtr =
    mojo::ThreadSafeInterfacePtr<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostRequest = mojo::InterfaceRequest<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStreamTrackMetricsHost>;
using ThreadSafeMediaStreamTrackMetricsHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStreamTrackMetricsHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_FORWARD_H_