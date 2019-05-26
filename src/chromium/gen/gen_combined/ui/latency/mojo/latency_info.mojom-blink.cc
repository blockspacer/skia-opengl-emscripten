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

#include "ui/latency/mojo/latency_info.mojom-blink.h"

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

#include "ui/latency/mojo/latency_info.mojom-params-data.h"
#include "ui/latency/mojo/latency_info.mojom-shared-message-ids.h"

#include "ui/latency/mojo/latency_info.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_JUMBO_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace ui {
namespace mojom {
namespace blink {
LatencyInfo::LatencyInfo()
    : trace_name(),
      latency_components(),
      trace_id(),
      ukm_source_id(),
      coalesced(),
      began(),
      terminated(),
      source_event_type(),
      scroll_update_delta(),
      predicted_scroll_update_delta() {}

LatencyInfo::LatencyInfo(
    const WTF::String& trace_name_in,
    const WTF::HashMap<LatencyComponentType, base::TimeTicks>& latency_components_in,
    int64_t trace_id_in,
    int64_t ukm_source_id_in,
    bool coalesced_in,
    bool began_in,
    bool terminated_in,
    SourceEventType source_event_type_in,
    float scroll_update_delta_in,
    float predicted_scroll_update_delta_in)
    : trace_name(std::move(trace_name_in)),
      latency_components(std::move(latency_components_in)),
      trace_id(std::move(trace_id_in)),
      ukm_source_id(std::move(ukm_source_id_in)),
      coalesced(std::move(coalesced_in)),
      began(std::move(began_in)),
      terminated(std::move(terminated_in)),
      source_event_type(std::move(source_event_type_in)),
      scroll_update_delta(std::move(scroll_update_delta_in)),
      predicted_scroll_update_delta(std::move(predicted_scroll_update_delta_in)) {}

LatencyInfo::~LatencyInfo() = default;

bool LatencyInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::blink::LatencyInfo::DataView, ::ui::mojom::blink::LatencyInfoPtr>::Read(
    ::ui::mojom::blink::LatencyInfo::DataView input,
    ::ui::mojom::blink::LatencyInfoPtr* output) {
  bool success = true;
  ::ui::mojom::blink::LatencyInfoPtr result(::ui::mojom::blink::LatencyInfo::New());
  
      if (!input.ReadTraceName(&result->trace_name))
        success = false;
      if (!input.ReadLatencyComponents(&result->latency_components))
        success = false;
      result->trace_id = input.trace_id();
      result->ukm_source_id = input.ukm_source_id();
      result->coalesced = input.coalesced();
      result->began = input.began();
      result->terminated = input.terminated();
      if (!input.ReadSourceEventType(&result->source_event_type))
        success = false;
      result->scroll_update_delta = input.scroll_update_delta();
      result->predicted_scroll_update_delta = input.predicted_scroll_update_delta();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif