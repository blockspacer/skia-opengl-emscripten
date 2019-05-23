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


#include "services/tracing/public/mojom/tracing.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "services/tracing/public/mojom/perfetto_service.mojom.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#endif


namespace tracing {
namespace mojom {


void AgentRegistryInterceptorForTesting::RegisterAgent(AgentPtr agent, const std::string& label, TraceDataType type, base::ProcessId pid) {
  GetForwardingInterface()->RegisterAgent(std::move(agent), std::move(label), std::move(type), std::move(pid));
}
AgentRegistryAsyncWaiter::AgentRegistryAsyncWaiter(
    AgentRegistry* proxy) : proxy_(proxy) {}

AgentRegistryAsyncWaiter::~AgentRegistryAsyncWaiter() = default;




void AgentInterceptorForTesting::StartTracing(const std::string& config, base::TimeTicks coordinator_time, StartTracingCallback callback) {
  GetForwardingInterface()->StartTracing(std::move(config), std::move(coordinator_time), std::move(callback));
}
void AgentInterceptorForTesting::StopAndFlush(RecorderPtr recorder) {
  GetForwardingInterface()->StopAndFlush(std::move(recorder));
}
void AgentInterceptorForTesting::RequestBufferStatus(RequestBufferStatusCallback callback) {
  GetForwardingInterface()->RequestBufferStatus(std::move(callback));
}
AgentAsyncWaiter::AgentAsyncWaiter(
    Agent* proxy) : proxy_(proxy) {}

AgentAsyncWaiter::~AgentAsyncWaiter() = default;

void AgentAsyncWaiter::StartTracing(
    const std::string& config, base::TimeTicks coordinator_time, bool* out_success) {
  base::RunLoop loop;
  proxy_->StartTracing(std::move(config),std::move(coordinator_time),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void AgentAsyncWaiter::RequestBufferStatus(
    uint32_t* out_capacity, uint32_t* out_count) {
  base::RunLoop loop;
  proxy_->RequestBufferStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_capacity
,
             uint32_t* out_count
,
             uint32_t capacity,
             uint32_t count) {*out_capacity = std::move(capacity);*out_count = std::move(count);
            loop->Quit();
          },
          &loop,
          out_capacity,
          out_count));
  loop.Run();
}



void RecorderInterceptorForTesting::AddChunk(const std::string& chunk) {
  GetForwardingInterface()->AddChunk(std::move(chunk));
}
void RecorderInterceptorForTesting::AddMetadata(base::Value metadata) {
  GetForwardingInterface()->AddMetadata(std::move(metadata));
}
RecorderAsyncWaiter::RecorderAsyncWaiter(
    Recorder* proxy) : proxy_(proxy) {}

RecorderAsyncWaiter::~RecorderAsyncWaiter() = default;




void CoordinatorInterceptorForTesting::StartTracing(const std::string& config, StartTracingCallback callback) {
  GetForwardingInterface()->StartTracing(std::move(config), std::move(callback));
}
void CoordinatorInterceptorForTesting::StopAndFlush(mojo::ScopedDataPipeProducerHandle stream, StopAndFlushCallback callback) {
  GetForwardingInterface()->StopAndFlush(std::move(stream), std::move(callback));
}
void CoordinatorInterceptorForTesting::StopAndFlushAgent(mojo::ScopedDataPipeProducerHandle stream, const std::string& agent_label, StopAndFlushAgentCallback callback) {
  GetForwardingInterface()->StopAndFlushAgent(std::move(stream), std::move(agent_label), std::move(callback));
}
void CoordinatorInterceptorForTesting::IsTracing(IsTracingCallback callback) {
  GetForwardingInterface()->IsTracing(std::move(callback));
}
void CoordinatorInterceptorForTesting::RequestBufferUsage(RequestBufferUsageCallback callback) {
  GetForwardingInterface()->RequestBufferUsage(std::move(callback));
}
CoordinatorAsyncWaiter::CoordinatorAsyncWaiter(
    Coordinator* proxy) : proxy_(proxy) {}

CoordinatorAsyncWaiter::~CoordinatorAsyncWaiter() = default;

void CoordinatorAsyncWaiter::StartTracing(
    const std::string& config, bool* out_success) {
  base::RunLoop loop;
  proxy_->StartTracing(std::move(config),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void CoordinatorAsyncWaiter::StopAndFlush(
    mojo::ScopedDataPipeProducerHandle stream, base::Value* out_metadata) {
  base::RunLoop loop;
  proxy_->StopAndFlush(std::move(stream),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Value* out_metadata
,
             base::Value metadata) {*out_metadata = std::move(metadata);
            loop->Quit();
          },
          &loop,
          out_metadata));
  loop.Run();
}
void CoordinatorAsyncWaiter::StopAndFlushAgent(
    mojo::ScopedDataPipeProducerHandle stream, const std::string& agent_label, base::Value* out_metadata) {
  base::RunLoop loop;
  proxy_->StopAndFlushAgent(std::move(stream),std::move(agent_label),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Value* out_metadata
,
             base::Value metadata) {*out_metadata = std::move(metadata);
            loop->Quit();
          },
          &loop,
          out_metadata));
  loop.Run();
}
void CoordinatorAsyncWaiter::IsTracing(
    bool* out_is_tracing) {
  base::RunLoop loop;
  proxy_->IsTracing(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_is_tracing
,
             bool is_tracing) {*out_is_tracing = std::move(is_tracing);
            loop->Quit();
          },
          &loop,
          out_is_tracing));
  loop.Run();
}
void CoordinatorAsyncWaiter::RequestBufferUsage(
    bool* out_success, float* out_percent_full, uint32_t* out_approximate_count) {
  base::RunLoop loop;
  proxy_->RequestBufferUsage(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             float* out_percent_full
,
             uint32_t* out_approximate_count
,
             bool success,
             float percent_full,
             uint32_t approximate_count) {*out_success = std::move(success);*out_percent_full = std::move(percent_full);*out_approximate_count = std::move(approximate_count);
            loop->Quit();
          },
          &loop,
          out_success,
          out_percent_full,
          out_approximate_count));
  loop.Run();
}





}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif