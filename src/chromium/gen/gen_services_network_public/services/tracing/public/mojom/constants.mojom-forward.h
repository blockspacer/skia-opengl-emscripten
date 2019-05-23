// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_CONSTANTS_MOJOM_FORWARD_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_CONSTANTS_MOJOM_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "base/component_export.h"




namespace tracing {
namespace mojom {

constexpr uint32_t kStopTracingRetryTimeMilliseconds = 100U;

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kServiceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kChromeTraceEventLabel[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kSystemTraceEventLabel[];



}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_CONSTANTS_MOJOM_FORWARD_H_