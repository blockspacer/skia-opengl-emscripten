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

#include "ui/gfx/mojo/accelerated_widget.mojom-blink.h"

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

#include "ui/gfx/mojo/accelerated_widget.mojom-params-data.h"
#include "ui/gfx/mojo/accelerated_widget.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/accelerated_widget.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJO_ACCELERATED_WIDGET_MOJOM_BLINK_JUMBO_H_
#endif
namespace gfx {
namespace mojom {
namespace blink {
AcceleratedWidget::AcceleratedWidget()
    : widget() {}

AcceleratedWidget::AcceleratedWidget(
    uint64_t widget_in)
    : widget(std::move(widget_in)) {}

AcceleratedWidget::~AcceleratedWidget() = default;
size_t AcceleratedWidget::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->widget);
  return seed;
}

bool AcceleratedWidget::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::AcceleratedWidget::DataView, ::gfx::mojom::blink::AcceleratedWidgetPtr>::Read(
    ::gfx::mojom::blink::AcceleratedWidget::DataView input,
    ::gfx::mojom::blink::AcceleratedWidgetPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::AcceleratedWidgetPtr result(::gfx::mojom::blink::AcceleratedWidget::New());
  
      result->widget = input.widget();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif