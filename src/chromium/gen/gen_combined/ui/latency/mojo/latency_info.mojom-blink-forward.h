// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_FORWARD_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {

enum class LatencyComponentType : int32_t;

enum class SourceEventType : int32_t;
}  // namespace ui
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct ui_mojom_internal_LatencyComponentType_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::LatencyComponentType> {
  using Hash = ui_mojom_internal_LatencyComponentType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct ui_mojom_internal_SourceEventType_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::SourceEventType> {
  using Hash = ui_mojom_internal_SourceEventType_DataHashFn;
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {
using LatencyComponentType = LatencyComponentType;  // Alias for definition in the parent namespace.
using SourceEventType = SourceEventType;  // Alias for definition in the parent namespace.
class LatencyInfo;
using LatencyInfoPtr = mojo::StructPtr<LatencyInfo>;




}  // namespace blink
}  // namespace mojom
}  // namespace ui

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_BLINK_FORWARD_H_