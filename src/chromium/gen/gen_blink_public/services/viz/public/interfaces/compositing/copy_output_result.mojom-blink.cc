// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
CopyOutputResult::CopyOutputResult()
    : format(),
      rect(),
      bitmap(),
      mailbox(),
      sync_token(),
      color_space(),
      releaser() {}

CopyOutputResult::CopyOutputResult(
    CopyOutputResultFormat format_in,
    const ::blink::WebRect& rect_in,
    const SkBitmap& bitmap_in,
    ::gpu::mojom::blink::MailboxPtr mailbox_in,
    const base::Optional<::gpu::SyncToken>& sync_token_in,
    ::gfx::mojom::blink::ColorSpacePtr color_space_in,
    ::viz::mojom::blink::TextureReleaserPtrInfo releaser_in)
    : format(std::move(format_in)),
      rect(std::move(rect_in)),
      bitmap(std::move(bitmap_in)),
      mailbox(std::move(mailbox_in)),
      sync_token(std::move(sync_token_in)),
      color_space(std::move(color_space_in)),
      releaser(std::move(releaser_in)) {}

CopyOutputResult::~CopyOutputResult() = default;

bool CopyOutputResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::CopyOutputResult::DataView, ::viz::mojom::blink::CopyOutputResultPtr>::Read(
    ::viz::mojom::blink::CopyOutputResult::DataView input,
    ::viz::mojom::blink::CopyOutputResultPtr* output) {
  bool success = true;
  ::viz::mojom::blink::CopyOutputResultPtr result(::viz::mojom::blink::CopyOutputResult::New());
  
      if (!input.ReadFormat(&result->format))
        success = false;
      if (!input.ReadRect(&result->rect))
        success = false;
      if (!input.ReadBitmap(&result->bitmap))
        success = false;
      if (!input.ReadMailbox(&result->mailbox))
        success = false;
      if (!input.ReadSyncToken(&result->sync_token))
        success = false;
      if (!input.ReadColorSpace(&result->color_space))
        success = false;
      result->releaser =
          input.TakeReleaser<decltype(result->releaser)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif