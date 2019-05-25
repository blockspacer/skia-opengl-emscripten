// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 1350171523 value is based on sha256(salt + "ProducerHost1").
constexpr uint32_t kProducerHost_CommitData_Name = 1350171523;
// The 1358733965 value is based on sha256(salt + "ProducerHost2").
constexpr uint32_t kProducerHost_RegisterDataSource_Name = 1358733965;
// The 1399318470 value is based on sha256(salt + "ProducerHost3").
constexpr uint32_t kProducerHost_RegisterTraceWriter_Name = 1399318470;
// The 468367936 value is based on sha256(salt + "ProducerHost4").
constexpr uint32_t kProducerHost_UnregisterTraceWriter_Name = 468367936;
// The 1555660296 value is based on sha256(salt + "ProducerClient1").
constexpr uint32_t kProducerClient_OnTracingStart_Name = 1555660296;
// The 1395985292 value is based on sha256(salt + "ProducerClient2").
constexpr uint32_t kProducerClient_StartDataSource_Name = 1395985292;
// The 953161368 value is based on sha256(salt + "ProducerClient3").
constexpr uint32_t kProducerClient_StopDataSource_Name = 953161368;
// The 1205136734 value is based on sha256(salt + "ProducerClient4").
constexpr uint32_t kProducerClient_Flush_Name = 1205136734;
// The 1267037466 value is based on sha256(salt + "PerfettoService1").
constexpr uint32_t kPerfettoService_ConnectToProducerHost_Name = 1267037466;
// The 1383846445 value is based on sha256(salt + "ConsumerHost1").
constexpr uint32_t kConsumerHost_EnableTracing_Name = 1383846445;
// The 1371777469 value is based on sha256(salt + "TracingSessionHost1").
constexpr uint32_t kTracingSessionHost_ChangeTraceConfig_Name = 1371777469;
// The 1035588575 value is based on sha256(salt + "TracingSessionHost2").
constexpr uint32_t kTracingSessionHost_DisableTracing_Name = 1035588575;
// The 118754288 value is based on sha256(salt + "TracingSessionHost3").
constexpr uint32_t kTracingSessionHost_ReadBuffers_Name = 118754288;
// The 1869639340 value is based on sha256(salt + "TracingSessionHost4").
constexpr uint32_t kTracingSessionHost_RequestBufferUsage_Name = 1869639340;
// The 1944198227 value is based on sha256(salt + "TracingSessionHost5").
constexpr uint32_t kTracingSessionHost_DisableTracingAndEmitJson_Name = 1944198227;
// The 495618073 value is based on sha256(salt + "TracingSessionClient1").
constexpr uint32_t kTracingSessionClient_OnTracingEnabled_Name = 495618073;
// The 2128159776 value is based on sha256(salt + "TracingSessionClient2").
constexpr uint32_t kTracingSessionClient_OnTracingDisabled_Name = 2128159776;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_