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

#include "ui/gfx/mojo/ca_layer_params.mojom-blink.h"

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

#include "ui/gfx/mojo/ca_layer_params.mojom-params-data.h"
#include "ui/gfx/mojo/ca_layer_params.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/ca_layer_params.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace gfx {
namespace mojom {
namespace blink {
CALayerParams::CALayerParams()
    : is_empty(),
      content(),
      pixel_size(),
      scale_factor() {}

CALayerParams::CALayerParams(
    bool is_empty_in,
    CALayerContentPtr content_in,
    const ::blink::WebSize& pixel_size_in,
    float scale_factor_in)
    : is_empty(std::move(is_empty_in)),
      content(std::move(content_in)),
      pixel_size(std::move(pixel_size_in)),
      scale_factor(std::move(scale_factor_in)) {}

CALayerParams::~CALayerParams() = default;

bool CALayerParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CALayerContent::CALayerContent() : tag_(Tag::CA_CONTEXT_ID) {
  data_.ca_context_id = uint32_t();
}

CALayerContent::~CALayerContent() {
  DestroyActive();
}


void CALayerContent::set_ca_context_id(
    uint32_t ca_context_id) {
  if (tag_ != Tag::CA_CONTEXT_ID) {
    DestroyActive();
    tag_ = Tag::CA_CONTEXT_ID;
  }
  data_.ca_context_id = ca_context_id;
}
void CALayerContent::set_io_surface_mach_port(
    mojo::ScopedHandle io_surface_mach_port) {
  if (tag_ == Tag::IO_SURFACE_MACH_PORT) {
    *(data_.io_surface_mach_port) = std::move(io_surface_mach_port);
  } else {
    DestroyActive();
    tag_ = Tag::IO_SURFACE_MACH_PORT;
    data_.io_surface_mach_port = new mojo::ScopedHandle(
        std::move(io_surface_mach_port));
  }
}

void CALayerContent::DestroyActive() {
  switch (tag_) {

    case Tag::CA_CONTEXT_ID:

      break;
    case Tag::IO_SURFACE_MACH_PORT:

      delete data_.io_surface_mach_port;
      break;
  }
}

bool CALayerContent::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::CALayerParams::DataView, ::gfx::mojom::blink::CALayerParamsPtr>::Read(
    ::gfx::mojom::blink::CALayerParams::DataView input,
    ::gfx::mojom::blink::CALayerParamsPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::CALayerParamsPtr result(::gfx::mojom::blink::CALayerParams::New());
  
      result->is_empty = input.is_empty();
      if (!input.ReadContent(&result->content))
        success = false;
      if (!input.ReadPixelSize(&result->pixel_size))
        success = false;
      result->scale_factor = input.scale_factor();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::gfx::mojom::blink::CALayerContent::DataView, ::gfx::mojom::blink::CALayerContentPtr>::Read(
    ::gfx::mojom::blink::CALayerContent::DataView input,
    ::gfx::mojom::blink::CALayerContentPtr* output) {
  using UnionType = ::gfx::mojom::blink::CALayerContent;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::CA_CONTEXT_ID: {
      *output = UnionType::NewCaContextId(input.ca_context_id());
      break;
    }
    case Tag::IO_SURFACE_MACH_PORT: {
      *output = UnionType::NewIoSurfaceMachPort(
          input.TakeIoSurfaceMachPort());
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif