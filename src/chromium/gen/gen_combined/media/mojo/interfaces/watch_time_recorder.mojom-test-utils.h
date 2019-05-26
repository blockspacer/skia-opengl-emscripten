// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/watch_time_recorder.mojom.h"


namespace media {
namespace mojom {


class  WatchTimeRecorderInterceptorForTesting : public WatchTimeRecorder {
  virtual WatchTimeRecorder* GetForwardingInterface() = 0;
  void RecordWatchTime(media::WatchTimeKey key, base::TimeDelta watch_time) override;
  void FinalizeWatchTime(const std::vector<media::WatchTimeKey>& watch_time_keys) override;
  void OnError(media::PipelineStatus status) override;
  void UpdateSecondaryProperties(SecondaryPlaybackPropertiesPtr secondary_properties) override;
  void SetAutoplayInitiated(bool value) override;
  void OnDurationChanged(base::TimeDelta duration) override;
  void UpdateUnderflowCount(int32_t count) override;
};
class  WatchTimeRecorderAsyncWaiter {
 public:
  explicit WatchTimeRecorderAsyncWaiter(WatchTimeRecorder* proxy);
  ~WatchTimeRecorderAsyncWaiter();

 private:
  WatchTimeRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WatchTimeRecorderAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_TEST_UTILS_H_