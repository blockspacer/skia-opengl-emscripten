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


#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_info_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void SurfaceEmbedderInterceptorForTesting::SetLocalSurfaceId(const viz::LocalSurfaceId& local_surface_id) {
  GetForwardingInterface()->SetLocalSurfaceId(std::move(local_surface_id));
}
SurfaceEmbedderAsyncWaiter::SurfaceEmbedderAsyncWaiter(
    SurfaceEmbedder* proxy) : proxy_(proxy) {}

SurfaceEmbedderAsyncWaiter::~SurfaceEmbedderAsyncWaiter() = default;




void EmbeddedFrameSinkClientInterceptorForTesting::OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) {
  GetForwardingInterface()->OnFirstSurfaceActivation(std::move(surface_info));
}
void EmbeddedFrameSinkClientInterceptorForTesting::BindSurfaceEmbedder(SurfaceEmbedderRequest embedder) {
  GetForwardingInterface()->BindSurfaceEmbedder(std::move(embedder));
}
EmbeddedFrameSinkClientAsyncWaiter::EmbeddedFrameSinkClientAsyncWaiter(
    EmbeddedFrameSinkClient* proxy) : proxy_(proxy) {}

EmbeddedFrameSinkClientAsyncWaiter::~EmbeddedFrameSinkClientAsyncWaiter() = default;




void EmbeddedFrameSinkProviderInterceptorForTesting::RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) {
  GetForwardingInterface()->RegisterEmbeddedFrameSink(std::move(parent_frame_sink_id), std::move(frame_sink_id), std::move(client));
}
void EmbeddedFrameSinkProviderInterceptorForTesting::CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) {
  GetForwardingInterface()->CreateCompositorFrameSink(std::move(frame_sink_id), std::move(client), std::move(sink));
}
void EmbeddedFrameSinkProviderInterceptorForTesting::CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::blink::CompositorFrameSinkClientPtr client, ::viz::mojom::blink::CompositorFrameSinkRequest sink) {
  GetForwardingInterface()->CreateSimpleCompositorFrameSink(std::move(parent_frame_sink_id), std::move(frame_sink_id), std::move(surface_client), std::move(client), std::move(sink));
}
void EmbeddedFrameSinkProviderInterceptorForTesting::ConnectToEmbedder(const viz::FrameSinkId& frame_sink_id, SurfaceEmbedderRequest embedder) {
  GetForwardingInterface()->ConnectToEmbedder(std::move(frame_sink_id), std::move(embedder));
}
EmbeddedFrameSinkProviderAsyncWaiter::EmbeddedFrameSinkProviderAsyncWaiter(
    EmbeddedFrameSinkProvider* proxy) : proxy_(proxy) {}

EmbeddedFrameSinkProviderAsyncWaiter::~EmbeddedFrameSinkProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif