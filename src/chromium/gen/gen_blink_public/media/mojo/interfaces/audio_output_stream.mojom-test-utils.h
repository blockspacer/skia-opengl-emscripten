// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/audio_output_stream.mojom.h"


namespace media {
namespace mojom {


class  AudioOutputStreamInterceptorForTesting : public AudioOutputStream {
  virtual AudioOutputStream* GetForwardingInterface() = 0;
  void Play() override;
  void Pause() override;
  void SetVolume(double volume) override;
};
class  AudioOutputStreamAsyncWaiter {
 public:
  explicit AudioOutputStreamAsyncWaiter(AudioOutputStream* proxy);
  ~AudioOutputStreamAsyncWaiter();

 private:
  AudioOutputStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamAsyncWaiter);
};


class  AudioOutputStreamObserverInterceptorForTesting : public AudioOutputStreamObserver {
  virtual AudioOutputStreamObserver* GetForwardingInterface() = 0;
  void DidStartPlaying() override;
  void DidStopPlaying() override;
  void DidChangeAudibleState(bool is_audible) override;
};
class  AudioOutputStreamObserverAsyncWaiter {
 public:
  explicit AudioOutputStreamObserverAsyncWaiter(AudioOutputStreamObserver* proxy);
  ~AudioOutputStreamObserverAsyncWaiter();

 private:
  AudioOutputStreamObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamObserverAsyncWaiter);
};


class  AudioOutputStreamProviderInterceptorForTesting : public AudioOutputStreamProvider {
  virtual AudioOutputStreamProvider* GetForwardingInterface() = 0;
  void Acquire(const media::AudioParameters& params, AudioOutputStreamProviderClientPtr client, const base::Optional<base::UnguessableToken>& processing_id) override;
};
class  AudioOutputStreamProviderAsyncWaiter {
 public:
  explicit AudioOutputStreamProviderAsyncWaiter(AudioOutputStreamProvider* proxy);
  ~AudioOutputStreamProviderAsyncWaiter();

 private:
  AudioOutputStreamProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamProviderAsyncWaiter);
};


class  AudioOutputStreamProviderClientInterceptorForTesting : public AudioOutputStreamProviderClient {
  virtual AudioOutputStreamProviderClient* GetForwardingInterface() = 0;
  void Created(AudioOutputStreamPtr stream, ::media::mojom::ReadWriteAudioDataPipePtr data_pipe) override;
};
class  AudioOutputStreamProviderClientAsyncWaiter {
 public:
  explicit AudioOutputStreamProviderClientAsyncWaiter(AudioOutputStreamProviderClient* proxy);
  ~AudioOutputStreamProviderClientAsyncWaiter();

 private:
  AudioOutputStreamProviderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamProviderClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_TEST_UTILS_H_