// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_H_

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
#include "services/tracing/public/mojom/perfetto_service.mojom-shared.h"
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
#include "third_party/perfetto/include/perfetto/tracing/core/chrome_config.h"
#include "third_party/perfetto/include/perfetto/tracing/core/commit_data_request.h"
#include "third_party/perfetto/include/perfetto/tracing/core/data_source_config.h"
#include "third_party/perfetto/include/perfetto/tracing/core/data_source_descriptor.h"
#include "third_party/perfetto/include/perfetto/tracing/core/trace_config.h"
#include "base/component_export.h"




namespace tracing {
namespace mojom {

class ProducerHostProxy;

template <typename ImplRefTraits>
class ProducerHostStub;

class ProducerHostRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHost
    : public ProducerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProducerHostInterfaceBase;
  using Proxy_ = ProducerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProducerHostStub<ImplRefTraits>;

  using RequestValidator_ = ProducerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCommitDataMinVersion = 0,
    kRegisterDataSourceMinVersion = 0,
    kRegisterTraceWriterMinVersion = 0,
    kUnregisterTraceWriterMinVersion = 0,
  };
  virtual ~ProducerHost() {}

  
  virtual void CommitData(const perfetto::CommitDataRequest& data_request) = 0;

  
  virtual void RegisterDataSource(const perfetto::DataSourceDescriptor& registration_info) = 0;

  
  virtual void RegisterTraceWriter(uint32_t writer_id, uint32_t target_buffer) = 0;

  
  virtual void UnregisterTraceWriter(uint32_t writer_id) = 0;
};

class ProducerClientProxy;

template <typename ImplRefTraits>
class ProducerClientStub;

class ProducerClientRequestValidator;
class ProducerClientResponseValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClient
    : public ProducerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProducerClientInterfaceBase;
  using Proxy_ = ProducerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProducerClientStub<ImplRefTraits>;

  using RequestValidator_ = ProducerClientRequestValidator;
  using ResponseValidator_ = ProducerClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnTracingStartMinVersion = 0,
    kStartDataSourceMinVersion = 0,
    kStopDataSourceMinVersion = 0,
    kFlushMinVersion = 0,
  };
  virtual ~ProducerClient() {}

  
  virtual void OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) = 0;


  using StartDataSourceCallback = base::OnceCallback<void()>;
  
  virtual void StartDataSource(uint64_t id, const perfetto::DataSourceConfig& data_source_config, StartDataSourceCallback callback) = 0;


  using StopDataSourceCallback = base::OnceCallback<void()>;
  
  virtual void StopDataSource(uint64_t id, StopDataSourceCallback callback) = 0;

  
  virtual void Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) = 0;
};

class PerfettoServiceProxy;

template <typename ImplRefTraits>
class PerfettoServiceStub;

class PerfettoServiceRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoService
    : public PerfettoServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PerfettoServiceInterfaceBase;
  using Proxy_ = PerfettoServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PerfettoServiceStub<ImplRefTraits>;

  using RequestValidator_ = PerfettoServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectToProducerHostMinVersion = 0,
  };
  virtual ~PerfettoService() {}

  
  virtual void ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) = 0;
};

class ConsumerHostProxy;

template <typename ImplRefTraits>
class ConsumerHostStub;

class ConsumerHostRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) ConsumerHost
    : public ConsumerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ConsumerHostInterfaceBase;
  using Proxy_ = ConsumerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ConsumerHostStub<ImplRefTraits>;

  using RequestValidator_ = ConsumerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kEnableTracingMinVersion = 0,
  };
  virtual ~ConsumerHost() {}

  
  virtual void EnableTracing(TracingSessionHostRequest tracing_session_host, TracingSessionClientPtr tracing_session_client, const perfetto::TraceConfig& config, TracingClientPriority priority) = 0;
};

class TracingSessionHostProxy;

template <typename ImplRefTraits>
class TracingSessionHostStub;

class TracingSessionHostRequestValidator;
class TracingSessionHostResponseValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHost
    : public TracingSessionHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TracingSessionHostInterfaceBase;
  using Proxy_ = TracingSessionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = TracingSessionHostStub<ImplRefTraits>;

  using RequestValidator_ = TracingSessionHostRequestValidator;
  using ResponseValidator_ = TracingSessionHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kChangeTraceConfigMinVersion = 0,
    kDisableTracingMinVersion = 0,
    kReadBuffersMinVersion = 0,
    kRequestBufferUsageMinVersion = 0,
    kDisableTracingAndEmitJsonMinVersion = 0,
  };
  virtual ~TracingSessionHost() {}

  
  virtual void ChangeTraceConfig(const perfetto::TraceConfig& config) = 0;

  
  virtual void DisableTracing() = 0;


  using ReadBuffersCallback = base::OnceCallback<void()>;
  
  virtual void ReadBuffers(mojo::ScopedDataPipeProducerHandle stream, ReadBuffersCallback callback) = 0;


  using RequestBufferUsageCallback = base::OnceCallback<void(bool, float)>;
  
  virtual void RequestBufferUsage(RequestBufferUsageCallback callback) = 0;


  using DisableTracingAndEmitJsonCallback = base::OnceCallback<void()>;
  
  virtual void DisableTracingAndEmitJson(const std::string& agent_label_filter, mojo::ScopedDataPipeProducerHandle stream, DisableTracingAndEmitJsonCallback callback) = 0;
};

class TracingSessionClientProxy;

template <typename ImplRefTraits>
class TracingSessionClientStub;

class TracingSessionClientRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionClient
    : public TracingSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TracingSessionClientInterfaceBase;
  using Proxy_ = TracingSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TracingSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = TracingSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnTracingEnabledMinVersion = 0,
    kOnTracingDisabledMinVersion = 0,
  };
  virtual ~TracingSessionClient() {}

  
  virtual void OnTracingEnabled() = 0;

  
  virtual void OnTracingDisabled() = 0;
};

class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostProxy
    : public ProducerHost {
 public:
  using InterfaceType = ProducerHost;

  explicit ProducerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void CommitData(const perfetto::CommitDataRequest& data_request) final;
  void RegisterDataSource(const perfetto::DataSourceDescriptor& registration_info) final;
  void RegisterTraceWriter(uint32_t writer_id, uint32_t target_buffer) final;
  void UnregisterTraceWriter(uint32_t writer_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientProxy
    : public ProducerClient {
 public:
  using InterfaceType = ProducerClient;

  explicit ProducerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) final;
  void StartDataSource(uint64_t id, const perfetto::DataSourceConfig& data_source_config, StartDataSourceCallback callback) final;
  void StopDataSource(uint64_t id, StopDataSourceCallback callback) final;
  void Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceProxy
    : public PerfettoService {
 public:
  using InterfaceType = PerfettoService;

  explicit PerfettoServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) ConsumerHostProxy
    : public ConsumerHost {
 public:
  using InterfaceType = ConsumerHost;

  explicit ConsumerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnableTracing(TracingSessionHostRequest tracing_session_host, TracingSessionClientPtr tracing_session_client, const perfetto::TraceConfig& config, TracingClientPriority priority) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHostProxy
    : public TracingSessionHost {
 public:
  using InterfaceType = TracingSessionHost;

  explicit TracingSessionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void ChangeTraceConfig(const perfetto::TraceConfig& config) final;
  void DisableTracing() final;
  void ReadBuffers(mojo::ScopedDataPipeProducerHandle stream, ReadBuffersCallback callback) final;
  void RequestBufferUsage(RequestBufferUsageCallback callback) final;
  void DisableTracingAndEmitJson(const std::string& agent_label_filter, mojo::ScopedDataPipeProducerHandle stream, DisableTracingAndEmitJsonCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionClientProxy
    : public TracingSessionClient {
 public:
  using InterfaceType = TracingSessionClient;

  explicit TracingSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTracingEnabled() final;
  void OnTracingDisabled() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostStubDispatch {
 public:
  static bool Accept(ProducerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProducerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProducerHost>>
class ProducerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProducerHostStub() {}
  ~ProducerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientStubDispatch {
 public:
  static bool Accept(ProducerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProducerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProducerClient>>
class ProducerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProducerClientStub() {}
  ~ProducerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceStubDispatch {
 public:
  static bool Accept(PerfettoService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PerfettoService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PerfettoService>>
class PerfettoServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PerfettoServiceStub() {}
  ~PerfettoServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PerfettoServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PerfettoServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ConsumerHostStubDispatch {
 public:
  static bool Accept(ConsumerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ConsumerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ConsumerHost>>
class ConsumerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ConsumerHostStub() {}
  ~ConsumerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConsumerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ConsumerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHostStubDispatch {
 public:
  static bool Accept(TracingSessionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TracingSessionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TracingSessionHost>>
class TracingSessionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TracingSessionHostStub() {}
  ~TracingSessionHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TracingSessionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TracingSessionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionClientStubDispatch {
 public:
  static bool Accept(TracingSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TracingSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TracingSessionClient>>
class TracingSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TracingSessionClientStub() {}
  ~TracingSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TracingSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TracingSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ConsumerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracingSessionHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class COMPONENT_EXPORT(TRACING_MOJOM) ChunksToMove {
 public:
  using DataView = ChunksToMoveDataView;
  using Data_ = internal::ChunksToMove_Data;

  template <typename... Args>
  static ChunksToMovePtr New(Args&&... args) {
    return ChunksToMovePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChunksToMovePtr From(const U& u) {
    return mojo::TypeConverter<ChunksToMovePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChunksToMove>::Convert(*this);
  }


  ChunksToMove();

  ChunksToMove(
      uint32_t page,
      uint32_t chunk,
      uint32_t target_buffer);

  ~ChunksToMove();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChunksToMovePtr>
  ChunksToMovePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChunksToMove>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChunksToMove::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChunksToMove::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChunksToMove_UnserializedMessageContext<
            UserType, ChunksToMove::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChunksToMove::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChunksToMove::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChunksToMove_UnserializedMessageContext<
            UserType, ChunksToMove::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChunksToMove::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t page;
  
  uint32_t chunk;
  
  uint32_t target_buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(TRACING_MOJOM) ChunkPatch {
 public:
  using DataView = ChunkPatchDataView;
  using Data_ = internal::ChunkPatch_Data;

  template <typename... Args>
  static ChunkPatchPtr New(Args&&... args) {
    return ChunkPatchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChunkPatchPtr From(const U& u) {
    return mojo::TypeConverter<ChunkPatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChunkPatch>::Convert(*this);
  }


  ChunkPatch();

  ChunkPatch(
      uint32_t offset,
      const std::string& data);

  ~ChunkPatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChunkPatchPtr>
  ChunkPatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChunkPatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChunkPatch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChunkPatch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChunkPatch_UnserializedMessageContext<
            UserType, ChunkPatch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChunkPatch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChunkPatch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChunkPatch_UnserializedMessageContext<
            UserType, ChunkPatch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChunkPatch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t offset;
  
  std::string data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class COMPONENT_EXPORT(TRACING_MOJOM) ChromeConfig {
 public:
  using DataView = ChromeConfigDataView;
  using Data_ = internal::ChromeConfig_Data;

  template <typename... Args>
  static ChromeConfigPtr New(Args&&... args) {
    return ChromeConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChromeConfigPtr From(const U& u) {
    return mojo::TypeConverter<ChromeConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChromeConfig>::Convert(*this);
  }


  ChromeConfig();

  ChromeConfig(
      const std::string& trace_config,
      bool privacy_filtering_enabled);

  ~ChromeConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChromeConfigPtr>
  ChromeConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChromeConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChromeConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChromeConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChromeConfig_UnserializedMessageContext<
            UserType, ChromeConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChromeConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChromeConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChromeConfig_UnserializedMessageContext<
            UserType, ChromeConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChromeConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string trace_config;
  
  bool privacy_filtering_enabled;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(TRACING_MOJOM) DataSourceRegistration {
 public:
  using DataView = DataSourceRegistrationDataView;
  using Data_ = internal::DataSourceRegistration_Data;

  template <typename... Args>
  static DataSourceRegistrationPtr New(Args&&... args) {
    return DataSourceRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataSourceRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<DataSourceRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataSourceRegistration>::Convert(*this);
  }


  DataSourceRegistration();

  DataSourceRegistration(
      const std::string& name,
      bool will_notify_on_start,
      bool will_notify_on_stop);

  ~DataSourceRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataSourceRegistrationPtr>
  DataSourceRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataSourceRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataSourceRegistration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataSourceRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataSourceRegistration_UnserializedMessageContext<
            UserType, DataSourceRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataSourceRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DataSourceRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataSourceRegistration_UnserializedMessageContext<
            UserType, DataSourceRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataSourceRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  bool will_notify_on_start;
  
  bool will_notify_on_stop;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(TRACING_MOJOM) BufferConfig {
 public:
  using DataView = BufferConfigDataView;
  using Data_ = internal::BufferConfig_Data;

  template <typename... Args>
  static BufferConfigPtr New(Args&&... args) {
    return BufferConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BufferConfigPtr From(const U& u) {
    return mojo::TypeConverter<BufferConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BufferConfig>::Convert(*this);
  }


  BufferConfig();

  explicit BufferConfig(
      uint32_t size_kb);

  ~BufferConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BufferConfigPtr>
  BufferConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BufferConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BufferConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BufferConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BufferConfig_UnserializedMessageContext<
            UserType, BufferConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BufferConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BufferConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BufferConfig_UnserializedMessageContext<
            UserType, BufferConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BufferConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t size_kb;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoBuiltinDataSource {
 public:
  using DataView = PerfettoBuiltinDataSourceDataView;
  using Data_ = internal::PerfettoBuiltinDataSource_Data;

  template <typename... Args>
  static PerfettoBuiltinDataSourcePtr New(Args&&... args) {
    return PerfettoBuiltinDataSourcePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PerfettoBuiltinDataSourcePtr From(const U& u) {
    return mojo::TypeConverter<PerfettoBuiltinDataSourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PerfettoBuiltinDataSource>::Convert(*this);
  }


  PerfettoBuiltinDataSource();

  PerfettoBuiltinDataSource(
      bool disable_clock_snapshotting,
      bool disable_trace_config,
      bool disable_system_info);

  ~PerfettoBuiltinDataSource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PerfettoBuiltinDataSourcePtr>
  PerfettoBuiltinDataSourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PerfettoBuiltinDataSource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PerfettoBuiltinDataSource::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PerfettoBuiltinDataSource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PerfettoBuiltinDataSource_UnserializedMessageContext<
            UserType, PerfettoBuiltinDataSource::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PerfettoBuiltinDataSource::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PerfettoBuiltinDataSource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PerfettoBuiltinDataSource_UnserializedMessageContext<
            UserType, PerfettoBuiltinDataSource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PerfettoBuiltinDataSource::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool disable_clock_snapshotting;
  
  bool disable_trace_config;
  
  bool disable_system_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class COMPONENT_EXPORT(TRACING_MOJOM) ChunksToPatch {
 public:
  using DataView = ChunksToPatchDataView;
  using Data_ = internal::ChunksToPatch_Data;

  template <typename... Args>
  static ChunksToPatchPtr New(Args&&... args) {
    return ChunksToPatchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChunksToPatchPtr From(const U& u) {
    return mojo::TypeConverter<ChunksToPatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChunksToPatch>::Convert(*this);
  }


  ChunksToPatch();

  ChunksToPatch(
      uint32_t target_buffer,
      uint32_t writer_id,
      uint32_t chunk_id,
      const std::vector<perfetto::CommitDataRequest::ChunkToPatch::Patch>& patches,
      bool has_more_patches);

  ~ChunksToPatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChunksToPatchPtr>
  ChunksToPatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChunksToPatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChunksToPatch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChunksToPatch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChunksToPatch_UnserializedMessageContext<
            UserType, ChunksToPatch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChunksToPatch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChunksToPatch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChunksToPatch_UnserializedMessageContext<
            UserType, ChunksToPatch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChunksToPatch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t target_buffer;
  
  uint32_t writer_id;
  
  uint32_t chunk_id;
  
  std::vector<perfetto::CommitDataRequest::ChunkToPatch::Patch> patches;
  
  bool has_more_patches;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(TRACING_MOJOM) CommitDataRequest {
 public:
  using DataView = CommitDataRequestDataView;
  using Data_ = internal::CommitDataRequest_Data;

  template <typename... Args>
  static CommitDataRequestPtr New(Args&&... args) {
    return CommitDataRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommitDataRequestPtr From(const U& u) {
    return mojo::TypeConverter<CommitDataRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommitDataRequest>::Convert(*this);
  }


  CommitDataRequest();

  CommitDataRequest(
      const std::vector<perfetto::CommitDataRequest::ChunksToMove>& chunks_to_move,
      std::vector<ChunksToPatchPtr> chunks_to_patch,
      uint64_t flush_request_id);

  ~CommitDataRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommitDataRequestPtr>
  CommitDataRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CommitDataRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommitDataRequest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommitDataRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommitDataRequest_UnserializedMessageContext<
            UserType, CommitDataRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CommitDataRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CommitDataRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommitDataRequest_UnserializedMessageContext<
            UserType, CommitDataRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommitDataRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<perfetto::CommitDataRequest::ChunksToMove> chunks_to_move;
  
  std::vector<ChunksToPatchPtr> chunks_to_patch;
  
  uint64_t flush_request_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CommitDataRequest);
};






class COMPONENT_EXPORT(TRACING_MOJOM) DataSourceConfig {
 public:
  using DataView = DataSourceConfigDataView;
  using Data_ = internal::DataSourceConfig_Data;

  template <typename... Args>
  static DataSourceConfigPtr New(Args&&... args) {
    return DataSourceConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataSourceConfigPtr From(const U& u) {
    return mojo::TypeConverter<DataSourceConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataSourceConfig>::Convert(*this);
  }


  DataSourceConfig();

  DataSourceConfig(
      const std::string& name,
      uint32_t target_buffer,
      uint32_t trace_duration_ms,
      uint64_t tracing_session_id,
      const perfetto::ChromeConfig& chrome_config,
      const std::string& legacy_config);

  ~DataSourceConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataSourceConfigPtr>
  DataSourceConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataSourceConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataSourceConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataSourceConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataSourceConfig_UnserializedMessageContext<
            UserType, DataSourceConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataSourceConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DataSourceConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataSourceConfig_UnserializedMessageContext<
            UserType, DataSourceConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataSourceConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  uint32_t target_buffer;
  
  uint32_t trace_duration_ms;
  
  uint64_t tracing_session_id;
  
  perfetto::ChromeConfig chrome_config;
  
  std::string legacy_config;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class COMPONENT_EXPORT(TRACING_MOJOM) DataSource {
 public:
  using DataView = DataSourceDataView;
  using Data_ = internal::DataSource_Data;

  template <typename... Args>
  static DataSourcePtr New(Args&&... args) {
    return DataSourcePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataSourcePtr From(const U& u) {
    return mojo::TypeConverter<DataSourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataSource>::Convert(*this);
  }


  DataSource();

  DataSource(
      const perfetto::DataSourceConfig& config,
      const std::vector<std::string>& producer_name_filter);

  ~DataSource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataSourcePtr>
  DataSourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataSource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataSource::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataSource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataSource_UnserializedMessageContext<
            UserType, DataSource::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataSource::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DataSource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataSource_UnserializedMessageContext<
            UserType, DataSource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataSource::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  perfetto::DataSourceConfig config;
  
  std::vector<std::string> producer_name_filter;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(TRACING_MOJOM) TraceConfig {
 public:
  using DataView = TraceConfigDataView;
  using Data_ = internal::TraceConfig_Data;

  template <typename... Args>
  static TraceConfigPtr New(Args&&... args) {
    return TraceConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TraceConfigPtr From(const U& u) {
    return mojo::TypeConverter<TraceConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TraceConfig>::Convert(*this);
  }


  TraceConfig();

  TraceConfig(
      std::vector<DataSourcePtr> data_sources,
      const perfetto::TraceConfig::BuiltinDataSource& perfetto_builtin_data_source,
      std::vector<BufferConfigPtr> buffers,
      uint32_t duration_ms);

  ~TraceConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TraceConfigPtr>
  TraceConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TraceConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TraceConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TraceConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TraceConfig_UnserializedMessageContext<
            UserType, TraceConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TraceConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TraceConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TraceConfig_UnserializedMessageContext<
            UserType, TraceConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TraceConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<DataSourcePtr> data_sources;
  
  perfetto::TraceConfig::BuiltinDataSource perfetto_builtin_data_source;
  
  std::vector<BufferConfigPtr> buffers;
  
  uint32_t duration_ms;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TraceConfig);
};

template <typename StructPtrType>
ChunksToMovePtr ChunksToMove::Clone() const {
  return New(
      mojo::Clone(page),
      mojo::Clone(chunk),
      mojo::Clone(target_buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChunksToMove>::value>::type*>
bool ChunksToMove::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->page, other_struct.page))
    return false;
  if (!mojo::Equals(this->chunk, other_struct.chunk))
    return false;
  if (!mojo::Equals(this->target_buffer, other_struct.target_buffer))
    return false;
  return true;
}
template <typename StructPtrType>
ChunkPatchPtr ChunkPatch::Clone() const {
  return New(
      mojo::Clone(offset),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChunkPatch>::value>::type*>
bool ChunkPatch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
ChunksToPatchPtr ChunksToPatch::Clone() const {
  return New(
      mojo::Clone(target_buffer),
      mojo::Clone(writer_id),
      mojo::Clone(chunk_id),
      mojo::Clone(patches),
      mojo::Clone(has_more_patches)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChunksToPatch>::value>::type*>
bool ChunksToPatch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->target_buffer, other_struct.target_buffer))
    return false;
  if (!mojo::Equals(this->writer_id, other_struct.writer_id))
    return false;
  if (!mojo::Equals(this->chunk_id, other_struct.chunk_id))
    return false;
  if (!mojo::Equals(this->patches, other_struct.patches))
    return false;
  if (!mojo::Equals(this->has_more_patches, other_struct.has_more_patches))
    return false;
  return true;
}
template <typename StructPtrType>
CommitDataRequestPtr CommitDataRequest::Clone() const {
  return New(
      mojo::Clone(chunks_to_move),
      mojo::Clone(chunks_to_patch),
      mojo::Clone(flush_request_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CommitDataRequest>::value>::type*>
bool CommitDataRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->chunks_to_move, other_struct.chunks_to_move))
    return false;
  if (!mojo::Equals(this->chunks_to_patch, other_struct.chunks_to_patch))
    return false;
  if (!mojo::Equals(this->flush_request_id, other_struct.flush_request_id))
    return false;
  return true;
}
template <typename StructPtrType>
ChromeConfigPtr ChromeConfig::Clone() const {
  return New(
      mojo::Clone(trace_config),
      mojo::Clone(privacy_filtering_enabled)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChromeConfig>::value>::type*>
bool ChromeConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->trace_config, other_struct.trace_config))
    return false;
  if (!mojo::Equals(this->privacy_filtering_enabled, other_struct.privacy_filtering_enabled))
    return false;
  return true;
}
template <typename StructPtrType>
DataSourceConfigPtr DataSourceConfig::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(target_buffer),
      mojo::Clone(trace_duration_ms),
      mojo::Clone(tracing_session_id),
      mojo::Clone(chrome_config),
      mojo::Clone(legacy_config)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataSourceConfig>::value>::type*>
bool DataSourceConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->target_buffer, other_struct.target_buffer))
    return false;
  if (!mojo::Equals(this->trace_duration_ms, other_struct.trace_duration_ms))
    return false;
  if (!mojo::Equals(this->tracing_session_id, other_struct.tracing_session_id))
    return false;
  if (!mojo::Equals(this->chrome_config, other_struct.chrome_config))
    return false;
  if (!mojo::Equals(this->legacy_config, other_struct.legacy_config))
    return false;
  return true;
}
template <typename StructPtrType>
DataSourceRegistrationPtr DataSourceRegistration::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(will_notify_on_start),
      mojo::Clone(will_notify_on_stop)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataSourceRegistration>::value>::type*>
bool DataSourceRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->will_notify_on_start, other_struct.will_notify_on_start))
    return false;
  if (!mojo::Equals(this->will_notify_on_stop, other_struct.will_notify_on_stop))
    return false;
  return true;
}
template <typename StructPtrType>
BufferConfigPtr BufferConfig::Clone() const {
  return New(
      mojo::Clone(size_kb)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BufferConfig>::value>::type*>
bool BufferConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->size_kb, other_struct.size_kb))
    return false;
  return true;
}
template <typename StructPtrType>
DataSourcePtr DataSource::Clone() const {
  return New(
      mojo::Clone(config),
      mojo::Clone(producer_name_filter)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataSource>::value>::type*>
bool DataSource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->config, other_struct.config))
    return false;
  if (!mojo::Equals(this->producer_name_filter, other_struct.producer_name_filter))
    return false;
  return true;
}
template <typename StructPtrType>
PerfettoBuiltinDataSourcePtr PerfettoBuiltinDataSource::Clone() const {
  return New(
      mojo::Clone(disable_clock_snapshotting),
      mojo::Clone(disable_trace_config),
      mojo::Clone(disable_system_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PerfettoBuiltinDataSource>::value>::type*>
bool PerfettoBuiltinDataSource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->disable_clock_snapshotting, other_struct.disable_clock_snapshotting))
    return false;
  if (!mojo::Equals(this->disable_trace_config, other_struct.disable_trace_config))
    return false;
  if (!mojo::Equals(this->disable_system_info, other_struct.disable_system_info))
    return false;
  return true;
}
template <typename StructPtrType>
TraceConfigPtr TraceConfig::Clone() const {
  return New(
      mojo::Clone(data_sources),
      mojo::Clone(perfetto_builtin_data_source),
      mojo::Clone(buffers),
      mojo::Clone(duration_ms)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TraceConfig>::value>::type*>
bool TraceConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data_sources, other_struct.data_sources))
    return false;
  if (!mojo::Equals(this->perfetto_builtin_data_source, other_struct.perfetto_builtin_data_source))
    return false;
  if (!mojo::Equals(this->buffers, other_struct.buffers))
    return false;
  if (!mojo::Equals(this->duration_ms, other_struct.duration_ms))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace tracing

namespace mojo {


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChunksToMove::DataView,
                                         ::tracing::mojom::ChunksToMovePtr> {
  static bool IsNull(const ::tracing::mojom::ChunksToMovePtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChunksToMovePtr* output) { output->reset(); }

  static decltype(::tracing::mojom::ChunksToMove::page) page(
      const ::tracing::mojom::ChunksToMovePtr& input) {
    return input->page;
  }

  static decltype(::tracing::mojom::ChunksToMove::chunk) chunk(
      const ::tracing::mojom::ChunksToMovePtr& input) {
    return input->chunk;
  }

  static decltype(::tracing::mojom::ChunksToMove::target_buffer) target_buffer(
      const ::tracing::mojom::ChunksToMovePtr& input) {
    return input->target_buffer;
  }

  static bool Read(::tracing::mojom::ChunksToMove::DataView input, ::tracing::mojom::ChunksToMovePtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChunkPatch::DataView,
                                         ::tracing::mojom::ChunkPatchPtr> {
  static bool IsNull(const ::tracing::mojom::ChunkPatchPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChunkPatchPtr* output) { output->reset(); }

  static decltype(::tracing::mojom::ChunkPatch::offset) offset(
      const ::tracing::mojom::ChunkPatchPtr& input) {
    return input->offset;
  }

  static const decltype(::tracing::mojom::ChunkPatch::data)& data(
      const ::tracing::mojom::ChunkPatchPtr& input) {
    return input->data;
  }

  static bool Read(::tracing::mojom::ChunkPatch::DataView input, ::tracing::mojom::ChunkPatchPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChunksToPatch::DataView,
                                         ::tracing::mojom::ChunksToPatchPtr> {
  static bool IsNull(const ::tracing::mojom::ChunksToPatchPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChunksToPatchPtr* output) { output->reset(); }

  static decltype(::tracing::mojom::ChunksToPatch::target_buffer) target_buffer(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->target_buffer;
  }

  static decltype(::tracing::mojom::ChunksToPatch::writer_id) writer_id(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->writer_id;
  }

  static decltype(::tracing::mojom::ChunksToPatch::chunk_id) chunk_id(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->chunk_id;
  }

  static const decltype(::tracing::mojom::ChunksToPatch::patches)& patches(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->patches;
  }

  static decltype(::tracing::mojom::ChunksToPatch::has_more_patches) has_more_patches(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->has_more_patches;
  }

  static bool Read(::tracing::mojom::ChunksToPatch::DataView input, ::tracing::mojom::ChunksToPatchPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::CommitDataRequest::DataView,
                                         ::tracing::mojom::CommitDataRequestPtr> {
  static bool IsNull(const ::tracing::mojom::CommitDataRequestPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::CommitDataRequestPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::CommitDataRequest::chunks_to_move)& chunks_to_move(
      const ::tracing::mojom::CommitDataRequestPtr& input) {
    return input->chunks_to_move;
  }

  static const decltype(::tracing::mojom::CommitDataRequest::chunks_to_patch)& chunks_to_patch(
      const ::tracing::mojom::CommitDataRequestPtr& input) {
    return input->chunks_to_patch;
  }

  static decltype(::tracing::mojom::CommitDataRequest::flush_request_id) flush_request_id(
      const ::tracing::mojom::CommitDataRequestPtr& input) {
    return input->flush_request_id;
  }

  static bool Read(::tracing::mojom::CommitDataRequest::DataView input, ::tracing::mojom::CommitDataRequestPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChromeConfig::DataView,
                                         ::tracing::mojom::ChromeConfigPtr> {
  static bool IsNull(const ::tracing::mojom::ChromeConfigPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChromeConfigPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::ChromeConfig::trace_config)& trace_config(
      const ::tracing::mojom::ChromeConfigPtr& input) {
    return input->trace_config;
  }

  static decltype(::tracing::mojom::ChromeConfig::privacy_filtering_enabled) privacy_filtering_enabled(
      const ::tracing::mojom::ChromeConfigPtr& input) {
    return input->privacy_filtering_enabled;
  }

  static bool Read(::tracing::mojom::ChromeConfig::DataView input, ::tracing::mojom::ChromeConfigPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::DataSourceConfig::DataView,
                                         ::tracing::mojom::DataSourceConfigPtr> {
  static bool IsNull(const ::tracing::mojom::DataSourceConfigPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::DataSourceConfigPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::DataSourceConfig::name)& name(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->name;
  }

  static decltype(::tracing::mojom::DataSourceConfig::target_buffer) target_buffer(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->target_buffer;
  }

  static decltype(::tracing::mojom::DataSourceConfig::trace_duration_ms) trace_duration_ms(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->trace_duration_ms;
  }

  static decltype(::tracing::mojom::DataSourceConfig::tracing_session_id) tracing_session_id(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->tracing_session_id;
  }

  static const decltype(::tracing::mojom::DataSourceConfig::chrome_config)& chrome_config(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->chrome_config;
  }

  static const decltype(::tracing::mojom::DataSourceConfig::legacy_config)& legacy_config(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->legacy_config;
  }

  static bool Read(::tracing::mojom::DataSourceConfig::DataView input, ::tracing::mojom::DataSourceConfigPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::DataSourceRegistration::DataView,
                                         ::tracing::mojom::DataSourceRegistrationPtr> {
  static bool IsNull(const ::tracing::mojom::DataSourceRegistrationPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::DataSourceRegistrationPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::DataSourceRegistration::name)& name(
      const ::tracing::mojom::DataSourceRegistrationPtr& input) {
    return input->name;
  }

  static decltype(::tracing::mojom::DataSourceRegistration::will_notify_on_start) will_notify_on_start(
      const ::tracing::mojom::DataSourceRegistrationPtr& input) {
    return input->will_notify_on_start;
  }

  static decltype(::tracing::mojom::DataSourceRegistration::will_notify_on_stop) will_notify_on_stop(
      const ::tracing::mojom::DataSourceRegistrationPtr& input) {
    return input->will_notify_on_stop;
  }

  static bool Read(::tracing::mojom::DataSourceRegistration::DataView input, ::tracing::mojom::DataSourceRegistrationPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::BufferConfig::DataView,
                                         ::tracing::mojom::BufferConfigPtr> {
  static bool IsNull(const ::tracing::mojom::BufferConfigPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::BufferConfigPtr* output) { output->reset(); }

  static decltype(::tracing::mojom::BufferConfig::size_kb) size_kb(
      const ::tracing::mojom::BufferConfigPtr& input) {
    return input->size_kb;
  }

  static bool Read(::tracing::mojom::BufferConfig::DataView input, ::tracing::mojom::BufferConfigPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::DataSource::DataView,
                                         ::tracing::mojom::DataSourcePtr> {
  static bool IsNull(const ::tracing::mojom::DataSourcePtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::DataSourcePtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::DataSource::config)& config(
      const ::tracing::mojom::DataSourcePtr& input) {
    return input->config;
  }

  static const decltype(::tracing::mojom::DataSource::producer_name_filter)& producer_name_filter(
      const ::tracing::mojom::DataSourcePtr& input) {
    return input->producer_name_filter;
  }

  static bool Read(::tracing::mojom::DataSource::DataView input, ::tracing::mojom::DataSourcePtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::PerfettoBuiltinDataSource::DataView,
                                         ::tracing::mojom::PerfettoBuiltinDataSourcePtr> {
  static bool IsNull(const ::tracing::mojom::PerfettoBuiltinDataSourcePtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::PerfettoBuiltinDataSourcePtr* output) { output->reset(); }

  static decltype(::tracing::mojom::PerfettoBuiltinDataSource::disable_clock_snapshotting) disable_clock_snapshotting(
      const ::tracing::mojom::PerfettoBuiltinDataSourcePtr& input) {
    return input->disable_clock_snapshotting;
  }

  static decltype(::tracing::mojom::PerfettoBuiltinDataSource::disable_trace_config) disable_trace_config(
      const ::tracing::mojom::PerfettoBuiltinDataSourcePtr& input) {
    return input->disable_trace_config;
  }

  static decltype(::tracing::mojom::PerfettoBuiltinDataSource::disable_system_info) disable_system_info(
      const ::tracing::mojom::PerfettoBuiltinDataSourcePtr& input) {
    return input->disable_system_info;
  }

  static bool Read(::tracing::mojom::PerfettoBuiltinDataSource::DataView input, ::tracing::mojom::PerfettoBuiltinDataSourcePtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::TraceConfig::DataView,
                                         ::tracing::mojom::TraceConfigPtr> {
  static bool IsNull(const ::tracing::mojom::TraceConfigPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::TraceConfigPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::TraceConfig::data_sources)& data_sources(
      const ::tracing::mojom::TraceConfigPtr& input) {
    return input->data_sources;
  }

  static const decltype(::tracing::mojom::TraceConfig::perfetto_builtin_data_source)& perfetto_builtin_data_source(
      const ::tracing::mojom::TraceConfigPtr& input) {
    return input->perfetto_builtin_data_source;
  }

  static const decltype(::tracing::mojom::TraceConfig::buffers)& buffers(
      const ::tracing::mojom::TraceConfigPtr& input) {
    return input->buffers;
  }

  static decltype(::tracing::mojom::TraceConfig::duration_ms) duration_ms(
      const ::tracing::mojom::TraceConfigPtr& input) {
    return input->duration_ms;
  }

  static bool Read(::tracing::mojom::TraceConfig::DataView input, ::tracing::mojom::TraceConfigPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_H_