// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/audio_input_stream.mojom.h"


namespace media {
namespace mojom {


class  AudioInputStreamInterceptorForTesting : public AudioInputStream {
  virtual AudioInputStream* GetForwardingInterface() = 0;
  void Record() override;
  void SetVolume(double volume) override;
};
class  AudioInputStreamAsyncWaiter {
 public:
  explicit AudioInputStreamAsyncWaiter(AudioInputStream* proxy);
  ~AudioInputStreamAsyncWaiter();

 private:
  AudioInputStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioInputStreamAsyncWaiter);
};


class  AudioInputStreamClientInterceptorForTesting : public AudioInputStreamClient {
  virtual AudioInputStreamClient* GetForwardingInterface() = 0;
  void OnError() override;
  void OnMutedStateChanged(bool is_muted) override;
};
class  AudioInputStreamClientAsyncWaiter {
 public:
  explicit AudioInputStreamClientAsyncWaiter(AudioInputStreamClient* proxy);
  ~AudioInputStreamClientAsyncWaiter();

 private:
  AudioInputStreamClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioInputStreamClientAsyncWaiter);
};


class  AudioInputStreamObserverInterceptorForTesting : public AudioInputStreamObserver {
  virtual AudioInputStreamObserver* GetForwardingInterface() = 0;
  void DidStartRecording() override;
};
class  AudioInputStreamObserverAsyncWaiter {
 public:
  explicit AudioInputStreamObserverAsyncWaiter(AudioInputStreamObserver* proxy);
  ~AudioInputStreamObserverAsyncWaiter();

 private:
  AudioInputStreamObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioInputStreamObserverAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_TEST_UTILS_H_