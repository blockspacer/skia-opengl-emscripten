// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1314827203 value is based on sha256(salt + "VideoDecodeStatsRecorder1").
constexpr uint32_t kVideoDecodeStatsRecorder_StartNewRecord_Name = 1314827203;
// The 1749780422 value is based on sha256(salt + "VideoDecodeStatsRecorder2").
constexpr uint32_t kVideoDecodeStatsRecorder_UpdateRecord_Name = 1749780422;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_