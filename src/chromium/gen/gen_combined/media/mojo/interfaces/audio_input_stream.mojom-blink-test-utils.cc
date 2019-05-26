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


#include "media/mojo/interfaces/audio_input_stream.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_BLINK_JUMBO_H_
#endif


namespace media {
namespace mojom {
namespace blink {


void AudioInputStreamInterceptorForTesting::Record() {
  GetForwardingInterface()->Record();
}
void AudioInputStreamInterceptorForTesting::SetVolume(double volume) {
  GetForwardingInterface()->SetVolume(std::move(volume));
}
AudioInputStreamAsyncWaiter::AudioInputStreamAsyncWaiter(
    AudioInputStream* proxy) : proxy_(proxy) {}

AudioInputStreamAsyncWaiter::~AudioInputStreamAsyncWaiter() = default;




void AudioInputStreamClientInterceptorForTesting::OnError() {
  GetForwardingInterface()->OnError();
}
void AudioInputStreamClientInterceptorForTesting::OnMutedStateChanged(bool is_muted) {
  GetForwardingInterface()->OnMutedStateChanged(std::move(is_muted));
}
AudioInputStreamClientAsyncWaiter::AudioInputStreamClientAsyncWaiter(
    AudioInputStreamClient* proxy) : proxy_(proxy) {}

AudioInputStreamClientAsyncWaiter::~AudioInputStreamClientAsyncWaiter() = default;




void AudioInputStreamObserverInterceptorForTesting::DidStartRecording() {
  GetForwardingInterface()->DidStartRecording();
}
AudioInputStreamObserverAsyncWaiter::AudioInputStreamObserverAsyncWaiter(
    AudioInputStreamObserver* proxy) : proxy_(proxy) {}

AudioInputStreamObserverAsyncWaiter::~AudioInputStreamObserverAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif