// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/tracing/public/mojom/tracing.mojom-shared.h"
#include "services/tracing/public/mojom/tracing.mojom-forward.h"
#include "mojo/public/mojom/base/process_id.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "mojo/public/mojom/base/values.mojom-forward.h"
#include "services/tracing/public/mojom/perfetto_service.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace tracing {
namespace mojom {

class AgentRegistryProxy;

template <typename ImplRefTraits>
class AgentRegistryStub;

class AgentRegistryRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) AgentRegistry
    : public AgentRegistryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AgentRegistryInterfaceBase;
  using Proxy_ = AgentRegistryProxy;

  template <typename ImplRefTraits>
  using Stub_ = AgentRegistryStub<ImplRefTraits>;

  using RequestValidator_ = AgentRegistryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterAgentMinVersion = 0,
  };
  virtual ~AgentRegistry() {}

  
  virtual void RegisterAgent(AgentPtr agent, const std::string& label, TraceDataType type, base::ProcessId pid) = 0;
};

class AgentProxy;

template <typename ImplRefTraits>
class AgentStub;

class AgentRequestValidator;
class AgentResponseValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) Agent
    : public AgentInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AgentInterfaceBase;
  using Proxy_ = AgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = AgentStub<ImplRefTraits>;

  using RequestValidator_ = AgentRequestValidator;
  using ResponseValidator_ = AgentResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartTracingMinVersion = 0,
    kStopAndFlushMinVersion = 0,
    kRequestBufferStatusMinVersion = 0,
  };
  virtual ~Agent() {}


  using StartTracingCallback = base::OnceCallback<void(bool)>;
  
  virtual void StartTracing(const std::string& config, base::TimeTicks coordinator_time, StartTracingCallback callback) = 0;

  
  virtual void StopAndFlush(RecorderPtr recorder) = 0;


  using RequestBufferStatusCallback = base::OnceCallback<void(uint32_t, uint32_t)>;
  
  virtual void RequestBufferStatus(RequestBufferStatusCallback callback) = 0;
};

class RecorderProxy;

template <typename ImplRefTraits>
class RecorderStub;

class RecorderRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) Recorder
    : public RecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RecorderInterfaceBase;
  using Proxy_ = RecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = RecorderStub<ImplRefTraits>;

  using RequestValidator_ = RecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddChunkMinVersion = 0,
    kAddMetadataMinVersion = 0,
  };
  virtual ~Recorder() {}

  
  virtual void AddChunk(const std::string& chunk) = 0;

  
  virtual void AddMetadata(base::Value metadata) = 0;
};

class CoordinatorProxy;

template <typename ImplRefTraits>
class CoordinatorStub;

class CoordinatorRequestValidator;
class CoordinatorResponseValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) Coordinator
    : public CoordinatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CoordinatorInterfaceBase;
  using Proxy_ = CoordinatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = CoordinatorStub<ImplRefTraits>;

  using RequestValidator_ = CoordinatorRequestValidator;
  using ResponseValidator_ = CoordinatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartTracingMinVersion = 0,
    kStopAndFlushMinVersion = 0,
    kStopAndFlushAgentMinVersion = 0,
    kIsTracingMinVersion = 0,
    kRequestBufferUsageMinVersion = 0,
  };
  virtual ~Coordinator() {}


  using StartTracingCallback = base::OnceCallback<void(bool)>;
  
  virtual void StartTracing(const std::string& config, StartTracingCallback callback) = 0;


  using StopAndFlushCallback = base::OnceCallback<void(base::Value)>;
  
  virtual void StopAndFlush(mojo::ScopedDataPipeProducerHandle stream, StopAndFlushCallback callback) = 0;


  using StopAndFlushAgentCallback = base::OnceCallback<void(base::Value)>;
  
  virtual void StopAndFlushAgent(mojo::ScopedDataPipeProducerHandle stream, const std::string& agent_label, StopAndFlushAgentCallback callback) = 0;


  using IsTracingCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsTracing(IsTracingCallback callback) = 0;


  using RequestBufferUsageCallback = base::OnceCallback<void(bool, float, uint32_t)>;
  
  virtual void RequestBufferUsage(RequestBufferUsageCallback callback) = 0;
};

class COMPONENT_EXPORT(TRACING_MOJOM) AgentRegistryProxy
    : public AgentRegistry {
 public:
  using InterfaceType = AgentRegistry;

  explicit AgentRegistryProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterAgent(AgentPtr agent, const std::string& label, TraceDataType type, base::ProcessId pid) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) AgentProxy
    : public Agent {
 public:
  using InterfaceType = Agent;

  explicit AgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartTracing(const std::string& config, base::TimeTicks coordinator_time, StartTracingCallback callback) final;
  void StopAndFlush(RecorderPtr recorder) final;
  void RequestBufferStatus(RequestBufferStatusCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) RecorderProxy
    : public Recorder {
 public:
  using InterfaceType = Recorder;

  explicit RecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddChunk(const std::string& chunk) final;
  void AddMetadata(base::Value metadata) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) CoordinatorProxy
    : public Coordinator {
 public:
  using InterfaceType = Coordinator;

  explicit CoordinatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartTracing(const std::string& config, StartTracingCallback callback) final;
  void StopAndFlush(mojo::ScopedDataPipeProducerHandle stream, StopAndFlushCallback callback) final;
  void StopAndFlushAgent(mojo::ScopedDataPipeProducerHandle stream, const std::string& agent_label, StopAndFlushAgentCallback callback) final;
  void IsTracing(IsTracingCallback callback) final;
  void RequestBufferUsage(RequestBufferUsageCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentRegistryStubDispatch {
 public:
  static bool Accept(AgentRegistry* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AgentRegistry* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AgentRegistry>>
class AgentRegistryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AgentRegistryStub() {}
  ~AgentRegistryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AgentRegistryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AgentRegistryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentStubDispatch {
 public:
  static bool Accept(Agent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Agent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Agent>>
class AgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AgentStub() {}
  ~AgentStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) RecorderStubDispatch {
 public:
  static bool Accept(Recorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Recorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Recorder>>
class RecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RecorderStub() {}
  ~RecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) CoordinatorStubDispatch {
 public:
  static bool Accept(Coordinator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Coordinator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Coordinator>>
class CoordinatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CoordinatorStub() {}
  ~CoordinatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CoordinatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentRegistryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) RecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) CoordinatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) AgentResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) CoordinatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace tracing

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_H_