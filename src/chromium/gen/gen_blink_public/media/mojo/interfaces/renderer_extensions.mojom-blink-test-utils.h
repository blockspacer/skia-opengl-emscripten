// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/renderer_extensions.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaPlayerRendererClientExtensionInterceptorForTesting : public MediaPlayerRendererClientExtension {
  virtual MediaPlayerRendererClientExtension* GetForwardingInterface() = 0;
  void OnVideoSizeChange(const ::blink::WebSize& size) override;
  void OnDurationChange(base::TimeDelta duration) override;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererClientExtensionAsyncWaiter {
 public:
  explicit MediaPlayerRendererClientExtensionAsyncWaiter(MediaPlayerRendererClientExtension* proxy);
  ~MediaPlayerRendererClientExtensionAsyncWaiter();

 private:
  MediaPlayerRendererClientExtension* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaPlayerRendererClientExtensionAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtensionInterceptorForTesting : public MediaPlayerRendererExtension {
  virtual MediaPlayerRendererExtension* GetForwardingInterface() = 0;
  void InitiateScopedSurfaceRequest(InitiateScopedSurfaceRequestCallback callback) override;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtensionAsyncWaiter {
 public:
  explicit MediaPlayerRendererExtensionAsyncWaiter(MediaPlayerRendererExtension* proxy);
  ~MediaPlayerRendererExtensionAsyncWaiter();
  void InitiateScopedSurfaceRequest(
      base::UnguessableToken* out_request_token);

 private:
  MediaPlayerRendererExtension* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaPlayerRendererExtensionAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT FlingingRendererClientExtensionInterceptorForTesting : public FlingingRendererClientExtension {
  virtual FlingingRendererClientExtension* GetForwardingInterface() = 0;
  void OnRemotePlayStateChange(::media::mojom::blink::MediaStatusState state) override;
};
class BLINK_PLATFORM_EXPORT FlingingRendererClientExtensionAsyncWaiter {
 public:
  explicit FlingingRendererClientExtensionAsyncWaiter(FlingingRendererClientExtension* proxy);
  ~FlingingRendererClientExtensionAsyncWaiter();

 private:
  FlingingRendererClientExtension* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FlingingRendererClientExtensionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_TEST_UTILS_H_