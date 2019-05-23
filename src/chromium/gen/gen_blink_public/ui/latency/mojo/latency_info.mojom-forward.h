// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_FORWARD_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class LatencyInfoDataView;


enum class LatencyComponentType : int32_t;

enum class SourceEventType : int32_t;
class LatencyInfo;
using LatencyInfoPtr = mojo::StructPtr<LatencyInfo>;




}  // namespace mojom
}  // namespace ui
#include "ui/latency/latency_info.h"

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_FORWARD_H_