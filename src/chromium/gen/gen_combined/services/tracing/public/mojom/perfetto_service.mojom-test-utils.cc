// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "services/tracing/public/mojom/perfetto_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_JUMBO_H_
#include "services/tracing/public/mojom/chrome_config_mojom_traits.h"
#include "services/tracing/public/mojom/commit_data_request_mojom_traits.h"
#include "services/tracing/public/mojom/data_source_config_mojom_traits.h"
#include "services/tracing/public/mojom/data_source_descriptor_mojom_traits.h"
#include "services/tracing/public/mojom/trace_config_mojom_traits.h"
#endif


namespace tracing {
namespace mojom {


void ProducerHostInterceptorForTesting::CommitData(const perfetto::CommitDataRequest& data_request) {
  GetForwardingInterface()->CommitData(std::move(data_request));
}
void ProducerHostInterceptorForTesting::RegisterDataSource(const perfetto::DataSourceDescriptor& registration_info) {
  GetForwardingInterface()->RegisterDataSource(std::move(registration_info));
}
void ProducerHostInterceptorForTesting::RegisterTraceWriter(uint32_t writer_id, uint32_t target_buffer) {
  GetForwardingInterface()->RegisterTraceWriter(std::move(writer_id), std::move(target_buffer));
}
void ProducerHostInterceptorForTesting::UnregisterTraceWriter(uint32_t writer_id) {
  GetForwardingInterface()->UnregisterTraceWriter(std::move(writer_id));
}
ProducerHostAsyncWaiter::ProducerHostAsyncWaiter(
    ProducerHost* proxy) : proxy_(proxy) {}

ProducerHostAsyncWaiter::~ProducerHostAsyncWaiter() = default;




void ProducerClientInterceptorForTesting::OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) {
  GetForwardingInterface()->OnTracingStart(std::move(shared_memory));
}
void ProducerClientInterceptorForTesting::StartDataSource(uint64_t id, const perfetto::DataSourceConfig& data_source_config, StartDataSourceCallback callback) {
  GetForwardingInterface()->StartDataSource(std::move(id), std::move(data_source_config), std::move(callback));
}
void ProducerClientInterceptorForTesting::StopDataSource(uint64_t id, StopDataSourceCallback callback) {
  GetForwardingInterface()->StopDataSource(std::move(id), std::move(callback));
}
void ProducerClientInterceptorForTesting::Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) {
  GetForwardingInterface()->Flush(std::move(flush_request_id), std::move(data_source_ids));
}
ProducerClientAsyncWaiter::ProducerClientAsyncWaiter(
    ProducerClient* proxy) : proxy_(proxy) {}

ProducerClientAsyncWaiter::~ProducerClientAsyncWaiter() = default;

void ProducerClientAsyncWaiter::StartDataSource(
    uint64_t id, const perfetto::DataSourceConfig& data_source_config) {
  base::RunLoop loop;
  proxy_->StartDataSource(std::move(id),std::move(data_source_config),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void ProducerClientAsyncWaiter::StopDataSource(
    uint64_t id) {
  base::RunLoop loop;
  proxy_->StopDataSource(std::move(id),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void PerfettoServiceInterceptorForTesting::ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) {
  GetForwardingInterface()->ConnectToProducerHost(std::move(producer_client), std::move(producer_host));
}
PerfettoServiceAsyncWaiter::PerfettoServiceAsyncWaiter(
    PerfettoService* proxy) : proxy_(proxy) {}

PerfettoServiceAsyncWaiter::~PerfettoServiceAsyncWaiter() = default;




void ConsumerHostInterceptorForTesting::EnableTracing(TracingSessionHostRequest tracing_session_host, TracingSessionClientPtr tracing_session_client, const perfetto::TraceConfig& config, TracingClientPriority priority) {
  GetForwardingInterface()->EnableTracing(std::move(tracing_session_host), std::move(tracing_session_client), std::move(config), std::move(priority));
}
ConsumerHostAsyncWaiter::ConsumerHostAsyncWaiter(
    ConsumerHost* proxy) : proxy_(proxy) {}

ConsumerHostAsyncWaiter::~ConsumerHostAsyncWaiter() = default;




void TracingSessionHostInterceptorForTesting::ChangeTraceConfig(const perfetto::TraceConfig& config) {
  GetForwardingInterface()->ChangeTraceConfig(std::move(config));
}
void TracingSessionHostInterceptorForTesting::DisableTracing() {
  GetForwardingInterface()->DisableTracing();
}
void TracingSessionHostInterceptorForTesting::ReadBuffers(mojo::ScopedDataPipeProducerHandle stream, ReadBuffersCallback callback) {
  GetForwardingInterface()->ReadBuffers(std::move(stream), std::move(callback));
}
void TracingSessionHostInterceptorForTesting::RequestBufferUsage(RequestBufferUsageCallback callback) {
  GetForwardingInterface()->RequestBufferUsage(std::move(callback));
}
void TracingSessionHostInterceptorForTesting::DisableTracingAndEmitJson(const std::string& agent_label_filter, mojo::ScopedDataPipeProducerHandle stream, DisableTracingAndEmitJsonCallback callback) {
  GetForwardingInterface()->DisableTracingAndEmitJson(std::move(agent_label_filter), std::move(stream), std::move(callback));
}
TracingSessionHostAsyncWaiter::TracingSessionHostAsyncWaiter(
    TracingSessionHost* proxy) : proxy_(proxy) {}

TracingSessionHostAsyncWaiter::~TracingSessionHostAsyncWaiter() = default;

void TracingSessionHostAsyncWaiter::ReadBuffers(
    mojo::ScopedDataPipeProducerHandle stream) {
  base::RunLoop loop;
  proxy_->ReadBuffers(std::move(stream),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void TracingSessionHostAsyncWaiter::RequestBufferUsage(
    bool* out_success, float* out_percent_full) {
  base::RunLoop loop;
  proxy_->RequestBufferUsage(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             float* out_percent_full
,
             bool success,
             float percent_full) {*out_success = std::move(success);*out_percent_full = std::move(percent_full);
            loop->Quit();
          },
          &loop,
          out_success,
          out_percent_full));
  loop.Run();
}
void TracingSessionHostAsyncWaiter::DisableTracingAndEmitJson(
    const std::string& agent_label_filter, mojo::ScopedDataPipeProducerHandle stream) {
  base::RunLoop loop;
  proxy_->DisableTracingAndEmitJson(std::move(agent_label_filter),std::move(stream),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void TracingSessionClientInterceptorForTesting::OnTracingEnabled() {
  GetForwardingInterface()->OnTracingEnabled();
}
void TracingSessionClientInterceptorForTesting::OnTracingDisabled() {
  GetForwardingInterface()->OnTracingDisabled();
}
TracingSessionClientAsyncWaiter::TracingSessionClientAsyncWaiter(
    TracingSessionClient* proxy) : proxy_(proxy) {}

TracingSessionClientAsyncWaiter::~TracingSessionClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif