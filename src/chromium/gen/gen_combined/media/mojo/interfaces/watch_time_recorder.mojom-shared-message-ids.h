// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1324628860 value is based on sha256(salt + "WatchTimeRecorder1").
constexpr uint32_t kWatchTimeRecorder_RecordWatchTime_Name = 1324628860;
// The 362463502 value is based on sha256(salt + "WatchTimeRecorder2").
constexpr uint32_t kWatchTimeRecorder_FinalizeWatchTime_Name = 362463502;
// The 970976558 value is based on sha256(salt + "WatchTimeRecorder3").
constexpr uint32_t kWatchTimeRecorder_OnError_Name = 970976558;
// The 1634395309 value is based on sha256(salt + "WatchTimeRecorder4").
constexpr uint32_t kWatchTimeRecorder_UpdateSecondaryProperties_Name = 1634395309;
// The 1648514125 value is based on sha256(salt + "WatchTimeRecorder5").
constexpr uint32_t kWatchTimeRecorder_SetAutoplayInitiated_Name = 1648514125;
// The 803980227 value is based on sha256(salt + "WatchTimeRecorder6").
constexpr uint32_t kWatchTimeRecorder_OnDurationChanged_Name = 803980227;
// The 1134551943 value is based on sha256(salt + "WatchTimeRecorder7").
constexpr uint32_t kWatchTimeRecorder_UpdateUnderflowCount_Name = 1134551943;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_