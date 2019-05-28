// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 337324741 value is based on sha256(salt + "MediaMetricsProvider1").
constexpr uint32_t kMediaMetricsProvider_Initialize_Name = 337324741;
// The 268733987 value is based on sha256(salt + "MediaMetricsProvider2").
constexpr uint32_t kMediaMetricsProvider_OnError_Name = 268733987;
// The 1635241883 value is based on sha256(salt + "MediaMetricsProvider3").
constexpr uint32_t kMediaMetricsProvider_SetIsAdMedia_Name = 1635241883;
// The 799313418 value is based on sha256(salt + "MediaMetricsProvider4").
constexpr uint32_t kMediaMetricsProvider_SetIsEME_Name = 799313418;
// The 1917872438 value is based on sha256(salt + "MediaMetricsProvider5").
constexpr uint32_t kMediaMetricsProvider_SetTimeToMetadata_Name = 1917872438;
// The 357108738 value is based on sha256(salt + "MediaMetricsProvider6").
constexpr uint32_t kMediaMetricsProvider_SetTimeToFirstFrame_Name = 357108738;
// The 295689107 value is based on sha256(salt + "MediaMetricsProvider7").
constexpr uint32_t kMediaMetricsProvider_SetTimeToPlayReady_Name = 295689107;
// The 1511231166 value is based on sha256(salt + "MediaMetricsProvider8").
constexpr uint32_t kMediaMetricsProvider_SetContainerName_Name = 1511231166;
// The 1329592470 value is based on sha256(salt + "MediaMetricsProvider9").
constexpr uint32_t kMediaMetricsProvider_AcquireWatchTimeRecorder_Name = 1329592470;
// The 1965046827 value is based on sha256(salt + "MediaMetricsProvider10").
constexpr uint32_t kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name = 1965046827;
// The 870411858 value is based on sha256(salt + "MediaMetricsProvider11").
constexpr uint32_t kMediaMetricsProvider_AddBytesReceived_Name = 870411858;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_