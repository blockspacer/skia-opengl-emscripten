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


#include "services/media_session/public/mojom/audio_focus.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/media_session/public/mojom/media_session.mojom-blink.h"


#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_BLINK_JUMBO_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif


namespace media_session {
namespace mojom {
namespace blink {


void AudioFocusObserverInterceptorForTesting::OnFocusGained(AudioFocusRequestStatePtr state) {
  GetForwardingInterface()->OnFocusGained(std::move(state));
}
void AudioFocusObserverInterceptorForTesting::OnFocusLost(AudioFocusRequestStatePtr state) {
  GetForwardingInterface()->OnFocusLost(std::move(state));
}
AudioFocusObserverAsyncWaiter::AudioFocusObserverAsyncWaiter(
    AudioFocusObserver* proxy) : proxy_(proxy) {}

AudioFocusObserverAsyncWaiter::~AudioFocusObserverAsyncWaiter() = default;




void AudioFocusRequestClientInterceptorForTesting::RequestAudioFocus(::media_session::mojom::blink::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) {
  GetForwardingInterface()->RequestAudioFocus(std::move(session_info), std::move(type), std::move(callback));
}
void AudioFocusRequestClientInterceptorForTesting::AbandonAudioFocus() {
  GetForwardingInterface()->AbandonAudioFocus();
}
void AudioFocusRequestClientInterceptorForTesting::MediaSessionInfoChanged(::media_session::mojom::blink::MediaSessionInfoPtr session_info) {
  GetForwardingInterface()->MediaSessionInfoChanged(std::move(session_info));
}
AudioFocusRequestClientAsyncWaiter::AudioFocusRequestClientAsyncWaiter(
    AudioFocusRequestClient* proxy) : proxy_(proxy) {}

AudioFocusRequestClientAsyncWaiter::~AudioFocusRequestClientAsyncWaiter() = default;

void AudioFocusRequestClientAsyncWaiter::RequestAudioFocus(
    ::media_session::mojom::blink::MediaSessionInfoPtr session_info, AudioFocusType type) {
  base::RunLoop loop;
  proxy_->RequestAudioFocus(std::move(session_info),std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void AudioFocusManagerInterceptorForTesting::RequestAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::blink::MediaSessionPtr media_session, ::media_session::mojom::blink::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) {
  GetForwardingInterface()->RequestAudioFocus(std::move(client), std::move(media_session), std::move(session_info), std::move(type), std::move(callback));
}
void AudioFocusManagerInterceptorForTesting::RequestGroupedAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::blink::MediaSessionPtr media_session, ::media_session::mojom::blink::MediaSessionInfoPtr session_info, AudioFocusType type, const base::UnguessableToken& group_id, RequestGroupedAudioFocusCallback callback) {
  GetForwardingInterface()->RequestGroupedAudioFocus(std::move(client), std::move(media_session), std::move(session_info), std::move(type), std::move(group_id), std::move(callback));
}
void AudioFocusManagerInterceptorForTesting::GetFocusRequests(GetFocusRequestsCallback callback) {
  GetForwardingInterface()->GetFocusRequests(std::move(callback));
}
void AudioFocusManagerInterceptorForTesting::AddObserver(AudioFocusObserverPtr observer) {
  GetForwardingInterface()->AddObserver(std::move(observer));
}
void AudioFocusManagerInterceptorForTesting::SetSourceName(const WTF::String& name) {
  GetForwardingInterface()->SetSourceName(std::move(name));
}
void AudioFocusManagerInterceptorForTesting::SetEnforcementMode(EnforcementMode mode) {
  GetForwardingInterface()->SetEnforcementMode(std::move(mode));
}
AudioFocusManagerAsyncWaiter::AudioFocusManagerAsyncWaiter(
    AudioFocusManager* proxy) : proxy_(proxy) {}

AudioFocusManagerAsyncWaiter::~AudioFocusManagerAsyncWaiter() = default;

void AudioFocusManagerAsyncWaiter::RequestAudioFocus(
    AudioFocusRequestClientRequest client, ::media_session::mojom::blink::MediaSessionPtr media_session, ::media_session::mojom::blink::MediaSessionInfoPtr session_info, AudioFocusType type, base::UnguessableToken* out_request_id) {
  base::RunLoop loop;
  proxy_->RequestAudioFocus(std::move(client),std::move(media_session),std::move(session_info),std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_request_id
,
             const base::UnguessableToken& request_id) {*out_request_id = std::move(request_id);
            loop->Quit();
          },
          &loop,
          out_request_id));
  loop.Run();
}
void AudioFocusManagerAsyncWaiter::RequestGroupedAudioFocus(
    AudioFocusRequestClientRequest client, ::media_session::mojom::blink::MediaSessionPtr media_session, ::media_session::mojom::blink::MediaSessionInfoPtr session_info, AudioFocusType type, const base::UnguessableToken& group_id, base::UnguessableToken* out_request_id) {
  base::RunLoop loop;
  proxy_->RequestGroupedAudioFocus(std::move(client),std::move(media_session),std::move(session_info),std::move(type),std::move(group_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_request_id
,
             const base::UnguessableToken& request_id) {*out_request_id = std::move(request_id);
            loop->Quit();
          },
          &loop,
          out_request_id));
  loop.Run();
}
void AudioFocusManagerAsyncWaiter::GetFocusRequests(
    WTF::Vector<AudioFocusRequestStatePtr>* out_requests) {
  base::RunLoop loop;
  proxy_->GetFocusRequests(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<AudioFocusRequestStatePtr>* out_requests
,
             WTF::Vector<AudioFocusRequestStatePtr> requests) {*out_requests = std::move(requests);
            loop->Quit();
          },
          &loop,
          out_requests));
  loop.Run();
}



void AudioFocusManagerDebugInterceptorForTesting::GetDebugInfoForRequest(const base::UnguessableToken& request_id, GetDebugInfoForRequestCallback callback) {
  GetForwardingInterface()->GetDebugInfoForRequest(std::move(request_id), std::move(callback));
}
AudioFocusManagerDebugAsyncWaiter::AudioFocusManagerDebugAsyncWaiter(
    AudioFocusManagerDebug* proxy) : proxy_(proxy) {}

AudioFocusManagerDebugAsyncWaiter::~AudioFocusManagerDebugAsyncWaiter() = default;

void AudioFocusManagerDebugAsyncWaiter::GetDebugInfoForRequest(
    const base::UnguessableToken& request_id, ::media_session::mojom::blink::MediaSessionDebugInfoPtr* out_debug_info) {
  base::RunLoop loop;
  proxy_->GetDebugInfoForRequest(std::move(request_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media_session::mojom::blink::MediaSessionDebugInfoPtr* out_debug_info
,
             ::media_session::mojom::blink::MediaSessionDebugInfoPtr debug_info) {*out_debug_info = std::move(debug_info);
            loop->Quit();
          },
          &loop,
          out_debug_info));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif