// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {


class CONTENT_EXPORT SurfaceEmbedderInterceptorForTesting : public SurfaceEmbedder {
  virtual SurfaceEmbedder* GetForwardingInterface() = 0;
  void SetLocalSurfaceId(const viz::LocalSurfaceId& local_surface_id) override;
};
class CONTENT_EXPORT SurfaceEmbedderAsyncWaiter {
 public:
  explicit SurfaceEmbedderAsyncWaiter(SurfaceEmbedder* proxy);
  ~SurfaceEmbedderAsyncWaiter();

 private:
  SurfaceEmbedder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SurfaceEmbedderAsyncWaiter);
};


class CONTENT_EXPORT EmbeddedFrameSinkClientInterceptorForTesting : public EmbeddedFrameSinkClient {
  virtual EmbeddedFrameSinkClient* GetForwardingInterface() = 0;
  void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) override;
  void BindSurfaceEmbedder(SurfaceEmbedderRequest embedder) override;
};
class CONTENT_EXPORT EmbeddedFrameSinkClientAsyncWaiter {
 public:
  explicit EmbeddedFrameSinkClientAsyncWaiter(EmbeddedFrameSinkClient* proxy);
  ~EmbeddedFrameSinkClientAsyncWaiter();

 private:
  EmbeddedFrameSinkClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedFrameSinkClientAsyncWaiter);
};


class CONTENT_EXPORT EmbeddedFrameSinkProviderInterceptorForTesting : public EmbeddedFrameSinkProvider {
  virtual EmbeddedFrameSinkProvider* GetForwardingInterface() = 0;
  void RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) override;
  void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkClientPtr client, ::viz::mojom::CompositorFrameSinkRequest sink) override;
  void CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::CompositorFrameSinkClientPtr client, ::viz::mojom::CompositorFrameSinkRequest sink) override;
  void ConnectToEmbedder(const viz::FrameSinkId& frame_sink_id, SurfaceEmbedderRequest embedder) override;
};
class CONTENT_EXPORT EmbeddedFrameSinkProviderAsyncWaiter {
 public:
  explicit EmbeddedFrameSinkProviderAsyncWaiter(EmbeddedFrameSinkProvider* proxy);
  ~EmbeddedFrameSinkProviderAsyncWaiter();

 private:
  EmbeddedFrameSinkProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedFrameSinkProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_TEST_UTILS_H_