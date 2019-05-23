// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_TEST_UTILS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_TEST_UTILS_H_

#include "services/tracing/public/mojom/perfetto_service.mojom.h"
#include "base/component_export.h"


namespace tracing {
namespace mojom {


class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostInterceptorForTesting : public ProducerHost {
  virtual ProducerHost* GetForwardingInterface() = 0;
  void CommitData(const perfetto::CommitDataRequest& data_request) override;
  void RegisterDataSource(const perfetto::DataSourceDescriptor& registration_info) override;
  void RegisterTraceWriter(uint32_t writer_id, uint32_t target_buffer) override;
  void UnregisterTraceWriter(uint32_t writer_id) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostAsyncWaiter {
 public:
  explicit ProducerHostAsyncWaiter(ProducerHost* proxy);
  ~ProducerHostAsyncWaiter();

 private:
  ProducerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProducerHostAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientInterceptorForTesting : public ProducerClient {
  virtual ProducerClient* GetForwardingInterface() = 0;
  void OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) override;
  void StartDataSource(uint64_t id, const perfetto::DataSourceConfig& data_source_config, StartDataSourceCallback callback) override;
  void StopDataSource(uint64_t id, StopDataSourceCallback callback) override;
  void Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientAsyncWaiter {
 public:
  explicit ProducerClientAsyncWaiter(ProducerClient* proxy);
  ~ProducerClientAsyncWaiter();
  void StartDataSource(
      uint64_t id, const perfetto::DataSourceConfig& data_source_config);
  void StopDataSource(
      uint64_t id);

 private:
  ProducerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProducerClientAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceInterceptorForTesting : public PerfettoService {
  virtual PerfettoService* GetForwardingInterface() = 0;
  void ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceAsyncWaiter {
 public:
  explicit PerfettoServiceAsyncWaiter(PerfettoService* proxy);
  ~PerfettoServiceAsyncWaiter();

 private:
  PerfettoService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PerfettoServiceAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) ConsumerHostInterceptorForTesting : public ConsumerHost {
  virtual ConsumerHost* GetForwardingInterface() = 0;
  void EnableTracing(TracingSessionHostRequest tracing_session_host, TracingSessionClientPtr tracing_session_client, const perfetto::TraceConfig& config, TracingClientPriority priority) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ConsumerHostAsyncWaiter {
 public:
  explicit ConsumerHostAsyncWaiter(ConsumerHost* proxy);
  ~ConsumerHostAsyncWaiter();

 private:
  ConsumerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ConsumerHostAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHostInterceptorForTesting : public TracingSessionHost {
  virtual TracingSessionHost* GetForwardingInterface() = 0;
  void ChangeTraceConfig(const perfetto::TraceConfig& config) override;
  void DisableTracing() override;
  void ReadBuffers(mojo::ScopedDataPipeProducerHandle stream, ReadBuffersCallback callback) override;
  void RequestBufferUsage(RequestBufferUsageCallback callback) override;
  void DisableTracingAndEmitJson(const std::string& agent_label_filter, mojo::ScopedDataPipeProducerHandle stream, DisableTracingAndEmitJsonCallback callback) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHostAsyncWaiter {
 public:
  explicit TracingSessionHostAsyncWaiter(TracingSessionHost* proxy);
  ~TracingSessionHostAsyncWaiter();
  void ReadBuffers(
      mojo::ScopedDataPipeProducerHandle stream);
  void RequestBufferUsage(
      bool* out_success, float* out_percent_full);
  void DisableTracingAndEmitJson(
      const std::string& agent_label_filter, mojo::ScopedDataPipeProducerHandle stream);

 private:
  TracingSessionHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TracingSessionHostAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionClientInterceptorForTesting : public TracingSessionClient {
  virtual TracingSessionClient* GetForwardingInterface() = 0;
  void OnTracingEnabled() override;
  void OnTracingDisabled() override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionClientAsyncWaiter {
 public:
  explicit TracingSessionClientAsyncWaiter(TracingSessionClient* proxy);
  ~TracingSessionClientAsyncWaiter();

 private:
  TracingSessionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TracingSessionClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_TEST_UTILS_H_