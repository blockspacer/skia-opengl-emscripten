// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_H_

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
#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-forward.h"
#include "mojo/public/mojom/base/big_string.mojom.h"
#include "mojo/public/mojom/base/process_id.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#include "base/trace_event/memory_allocator_dump.h"
#include "base/trace_event/memory_dump_manager.h"
#include "base/trace_event/memory_dump_request_args.h"
#include "base/trace_event/process_memory_dump.h"
#include "base/component_export.h"




namespace memory_instrumentation {
namespace mojom {

class ClientProcessProxy;

template <typename ImplRefTraits>
class ClientProcessStub;

class ClientProcessRequestValidator;
class ClientProcessResponseValidator;


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcess
    : public ClientProcessInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ClientProcessInterfaceBase;
  using Proxy_ = ClientProcessProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClientProcessStub<ImplRefTraits>;

  using RequestValidator_ = ClientProcessRequestValidator;
  using ResponseValidator_ = ClientProcessResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestChromeMemoryDumpMinVersion = 0,
    kRequestOSMemoryDumpMinVersion = 0,
  };
  virtual ~ClientProcess() {}


  using RequestChromeMemoryDumpCallback = base::OnceCallback<void(bool, uint64_t, std::unique_ptr<base::trace_event::ProcessMemoryDump>)>;
  
  virtual void RequestChromeMemoryDump(const base::trace_event::MemoryDumpRequestArgs& args, RequestChromeMemoryDumpCallback callback) = 0;


  using RequestOSMemoryDumpCallback = base::OnceCallback<void(bool, base::flat_map<base::ProcessId, RawOSMemDumpPtr>)>;
  
  virtual void RequestOSMemoryDump(MemoryMapOption option, const std::vector<base::ProcessId>& pids, RequestOSMemoryDumpCallback callback) = 0;
};

class HeapProfilerProxy;

template <typename ImplRefTraits>
class HeapProfilerStub;

class HeapProfilerRequestValidator;
class HeapProfilerResponseValidator;


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfiler
    : public HeapProfilerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HeapProfilerInterfaceBase;
  using Proxy_ = HeapProfilerProxy;

  template <typename ImplRefTraits>
  using Stub_ = HeapProfilerStub<ImplRefTraits>;

  using RequestValidator_ = HeapProfilerRequestValidator;
  using ResponseValidator_ = HeapProfilerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDumpProcessesForTracingMinVersion = 0,
  };
  virtual ~HeapProfiler() {}


  using DumpProcessesForTracingCallback = base::OnceCallback<void(std::vector<HeapProfileResultPtr>)>;
  
  virtual void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) = 0;
};

class HeapProfilerHelperProxy;

template <typename ImplRefTraits>
class HeapProfilerHelperStub;

class HeapProfilerHelperRequestValidator;
class HeapProfilerHelperResponseValidator;


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelper
    : public HeapProfilerHelperInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HeapProfilerHelperInterfaceBase;
  using Proxy_ = HeapProfilerHelperProxy;

  template <typename ImplRefTraits>
  using Stub_ = HeapProfilerHelperStub<ImplRefTraits>;

  using RequestValidator_ = HeapProfilerHelperRequestValidator;
  using ResponseValidator_ = HeapProfilerHelperResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetVmRegionsForHeapProfilerMinVersion = 0,
  };
  virtual ~HeapProfilerHelper() {}


  using GetVmRegionsForHeapProfilerCallback = base::OnceCallback<void(base::flat_map<base::ProcessId, std::vector<VmRegionPtr>>)>;
  
  virtual void GetVmRegionsForHeapProfiler(const std::vector<base::ProcessId>& pids, GetVmRegionsForHeapProfilerCallback callback) = 0;
};

class CoordinatorProxy;

template <typename ImplRefTraits>
class CoordinatorStub;

class CoordinatorRequestValidator;
class CoordinatorResponseValidator;


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) Coordinator
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
    kRegisterClientProcessMinVersion = 0,
    kRequestGlobalMemoryDumpMinVersion = 0,
    kRequestGlobalMemoryDumpForPidMinVersion = 0,
    kRequestPrivateMemoryFootprintMinVersion = 0,
    kRequestGlobalMemoryDumpAndAppendToTraceMinVersion = 0,
    kRegisterHeapProfilerMinVersion = 0,
  };
  virtual ~Coordinator() {}

  
  virtual void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) = 0;


  using RequestGlobalMemoryDumpCallback = base::OnceCallback<void(bool, GlobalMemoryDumpPtr)>;
  
  virtual void RequestGlobalMemoryDump(base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, const std::vector<std::string>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) = 0;


  using RequestGlobalMemoryDumpForPidCallback = base::OnceCallback<void(bool, GlobalMemoryDumpPtr)>;
  
  virtual void RequestGlobalMemoryDumpForPid(base::ProcessId pid, const std::vector<std::string>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) = 0;


  using RequestPrivateMemoryFootprintCallback = base::OnceCallback<void(bool, GlobalMemoryDumpPtr)>;
  
  virtual void RequestPrivateMemoryFootprint(base::ProcessId pid, RequestPrivateMemoryFootprintCallback callback) = 0;


  using RequestGlobalMemoryDumpAndAppendToTraceCallback = base::OnceCallback<void(bool, uint64_t)>;
  
  virtual void RequestGlobalMemoryDumpAndAppendToTrace(base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) = 0;

  
  virtual void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) = 0;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcessProxy
    : public ClientProcess {
 public:
  using InterfaceType = ClientProcess;

  explicit ClientProcessProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestChromeMemoryDump(const base::trace_event::MemoryDumpRequestArgs& args, RequestChromeMemoryDumpCallback callback) final;
  void RequestOSMemoryDump(MemoryMapOption option, const std::vector<base::ProcessId>& pids, RequestOSMemoryDumpCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerProxy
    : public HeapProfiler {
 public:
  using InterfaceType = HeapProfiler;

  explicit HeapProfilerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelperProxy
    : public HeapProfilerHelper {
 public:
  using InterfaceType = HeapProfilerHelper;

  explicit HeapProfilerHelperProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetVmRegionsForHeapProfiler(const std::vector<base::ProcessId>& pids, GetVmRegionsForHeapProfilerCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinatorProxy
    : public Coordinator {
 public:
  using InterfaceType = Coordinator;

  explicit CoordinatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) final;
  void RequestGlobalMemoryDump(base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, const std::vector<std::string>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) final;
  void RequestGlobalMemoryDumpForPid(base::ProcessId pid, const std::vector<std::string>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) final;
  void RequestPrivateMemoryFootprint(base::ProcessId pid, RequestPrivateMemoryFootprintCallback callback) final;
  void RequestGlobalMemoryDumpAndAppendToTrace(base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) final;
  void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcessStubDispatch {
 public:
  static bool Accept(ClientProcess* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ClientProcess* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ClientProcess>>
class ClientProcessStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClientProcessStub() {}
  ~ClientProcessStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClientProcessStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClientProcessStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerStubDispatch {
 public:
  static bool Accept(HeapProfiler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HeapProfiler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HeapProfiler>>
class HeapProfilerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HeapProfilerStub() {}
  ~HeapProfilerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelperStubDispatch {
 public:
  static bool Accept(HeapProfilerHelper* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HeapProfilerHelper* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HeapProfilerHelper>>
class HeapProfilerHelperStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HeapProfilerHelperStub() {}
  ~HeapProfilerHelperStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerHelperStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HeapProfilerHelperStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinatorStubDispatch {
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
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcessRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelperRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcessResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelperResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RequestArgs {
 public:
  using DataView = RequestArgsDataView;
  using Data_ = internal::RequestArgs_Data;

  template <typename... Args>
  static RequestArgsPtr New(Args&&... args) {
    return RequestArgsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RequestArgsPtr From(const U& u) {
    return mojo::TypeConverter<RequestArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequestArgs>::Convert(*this);
  }


  RequestArgs();

  RequestArgs(
      uint64_t dump_guid,
      base::trace_event::MemoryDumpType dump_type,
      base::trace_event::MemoryDumpLevelOfDetail level_of_detail);

  ~RequestArgs();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RequestArgsPtr>
  RequestArgsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RequestArgs>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RequestArgs::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RequestArgs::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RequestArgs_UnserializedMessageContext<
            UserType, RequestArgs::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RequestArgs::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RequestArgs::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RequestArgs_UnserializedMessageContext<
            UserType, RequestArgs::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RequestArgs::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t dump_guid;
  
  base::trace_event::MemoryDumpType dump_type;
  
  base::trace_event::MemoryDumpLevelOfDetail level_of_detail;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RawAllocatorDumpEdge {
 public:
  using DataView = RawAllocatorDumpEdgeDataView;
  using Data_ = internal::RawAllocatorDumpEdge_Data;

  template <typename... Args>
  static RawAllocatorDumpEdgePtr New(Args&&... args) {
    return RawAllocatorDumpEdgePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawAllocatorDumpEdgePtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpEdgePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDumpEdge>::Convert(*this);
  }


  RawAllocatorDumpEdge();

  RawAllocatorDumpEdge(
      uint64_t source_id,
      uint64_t target_id,
      int32_t importance,
      bool overridable);

  ~RawAllocatorDumpEdge();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawAllocatorDumpEdgePtr>
  RawAllocatorDumpEdgePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDumpEdge>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawAllocatorDumpEdge::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDumpEdge::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawAllocatorDumpEdge_UnserializedMessageContext<
            UserType, RawAllocatorDumpEdge::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEdge::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RawAllocatorDumpEdge::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawAllocatorDumpEdge_UnserializedMessageContext<
            UserType, RawAllocatorDumpEdge::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEdge::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t source_id;
  
  uint64_t target_id;
  
  int32_t importance;
  
  bool overridable;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};














class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) AggregatedMetrics {
 public:
  using DataView = AggregatedMetricsDataView;
  using Data_ = internal::AggregatedMetrics_Data;

  template <typename... Args>
  static AggregatedMetricsPtr New(Args&&... args) {
    return AggregatedMetricsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AggregatedMetricsPtr From(const U& u) {
    return mojo::TypeConverter<AggregatedMetricsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AggregatedMetrics>::Convert(*this);
  }


  AggregatedMetrics();

  explicit AggregatedMetrics(
      uint32_t native_library_resident_kb);

  ~AggregatedMetrics();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AggregatedMetricsPtr>
  AggregatedMetricsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AggregatedMetrics>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AggregatedMetrics::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AggregatedMetrics::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AggregatedMetrics_UnserializedMessageContext<
            UserType, AggregatedMetrics::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AggregatedMetrics::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AggregatedMetrics::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AggregatedMetrics_UnserializedMessageContext<
            UserType, AggregatedMetrics::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AggregatedMetrics::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t native_library_resident_kb;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RawAllocatorDumpEntryValue {
 public:
  using DataView = RawAllocatorDumpEntryValueDataView;
  using Data_ = internal::RawAllocatorDumpEntryValue_Data;
  using Tag = Data_::RawAllocatorDumpEntryValue_Tag;

  static RawAllocatorDumpEntryValuePtr New() {
    return RawAllocatorDumpEntryValuePtr(base::in_place);
  }
  // Construct an instance holding |value_uint64|.
  static RawAllocatorDumpEntryValuePtr
  NewValueUint64(
      uint64_t value_uint64) {
    auto result = RawAllocatorDumpEntryValuePtr(base::in_place);
    result->set_value_uint64(std::move(value_uint64));
    return result;
  }
  // Construct an instance holding |value_string|.
  static RawAllocatorDumpEntryValuePtr
  NewValueString(
      const std::string& value_string) {
    auto result = RawAllocatorDumpEntryValuePtr(base::in_place);
    result->set_value_string(std::move(value_string));
    return result;
  }

  template <typename U>
  static RawAllocatorDumpEntryValuePtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpEntryValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDumpEntryValue>::Convert(*this);
  }

  RawAllocatorDumpEntryValue();
  ~RawAllocatorDumpEntryValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RawAllocatorDumpEntryValuePtr>
  RawAllocatorDumpEntryValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDumpEntryValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_value_uint64() const { return tag_ == Tag::VALUE_UINT64; }

  
  uint64_t get_value_uint64() const {
    DCHECK(tag_ == Tag::VALUE_UINT64);
    return data_.value_uint64;
  }

  
  void set_value_uint64(
      uint64_t value_uint64);
  
  bool is_value_string() const { return tag_ == Tag::VALUE_STRING; }

  
  std::string& get_value_string() const {
    DCHECK(tag_ == Tag::VALUE_STRING);
    return *(data_.value_string);
  }

  
  void set_value_string(
      const std::string& value_string);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDumpEntryValue::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEntryValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    uint64_t value_uint64;
    std::string* value_string;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};







class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RawAllocatorDumpEntry {
 public:
  using DataView = RawAllocatorDumpEntryDataView;
  using Data_ = internal::RawAllocatorDumpEntry_Data;

  template <typename... Args>
  static RawAllocatorDumpEntryPtr New(Args&&... args) {
    return RawAllocatorDumpEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawAllocatorDumpEntryPtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDumpEntry>::Convert(*this);
  }


  RawAllocatorDumpEntry();

  RawAllocatorDumpEntry(
      const std::string& name,
      const std::string& units,
      RawAllocatorDumpEntryValuePtr value);

  ~RawAllocatorDumpEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawAllocatorDumpEntryPtr>
  RawAllocatorDumpEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDumpEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawAllocatorDumpEntry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDumpEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawAllocatorDumpEntry_UnserializedMessageContext<
            UserType, RawAllocatorDumpEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RawAllocatorDumpEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawAllocatorDumpEntry_UnserializedMessageContext<
            UserType, RawAllocatorDumpEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawAllocatorDumpEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  std::string units;
  
  RawAllocatorDumpEntryValuePtr value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawAllocatorDumpEntry);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RawAllocatorDump {
 public:
  using DataView = RawAllocatorDumpDataView;
  using Data_ = internal::RawAllocatorDump_Data;

  template <typename... Args>
  static RawAllocatorDumpPtr New(Args&&... args) {
    return RawAllocatorDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawAllocatorDumpPtr From(const U& u) {
    return mojo::TypeConverter<RawAllocatorDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawAllocatorDump>::Convert(*this);
  }


  RawAllocatorDump();

  RawAllocatorDump(
      uint64_t id,
      const std::string& absolute_name,
      bool weak,
      base::trace_event::MemoryDumpLevelOfDetail level_of_detail,
      std::vector<base::trace_event::MemoryAllocatorDump::Entry> entries);

  ~RawAllocatorDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawAllocatorDumpPtr>
  RawAllocatorDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawAllocatorDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawAllocatorDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawAllocatorDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawAllocatorDump_UnserializedMessageContext<
            UserType, RawAllocatorDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawAllocatorDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RawAllocatorDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawAllocatorDump_UnserializedMessageContext<
            UserType, RawAllocatorDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawAllocatorDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t id;
  
  std::string absolute_name;
  
  bool weak;
  
  base::trace_event::MemoryDumpLevelOfDetail level_of_detail;
  
  std::vector<base::trace_event::MemoryAllocatorDump::Entry> entries;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawAllocatorDump);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RawProcessMemoryDump {
 public:
  using DataView = RawProcessMemoryDumpDataView;
  using Data_ = internal::RawProcessMemoryDump_Data;

  template <typename... Args>
  static RawProcessMemoryDumpPtr New(Args&&... args) {
    return RawProcessMemoryDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawProcessMemoryDumpPtr From(const U& u) {
    return mojo::TypeConverter<RawProcessMemoryDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawProcessMemoryDump>::Convert(*this);
  }


  RawProcessMemoryDump();

  RawProcessMemoryDump(
      base::trace_event::MemoryDumpLevelOfDetail level_of_detail,
      const std::vector<base::trace_event::ProcessMemoryDump::MemoryAllocatorDumpEdge>& allocator_dump_edges,
      std::vector<std::unique_ptr<base::trace_event::MemoryAllocatorDump>> allocator_dumps);

  ~RawProcessMemoryDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawProcessMemoryDumpPtr>
  RawProcessMemoryDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawProcessMemoryDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawProcessMemoryDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawProcessMemoryDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawProcessMemoryDump_UnserializedMessageContext<
            UserType, RawProcessMemoryDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawProcessMemoryDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RawProcessMemoryDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawProcessMemoryDump_UnserializedMessageContext<
            UserType, RawProcessMemoryDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawProcessMemoryDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::trace_event::MemoryDumpLevelOfDetail level_of_detail;
  
  std::vector<base::trace_event::ProcessMemoryDump::MemoryAllocatorDumpEdge> allocator_dump_edges;
  
  std::vector<std::unique_ptr<base::trace_event::MemoryAllocatorDump>> allocator_dumps;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawProcessMemoryDump);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) VmRegion {
 public:
  using DataView = VmRegionDataView;
  using Data_ = internal::VmRegion_Data;
  
  static constexpr uint32_t kProtectionFlagsRead = 4U;
  
  static constexpr uint32_t kProtectionFlagsWrite = 2U;
  
  static constexpr uint32_t kProtectionFlagsExec = 1U;
  
  static constexpr uint32_t kProtectionFlagsMayshare = 128U;

  template <typename... Args>
  static VmRegionPtr New(Args&&... args) {
    return VmRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VmRegionPtr From(const U& u) {
    return mojo::TypeConverter<VmRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VmRegion>::Convert(*this);
  }


  VmRegion();

  VmRegion(
      uint64_t start_address,
      uint64_t size_in_bytes,
      uint64_t module_timestamp,
      const std::string& module_debugid,
      const std::string& module_debug_path,
      uint32_t protection_flags,
      const std::string& mapped_file,
      uint64_t byte_stats_private_dirty_resident,
      uint64_t byte_stats_private_clean_resident,
      uint64_t byte_stats_shared_dirty_resident,
      uint64_t byte_stats_shared_clean_resident,
      uint64_t byte_stats_swapped,
      uint64_t byte_stats_proportional_resident);

  ~VmRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VmRegionPtr>
  VmRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VmRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VmRegion::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VmRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VmRegion_UnserializedMessageContext<
            UserType, VmRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VmRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VmRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VmRegion_UnserializedMessageContext<
            UserType, VmRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VmRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t start_address;
  
  uint64_t size_in_bytes;
  
  uint64_t module_timestamp;
  
  std::string module_debugid;
  
  std::string module_debug_path;
  
  uint32_t protection_flags;
  
  std::string mapped_file;
  
  uint64_t byte_stats_private_dirty_resident;
  
  uint64_t byte_stats_private_clean_resident;
  
  uint64_t byte_stats_shared_dirty_resident;
  
  uint64_t byte_stats_shared_clean_resident;
  
  uint64_t byte_stats_swapped;
  
  uint64_t byte_stats_proportional_resident;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) PlatformPrivateFootprint {
 public:
  using DataView = PlatformPrivateFootprintDataView;
  using Data_ = internal::PlatformPrivateFootprint_Data;

  template <typename... Args>
  static PlatformPrivateFootprintPtr New(Args&&... args) {
    return PlatformPrivateFootprintPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PlatformPrivateFootprintPtr From(const U& u) {
    return mojo::TypeConverter<PlatformPrivateFootprintPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PlatformPrivateFootprint>::Convert(*this);
  }


  PlatformPrivateFootprint();

  PlatformPrivateFootprint(
      uint64_t phys_footprint_bytes,
      uint64_t internal_bytes,
      uint64_t compressed_bytes,
      uint64_t rss_anon_bytes,
      uint64_t vm_swap_bytes,
      uint64_t private_bytes);

  ~PlatformPrivateFootprint();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PlatformPrivateFootprintPtr>
  PlatformPrivateFootprintPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PlatformPrivateFootprint>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PlatformPrivateFootprint::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PlatformPrivateFootprint::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PlatformPrivateFootprint_UnserializedMessageContext<
            UserType, PlatformPrivateFootprint::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PlatformPrivateFootprint::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PlatformPrivateFootprint::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PlatformPrivateFootprint_UnserializedMessageContext<
            UserType, PlatformPrivateFootprint::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PlatformPrivateFootprint::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t phys_footprint_bytes;
  
  uint64_t internal_bytes;
  
  uint64_t compressed_bytes;
  
  uint64_t rss_anon_bytes;
  
  uint64_t vm_swap_bytes;
  
  uint64_t private_bytes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) RawOSMemDump {
 public:
  using DataView = RawOSMemDumpDataView;
  using Data_ = internal::RawOSMemDump_Data;

  template <typename... Args>
  static RawOSMemDumpPtr New(Args&&... args) {
    return RawOSMemDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RawOSMemDumpPtr From(const U& u) {
    return mojo::TypeConverter<RawOSMemDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RawOSMemDump>::Convert(*this);
  }


  RawOSMemDump();

  RawOSMemDump(
      uint32_t resident_set_kb,
      uint32_t peak_resident_set_kb,
      bool is_peak_rss_resettable,
      PlatformPrivateFootprintPtr platform_private_footprint,
      std::vector<VmRegionPtr> memory_maps,
      const std::vector<uint8_t>& native_library_pages_bitmap);

  ~RawOSMemDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RawOSMemDumpPtr>
  RawOSMemDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RawOSMemDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RawOSMemDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RawOSMemDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RawOSMemDump_UnserializedMessageContext<
            UserType, RawOSMemDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RawOSMemDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RawOSMemDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RawOSMemDump_UnserializedMessageContext<
            UserType, RawOSMemDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RawOSMemDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t resident_set_kb;
  
  uint32_t peak_resident_set_kb;
  
  bool is_peak_rss_resettable;
  
  PlatformPrivateFootprintPtr platform_private_footprint;
  
  std::vector<VmRegionPtr> memory_maps;
  
  std::vector<uint8_t> native_library_pages_bitmap;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RawOSMemDump);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) OSMemDump {
 public:
  using DataView = OSMemDumpDataView;
  using Data_ = internal::OSMemDump_Data;

  template <typename... Args>
  static OSMemDumpPtr New(Args&&... args) {
    return OSMemDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OSMemDumpPtr From(const U& u) {
    return mojo::TypeConverter<OSMemDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OSMemDump>::Convert(*this);
  }


  OSMemDump();

  OSMemDump(
      uint32_t resident_set_kb,
      uint32_t peak_resident_set_kb,
      bool is_peak_rss_resettable,
      uint32_t private_footprint_kb,
      uint32_t shared_footprint_kb,
      uint32_t private_footprint_swap_kb);

  ~OSMemDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OSMemDumpPtr>
  OSMemDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OSMemDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        OSMemDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OSMemDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::OSMemDump_UnserializedMessageContext<
            UserType, OSMemDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<OSMemDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return OSMemDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::OSMemDump_UnserializedMessageContext<
            UserType, OSMemDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<OSMemDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t resident_set_kb;
  
  uint32_t peak_resident_set_kb;
  
  bool is_peak_rss_resettable;
  
  uint32_t private_footprint_kb;
  
  uint32_t shared_footprint_kb;
  
  uint32_t private_footprint_swap_kb;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) AllocatorMemDump {
 public:
  using DataView = AllocatorMemDumpDataView;
  using Data_ = internal::AllocatorMemDump_Data;

  template <typename... Args>
  static AllocatorMemDumpPtr New(Args&&... args) {
    return AllocatorMemDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AllocatorMemDumpPtr From(const U& u) {
    return mojo::TypeConverter<AllocatorMemDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AllocatorMemDump>::Convert(*this);
  }


  AllocatorMemDump();

  explicit AllocatorMemDump(
      const base::flat_map<std::string, uint64_t>& numeric_entries);

  ~AllocatorMemDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AllocatorMemDumpPtr>
  AllocatorMemDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AllocatorMemDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AllocatorMemDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AllocatorMemDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AllocatorMemDump_UnserializedMessageContext<
            UserType, AllocatorMemDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AllocatorMemDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AllocatorMemDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AllocatorMemDump_UnserializedMessageContext<
            UserType, AllocatorMemDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AllocatorMemDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::flat_map<std::string, uint64_t> numeric_entries;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ProcessMemoryDump {
 public:
  using DataView = ProcessMemoryDumpDataView;
  using Data_ = internal::ProcessMemoryDump_Data;

  template <typename... Args>
  static ProcessMemoryDumpPtr New(Args&&... args) {
    return ProcessMemoryDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProcessMemoryDumpPtr From(const U& u) {
    return mojo::TypeConverter<ProcessMemoryDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProcessMemoryDump>::Convert(*this);
  }


  ProcessMemoryDump();

  ProcessMemoryDump(
      ProcessType process_type,
      OSMemDumpPtr os_dump,
      base::flat_map<std::string, AllocatorMemDumpPtr> chrome_allocator_dumps,
      base::ProcessId pid,
      const std::vector<std::string>& service_names);

  ~ProcessMemoryDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProcessMemoryDumpPtr>
  ProcessMemoryDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProcessMemoryDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProcessMemoryDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProcessMemoryDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProcessMemoryDump_UnserializedMessageContext<
            UserType, ProcessMemoryDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProcessMemoryDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProcessMemoryDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProcessMemoryDump_UnserializedMessageContext<
            UserType, ProcessMemoryDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProcessMemoryDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ProcessType process_type;
  
  OSMemDumpPtr os_dump;
  
  base::flat_map<std::string, AllocatorMemDumpPtr> chrome_allocator_dumps;
  
  base::ProcessId pid;
  
  std::vector<std::string> service_names;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ProcessMemoryDump);
};






class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) GlobalMemoryDump {
 public:
  using DataView = GlobalMemoryDumpDataView;
  using Data_ = internal::GlobalMemoryDump_Data;

  template <typename... Args>
  static GlobalMemoryDumpPtr New(Args&&... args) {
    return GlobalMemoryDumpPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GlobalMemoryDumpPtr From(const U& u) {
    return mojo::TypeConverter<GlobalMemoryDumpPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GlobalMemoryDump>::Convert(*this);
  }


  GlobalMemoryDump();

  GlobalMemoryDump(
      base::TimeTicks start_time,
      std::vector<ProcessMemoryDumpPtr> process_dumps,
      AggregatedMetricsPtr aggregated_metrics);

  ~GlobalMemoryDump();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GlobalMemoryDumpPtr>
  GlobalMemoryDumpPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GlobalMemoryDump>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GlobalMemoryDump::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GlobalMemoryDump::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GlobalMemoryDump_UnserializedMessageContext<
            UserType, GlobalMemoryDump::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GlobalMemoryDump::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GlobalMemoryDump::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GlobalMemoryDump_UnserializedMessageContext<
            UserType, GlobalMemoryDump::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GlobalMemoryDump::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeTicks start_time;
  
  std::vector<ProcessMemoryDumpPtr> process_dumps;
  
  AggregatedMetricsPtr aggregated_metrics;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GlobalMemoryDump);
};





class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfileResult {
 public:
  using DataView = HeapProfileResultDataView;
  using Data_ = internal::HeapProfileResult_Data;

  template <typename... Args>
  static HeapProfileResultPtr New(Args&&... args) {
    return HeapProfileResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HeapProfileResultPtr From(const U& u) {
    return mojo::TypeConverter<HeapProfileResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HeapProfileResult>::Convert(*this);
  }


  HeapProfileResult();

  HeapProfileResult(
      base::ProcessId pid,
      const std::string& json);

  ~HeapProfileResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HeapProfileResultPtr>
  HeapProfileResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HeapProfileResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HeapProfileResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HeapProfileResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HeapProfileResult_UnserializedMessageContext<
            UserType, HeapProfileResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HeapProfileResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HeapProfileResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HeapProfileResult_UnserializedMessageContext<
            UserType, HeapProfileResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HeapProfileResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::ProcessId pid;
  
  std::string json;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename UnionPtrType>
RawAllocatorDumpEntryValuePtr RawAllocatorDumpEntryValue::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::VALUE_UINT64:
      rv->set_value_uint64(mojo::Clone(data_.value_uint64));
      break;
    case Tag::VALUE_STRING:
      rv->set_value_string(mojo::Clone(*data_.value_string));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDumpEntryValue>::value>::type*>
bool RawAllocatorDumpEntryValue::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::VALUE_UINT64:
      return mojo::Equals(data_.value_uint64, other.data_.value_uint64);
    case Tag::VALUE_STRING:
      return mojo::Equals(*(data_.value_string), *(other.data_.value_string));
  }

  return false;
}
template <typename StructPtrType>
RequestArgsPtr RequestArgs::Clone() const {
  return New(
      mojo::Clone(dump_guid),
      mojo::Clone(dump_type),
      mojo::Clone(level_of_detail)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RequestArgs>::value>::type*>
bool RequestArgs::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dump_guid, other_struct.dump_guid))
    return false;
  if (!mojo::Equals(this->dump_type, other_struct.dump_type))
    return false;
  if (!mojo::Equals(this->level_of_detail, other_struct.level_of_detail))
    return false;
  return true;
}
template <typename StructPtrType>
RawAllocatorDumpEdgePtr RawAllocatorDumpEdge::Clone() const {
  return New(
      mojo::Clone(source_id),
      mojo::Clone(target_id),
      mojo::Clone(importance),
      mojo::Clone(overridable)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDumpEdge>::value>::type*>
bool RawAllocatorDumpEdge::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->target_id, other_struct.target_id))
    return false;
  if (!mojo::Equals(this->importance, other_struct.importance))
    return false;
  if (!mojo::Equals(this->overridable, other_struct.overridable))
    return false;
  return true;
}
template <typename StructPtrType>
RawAllocatorDumpEntryPtr RawAllocatorDumpEntry::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(units),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDumpEntry>::value>::type*>
bool RawAllocatorDumpEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->units, other_struct.units))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
RawAllocatorDumpPtr RawAllocatorDump::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(absolute_name),
      mojo::Clone(weak),
      mojo::Clone(level_of_detail),
      mojo::Clone(entries)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawAllocatorDump>::value>::type*>
bool RawAllocatorDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->absolute_name, other_struct.absolute_name))
    return false;
  if (!mojo::Equals(this->weak, other_struct.weak))
    return false;
  if (!mojo::Equals(this->level_of_detail, other_struct.level_of_detail))
    return false;
  if (!mojo::Equals(this->entries, other_struct.entries))
    return false;
  return true;
}
template <typename StructPtrType>
RawProcessMemoryDumpPtr RawProcessMemoryDump::Clone() const {
  return New(
      mojo::Clone(level_of_detail),
      mojo::Clone(allocator_dump_edges),
      mojo::Clone(allocator_dumps)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawProcessMemoryDump>::value>::type*>
bool RawProcessMemoryDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->level_of_detail, other_struct.level_of_detail))
    return false;
  if (!mojo::Equals(this->allocator_dump_edges, other_struct.allocator_dump_edges))
    return false;
  if (!mojo::Equals(this->allocator_dumps, other_struct.allocator_dumps))
    return false;
  return true;
}
template <typename StructPtrType>
VmRegionPtr VmRegion::Clone() const {
  return New(
      mojo::Clone(start_address),
      mojo::Clone(size_in_bytes),
      mojo::Clone(module_timestamp),
      mojo::Clone(module_debugid),
      mojo::Clone(module_debug_path),
      mojo::Clone(protection_flags),
      mojo::Clone(mapped_file),
      mojo::Clone(byte_stats_private_dirty_resident),
      mojo::Clone(byte_stats_private_clean_resident),
      mojo::Clone(byte_stats_shared_dirty_resident),
      mojo::Clone(byte_stats_shared_clean_resident),
      mojo::Clone(byte_stats_swapped),
      mojo::Clone(byte_stats_proportional_resident)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VmRegion>::value>::type*>
bool VmRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start_address, other_struct.start_address))
    return false;
  if (!mojo::Equals(this->size_in_bytes, other_struct.size_in_bytes))
    return false;
  if (!mojo::Equals(this->module_timestamp, other_struct.module_timestamp))
    return false;
  if (!mojo::Equals(this->module_debugid, other_struct.module_debugid))
    return false;
  if (!mojo::Equals(this->module_debug_path, other_struct.module_debug_path))
    return false;
  if (!mojo::Equals(this->protection_flags, other_struct.protection_flags))
    return false;
  if (!mojo::Equals(this->mapped_file, other_struct.mapped_file))
    return false;
  if (!mojo::Equals(this->byte_stats_private_dirty_resident, other_struct.byte_stats_private_dirty_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_private_clean_resident, other_struct.byte_stats_private_clean_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_shared_dirty_resident, other_struct.byte_stats_shared_dirty_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_shared_clean_resident, other_struct.byte_stats_shared_clean_resident))
    return false;
  if (!mojo::Equals(this->byte_stats_swapped, other_struct.byte_stats_swapped))
    return false;
  if (!mojo::Equals(this->byte_stats_proportional_resident, other_struct.byte_stats_proportional_resident))
    return false;
  return true;
}
template <typename StructPtrType>
PlatformPrivateFootprintPtr PlatformPrivateFootprint::Clone() const {
  return New(
      mojo::Clone(phys_footprint_bytes),
      mojo::Clone(internal_bytes),
      mojo::Clone(compressed_bytes),
      mojo::Clone(rss_anon_bytes),
      mojo::Clone(vm_swap_bytes),
      mojo::Clone(private_bytes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PlatformPrivateFootprint>::value>::type*>
bool PlatformPrivateFootprint::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->phys_footprint_bytes, other_struct.phys_footprint_bytes))
    return false;
  if (!mojo::Equals(this->internal_bytes, other_struct.internal_bytes))
    return false;
  if (!mojo::Equals(this->compressed_bytes, other_struct.compressed_bytes))
    return false;
  if (!mojo::Equals(this->rss_anon_bytes, other_struct.rss_anon_bytes))
    return false;
  if (!mojo::Equals(this->vm_swap_bytes, other_struct.vm_swap_bytes))
    return false;
  if (!mojo::Equals(this->private_bytes, other_struct.private_bytes))
    return false;
  return true;
}
template <typename StructPtrType>
RawOSMemDumpPtr RawOSMemDump::Clone() const {
  return New(
      mojo::Clone(resident_set_kb),
      mojo::Clone(peak_resident_set_kb),
      mojo::Clone(is_peak_rss_resettable),
      mojo::Clone(platform_private_footprint),
      mojo::Clone(memory_maps),
      mojo::Clone(native_library_pages_bitmap)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RawOSMemDump>::value>::type*>
bool RawOSMemDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resident_set_kb, other_struct.resident_set_kb))
    return false;
  if (!mojo::Equals(this->peak_resident_set_kb, other_struct.peak_resident_set_kb))
    return false;
  if (!mojo::Equals(this->is_peak_rss_resettable, other_struct.is_peak_rss_resettable))
    return false;
  if (!mojo::Equals(this->platform_private_footprint, other_struct.platform_private_footprint))
    return false;
  if (!mojo::Equals(this->memory_maps, other_struct.memory_maps))
    return false;
  if (!mojo::Equals(this->native_library_pages_bitmap, other_struct.native_library_pages_bitmap))
    return false;
  return true;
}
template <typename StructPtrType>
OSMemDumpPtr OSMemDump::Clone() const {
  return New(
      mojo::Clone(resident_set_kb),
      mojo::Clone(peak_resident_set_kb),
      mojo::Clone(is_peak_rss_resettable),
      mojo::Clone(private_footprint_kb),
      mojo::Clone(shared_footprint_kb),
      mojo::Clone(private_footprint_swap_kb)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OSMemDump>::value>::type*>
bool OSMemDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resident_set_kb, other_struct.resident_set_kb))
    return false;
  if (!mojo::Equals(this->peak_resident_set_kb, other_struct.peak_resident_set_kb))
    return false;
  if (!mojo::Equals(this->is_peak_rss_resettable, other_struct.is_peak_rss_resettable))
    return false;
  if (!mojo::Equals(this->private_footprint_kb, other_struct.private_footprint_kb))
    return false;
  if (!mojo::Equals(this->shared_footprint_kb, other_struct.shared_footprint_kb))
    return false;
  if (!mojo::Equals(this->private_footprint_swap_kb, other_struct.private_footprint_swap_kb))
    return false;
  return true;
}
template <typename StructPtrType>
AllocatorMemDumpPtr AllocatorMemDump::Clone() const {
  return New(
      mojo::Clone(numeric_entries)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AllocatorMemDump>::value>::type*>
bool AllocatorMemDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->numeric_entries, other_struct.numeric_entries))
    return false;
  return true;
}
template <typename StructPtrType>
ProcessMemoryDumpPtr ProcessMemoryDump::Clone() const {
  return New(
      mojo::Clone(process_type),
      mojo::Clone(os_dump),
      mojo::Clone(chrome_allocator_dumps),
      mojo::Clone(pid),
      mojo::Clone(service_names)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProcessMemoryDump>::value>::type*>
bool ProcessMemoryDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_type, other_struct.process_type))
    return false;
  if (!mojo::Equals(this->os_dump, other_struct.os_dump))
    return false;
  if (!mojo::Equals(this->chrome_allocator_dumps, other_struct.chrome_allocator_dumps))
    return false;
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  if (!mojo::Equals(this->service_names, other_struct.service_names))
    return false;
  return true;
}
template <typename StructPtrType>
AggregatedMetricsPtr AggregatedMetrics::Clone() const {
  return New(
      mojo::Clone(native_library_resident_kb)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AggregatedMetrics>::value>::type*>
bool AggregatedMetrics::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->native_library_resident_kb, other_struct.native_library_resident_kb))
    return false;
  return true;
}
template <typename StructPtrType>
GlobalMemoryDumpPtr GlobalMemoryDump::Clone() const {
  return New(
      mojo::Clone(start_time),
      mojo::Clone(process_dumps),
      mojo::Clone(aggregated_metrics)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GlobalMemoryDump>::value>::type*>
bool GlobalMemoryDump::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start_time, other_struct.start_time))
    return false;
  if (!mojo::Equals(this->process_dumps, other_struct.process_dumps))
    return false;
  if (!mojo::Equals(this->aggregated_metrics, other_struct.aggregated_metrics))
    return false;
  return true;
}
template <typename StructPtrType>
HeapProfileResultPtr HeapProfileResult::Clone() const {
  return New(
      mojo::Clone(pid),
      mojo::Clone(json)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HeapProfileResult>::value>::type*>
bool HeapProfileResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pid, other_struct.pid))
    return false;
  if (!mojo::Equals(this->json, other_struct.json))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace memory_instrumentation

namespace mojo {


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::RequestArgs::DataView,
                                         ::memory_instrumentation::mojom::RequestArgsPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RequestArgsPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RequestArgsPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::RequestArgs::dump_guid) dump_guid(
      const ::memory_instrumentation::mojom::RequestArgsPtr& input) {
    return input->dump_guid;
  }

  static decltype(::memory_instrumentation::mojom::RequestArgs::dump_type) dump_type(
      const ::memory_instrumentation::mojom::RequestArgsPtr& input) {
    return input->dump_type;
  }

  static decltype(::memory_instrumentation::mojom::RequestArgs::level_of_detail) level_of_detail(
      const ::memory_instrumentation::mojom::RequestArgsPtr& input) {
    return input->level_of_detail;
  }

  static bool Read(::memory_instrumentation::mojom::RequestArgs::DataView input, ::memory_instrumentation::mojom::RequestArgsPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEdge::DataView,
                                         ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDumpEdge::source_id) source_id(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr& input) {
    return input->source_id;
  }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDumpEdge::target_id) target_id(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr& input) {
    return input->target_id;
  }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDumpEdge::importance) importance(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr& input) {
    return input->importance;
  }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDumpEdge::overridable) overridable(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr& input) {
    return input->overridable;
  }

  static bool Read(::memory_instrumentation::mojom::RawAllocatorDumpEdge::DataView input, ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntry::DataView,
                                         ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::RawAllocatorDumpEntry::name)& name(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr& input) {
    return input->name;
  }

  static const decltype(::memory_instrumentation::mojom::RawAllocatorDumpEntry::units)& units(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr& input) {
    return input->units;
  }

  static const decltype(::memory_instrumentation::mojom::RawAllocatorDumpEntry::value)& value(
      const ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr& input) {
    return input->value;
  }

  static bool Read(::memory_instrumentation::mojom::RawAllocatorDumpEntry::DataView input, ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::RawAllocatorDump::DataView,
                                         ::memory_instrumentation::mojom::RawAllocatorDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RawAllocatorDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RawAllocatorDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDump::id) id(
      const ::memory_instrumentation::mojom::RawAllocatorDumpPtr& input) {
    return input->id;
  }

  static const decltype(::memory_instrumentation::mojom::RawAllocatorDump::absolute_name)& absolute_name(
      const ::memory_instrumentation::mojom::RawAllocatorDumpPtr& input) {
    return input->absolute_name;
  }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDump::weak) weak(
      const ::memory_instrumentation::mojom::RawAllocatorDumpPtr& input) {
    return input->weak;
  }

  static decltype(::memory_instrumentation::mojom::RawAllocatorDump::level_of_detail) level_of_detail(
      const ::memory_instrumentation::mojom::RawAllocatorDumpPtr& input) {
    return input->level_of_detail;
  }

  static const decltype(::memory_instrumentation::mojom::RawAllocatorDump::entries)& entries(
      const ::memory_instrumentation::mojom::RawAllocatorDumpPtr& input) {
    return input->entries;
  }

  static bool Read(::memory_instrumentation::mojom::RawAllocatorDump::DataView input, ::memory_instrumentation::mojom::RawAllocatorDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::RawProcessMemoryDump::DataView,
                                         ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RawProcessMemoryDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::RawProcessMemoryDump::level_of_detail) level_of_detail(
      const ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr& input) {
    return input->level_of_detail;
  }

  static const decltype(::memory_instrumentation::mojom::RawProcessMemoryDump::allocator_dump_edges)& allocator_dump_edges(
      const ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr& input) {
    return input->allocator_dump_edges;
  }

  static const decltype(::memory_instrumentation::mojom::RawProcessMemoryDump::allocator_dumps)& allocator_dumps(
      const ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr& input) {
    return input->allocator_dumps;
  }

  static bool Read(::memory_instrumentation::mojom::RawProcessMemoryDump::DataView input, ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::VmRegion::DataView,
                                         ::memory_instrumentation::mojom::VmRegionPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::VmRegionPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::VmRegionPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::VmRegion::start_address) start_address(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->start_address;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::size_in_bytes) size_in_bytes(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->size_in_bytes;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::module_timestamp) module_timestamp(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->module_timestamp;
  }

  static const decltype(::memory_instrumentation::mojom::VmRegion::module_debugid)& module_debugid(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->module_debugid;
  }

  static const decltype(::memory_instrumentation::mojom::VmRegion::module_debug_path)& module_debug_path(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->module_debug_path;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::protection_flags) protection_flags(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->protection_flags;
  }

  static const decltype(::memory_instrumentation::mojom::VmRegion::mapped_file)& mapped_file(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->mapped_file;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::byte_stats_private_dirty_resident) byte_stats_private_dirty_resident(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->byte_stats_private_dirty_resident;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::byte_stats_private_clean_resident) byte_stats_private_clean_resident(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->byte_stats_private_clean_resident;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::byte_stats_shared_dirty_resident) byte_stats_shared_dirty_resident(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->byte_stats_shared_dirty_resident;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::byte_stats_shared_clean_resident) byte_stats_shared_clean_resident(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->byte_stats_shared_clean_resident;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::byte_stats_swapped) byte_stats_swapped(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->byte_stats_swapped;
  }

  static decltype(::memory_instrumentation::mojom::VmRegion::byte_stats_proportional_resident) byte_stats_proportional_resident(
      const ::memory_instrumentation::mojom::VmRegionPtr& input) {
    return input->byte_stats_proportional_resident;
  }

  static bool Read(::memory_instrumentation::mojom::VmRegion::DataView input, ::memory_instrumentation::mojom::VmRegionPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::PlatformPrivateFootprint::DataView,
                                         ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::PlatformPrivateFootprintPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::PlatformPrivateFootprint::phys_footprint_bytes) phys_footprint_bytes(
      const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) {
    return input->phys_footprint_bytes;
  }

  static decltype(::memory_instrumentation::mojom::PlatformPrivateFootprint::internal_bytes) internal_bytes(
      const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) {
    return input->internal_bytes;
  }

  static decltype(::memory_instrumentation::mojom::PlatformPrivateFootprint::compressed_bytes) compressed_bytes(
      const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) {
    return input->compressed_bytes;
  }

  static decltype(::memory_instrumentation::mojom::PlatformPrivateFootprint::rss_anon_bytes) rss_anon_bytes(
      const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) {
    return input->rss_anon_bytes;
  }

  static decltype(::memory_instrumentation::mojom::PlatformPrivateFootprint::vm_swap_bytes) vm_swap_bytes(
      const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) {
    return input->vm_swap_bytes;
  }

  static decltype(::memory_instrumentation::mojom::PlatformPrivateFootprint::private_bytes) private_bytes(
      const ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr& input) {
    return input->private_bytes;
  }

  static bool Read(::memory_instrumentation::mojom::PlatformPrivateFootprint::DataView input, ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::RawOSMemDump::DataView,
                                         ::memory_instrumentation::mojom::RawOSMemDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RawOSMemDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::RawOSMemDump::resident_set_kb) resident_set_kb(
      const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) {
    return input->resident_set_kb;
  }

  static decltype(::memory_instrumentation::mojom::RawOSMemDump::peak_resident_set_kb) peak_resident_set_kb(
      const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) {
    return input->peak_resident_set_kb;
  }

  static decltype(::memory_instrumentation::mojom::RawOSMemDump::is_peak_rss_resettable) is_peak_rss_resettable(
      const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) {
    return input->is_peak_rss_resettable;
  }

  static const decltype(::memory_instrumentation::mojom::RawOSMemDump::platform_private_footprint)& platform_private_footprint(
      const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) {
    return input->platform_private_footprint;
  }

  static const decltype(::memory_instrumentation::mojom::RawOSMemDump::memory_maps)& memory_maps(
      const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) {
    return input->memory_maps;
  }

  static const decltype(::memory_instrumentation::mojom::RawOSMemDump::native_library_pages_bitmap)& native_library_pages_bitmap(
      const ::memory_instrumentation::mojom::RawOSMemDumpPtr& input) {
    return input->native_library_pages_bitmap;
  }

  static bool Read(::memory_instrumentation::mojom::RawOSMemDump::DataView input, ::memory_instrumentation::mojom::RawOSMemDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::OSMemDump::DataView,
                                         ::memory_instrumentation::mojom::OSMemDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::OSMemDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::OSMemDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::OSMemDump::resident_set_kb) resident_set_kb(
      const ::memory_instrumentation::mojom::OSMemDumpPtr& input) {
    return input->resident_set_kb;
  }

  static decltype(::memory_instrumentation::mojom::OSMemDump::peak_resident_set_kb) peak_resident_set_kb(
      const ::memory_instrumentation::mojom::OSMemDumpPtr& input) {
    return input->peak_resident_set_kb;
  }

  static decltype(::memory_instrumentation::mojom::OSMemDump::is_peak_rss_resettable) is_peak_rss_resettable(
      const ::memory_instrumentation::mojom::OSMemDumpPtr& input) {
    return input->is_peak_rss_resettable;
  }

  static decltype(::memory_instrumentation::mojom::OSMemDump::private_footprint_kb) private_footprint_kb(
      const ::memory_instrumentation::mojom::OSMemDumpPtr& input) {
    return input->private_footprint_kb;
  }

  static decltype(::memory_instrumentation::mojom::OSMemDump::shared_footprint_kb) shared_footprint_kb(
      const ::memory_instrumentation::mojom::OSMemDumpPtr& input) {
    return input->shared_footprint_kb;
  }

  static decltype(::memory_instrumentation::mojom::OSMemDump::private_footprint_swap_kb) private_footprint_swap_kb(
      const ::memory_instrumentation::mojom::OSMemDumpPtr& input) {
    return input->private_footprint_swap_kb;
  }

  static bool Read(::memory_instrumentation::mojom::OSMemDump::DataView input, ::memory_instrumentation::mojom::OSMemDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::AllocatorMemDump::DataView,
                                         ::memory_instrumentation::mojom::AllocatorMemDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::AllocatorMemDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::AllocatorMemDumpPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::AllocatorMemDump::numeric_entries)& numeric_entries(
      const ::memory_instrumentation::mojom::AllocatorMemDumpPtr& input) {
    return input->numeric_entries;
  }

  static bool Read(::memory_instrumentation::mojom::AllocatorMemDump::DataView input, ::memory_instrumentation::mojom::AllocatorMemDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::ProcessMemoryDump::DataView,
                                         ::memory_instrumentation::mojom::ProcessMemoryDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::ProcessMemoryDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::ProcessMemoryDumpPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::ProcessMemoryDump::process_type) process_type(
      const ::memory_instrumentation::mojom::ProcessMemoryDumpPtr& input) {
    return input->process_type;
  }

  static const decltype(::memory_instrumentation::mojom::ProcessMemoryDump::os_dump)& os_dump(
      const ::memory_instrumentation::mojom::ProcessMemoryDumpPtr& input) {
    return input->os_dump;
  }

  static const decltype(::memory_instrumentation::mojom::ProcessMemoryDump::chrome_allocator_dumps)& chrome_allocator_dumps(
      const ::memory_instrumentation::mojom::ProcessMemoryDumpPtr& input) {
    return input->chrome_allocator_dumps;
  }

  static const decltype(::memory_instrumentation::mojom::ProcessMemoryDump::pid)& pid(
      const ::memory_instrumentation::mojom::ProcessMemoryDumpPtr& input) {
    return input->pid;
  }

  static const decltype(::memory_instrumentation::mojom::ProcessMemoryDump::service_names)& service_names(
      const ::memory_instrumentation::mojom::ProcessMemoryDumpPtr& input) {
    return input->service_names;
  }

  static bool Read(::memory_instrumentation::mojom::ProcessMemoryDump::DataView input, ::memory_instrumentation::mojom::ProcessMemoryDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::AggregatedMetrics::DataView,
                                         ::memory_instrumentation::mojom::AggregatedMetricsPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::AggregatedMetricsPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::AggregatedMetricsPtr* output) { output->reset(); }

  static decltype(::memory_instrumentation::mojom::AggregatedMetrics::native_library_resident_kb) native_library_resident_kb(
      const ::memory_instrumentation::mojom::AggregatedMetricsPtr& input) {
    return input->native_library_resident_kb;
  }

  static bool Read(::memory_instrumentation::mojom::AggregatedMetrics::DataView input, ::memory_instrumentation::mojom::AggregatedMetricsPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::GlobalMemoryDump::DataView,
                                         ::memory_instrumentation::mojom::GlobalMemoryDumpPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::GlobalMemoryDumpPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::GlobalMemoryDumpPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::GlobalMemoryDump::start_time)& start_time(
      const ::memory_instrumentation::mojom::GlobalMemoryDumpPtr& input) {
    return input->start_time;
  }

  static const decltype(::memory_instrumentation::mojom::GlobalMemoryDump::process_dumps)& process_dumps(
      const ::memory_instrumentation::mojom::GlobalMemoryDumpPtr& input) {
    return input->process_dumps;
  }

  static const decltype(::memory_instrumentation::mojom::GlobalMemoryDump::aggregated_metrics)& aggregated_metrics(
      const ::memory_instrumentation::mojom::GlobalMemoryDumpPtr& input) {
    return input->aggregated_metrics;
  }

  static bool Read(::memory_instrumentation::mojom::GlobalMemoryDump::DataView input, ::memory_instrumentation::mojom::GlobalMemoryDumpPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) StructTraits<::memory_instrumentation::mojom::HeapProfileResult::DataView,
                                         ::memory_instrumentation::mojom::HeapProfileResultPtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::HeapProfileResultPtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::HeapProfileResultPtr* output) { output->reset(); }

  static const decltype(::memory_instrumentation::mojom::HeapProfileResult::pid)& pid(
      const ::memory_instrumentation::mojom::HeapProfileResultPtr& input) {
    return input->pid;
  }

  static  decltype(::memory_instrumentation::mojom::HeapProfileResult::json)& json(
       ::memory_instrumentation::mojom::HeapProfileResultPtr& input) {
    return input->json;
  }

  static bool Read(::memory_instrumentation::mojom::HeapProfileResult::DataView input, ::memory_instrumentation::mojom::HeapProfileResultPtr* output);
};


template <>
struct COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) UnionTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryValue::DataView,
                                        ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr> {
  static bool IsNull(const ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr& input) { return !input; }
  static void SetToNull(::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr* output) { output->reset(); }

  static ::memory_instrumentation::mojom::RawAllocatorDumpEntryValue::Tag GetTag(const ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr& input) {
    return input->which();
  }

  static  uint64_t value_uint64(const ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr& input) {
    return input->get_value_uint64();
  }

  static const std::string& value_string(const ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr& input) {
    return input->get_value_string();
  }

  static bool Read(::memory_instrumentation::mojom::RawAllocatorDumpEntryValue::DataView input, ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_H_