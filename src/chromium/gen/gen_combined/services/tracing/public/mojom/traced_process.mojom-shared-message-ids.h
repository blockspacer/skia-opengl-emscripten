// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 298868546 value is based on sha256(salt + "TracedProcess1").
constexpr uint32_t kTracedProcess_ConnectToTracingService_Name = 298868546;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_SHARED_MESSAGE_IDS_H_