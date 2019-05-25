// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1398861486 value is based on sha256(salt + "MediaDevicesDispatcherHost1").
constexpr uint32_t kMediaDevicesDispatcherHost_EnumerateDevices_Name = 1398861486;
// The 157575354 value is based on sha256(salt + "MediaDevicesDispatcherHost2").
constexpr uint32_t kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name = 157575354;
// The 371274618 value is based on sha256(salt + "MediaDevicesDispatcherHost3").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name = 371274618;
// The 518617393 value is based on sha256(salt + "MediaDevicesDispatcherHost4").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name = 518617393;
// The 1549862888 value is based on sha256(salt + "MediaDevicesDispatcherHost5").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name = 1549862888;
// The 1339046912 value is based on sha256(salt + "MediaDevicesDispatcherHost6").
constexpr uint32_t kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name = 1339046912;
// The 1195965223 value is based on sha256(salt + "MediaDevicesListener1").
constexpr uint32_t kMediaDevicesListener_OnDevicesChanged_Name = 1195965223;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_