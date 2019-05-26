// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_TEST_UTILS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_TEST_UTILS_H_

#include "services/media_session/public/mojom/audio_focus.mojom.h"


namespace media_session {
namespace mojom {


class  AudioFocusObserverInterceptorForTesting : public AudioFocusObserver {
  virtual AudioFocusObserver* GetForwardingInterface() = 0;
  void OnFocusGained(AudioFocusRequestStatePtr state) override;
  void OnFocusLost(AudioFocusRequestStatePtr state) override;
};
class  AudioFocusObserverAsyncWaiter {
 public:
  explicit AudioFocusObserverAsyncWaiter(AudioFocusObserver* proxy);
  ~AudioFocusObserverAsyncWaiter();

 private:
  AudioFocusObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusObserverAsyncWaiter);
};


class  AudioFocusRequestClientInterceptorForTesting : public AudioFocusRequestClient {
  virtual AudioFocusRequestClient* GetForwardingInterface() = 0;
  void RequestAudioFocus(::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) override;
  void AbandonAudioFocus() override;
  void MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr session_info) override;
};
class  AudioFocusRequestClientAsyncWaiter {
 public:
  explicit AudioFocusRequestClientAsyncWaiter(AudioFocusRequestClient* proxy);
  ~AudioFocusRequestClientAsyncWaiter();
  void RequestAudioFocus(
      ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type);

 private:
  AudioFocusRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusRequestClientAsyncWaiter);
};


class  AudioFocusManagerInterceptorForTesting : public AudioFocusManager {
  virtual AudioFocusManager* GetForwardingInterface() = 0;
  void RequestAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) override;
  void RequestGroupedAudioFocus(AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, const base::UnguessableToken& group_id, RequestGroupedAudioFocusCallback callback) override;
  void GetFocusRequests(GetFocusRequestsCallback callback) override;
  void AddObserver(AudioFocusObserverPtr observer) override;
  void SetSourceName(const std::string& name) override;
  void SetEnforcementMode(EnforcementMode mode) override;
};
class  AudioFocusManagerAsyncWaiter {
 public:
  explicit AudioFocusManagerAsyncWaiter(AudioFocusManager* proxy);
  ~AudioFocusManagerAsyncWaiter();
  void RequestAudioFocus(
      AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, base::UnguessableToken* out_request_id);
  void RequestGroupedAudioFocus(
      AudioFocusRequestClientRequest client, ::media_session::mojom::MediaSessionPtr media_session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, const base::UnguessableToken& group_id, base::UnguessableToken* out_request_id);
  void GetFocusRequests(
      std::vector<AudioFocusRequestStatePtr>* out_requests);

 private:
  AudioFocusManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusManagerAsyncWaiter);
};


class  AudioFocusManagerDebugInterceptorForTesting : public AudioFocusManagerDebug {
  virtual AudioFocusManagerDebug* GetForwardingInterface() = 0;
  void GetDebugInfoForRequest(const base::UnguessableToken& request_id, GetDebugInfoForRequestCallback callback) override;
};
class  AudioFocusManagerDebugAsyncWaiter {
 public:
  explicit AudioFocusManagerDebugAsyncWaiter(AudioFocusManagerDebug* proxy);
  ~AudioFocusManagerDebugAsyncWaiter();
  void GetDebugInfoForRequest(
      const base::UnguessableToken& request_id, ::media_session::mojom::MediaSessionDebugInfoPtr* out_debug_info);

 private:
  AudioFocusManagerDebug* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AudioFocusManagerDebugAsyncWaiter);
};




}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_TEST_UTILS_H_