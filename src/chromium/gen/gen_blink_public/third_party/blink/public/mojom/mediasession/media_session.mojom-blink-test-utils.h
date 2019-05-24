// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mediasession/media_session.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT MediaSessionClientInterceptorForTesting : public MediaSessionClient {
  virtual MediaSessionClient* GetForwardingInterface() = 0;
  void DidReceiveAction(::media_session::mojom::blink::MediaSessionAction action) override;
};
class PLATFORM_EXPORT MediaSessionClientAsyncWaiter {
 public:
  explicit MediaSessionClientAsyncWaiter(MediaSessionClient* proxy);
  ~MediaSessionClientAsyncWaiter();

 private:
  MediaSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionClientAsyncWaiter);
};


class PLATFORM_EXPORT MediaSessionServiceInterceptorForTesting : public MediaSessionService {
  virtual MediaSessionService* GetForwardingInterface() = 0;
  void SetClient(MediaSessionClientPtr client) override;
  void SetPlaybackState(MediaSessionPlaybackState state) override;
  void SetMetadata(SpecMediaMetadataPtr metadata) override;
  void EnableAction(::media_session::mojom::blink::MediaSessionAction action) override;
  void DisableAction(::media_session::mojom::blink::MediaSessionAction action) override;
};
class PLATFORM_EXPORT MediaSessionServiceAsyncWaiter {
 public:
  explicit MediaSessionServiceAsyncWaiter(MediaSessionService* proxy);
  ~MediaSessionServiceAsyncWaiter();

 private:
  MediaSessionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_