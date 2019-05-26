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

#include "third_party/blink/public/mojom/window_features/window_features.mojom.h"

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

#include "third_party/blink/public/mojom/window_features/window_features.mojom-params-data.h"
#include "third_party/blink/public/mojom/window_features/window_features.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/window_features/window_features.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
WindowFeatures::WindowFeatures()
    : x(),
      has_x(false),
      y(),
      has_y(false),
      width(),
      has_width(false),
      height(),
      has_height(false),
      menu_bar_visible(true),
      status_bar_visible(true),
      tool_bar_visible(true),
      scrollbars_visible(true) {}

WindowFeatures::WindowFeatures(
    float x_in,
    bool has_x_in,
    float y_in,
    bool has_y_in,
    float width_in,
    bool has_width_in,
    float height_in,
    bool has_height_in,
    bool menu_bar_visible_in,
    bool status_bar_visible_in,
    bool tool_bar_visible_in,
    bool scrollbars_visible_in)
    : x(std::move(x_in)),
      has_x(std::move(has_x_in)),
      y(std::move(y_in)),
      has_y(std::move(has_y_in)),
      width(std::move(width_in)),
      has_width(std::move(has_width_in)),
      height(std::move(height_in)),
      has_height(std::move(has_height_in)),
      menu_bar_visible(std::move(menu_bar_visible_in)),
      status_bar_visible(std::move(status_bar_visible_in)),
      tool_bar_visible(std::move(tool_bar_visible_in)),
      scrollbars_visible(std::move(scrollbars_visible_in)) {}

WindowFeatures::~WindowFeatures() = default;
size_t WindowFeatures::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->x);
  seed = mojo::internal::Hash(seed, this->has_x);
  seed = mojo::internal::Hash(seed, this->y);
  seed = mojo::internal::Hash(seed, this->has_y);
  seed = mojo::internal::Hash(seed, this->width);
  seed = mojo::internal::Hash(seed, this->has_width);
  seed = mojo::internal::Hash(seed, this->height);
  seed = mojo::internal::Hash(seed, this->has_height);
  seed = mojo::internal::Hash(seed, this->menu_bar_visible);
  seed = mojo::internal::Hash(seed, this->status_bar_visible);
  seed = mojo::internal::Hash(seed, this->tool_bar_visible);
  seed = mojo::internal::Hash(seed, this->scrollbars_visible);
  return seed;
}

bool WindowFeatures::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::WindowFeatures::DataView, ::blink::mojom::WindowFeaturesPtr>::Read(
    ::blink::mojom::WindowFeatures::DataView input,
    ::blink::mojom::WindowFeaturesPtr* output) {
  bool success = true;
  ::blink::mojom::WindowFeaturesPtr result(::blink::mojom::WindowFeatures::New());
  
      result->x = input.x();
      result->has_x = input.has_x();
      result->y = input.y();
      result->has_y = input.has_y();
      result->width = input.width();
      result->has_width = input.has_width();
      result->height = input.height();
      result->has_height = input.has_height();
      result->menu_bar_visible = input.menu_bar_visible();
      result->status_bar_visible = input.status_bar_visible();
      result->tool_bar_visible = input.tool_bar_visible();
      result->scrollbars_visible = input.scrollbars_visible();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif