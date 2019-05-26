// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_TEST_UTILS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_TEST_UTILS_H_

#include "services/tracing/public/mojom/tracing.mojom.h"
#include "base/component_export.h"


namespace tracing {
namespace mojom {


class COMPONENT_EXPORT(TRACING_MOJOM) AgentRegistryInterceptorForTesting : public AgentRegistry {
  virtual AgentRegistry* GetForwardingInterface() = 0;
  void RegisterAgent(AgentPtr agent, const std::string& label, TraceDataType type, base::ProcessId pid) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentRegistryAsyncWaiter {
 public:
  explicit AgentRegistryAsyncWaiter(AgentRegistry* proxy);
  ~AgentRegistryAsyncWaiter();

 private:
  AgentRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AgentRegistryAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) AgentInterceptorForTesting : public Agent {
  virtual Agent* GetForwardingInterface() = 0;
  void StartTracing(const std::string& config, base::TimeTicks coordinator_time, StartTracingCallback callback) override;
  void StopAndFlush(RecorderPtr recorder) override;
  void RequestBufferStatus(RequestBufferStatusCallback callback) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentAsyncWaiter {
 public:
  explicit AgentAsyncWaiter(Agent* proxy);
  ~AgentAsyncWaiter();
  void StartTracing(
      const std::string& config, base::TimeTicks coordinator_time, bool* out_success);
  void RequestBufferStatus(
      uint32_t* out_capacity, uint32_t* out_count);

 private:
  Agent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AgentAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) RecorderInterceptorForTesting : public Recorder {
  virtual Recorder* GetForwardingInterface() = 0;
  void AddChunk(const std::string& chunk) override;
  void AddMetadata(base::Value metadata) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) RecorderAsyncWaiter {
 public:
  explicit RecorderAsyncWaiter(Recorder* proxy);
  ~RecorderAsyncWaiter();

 private:
  Recorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RecorderAsyncWaiter);
};


class COMPONENT_EXPORT(TRACING_MOJOM) CoordinatorInterceptorForTesting : public Coordinator {
  virtual Coordinator* GetForwardingInterface() = 0;
  void StartTracing(const std::string& config, StartTracingCallback callback) override;
  void StopAndFlush(mojo::ScopedDataPipeProducerHandle stream, StopAndFlushCallback callback) override;
  void StopAndFlushAgent(mojo::ScopedDataPipeProducerHandle stream, const std::string& agent_label, StopAndFlushAgentCallback callback) override;
  void IsTracing(IsTracingCallback callback) override;
  void RequestBufferUsage(RequestBufferUsageCallback callback) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) CoordinatorAsyncWaiter {
 public:
  explicit CoordinatorAsyncWaiter(Coordinator* proxy);
  ~CoordinatorAsyncWaiter();
  void StartTracing(
      const std::string& config, bool* out_success);
  void StopAndFlush(
      mojo::ScopedDataPipeProducerHandle stream, base::Value* out_metadata);
  void StopAndFlushAgent(
      mojo::ScopedDataPipeProducerHandle stream, const std::string& agent_label, base::Value* out_metadata);
  void IsTracing(
      bool* out_is_tracing);
  void RequestBufferUsage(
      bool* out_success, float* out_percent_full, uint32_t* out_approximate_count);

 private:
  Coordinator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CoordinatorAsyncWaiter);
};




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_TEST_UTILS_H_