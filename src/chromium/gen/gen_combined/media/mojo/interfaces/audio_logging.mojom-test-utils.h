// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/audio_logging.mojom.h"


namespace media {
namespace mojom {


class  AudioLogInterceptorForTesting : public AudioLog {
  virtual AudioLog* GetForwardingInterface() = 0;
  void OnCreated(const media::AudioParameters& params, const std::string& device_id) override;
  void OnStarted() override;
  void OnStopped() override;
  void OnClosed() override;
  void OnError() override;
  void OnSetVolume(double volume) override;
  void OnProcessingStateChanged(const std::string& message) override;
  void OnLogMessage(const std::string& message) override;
};
class  AudioLogAsyncWaiter {
 public:
  explicit AudioLogAsyncWaiter(AudioLog* proxy);
  ~AudioLogAsyncWaiter();

 private:
  AudioLog* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioLogAsyncWaiter);
};


class  AudioLogFactoryInterceptorForTesting : public AudioLogFactory {
  virtual AudioLogFactory* GetForwardingInterface() = 0;
  void CreateAudioLog(AudioLogComponent component, int32_t component_id, AudioLogRequest audio_log_request) override;
};
class  AudioLogFactoryAsyncWaiter {
 public:
  explicit AudioLogFactoryAsyncWaiter(AudioLogFactory* proxy);
  ~AudioLogFactoryAsyncWaiter();

 private:
  AudioLogFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioLogFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_TEST_UTILS_H_