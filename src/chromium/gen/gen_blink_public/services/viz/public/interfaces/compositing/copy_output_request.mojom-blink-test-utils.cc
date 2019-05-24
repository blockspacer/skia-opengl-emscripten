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


#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "gpu/ipc/common/mailbox.mojom-blink.h"
#include "gpu/ipc/common/sync_token.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace viz {
namespace mojom {
namespace blink {


void CopyOutputResultSenderInterceptorForTesting::SendResult(::viz::mojom::blink::CopyOutputResultPtr result) {
  GetForwardingInterface()->SendResult(std::move(result));
}
CopyOutputResultSenderAsyncWaiter::CopyOutputResultSenderAsyncWaiter(
    CopyOutputResultSender* proxy) : proxy_(proxy) {}

CopyOutputResultSenderAsyncWaiter::~CopyOutputResultSenderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif