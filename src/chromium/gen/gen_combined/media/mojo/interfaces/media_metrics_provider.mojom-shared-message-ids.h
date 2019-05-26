// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 402473007 value is based on sha256(salt + "MediaMetricsProvider1").
constexpr uint32_t kMediaMetricsProvider_Initialize_Name = 402473007;
// The 997339136 value is based on sha256(salt + "MediaMetricsProvider2").
constexpr uint32_t kMediaMetricsProvider_OnError_Name = 997339136;
// The 1241043182 value is based on sha256(salt + "MediaMetricsProvider3").
constexpr uint32_t kMediaMetricsProvider_SetIsAdMedia_Name = 1241043182;
// The 232814361 value is based on sha256(salt + "MediaMetricsProvider4").
constexpr uint32_t kMediaMetricsProvider_SetIsEME_Name = 232814361;
// The 1282784882 value is based on sha256(salt + "MediaMetricsProvider5").
constexpr uint32_t kMediaMetricsProvider_SetTimeToMetadata_Name = 1282784882;
// The 1438509015 value is based on sha256(salt + "MediaMetricsProvider6").
constexpr uint32_t kMediaMetricsProvider_SetTimeToFirstFrame_Name = 1438509015;
// The 959989999 value is based on sha256(salt + "MediaMetricsProvider7").
constexpr uint32_t kMediaMetricsProvider_SetTimeToPlayReady_Name = 959989999;
// The 1244495561 value is based on sha256(salt + "MediaMetricsProvider8").
constexpr uint32_t kMediaMetricsProvider_SetContainerName_Name = 1244495561;
// The 1660501633 value is based on sha256(salt + "MediaMetricsProvider9").
constexpr uint32_t kMediaMetricsProvider_AcquireWatchTimeRecorder_Name = 1660501633;
// The 307736081 value is based on sha256(salt + "MediaMetricsProvider10").
constexpr uint32_t kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name = 307736081;
// The 1238993130 value is based on sha256(salt + "MediaMetricsProvider11").
constexpr uint32_t kMediaMetricsProvider_AddBytesReceived_Name = 1238993130;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_