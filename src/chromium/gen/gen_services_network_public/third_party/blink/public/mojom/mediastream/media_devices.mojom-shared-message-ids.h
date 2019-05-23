// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1501435065 value is based on sha256(salt + "MediaDevicesDispatcherHost1").
constexpr uint32_t kMediaDevicesDispatcherHost_EnumerateDevices_Name = 1501435065;
// The 2101187756 value is based on sha256(salt + "MediaDevicesDispatcherHost2").
constexpr uint32_t kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name = 2101187756;
// The 1910596664 value is based on sha256(salt + "MediaDevicesDispatcherHost3").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name = 1910596664;
// The 1396042256 value is based on sha256(salt + "MediaDevicesDispatcherHost4").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name = 1396042256;
// The 960935225 value is based on sha256(salt + "MediaDevicesDispatcherHost5").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name = 960935225;
// The 1731283399 value is based on sha256(salt + "MediaDevicesDispatcherHost6").
constexpr uint32_t kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name = 1731283399;
// The 1261595142 value is based on sha256(salt + "MediaDevicesListener1").
constexpr uint32_t kMediaDevicesListener_OnDevicesChanged_Name = 1261595142;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_