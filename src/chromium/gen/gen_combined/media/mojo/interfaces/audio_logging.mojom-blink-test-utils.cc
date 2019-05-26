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


#include "media/mojo/interfaces/audio_logging.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_JUMBO_H_
#endif


namespace media {
namespace mojom {
namespace blink {


void AudioLogInterceptorForTesting::OnCreated(::media::mojom::blink::AudioParametersPtr params, const WTF::String& device_id) {
  GetForwardingInterface()->OnCreated(std::move(params), std::move(device_id));
}
void AudioLogInterceptorForTesting::OnStarted() {
  GetForwardingInterface()->OnStarted();
}
void AudioLogInterceptorForTesting::OnStopped() {
  GetForwardingInterface()->OnStopped();
}
void AudioLogInterceptorForTesting::OnClosed() {
  GetForwardingInterface()->OnClosed();
}
void AudioLogInterceptorForTesting::OnError() {
  GetForwardingInterface()->OnError();
}
void AudioLogInterceptorForTesting::OnSetVolume(double volume) {
  GetForwardingInterface()->OnSetVolume(std::move(volume));
}
void AudioLogInterceptorForTesting::OnProcessingStateChanged(const WTF::String& message) {
  GetForwardingInterface()->OnProcessingStateChanged(std::move(message));
}
void AudioLogInterceptorForTesting::OnLogMessage(const WTF::String& message) {
  GetForwardingInterface()->OnLogMessage(std::move(message));
}
AudioLogAsyncWaiter::AudioLogAsyncWaiter(
    AudioLog* proxy) : proxy_(proxy) {}

AudioLogAsyncWaiter::~AudioLogAsyncWaiter() = default;




void AudioLogFactoryInterceptorForTesting::CreateAudioLog(AudioLogComponent component, int32_t component_id, AudioLogRequest audio_log_request) {
  GetForwardingInterface()->CreateAudioLog(std::move(component), std::move(component_id), std::move(audio_log_request));
}
AudioLogFactoryAsyncWaiter::AudioLogFactoryAsyncWaiter(
    AudioLogFactory* proxy) : proxy_(proxy) {}

AudioLogFactoryAsyncWaiter::~AudioLogFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif