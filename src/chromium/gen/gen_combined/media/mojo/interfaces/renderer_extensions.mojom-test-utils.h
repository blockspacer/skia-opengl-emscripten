// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/renderer_extensions.mojom.h"


namespace media {
namespace mojom {


class  MediaPlayerRendererClientExtensionInterceptorForTesting : public MediaPlayerRendererClientExtension {
  virtual MediaPlayerRendererClientExtension* GetForwardingInterface() = 0;
  void OnVideoSizeChange(const gfx::Size& size) override;
  void OnDurationChange(base::TimeDelta duration) override;
};
class  MediaPlayerRendererClientExtensionAsyncWaiter {
 public:
  explicit MediaPlayerRendererClientExtensionAsyncWaiter(MediaPlayerRendererClientExtension* proxy);
  ~MediaPlayerRendererClientExtensionAsyncWaiter();

 private:
  MediaPlayerRendererClientExtension* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaPlayerRendererClientExtensionAsyncWaiter);
};


class  MediaPlayerRendererExtensionInterceptorForTesting : public MediaPlayerRendererExtension {
  virtual MediaPlayerRendererExtension* GetForwardingInterface() = 0;
  void InitiateScopedSurfaceRequest(InitiateScopedSurfaceRequestCallback callback) override;
};
class  MediaPlayerRendererExtensionAsyncWaiter {
 public:
  explicit MediaPlayerRendererExtensionAsyncWaiter(MediaPlayerRendererExtension* proxy);
  ~MediaPlayerRendererExtensionAsyncWaiter();
  void InitiateScopedSurfaceRequest(
      base::UnguessableToken* out_request_token);

 private:
  MediaPlayerRendererExtension* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaPlayerRendererExtensionAsyncWaiter);
};


class  FlingingRendererClientExtensionInterceptorForTesting : public FlingingRendererClientExtension {
  virtual FlingingRendererClientExtension* GetForwardingInterface() = 0;
  void OnRemotePlayStateChange(media::MediaStatus::State state) override;
};
class  FlingingRendererClientExtensionAsyncWaiter {
 public:
  explicit FlingingRendererClientExtensionAsyncWaiter(FlingingRendererClientExtension* proxy);
  ~FlingingRendererClientExtensionAsyncWaiter();

 private:
  FlingingRendererClientExtension* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FlingingRendererClientExtensionAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_TEST_UTILS_H_