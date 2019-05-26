// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_H_

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
#include "services/tracing/public/mojom/traced_process.mojom-shared.h"
#include "services/tracing/public/mojom/traced_process.mojom-forward.h"
#include "services/tracing/public/mojom/perfetto_service.mojom-forward.h"
#include "services/tracing/public/mojom/tracing.mojom-forward.h"
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

class TracedProcessProxy;

template <typename ImplRefTraits>
class TracedProcessStub;

class TracedProcessRequestValidator;


class COMPONENT_EXPORT(TRACING_MOJOM) TracedProcess
    : public TracedProcessInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TracedProcessInterfaceBase;
  using Proxy_ = TracedProcessProxy;

  template <typename ImplRefTraits>
  using Stub_ = TracedProcessStub<ImplRefTraits>;

  using RequestValidator_ = TracedProcessRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectToTracingServiceMinVersion = 0,
  };
  virtual ~TracedProcess() {}

  
  virtual void ConnectToTracingService(ConnectToTracingRequestPtr request) = 0;
};

class COMPONENT_EXPORT(TRACING_MOJOM) TracedProcessProxy
    : public TracedProcess {
 public:
  using InterfaceType = TracedProcess;

  explicit TracedProcessProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToTracingService(ConnectToTracingRequestPtr request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracedProcessStubDispatch {
 public:
  static bool Accept(TracedProcess* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TracedProcess* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TracedProcess>>
class TracedProcessStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TracedProcessStub() {}
  ~TracedProcessStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TracedProcessStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TracedProcessStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) TracedProcessRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class COMPONENT_EXPORT(TRACING_MOJOM) ConnectToTracingRequest {
 public:
  using DataView = ConnectToTracingRequestDataView;
  using Data_ = internal::ConnectToTracingRequest_Data;

  template <typename... Args>
  static ConnectToTracingRequestPtr New(Args&&... args) {
    return ConnectToTracingRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ConnectToTracingRequestPtr From(const U& u) {
    return mojo::TypeConverter<ConnectToTracingRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ConnectToTracingRequest>::Convert(*this);
  }


  ConnectToTracingRequest();

  ConnectToTracingRequest(
      ::tracing::mojom::PerfettoServicePtrInfo perfetto_service,
      ::tracing::mojom::AgentRegistryPtrInfo agent_registry);

  ~ConnectToTracingRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ConnectToTracingRequestPtr>
  ConnectToTracingRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ConnectToTracingRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ConnectToTracingRequest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ConnectToTracingRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ConnectToTracingRequest_UnserializedMessageContext<
            UserType, ConnectToTracingRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ConnectToTracingRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ConnectToTracingRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ConnectToTracingRequest_UnserializedMessageContext<
            UserType, ConnectToTracingRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ConnectToTracingRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::tracing::mojom::PerfettoServicePtrInfo perfetto_service;
  
  ::tracing::mojom::AgentRegistryPtrInfo agent_registry;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ConnectToTracingRequest);
};

template <typename StructPtrType>
ConnectToTracingRequestPtr ConnectToTracingRequest::Clone() const {
  return New(
      mojo::Clone(perfetto_service),
      mojo::Clone(agent_registry)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ConnectToTracingRequest>::value>::type*>
bool ConnectToTracingRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->perfetto_service, other_struct.perfetto_service))
    return false;
  if (!mojo::Equals(this->agent_registry, other_struct.agent_registry))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace tracing

namespace mojo {


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ConnectToTracingRequest::DataView,
                                         ::tracing::mojom::ConnectToTracingRequestPtr> {
  static bool IsNull(const ::tracing::mojom::ConnectToTracingRequestPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ConnectToTracingRequestPtr* output) { output->reset(); }

  static  decltype(::tracing::mojom::ConnectToTracingRequest::perfetto_service)& perfetto_service(
       ::tracing::mojom::ConnectToTracingRequestPtr& input) {
    return input->perfetto_service;
  }

  static  decltype(::tracing::mojom::ConnectToTracingRequest::agent_registry)& agent_registry(
       ::tracing::mojom::ConnectToTracingRequestPtr& input) {
    return input->agent_registry;
  }

  static bool Read(::tracing::mojom::ConnectToTracingRequest::DataView input, ::tracing::mojom::ConnectToTracingRequestPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_H_