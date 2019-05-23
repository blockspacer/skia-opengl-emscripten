// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mediasession/media_session.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT MediaSessionClientInterceptorForTesting : public MediaSessionClient {
  virtual MediaSessionClient* GetForwardingInterface() = 0;
  void DidReceiveAction(::media_session::mojom::MediaSessionAction action) override;
};
class BLINK_COMMON_EXPORT MediaSessionClientAsyncWaiter {
 public:
  explicit MediaSessionClientAsyncWaiter(MediaSessionClient* proxy);
  ~MediaSessionClientAsyncWaiter();

 private:
  MediaSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT MediaSessionServiceInterceptorForTesting : public MediaSessionService {
  virtual MediaSessionService* GetForwardingInterface() = 0;
  void SetClient(MediaSessionClientPtr client) override;
  void SetPlaybackState(MediaSessionPlaybackState state) override;
  void SetMetadata(SpecMediaMetadataPtr metadata) override;
  void EnableAction(::media_session::mojom::MediaSessionAction action) override;
  void DisableAction(::media_session::mojom::MediaSessionAction action) override;
};
class BLINK_COMMON_EXPORT MediaSessionServiceAsyncWaiter {
 public:
  explicit MediaSessionServiceAsyncWaiter(MediaSessionService* proxy);
  ~MediaSessionServiceAsyncWaiter();

 private:
  MediaSessionService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_TEST_UTILS_H_