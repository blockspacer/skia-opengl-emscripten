// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/audio_output_stream.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT AudioOutputStreamInterceptorForTesting : public AudioOutputStream {
  virtual AudioOutputStream* GetForwardingInterface() = 0;
  void Play() override;
  void Pause() override;
  void SetVolume(double volume) override;
};
class BLINK_PLATFORM_EXPORT AudioOutputStreamAsyncWaiter {
 public:
  explicit AudioOutputStreamAsyncWaiter(AudioOutputStream* proxy);
  ~AudioOutputStreamAsyncWaiter();

 private:
  AudioOutputStream* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT AudioOutputStreamObserverInterceptorForTesting : public AudioOutputStreamObserver {
  virtual AudioOutputStreamObserver* GetForwardingInterface() = 0;
  void DidStartPlaying() override;
  void DidStopPlaying() override;
  void DidChangeAudibleState(bool is_audible) override;
};
class BLINK_PLATFORM_EXPORT AudioOutputStreamObserverAsyncWaiter {
 public:
  explicit AudioOutputStreamObserverAsyncWaiter(AudioOutputStreamObserver* proxy);
  ~AudioOutputStreamObserverAsyncWaiter();

 private:
  AudioOutputStreamObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamObserverAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT AudioOutputStreamProviderInterceptorForTesting : public AudioOutputStreamProvider {
  virtual AudioOutputStreamProvider* GetForwardingInterface() = 0;
  void Acquire(::media::mojom::blink::AudioParametersPtr params, AudioOutputStreamProviderClientPtr client, const base::Optional<base::UnguessableToken>& processing_id) override;
};
class BLINK_PLATFORM_EXPORT AudioOutputStreamProviderAsyncWaiter {
 public:
  explicit AudioOutputStreamProviderAsyncWaiter(AudioOutputStreamProvider* proxy);
  ~AudioOutputStreamProviderAsyncWaiter();

 private:
  AudioOutputStreamProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamProviderAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT AudioOutputStreamProviderClientInterceptorForTesting : public AudioOutputStreamProviderClient {
  virtual AudioOutputStreamProviderClient* GetForwardingInterface() = 0;
  void Created(AudioOutputStreamPtr stream, ::media::mojom::blink::ReadWriteAudioDataPipePtr data_pipe) override;
};
class BLINK_PLATFORM_EXPORT AudioOutputStreamProviderClientAsyncWaiter {
 public:
  explicit AudioOutputStreamProviderClientAsyncWaiter(AudioOutputStreamProviderClient* proxy);
  ~AudioOutputStreamProviderClientAsyncWaiter();

 private:
  AudioOutputStreamProviderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutputStreamProviderClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_TEST_UTILS_H_