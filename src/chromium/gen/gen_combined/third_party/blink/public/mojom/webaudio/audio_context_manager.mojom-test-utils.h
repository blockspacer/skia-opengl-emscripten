// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUDIO_AUDIO_CONTEXT_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUDIO_AUDIO_CONTEXT_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webaudio/audio_context_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT AudioContextManagerInterceptorForTesting : public AudioContextManager {
  virtual AudioContextManager* GetForwardingInterface() = 0;
  void AudioContextAudiblePlaybackStarted(int32_t id) override;
  void AudioContextAudiblePlaybackStopped(int32_t id) override;
};
class BLINK_COMMON_EXPORT AudioContextManagerAsyncWaiter {
 public:
  explicit AudioContextManagerAsyncWaiter(AudioContextManager* proxy);
  ~AudioContextManagerAsyncWaiter();

 private:
  AudioContextManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioContextManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUDIO_AUDIO_CONTEXT_MANAGER_MOJOM_TEST_UTILS_H_