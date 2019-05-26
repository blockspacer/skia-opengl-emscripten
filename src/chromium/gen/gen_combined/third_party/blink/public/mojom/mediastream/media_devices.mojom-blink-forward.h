// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_FORWARD_H_

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

enum class MediaDeviceType : int32_t;

enum class FacingMode : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_MediaDeviceType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::MediaDeviceType> {
  using Hash = blink_mojom_internal_MediaDeviceType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_FacingMode_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::FacingMode> {
  using Hash = blink_mojom_internal_FacingMode_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using MediaDeviceType = MediaDeviceType;  // Alias for definition in the parent namespace.
using FacingMode = FacingMode;  // Alias for definition in the parent namespace.
class MediaDeviceInfo;
using MediaDeviceInfoPtr = mojo::InlinedStructPtr<MediaDeviceInfo>;

class VideoInputDeviceCapabilities;
using VideoInputDeviceCapabilitiesPtr = mojo::StructPtr<VideoInputDeviceCapabilities>;

class AudioInputDeviceCapabilities;
using AudioInputDeviceCapabilitiesPtr = mojo::StructPtr<AudioInputDeviceCapabilities>;

class MediaDevicesDispatcherHost;
using MediaDevicesDispatcherHostPtr = mojo::InterfacePtr<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostPtrInfo = mojo::InterfacePtrInfo<MediaDevicesDispatcherHost>;
using ThreadSafeMediaDevicesDispatcherHostPtr =
    mojo::ThreadSafeInterfacePtr<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostRequest = mojo::InterfaceRequest<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDevicesDispatcherHost>;
using ThreadSafeMediaDevicesDispatcherHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDevicesDispatcherHost>;

class MediaDevicesListener;
using MediaDevicesListenerPtr = mojo::InterfacePtr<MediaDevicesListener>;
using MediaDevicesListenerPtrInfo = mojo::InterfacePtrInfo<MediaDevicesListener>;
using ThreadSafeMediaDevicesListenerPtr =
    mojo::ThreadSafeInterfacePtr<MediaDevicesListener>;
using MediaDevicesListenerRequest = mojo::InterfaceRequest<MediaDevicesListener>;
using MediaDevicesListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDevicesListener>;
using ThreadSafeMediaDevicesListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDevicesListener>;
using MediaDevicesListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDevicesListener>;
using MediaDevicesListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDevicesListener>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_FORWARD_H_