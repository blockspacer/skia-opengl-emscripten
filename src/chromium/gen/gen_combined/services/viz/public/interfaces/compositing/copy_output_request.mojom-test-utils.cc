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


#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "gpu/ipc/common/mailbox.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/copy_output_result_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif


namespace viz {
namespace mojom {


void CopyOutputResultSenderInterceptorForTesting::SendResult(std::unique_ptr<viz::CopyOutputResult> result) {
  GetForwardingInterface()->SendResult(std::move(result));
}
CopyOutputResultSenderAsyncWaiter::CopyOutputResultSenderAsyncWaiter(
    CopyOutputResultSender* proxy) : proxy_(proxy) {}

CopyOutputResultSenderAsyncWaiter::~CopyOutputResultSenderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif