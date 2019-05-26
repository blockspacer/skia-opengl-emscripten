// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_TEST_UTILS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_TEST_UTILS_H_

#include "services/viz/public/interfaces/hit_test/input_target_client.mojom.h"


namespace viz {
namespace mojom {


class  InputTargetClientInterceptorForTesting : public InputTargetClient {
  virtual InputTargetClient* GetForwardingInterface() = 0;
  void FrameSinkIdAt(const gfx::PointF& point, uint64_t trace_id, FrameSinkIdAtCallback callback) override;
};
class  InputTargetClientAsyncWaiter {
 public:
  explicit InputTargetClientAsyncWaiter(InputTargetClient* proxy);
  ~InputTargetClientAsyncWaiter();
  void FrameSinkIdAt(
      const gfx::PointF& point, uint64_t trace_id, viz::FrameSinkId* out_id, gfx::PointF* out_local_point);

 private:
  InputTargetClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputTargetClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_TEST_UTILS_H_