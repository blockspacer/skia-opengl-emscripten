// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1110924164 value is based on sha256(salt + "WatchTimeRecorder1").
constexpr uint32_t kWatchTimeRecorder_RecordWatchTime_Name = 1110924164;
// The 298708002 value is based on sha256(salt + "WatchTimeRecorder2").
constexpr uint32_t kWatchTimeRecorder_FinalizeWatchTime_Name = 298708002;
// The 1612843117 value is based on sha256(salt + "WatchTimeRecorder3").
constexpr uint32_t kWatchTimeRecorder_OnError_Name = 1612843117;
// The 1893665377 value is based on sha256(salt + "WatchTimeRecorder4").
constexpr uint32_t kWatchTimeRecorder_UpdateSecondaryProperties_Name = 1893665377;
// The 1414203808 value is based on sha256(salt + "WatchTimeRecorder5").
constexpr uint32_t kWatchTimeRecorder_SetAutoplayInitiated_Name = 1414203808;
// The 560418560 value is based on sha256(salt + "WatchTimeRecorder6").
constexpr uint32_t kWatchTimeRecorder_OnDurationChanged_Name = 560418560;
// The 1158741639 value is based on sha256(salt + "WatchTimeRecorder7").
constexpr uint32_t kWatchTimeRecorder_UpdateUnderflowCount_Name = 1158741639;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_