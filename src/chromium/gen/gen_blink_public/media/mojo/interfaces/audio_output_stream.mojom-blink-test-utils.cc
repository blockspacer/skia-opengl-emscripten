// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "media/mojo/interfaces/audio_output_stream.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-blink.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void AudioOutputStreamInterceptorForTesting::Play() {
  GetForwardingInterface()->Play();
}
void AudioOutputStreamInterceptorForTesting::Pause() {
  GetForwardingInterface()->Pause();
}
void AudioOutputStreamInterceptorForTesting::SetVolume(double volume) {
  GetForwardingInterface()->SetVolume(std::move(volume));
}
AudioOutputStreamAsyncWaiter::AudioOutputStreamAsyncWaiter(
    AudioOutputStream* proxy) : proxy_(proxy) {}

AudioOutputStreamAsyncWaiter::~AudioOutputStreamAsyncWaiter() = default;




void AudioOutputStreamObserverInterceptorForTesting::DidStartPlaying() {
  GetForwardingInterface()->DidStartPlaying();
}
void AudioOutputStreamObserverInterceptorForTesting::DidStopPlaying() {
  GetForwardingInterface()->DidStopPlaying();
}
void AudioOutputStreamObserverInterceptorForTesting::DidChangeAudibleState(bool is_audible) {
  GetForwardingInterface()->DidChangeAudibleState(std::move(is_audible));
}
AudioOutputStreamObserverAsyncWaiter::AudioOutputStreamObserverAsyncWaiter(
    AudioOutputStreamObserver* proxy) : proxy_(proxy) {}

AudioOutputStreamObserverAsyncWaiter::~AudioOutputStreamObserverAsyncWaiter() = default;




void AudioOutputStreamProviderInterceptorForTesting::Acquire(::media::mojom::blink::AudioParametersPtr params, AudioOutputStreamProviderClientPtr client, const base::Optional<base::UnguessableToken>& processing_id) {
  GetForwardingInterface()->Acquire(std::move(params), std::move(client), std::move(processing_id));
}
AudioOutputStreamProviderAsyncWaiter::AudioOutputStreamProviderAsyncWaiter(
    AudioOutputStreamProvider* proxy) : proxy_(proxy) {}

AudioOutputStreamProviderAsyncWaiter::~AudioOutputStreamProviderAsyncWaiter() = default;




void AudioOutputStreamProviderClientInterceptorForTesting::Created(AudioOutputStreamPtr stream, ::media::mojom::blink::ReadWriteAudioDataPipePtr data_pipe) {
  GetForwardingInterface()->Created(std::move(stream), std::move(data_pipe));
}
AudioOutputStreamProviderClientAsyncWaiter::AudioOutputStreamProviderClientAsyncWaiter(
    AudioOutputStreamProviderClient* proxy) : proxy_(proxy) {}

AudioOutputStreamProviderClientAsyncWaiter::~AudioOutputStreamProviderClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif