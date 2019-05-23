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


#include "services/viz/public/interfaces/hit_test/input_target_client.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_JUMBO_H_
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace viz {
namespace mojom {


void InputTargetClientInterceptorForTesting::FrameSinkIdAt(const gfx::PointF& point, uint64_t trace_id, FrameSinkIdAtCallback callback) {
  GetForwardingInterface()->FrameSinkIdAt(std::move(point), std::move(trace_id), std::move(callback));
}
InputTargetClientAsyncWaiter::InputTargetClientAsyncWaiter(
    InputTargetClient* proxy) : proxy_(proxy) {}

InputTargetClientAsyncWaiter::~InputTargetClientAsyncWaiter() = default;

void InputTargetClientAsyncWaiter::FrameSinkIdAt(
    const gfx::PointF& point, uint64_t trace_id, viz::FrameSinkId* out_id, gfx::PointF* out_local_point) {
  base::RunLoop loop;
  proxy_->FrameSinkIdAt(std::move(point),std::move(trace_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             viz::FrameSinkId* out_id
,
             gfx::PointF* out_local_point
,
             const viz::FrameSinkId& id,
             const gfx::PointF& local_point) {*out_id = std::move(id);*out_local_point = std::move(local_point);
            loop->Quit();
          },
          &loop,
          out_id,
          out_local_point));
  loop.Run();
}





}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif