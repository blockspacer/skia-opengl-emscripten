// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 1332680642 value is based on sha256(salt + "ProducerHost1").
constexpr uint32_t kProducerHost_CommitData_Name = 1332680642;
// The 2033407475 value is based on sha256(salt + "ProducerHost2").
constexpr uint32_t kProducerHost_RegisterDataSource_Name = 2033407475;
// The 1270021141 value is based on sha256(salt + "ProducerHost3").
constexpr uint32_t kProducerHost_RegisterTraceWriter_Name = 1270021141;
// The 1007571384 value is based on sha256(salt + "ProducerHost4").
constexpr uint32_t kProducerHost_UnregisterTraceWriter_Name = 1007571384;
// The 1412061707 value is based on sha256(salt + "ProducerClient1").
constexpr uint32_t kProducerClient_OnTracingStart_Name = 1412061707;
// The 2114449765 value is based on sha256(salt + "ProducerClient2").
constexpr uint32_t kProducerClient_StartDataSource_Name = 2114449765;
// The 2109778642 value is based on sha256(salt + "ProducerClient3").
constexpr uint32_t kProducerClient_StopDataSource_Name = 2109778642;
// The 1095049316 value is based on sha256(salt + "ProducerClient4").
constexpr uint32_t kProducerClient_Flush_Name = 1095049316;
// The 132457346 value is based on sha256(salt + "PerfettoService1").
constexpr uint32_t kPerfettoService_ConnectToProducerHost_Name = 132457346;
// The 732970683 value is based on sha256(salt + "ConsumerHost1").
constexpr uint32_t kConsumerHost_EnableTracing_Name = 732970683;
// The 1654764775 value is based on sha256(salt + "TracingSessionHost1").
constexpr uint32_t kTracingSessionHost_ChangeTraceConfig_Name = 1654764775;
// The 957695012 value is based on sha256(salt + "TracingSessionHost2").
constexpr uint32_t kTracingSessionHost_DisableTracing_Name = 957695012;
// The 186140942 value is based on sha256(salt + "TracingSessionHost3").
constexpr uint32_t kTracingSessionHost_ReadBuffers_Name = 186140942;
// The 1049423770 value is based on sha256(salt + "TracingSessionHost4").
constexpr uint32_t kTracingSessionHost_RequestBufferUsage_Name = 1049423770;
// The 203996670 value is based on sha256(salt + "TracingSessionHost5").
constexpr uint32_t kTracingSessionHost_DisableTracingAndEmitJson_Name = 203996670;
// The 608929462 value is based on sha256(salt + "TracingSessionClient1").
constexpr uint32_t kTracingSessionClient_OnTracingEnabled_Name = 608929462;
// The 1525596157 value is based on sha256(salt + "TracingSessionClient2").
constexpr uint32_t kTracingSessionClient_OnTracingDisabled_Name = 1525596157;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_